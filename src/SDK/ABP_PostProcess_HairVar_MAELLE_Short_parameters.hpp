﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_PostProcess_HairVar_MAELLE_Short

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "KawaiiPhysics_structs.hpp"


namespace SDK::Params
{

// Function ABP_PostProcess_HairVar_MAELLE_Short.ABP_PostProcess_HairVar_MAELLE_Short_C.AnimGraph
// 0x0020 (0x0020 - 0x0000)
struct ABP_PostProcess_HairVar_MAELLE_Short_C_AnimGraph final
{
public:
	struct FPoseLink                              InPose;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              AnimGraph_0;                                       // 0x0010(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ABP_PostProcess_HairVar_MAELLE_Short_C_AnimGraph) == 0x000008, "Wrong alignment on ABP_PostProcess_HairVar_MAELLE_Short_C_AnimGraph");
static_assert(sizeof(ABP_PostProcess_HairVar_MAELLE_Short_C_AnimGraph) == 0x000020, "Wrong size on ABP_PostProcess_HairVar_MAELLE_Short_C_AnimGraph");
static_assert(offsetof(ABP_PostProcess_HairVar_MAELLE_Short_C_AnimGraph, InPose) == 0x000000, "Member 'ABP_PostProcess_HairVar_MAELLE_Short_C_AnimGraph::InPose' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_HairVar_MAELLE_Short_C_AnimGraph, AnimGraph_0) == 0x000010, "Member 'ABP_PostProcess_HairVar_MAELLE_Short_C_AnimGraph::AnimGraph_0' has a wrong offset!");

// Function ABP_PostProcess_HairVar_MAELLE_Short.ABP_PostProcess_HairVar_MAELLE_Short_C.ExecuteUbergraph_ABP_PostProcess_HairVar_MAELLE_Short
// 0x004C (0x004C - 0x0000)
struct ABP_PostProcess_HairVar_MAELLE_Short_C_ExecuteUbergraph_ABP_PostProcess_HairVar_MAELLE_Short final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKawaiiPhysicsSettings                 K2Node_MakeStruct_KawaiiPhysicsSettings;           // 0x0004(0x0018)(NoDestructor)
	struct FKawaiiPhysicsSettings                 K2Node_MakeStruct_KawaiiPhysicsSettings_1;         // 0x001C(0x0018)(NoDestructor)
	struct FKawaiiPhysicsSettings                 K2Node_MakeStruct_KawaiiPhysicsSettings_2;         // 0x0034(0x0018)(NoDestructor)
};
static_assert(alignof(ABP_PostProcess_HairVar_MAELLE_Short_C_ExecuteUbergraph_ABP_PostProcess_HairVar_MAELLE_Short) == 0x000004, "Wrong alignment on ABP_PostProcess_HairVar_MAELLE_Short_C_ExecuteUbergraph_ABP_PostProcess_HairVar_MAELLE_Short");
static_assert(sizeof(ABP_PostProcess_HairVar_MAELLE_Short_C_ExecuteUbergraph_ABP_PostProcess_HairVar_MAELLE_Short) == 0x00004C, "Wrong size on ABP_PostProcess_HairVar_MAELLE_Short_C_ExecuteUbergraph_ABP_PostProcess_HairVar_MAELLE_Short");
static_assert(offsetof(ABP_PostProcess_HairVar_MAELLE_Short_C_ExecuteUbergraph_ABP_PostProcess_HairVar_MAELLE_Short, EntryPoint) == 0x000000, "Member 'ABP_PostProcess_HairVar_MAELLE_Short_C_ExecuteUbergraph_ABP_PostProcess_HairVar_MAELLE_Short::EntryPoint' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_HairVar_MAELLE_Short_C_ExecuteUbergraph_ABP_PostProcess_HairVar_MAELLE_Short, K2Node_MakeStruct_KawaiiPhysicsSettings) == 0x000004, "Member 'ABP_PostProcess_HairVar_MAELLE_Short_C_ExecuteUbergraph_ABP_PostProcess_HairVar_MAELLE_Short::K2Node_MakeStruct_KawaiiPhysicsSettings' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_HairVar_MAELLE_Short_C_ExecuteUbergraph_ABP_PostProcess_HairVar_MAELLE_Short, K2Node_MakeStruct_KawaiiPhysicsSettings_1) == 0x00001C, "Member 'ABP_PostProcess_HairVar_MAELLE_Short_C_ExecuteUbergraph_ABP_PostProcess_HairVar_MAELLE_Short::K2Node_MakeStruct_KawaiiPhysicsSettings_1' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_HairVar_MAELLE_Short_C_ExecuteUbergraph_ABP_PostProcess_HairVar_MAELLE_Short, K2Node_MakeStruct_KawaiiPhysicsSettings_2) == 0x000034, "Member 'ABP_PostProcess_HairVar_MAELLE_Short_C_ExecuteUbergraph_ABP_PostProcess_HairVar_MAELLE_Short::K2Node_MakeStruct_KawaiiPhysicsSettings_2' has a wrong offset!");

}

