#include "stdafx.h"
#include "helper.hpp"

#include "winternl.h"

#ifdef _DEBUG
    #define SPDLOG_ACTIVE_LEVEL SPDLOG_LEVEL_DEBUG
#else
    #define SPDLOG_ACTIVE_LEVEL SPDLOG_LEVEL_INFO
#endif

#include <spdlog/spdlog.h>
#include <spdlog/sinks/rotating_file_sink.h>
#include <inipp/inipp.h>
#include <safetyhook.hpp>

#include "SDK/Basic.hpp"
#include "SDK/Engine_classes.hpp"
#include "SDK/CommonUI_classes.hpp"
#include "SDK/MediaAssets_classes.hpp"

#include "SDK/WBP_CinematicTransition_classes.hpp"
#include "SDK/WBP_SubtitleLine_CS_classes.hpp"
#include "SDK/WBP_Exploration_HUD_classes.hpp"
#include "SDK/WBP_HUD_BattleScreen_classes.hpp"
#include "SDK/WBP_GameMenu_v3_classes.hpp"
#include "SDK/WBP_GM_MainMenuContainer_classes.hpp"
#include "SDK/WBP_GM_CharacterMenuContainer_classes.hpp"
#include "SDK/WBP_DialogNotifBox_classes.hpp"
#include "SDK/BP_jRPG_GM_Bootstrap_classes.hpp"
#include "SDK/BP_ExtendedCheatManager_classes.hpp"

#define spdlog_confparse(var) spdlog::info("Config Parse: {}: {}", #var, var)

HMODULE exeModule = GetModuleHandle(NULL);
HMODULE thisModule;

// Fix details
std::string sFixName = "ClairObscurFix";
std::string sFixVersion = "0.0.10";
std::filesystem::path sFixPath;

// Ini
inipp::Ini<char> ini;
std::string sConfigFile = sFixName + ".ini";

// Logger
std::shared_ptr<spdlog::logger> logger;
std::string sLogFile = sFixName + ".log";
std::filesystem::path sExePath;
std::string sExeName;

// Aspect ratio / FOV / HUD
std::pair DesktopDimensions = { 0,0 };
const float fPi = 3.1415926535f;
const float fNativeAspect = 16.00f / 9.00f;
const float fCutsceneAspect = 2.39f;
float fAspectRatio;
float fAspectMultiplier;
float fHUDWidth;
float fHUDWidthOffset;
float fHUDHeight;
float fHUDHeightOffset;

// Ini variables
bool bSkipLogos;
bool bCutsceneFPS;
bool bAdjustResChecks;
bool bEnableConsole;
bool bFixMovies;
bool bCutsceneLetterboxing;
float fSharpenStrength;
bool bBackgroundAudio;
bool bDisableSubtitleBlur;
bool bCenterHUD;
float fHUDAspectRatio;

// Variables
int iCurrentResX;
int iCurrentResY;
bool bIsCutscene;
bool bSkippedLogos;
float fCurrentCutsceneAspect;
std::string sWidgetName;
SDK::UEngine* Engine = nullptr;
SDK::UObject* WidgetObject = nullptr;
SDK::ABP_jRPG_GM_Bootstrap_C* Bootstrap = nullptr;
std::unordered_set<SDK::UObject*> PPOverrideInstances;

void CalculateAspectRatio(bool bLog)
{
    if (iCurrentResX <= 0 || iCurrentResY <= 0)
        return;

    // Calculate aspect ratio
    fAspectRatio = (float)iCurrentResX / (float)iCurrentResY;
    fAspectMultiplier = fAspectRatio / fNativeAspect;

    // HUD 
    fHUDWidth = (float)iCurrentResY * fNativeAspect;
    fHUDHeight = (float)iCurrentResY;
    fHUDWidthOffset = (float)(iCurrentResX - fHUDWidth) / 2.00f;
    fHUDHeightOffset = 0.00f;
    if (fAspectRatio < fNativeAspect) {
        fHUDWidth = (float)iCurrentResX;
        fHUDHeight = (float)iCurrentResX / fNativeAspect;
        fHUDWidthOffset = 0.00f;
        fHUDHeightOffset = (float)(iCurrentResY - fHUDHeight) / 2.00f;
    }

    // Log details about current resolution
    if (bLog) {
        spdlog::info("----------");
        spdlog::info("Current Resolution: Resolution: {:d}x{:d}", iCurrentResX, iCurrentResY);
        spdlog::info("Current Resolution: fAspectRatio: {}", fAspectRatio);
        spdlog::info("Current Resolution: fAspectMultiplier: {}", fAspectMultiplier);
        spdlog::info("Current Resolution: fHUDWidth: {}", fHUDWidth);
        spdlog::info("Current Resolution: fHUDHeight: {}", fHUDHeight);
        spdlog::info("Current Resolution: fHUDWidthOffset: {}", fHUDWidthOffset);
        spdlog::info("Current Resolution: fHUDHeightOffset: {}", fHUDHeightOffset);
        spdlog::info("----------");
    }
}

typedef NTSTATUS (NTAPI *NtQueryTimerResolution_pfn)(OUT PULONG MinimumResolution, OUT PULONG MaximumResolution, OUT PULONG CurrentResolution);
typedef NTSTATUS (NTAPI *NtSetTimerResolution_pfn)(IN ULONG DesiredResolution, IN BOOLEAN SetResolution, OUT PULONG CurrentResolution);

static NtQueryTimerResolution_pfn NtQueryTimerResolution_fn = nullptr;
static NtSetTimerResolution_pfn NtSetTimerResolution_fn = nullptr;

