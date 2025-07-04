﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BattleBuff_Stance_Virtuose

#include "Basic.hpp"

#include "S_BalancingTableFloatEntry_structs.hpp"
#include "EDamageReason_structs.hpp"
#include "FDamageModifier_structs.hpp"


namespace SDK::Params
{

// Function BP_BattleBuff_Stance_Virtuose.BP_BattleBuff_Stance_Virtuose_C.ActivateBuff
// 0x0008 (0x0008 - 0x0000)
struct BP_BattleBuff_Stance_Virtuose_C_ActivateBuff final
{
public:
	const class UAC_jRPG_CharacterBattleStats_C*  CharacterStats;                                    // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BattleBuff_Stance_Virtuose_C_ActivateBuff) == 0x000008, "Wrong alignment on BP_BattleBuff_Stance_Virtuose_C_ActivateBuff");
static_assert(sizeof(BP_BattleBuff_Stance_Virtuose_C_ActivateBuff) == 0x000008, "Wrong size on BP_BattleBuff_Stance_Virtuose_C_ActivateBuff");
static_assert(offsetof(BP_BattleBuff_Stance_Virtuose_C_ActivateBuff, CharacterStats) == 0x000000, "Member 'BP_BattleBuff_Stance_Virtuose_C_ActivateBuff::CharacterStats' has a wrong offset!");

// Function BP_BattleBuff_Stance_Virtuose.BP_BattleBuff_Stance_Virtuose_C.ExecuteUbergraph_BP_BattleBuff_Stance_Virtuose
// 0x0010 (0x0010 - 0x0000)
struct BP_BattleBuff_Stance_Virtuose_C_ExecuteUbergraph_BP_BattleBuff_Stance_Virtuose final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	const class UAC_jRPG_CharacterBattleStats_C*  K2Node_Event_CharacterStats;                       // 0x0008(0x0008)(ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BattleBuff_Stance_Virtuose_C_ExecuteUbergraph_BP_BattleBuff_Stance_Virtuose) == 0x000008, "Wrong alignment on BP_BattleBuff_Stance_Virtuose_C_ExecuteUbergraph_BP_BattleBuff_Stance_Virtuose");
static_assert(sizeof(BP_BattleBuff_Stance_Virtuose_C_ExecuteUbergraph_BP_BattleBuff_Stance_Virtuose) == 0x000010, "Wrong size on BP_BattleBuff_Stance_Virtuose_C_ExecuteUbergraph_BP_BattleBuff_Stance_Virtuose");
static_assert(offsetof(BP_BattleBuff_Stance_Virtuose_C_ExecuteUbergraph_BP_BattleBuff_Stance_Virtuose, EntryPoint) == 0x000000, "Member 'BP_BattleBuff_Stance_Virtuose_C_ExecuteUbergraph_BP_BattleBuff_Stance_Virtuose::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_BattleBuff_Stance_Virtuose_C_ExecuteUbergraph_BP_BattleBuff_Stance_Virtuose, K2Node_Event_CharacterStats) == 0x000008, "Member 'BP_BattleBuff_Stance_Virtuose_C_ExecuteUbergraph_BP_BattleBuff_Stance_Virtuose::K2Node_Event_CharacterStats' has a wrong offset!");

// Function BP_BattleBuff_Stance_Virtuose.BP_BattleBuff_Stance_Virtuose_C.ProcessDealtRawDamages
// 0x0058 (0x0058 - 0x0000)
struct BP_BattleBuff_Stance_Virtuose_C_ProcessDealtRawDamages final
{
public:
	class UBP_BattleDamages_C*                    BattleDamages;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	bool                                          Out;                                               // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FS_BalancingTableFloatEntry            CallFunc_GetDataTableRowFromName_OutRow;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<EDamageReason>                         K2Node_MakeArray_Array;                            // 0x0018(0x0010)(ConstParm, ReferenceParm)
	struct FFDamageModifier                       K2Node_MakeStruct_FDamageModifier;                 // 0x0028(0x0028)(HasGetValueTypeHash)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BattleBuff_Stance_Virtuose_C_ProcessDealtRawDamages) == 0x000008, "Wrong alignment on BP_BattleBuff_Stance_Virtuose_C_ProcessDealtRawDamages");
static_assert(sizeof(BP_BattleBuff_Stance_Virtuose_C_ProcessDealtRawDamages) == 0x000058, "Wrong size on BP_BattleBuff_Stance_Virtuose_C_ProcessDealtRawDamages");
static_assert(offsetof(BP_BattleBuff_Stance_Virtuose_C_ProcessDealtRawDamages, BattleDamages) == 0x000000, "Member 'BP_BattleBuff_Stance_Virtuose_C_ProcessDealtRawDamages::BattleDamages' has a wrong offset!");
static_assert(offsetof(BP_BattleBuff_Stance_Virtuose_C_ProcessDealtRawDamages, Out) == 0x000008, "Member 'BP_BattleBuff_Stance_Virtuose_C_ProcessDealtRawDamages::Out' has a wrong offset!");
static_assert(offsetof(BP_BattleBuff_Stance_Virtuose_C_ProcessDealtRawDamages, CallFunc_GetDataTableRowFromName_OutRow) == 0x000010, "Member 'BP_BattleBuff_Stance_Virtuose_C_ProcessDealtRawDamages::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(BP_BattleBuff_Stance_Virtuose_C_ProcessDealtRawDamages, K2Node_MakeArray_Array) == 0x000018, "Member 'BP_BattleBuff_Stance_Virtuose_C_ProcessDealtRawDamages::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_BattleBuff_Stance_Virtuose_C_ProcessDealtRawDamages, K2Node_MakeStruct_FDamageModifier) == 0x000028, "Member 'BP_BattleBuff_Stance_Virtuose_C_ProcessDealtRawDamages::K2Node_MakeStruct_FDamageModifier' has a wrong offset!");
static_assert(offsetof(BP_BattleBuff_Stance_Virtuose_C_ProcessDealtRawDamages, CallFunc_Array_Contains_ReturnValue) == 0x000050, "Member 'BP_BattleBuff_Stance_Virtuose_C_ProcessDealtRawDamages::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");

// Function BP_BattleBuff_Stance_Virtuose.BP_BattleBuff_Stance_Virtuose_C.ShouldKeepOnDeath
// 0x0001 (0x0001 - 0x0000)
struct BP_BattleBuff_Stance_Virtuose_C_ShouldKeepOnDeath final
{
public:
	bool                                          Keep;                                              // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BattleBuff_Stance_Virtuose_C_ShouldKeepOnDeath) == 0x000001, "Wrong alignment on BP_BattleBuff_Stance_Virtuose_C_ShouldKeepOnDeath");
static_assert(sizeof(BP_BattleBuff_Stance_Virtuose_C_ShouldKeepOnDeath) == 0x000001, "Wrong size on BP_BattleBuff_Stance_Virtuose_C_ShouldKeepOnDeath");
static_assert(offsetof(BP_BattleBuff_Stance_Virtuose_C_ShouldKeepOnDeath, Keep) == 0x000000, "Member 'BP_BattleBuff_Stance_Virtuose_C_ShouldKeepOnDeath::Keep' has a wrong offset!");

}

