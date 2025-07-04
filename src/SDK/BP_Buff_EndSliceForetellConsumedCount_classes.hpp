﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Buff_EndSliceForetellConsumedCount

#include "Basic.hpp"

#include "EBattleContext_structs.hpp"
#include "Engine_structs.hpp"
#include "BP_BattleBuffInstance_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Buff_EndSliceForetellConsumedCount.BP_Buff_EndSliceForetellConsumedCount_C
// 0x0010 (0x0168 - 0x0158)
class UBP_Buff_EndSliceForetellConsumedCount_C final : public UBP_BattleBuffInstance_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Buff_EndSliceForetellConsumedCount_C; // 0x0158(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         ForetellConsumedAmount;                            // 0x0160(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ActivateBuff(const class UAC_jRPG_CharacterBattleStats_C*& CharacterStats);
	void ExecuteUbergraph_BP_Buff_EndSliceForetellConsumedCount(int32 EntryPoint);
	void ForetellConsumedCount(class UAC_jRPG_CharacterBattleStats_C* TargetStats, int32 PreviousForetell, int32 ForetellConsumed, EBattleContext Reason);
	void GetForetellConsumedAmount(int32* ForetellConsumedAmount_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Buff_EndSliceForetellConsumedCount_C">();
	}
	static class UBP_Buff_EndSliceForetellConsumedCount_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Buff_EndSliceForetellConsumedCount_C>();
	}
};
static_assert(alignof(UBP_Buff_EndSliceForetellConsumedCount_C) == 0x000008, "Wrong alignment on UBP_Buff_EndSliceForetellConsumedCount_C");
static_assert(sizeof(UBP_Buff_EndSliceForetellConsumedCount_C) == 0x000168, "Wrong size on UBP_Buff_EndSliceForetellConsumedCount_C");
static_assert(offsetof(UBP_Buff_EndSliceForetellConsumedCount_C, UberGraphFrame_BP_Buff_EndSliceForetellConsumedCount_C) == 0x000158, "Member 'UBP_Buff_EndSliceForetellConsumedCount_C::UberGraphFrame_BP_Buff_EndSliceForetellConsumedCount_C' has a wrong offset!");
static_assert(offsetof(UBP_Buff_EndSliceForetellConsumedCount_C, ForetellConsumedAmount) == 0x000160, "Member 'UBP_Buff_EndSliceForetellConsumedCount_C::ForetellConsumedAmount' has a wrong offset!");

}