void SetMaxTimerResolution()
{
    // Get module handle for ntdll
    HMODULE ntdll = GetModuleHandleW(L"ntdll.dll");

    if (!ntdll) {
        spdlog::error("Timer Resolution: Failed to get module handle for 'ntdll.dll'.");
        return;
    }
           
    // Get function pointers for NtQueryTimerResolution and NtSetTimerResolution
    NtQueryTimerResolution_fn = (NtQueryTimerResolution_pfn)GetProcAddress(ntdll, "NtQueryTimerResolution");
    NtSetTimerResolution_fn = (NtSetTimerResolution_pfn)GetProcAddress(ntdll, "NtSetTimerResolution");

    if (!NtQueryTimerResolution_fn || !NtSetTimerResolution_fn) {
        spdlog::error("Timer Resolution: Failed to get function pointers for NtQueryTimerResolution or NtSetTimerResolution.");
        return;
    }

    ULONG min, max, curr;
    NTSTATUS status;
    
    // Query timer resolution to get the maximum supported resolution
    status = NtQueryTimerResolution_fn(&min, &max, &curr);
    if (status != 0) {
        spdlog::error("Timer Resolution: Failed to query timer resolution. Status: 0x{:x}", status);
        return;
    }

    // Return if timer resolution is already set to the maximum supported resolution
    if (max == curr) {
        spdlog::debug("Timer Resolution: Timer resolution already set to maximum supported resolution.");
        return;
    }

    spdlog::info("Timer Resolution: NtQueryTimerResolution: Min = {} | Max = {} | Current = {}", min, max, curr);
        
    // Set the maximum supported timer resolution
    status = NtSetTimerResolution_fn(max, TRUE, &curr);
    if (status != 0) {
        spdlog::error("Timer Resolution: Failed to set timer resolution. Status: 0x{:x}", status);
        return;
    }

    spdlog::info("Timer Resolution: Set timer resolution to {}", max);
}

void Logging()
{
    // Get path to DLL
    WCHAR dllPath[_MAX_PATH] = {0};
    GetModuleFileNameW(thisModule, dllPath, MAX_PATH);
    sFixPath = dllPath;
    sFixPath = sFixPath.remove_filename();

    // Get game name and exe path
    WCHAR exePath[_MAX_PATH] = {0};
    GetModuleFileNameW(exeModule, exePath, MAX_PATH);
    sExePath = exePath;
    sExeName = sExePath.filename().string();
    sExePath = sExePath.remove_filename();

    // Spdlog initialisation
    try
    {
        // Truncate existing log file
        std::ofstream file(sExePath.string() + sLogFile, std::ios::trunc);
        if (file.is_open()) file.close();

        // Create single log file that's size-limited to 10MB
        logger = std::make_shared<spdlog::logger>(sFixName, std::make_shared<spdlog::sinks::rotating_file_sink_st>(sExePath.string() + sLogFile, 10 * 1024 * 1024, 1));
        spdlog::set_default_logger(logger);
        spdlog::flush_on(spdlog::level::debug);

        #ifdef _DEBUG
            spdlog::set_level(spdlog::level::debug); 
        #else 
            spdlog::set_level(spdlog::level::info); 
        #endif 

        spdlog::info("----------");
        spdlog::info("{:s} v{:s} loaded.", sFixName, sFixVersion);
        spdlog::info("----------");
        spdlog::info("Log file: {}", sFixPath.string() + sLogFile);
        spdlog::info("----------");
        spdlog::info("Module Name: {:s}", sExeName);
        spdlog::info("Module Path: {:s}", sExePath.string());
        spdlog::info("Module Address: 0x{:x}", (uintptr_t)exeModule);
        spdlog::info("Module Timestamp: {:d}", Memory::ModuleTimestamp(exeModule));
        spdlog::info("----------");
    }
    catch (const spdlog::spdlog_ex &ex)
    {
        AllocConsole();
        FILE *dummy;
        freopen_s(&dummy, "CONOUT$", "w", stdout);
        std::cout << "Log initialisation failed: " << ex.what() << std::endl;
        FreeLibraryAndExitThread(thisModule, 1);
    }
}

void Configuration()
{
    // Inipp initialisation
    std::ifstream iniFile(sFixPath / sConfigFile);
    if (!iniFile)
    {
        AllocConsole();
        FILE *dummy;
        freopen_s(&dummy, "CONOUT$", "w", stdout);
        std::cout << "" << sFixName.c_str() << " v" << sFixVersion.c_str() << " loaded." << std::endl;
        std::cout << "ERROR: Could not locate config file." << std::endl;
        std::cout << "ERROR: Make sure " << sConfigFile.c_str() << " is located in " << sFixPath.string().c_str() << std::endl;
        spdlog::error("ERROR: Could not locate config file {}", sConfigFile);
        spdlog::shutdown();
        FreeLibraryAndExitThread(thisModule, 1);
    }
    else
    {
        spdlog::info("Config file: {}", sFixPath.string() + sConfigFile);
        ini.parse(iniFile);
    }

    // Parse config
    ini.strip_trailing_comments();
    spdlog::info("----------");

    // Load settings from ini
    inipp::get_value(ini.sections["Developer Console"], "Enabled", bEnableConsole);
    inipp::get_value(ini.sections["Skip Intro Logos"], "Enabled", bSkipLogos);
    inipp::get_value(ini.sections["Uncap Cutscene FPS"], "Enabled", bCutsceneFPS);
    inipp::get_value(ini.sections["Adjust Resolution Checks"], "Enabled", bAdjustResChecks);
    inipp::get_value(ini.sections["Fix Movies"], "Enabled", bFixMovies);
    inipp::get_value(ini.sections["Center HUD"], "Enabled", bCenterHUD);
    inipp::get_value(ini.sections["Center HUD"], "AspectRatio", fHUDAspectRatio);
    inipp::get_value(ini.sections["Cutscene Letterboxing"], "Enabled", bCutsceneLetterboxing);
    inipp::get_value(ini.sections["Sharpening"], "Strength", fSharpenStrength);
    inipp::get_value(ini.sections["Background Audio"], "Enabled", bBackgroundAudio);
    inipp::get_value(ini.sections["Disable Subtitle Blur"], "Enabled", bDisableSubtitleBlur);

    // Clamp settings
    fSharpenStrength = std::clamp(fSharpenStrength, 0.00f, 2.00f);
    fHUDAspectRatio = std::clamp(fHUDAspectRatio, 1.00f, 10.00f);

    // Log ini parse
    spdlog_confparse(bEnableConsole);
    spdlog_confparse(bSkipLogos);
    spdlog_confparse(bCutsceneFPS);
    spdlog_confparse(bAdjustResChecks);
    spdlog_confparse(bFixMovies);
    spdlog_confparse(bCenterHUD);
    spdlog_confparse(fHUDAspectRatio);
    spdlog_confparse(bCutsceneLetterboxing);
    spdlog_confparse(fSharpenStrength);
    spdlog_confparse(bBackgroundAudio);
    spdlog_confparse(bDisableSubtitleBlur);

    spdlog::info("----------");
}

