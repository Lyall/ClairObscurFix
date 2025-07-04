﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Sciel_PostProcess_V2

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ABP_Sciel_PostProcess_V2.ABP_Sciel_PostProcess_V2_C.AnimGraph
// 0x0020 (0x0020 - 0x0000)
struct ABP_Sciel_PostProcess_V2_C_AnimGraph final
{
public:
	struct FPoseLink                              InPose;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              AnimGraph_0;                                       // 0x0010(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ABP_Sciel_PostProcess_V2_C_AnimGraph) == 0x000008, "Wrong alignment on ABP_Sciel_PostProcess_V2_C_AnimGraph");
static_assert(sizeof(ABP_Sciel_PostProcess_V2_C_AnimGraph) == 0x000020, "Wrong size on ABP_Sciel_PostProcess_V2_C_AnimGraph");
static_assert(offsetof(ABP_Sciel_PostProcess_V2_C_AnimGraph, InPose) == 0x000000, "Member 'ABP_Sciel_PostProcess_V2_C_AnimGraph::InPose' has a wrong offset!");
static_assert(offsetof(ABP_Sciel_PostProcess_V2_C_AnimGraph, AnimGraph_0) == 0x000010, "Member 'ABP_Sciel_PostProcess_V2_C_AnimGraph::AnimGraph_0' has a wrong offset!");

// Function ABP_Sciel_PostProcess_V2.ABP_Sciel_PostProcess_V2_C.BlueprintUpdateAnimation
// 0x0004 (0x0004 - 0x0000)
struct ABP_Sciel_PostProcess_V2_C_BlueprintUpdateAnimation final
{
public:
	float                                         DeltaTimeX;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_Sciel_PostProcess_V2_C_BlueprintUpdateAnimation) == 0x000004, "Wrong alignment on ABP_Sciel_PostProcess_V2_C_BlueprintUpdateAnimation");
static_assert(sizeof(ABP_Sciel_PostProcess_V2_C_BlueprintUpdateAnimation) == 0x000004, "Wrong size on ABP_Sciel_PostProcess_V2_C_BlueprintUpdateAnimation");
static_assert(offsetof(ABP_Sciel_PostProcess_V2_C_BlueprintUpdateAnimation, DeltaTimeX) == 0x000000, "Member 'ABP_Sciel_PostProcess_V2_C_BlueprintUpdateAnimation::DeltaTimeX' has a wrong offset!");

