﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Settings_GenericPage

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SandFall_structs.hpp"
#include "CommonUI_classes.hpp"
#include "EModalUIResponse_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Settings_GenericPage.WBP_Settings_GenericPage_C
// 0x0098 (0x04C8 - 0x0430)
class UWBP_Settings_GenericPage_C : public UCommonActivatableWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0430(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNamedSlot*                             NamedSlot_OptionsContainer;                        // 0x0438(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CommonBoundActionButton_C*         WBP_CommonBoundActionButton_ApplySettings;         // 0x0440(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CommonBoundActionButton_C*         WBP_CommonBoundActionButton_Back;                  // 0x0448(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CommonBoundActionButton_C*         WBP_CommonBoundActionButton_Revert;                // 0x0450(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CommonBoundActionButton_C*         WBP_CommonBoundActionButton_SetToDefaults;         // 0x0458(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_OptionTooltip_C*          WBP_Settings_OptionTooltip;                        // 0x0460(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UConfigurableGameUserSettings*          GameUserSettings;                                  // 0x0468(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FText                                   SettingsCategoryName;                              // 0x0470(0x0010)(Edit, BlueprintVisible)
	TMulticastInlineDelegate<void()>              OnBackToOwnerPressed;                              // 0x0480(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	ESF_SettingsCategory                          SettingPageCategory;                               // 0x0490(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_491[0x7];                                      // 0x0491(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSoundEventDataTableRowHandle          SD_OnApply;                                        // 0x0498(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FSoundEventDataTableRowHandle          SD_OnUnsaved;                                      // 0x04A8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FSoundEventDataTableRowHandle          SD_OnSettingsPop;                                  // 0x04B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void RefreshWidgetsWithUserSettings();
	void RevertSettings();
	void AreSettingValidBeforeApply(bool* IsValid);
	void AreSettingsDirty(bool* IsDirty);
	void ResetToDefaults();
	void Apply_Settings();
	void OnOptionEntryFocused(class UWBP_Settings_OptionEntry_C* Widget);
	void SetSettingInformation(const class FText& Name_0, const class FText& Description);
	void BndEvt__WBP_Settings_GenericPage_WBP_CommonBoundActionButton_ApplySettings_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_Settings_GenericPage_WBP_CommonBoundActionButton_Back_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_Settings_GenericPage_WBP_CommonBoundActionButton_Revert_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_Settings_GenericPage_WBP_CommonBoundActionButton_SetToDefaults_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void OnApplySettingsResponse(EModalUIResponse InUserResponse);
	void OnRevertSettingsResponse(EModalUIResponse InUserResponse);
	void OnResetSettingsResponse(EModalUIResponse InUserResponse);
	void OnUnsavedResponse(EModalUIResponse InUserResponse);
	void PreConstruct(bool IsDesignTime);
	void BP_OnDeactivated();
	void BP_OnActivated();
	void ExecuteUbergraph_WBP_Settings_GenericPage(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Settings_GenericPage_C">();
	}
	static class UWBP_Settings_GenericPage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Settings_GenericPage_C>();
	}
};
static_assert(alignof(UWBP_Settings_GenericPage_C) == 0x000008, "Wrong alignment on UWBP_Settings_GenericPage_C");
static_assert(sizeof(UWBP_Settings_GenericPage_C) == 0x0004C8, "Wrong size on UWBP_Settings_GenericPage_C");
static_assert(offsetof(UWBP_Settings_GenericPage_C, UberGraphFrame) == 0x000430, "Member 'UWBP_Settings_GenericPage_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_GenericPage_C, NamedSlot_OptionsContainer) == 0x000438, "Member 'UWBP_Settings_GenericPage_C::NamedSlot_OptionsContainer' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_GenericPage_C, WBP_CommonBoundActionButton_ApplySettings) == 0x000440, "Member 'UWBP_Settings_GenericPage_C::WBP_CommonBoundActionButton_ApplySettings' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_GenericPage_C, WBP_CommonBoundActionButton_Back) == 0x000448, "Member 'UWBP_Settings_GenericPage_C::WBP_CommonBoundActionButton_Back' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_GenericPage_C, WBP_CommonBoundActionButton_Revert) == 0x000450, "Member 'UWBP_Settings_GenericPage_C::WBP_CommonBoundActionButton_Revert' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_GenericPage_C, WBP_CommonBoundActionButton_SetToDefaults) == 0x000458, "Member 'UWBP_Settings_GenericPage_C::WBP_CommonBoundActionButton_SetToDefaults' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_GenericPage_C, WBP_Settings_OptionTooltip) == 0x000460, "Member 'UWBP_Settings_GenericPage_C::WBP_Settings_OptionTooltip' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_GenericPage_C, GameUserSettings) == 0x000468, "Member 'UWBP_Settings_GenericPage_C::GameUserSettings' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_GenericPage_C, SettingsCategoryName) == 0x000470, "Member 'UWBP_Settings_GenericPage_C::SettingsCategoryName' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_GenericPage_C, OnBackToOwnerPressed) == 0x000480, "Member 'UWBP_Settings_GenericPage_C::OnBackToOwnerPressed' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_GenericPage_C, SettingPageCategory) == 0x000490, "Member 'UWBP_Settings_GenericPage_C::SettingPageCategory' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_GenericPage_C, SD_OnApply) == 0x000498, "Member 'UWBP_Settings_GenericPage_C::SD_OnApply' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_GenericPage_C, SD_OnUnsaved) == 0x0004A8, "Member 'UWBP_Settings_GenericPage_C::SD_OnUnsaved' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_GenericPage_C, SD_OnSettingsPop) == 0x0004B8, "Member 'UWBP_Settings_GenericPage_C::SD_OnSettingsPop' has a wrong offset!");

}