void UpdateOffsets()
{
    // GObjects
    std::uint8_t* GObjectsScanResult = Memory::PatternScan(exeModule, "48 8B ?? ?? ?? ?? ?? 48 8B ?? ?? 48 8D ?? ?? EB ?? 33 ??");
    if (GObjectsScanResult) {
        spdlog::info("Offsets: GObjects: Address is {:s}+{:x}", sExeName.c_str(), GObjectsScanResult - reinterpret_cast<std::uint8_t*>(exeModule));
        std::uint8_t* GObjectsAddr = Memory::GetAbsolute(GObjectsScanResult + 0x3);
        SDK::Offsets::GObjects = static_cast<UC::uint32>(GObjectsAddr - reinterpret_cast<std::uint8_t*>(exeModule));
        spdlog::info("Offsets: GObjects: 0x{:x}", SDK::Offsets::GObjects);
    }
    else {
        spdlog::error("Offsets: GObjects: Pattern scan failed.");
    }

    // AppendString
    std::uint8_t* AppendStringScanResult = Memory::PatternScan(exeModule, "48 8D ?? ?? ?? 48 89 ?? ?? ?? E8 ?? ?? ?? ?? 83 ?? ?? ?? 00 48 8D ?? ?? ?? ?? ?? 41 ?? 01 00 00 00 48 8B ??");
    if (AppendStringScanResult) {
        spdlog::info("Offsets: AppendString: Address is {:s}+{:x}", sExeName.c_str(), AppendStringScanResult - reinterpret_cast<std::uint8_t*>(exeModule));
        std::uint8_t* AppendStringAddr = Memory::GetAbsolute(AppendStringScanResult + 0xB);
        SDK::Offsets::AppendString = static_cast<UC::uint32>(AppendStringAddr - reinterpret_cast<std::uint8_t*>(exeModule));
        spdlog::info("Offsets: AppendString: 0x{:x}", SDK::Offsets::AppendString);
    }
    else {
        spdlog::error("Offsets: AppendString: Pattern scan failed.");
    }

    // ProcessEvent
    std::uint8_t* ProcessEventScanResult = Memory::PatternScan(exeModule, "40 ?? ?? ?? 41 ?? 41 ?? 41 ?? 41 ?? 48 81 ?? ?? ?? ?? ?? 48 8D ?? ?? ?? 48 89 ?? ?? ?? ?? ?? 48 8B ?? ?? ?? ?? ?? 48 33 ?? 48 89 ?? ?? ?? ?? ?? ?? ?? ?? 48 8B ?? 4C 8B ?? 48 85 ?? 0F 84 ?? ?? ?? ??");
    if (ProcessEventScanResult) {
        spdlog::info("Offsets: ProcessEvent: Address is {:s}+{:x}", sExeName.c_str(), ProcessEventScanResult - reinterpret_cast<std::uint8_t*>(exeModule));
        SDK::Offsets::ProcessEvent = static_cast<UC::uint32>(ProcessEventScanResult - reinterpret_cast<std::uint8_t*>(exeModule));
        spdlog::info("Offsets: ProcessEvent: 0x{:x}", SDK::Offsets::ProcessEvent);
    }
    else {
        spdlog::error("Offsets: ProcessEvent: Pattern scan failed.");
    }

    spdlog::info("----------");
}

