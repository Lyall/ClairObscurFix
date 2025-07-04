﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GameActionInstance_RemoveExternalCompanion

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_GameActionInstance_RemoveExternalCompanion.BP_GameActionInstance_RemoveExternalCompanion_C.ExecuteGameAction
// 0x0008 (0x0008 - 0x0000)
struct BP_GameActionInstance_RemoveExternalCompanion_C_ExecuteGameAction final
{
public:
	const class APlayerController*                Controller;                                        // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GameActionInstance_RemoveExternalCompanion_C_ExecuteGameAction) == 0x000008, "Wrong alignment on BP_GameActionInstance_RemoveExternalCompanion_C_ExecuteGameAction");
static_assert(sizeof(BP_GameActionInstance_RemoveExternalCompanion_C_ExecuteGameAction) == 0x000008, "Wrong size on BP_GameActionInstance_RemoveExternalCompanion_C_ExecuteGameAction");
static_assert(offsetof(BP_GameActionInstance_RemoveExternalCompanion_C_ExecuteGameAction, Controller) == 0x000000, "Member 'BP_GameActionInstance_RemoveExternalCompanion_C_ExecuteGameAction::Controller' has a wrong offset!");

// Function BP_GameActionInstance_RemoveExternalCompanion.BP_GameActionInstance_RemoveExternalCompanion_C.ExecuteUbergraph_BP_GameActionInstance_RemoveExternalCompanion
// 0x0078 (0x0078 - 0x0000)
struct BP_GameActionInstance_RemoveExternalCompanion_C_ExecuteUbergraph_BP_GameActionInstance_RemoveExternalCompanion final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_jRPG_Character_World_C*             K2Node_DynamicCast_AsBP_J_RPG_Character_World;     // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           Temp_wildcard_Variable;                            // 0x0028(0x0010)(ReferenceParm)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	const class APlayerController*                K2Node_Event_Controller;                           // 0x0050(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           CallFunc_GetCharacterNames_ReturnValue;            // 0x0058(0x0010)(ReferenceParm)
	class UBP_jRPG_GI_Custom_C*                   CallFunc_GetCustomGI_ReturnValue;                  // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GameActionInstance_RemoveExternalCompanion_C_ExecuteUbergraph_BP_GameActionInstance_RemoveExternalCompanion) == 0x000008, "Wrong alignment on BP_GameActionInstance_RemoveExternalCompanion_C_ExecuteUbergraph_BP_GameActionInstance_RemoveExternalCompanion");
static_assert(sizeof(BP_GameActionInstance_RemoveExternalCompanion_C_ExecuteUbergraph_BP_GameActionInstance_RemoveExternalCompanion) == 0x000078, "Wrong size on BP_GameActionInstance_RemoveExternalCompanion_C_ExecuteUbergraph_BP_GameActionInstance_RemoveExternalCompanion");
static_assert(offsetof(BP_GameActionInstance_RemoveExternalCompanion_C_ExecuteUbergraph_BP_GameActionInstance_RemoveExternalCompanion, EntryPoint) == 0x000000, "Member 'BP_GameActionInstance_RemoveExternalCompanion_C_ExecuteUbergraph_BP_GameActionInstance_RemoveExternalCompanion::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_RemoveExternalCompanion_C_ExecuteUbergraph_BP_GameActionInstance_RemoveExternalCompanion, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000008, "Member 'BP_GameActionInstance_RemoveExternalCompanion_C_ExecuteUbergraph_BP_GameActionInstance_RemoveExternalCompanion::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_RemoveExternalCompanion_C_ExecuteUbergraph_BP_GameActionInstance_RemoveExternalCompanion, K2Node_DynamicCast_AsBP_J_RPG_Character_World) == 0x000010, "Member 'BP_GameActionInstance_RemoveExternalCompanion_C_ExecuteUbergraph_BP_GameActionInstance_RemoveExternalCompanion::K2Node_DynamicCast_AsBP_J_RPG_Character_World' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_RemoveExternalCompanion_C_ExecuteUbergraph_BP_GameActionInstance_RemoveExternalCompanion, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_GameActionInstance_RemoveExternalCompanion_C_ExecuteUbergraph_BP_GameActionInstance_RemoveExternalCompanion::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_RemoveExternalCompanion_C_ExecuteUbergraph_BP_GameActionInstance_RemoveExternalCompanion, Temp_int_Array_Index_Variable) == 0x00001C, "Member 'BP_GameActionInstance_RemoveExternalCompanion_C_ExecuteUbergraph_BP_GameActionInstance_RemoveExternalCompanion::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_RemoveExternalCompanion_C_ExecuteUbergraph_BP_GameActionInstance_RemoveExternalCompanion, Temp_int_Loop_Counter_Variable) == 0x000020, "Member 'BP_GameActionInstance_RemoveExternalCompanion_C_ExecuteUbergraph_BP_GameActionInstance_RemoveExternalCompanion::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_RemoveExternalCompanion_C_ExecuteUbergraph_BP_GameActionInstance_RemoveExternalCompanion, Temp_wildcard_Variable) == 0x000028, "Member 'BP_GameActionInstance_RemoveExternalCompanion_C_ExecuteUbergraph_BP_GameActionInstance_RemoveExternalCompanion::Temp_wildcard_Variable' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_RemoveExternalCompanion_C_ExecuteUbergraph_BP_GameActionInstance_RemoveExternalCompanion, CallFunc_Array_Get_Item) == 0x000038, "Member 'BP_GameActionInstance_RemoveExternalCompanion_C_ExecuteUbergraph_BP_GameActionInstance_RemoveExternalCompanion::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_RemoveExternalCompanion_C_ExecuteUbergraph_BP_GameActionInstance_RemoveExternalCompanion, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'BP_GameActionInstance_RemoveExternalCompanion_C_ExecuteUbergraph_BP_GameActionInstance_RemoveExternalCompanion::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_RemoveExternalCompanion_C_ExecuteUbergraph_BP_GameActionInstance_RemoveExternalCompanion, CallFunc_Add_IntInt_ReturnValue) == 0x000044, "Member 'BP_GameActionInstance_RemoveExternalCompanion_C_ExecuteUbergraph_BP_GameActionInstance_RemoveExternalCompanion::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_RemoveExternalCompanion_C_ExecuteUbergraph_BP_GameActionInstance_RemoveExternalCompanion, CallFunc_Less_IntInt_ReturnValue) == 0x000048, "Member 'BP_GameActionInstance_RemoveExternalCompanion_C_ExecuteUbergraph_BP_GameActionInstance_RemoveExternalCompanion::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_RemoveExternalCompanion_C_ExecuteUbergraph_BP_GameActionInstance_RemoveExternalCompanion, K2Node_Event_Controller) == 0x000050, "Member 'BP_GameActionInstance_RemoveExternalCompanion_C_ExecuteUbergraph_BP_GameActionInstance_RemoveExternalCompanion::K2Node_Event_Controller' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_RemoveExternalCompanion_C_ExecuteUbergraph_BP_GameActionInstance_RemoveExternalCompanion, CallFunc_GetCharacterNames_ReturnValue) == 0x000058, "Member 'BP_GameActionInstance_RemoveExternalCompanion_C_ExecuteUbergraph_BP_GameActionInstance_RemoveExternalCompanion::CallFunc_GetCharacterNames_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_RemoveExternalCompanion_C_ExecuteUbergraph_BP_GameActionInstance_RemoveExternalCompanion, CallFunc_GetCustomGI_ReturnValue) == 0x000068, "Member 'BP_GameActionInstance_RemoveExternalCompanion_C_ExecuteUbergraph_BP_GameActionInstance_RemoveExternalCompanion::CallFunc_GetCustomGI_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_RemoveExternalCompanion_C_ExecuteUbergraph_BP_GameActionInstance_RemoveExternalCompanion, CallFunc_Array_RemoveItem_ReturnValue) == 0x000070, "Member 'BP_GameActionInstance_RemoveExternalCompanion_C_ExecuteUbergraph_BP_GameActionInstance_RemoveExternalCompanion::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");

