﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SkillDataComponent_MaskMechanic

#include "Basic.hpp"

#include "E_Transform_Masks_Mechanic_structs.hpp"
#include "BP_SkillDataComponent_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SkillDataComponent_MaskMechanic.BP_SkillDataComponent_MaskMechanic_C
// 0x0018 (0x0048 - 0x0030)
class UBP_SkillDataComponent_MaskMechanic_C final : public UBP_SkillDataComponent_Base_C
{
public:
	TArray<E_Transform_Masks_Mechanic>            AnyMaskInList;                                     // 0x0030(0x0010)(Edit, BlueprintVisible)
	int32                                         AdvanceMeter;                                      // 0x0040(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void IsOverchargeActive(class UAC_jRPG_CharacterBattleStats_C* CharacterStat, bool* Active);
	void ModifySkillButton(class UWBP_HUD_SkillButton_Big_C* SkillButtonWidget);
	void ModifySkillTooltip(class UWBP_SkillTooltip_C* SkillTooltipWidget);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SkillDataComponent_MaskMechanic_C">();
	}
	static class UBP_SkillDataComponent_MaskMechanic_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_SkillDataComponent_MaskMechanic_C>();
	}
};
static_assert(alignof(UBP_SkillDataComponent_MaskMechanic_C) == 0x000008, "Wrong alignment on UBP_SkillDataComponent_MaskMechanic_C");
static_assert(sizeof(UBP_SkillDataComponent_MaskMechanic_C) == 0x000048, "Wrong size on UBP_SkillDataComponent_MaskMechanic_C");
static_assert(offsetof(UBP_SkillDataComponent_MaskMechanic_C, AnyMaskInList) == 0x000030, "Member 'UBP_SkillDataComponent_MaskMechanic_C::AnyMaskInList' has a wrong offset!");
static_assert(offsetof(UBP_SkillDataComponent_MaskMechanic_C, AdvanceMeter) == 0x000040, "Member 'UBP_SkillDataComponent_MaskMechanic_C::AdvanceMeter' has a wrong offset!");

}