void Resolution()
{
    // Current resolution
    std::uint8_t* CurrentResolutionScanResult = Memory::PatternScan(exeModule, "4C 8B ?? ?? ?? 4C 8B ?? ?? ?? 48 8B ?? ?? ?? ?? ?? ?? 4C 8B ?? ?? ?? 48 8B ?? ?? ?? 48 85 ?? 74 ?? E8 ?? ?? ?? ??");
    if (CurrentResolutionScanResult) {
        spdlog::info("Current Resolution: Address is {:s}+{:x}", sExeName.c_str(), CurrentResolutionScanResult - reinterpret_cast<std::uint8_t*>(exeModule));
        static SafetyHookMid CurrentResolutionMidHook{};
        CurrentResolutionMidHook = safetyhook::create_mid(CurrentResolutionScanResult,
            [](SafetyHookContext& ctx) {
                // Get current resolution
                int iResX = static_cast<int>(ctx.r13);
                int iResY = static_cast<int>(ctx.r12);
  
                // Log current resolution
                if (iCurrentResX != iResX || iCurrentResY != iResY) {
                    iCurrentResX = iResX;
                    iCurrentResY = iResY;
                    CalculateAspectRatio(true);
                }
            });
    }
    else {
        spdlog::error("Current Resolution: Pattern scan failed.");
    }

    if (bAdjustResChecks) 
    {
        // Use FMonitorInfo::MaxResolution instead of FMonitorInfo::NativeWidth/Height when checking if resolution is compatible
        std::uint8_t* ResolutionChecksScanResult = Memory::PatternScan(exeModule, "8B ?? 20 39 ?? ?? 7F ?? 8B ?? ?? 39 ?? ?? 7F ?? 49 ?? ?? E8 ?? ?? ?? ?? 83 ?? 01 75 ??");
        if (ResolutionChecksScanResult) {
            spdlog::info("Resolution Checks: Address is {:s}+{:x}", sExeName.c_str(), ResolutionChecksScanResult - reinterpret_cast<std::uint8_t*>(exeModule));
            // Fullscreen
            Memory::PatchBytes(ResolutionChecksScanResult + 0x02, "\x28", 1); // Offset 0x20 -> 0x28
            Memory::PatchBytes(ResolutionChecksScanResult + 0x0A, "\x2C", 1); // Offset 0x24 -> 0x2C
            // Borderless
            Memory::PatchBytes(ResolutionChecksScanResult + 0x1F, "\x2C", 1); // Offset 0x24 -> 0x2C
            Memory::PatchBytes(ResolutionChecksScanResult + 0x22, "\x28", 1); // Offset 0x20 -> 0x28

            spdlog::info("Resolution Checks: Patched instructions.");
        }
        else {
            spdlog::error("Resolution Checks: Pattern scan failed.");
        }
    }
}

void Misc()
{
    if (bBackgroundAudio) 
    {
        // Unfocused volume multiplier
        std::uint8_t* UnfocusedVolumeMultiplierScanResult = Memory::PatternScan(exeModule, "74 ?? C7 ?? ?? ?? ?? ?? 00 00 80 3F EB ?? E8 ?? ?? ?? ??");
        if (UnfocusedVolumeMultiplierScanResult) {
            spdlog::info("Unfocused Volume Multiplier: Address is {:s}+{:x}", sExeName.c_str(), UnfocusedVolumeMultiplierScanResult - reinterpret_cast<std::uint8_t*>(exeModule));
            Memory::PatchBytes(UnfocusedVolumeMultiplierScanResult, "\x90\x90", 2);
            spdlog::info("Unfocused Volume Multiplier: Patched instruction.");
        }
        else {
            spdlog::error("Unfocused Volume Multiplier: Pattern scan failed.");
        }
    }

    // ASandfallGameMode::BeginPlay()
    std::uint8_t* SandfallGameModeBeginPlayScanResult = Memory::PatternScan(exeModule, "48 83 ?? ?? 48 8B ?? E8 ?? ?? ?? ?? 48 8D ?? ?? ?? ?? ?? E8 ?? ?? ?? ?? 80 3D ?? ?? ?? ?? 00 48 8B ?? 74 ?? 48 85 ?? 74 ??");
    if (SandfallGameModeBeginPlayScanResult) {
        spdlog::info("Level Load: Address is {:s}+{:x}", sExeName.c_str(), SandfallGameModeBeginPlayScanResult - reinterpret_cast<std::uint8_t*>(exeModule));
        static SafetyHookMid SandfallGameModeBeginPlayMidHook{};
        SandfallGameModeBeginPlayMidHook = safetyhook::create_mid(SandfallGameModeBeginPlayScanResult,
            [](SafetyHookContext& ctx) {
                spdlog::debug("Level Load: ASandfallGameMode::BeginPlay() called.");

                // Set maximum supported timer resolution
                SetMaxTimerResolution();

                // Grab bootstrap object
                if (!bSkippedLogos && bSkipLogos) {
                    auto obj = reinterpret_cast<SDK::UObject*>(ctx.rcx);

                    if (obj->GetName().contains("BP_jRPG_GM_Bootstrap_C") && obj->IsA(SDK::ABP_jRPG_GM_Bootstrap_C::StaticClass()))
                        Bootstrap = static_cast<SDK::ABP_jRPG_GM_Bootstrap_C*>(obj);
                }

                // Spawn CheatManager when console is enabled
                if (bEnableConsole) {
                    SDK::UWorld* World = SDK::UWorld::GetWorld();
                    if (World && World->OwningGameInstance && World->OwningGameInstance->LocalPlayers.Num() != 0 && World->OwningGameInstance->LocalPlayers[0]->PlayerController) {
                        SDK::APlayerController* PC = World->OwningGameInstance->LocalPlayers[0]->PlayerController;
                        
                        if (!PC->CheatManager) {
                            PC->CheatManager = static_cast<SDK::UBP_ExtendedCheatManager_C*>(SDK::UGameplayStatics::SpawnObject(SDK::UBP_ExtendedCheatManager_C::StaticClass(), PC));
                            spdlog::debug("Enable Console: Spawned CheatManager at 0x{:x}", reinterpret_cast<uintptr_t>(PC->CheatManager));
                        }
                    }
                }
            });
    }
    else {
        spdlog::error("Level Load: Pattern scan failed.");
    }
}

