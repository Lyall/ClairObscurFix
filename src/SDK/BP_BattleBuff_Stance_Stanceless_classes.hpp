﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BattleBuff_Stance_Stanceless

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_BattleBuff_Stance_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BattleBuff_Stance_Stanceless.BP_BattleBuff_Stance_Stanceless_C
// 0x0008 (0x0168 - 0x0160)
class UBP_BattleBuff_Stance_Stanceless_C final : public UBP_BattleBuff_Stance_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_BattleBuff_Stance_Stanceless_C;  // 0x0160(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ActivateBuff(const class UAC_jRPG_CharacterBattleStats_C*& CharacterStats);
	void ExecuteUbergraph_BP_BattleBuff_Stance_Stanceless(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BattleBuff_Stance_Stanceless_C">();
	}
	static class UBP_BattleBuff_Stance_Stanceless_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_BattleBuff_Stance_Stanceless_C>();
	}
};
static_assert(alignof(UBP_BattleBuff_Stance_Stanceless_C) == 0x000008, "Wrong alignment on UBP_BattleBuff_Stance_Stanceless_C");
static_assert(sizeof(UBP_BattleBuff_Stance_Stanceless_C) == 0x000168, "Wrong size on UBP_BattleBuff_Stance_Stanceless_C");
static_assert(offsetof(UBP_BattleBuff_Stance_Stanceless_C, UberGraphFrame_BP_BattleBuff_Stance_Stanceless_C) == 0x000160, "Member 'UBP_BattleBuff_Stance_Stanceless_C::UberGraphFrame_BP_BattleBuff_Stance_Stanceless_C' has a wrong offset!");

}

