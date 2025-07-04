﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SkillDataComponent_ForetellMechanic

#include "Basic.hpp"

#include "E_UniqueMechanic_Foretell_ChargeType_structs.hpp"
#include "BP_SkillDataComponent_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SkillDataComponent_ForetellMechanic.BP_SkillDataComponent_ForetellMechanic_C
// 0x0010 (0x0040 - 0x0030)
class UBP_SkillDataComponent_ForetellMechanic_C final : public UBP_SkillDataComponent_Base_C
{
public:
	int32                                         RequiredForetellSumOnTargets;                      // 0x0030(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RequiredForetellPerTarget;                         // 0x0034(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RequiredForetellSumInBattle;                       // 0x0038(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          NoForetellOnTargets;                               // 0x003C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_UniqueMechanic_Foretell_ChargeType          ChargeType;                                        // 0x003D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool CanSkillEngageTwilight(class UAC_jRPG_CharacterBattleStats_C* CharacterStats);
	bool CheckCharacterHasAnyBuffs(class UAC_jRPG_CharacterBattleStats_C* CharacterStats, const TArray<TSoftClassPtr<class UClass>>& Buffs);
	void GetAnyForetellCount(int32* ForetellCount);
	E_UniqueMechanic_Foretell_ChargeType GetChargeType();
	void IsOverchargeActive(class UAC_jRPG_CharacterBattleStats_C* CharacterStat, bool* Active);
	void ModifySkillButton(class UWBP_HUD_SkillButton_Big_C* SkillButtonWidget);
	void ModifySkillTooltip(class UWBP_SkillTooltip_C* SkillTooltipWidget);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SkillDataComponent_ForetellMechanic_C">();
	}
	static class UBP_SkillDataComponent_ForetellMechanic_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_SkillDataComponent_ForetellMechanic_C>();
	}
};
static_assert(alignof(UBP_SkillDataComponent_ForetellMechanic_C) == 0x000008, "Wrong alignment on UBP_SkillDataComponent_ForetellMechanic_C");
static_assert(sizeof(UBP_SkillDataComponent_ForetellMechanic_C) == 0x000040, "Wrong size on UBP_SkillDataComponent_ForetellMechanic_C");
static_assert(offsetof(UBP_SkillDataComponent_ForetellMechanic_C, RequiredForetellSumOnTargets) == 0x000030, "Member 'UBP_SkillDataComponent_ForetellMechanic_C::RequiredForetellSumOnTargets' has a wrong offset!");
static_assert(offsetof(UBP_SkillDataComponent_ForetellMechanic_C, RequiredForetellPerTarget) == 0x000034, "Member 'UBP_SkillDataComponent_ForetellMechanic_C::RequiredForetellPerTarget' has a wrong offset!");
static_assert(offsetof(UBP_SkillDataComponent_ForetellMechanic_C, RequiredForetellSumInBattle) == 0x000038, "Member 'UBP_SkillDataComponent_ForetellMechanic_C::RequiredForetellSumInBattle' has a wrong offset!");
static_assert(offsetof(UBP_SkillDataComponent_ForetellMechanic_C, NoForetellOnTargets) == 0x00003C, "Member 'UBP_SkillDataComponent_ForetellMechanic_C::NoForetellOnTargets' has a wrong offset!");
static_assert(offsetof(UBP_SkillDataComponent_ForetellMechanic_C, ChargeType) == 0x00003D, "Member 'UBP_SkillDataComponent_ForetellMechanic_C::ChargeType' has a wrong offset!");

}