void AspectRatioFOV() 
{
    if (!bCutsceneLetterboxing) 
    {
        // Cutscene Aspect Ratio
        std::uint8_t* CutsceneAspectRatioScanResult = Memory::PatternScan(exeModule, "0F ?? ?? F3 0F ?? ?? ?? ?? ?? ?? 76 ?? F3 0F ?? ?? ?? ?? ?? ?? 48 83 ?? ?? ?? C3");
        if (CutsceneAspectRatioScanResult) {
            spdlog::info("Cutscenes: Aspect Ratio: Address is {:s}+{:x}", sExeName.c_str(), CutsceneAspectRatioScanResult - reinterpret_cast<std::uint8_t*>(exeModule));
            static SafetyHookMid CutsceneAspectRatioMidHook{};
            CutsceneAspectRatioMidHook = safetyhook::create_mid(CutsceneAspectRatioScanResult,
                [](SafetyHookContext& ctx) {
                    // Check if forced aspect ratio is 2.39~ or 1.78~
                    if (std::fabs(ctx.xmm1.f32[0] - fCutsceneAspect) < 1e-5f) {
                        fCurrentCutsceneAspect = ctx.xmm1.f32[0];
                        ctx.xmm1.f32[0] = fAspectRatio;
                        
                        bIsCutscene = true;
                    }
                    else if (std::fabs(ctx.xmm0.f32[0] - fNativeAspect) < 1e-5f) {
                        fCurrentCutsceneAspect = ctx.xmm0.f32[0];
                        ctx.xmm0.f32[0] = fAspectRatio;

                        bIsCutscene = true;
                    }
                    else {
                        bIsCutscene = false;
                    }
                });
        }
        else {
            spdlog::error("Cutscenes: Aspect Ratio: Pattern scan failed.");
        }

        // Cutscene FOV
        std::uint8_t* CutsceneFOVScanResult = Memory::PatternScan(exeModule, "F3 0F ?? ?? ?? ?? ?? ?? 0F 57 ?? F3 0F ?? ?? ?? ?? ?? ?? 0F ?? ?? 76?? F3 0F ?? ?? ?? ?? ?? ?? F3 0F ?? ?? EB ??");
        if (CutsceneFOVScanResult) {
            spdlog::info("Cutscenes: FOV: Address is {:s}+{:x}", sExeName.c_str(), CutsceneFOVScanResult - reinterpret_cast<std::uint8_t*>(exeModule));
            static SafetyHookMid CutsceneFOVMidHook{};
            CutsceneFOVMidHook = safetyhook::create_mid(CutsceneFOVScanResult,
                [](SafetyHookContext& ctx) {
                    if (bIsCutscene && fAspectRatio > fCurrentCutsceneAspect)
                        ctx.xmm0.f32[0] = atanf(tanf(ctx.xmm0.f32[0] * (fPi / 360)) / fCurrentCutsceneAspect * fAspectRatio) * (360 / fPi);
                });
        }
        else {
            spdlog::error("Cutscenes: FOV: Pattern scan failed.");
        }
    }
}

void Framerate()
{
    if (bCutsceneFPS) {
        // FrameRateLimit
        std::uint8_t* FrameRateLimitScanResult = Memory::PatternScan(exeModule, "48 8B ?? F3 0F ?? ?? ?? ?? ?? ?? FF 90 ?? ?? ?? ?? 48 83 ?? ?? E9 ?? ?? ?? ??");
        if (FrameRateLimitScanResult) {
            spdlog::info("Cutscenes: FPS: Address is {:s}+{:x}", sExeName.c_str(), FrameRateLimitScanResult - reinterpret_cast<std::uint8_t*>(exeModule));
            static SafetyHookMid FrameRateLimitMidHook{};
            FrameRateLimitMidHook = safetyhook::create_mid(FrameRateLimitScanResult,
                [](SafetyHookContext& ctx) {
                    SDK::UGameUserSettings* userSettings = SDK::UGameUserSettings::GetGameUserSettings();
                    if (userSettings) {
                          // This effectively sets t.MaxFPS. Just overwrite any attempt to set a framerate limit with the user's defined setting
                          ctx.xmm1.f32[0] = userSettings->FrameRateLimit;
                          spdlog::debug("Cutscenes: FPS: GameUserSettings = 0x{:x}. Set FPS limit to {}", reinterpret_cast<uintptr_t>(userSettings), userSettings->FrameRateLimit);   
                    }
                    else {
                        ctx.xmm1.f32[0] = 0.00f;
                        spdlog::error("Cutscenes: FPS: Failed to retreive GameUserSettings. Setting framerate limit to 0.");
                    }
                });
        }
        else {
            spdlog::error("Cutscenes: FPS: Pattern scan failed.");
        }
    }
}