// Function BP_GameActionInstance_RemoveExternalCompanion.BP_GameActionInstance_RemoveExternalCompanion_C.GetCharacterNames
// 0x0020 (0x0020 - 0x0000)
struct BP_GameActionInstance_RemoveExternalCompanion_C_GetCharacterNames final
{
public:
	TArray<class FName>                           ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ReturnParm)
	class UBP_GameAction_RemoveExternalCompanion_C* K2Node_DynamicCast_AsRemove_External_Companion;  // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GameActionInstance_RemoveExternalCompanion_C_GetCharacterNames) == 0x000008, "Wrong alignment on BP_GameActionInstance_RemoveExternalCompanion_C_GetCharacterNames");
static_assert(sizeof(BP_GameActionInstance_RemoveExternalCompanion_C_GetCharacterNames) == 0x000020, "Wrong size on BP_GameActionInstance_RemoveExternalCompanion_C_GetCharacterNames");
static_assert(offsetof(BP_GameActionInstance_RemoveExternalCompanion_C_GetCharacterNames, ReturnValue) == 0x000000, "Member 'BP_GameActionInstance_RemoveExternalCompanion_C_GetCharacterNames::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_RemoveExternalCompanion_C_GetCharacterNames, K2Node_DynamicCast_AsRemove_External_Companion) == 0x000010, "Member 'BP_GameActionInstance_RemoveExternalCompanion_C_GetCharacterNames::K2Node_DynamicCast_AsRemove_External_Companion' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_RemoveExternalCompanion_C_GetCharacterNames, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_GameActionInstance_RemoveExternalCompanion_C_GetCharacterNames::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_GameActionInstance_RemoveExternalCompanion.BP_GameActionInstance_RemoveExternalCompanion_C.GetDebugString
// 0x0098 (0x0098 - 0x0000)
struct BP_GameActionInstance_RemoveExternalCompanion_C_GetDebugString final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0010)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0030(0x0048)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0078(0x0010)(ReferenceParm)
	class FString                                 CallFunc_Format_ReturnValue;                       // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GameActionInstance_RemoveExternalCompanion_C_GetDebugString) == 0x000008, "Wrong alignment on BP_GameActionInstance_RemoveExternalCompanion_C_GetDebugString");
