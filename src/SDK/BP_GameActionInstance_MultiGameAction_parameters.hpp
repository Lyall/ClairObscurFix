﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GameActionInstance_MultiGameAction

#include "Basic.hpp"

#include "SandFall_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_GameActionInstance_MultiGameAction.BP_GameActionInstance_MultiGameAction_C.ExecuteGameAction
// 0x0008 (0x0008 - 0x0000)
struct BP_GameActionInstance_MultiGameAction_C_ExecuteGameAction final
{
public:
	const class APlayerController*                Controller;                                        // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GameActionInstance_MultiGameAction_C_ExecuteGameAction) == 0x000008, "Wrong alignment on BP_GameActionInstance_MultiGameAction_C_ExecuteGameAction");
static_assert(sizeof(BP_GameActionInstance_MultiGameAction_C_ExecuteGameAction) == 0x000008, "Wrong size on BP_GameActionInstance_MultiGameAction_C_ExecuteGameAction");
static_assert(offsetof(BP_GameActionInstance_MultiGameAction_C_ExecuteGameAction, Controller) == 0x000000, "Member 'BP_GameActionInstance_MultiGameAction_C_ExecuteGameAction::Controller' has a wrong offset!");

// Function BP_GameActionInstance_MultiGameAction.BP_GameActionInstance_MultiGameAction_C.ExecuteUbergraph_BP_GameActionInstance_MultiGameAction
// 0x0088 (0x0088 - 0x0000)
struct BP_GameActionInstance_MultiGameAction_C_ExecuteUbergraph_BP_GameActionInstance_MultiGameAction final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class APlayerController*                K2Node_Event_Controller;                           // 0x0010(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UGameActionInstance* GameActionInstance)> K2Node_CreateDelegate_OutputDelegate; // 0x0018(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_GameAction_MultiGameAction_C*       K2Node_DynamicCast_AsBP_Game_Action_Multi_Game_Action; // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameAction_Wrapper                    CallFunc_Array_Get_Item;                           // 0x0040(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameAction*                            CallFunc_GetGameActionFromWrapperPure_GameAction;  // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UGameActionInstance>        CallFunc_GetInstanceClass_ReturnValue;             // 0x0068(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UGameActionInstance*                    CallFunc_SpawnObject_ReturnValue;                  // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsNotEmpty_ReturnValue;             // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79[0x3];                                       // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ShouldTriggerAutoSaveAfterExecution_ReturnValue; // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GameActionInstance_MultiGameAction_C_ExecuteUbergraph_BP_GameActionInstance_MultiGameAction) == 0x000008, "Wrong alignment on BP_GameActionInstance_MultiGameAction_C_ExecuteUbergraph_BP_GameActionInstance_MultiGameAction");
static_assert(sizeof(BP_GameActionInstance_MultiGameAction_C_ExecuteUbergraph_BP_GameActionInstance_MultiGameAction) == 0x000088, "Wrong size on BP_GameActionInstance_MultiGameAction_C_ExecuteUbergraph_BP_GameActionInstance_MultiGameAction");
static_assert(offsetof(BP_GameActionInstance_MultiGameAction_C_ExecuteUbergraph_BP_GameActionInstance_MultiGameAction, EntryPoint) == 0x000000, "Member 'BP_GameActionInstance_MultiGameAction_C_ExecuteUbergraph_BP_GameActionInstance_MultiGameAction::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_MultiGameAction_C_ExecuteUbergraph_BP_GameActionInstance_MultiGameAction, Temp_int_Array_Index_Variable) == 0x000004, "Member 'BP_GameActionInstance_MultiGameAction_C_ExecuteUbergraph_BP_GameActionInstance_MultiGameAction::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_MultiGameAction_C_ExecuteUbergraph_BP_GameActionInstance_MultiGameAction, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'BP_GameActionInstance_MultiGameAction_C_ExecuteUbergraph_BP_GameActionInstance_MultiGameAction::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_MultiGameAction_C_ExecuteUbergraph_BP_GameActionInstance_MultiGameAction, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'BP_GameActionInstance_MultiGameAction_C_ExecuteUbergraph_BP_GameActionInstance_MultiGameAction::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_MultiGameAction_C_ExecuteUbergraph_BP_GameActionInstance_MultiGameAction, K2Node_Event_Controller) == 0x000010, "Member 'BP_GameActionInstance_MultiGameAction_C_ExecuteUbergraph_BP_GameActionInstance_MultiGameAction::K2Node_Event_Controller' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_MultiGameAction_C_ExecuteUbergraph_BP_GameActionInstance_MultiGameAction, K2Node_CreateDelegate_OutputDelegate) == 0x000018, "Member 'BP_GameActionInstance_MultiGameAction_C_ExecuteUbergraph_BP_GameActionInstance_MultiGameAction::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_MultiGameAction_C_ExecuteUbergraph_BP_GameActionInstance_MultiGameAction, K2Node_DynamicCast_AsBP_Game_Action_Multi_Game_Action) == 0x000028, "Member 'BP_GameActionInstance_MultiGameAction_C_ExecuteUbergraph_BP_GameActionInstance_MultiGameAction::K2Node_DynamicCast_AsBP_Game_Action_Multi_Game_Action' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_MultiGameAction_C_ExecuteUbergraph_BP_GameActionInstance_MultiGameAction, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BP_GameActionInstance_MultiGameAction_C_ExecuteUbergraph_BP_GameActionInstance_MultiGameAction::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_MultiGameAction_C_ExecuteUbergraph_BP_GameActionInstance_MultiGameAction, CallFunc_GetPlayerController_ReturnValue) == 0x000038, "Member 'BP_GameActionInstance_MultiGameAction_C_ExecuteUbergraph_BP_GameActionInstance_MultiGameAction::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_MultiGameAction_C_ExecuteUbergraph_BP_GameActionInstance_MultiGameAction, CallFunc_Array_Get_Item) == 0x000040, "Member 'BP_GameActionInstance_MultiGameAction_C_ExecuteUbergraph_BP_GameActionInstance_MultiGameAction::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_MultiGameAction_C_ExecuteUbergraph_BP_GameActionInstance_MultiGameAction, CallFunc_Array_Length_ReturnValue) == 0x000050, "Member 'BP_GameActionInstance_MultiGameAction_C_ExecuteUbergraph_BP_GameActionInstance_MultiGameAction::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_MultiGameAction_C_ExecuteUbergraph_BP_GameActionInstance_MultiGameAction, CallFunc_GetGameActionFromWrapperPure_GameAction) == 0x000058, "Member 'BP_GameActionInstance_MultiGameAction_C_ExecuteUbergraph_BP_GameActionInstance_MultiGameAction::CallFunc_GetGameActionFromWrapperPure_GameAction' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_MultiGameAction_C_ExecuteUbergraph_BP_GameActionInstance_MultiGameAction, CallFunc_Less_IntInt_ReturnValue) == 0x000060, "Member 'BP_GameActionInstance_MultiGameAction_C_ExecuteUbergraph_BP_GameActionInstance_MultiGameAction::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_MultiGameAction_C_ExecuteUbergraph_BP_GameActionInstance_MultiGameAction, CallFunc_GetInstanceClass_ReturnValue) == 0x000068, "Member 'BP_GameActionInstance_MultiGameAction_C_ExecuteUbergraph_BP_GameActionInstance_MultiGameAction::CallFunc_GetInstanceClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_MultiGameAction_C_ExecuteUbergraph_BP_GameActionInstance_MultiGameAction, CallFunc_SpawnObject_ReturnValue) == 0x000070, "Member 'BP_GameActionInstance_MultiGameAction_C_ExecuteUbergraph_BP_GameActionInstance_MultiGameAction::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_MultiGameAction_C_ExecuteUbergraph_BP_GameActionInstance_MultiGameAction, CallFunc_Array_IsNotEmpty_ReturnValue) == 0x000078, "Member 'BP_GameActionInstance_MultiGameAction_C_ExecuteUbergraph_BP_GameActionInstance_MultiGameAction::CallFunc_Array_IsNotEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_MultiGameAction_C_ExecuteUbergraph_BP_GameActionInstance_MultiGameAction, CallFunc_Array_Add_ReturnValue) == 0x00007C, "Member 'BP_GameActionInstance_MultiGameAction_C_ExecuteUbergraph_BP_GameActionInstance_MultiGameAction::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_MultiGameAction_C_ExecuteUbergraph_BP_GameActionInstance_MultiGameAction, CallFunc_ShouldTriggerAutoSaveAfterExecution_ReturnValue) == 0x000080, "Member 'BP_GameActionInstance_MultiGameAction_C_ExecuteUbergraph_BP_GameActionInstance_MultiGameAction::CallFunc_ShouldTriggerAutoSaveAfterExecution_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_MultiGameAction_C_ExecuteUbergraph_BP_GameActionInstance_MultiGameAction, CallFunc_BooleanOR_ReturnValue) == 0x000081, "Member 'BP_GameActionInstance_MultiGameAction_C_ExecuteUbergraph_BP_GameActionInstance_MultiGameAction::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function BP_GameActionInstance_MultiGameAction.BP_GameActionInstance_MultiGameAction_C.OnGameActionExecutionFinished
// 0x0030 (0x0030 - 0x0000)
struct BP_GameActionInstance_MultiGameAction_C_OnGameActionExecutionFinished final
{
public:
	class UGameActionInstance*                    GameActionInstance;                                // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_GameAction_MultiGameAction_C*       K2Node_DynamicCast_AsBP_Game_Action_Multi_Game_Action; // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GameActionInstance_MultiGameAction_C_OnGameActionExecutionFinished) == 0x000008, "Wrong alignment on BP_GameActionInstance_MultiGameAction_C_OnGameActionExecutionFinished");
static_assert(sizeof(BP_GameActionInstance_MultiGameAction_C_OnGameActionExecutionFinished) == 0x000030, "Wrong size on BP_GameActionInstance_MultiGameAction_C_OnGameActionExecutionFinished");
static_assert(offsetof(BP_GameActionInstance_MultiGameAction_C_OnGameActionExecutionFinished, GameActionInstance) == 0x000000, "Member 'BP_GameActionInstance_MultiGameAction_C_OnGameActionExecutionFinished::GameActionInstance' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_MultiGameAction_C_OnGameActionExecutionFinished, CallFunc_Array_RemoveItem_ReturnValue) == 0x000008, "Member 'BP_GameActionInstance_MultiGameAction_C_OnGameActionExecutionFinished::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_MultiGameAction_C_OnGameActionExecutionFinished, K2Node_DynamicCast_AsBP_Game_Action_Multi_Game_Action) == 0x000010, "Member 'BP_GameActionInstance_MultiGameAction_C_OnGameActionExecutionFinished::K2Node_DynamicCast_AsBP_Game_Action_Multi_Game_Action' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_MultiGameAction_C_OnGameActionExecutionFinished, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_GameActionInstance_MultiGameAction_C_OnGameActionExecutionFinished::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_MultiGameAction_C_OnGameActionExecutionFinished, Temp_int_Variable) == 0x00001C, "Member 'BP_GameActionInstance_MultiGameAction_C_OnGameActionExecutionFinished::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_MultiGameAction_C_OnGameActionExecutionFinished, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'BP_GameActionInstance_MultiGameAction_C_OnGameActionExecutionFinished::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_MultiGameAction_C_OnGameActionExecutionFinished, CallFunc_Add_IntInt_ReturnValue) == 0x000024, "Member 'BP_GameActionInstance_MultiGameAction_C_OnGameActionExecutionFinished::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_MultiGameAction_C_OnGameActionExecutionFinished, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000028, "Member 'BP_GameActionInstance_MultiGameAction_C_OnGameActionExecutionFinished::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function BP_GameActionInstance_MultiGameAction.BP_GameActionInstance_MultiGameAction_C.GetDebugString
// 0x0108 (0x0108 - 0x0000)
struct BP_GameActionInstance_MultiGameAction_C_GetDebugString final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	class FString                                 local_DebugString;                                 // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameActionInstance*                    CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDebugString_ReturnValue;               // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0058(0x0010)()
	class FString                                 CallFunc_PadString_Result;                         // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0078(0x0048)(HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x00C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00D0(0x0010)(ReferenceParm)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x00E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Format_ReturnValue;                       // 0x00F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0104(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GameActionInstance_MultiGameAction_C_GetDebugString) == 0x000008, "Wrong alignment on BP_GameActionInstance_MultiGameAction_C_GetDebugString");
static_assert(sizeof(BP_GameActionInstance_MultiGameAction_C_GetDebugString) == 0x000108, "Wrong size on BP_GameActionInstance_MultiGameAction_C_GetDebugString");
static_assert(offsetof(BP_GameActionInstance_MultiGameAction_C_GetDebugString, ReturnValue) == 0x000000, "Member 'BP_GameActionInstance_MultiGameAction_C_GetDebugString::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_MultiGameAction_C_GetDebugString, local_DebugString) == 0x000010, "Member 'BP_GameActionInstance_MultiGameAction_C_GetDebugString::local_DebugString' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_MultiGameAction_C_GetDebugString, Temp_int_Array_Index_Variable) == 0x000020, "Member 'BP_GameActionInstance_MultiGameAction_C_GetDebugString::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_MultiGameAction_C_GetDebugString, Temp_int_Loop_Counter_Variable) == 0x000024, "Member 'BP_GameActionInstance_MultiGameAction_C_GetDebugString::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_MultiGameAction_C_GetDebugString, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'BP_GameActionInstance_MultiGameAction_C_GetDebugString::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_MultiGameAction_C_GetDebugString, CallFunc_Array_Get_Item) == 0x000030, "Member 'BP_GameActionInstance_MultiGameAction_C_GetDebugString::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_MultiGameAction_C_GetDebugString, CallFunc_GetDisplayName_ReturnValue) == 0x000038, "Member 'BP_GameActionInstance_MultiGameAction_C_GetDebugString::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_MultiGameAction_C_GetDebugString, CallFunc_GetDebugString_ReturnValue) == 0x000048, "Member 'BP_GameActionInstance_MultiGameAction_C_GetDebugString::CallFunc_GetDebugString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_MultiGameAction_C_GetDebugString, CallFunc_Conv_StringToText_ReturnValue) == 0x000058, "Member 'BP_GameActionInstance_MultiGameAction_C_GetDebugString::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_MultiGameAction_C_GetDebugString, CallFunc_PadString_Result) == 0x000068, "Member 'BP_GameActionInstance_MultiGameAction_C_GetDebugString::CallFunc_PadString_Result' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_MultiGameAction_C_GetDebugString, K2Node_MakeStruct_FormatArgumentData) == 0x000078, "Member 'BP_GameActionInstance_MultiGameAction_C_GetDebugString::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_MultiGameAction_C_GetDebugString, CallFunc_Concat_StrStr_ReturnValue) == 0x0000C0, "Member 'BP_GameActionInstance_MultiGameAction_C_GetDebugString::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_MultiGameAction_C_GetDebugString, K2Node_MakeArray_Array) == 0x0000D0, "Member 'BP_GameActionInstance_MultiGameAction_C_GetDebugString::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_MultiGameAction_C_GetDebugString, CallFunc_Concat_StrStr_ReturnValue_1) == 0x0000E0, "Member 'BP_GameActionInstance_MultiGameAction_C_GetDebugString::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_MultiGameAction_C_GetDebugString, CallFunc_Format_ReturnValue) == 0x0000F0, "Member 'BP_GameActionInstance_MultiGameAction_C_GetDebugString::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_MultiGameAction_C_GetDebugString, CallFunc_Array_Length_ReturnValue) == 0x000100, "Member 'BP_GameActionInstance_MultiGameAction_C_GetDebugString::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_MultiGameAction_C_GetDebugString, CallFunc_Less_IntInt_ReturnValue) == 0x000104, "Member 'BP_GameActionInstance_MultiGameAction_C_GetDebugString::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function BP_GameActionInstance_MultiGameAction.BP_GameActionInstance_MultiGameAction_C.ShouldTriggerAutoSaveAfterExecution
// 0x0001 (0x0001 - 0x0000)
struct BP_GameActionInstance_MultiGameAction_C_ShouldTriggerAutoSaveAfterExecution final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GameActionInstance_MultiGameAction_C_ShouldTriggerAutoSaveAfterExecution) == 0x000001, "Wrong alignment on BP_GameActionInstance_MultiGameAction_C_ShouldTriggerAutoSaveAfterExecution");
static_assert(sizeof(BP_GameActionInstance_MultiGameAction_C_ShouldTriggerAutoSaveAfterExecution) == 0x000001, "Wrong size on BP_GameActionInstance_MultiGameAction_C_ShouldTriggerAutoSaveAfterExecution");
static_assert(offsetof(BP_GameActionInstance_MultiGameAction_C_ShouldTriggerAutoSaveAfterExecution, ReturnValue) == 0x000000, "Member 'BP_GameActionInstance_MultiGameAction_C_ShouldTriggerAutoSaveAfterExecution::ReturnValue' has a wrong offset!");

}

