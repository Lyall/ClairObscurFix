#include "stdafx.h"

namespace Memory
{
    template<typename T>
    void Write(std::uint8_t* writeAddress, T value)
    {
        DWORD oldProtect;
        VirtualProtect((LPVOID)(writeAddress), sizeof(T), PAGE_EXECUTE_WRITECOPY, &oldProtect);
        *(reinterpret_cast<T*>(writeAddress)) = value;
        VirtualProtect((LPVOID)(writeAddress), sizeof(T), oldProtect, &oldProtect);
    }

    void PatchBytes(std::uint8_t* address, const char* pattern, unsigned int numBytes)
    {
        DWORD oldProtect;
        VirtualProtect((LPVOID)address, numBytes, PAGE_EXECUTE_READWRITE, &oldProtect);
        memcpy((LPVOID)address, pattern, numBytes);
        VirtualProtect((LPVOID)address, numBytes, oldProtect, &oldProtect);
    }

    std::vector<int> pattern_to_byte(const char* pattern)
    {
        auto bytes = std::vector<int>{};
        auto start = const_cast<char*>(pattern);
        auto end = const_cast<char*>(pattern) + strlen(pattern);

        for (auto current = start; current < end; ++current) {
            if (*current == '?') {
                ++current;
                if (*current == '?')
                    ++current;
                bytes.push_back(-1);
            }
            else {
                bytes.push_back(strtoul(current, &current, 16));
            }
        }
        return bytes;
    }

    std::uint8_t* PatternScan(void* module, const char* signature)
    {
        auto dosHeader = (PIMAGE_DOS_HEADER)module;
        auto ntHeaders = (PIMAGE_NT_HEADERS)((std::uint8_t*)module + dosHeader->e_lfanew);

        auto patternBytes = pattern_to_byte(signature);
        auto s = patternBytes.size();
        auto d = patternBytes.data();

        auto section = IMAGE_FIRST_SECTION(ntHeaders);
        for (unsigned i = 0; i < ntHeaders->FileHeader.NumberOfSections; ++i, ++section) {
            DWORD characteristics = section->Characteristics;

            bool isReadable = (characteristics & IMAGE_SCN_MEM_READ);
            bool isExecutable = (characteristics & IMAGE_SCN_MEM_EXECUTE);

            if (!(isReadable || isExecutable))
                continue;

            auto sectionStart = (std::uint8_t*)module + section->VirtualAddress;
            auto sectionSize = section->SizeOfRawData;

            for (std::size_t i = 0; i < sectionSize - s; ++i) {
                bool found = true;
                for (std::size_t j = 0; j < s; ++j) {
                    if (d[j] != -1 && sectionStart[i + j] != d[j]) {
                        found = false;
                        break;
                    }
                }
                if (found)
                    return &sectionStart[i];
            }
        }

        return nullptr;
    }

    std::uint8_t* MultiPatternScan(void* module, const std::vector<const char*>& signatures) 
    { 
        for (const auto& signature : signatures) 
        {
            std::uint8_t* result = PatternScan(module, signature);
            if (result)
                return result;
        }
        return nullptr;
    }

    std::vector<std::uint8_t*> PatternScanAll(void* module, const char* signature)
    {
        auto dosHeader = (PIMAGE_DOS_HEADER)module;
        auto ntHeaders = (PIMAGE_NT_HEADERS)((std::uint8_t*)module + dosHeader->e_lfanew);
    
        auto sizeOfImage = ntHeaders->OptionalHeader.SizeOfImage;
        auto patternBytes = pattern_to_byte(signature);
        auto scanBytes = reinterpret_cast<std::uint8_t*>(module);
    
        auto s = patternBytes.size();
        auto d = patternBytes.data();
    
        std::vector<std::uint8_t*> results;
    
        for (auto i = 0ul; i < sizeOfImage - s; ++i) {
            bool found = true;
            for (auto j = 0ul; j < s; ++j) {
                if (scanBytes[i + j] != d[j] && d[j] != -1) {
                    found = false;
                    break;
                }
            }
            if (found) {
                results.push_back(&scanBytes[i]);
            }
        }
    
        return results;
    }

