﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BattleBuff_Foretell

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_BattleBuffInstance_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BattleBuff_Foretell.BP_BattleBuff_Foretell_C
// 0x0010 (0x0168 - 0x0158)
class UBP_BattleBuff_Foretell_C final : public UBP_BattleBuffInstance_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_BattleBuff_Foretell_C;           // 0x0158(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_BuffWidget_Foretell_C*             local_customWidget;                                // 0x0160(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void ActivateBuff(const class UAC_jRPG_CharacterBattleStats_C*& CharacterStats);
	void ExecuteUbergraph_BP_BattleBuff_Foretell(int32 EntryPoint);
	void InitializeCustomBuffWidget(class UWBP_jRPG_BuffSlot_C* BuffWidget, bool* DummyOut);
	void UpdateCustomBuffWidget(class UWBP_jRPG_BuffSlot_C* BuffWidget, bool* DummyOut);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BattleBuff_Foretell_C">();
	}
	static class UBP_BattleBuff_Foretell_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_BattleBuff_Foretell_C>();
	}
};
static_assert(alignof(UBP_BattleBuff_Foretell_C) == 0x000008, "Wrong alignment on UBP_BattleBuff_Foretell_C");
static_assert(sizeof(UBP_BattleBuff_Foretell_C) == 0x000168, "Wrong size on UBP_BattleBuff_Foretell_C");
static_assert(offsetof(UBP_BattleBuff_Foretell_C, UberGraphFrame_BP_BattleBuff_Foretell_C) == 0x000158, "Member 'UBP_BattleBuff_Foretell_C::UberGraphFrame_BP_BattleBuff_Foretell_C' has a wrong offset!");
static_assert(offsetof(UBP_BattleBuff_Foretell_C, local_customWidget) == 0x000160, "Member 'UBP_BattleBuff_Foretell_C::local_customWidget' has a wrong offset!");

}

