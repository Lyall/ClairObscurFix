#include "stdafx.h"
#include "helper.hpp"

#include <spdlog/spdlog.h>
#include <spdlog/sinks/rotating_file_sink.h>
#include <inipp/inipp.h>
#include <safetyhook.hpp>

#include "SDK/Basic.hpp"
#include "SDK/Engine_classes.hpp"
#include "SDK/CommonUI_classes.hpp"
#include "SDK/MediaAssets_classes.hpp"

#include "SDK/WBP_SplashScreen_Epilepsy_classes.hpp"
#include "SDK/WBP_SplashScreens_Logos_classes.hpp"
#include "SDK/WBP_SplashScreen_SaveWarning_classes.hpp"

#define spdlog_confparse(var) spdlog::info("Config Parse: {}: {}", #var, var)

HMODULE exeModule = GetModuleHandle(NULL);
HMODULE thisModule;

// Fix details
std::string sFixName = "ClairObscurFix";
std::string sFixVersion = "0.0.4";
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
bool bEnableConsole;
bool bFixFOV;
bool bFixMovies;
bool bCutsceneLetterboxing;
bool bDisableSharpening;
bool bBackgroundAudio;

// Variables
int iCurrentResX;
int iCurrentResY;
static bool bIsCutscene;
std::string sWidgetName;
SDK::UEngine* Engine = nullptr;
SDK::UObject* WidgetObject = nullptr;
SDK::UMaterialInstanceConstant* SharpenInstance = nullptr;
std::uint8_t* UnfocusedVolumeMultiplier = nullptr;

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
    inipp::get_value(ini.sections["Fix FOV"], "Enabled", bFixFOV);
    inipp::get_value(ini.sections["Fix Movies"], "Enabled", bFixMovies);
    inipp::get_value(ini.sections["Cutscene Letterboxing"], "Enabled", bCutsceneLetterboxing);
    inipp::get_value(ini.sections["Sharpening"], "Disabled", bDisableSharpening);
    inipp::get_value(ini.sections["Background Audio"], "Enabled", bBackgroundAudio);

    // Log ini parse
    spdlog_confparse(bEnableConsole);
    spdlog_confparse(bSkipLogos);
    spdlog_confparse(bCutsceneFPS);
    spdlog_confparse(bFixFOV);
    spdlog_confparse(bFixMovies);
    spdlog_confparse(bCutsceneLetterboxing);
    spdlog_confparse(bDisableSharpening);
    spdlog_confparse(bBackgroundAudio);

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

