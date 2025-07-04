﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_GM_CharacterMenuContainer

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SandFall_structs.hpp"
#include "E_GameMenuPage_structs.hpp"
#include "CommonUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_GM_CharacterMenuContainer.WBP_GM_CharacterMenuContainer_C
// 0x0150 (0x0580 - 0x0430)
class UWBP_GM_CharacterMenuContainer_C final : public UCommonActivatableWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0430(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anim_Appear;                                       // 0x0438(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonActivatableWidgetSwitcher*       CharacterMenuSwitcher;                             // 0x0440(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonLazyImage*                       PanelStatsBackground;                              // 0x0448(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CharacterSelector_C*               WBP_CharacterSelector;                             // 0x0450(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_GM_CharacterOverview_C*            WBP_GM_CharacterOverview;                          // 0x0458(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_GM_Luminas_Panel_C*                WBP_GM_Luminas_Panel;                              // 0x0460(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_GM_SkillsPanel_C*                  WBP_GM_SkillsPanel;                                // 0x0468(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Panel_CharacterCustomization_C*    WBP_Panel_CharacterCustomization;                  // 0x0470(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Panel_Pictos_C*                    WBP_Panel_Pictos;                                  // 0x0478(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Panel_SkillTree_C*                 WBP_Panel_SkillTree;                               // 0x0480(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Panel_Stats_C*                     WBP_Panel_Stats;                                   // 0x0488(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Panel_Weapon_C*                    WBP_Panel_Weapon;                                  // 0x0490(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_WidescreenRatioBox_C*              WBP_WidescreenRatioBox;                            // 0x0498(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActivatableWidget*               CurrentActiveWidget;                               // 0x04A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ABP_GameMenuScene_C*                    GameMenuScene;                                     // 0x04A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TMulticastInlineDelegate<void()>              OnBackPressed;                                     // 0x04B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void(class UBP_CharacterData_C* NewCharacter)> OnSelectedCharacterChanged; // 0x04C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FSoundEventDataTableRowHandle          SD_OnTabChanged;                                   // 0x04D0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FSoundEventDataTableRowHandle          SD_OnBack;                                         // 0x04E0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                          IsBackAllowed;                                     // 0x04F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AllowCharacterChanges;                             // 0x04F1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F2[0x6];                                      // 0x04F2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonActivatableWidget*               NextSwitcherTarget;                                // 0x04F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TMulticastInlineDelegate<void(E_GameMenuPage InActivePage)> OnActivePageChanged;                 // 0x0500(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMap<class UCommonActivatableWidget*, E_GameMenuPage> MenuPageMap;                               // 0x0510(0x0050)(Edit, BlueprintVisible, Transient, DisableEditOnInstance, ContainsInstancedReference)
	struct FSoundEventDataTableRowHandle          SD_OnActivated;                                    // 0x0560(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FSoundEventDataTableRowHandle          SD_OnDeactivated;                                  // 0x0570(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void ActivateCurrentWidgetInSwitcher();
	void BackToCharacterOverview();
	void BndEvt__WBP_GM_CharacterMenuContainer_WBP_GM_CharacterOverview_K2Node_ComponentBoundEvent_11_OnSkillClicked__DelegateSignature(int32 InSlotIndex);
	void BndEvt__WBP_GM_CharacterMenuContainer_WBP_GM_CharacterOverview_K2Node_ComponentBoundEvent_12_OnLuminaClicked__DelegateSignature(class FName PassiveEffectID);
	void BndEvt__WBP_GM_CharacterMenuContainer_WBP_GM_CharacterOverview_K2Node_ComponentBoundEvent_2_OnWardrobeClicked__DelegateSignature();
	void BndEvt__WBP_GM_CharacterMenuContainer_WBP_GM_CharacterOverview_K2Node_ComponentBoundEvent_7_OnWeaponClicked__DelegateSignature();
	void BndEvt__WBP_GM_CharacterMenuContainer_WBP_GM_CharacterOverview_K2Node_ComponentBoundEvent_9_OnPictoClicked__DelegateSignature(int32 PictoIndex);
	void BndEvt__WBP_GM_CharacterMenuContainer_WBP_GM_Luminas_Panel_K2Node_ComponentBoundEvent_8_OnGoToPictosButtonClicked__DelegateSignature();
	void BndEvt__WBP_GM_CharacterMenuContainer_WBP_GM_SkillsPanel_K2Node_ComponentBoundEvent_3_OnRequestLockCharacterSwitch__DelegateSignature(bool ShouldLock);
	void BndEvt__WBP_GM_CharacterMenuContainer_WBP_GM_SkillsPanel_K2Node_ComponentBoundEvent_5_OnSkillTreeButtonClicked__DelegateSignature();
	void BndEvt__WBP_GM_CharacterMenuContainer_WBP_Panel_Pictos_K2Node_ComponentBoundEvent_0_OnRequestLockCharacterSwitch__DelegateSignature(bool ShouldLock);
	void BndEvt__WBP_GM_CharacterMenuContainer_WBP_Panel_Pictos_K2Node_ComponentBoundEvent_10_OnGoToLuminaButtonClicked__DelegateSignature(class FName PassiveEffectID);
	void BndEvt__WBP_GM_CharacterMenuContainer_WBP_Panel_SkillTree_K2Node_ComponentBoundEvent_6_OnSkillAssignClicked__DelegateSignature(class UBP_DataAsset_Skill_C* SkillData);
	void BndEvt__WBP_GM_CharacterMenuContainer_WBP_Panel_Weapon_K2Node_ComponentBoundEvent_4_OnEquippedWeaponChanged__DelegateSignature(class UBP_WeaponViewItem_C* WeaponViewItem);
	void BndEvt__WBP_GM_TeamMenu_WBP_CharacterSelector_K2Node_ComponentBoundEvent_1_OnSelectedCharacterChanged__DelegateSignature(class UBP_CharacterData_C* NewCharacter);
	void BP_OnActivated();
	void BP_OnDeactivated();
	bool BP_OnHandleBackAction();
	void Construct();
	void DeactivateCurrentWidgetInSwitcher();
	void ExecuteUbergraph_WBP_GM_CharacterMenuContainer(int32 EntryPoint);
	void GetCharacterNotificationStatus(class UBP_CharacterData_C* CharacterData, bool* HasNotification);
	void LoadCurrentCharacterWidget();
	void OnCharacterChanged();
	void OnCharacterLockRequested(bool ShouldLock);
	void OnLoaded_7B53D4414B98BB08CA1B05B80518FC55(TSubclassOf<class UObject> Loaded);
	void OnNextTick();
	void SetActiveWidgetInMenuSwitcher(class UCommonActivatableWidget* InActiveWidget);
	void SetAppear();
	void SetCharacterChangesAllowed(bool Allowed);
	void SetIsBackAllowed(bool IsBackAllowed_0);
	bool ShouldShowOnlyCurrentTabNotificationDots();
	void UpdateNotificationStatus();

	class UWidget* BP_GetDesiredFocusTarget() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_GM_CharacterMenuContainer_C">();
	}
	static class UWBP_GM_CharacterMenuContainer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_GM_CharacterMenuContainer_C>();
	}
};
static_assert(alignof(UWBP_GM_CharacterMenuContainer_C) == 0x000008, "Wrong alignment on UWBP_GM_CharacterMenuContainer_C");
static_assert(sizeof(UWBP_GM_CharacterMenuContainer_C) == 0x000580, "Wrong size on UWBP_GM_CharacterMenuContainer_C");
static_assert(offsetof(UWBP_GM_CharacterMenuContainer_C, UberGraphFrame) == 0x000430, "Member 'UWBP_GM_CharacterMenuContainer_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_GM_CharacterMenuContainer_C, Anim_Appear) == 0x000438, "Member 'UWBP_GM_CharacterMenuContainer_C::Anim_Appear' has a wrong offset!");
static_assert(offsetof(UWBP_GM_CharacterMenuContainer_C, CharacterMenuSwitcher) == 0x000440, "Member 'UWBP_GM_CharacterMenuContainer_C::CharacterMenuSwitcher' has a wrong offset!");
static_assert(offsetof(UWBP_GM_CharacterMenuContainer_C, PanelStatsBackground) == 0x000448, "Member 'UWBP_GM_CharacterMenuContainer_C::PanelStatsBackground' has a wrong offset!");
static_assert(offsetof(UWBP_GM_CharacterMenuContainer_C, WBP_CharacterSelector) == 0x000450, "Member 'UWBP_GM_CharacterMenuContainer_C::WBP_CharacterSelector' has a wrong offset!");
static_assert(offsetof(UWBP_GM_CharacterMenuContainer_C, WBP_GM_CharacterOverview) == 0x000458, "Member 'UWBP_GM_CharacterMenuContainer_C::WBP_GM_CharacterOverview' has a wrong offset!");
static_assert(offsetof(UWBP_GM_CharacterMenuContainer_C, WBP_GM_Luminas_Panel) == 0x000460, "Member 'UWBP_GM_CharacterMenuContainer_C::WBP_GM_Luminas_Panel' has a wrong offset!");
static_assert(offsetof(UWBP_GM_CharacterMenuContainer_C, WBP_GM_SkillsPanel) == 0x000468, "Member 'UWBP_GM_CharacterMenuContainer_C::WBP_GM_SkillsPanel' has a wrong offset!");
static_assert(offsetof(UWBP_GM_CharacterMenuContainer_C, WBP_Panel_CharacterCustomization) == 0x000470, "Member 'UWBP_GM_CharacterMenuContainer_C::WBP_Panel_CharacterCustomization' has a wrong offset!");
static_assert(offsetof(UWBP_GM_CharacterMenuContainer_C, WBP_Panel_Pictos) == 0x000478, "Member 'UWBP_GM_CharacterMenuContainer_C::WBP_Panel_Pictos' has a wrong offset!");
static_assert(offsetof(UWBP_GM_CharacterMenuContainer_C, WBP_Panel_SkillTree) == 0x000480, "Member 'UWBP_GM_CharacterMenuContainer_C::WBP_Panel_SkillTree' has a wrong offset!");
static_assert(offsetof(UWBP_GM_CharacterMenuContainer_C, WBP_Panel_Stats) == 0x000488, "Member 'UWBP_GM_CharacterMenuContainer_C::WBP_Panel_Stats' has a wrong offset!");
static_assert(offsetof(UWBP_GM_CharacterMenuContainer_C, WBP_Panel_Weapon) == 0x000490, "Member 'UWBP_GM_CharacterMenuContainer_C::WBP_Panel_Weapon' has a wrong offset!");
static_assert(offsetof(UWBP_GM_CharacterMenuContainer_C, WBP_WidescreenRatioBox) == 0x000498, "Member 'UWBP_GM_CharacterMenuContainer_C::WBP_WidescreenRatioBox' has a wrong offset!");
static_assert(offsetof(UWBP_GM_CharacterMenuContainer_C, CurrentActiveWidget) == 0x0004A0, "Member 'UWBP_GM_CharacterMenuContainer_C::CurrentActiveWidget' has a wrong offset!");
static_assert(offsetof(UWBP_GM_CharacterMenuContainer_C, GameMenuScene) == 0x0004A8, "Member 'UWBP_GM_CharacterMenuContainer_C::GameMenuScene' has a wrong offset!");
static_assert(offsetof(UWBP_GM_CharacterMenuContainer_C, OnBackPressed) == 0x0004B0, "Member 'UWBP_GM_CharacterMenuContainer_C::OnBackPressed' has a wrong offset!");
static_assert(offsetof(UWBP_GM_CharacterMenuContainer_C, OnSelectedCharacterChanged) == 0x0004C0, "Member 'UWBP_GM_CharacterMenuContainer_C::OnSelectedCharacterChanged' has a wrong offset!");
static_assert(offsetof(UWBP_GM_CharacterMenuContainer_C, SD_OnTabChanged) == 0x0004D0, "Member 'UWBP_GM_CharacterMenuContainer_C::SD_OnTabChanged' has a wrong offset!");
static_assert(offsetof(UWBP_GM_CharacterMenuContainer_C, SD_OnBack) == 0x0004E0, "Member 'UWBP_GM_CharacterMenuContainer_C::SD_OnBack' has a wrong offset!");
static_assert(offsetof(UWBP_GM_CharacterMenuContainer_C, IsBackAllowed) == 0x0004F0, "Member 'UWBP_GM_CharacterMenuContainer_C::IsBackAllowed' has a wrong offset!");
static_assert(offsetof(UWBP_GM_CharacterMenuContainer_C, AllowCharacterChanges) == 0x0004F1, "Member 'UWBP_GM_CharacterMenuContainer_C::AllowCharacterChanges' has a wrong offset!");
static_assert(offsetof(UWBP_GM_CharacterMenuContainer_C, NextSwitcherTarget) == 0x0004F8, "Member 'UWBP_GM_CharacterMenuContainer_C::NextSwitcherTarget' has a wrong offset!");
static_assert(offsetof(UWBP_GM_CharacterMenuContainer_C, OnActivePageChanged) == 0x000500, "Member 'UWBP_GM_CharacterMenuContainer_C::OnActivePageChanged' has a wrong offset!");
static_assert(offsetof(UWBP_GM_CharacterMenuContainer_C, MenuPageMap) == 0x000510, "Member 'UWBP_GM_CharacterMenuContainer_C::MenuPageMap' has a wrong offset!");
static_assert(offsetof(UWBP_GM_CharacterMenuContainer_C, SD_OnActivated) == 0x000560, "Member 'UWBP_GM_CharacterMenuContainer_C::SD_OnActivated' has a wrong offset!");
static_assert(offsetof(UWBP_GM_CharacterMenuContainer_C, SD_OnDeactivated) == 0x000570, "Member 'UWBP_GM_CharacterMenuContainer_C::SD_OnDeactivated' has a wrong offset!");

}