// Function ABP_Sciel_PostProcess_V2.ABP_Sciel_PostProcess_V2_C.ExecuteUbergraph_ABP_Sciel_PostProcess_V2
// 0x00C8 (0x00C8 - 0x0000)
struct ABP_Sciel_PostProcess_V2_C_ExecuteUbergraph_ABP_Sciel_PostProcess_V2 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_TryGetPawnOwner_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ShouldDisablePostProcessInAnimation_ShouldDisablePostProcessAnimationBlueprint; // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_32[0x2];                                       // 0x0032(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaTimeX;                           // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_TryGetPawnOwner_ReturnValue_1;            // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             K2Node_DynamicCast_AsCharacter;                    // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue_1;          // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_52[0x6];                                       // 0x0052(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetBoneLinearVelocity_ReturnValue;        // 0x0058(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89[0x7];                                       // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetVelocity_ReturnValue;                  // 0x0090(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X_1;                          // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y_1;                          // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z_1;                          // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue_2;          // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_Sciel_PostProcess_V2_C_ExecuteUbergraph_ABP_Sciel_PostProcess_V2) == 0x000008, "Wrong alignment on ABP_Sciel_PostProcess_V2_C_ExecuteUbergraph_ABP_Sciel_PostProcess_V2");
static_assert(sizeof(ABP_Sciel_PostProcess_V2_C_ExecuteUbergraph_ABP_Sciel_PostProcess_V2) == 0x0000C8, "Wrong size on ABP_Sciel_PostProcess_V2_C_ExecuteUbergraph_ABP_Sciel_PostProcess_V2");
static_assert(offsetof(ABP_Sciel_PostProcess_V2_C_ExecuteUbergraph_ABP_Sciel_PostProcess_V2, EntryPoint) == 0x000000, "Member 'ABP_Sciel_PostProcess_V2_C_ExecuteUbergraph_ABP_Sciel_PostProcess_V2::EntryPoint' has a wrong offset!");
static_assert(offsetof(ABP_Sciel_PostProcess_V2_C_ExecuteUbergraph_ABP_Sciel_PostProcess_V2, CallFunc_TryGetPawnOwner_ReturnValue) == 0x000008, "Member 'ABP_Sciel_PostProcess_V2_C_ExecuteUbergraph_ABP_Sciel_PostProcess_V2::CallFunc_TryGetPawnOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Sciel_PostProcess_V2_C_ExecuteUbergraph_ABP_Sciel_PostProcess_V2, CallFunc_ShouldDisablePostProcessInAnimation_ShouldDisablePostProcessAnimationBlueprint) == 0x000010, "Member 'ABP_Sciel_PostProcess_V2_C_ExecuteUbergraph_ABP_Sciel_PostProcess_V2::CallFunc_ShouldDisablePostProcessInAnimation_ShouldDisablePostProcessAnimationBlueprint' has a wrong offset!");
static_assert(offsetof(ABP_Sciel_PostProcess_V2_C_ExecuteUbergraph_ABP_Sciel_PostProcess_V2, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000018, "Member 'ABP_Sciel_PostProcess_V2_C_ExecuteUbergraph_ABP_Sciel_PostProcess_V2::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Sciel_PostProcess_V2_C_ExecuteUbergraph_ABP_Sciel_PostProcess_V2, CallFunc_Less_DoubleDouble_ReturnValue) == 0x000020, "Member 'ABP_Sciel_PostProcess_V2_C_ExecuteUbergraph_ABP_Sciel_PostProcess_V2::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Sciel_PostProcess_V2_C_ExecuteUbergraph_ABP_Sciel_PostProcess_V2, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x000028, "Member 'ABP_Sciel_PostProcess_V2_C_ExecuteUbergraph_ABP_Sciel_PostProcess_V2::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ABP_Sciel_PostProcess_V2_C_ExecuteUbergraph_ABP_Sciel_PostProcess_V2, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000030, "Member 'ABP_Sciel_PostProcess_V2_C_ExecuteUbergraph_ABP_Sciel_PostProcess_V2::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Sciel_PostProcess_V2_C_ExecuteUbergraph_ABP_Sciel_PostProcess_V2, CallFunc_Not_PreBool_ReturnValue) == 0x000031, "Member 'ABP_Sciel_PostProcess_V2_C_ExecuteUbergraph_ABP_Sciel_PostProcess_V2::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Sciel_PostProcess_V2_C_ExecuteUbergraph_ABP_Sciel_PostProcess_V2, K2Node_Event_DeltaTimeX) == 0x000034, "Member 'ABP_Sciel_PostProcess_V2_C_ExecuteUbergraph_ABP_Sciel_PostProcess_V2::K2Node_Event_DeltaTimeX' has a wrong offset!");
static_assert(offsetof(ABP_Sciel_PostProcess_V2_C_ExecuteUbergraph_ABP_Sciel_PostProcess_V2, CallFunc_TryGetPawnOwner_ReturnValue_1) == 0x000038, "Member 'ABP_Sciel_PostProcess_V2_C_ExecuteUbergraph_ABP_Sciel_PostProcess_V2::CallFunc_TryGetPawnOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ABP_Sciel_PostProcess_V2_C_ExecuteUbergraph_ABP_Sciel_PostProcess_V2, CallFunc_Greater_DoubleDouble_ReturnValue_1) == 0x000040, "Member 'ABP_Sciel_PostProcess_V2_C_ExecuteUbergraph_ABP_Sciel_PostProcess_V2::CallFunc_Greater_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ABP_Sciel_PostProcess_V2_C_ExecuteUbergraph_ABP_Sciel_PostProcess_V2, K2Node_DynamicCast_AsCharacter) == 0x000048, "Member 'ABP_Sciel_PostProcess_V2_C_ExecuteUbergraph_ABP_Sciel_PostProcess_V2::K2Node_DynamicCast_AsCharacter' has a wrong offset!");
static_assert(offsetof(ABP_Sciel_PostProcess_V2_C_ExecuteUbergraph_ABP_Sciel_PostProcess_V2, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'ABP_Sciel_PostProcess_V2_C_ExecuteUbergraph_ABP_Sciel_PostProcess_V2::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ABP_Sciel_PostProcess_V2_C_ExecuteUbergraph_ABP_Sciel_PostProcess_V2, CallFunc_Less_DoubleDouble_ReturnValue_1) == 0x000051, "Member 'ABP_Sciel_PostProcess_V2_C_ExecuteUbergraph_ABP_Sciel_PostProcess_V2::CallFunc_Less_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ABP_Sciel_PostProcess_V2_C_ExecuteUbergraph_ABP_Sciel_PostProcess_V2, CallFunc_GetBoneLinearVelocity_ReturnValue) == 0x000058, "Member 'ABP_Sciel_PostProcess_V2_C_ExecuteUbergraph_ABP_Sciel_PostProcess_V2::CallFunc_GetBoneLinearVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Sciel_PostProcess_V2_C_ExecuteUbergraph_ABP_Sciel_PostProcess_V2, CallFunc_BreakVector_X) == 0x000070, "Member 'ABP_Sciel_PostProcess_V2_C_ExecuteUbergraph_ABP_Sciel_PostProcess_V2::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(ABP_Sciel_PostProcess_V2_C_ExecuteUbergraph_ABP_Sciel_PostProcess_V2, CallFunc_BreakVector_Y) == 0x000078, "Member 'ABP_Sciel_PostProcess_V2_C_ExecuteUbergraph_ABP_Sciel_PostProcess_V2::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(ABP_Sciel_PostProcess_V2_C_ExecuteUbergraph_ABP_Sciel_PostProcess_V2, CallFunc_BreakVector_Z) == 0x000080, "Member 'ABP_Sciel_PostProcess_V2_C_ExecuteUbergraph_ABP_Sciel_PostProcess_V2::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(ABP_Sciel_PostProcess_V2_C_ExecuteUbergraph_ABP_Sciel_PostProcess_V2, CallFunc_IsValid_ReturnValue) == 0x000088, "Member 'ABP_Sciel_PostProcess_V2_C_ExecuteUbergraph_ABP_Sciel_PostProcess_V2::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Sciel_PostProcess_V2_C_ExecuteUbergraph_ABP_Sciel_PostProcess_V2, CallFunc_GetVelocity_ReturnValue) == 0x000090, "Member 'ABP_Sciel_PostProcess_V2_C_ExecuteUbergraph_ABP_Sciel_PostProcess_V2::CallFunc_GetVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Sciel_PostProcess_V2_C_ExecuteUbergraph_ABP_Sciel_PostProcess_V2, CallFunc_BreakVector_X_1) == 0x0000A8, "Member 'ABP_Sciel_PostProcess_V2_C_ExecuteUbergraph_ABP_Sciel_PostProcess_V2::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(ABP_Sciel_PostProcess_V2_C_ExecuteUbergraph_ABP_Sciel_PostProcess_V2, CallFunc_BreakVector_Y_1) == 0x0000B0, "Member 'ABP_Sciel_PostProcess_V2_C_ExecuteUbergraph_ABP_Sciel_PostProcess_V2::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(ABP_Sciel_PostProcess_V2_C_ExecuteUbergraph_ABP_Sciel_PostProcess_V2, CallFunc_BreakVector_Z_1) == 0x0000B8, "Member 'ABP_Sciel_PostProcess_V2_C_ExecuteUbergraph_ABP_Sciel_PostProcess_V2::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(ABP_Sciel_PostProcess_V2_C_ExecuteUbergraph_ABP_Sciel_PostProcess_V2, CallFunc_Less_DoubleDouble_ReturnValue_2) == 0x0000C0, "Member 'ABP_Sciel_PostProcess_V2_C_ExecuteUbergraph_ABP_Sciel_PostProcess_V2::CallFunc_Less_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ABP_Sciel_PostProcess_V2_C_ExecuteUbergraph_ABP_Sciel_PostProcess_V2, CallFunc_Not_PreBool_ReturnValue_1) == 0x0000C1, "Member 'ABP_Sciel_PostProcess_V2_C_ExecuteUbergraph_ABP_Sciel_PostProcess_V2::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");

}