void HUD()
{
    if (bFixMovies) {
        // Video player
        std::uint8_t* VideoPlayerScanResult = Memory::PatternScan(exeModule, "48 89 ?? ?? 48 8B ?? 0F ?? ?? ?? 33 ?? 48 8B ?? 89 ?? ?? ?? ?? ?? ?? 0F 29 ?? ??");
        if (VideoPlayerScanResult) {
            spdlog::info("Video Player: Address is {:s}+{:x}", sExeName.c_str(), VideoPlayerScanResult - reinterpret_cast<std::uint8_t*>(exeModule));
            static SafetyHookMid VideoPlayerMidHook{};
            VideoPlayerMidHook = safetyhook::create_mid(VideoPlayerScanResult,
                [](SafetyHookContext& ctx) {
                    if (!ctx.rsi) return;

                    if (reinterpret_cast<SDK::UObject*>(ctx.rsi)->IsA(SDK::UCommonVideoPlayer::StaticClass())) {
                        auto videoPlayer = reinterpret_cast<SDK::UCommonVideoPlayer*>(ctx.rsi);

                        spdlog::debug("Video Player: Address is 0x{:x}", ctx.rsi);
                        spdlog::debug("Video Player: Playback status changed on video: {}", videoPlayer->MediaPlayer->GetUrl().ToString());
    
                        // All videos except for the credits are at an aspect ratio of 2.39
                        if (!videoPlayer->MediaPlayer->GetUrl().ToString().contains("Credit") && videoPlayer->VideoBrush.ImageSize.Y == 1088.00f) {
                            if (fAspectRatio >= fCutsceneAspect) {
                                videoPlayer->VideoBrush.ImageSize.X = 1920.00f * (fCutsceneAspect / fNativeAspect);
                                videoPlayer->VideoBrush.ImageSize.Y = 1088.00f * (fCutsceneAspect / fNativeAspect);
                            }
                            else if (fAspectRatio > fNativeAspect && fAspectRatio < fCutsceneAspect) {
                                videoPlayer->VideoBrush.ImageSize.X = 1920.00f * (fAspectRatio / fNativeAspect);
                                videoPlayer->VideoBrush.ImageSize.Y = 1088.00f * (fAspectRatio / fNativeAspect);
                            }
                        }
                    }
                });
        }
        else {
            spdlog::error("Video Player: Pattern scan failed.");
        }
    }
   
    if (bSkipLogos || !bCutsceneLetterboxing || bCenterHUD) 
    {
        // Widgets
        std::uint8_t* UWigetAddToViewportScanResult = Memory::PatternScan(exeModule, "48 8B ?? ?? 48 8B ?? 48 85 ?? 40 0F ?? ?? 48 ?? ?? 48 89 ?? ?? 48 8B ?? 8B ?? ?? ?? ?? ?? ?? FF 90 ?? ?? ?? ??");
        if (UWigetAddToViewportScanResult) {
            spdlog::info("Widgets: Address is {:s}+{:x}", sExeName.c_str(), UWigetAddToViewportScanResult - reinterpret_cast<std::uint8_t*>(exeModule));
            static SafetyHookMid UWigetAddToViewportMidHook{};
            UWigetAddToViewportMidHook = safetyhook::create_mid(UWigetAddToViewportScanResult,
                [](SafetyHookContext& ctx) {
                    if (!ctx.rsi) return;

                    if (WidgetObject != reinterpret_cast<SDK::UObject*>(ctx.rsi)) {
                        WidgetObject = reinterpret_cast<SDK::UObject*>(ctx.rsi);
                        sWidgetName = WidgetObject->GetName();
                        spdlog::debug("Widgets: {} @ 0x{:x}", sWidgetName, reinterpret_cast<uintptr_t>(WidgetObject));
                    }

                    // Skip intro logos
                    if (bSkipLogos && !bSkippedLogos) {
                        if (sWidgetName.contains("WBP_SplashScreen_Epilepsy_C")) {
                            if (!bSkippedLogos && Bootstrap) {
                                std::this_thread::sleep_for(std::chrono::milliseconds(1000));
                                Bootstrap->OnEpilepsyWarningCompleted();
                            }
                        }
                        else if (sWidgetName.contains("WBP_SplashScreens_Logos_C")) {
                            if (Bootstrap && !bSkippedLogos) {
                                Bootstrap->OnSaveWarningSplashScreenCompleted();
                                spdlog::info("Widgets: Skipped intro logos and warnings.");
                                bSkippedLogos = true;
                            }
                        }
                    }

                    if (!bCutsceneLetterboxing && sWidgetName.contains("WBP_CinematicTransition_C")) {
                        auto transition = static_cast<SDK::UWBP_CinematicTransition_C*>(WidgetObject);
                        transition->ScreenRatio = static_cast<double>(fAspectRatio);
                    }

                    // Center HUD
                    if (bCenterHUD && fAspectRatio != fNativeAspect) {
                        float HeightOffset = 0.00f;
                        float WidthOffset = 0.00f;

                        if (fAspectRatio > fNativeAspect) {
                            HeightOffset = 0.00f;
                            WidthOffset = ((1080.00f * fAspectRatio) - (1080.00f * fHUDAspectRatio)) / 2.00f;
                        }
                        else if (fAspectRatio < fNativeAspect) {
                            HeightOffset = ((1920.00f / fAspectRatio) - (1920.00f / fHUDAspectRatio)) / 2.00f;
                            WidthOffset = 0.00f;
                        }           

                        if (sWidgetName.contains("WBP_Exploration_HUD_C") && WidgetObject->IsA(SDK::UWBP_Exploration_HUD_C::StaticClass())) {
                            auto explorationHUD = static_cast<SDK::UWBP_Exploration_HUD_C*>(WidgetObject);

                            if (explorationHUD->OverlaySafeZone->Slots.Num() > 0 && explorationHUD->QuestObjectiveBackground->Slot) {
                                auto safeZoneSlot = static_cast<SDK::USafeZoneSlot*>(explorationHUD->OverlaySafeZone->Slots[0]);
                                auto objectiveBGSlot = static_cast<SDK::UOverlaySlot*>(explorationHUD->QuestObjectiveBackground->Slot);
          
                                safeZoneSlot->Padding = SDK::FMargin(WidthOffset, HeightOffset, WidthOffset, HeightOffset);
                                objectiveBGSlot->SetPadding(SDK::FMargin(WidthOffset, HeightOffset, 0.00f, 0.00f));                                  
                            }
                        }

                        if (sWidgetName.contains("WBP_HUD_BattleScreen_C") && WidgetObject->IsA(SDK::UWBP_HUD_BattleScreen_C::StaticClass())) {
                            auto battleHUD = static_cast<SDK::UWBP_HUD_BattleScreen_C*>(WidgetObject);

                            if (battleHUD->Canvas_UniqueMechanicsContainer->Slot && battleHUD->SafeZone->Slots.Num() >= 1 && battleHUD->Canvas_UniqueMechanicsContainer->Slot && battleHUD->CanvasPanel_0->Slots.Num() >= 7) {
                                auto safeZone = static_cast<SDK::USafeZone*>(battleHUD->SafeZone);
                                auto safeZoneSlot = static_cast<SDK::USafeZoneSlot*>(safeZone->Slots[0]);
                                auto uniqueMechanics = static_cast<SDK::UCanvasPanelSlot*>(battleHUD->Canvas_UniqueMechanicsContainer->Slot);
                                auto turnOrder = static_cast<SDK::UCanvasPanelSlot*>(battleHUD->CanvasPanel_0->Slots[4]);
                                auto targetSelectControls = static_cast<SDK::UCanvasPanelSlot*>(battleHUD->CanvasPanel_0->Slots[6]);
                                auto tooltips = static_cast<SDK::UCanvasPanelSlot*>(battleHUD->CanvasPanel_0->Slots[7]);

                                safeZoneSlot->Padding = SDK::FMargin(WidthOffset, HeightOffset, WidthOffset, HeightOffset);
                                targetSelectControls->SetOffsets(SDK::FMargin(WidthOffset + 330.00f, HeightOffset + 300.00f, 0.00f, 0.00f));
                                tooltips->SetOffsets(SDK::FMargin(WidthOffset + 210.00f, HeightOffset + 64.00f, 0.00f, 0.00f));
                                turnOrder->SetOffsets(SDK::FMargin(WidthOffset + 10.00f, HeightOffset, 0.00f, 0.00f));
                                uniqueMechanics->SetOffsets(SDK::FMargin(0.00f, 0.00f, WidthOffset, HeightOffset));
                            }
                        }

                        if (sWidgetName.contains("WBP_GameMenu_v3_C") &&  WidgetObject->IsA(SDK::UWBP_GameMenu_v3_C::StaticClass())) {
                            auto gameMenu = static_cast<SDK::UWBP_GameMenu_v3_C*>(WidgetObject);

                            if (gameMenu->WidgetTree->RootWidget) {
                                auto gameMenuOverlay = static_cast<SDK::UOverlay*>(gameMenu->WidgetTree->RootWidget);

                                if (gameMenuOverlay->Slots.Num() >= 4) {
                                    auto mainMenuSlot = static_cast<SDK::UOverlaySlot*>(gameMenuOverlay->Slots[2]);
                                    auto charMenuSlot = static_cast<SDK::UOverlaySlot*>(gameMenuOverlay->Slots[3]);
                                    auto actionBarSlot = static_cast<SDK::UOverlaySlot*>(gameMenuOverlay->Slots[4]);
    
                                    mainMenuSlot->SetPadding(SDK::FMargin(WidthOffset, HeightOffset, WidthOffset,HeightOffset));
                                    charMenuSlot->SetPadding(SDK::FMargin(WidthOffset, HeightOffset, WidthOffset, HeightOffset));
                                    actionBarSlot->SetPadding(SDK::FMargin(WidthOffset, HeightOffset, WidthOffset, HeightOffset));
                                }
                            }
                        }

                        if (sWidgetName.contains("WBP_DialogNotifBox_C") && WidgetObject->IsA(SDK::UWBP_DialogNotifBox_C::StaticClass())) {
                            auto dialogBox = static_cast<SDK::UWBP_DialogNotifBox_C*>(WidgetObject);
                            if (dialogBox->WidgetTree->RootWidget) {
                                auto dialogCanvasPanel = static_cast<SDK::UCanvasPanel*>(dialogBox->WidgetTree->RootWidget);
                                if (dialogCanvasPanel->Slots.Num() > 0) {
                                    auto dialogCanvasSlot = static_cast<SDK::UCanvasPanelSlot*>(dialogCanvasPanel->Slots[0]);
                                    dialogCanvasSlot->SetOffsets(SDK::FMargin(-WidthOffset, -HeightOffset + -150.00f, 870.00f, 370.00f));
                                }
                            }
                        }
                    }
                });
        }
        else {
            spdlog::error("Widgets: Pattern scan failed.");
        }
    }
}