static_assert(sizeof(BP_GameActionInstance_RemoveExternalCompanion_C_GetDebugString) == 0x000098, "Wrong size on BP_GameActionInstance_RemoveExternalCompanion_C_GetDebugString");
static_assert(offsetof(BP_GameActionInstance_RemoveExternalCompanion_C_GetDebugString, ReturnValue) == 0x000000, "Member 'BP_GameActionInstance_RemoveExternalCompanion_C_GetDebugString::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_RemoveExternalCompanion_C_GetDebugString, CallFunc_GetDisplayName_ReturnValue) == 0x000010, "Member 'BP_GameActionInstance_RemoveExternalCompanion_C_GetDebugString::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_RemoveExternalCompanion_C_GetDebugString, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'BP_GameActionInstance_RemoveExternalCompanion_C_GetDebugString::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_RemoveExternalCompanion_C_GetDebugString, K2Node_MakeStruct_FormatArgumentData) == 0x000030, "Member 'BP_GameActionInstance_RemoveExternalCompanion_C_GetDebugString::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_RemoveExternalCompanion_C_GetDebugString, K2Node_MakeArray_Array) == 0x000078, "Member 'BP_GameActionInstance_RemoveExternalCompanion_C_GetDebugString::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_RemoveExternalCompanion_C_GetDebugString, CallFunc_Format_ReturnValue) == 0x000088, "Member 'BP_GameActionInstance_RemoveExternalCompanion_C_GetDebugString::CallFunc_Format_ReturnValue' has a wrong offset!");

}