    std::vector<std::uint8_t*> MultiPatternScanAll(void* module, const std::vector<const char*>& signatures) 
    {
        std::vector<std::uint8_t*> results;
        
        for (const auto& signature : signatures) 
        {
            auto matches = PatternScanAll(module, signature);
            results.insert(results.end(), matches.begin(), matches.end());
        }

        return results;
    }

    std::uint32_t ModuleTimestamp(void* module)
    {
        auto dosHeader = (PIMAGE_DOS_HEADER)module;
        auto ntHeaders = (PIMAGE_NT_HEADERS)((std::uint8_t*)module + dosHeader->e_lfanew);
        return ntHeaders->FileHeader.TimeDateStamp;
    }

    std::uint8_t* GetAbsolute(std::uint8_t* address) noexcept
    {
        if (address == nullptr)
            return nullptr;

        std::int32_t offset = *reinterpret_cast<std::int32_t*>(address);
        std::uint8_t* absoluteAddress = address + 4 + offset;

        return absoluteAddress;
    }

    BOOL HookIAT(HMODULE callerModule, char const* targetModule, const void* targetFunction, void* detourFunction)
    {
        auto* base = (uint8_t*)callerModule;
        const auto* dos_header = (IMAGE_DOS_HEADER*)base;
        const auto nt_headers = (IMAGE_NT_HEADERS*)(base + dos_header->e_lfanew);
        const auto* imports = (IMAGE_IMPORT_DESCRIPTOR*)(base + nt_headers->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_IMPORT].VirtualAddress);

        for (int i = 0; imports[i].Characteristics; i++)
        {
            const char* name = (const char*)(base + imports[i].Name);
            if (lstrcmpiA(name, targetModule) != 0)
                continue;

            void** thunk = (void**)(base + imports[i].FirstThunk);

            for (; *thunk; thunk++)
            {
                const void* import = *thunk;

                if (import != targetFunction)
                    continue;

                DWORD oldState;
                if (!VirtualProtect(thunk, sizeof(void*), PAGE_READWRITE, &oldState))
                    return FALSE;

                *thunk = detourFunction;

                VirtualProtect(thunk, sizeof(void*), oldState, &oldState);

                return TRUE;
            }
        }
        return FALSE;
    }
}

namespace Util
{
    std::pair<int, int> GetPhysicalDesktopDimensions() 
    {
        if (DEVMODE devMode{ .dmSize = sizeof(DEVMODE) }; EnumDisplaySettings(nullptr, ENUM_CURRENT_SETTINGS, &devMode))
            return { devMode.dmPelsWidth, devMode.dmPelsHeight };

        return {};
    }

    std::string wstring_to_string(const std::wstring& wstr) 
    {
        if (wstr.empty()) return {};
        std::string str(wstr.size() * 2, '\0');
        size_t converted = 0;
        wcstombs_s(&converted, &str[0], str.size() + 1, wstr.c_str(), str.size());
        str.resize(converted - 1);
        return str;
    }

    std::string wstring_to_string(const wchar_t* wstr) 
    {
        return wstr ? wstring_to_string(std::wstring(wstr)) : std::string{};
    }

    bool string_cmp_caseless(const std::string& str1, const std::string& str2) 
    {
        if (str1.size() != str2.size()) {
            return false;
        }
        return std::equal(str1.begin(), str1.end(), str2.begin(),
            [](char a, char b) {
                return std::tolower(a) == std::tolower(b);
            });
    }

    bool file_exists(const WCHAR* fileName)
    {
        DWORD dwAttrib = GetFileAttributesW(fileName);
        return (dwAttrib != INVALID_FILE_ATTRIBUTES && !(dwAttrib & FILE_ATTRIBUTE_DIRECTORY));
    }
}