void Graphics() 
{
    if (fSharpenStrength != 1.00f) 
    {
        // Post process override
        std::uint8_t* PostProcessOverrideScanResult = Memory::PatternScan(exeModule, "48 8B ?? ?? 48 8D ?? ?? 0F 29 ?? ?? ?? 4C 8D ?? ?? ?? ?? ?? 48 8B ?? 0F ?? ?? 48 8B ?? FF 90 ?? ?? ?? ??");
        if (PostProcessOverrideScanResult) {
            spdlog::info("PostProcess Override: Address is {:s}+{:x}", sExeName.c_str(), PostProcessOverrideScanResult - reinterpret_cast<std::uint8_t*>(exeModule));
            static SafetyHookMid PostProcessOverrideMidHook{};
            PostProcessOverrideMidHook = safetyhook::create_mid(PostProcessOverrideScanResult,
                [](SafetyHookContext& ctx) {
                    if (!(ctx.rcx - 0x28)) return;

                    auto obj = reinterpret_cast<SDK::UObject*>(ctx.rcx - 0x28);

                    // If we've already seen the instance before, return early
                    if (PPOverrideInstances.find(obj) != PPOverrideInstances.end())
                        return;

                    // Check if the instance is a valid sharpen material instance constant
                    if (obj->GetName().contains("M_Sharpen")) {
                        auto instance = static_cast<SDK::UMaterialInstance*>(obj);

                        // Update sharpening params if not already changed
                        for (auto& param : instance->ScalarParameterValues) {
                            std::string paramName = param.ParameterInfo.Name.ToString();
                            if ((paramName == "SharpenGlobal" || paramName == "SharpenMainCharacter") && param.ParameterValue != fSharpenStrength) {
                                spdlog::info("PostProcess Override: Sharpening: {} - Set {} from {} to {}.", instance->GetName(), paramName, param.ParameterValue, fSharpenStrength);
                                param.ParameterValue = fSharpenStrength;
                            }
                        }

                        // Add to the known instances set
                        PPOverrideInstances.insert(obj);
                    }
                });
        }
        else {
            spdlog::error("PostProcess Override: Pattern scan failed.");
        }
    } 

    if (bDisableSubtitleBlur) 
    {
        // Subtitles widget
        std::uint8_t* SubtitlesWidgetScanResult = Memory::PatternScan(exeModule, "4C 8B ?? ?? ?? ?? ?? ?? 48 8D ?? ?? ?? ?? 8B ?? E8 ?? ?? ?? ?? 48 8B ?? 48 85 ?? 74 ?? E8 ?? ?? ?? ??");
        if (SubtitlesWidgetScanResult) {
            spdlog::info("Subtitles Widget: Address is {:s}+{:x}", sExeName.c_str(), SubtitlesWidgetScanResult - reinterpret_cast<std::uint8_t*>(exeModule));
            static SafetyHookMid SubtitlesWidgetMidHook{};
            SubtitlesWidgetMidHook = safetyhook::create_mid(SubtitlesWidgetScanResult + 0x15,
                [](SafetyHookContext& ctx) {
                    if (!ctx.rax) return;

                    auto subsWidget = reinterpret_cast<SDK::UObject*>(ctx.rax);
                    std::string subWidgetName = subsWidget->GetName();

                    if (subWidgetName.contains("WBP_SubtitleLine_CS_C")) {
                        auto lineWidget = static_cast<SDK::UWBP_SubtitleLine_CS_C*>(subsWidget);
                        if (lineWidget->WidgetTree->RootWidget) {
                            auto rootWidget = static_cast<SDK::UOverlay*>(lineWidget->WidgetTree->RootWidget);
                            if (rootWidget->Slots.Num() > 0 && rootWidget->Slots[0]) {
                                auto overlaySlot = static_cast<SDK::UOverlaySlot*>(rootWidget->Slots[0]);
                                if (overlaySlot->Content) {
                                    auto backgroundBlur = static_cast<SDK::UWidget*>(overlaySlot->Content);
                                    backgroundBlur->SetVisibility(SDK::ESlateVisibility::Hidden);
                                }
                            }
                        }
                    }
                });
        }
        else {
            spdlog::error("Subtitles Widget: Pattern scan failed.");
        }
    }
}

