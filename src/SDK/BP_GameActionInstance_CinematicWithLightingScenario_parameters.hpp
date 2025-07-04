﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GameActionInstance_CinematicWithLightingScenario

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "S_TriggerCinematicVariables_structs.hpp"


namespace SDK::Params
{

// Function BP_GameActionInstance_CinematicWithLightingScenario.BP_GameActionInstance_CinematicWithLightingScenario_C.GetLightingScenarioToActivateAfterCinematic
// 0x0198 (0x0198 - 0x0000)
struct BP_GameActionInstance_CinematicWithLightingScenario_C_GetLightingScenarioToActivateAfterCinematic final
{
public:
	class ABP_LightingScenarioReference_C*        Scenario;                                          // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FS_TriggerCinematicVariables           CallFunc_GetParameters_CinematicParameters;        // 0x0008(0x0150)(ContainsInstancedReference, HasGetValueTypeHash)
	TSoftObjectPtr<class ABP_LightingScenarioReference_C> CallFunc_GetParameters_ScenarioReferenceOnEnd; // 0x0158(0x0028)(HasGetValueTypeHash)
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x0180(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_LightingScenarioReference_C*        K2Node_DynamicCast_AsBP_Lighting_Scenario_Reference; // 0x0188(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0191(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0192(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GameActionInstance_CinematicWithLightingScenario_C_GetLightingScenarioToActivateAfterCinematic) == 0x000008, "Wrong alignment on BP_GameActionInstance_CinematicWithLightingScenario_C_GetLightingScenarioToActivateAfterCinematic");
static_assert(sizeof(BP_GameActionInstance_CinematicWithLightingScenario_C_GetLightingScenarioToActivateAfterCinematic) == 0x000198, "Wrong size on BP_GameActionInstance_CinematicWithLightingScenario_C_GetLightingScenarioToActivateAfterCinematic");
static_assert(offsetof(BP_GameActionInstance_CinematicWithLightingScenario_C_GetLightingScenarioToActivateAfterCinematic, Scenario) == 0x000000, "Member 'BP_GameActionInstance_CinematicWithLightingScenario_C_GetLightingScenarioToActivateAfterCinematic::Scenario' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_CinematicWithLightingScenario_C_GetLightingScenarioToActivateAfterCinematic, CallFunc_GetParameters_CinematicParameters) == 0x000008, "Member 'BP_GameActionInstance_CinematicWithLightingScenario_C_GetLightingScenarioToActivateAfterCinematic::CallFunc_GetParameters_CinematicParameters' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_CinematicWithLightingScenario_C_GetLightingScenarioToActivateAfterCinematic, CallFunc_GetParameters_ScenarioReferenceOnEnd) == 0x000158, "Member 'BP_GameActionInstance_CinematicWithLightingScenario_C_GetLightingScenarioToActivateAfterCinematic::CallFunc_GetParameters_ScenarioReferenceOnEnd' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_CinematicWithLightingScenario_C_GetLightingScenarioToActivateAfterCinematic, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue) == 0x000180, "Member 'BP_GameActionInstance_CinematicWithLightingScenario_C_GetLightingScenarioToActivateAfterCinematic::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_CinematicWithLightingScenario_C_GetLightingScenarioToActivateAfterCinematic, K2Node_DynamicCast_AsBP_Lighting_Scenario_Reference) == 0x000188, "Member 'BP_GameActionInstance_CinematicWithLightingScenario_C_GetLightingScenarioToActivateAfterCinematic::K2Node_DynamicCast_AsBP_Lighting_Scenario_Reference' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_CinematicWithLightingScenario_C_GetLightingScenarioToActivateAfterCinematic, K2Node_DynamicCast_bSuccess) == 0x000190, "Member 'BP_GameActionInstance_CinematicWithLightingScenario_C_GetLightingScenarioToActivateAfterCinematic::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_CinematicWithLightingScenario_C_GetLightingScenarioToActivateAfterCinematic, CallFunc_IsValid_ReturnValue) == 0x000191, "Member 'BP_GameActionInstance_CinematicWithLightingScenario_C_GetLightingScenarioToActivateAfterCinematic::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_CinematicWithLightingScenario_C_GetLightingScenarioToActivateAfterCinematic, CallFunc_IsValid_ReturnValue_1) == 0x000192, "Member 'BP_GameActionInstance_CinematicWithLightingScenario_C_GetLightingScenarioToActivateAfterCinematic::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function BP_GameActionInstance_CinematicWithLightingScenario.BP_GameActionInstance_CinematicWithLightingScenario_C.ExecuteUbergraph_BP_GameActionInstance_CinematicWithLightingScenario
// 0x01D0 (0x01D0 - 0x0000)
struct BP_GameActionInstance_CinematicWithLightingScenario_C_ExecuteUbergraph_BP_GameActionInstance_CinematicWithLightingScenario final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	const class APlayerController*                K2Node_Event_Controller;                           // 0x0008(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USF_BlueprintLatentAction*              CallFunc_StartLatentAction_AsyncAction;            // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_jRPG_Controller_World_C*            K2Node_DynamicCast_AsBP_J_RPG_Controller_World;    // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FS_TriggerCinematicVariables           CallFunc_GetParameters_CinematicParameters;        // 0x0028(0x0150)(ContainsInstancedReference, HasGetValueTypeHash)
	TSoftObjectPtr<class ABP_LightingScenarioReference_C> CallFunc_GetParameters_ScenarioReferenceOnEnd; // 0x0178(0x0028)(HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x01A0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x01B0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_LightingScenarioReference_C*        CallFunc_GetLightingScenarioToActivateAfterCinematic_Scenario; // 0x01C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_CinematicSystem_C*                  CallFunc_GetCinematicsSystem_ReturnValue;          // 0x01C8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GameActionInstance_CinematicWithLightingScenario_C_ExecuteUbergraph_BP_GameActionInstance_CinematicWithLightingScenario) == 0x000008, "Wrong alignment on BP_GameActionInstance_CinematicWithLightingScenario_C_ExecuteUbergraph_BP_GameActionInstance_CinematicWithLightingScenario");
static_assert(sizeof(BP_GameActionInstance_CinematicWithLightingScenario_C_ExecuteUbergraph_BP_GameActionInstance_CinematicWithLightingScenario) == 0x0001D0, "Wrong size on BP_GameActionInstance_CinematicWithLightingScenario_C_ExecuteUbergraph_BP_GameActionInstance_CinematicWithLightingScenario");
static_assert(offsetof(BP_GameActionInstance_CinematicWithLightingScenario_C_ExecuteUbergraph_BP_GameActionInstance_CinematicWithLightingScenario, EntryPoint) == 0x000000, "Member 'BP_GameActionInstance_CinematicWithLightingScenario_C_ExecuteUbergraph_BP_GameActionInstance_CinematicWithLightingScenario::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_CinematicWithLightingScenario_C_ExecuteUbergraph_BP_GameActionInstance_CinematicWithLightingScenario, K2Node_Event_Controller) == 0x000008, "Member 'BP_GameActionInstance_CinematicWithLightingScenario_C_ExecuteUbergraph_BP_GameActionInstance_CinematicWithLightingScenario::K2Node_Event_Controller' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_CinematicWithLightingScenario_C_ExecuteUbergraph_BP_GameActionInstance_CinematicWithLightingScenario, CallFunc_StartLatentAction_AsyncAction) == 0x000010, "Member 'BP_GameActionInstance_CinematicWithLightingScenario_C_ExecuteUbergraph_BP_GameActionInstance_CinematicWithLightingScenario::CallFunc_StartLatentAction_AsyncAction' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_CinematicWithLightingScenario_C_ExecuteUbergraph_BP_GameActionInstance_CinematicWithLightingScenario, K2Node_DynamicCast_AsBP_J_RPG_Controller_World) == 0x000018, "Member 'BP_GameActionInstance_CinematicWithLightingScenario_C_ExecuteUbergraph_BP_GameActionInstance_CinematicWithLightingScenario::K2Node_DynamicCast_AsBP_J_RPG_Controller_World' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_CinematicWithLightingScenario_C_ExecuteUbergraph_BP_GameActionInstance_CinematicWithLightingScenario, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_GameActionInstance_CinematicWithLightingScenario_C_ExecuteUbergraph_BP_GameActionInstance_CinematicWithLightingScenario::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_CinematicWithLightingScenario_C_ExecuteUbergraph_BP_GameActionInstance_CinematicWithLightingScenario, CallFunc_GetParameters_CinematicParameters) == 0x000028, "Member 'BP_GameActionInstance_CinematicWithLightingScenario_C_ExecuteUbergraph_BP_GameActionInstance_CinematicWithLightingScenario::CallFunc_GetParameters_CinematicParameters' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_CinematicWithLightingScenario_C_ExecuteUbergraph_BP_GameActionInstance_CinematicWithLightingScenario, CallFunc_GetParameters_ScenarioReferenceOnEnd) == 0x000178, "Member 'BP_GameActionInstance_CinematicWithLightingScenario_C_ExecuteUbergraph_BP_GameActionInstance_CinematicWithLightingScenario::CallFunc_GetParameters_ScenarioReferenceOnEnd' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_CinematicWithLightingScenario_C_ExecuteUbergraph_BP_GameActionInstance_CinematicWithLightingScenario, K2Node_CreateDelegate_OutputDelegate) == 0x0001A0, "Member 'BP_GameActionInstance_CinematicWithLightingScenario_C_ExecuteUbergraph_BP_GameActionInstance_CinematicWithLightingScenario::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_CinematicWithLightingScenario_C_ExecuteUbergraph_BP_GameActionInstance_CinematicWithLightingScenario, K2Node_CreateDelegate_OutputDelegate_1) == 0x0001B0, "Member 'BP_GameActionInstance_CinematicWithLightingScenario_C_ExecuteUbergraph_BP_GameActionInstance_CinematicWithLightingScenario::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_CinematicWithLightingScenario_C_ExecuteUbergraph_BP_GameActionInstance_CinematicWithLightingScenario, CallFunc_GetLightingScenarioToActivateAfterCinematic_Scenario) == 0x0001C0, "Member 'BP_GameActionInstance_CinematicWithLightingScenario_C_ExecuteUbergraph_BP_GameActionInstance_CinematicWithLightingScenario::CallFunc_GetLightingScenarioToActivateAfterCinematic_Scenario' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_CinematicWithLightingScenario_C_ExecuteUbergraph_BP_GameActionInstance_CinematicWithLightingScenario, CallFunc_GetCinematicsSystem_ReturnValue) == 0x0001C8, "Member 'BP_GameActionInstance_CinematicWithLightingScenario_C_ExecuteUbergraph_BP_GameActionInstance_CinematicWithLightingScenario::CallFunc_GetCinematicsSystem_ReturnValue' has a wrong offset!");

