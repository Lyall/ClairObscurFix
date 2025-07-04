﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_GM_Settings_Page

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SandFall_structs.hpp"
#include "CommonUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_GM_Settings_Page.WBP_GM_Settings_Page_C
// 0x0068 (0x0498 - 0x0430)
class UWBP_GM_Settings_Page_C final : public UCommonActivatableWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0430(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonActivatableWidgetSwitcher*       CommonActivatableWidgetSwitcher;                   // 0x0438(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_AccessibilityOptions_C*   WBP_Settings_AccessibilityOptions;                 // 0x0440(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_ControllerLayout_C*       WBP_Settings_ControllerLayout;                     // 0x0448(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_GameplayOptions_C*        WBP_Settings_GameplayOptions;                      // 0x0450(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_GeneralOptions_C*         WBP_Settings_GeneralOptions;                       // 0x0458(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_GraphicsOptions_C*        WBP_Settings_GraphicsOptions;                      // 0x0460(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_InputOptions_C*           WBP_Settings_InputOptions;                         // 0x0468(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_SoundOptions_C*           WBP_Settings_SoundOptions;                         // 0x0470(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_StartGameOptions_C*       WBP_Settings_StartGameOptions;                     // 0x0478(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Top_MenuHorizontal_C*              WBP_Top_MenuHorizontal_SettingsCategories;         // 0x0480(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSoundEventDataTableRowHandle          SD_OnActivated;                                    // 0x0488(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void BP_OnActivated();
	void BP_OnDeactivated();
	void Construct();
	void ExecuteUbergraph_WBP_GM_Settings_Page(int32 EntryPoint);
	void SetStartGameState(bool IsInStartGameState);

	class UWidget* BP_GetDesiredFocusTarget() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_GM_Settings_Page_C">();
	}
	static class UWBP_GM_Settings_Page_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_GM_Settings_Page_C>();
	}
};
static_assert(alignof(UWBP_GM_Settings_Page_C) == 0x000008, "Wrong alignment on UWBP_GM_Settings_Page_C");
static_assert(sizeof(UWBP_GM_Settings_Page_C) == 0x000498, "Wrong size on UWBP_GM_Settings_Page_C");
static_assert(offsetof(UWBP_GM_Settings_Page_C, UberGraphFrame) == 0x000430, "Member 'UWBP_GM_Settings_Page_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_GM_Settings_Page_C, CommonActivatableWidgetSwitcher) == 0x000438, "Member 'UWBP_GM_Settings_Page_C::CommonActivatableWidgetSwitcher' has a wrong offset!");
static_assert(offsetof(UWBP_GM_Settings_Page_C, WBP_Settings_AccessibilityOptions) == 0x000440, "Member 'UWBP_GM_Settings_Page_C::WBP_Settings_AccessibilityOptions' has a wrong offset!");
static_assert(offsetof(UWBP_GM_Settings_Page_C, WBP_Settings_ControllerLayout) == 0x000448, "Member 'UWBP_GM_Settings_Page_C::WBP_Settings_ControllerLayout' has a wrong offset!");
static_assert(offsetof(UWBP_GM_Settings_Page_C, WBP_Settings_GameplayOptions) == 0x000450, "Member 'UWBP_GM_Settings_Page_C::WBP_Settings_GameplayOptions' has a wrong offset!");
static_assert(offsetof(UWBP_GM_Settings_Page_C, WBP_Settings_GeneralOptions) == 0x000458, "Member 'UWBP_GM_Settings_Page_C::WBP_Settings_GeneralOptions' has a wrong offset!");
static_assert(offsetof(UWBP_GM_Settings_Page_C, WBP_Settings_GraphicsOptions) == 0x000460, "Member 'UWBP_GM_Settings_Page_C::WBP_Settings_GraphicsOptions' has a wrong offset!");
static_assert(offsetof(UWBP_GM_Settings_Page_C, WBP_Settings_InputOptions) == 0x000468, "Member 'UWBP_GM_Settings_Page_C::WBP_Settings_InputOptions' has a wrong offset!");
static_assert(offsetof(UWBP_GM_Settings_Page_C, WBP_Settings_SoundOptions) == 0x000470, "Member 'UWBP_GM_Settings_Page_C::WBP_Settings_SoundOptions' has a wrong offset!");
static_assert(offsetof(UWBP_GM_Settings_Page_C, WBP_Settings_StartGameOptions) == 0x000478, "Member 'UWBP_GM_Settings_Page_C::WBP_Settings_StartGameOptions' has a wrong offset!");
static_assert(offsetof(UWBP_GM_Settings_Page_C, WBP_Top_MenuHorizontal_SettingsCategories) == 0x000480, "Member 'UWBP_GM_Settings_Page_C::WBP_Top_MenuHorizontal_SettingsCategories' has a wrong offset!");
static_assert(offsetof(UWBP_GM_Settings_Page_C, SD_OnActivated) == 0x000488, "Member 'UWBP_GM_Settings_Page_C::SD_OnActivated' has a wrong offset!");

}

