﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BattleBuff_Followup_FreeAimCount

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_BattleBuffInstance_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BattleBuff_Followup_FreeAimCount.BP_BattleBuff_Followup_FreeAimCount_C
// 0x0010 (0x0168 - 0x0158)
class UBP_BattleBuff_Followup_FreeAimCount_C final : public UBP_BattleBuffInstance_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_BattleBuff_Followup_FreeAimCount_C; // 0x0158(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         FreeAimCount;                                      // 0x0160(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_BattleBuff_Followup_FreeAimCount(int32 EntryPoint);
	void OnCharacterTurnStart(class UAC_jRPG_CharacterBattleStats_C* CharacterStats, const class UBP_DependencyRefCounter_C*& TurnStartDependencies);
	void ProcessDealtRawDamages(class UBP_BattleDamages_C*& BattleDamages, bool* Out);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BattleBuff_Followup_FreeAimCount_C">();
	}
	static class UBP_BattleBuff_Followup_FreeAimCount_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_BattleBuff_Followup_FreeAimCount_C>();
	}
};
static_assert(alignof(UBP_BattleBuff_Followup_FreeAimCount_C) == 0x000008, "Wrong alignment on UBP_BattleBuff_Followup_FreeAimCount_C");
static_assert(sizeof(UBP_BattleBuff_Followup_FreeAimCount_C) == 0x000168, "Wrong size on UBP_BattleBuff_Followup_FreeAimCount_C");
static_assert(offsetof(UBP_BattleBuff_Followup_FreeAimCount_C, UberGraphFrame_BP_BattleBuff_Followup_FreeAimCount_C) == 0x000158, "Member 'UBP_BattleBuff_Followup_FreeAimCount_C::UberGraphFrame_BP_BattleBuff_Followup_FreeAimCount_C' has a wrong offset!");
static_assert(offsetof(UBP_BattleBuff_Followup_FreeAimCount_C, FreeAimCount) == 0x000160, "Member 'UBP_BattleBuff_Followup_FreeAimCount_C::FreeAimCount' has a wrong offset!");

}