// Function BP_GameActionInstance_CinematicWithLightingScenario.BP_GameActionInstance_CinematicWithLightingScenario_C.ExecuteGameAction
// 0x0008 (0x0008 - 0x0000)
struct BP_GameActionInstance_CinematicWithLightingScenario_C_ExecuteGameAction final
{
public:
	const class APlayerController*                Controller;                                        // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GameActionInstance_CinematicWithLightingScenario_C_ExecuteGameAction) == 0x000008, "Wrong alignment on BP_GameActionInstance_CinematicWithLightingScenario_C_ExecuteGameAction");
static_assert(sizeof(BP_GameActionInstance_CinematicWithLightingScenario_C_ExecuteGameAction) == 0x000008, "Wrong size on BP_GameActionInstance_CinematicWithLightingScenario_C_ExecuteGameAction");
static_assert(offsetof(BP_GameActionInstance_CinematicWithLightingScenario_C_ExecuteGameAction, Controller) == 0x000000, "Member 'BP_GameActionInstance_CinematicWithLightingScenario_C_ExecuteGameAction::Controller' has a wrong offset!");

// Function BP_GameActionInstance_CinematicWithLightingScenario.BP_GameActionInstance_CinematicWithLightingScenario_C.CacheCurrentLightingScenario
// 0x0010 (0x0010 - 0x0000)
struct BP_GameActionInstance_CinematicWithLightingScenario_C_CacheCurrentLightingScenario final
{
public:
	class ABP_LighingScenarioMain_DONOTTOUCH_C*   CallFunc_GetActorOfClass_ReturnValue;              // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GameActionInstance_CinematicWithLightingScenario_C_CacheCurrentLightingScenario) == 0x000008, "Wrong alignment on BP_GameActionInstance_CinematicWithLightingScenario_C_CacheCurrentLightingScenario");
static_assert(sizeof(BP_GameActionInstance_CinematicWithLightingScenario_C_CacheCurrentLightingScenario) == 0x000010, "Wrong size on BP_GameActionInstance_CinematicWithLightingScenario_C_CacheCurrentLightingScenario");
static_assert(offsetof(BP_GameActionInstance_CinematicWithLightingScenario_C_CacheCurrentLightingScenario, CallFunc_GetActorOfClass_ReturnValue) == 0x000000, "Member 'BP_GameActionInstance_CinematicWithLightingScenario_C_CacheCurrentLightingScenario::CallFunc_GetActorOfClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_CinematicWithLightingScenario_C_CacheCurrentLightingScenario, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'BP_GameActionInstance_CinematicWithLightingScenario_C_CacheCurrentLightingScenario::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_GameActionInstance_CinematicWithLightingScenario.BP_GameActionInstance_CinematicWithLightingScenario_C.ActivateLightingScenario
// 0x0018 (0x0018 - 0x0000)
struct BP_GameActionInstance_CinematicWithLightingScenario_C_ActivateLightingScenario final
{
public:
	class ABP_LightingScenarioReference_C*        LigthingScenario;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_LighingScenarioMain_DONOTTOUCH_C*   CallFunc_GetActorOfClass_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GameActionInstance_CinematicWithLightingScenario_C_ActivateLightingScenario) == 0x000008, "Wrong alignment on BP_GameActionInstance_CinematicWithLightingScenario_C_ActivateLightingScenario");
static_assert(sizeof(BP_GameActionInstance_CinematicWithLightingScenario_C_ActivateLightingScenario) == 0x000018, "Wrong size on BP_GameActionInstance_CinematicWithLightingScenario_C_ActivateLightingScenario");
static_assert(offsetof(BP_GameActionInstance_CinematicWithLightingScenario_C_ActivateLightingScenario, LigthingScenario) == 0x000000, "Member 'BP_GameActionInstance_CinematicWithLightingScenario_C_ActivateLightingScenario::LigthingScenario' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_CinematicWithLightingScenario_C_ActivateLightingScenario, CallFunc_GetActorOfClass_ReturnValue) == 0x000008, "Member 'BP_GameActionInstance_CinematicWithLightingScenario_C_ActivateLightingScenario::CallFunc_GetActorOfClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_CinematicWithLightingScenario_C_ActivateLightingScenario, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'BP_GameActionInstance_CinematicWithLightingScenario_C_ActivateLightingScenario::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_CinematicWithLightingScenario_C_ActivateLightingScenario, CallFunc_IsValid_ReturnValue_1) == 0x000011, "Member 'BP_GameActionInstance_CinematicWithLightingScenario_C_ActivateLightingScenario::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function BP_GameActionInstance_CinematicWithLightingScenario.BP_GameActionInstance_CinematicWithLightingScenario_C.GetParameters
// 0x0188 (0x0188 - 0x0000)
struct BP_GameActionInstance_CinematicWithLightingScenario_C_GetParameters final
{
public:
	struct FS_TriggerCinematicVariables           CinematicParameters;                               // 0x0000(0x0150)(Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
	TSoftObjectPtr<class ABP_LightingScenarioReference_C> ScenarioReferenceOnEnd;                    // 0x0150(0x0028)(Parm, OutParm, HasGetValueTypeHash)
	class UBP_GameAction_CinematicWithLightingScenario_C* K2Node_DynamicCast_AsBP_Game_Action_Cinematic_with_Lighting_Scenario; // 0x0178(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GameActionInstance_CinematicWithLightingScenario_C_GetParameters) == 0x000008, "Wrong alignment on BP_GameActionInstance_CinematicWithLightingScenario_C_GetParameters");
static_assert(sizeof(BP_GameActionInstance_CinematicWithLightingScenario_C_GetParameters) == 0x000188, "Wrong size on BP_GameActionInstance_CinematicWithLightingScenario_C_GetParameters");
static_assert(offsetof(BP_GameActionInstance_CinematicWithLightingScenario_C_GetParameters, CinematicParameters) == 0x000000, "Member 'BP_GameActionInstance_CinematicWithLightingScenario_C_GetParameters::CinematicParameters' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_CinematicWithLightingScenario_C_GetParameters, ScenarioReferenceOnEnd) == 0x000150, "Member 'BP_GameActionInstance_CinematicWithLightingScenario_C_GetParameters::ScenarioReferenceOnEnd' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_CinematicWithLightingScenario_C_GetParameters, K2Node_DynamicCast_AsBP_Game_Action_Cinematic_with_Lighting_Scenario) == 0x000178, "Member 'BP_GameActionInstance_CinematicWithLightingScenario_C_GetParameters::K2Node_DynamicCast_AsBP_Game_Action_Cinematic_with_Lighting_Scenario' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_CinematicWithLightingScenario_C_GetParameters, K2Node_DynamicCast_bSuccess) == 0x000180, "Member 'BP_GameActionInstance_CinematicWithLightingScenario_C_GetParameters::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_GameActionInstance_CinematicWithLightingScenario.BP_GameActionInstance_CinematicWithLightingScenario_C.GetDebugString
// 0x02A0 (0x02A0 - 0x0000)
struct BP_GameActionInstance_CinematicWithLightingScenario_C_GetDebugString final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	struct FS_TriggerCinematicVariables           CallFunc_GetParameters_CinematicParameters;        // 0x0010(0x0150)(ContainsInstancedReference, HasGetValueTypeHash)
	TSoftObjectPtr<class ABP_LightingScenarioReference_C> CallFunc_GetParameters_ScenarioReferenceOnEnd; // 0x0160(0x0028)(HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0188(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_SoftObjectReferenceToString_ReturnValue; // 0x0198(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x01A8(0x0010)()
	class FString                                 CallFunc_GetBaseFilename_ReturnValue;              // 0x01B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x01C8(0x0048)(HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0210(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_211[0x7];                                      // 0x0211(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_SelectString_ReturnValue;                 // 0x0218(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0228(0x0010)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0238(0x0048)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0280(0x0010)(ReferenceParm)
	class FString                                 CallFunc_Format_ReturnValue;                       // 0x0290(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GameActionInstance_CinematicWithLightingScenario_C_GetDebugString) == 0x000008, "Wrong alignment on BP_GameActionInstance_CinematicWithLightingScenario_C_GetDebugString");
static_assert(sizeof(BP_GameActionInstance_CinematicWithLightingScenario_C_GetDebugString) == 0x0002A0, "Wrong size on BP_GameActionInstance_CinematicWithLightingScenario_C_GetDebugString");
static_assert(offsetof(BP_GameActionInstance_CinematicWithLightingScenario_C_GetDebugString, ReturnValue) == 0x000000, "Member 'BP_GameActionInstance_CinematicWithLightingScenario_C_GetDebugString::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_CinematicWithLightingScenario_C_GetDebugString, CallFunc_GetParameters_CinematicParameters) == 0x000010, "Member 'BP_GameActionInstance_CinematicWithLightingScenario_C_GetDebugString::CallFunc_GetParameters_CinematicParameters' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_CinematicWithLightingScenario_C_GetDebugString, CallFunc_GetParameters_ScenarioReferenceOnEnd) == 0x000160, "Member 'BP_GameActionInstance_CinematicWithLightingScenario_C_GetDebugString::CallFunc_GetParameters_ScenarioReferenceOnEnd' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_CinematicWithLightingScenario_C_GetDebugString, CallFunc_GetDisplayName_ReturnValue) == 0x000188, "Member 'BP_GameActionInstance_CinematicWithLightingScenario_C_GetDebugString::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_CinematicWithLightingScenario_C_GetDebugString, CallFunc_Conv_SoftObjectReferenceToString_ReturnValue) == 0x000198, "Member 'BP_GameActionInstance_CinematicWithLightingScenario_C_GetDebugString::CallFunc_Conv_SoftObjectReferenceToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_CinematicWithLightingScenario_C_GetDebugString, CallFunc_Conv_StringToText_ReturnValue) == 0x0001A8, "Member 'BP_GameActionInstance_CinematicWithLightingScenario_C_GetDebugString::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_CinematicWithLightingScenario_C_GetDebugString, CallFunc_GetBaseFilename_ReturnValue) == 0x0001B8, "Member 'BP_GameActionInstance_CinematicWithLightingScenario_C_GetDebugString::CallFunc_GetBaseFilename_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_CinematicWithLightingScenario_C_GetDebugString, K2Node_MakeStruct_FormatArgumentData) == 0x0001C8, "Member 'BP_GameActionInstance_CinematicWithLightingScenario_C_GetDebugString::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_CinematicWithLightingScenario_C_GetDebugString, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000210, "Member 'BP_GameActionInstance_CinematicWithLightingScenario_C_GetDebugString::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_CinematicWithLightingScenario_C_GetDebugString, CallFunc_SelectString_ReturnValue) == 0x000218, "Member 'BP_GameActionInstance_CinematicWithLightingScenario_C_GetDebugString::CallFunc_SelectString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_CinematicWithLightingScenario_C_GetDebugString, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000228, "Member 'BP_GameActionInstance_CinematicWithLightingScenario_C_GetDebugString::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_CinematicWithLightingScenario_C_GetDebugString, K2Node_MakeStruct_FormatArgumentData_1) == 0x000238, "Member 'BP_GameActionInstance_CinematicWithLightingScenario_C_GetDebugString::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_CinematicWithLightingScenario_C_GetDebugString, K2Node_MakeArray_Array) == 0x000280, "Member 'BP_GameActionInstance_CinematicWithLightingScenario_C_GetDebugString::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_GameActionInstance_CinematicWithLightingScenario_C_GetDebugString, CallFunc_Format_ReturnValue) == 0x000290, "Member 'BP_GameActionInstance_CinematicWithLightingScenario_C_GetDebugString::CallFunc_Format_ReturnValue' has a wrong offset!");

}