void CurrentResolution()
{
    if (bBackgroundAudio) 
    {
        // Unfocused volume multiplier
        std::uint8_t* UnfocusedVolumeMultiplierScanResult = Memory::PatternScan(exeModule, "F3 0F ?? ?? ?? ?? ?? ?? 48 8D ?? ?? ?? ?? ?? E8 ?? ?? ?? ?? C6 ?? ?? ?? ?? ?? 01 48 83 ?? ?? C3");
        if (UnfocusedVolumeMultiplierScanResult) {
            spdlog::info("Unfocused Volume Multiplier: Address is {:s}+{:x}", sExeName.c_str(), UnfocusedVolumeMultiplierScanResult - reinterpret_cast<std::uint8_t*>(exeModule));
            UnfocusedVolumeMultiplier = Memory::GetAbsolute(UnfocusedVolumeMultiplierScanResult + 0x4);
            spdlog::info("Unfocused Volume Multiplier: Value address is {:s}+{:x}", sExeName.c_str(), UnfocusedVolumeMultiplier - reinterpret_cast<std::uint8_t*>(exeModule));
        }
        else {
            spdlog::error("Unfocused Volume Multiplier: Pattern scan failed.");
        }
    }

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

                // Enable background audio
                if (bBackgroundAudio && UnfocusedVolumeMultiplier)
                    *reinterpret_cast<float*>(UnfocusedVolumeMultiplier) = 1.00f;
            });
    }
    else {
        spdlog::error("Current Resolution: Pattern scan failed.");
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
                    // Check if forced aspect ratio is 2.39~
                    if (std::fabs(ctx.xmm1.f32[0] - fCutsceneAspect) < 1e-5f) {
                        ctx.xmm1.f32[0] = fAspectRatio;
                        // We're in a cutscene now.
                        bIsCutscene = true;
                    }
                    else {
                        // If no aspect ratio is forced then we're not in a cutscene.
                        bIsCutscene = false;
                    }
                });
        }
        else {
            spdlog::error("Cutscenes: Aspect Ratio: Pattern scan failed.");
        }

        // Cutsene FOV
        std::uint8_t* CutsceneFOVScanResult = Memory::PatternScan(exeModule, "F3 0F ?? ?? ?? ?? ?? ?? 0F 57 ?? F3 0F ?? ?? ?? ?? ?? ?? 0F ?? ?? 76?? F3 0F ?? ?? ?? ?? ?? ?? F3 0F ?? ?? EB ??");
        if (CutsceneFOVScanResult) {
            spdlog::info("Cutscenes: FOV: Address is {:s}+{:x}", sExeName.c_str(), CutsceneFOVScanResult - reinterpret_cast<std::uint8_t*>(exeModule));
            static SafetyHookMid CutsceneFOVMidHook{};
            CutsceneFOVMidHook = safetyhook::create_mid(CutsceneFOVScanResult,
                [](SafetyHookContext& ctx) {
                    if (bIsCutscene && fAspectRatio > fCutsceneAspect)
                        ctx.xmm0.f32[0] = atanf(tanf(ctx.xmm0.f32[0] * (fPi / 360)) / fCutsceneAspect * fAspectRatio) * (360 / fPi);
                });
        }
        else {
            spdlog::error("Cutscenes: FOV: Pattern scan failed.");
        }
    } 

    if (bFixFOV) {
        // AspectRatioAxisConstraint
        std::uint8_t* AspectRatioAxisConstraintScanResult = Memory::PatternScan(exeModule, "41 ?? ?? ?? ?? ?? 00 00 48 ?? ?? ?? ?? 00 00 4C ?? ?? 4D ?? ?? E8 ?? ?? ?? ??");
        if (AspectRatioAxisConstraintScanResult) {
            spdlog::info("FOV: AspectRatioAxisConstraint: Address is {:s}+{:x}", sExeName.c_str(), AspectRatioAxisConstraintScanResult - reinterpret_cast<std::uint8_t*>(exeModule));
            static SafetyHookMid AspectRatioAxisConstraintMidHook{};
            AspectRatioAxisConstraintMidHook = safetyhook::create_mid(AspectRatioAxisConstraintScanResult + 0x8,
                [](SafetyHookContext& ctx) {
                    // Stop AspectRatioAxisConstraint being set to 1 after combat.
                    ctx.rdx &= ~0xFF;  
                });
        }
        else {
            spdlog::error("FOV: AspectRatioAxisConstraint: Pattern scan failed.");
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
                          // This effectively sets t.MaxFPS. Just overwrite any attempt to set a framerate limit with the user's defined setting.
                          ctx.xmm1.f32[0] = userSettings->FrameRateLimit;
                          spdlog::debug("Cutscenes: FPS: GameUserSettings = {:x}. Set FPS limit to {}", reinterpret_cast<uintptr_t>(userSettings), userSettings->FrameRateLimit);   
                    }
                    else {
                        spdlog::error("Cutscenes: FPS: Failed to retreive GameUserSettings.");
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

                    auto videoPlayer = reinterpret_cast<SDK::UCommonVideoPlayer*>(ctx.rsi);

                    spdlog::debug("Video Player: Address is 0x{}", reinterpret_cast<uintptr_t>(videoPlayer));
                    spdlog::debug("Video Player: Playback status changed on video: {}", videoPlayer->MediaPlayer->GetUrl().ToString());

                    // All videos except for the credits are at an aspect ratio of 2.39
                    if (!videoPlayer->MediaPlayer->GetUrl().ToString().contains("Credit") && videoPlayer->VideoBrush.ImageSize.Y == 1088.00f) {
                        if (fAspectRatio > fNativeAspect) {
                            videoPlayer->VideoBrush.ImageSize.X = 1920.00f * (fCutsceneAspect / fNativeAspect);
                            videoPlayer->VideoBrush.ImageSize.Y = 1088.00f * (fCutsceneAspect / fNativeAspect);
                        }
                    }
                });
        }
        else {
            spdlog::error("Video Player: Pattern scan failed.");
        }
    }
   
    if (bSkipLogos) 
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

                        // Intro skip
                        if (bSkipLogos) {
                            if (sWidgetName.contains("WBP_SplashScreen_Epilepsy_C")) {
                                auto epilepsy = static_cast<SDK::UWBP_SplashScreen_Epilepsy_C*>(WidgetObject);
                                epilepsy->OnMainAnimationFinished();
                                spdlog::debug("Widgets: Epilepsy: OnMainAnimationFinsihed()");
                            }
                            else if (sWidgetName.contains("WBP_SplashScreens_Logos_C")) {
                                auto logos = static_cast<SDK::UWBP_SplashScreens_Logos_C*>(WidgetObject);
                                logos->OnPlayAnimationFinished();
                                spdlog::debug("Widgets: SplashScreens: PlayAnimationFinished()");
                            }
                            else if (sWidgetName.contains("WBP_SplashScreen_SaveWarning_C")) {
                                auto saveWarning = static_cast<SDK::UWBP_SplashScreen_SaveWarning_C*>(WidgetObject);
                                saveWarning->OnMainAnimationFinished();
                                spdlog::debug("Widgets: SaveWarning: OnMainAnimationFinished()");
                                spdlog::info("Widgets: Skipped intro logos and warnings.");
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
    if (bDisableSharpening) {
        // Post process override
        std::uint8_t* PostProcessOverrideScanResult = Memory::PatternScan(exeModule, "48 8B ?? ?? 48 8D ?? ?? 0F 29 ?? ?? ?? 4C 8D ?? ?? ?? ?? ?? 48 8B ?? 0F ?? ?? 48 8B ?? FF 90 ?? ?? ?? ??");
        if (PostProcessOverrideScanResult) {
            spdlog::info("PostProcess Override: Address is {:s}+{:x}", sExeName.c_str(), PostProcessOverrideScanResult - reinterpret_cast<std::uint8_t*>(exeModule));
            static SafetyHookMid PostProcessOverrideMidHook{};
            PostProcessOverrideMidHook = safetyhook::create_mid(PostProcessOverrideScanResult,
                [](SafetyHookContext& ctx) {
                    if (!ctx.rcx) return;

                    auto obj = reinterpret_cast<SDK::UObject*>(ctx.rcx - 0x28);

                    if (!SharpenInstance || SharpenInstance != obj) {
                        if (obj->GetName().contains("M_Sharpen")) {
                            if (obj->IsA(SDK::UMaterialInstanceConstant::StaticClass())) {
                                SharpenInstance = static_cast<SDK::UMaterialInstanceConstant*>(obj);

                                for (auto& param : SharpenInstance->ScalarParameterValues) {
                                    if (param.ParameterInfo.Name.ToString() == "SharpenGlobal" || param.ParameterInfo.Name.ToString() == "SharpenMainCharacter") {
                                        spdlog::info("PostProcess Override: Sharpening: {} - Set {} from {} to 0.", SharpenInstance->GetName(), param.ParameterInfo.Name.ToString(), param.ParameterValue);
                                        param.ParameterValue = 0.00f;
                                    }
                                }
                            }
                        }
                    }
                });
        }
        else {
            spdlog::error("PostProcess Override: Pattern scan failed.");
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

        spdlog::debug("Enable Console: GEngine address = {:x}", (uintptr_t)Engine);

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
    CurrentResolution();
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