void EnableConsole()
{ 
    if (bEnableConsole) 
    {
        // Get GEngine
        for (int i = 0; i < 200; ++i) { // 20s
            Engine = SDK::UEngine::GetEngine();

            if (Engine && Engine->ConsoleClass && Engine->GameViewport)
                break;

            std::this_thread::sleep_for(std::chrono::milliseconds(100));
        }

        if (!Engine || !Engine->ConsoleClass || !Engine->GameViewport) {
            spdlog::error("Enable Console: Failed to find GEngine address after 20 seconds.");
            return;
        }

        spdlog::debug("Enable Console: GEngine address = 0x{:x}", reinterpret_cast<uintptr_t>(Engine));

        // Construct console
        SDK::UObject* NewObject = SDK::UGameplayStatics::SpawnObject(Engine->ConsoleClass, Engine->GameViewport);
        if (NewObject) {
            Engine->GameViewport->ViewportConsole = static_cast<SDK::UConsole*>(NewObject);
            spdlog::info("Enable Console: Console object constructed.");
        }
        else {
            spdlog::error("Enable Console: Failed to construct console object.");
            return;
        }

        // Get input settings
        SDK::UInputSettings* InputSettings = SDK::UInputSettings::GetDefaultObj();

        if (InputSettings) {
            if (InputSettings->ConsoleKeys && InputSettings->ConsoleKeys.Num() > 0) {
                spdlog::info("Enable Console: Console enabled - access it using the '{}' key.", InputSettings->ConsoleKeys[0].KeyName.ToString());
            }
            else {
                spdlog::error("Enable Console: Console enabled but no console key is bound.\nAdd this to %LOCALAPPDATA%\\Sandfall\\Saved\\Config\\Windows\\Input.ini -\n[/Script/Engine.InputSettings]\nConsoleKeys = Tilde\nAlter the key from 'Tidle' if necessary.");
            }
        }
        else {
            spdlog::error("Enable Console: Failed to retreive input settings.");
        }
    }
}

DWORD __stdcall Main(void*)
{
    Logging();
    Configuration();
    UpdateOffsets();
    Resolution();
    Misc();
    AspectRatioFOV();
    Framerate();
    HUD();
    Graphics();
    EnableConsole();

    return true;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved)
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    {
        thisModule = hModule;

        HANDLE mainHandle = CreateThread(NULL, 0, Main, 0, NULL, 0);
        if (mainHandle)
        {
            SetThreadPriority(mainHandle, THREAD_PRIORITY_HIGHEST);
            CloseHandle(mainHandle);
        }
        break;
    }
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}
