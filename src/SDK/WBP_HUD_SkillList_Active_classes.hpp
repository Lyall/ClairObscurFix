﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HUD_SkillList_Active

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "EBattleForbiddenActionReason_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_HUD_SkillList-Active.WBP_HUD_SkillList-Active_C
// 0x00C8 (0x03A8 - 0x02E0)
class UWBP_HUD_SkillList_Active_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anim_Reduce;                                       // 0x02E8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_Appear;                                       // 0x02F0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWBP_HUD_SkillButton_Big_C*             WBP_HUD_SkillButton_Big_1;                         // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_HUD_SkillButton_Big_C*             WBP_HUD_SkillButton_Big_2;                         // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_HUD_SkillButton_Big_C*             WBP_HUD_SkillButton_Big_3;                         // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          StartsReduced;                                     // 0x0310(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_311[0x7];                                      // 0x0311(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void(class FName SkillID)> OnSkillChosen;                               // 0x0318(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMap<class UWBP_HUD_SkillButton_Big_C*, bool> ButtonEnabledState;                                // 0x0328(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TMulticastInlineDelegate<void(EBattleForbiddenActionReason ForbiddenReason)> OnSkillDenied;      // 0x0378(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UWBP_HUD_SkillButton_Big_C*             LastClickedButton;                                 // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          IsBattleContext;                                   // 0x0390(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InputVisible;                                      // 0x0391(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AllowEmptyButtons;                                 // 0x0392(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_393[0x5];                                      // 0x0393(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void(int32 ButtonIndex)> OnButtonChosen;                                // 0x0398(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void Appear();
	void Construct();
	void Disappear();
	void ExecuteUbergraph_WBP_HUD_SkillList_Active(int32 EntryPoint);
	void FindButtonBySkill(class UBP_DataAsset_Skill_C* SkillDefinition, class UWBP_HUD_SkillButton_Big_C** SkillButton);
	void GetAllButtons(TArray<class UWBP_HUD_SkillButton_Big_C*>* Array);
	void InitAppear();
	bool IsButtonEnabled(const class UWBP_HUD_SkillButton_Big_C*& Button);
	void LoadSkillsData(class UAC_jRPG_CharacterBattleStats_C* CharacterStats, TArray<class UBP_DataAsset_Skill_C*>& Skills);
	void OnSkillButtonClicked(class UWBP_HUD_SkillButton_Big_C* Button);
	void OnSkillButtonDenied(EBattleForbiddenActionReason ForbiddenReason, class UWBP_HUD_SkillButton_Big_C* Button);
	void PreConstruct(bool IsDesignTime);
	void SetAllowEmptyButtons(bool Allow);
	void SetButtonsInputEnabled(bool Active);
	void SetExpandedWithAnim();
	void SetInputVisible(bool Visible);
	void SetReducedWithAnim();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_HUD_SkillList-Active_C">();
	}
	static class UWBP_HUD_SkillList_Active_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_HUD_SkillList_Active_C>();
	}
};
static_assert(alignof(UWBP_HUD_SkillList_Active_C) == 0x000008, "Wrong alignment on UWBP_HUD_SkillList_Active_C");
static_assert(sizeof(UWBP_HUD_SkillList_Active_C) == 0x0003A8, "Wrong size on UWBP_HUD_SkillList_Active_C");
static_assert(offsetof(UWBP_HUD_SkillList_Active_C, UberGraphFrame) == 0x0002E0, "Member 'UWBP_HUD_SkillList_Active_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_SkillList_Active_C, Anim_Reduce) == 0x0002E8, "Member 'UWBP_HUD_SkillList_Active_C::Anim_Reduce' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_SkillList_Active_C, Anim_Appear) == 0x0002F0, "Member 'UWBP_HUD_SkillList_Active_C::Anim_Appear' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_SkillList_Active_C, WBP_HUD_SkillButton_Big_1) == 0x0002F8, "Member 'UWBP_HUD_SkillList_Active_C::WBP_HUD_SkillButton_Big_1' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_SkillList_Active_C, WBP_HUD_SkillButton_Big_2) == 0x000300, "Member 'UWBP_HUD_SkillList_Active_C::WBP_HUD_SkillButton_Big_2' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_SkillList_Active_C, WBP_HUD_SkillButton_Big_3) == 0x000308, "Member 'UWBP_HUD_SkillList_Active_C::WBP_HUD_SkillButton_Big_3' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_SkillList_Active_C, StartsReduced) == 0x000310, "Member 'UWBP_HUD_SkillList_Active_C::StartsReduced' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_SkillList_Active_C, OnSkillChosen) == 0x000318, "Member 'UWBP_HUD_SkillList_Active_C::OnSkillChosen' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_SkillList_Active_C, ButtonEnabledState) == 0x000328, "Member 'UWBP_HUD_SkillList_Active_C::ButtonEnabledState' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_SkillList_Active_C, OnSkillDenied) == 0x000378, "Member 'UWBP_HUD_SkillList_Active_C::OnSkillDenied' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_SkillList_Active_C, LastClickedButton) == 0x000388, "Member 'UWBP_HUD_SkillList_Active_C::LastClickedButton' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_SkillList_Active_C, IsBattleContext) == 0x000390, "Member 'UWBP_HUD_SkillList_Active_C::IsBattleContext' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_SkillList_Active_C, InputVisible) == 0x000391, "Member 'UWBP_HUD_SkillList_Active_C::InputVisible' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_SkillList_Active_C, AllowEmptyButtons) == 0x000392, "Member 'UWBP_HUD_SkillList_Active_C::AllowEmptyButtons' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_SkillList_Active_C, OnButtonChosen) == 0x000398, "Member 'UWBP_HUD_SkillList_Active_C::OnButtonChosen' has a wrong offset!");

}

