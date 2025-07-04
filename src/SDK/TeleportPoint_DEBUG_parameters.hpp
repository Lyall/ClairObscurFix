﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TeleportPoint_DEBUG

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function TeleportPoint_DEBUG.TeleportPoint_DEBUG_C.CheckForErrors
// 0x00A8 (0x00A8 - 0x0000)
struct TeleportPoint_DEBUG_C_CheckForErrors final
{
public:
	TArray<class FText>                           ErrorMessages;                                     // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCurrentLevelProductionLevel_ReturnValue; // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_12[0x6];                                       // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_ObjectToText_ReturnValue;            // 0x0018(0x0010)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0028(0x0048)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0070(0x0010)(ReferenceParm)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0088(0x0010)()
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_99[0x3];                                       // 0x0099(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_AreWIP_ChecksEnabled_ReturnValue;         // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TeleportPoint_DEBUG_C_CheckForErrors) == 0x000008, "Wrong alignment on TeleportPoint_DEBUG_C_CheckForErrors");
static_assert(sizeof(TeleportPoint_DEBUG_C_CheckForErrors) == 0x0000A8, "Wrong size on TeleportPoint_DEBUG_C_CheckForErrors");
static_assert(offsetof(TeleportPoint_DEBUG_C_CheckForErrors, ErrorMessages) == 0x000000, "Member 'TeleportPoint_DEBUG_C_CheckForErrors::ErrorMessages' has a wrong offset!");
static_assert(offsetof(TeleportPoint_DEBUG_C_CheckForErrors, ReturnValue) == 0x000010, "Member 'TeleportPoint_DEBUG_C_CheckForErrors::ReturnValue' has a wrong offset!");
static_assert(offsetof(TeleportPoint_DEBUG_C_CheckForErrors, CallFunc_IsCurrentLevelProductionLevel_ReturnValue) == 0x000011, "Member 'TeleportPoint_DEBUG_C_CheckForErrors::CallFunc_IsCurrentLevelProductionLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeleportPoint_DEBUG_C_CheckForErrors, CallFunc_Conv_ObjectToText_ReturnValue) == 0x000018, "Member 'TeleportPoint_DEBUG_C_CheckForErrors::CallFunc_Conv_ObjectToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeleportPoint_DEBUG_C_CheckForErrors, K2Node_MakeStruct_FormatArgumentData) == 0x000028, "Member 'TeleportPoint_DEBUG_C_CheckForErrors::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(TeleportPoint_DEBUG_C_CheckForErrors, K2Node_MakeArray_Array) == 0x000070, "Member 'TeleportPoint_DEBUG_C_CheckForErrors::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(TeleportPoint_DEBUG_C_CheckForErrors, CallFunc_IsValid_ReturnValue) == 0x000080, "Member 'TeleportPoint_DEBUG_C_CheckForErrors::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeleportPoint_DEBUG_C_CheckForErrors, CallFunc_Format_ReturnValue) == 0x000088, "Member 'TeleportPoint_DEBUG_C_CheckForErrors::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeleportPoint_DEBUG_C_CheckForErrors, CallFunc_Not_PreBool_ReturnValue) == 0x000098, "Member 'TeleportPoint_DEBUG_C_CheckForErrors::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeleportPoint_DEBUG_C_CheckForErrors, CallFunc_Array_Add_ReturnValue) == 0x00009C, "Member 'TeleportPoint_DEBUG_C_CheckForErrors::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeleportPoint_DEBUG_C_CheckForErrors, CallFunc_AreWIP_ChecksEnabled_ReturnValue) == 0x0000A0, "Member 'TeleportPoint_DEBUG_C_CheckForErrors::CallFunc_AreWIP_ChecksEnabled_ReturnValue' has a wrong offset!");

// Function TeleportPoint_DEBUG.TeleportPoint_DEBUG_C.TeleportCharacter
// 0x00E0 (0x00E0 - 0x0000)
struct TeleportPoint_DEBUG_C_TeleportCharacter final
{
public:
	class ABP_jRPG_Character_World_C*             CharacterWorld;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidGameActionWrapper_IsValid;         // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_18[0x8];                                       // 0x0018(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0020(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_LightingScenarioReference_C*        K2Node_DynamicCast_AsBP_Lighting_Scenario_Reference; // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89[0x7];                                       // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0090(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x00A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x00C0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TeleportPoint_DEBUG_C_TeleportCharacter) == 0x000010, "Wrong alignment on TeleportPoint_DEBUG_C_TeleportCharacter");
static_assert(sizeof(TeleportPoint_DEBUG_C_TeleportCharacter) == 0x0000E0, "Wrong size on TeleportPoint_DEBUG_C_TeleportCharacter");
static_assert(offsetof(TeleportPoint_DEBUG_C_TeleportCharacter, CharacterWorld) == 0x000000, "Member 'TeleportPoint_DEBUG_C_TeleportCharacter::CharacterWorld' has a wrong offset!");
static_assert(offsetof(TeleportPoint_DEBUG_C_TeleportCharacter, CallFunc_IsValidGameActionWrapper_IsValid) == 0x000008, "Member 'TeleportPoint_DEBUG_C_TeleportCharacter::CallFunc_IsValidGameActionWrapper_IsValid' has a wrong offset!");
static_assert(offsetof(TeleportPoint_DEBUG_C_TeleportCharacter, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue) == 0x000010, "Member 'TeleportPoint_DEBUG_C_TeleportCharacter::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeleportPoint_DEBUG_C_TeleportCharacter, CallFunc_GetTransform_ReturnValue) == 0x000020, "Member 'TeleportPoint_DEBUG_C_TeleportCharacter::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeleportPoint_DEBUG_C_TeleportCharacter, K2Node_DynamicCast_AsBP_Lighting_Scenario_Reference) == 0x000080, "Member 'TeleportPoint_DEBUG_C_TeleportCharacter::K2Node_DynamicCast_AsBP_Lighting_Scenario_Reference' has a wrong offset!");
static_assert(offsetof(TeleportPoint_DEBUG_C_TeleportCharacter, K2Node_DynamicCast_bSuccess) == 0x000088, "Member 'TeleportPoint_DEBUG_C_TeleportCharacter::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(TeleportPoint_DEBUG_C_TeleportCharacter, CallFunc_BreakTransform_Location) == 0x000090, "Member 'TeleportPoint_DEBUG_C_TeleportCharacter::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(TeleportPoint_DEBUG_C_TeleportCharacter, CallFunc_BreakTransform_Rotation) == 0x0000A8, "Member 'TeleportPoint_DEBUG_C_TeleportCharacter::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(TeleportPoint_DEBUG_C_TeleportCharacter, CallFunc_BreakTransform_Scale) == 0x0000C0, "Member 'TeleportPoint_DEBUG_C_TeleportCharacter::CallFunc_BreakTransform_Scale' has a wrong offset!");

// Function TeleportPoint_DEBUG.TeleportPoint_DEBUG_C.UserConstructionScript
// 0x0030 (0x0030 - 0x0000)
struct TeleportPoint_DEBUG_C_UserConstructionScript final
{
public:
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0010)()
};
static_assert(alignof(TeleportPoint_DEBUG_C_UserConstructionScript) == 0x000008, "Wrong alignment on TeleportPoint_DEBUG_C_UserConstructionScript");
static_assert(sizeof(TeleportPoint_DEBUG_C_UserConstructionScript) == 0x000030, "Wrong size on TeleportPoint_DEBUG_C_UserConstructionScript");
static_assert(offsetof(TeleportPoint_DEBUG_C_UserConstructionScript, CallFunc_Conv_IntToString_ReturnValue) == 0x000000, "Member 'TeleportPoint_DEBUG_C_UserConstructionScript::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeleportPoint_DEBUG_C_UserConstructionScript, CallFunc_Concat_StrStr_ReturnValue) == 0x000010, "Member 'TeleportPoint_DEBUG_C_UserConstructionScript::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeleportPoint_DEBUG_C_UserConstructionScript, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'TeleportPoint_DEBUG_C_UserConstructionScript::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

}

