﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Face_AnimBP_HumanNPC

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK::Params
{

// Function Face_AnimBP_HumanNPC.Face_AnimBP_HumanNPC_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct Face_AnimBP_HumanNPC_C_AnimGraph final
{
public:
	struct FPoseLink                              AnimGraph_0;                                       // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(Face_AnimBP_HumanNPC_C_AnimGraph) == 0x000008, "Wrong alignment on Face_AnimBP_HumanNPC_C_AnimGraph");
static_assert(sizeof(Face_AnimBP_HumanNPC_C_AnimGraph) == 0x000010, "Wrong size on Face_AnimBP_HumanNPC_C_AnimGraph");
static_assert(offsetof(Face_AnimBP_HumanNPC_C_AnimGraph, AnimGraph_0) == 0x000000, "Member 'Face_AnimBP_HumanNPC_C_AnimGraph::AnimGraph_0' has a wrong offset!");

// Function Face_AnimBP_HumanNPC.Face_AnimBP_HumanNPC_C.BlueprintUpdateAnimation
// 0x0004 (0x0004 - 0x0000)
struct Face_AnimBP_HumanNPC_C_BlueprintUpdateAnimation final
{
public:
	float                                         DeltaTimeX;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Face_AnimBP_HumanNPC_C_BlueprintUpdateAnimation) == 0x000004, "Wrong alignment on Face_AnimBP_HumanNPC_C_BlueprintUpdateAnimation");
static_assert(sizeof(Face_AnimBP_HumanNPC_C_BlueprintUpdateAnimation) == 0x000004, "Wrong size on Face_AnimBP_HumanNPC_C_BlueprintUpdateAnimation");
static_assert(offsetof(Face_AnimBP_HumanNPC_C_BlueprintUpdateAnimation, DeltaTimeX) == 0x000000, "Member 'Face_AnimBP_HumanNPC_C_BlueprintUpdateAnimation::DeltaTimeX' has a wrong offset!");

// Function Face_AnimBP_HumanNPC.Face_AnimBP_HumanNPC_C.ExecuteUbergraph_Face_AnimBP_HumanNPC
// 0x0060 (0x0060 - 0x0000)
struct Face_AnimBP_HumanNPC_C_ExecuteUbergraph_Face_AnimBP_HumanNPC final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwningActor_ReturnValue;               // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_NPCAnimationComponent_C*            CallFunc_GetComponentByClass_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaTimeX;                           // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_RandomFloatInRange_ReturnValue_1;         // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_GetEnvelopeVolume_EnvelopeVolume;         // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_VariableSet_BlinkStrength_ImplicitCast;     // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Delay_Duration_ImplicitCast;              // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_VariableSet_ExpressionStrength_ImplicitCast; // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Face_AnimBP_HumanNPC_C_ExecuteUbergraph_Face_AnimBP_HumanNPC) == 0x000008, "Wrong alignment on Face_AnimBP_HumanNPC_C_ExecuteUbergraph_Face_AnimBP_HumanNPC");
static_assert(sizeof(Face_AnimBP_HumanNPC_C_ExecuteUbergraph_Face_AnimBP_HumanNPC) == 0x000060, "Wrong size on Face_AnimBP_HumanNPC_C_ExecuteUbergraph_Face_AnimBP_HumanNPC");
static_assert(offsetof(Face_AnimBP_HumanNPC_C_ExecuteUbergraph_Face_AnimBP_HumanNPC, EntryPoint) == 0x000000, "Member 'Face_AnimBP_HumanNPC_C_ExecuteUbergraph_Face_AnimBP_HumanNPC::EntryPoint' has a wrong offset!");
static_assert(offsetof(Face_AnimBP_HumanNPC_C_ExecuteUbergraph_Face_AnimBP_HumanNPC, CallFunc_GetOwningActor_ReturnValue) == 0x000008, "Member 'Face_AnimBP_HumanNPC_C_ExecuteUbergraph_Face_AnimBP_HumanNPC::CallFunc_GetOwningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(Face_AnimBP_HumanNPC_C_ExecuteUbergraph_Face_AnimBP_HumanNPC, CallFunc_GetComponentByClass_ReturnValue) == 0x000010, "Member 'Face_AnimBP_HumanNPC_C_ExecuteUbergraph_Face_AnimBP_HumanNPC::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Face_AnimBP_HumanNPC_C_ExecuteUbergraph_Face_AnimBP_HumanNPC, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'Face_AnimBP_HumanNPC_C_ExecuteUbergraph_Face_AnimBP_HumanNPC::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Face_AnimBP_HumanNPC_C_ExecuteUbergraph_Face_AnimBP_HumanNPC, K2Node_Event_DeltaTimeX) == 0x00001C, "Member 'Face_AnimBP_HumanNPC_C_ExecuteUbergraph_Face_AnimBP_HumanNPC::K2Node_Event_DeltaTimeX' has a wrong offset!");
static_assert(offsetof(Face_AnimBP_HumanNPC_C_ExecuteUbergraph_Face_AnimBP_HumanNPC, CallFunc_RandomFloatInRange_ReturnValue) == 0x000020, "Member 'Face_AnimBP_HumanNPC_C_ExecuteUbergraph_Face_AnimBP_HumanNPC::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(Face_AnimBP_HumanNPC_C_ExecuteUbergraph_Face_AnimBP_HumanNPC, CallFunc_RandomFloatInRange_ReturnValue_1) == 0x000028, "Member 'Face_AnimBP_HumanNPC_C_ExecuteUbergraph_Face_AnimBP_HumanNPC::CallFunc_RandomFloatInRange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Face_AnimBP_HumanNPC_C_ExecuteUbergraph_Face_AnimBP_HumanNPC, CallFunc_GetEnvelopeVolume_EnvelopeVolume) == 0x000030, "Member 'Face_AnimBP_HumanNPC_C_ExecuteUbergraph_Face_AnimBP_HumanNPC::CallFunc_GetEnvelopeVolume_EnvelopeVolume' has a wrong offset!");
static_assert(offsetof(Face_AnimBP_HumanNPC_C_ExecuteUbergraph_Face_AnimBP_HumanNPC, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000038, "Member 'Face_AnimBP_HumanNPC_C_ExecuteUbergraph_Face_AnimBP_HumanNPC::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(Face_AnimBP_HumanNPC_C_ExecuteUbergraph_Face_AnimBP_HumanNPC, CallFunc_IsValid_ReturnValue_1) == 0x000040, "Member 'Face_AnimBP_HumanNPC_C_ExecuteUbergraph_Face_AnimBP_HumanNPC::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Face_AnimBP_HumanNPC_C_ExecuteUbergraph_Face_AnimBP_HumanNPC, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x000048, "Member 'Face_AnimBP_HumanNPC_C_ExecuteUbergraph_Face_AnimBP_HumanNPC::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Face_AnimBP_HumanNPC_C_ExecuteUbergraph_Face_AnimBP_HumanNPC, K2Node_VariableSet_BlinkStrength_ImplicitCast) == 0x000050, "Member 'Face_AnimBP_HumanNPC_C_ExecuteUbergraph_Face_AnimBP_HumanNPC::K2Node_VariableSet_BlinkStrength_ImplicitCast' has a wrong offset!");
static_assert(offsetof(Face_AnimBP_HumanNPC_C_ExecuteUbergraph_Face_AnimBP_HumanNPC, CallFunc_Delay_Duration_ImplicitCast) == 0x000054, "Member 'Face_AnimBP_HumanNPC_C_ExecuteUbergraph_Face_AnimBP_HumanNPC::CallFunc_Delay_Duration_ImplicitCast' has a wrong offset!");
static_assert(offsetof(Face_AnimBP_HumanNPC_C_ExecuteUbergraph_Face_AnimBP_HumanNPC, K2Node_VariableSet_ExpressionStrength_ImplicitCast) == 0x000058, "Member 'Face_AnimBP_HumanNPC_C_ExecuteUbergraph_Face_AnimBP_HumanNPC::K2Node_VariableSet_ExpressionStrength_ImplicitCast' has a wrong offset!");

// Function Face_AnimBP_HumanNPC.Face_AnimBP_HumanNPC_C.RandomStartPosition_0_10
// 0x0058 (0x0058 - 0x0000)
struct Face_AnimBP_HumanNPC_C_RandomStartPosition_0_10 final
{
public:
	struct FAnimUpdateContext                     Context;                                           // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FAnimNodeReference                     Node;                                              // 0x0010(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FRandomStream                          local_Stream;                                      // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor)
	struct FSequencePlayerReference               CallFunc_ConvertToSequencePlayerPure_SequencePlayer; // 0x0028(0x0010)(NoDestructor)
	bool                                          CallFunc_ConvertToSequencePlayerPure_Result;       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_RandomFloatInRangeFromStream_ReturnValue; // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSequencePlayerReference               CallFunc_SetStartPosition_ReturnValue;             // 0x0040(0x0010)(NoDestructor)
	struct FRandomStream                          CallFunc_MakeRandomStream_ReturnValue;             // 0x0050(0x0008)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(Face_AnimBP_HumanNPC_C_RandomStartPosition_0_10) == 0x000008, "Wrong alignment on Face_AnimBP_HumanNPC_C_RandomStartPosition_0_10");
static_assert(sizeof(Face_AnimBP_HumanNPC_C_RandomStartPosition_0_10) == 0x000058, "Wrong size on Face_AnimBP_HumanNPC_C_RandomStartPosition_0_10");
static_assert(offsetof(Face_AnimBP_HumanNPC_C_RandomStartPosition_0_10, Context) == 0x000000, "Member 'Face_AnimBP_HumanNPC_C_RandomStartPosition_0_10::Context' has a wrong offset!");
static_assert(offsetof(Face_AnimBP_HumanNPC_C_RandomStartPosition_0_10, Node) == 0x000010, "Member 'Face_AnimBP_HumanNPC_C_RandomStartPosition_0_10::Node' has a wrong offset!");
static_assert(offsetof(Face_AnimBP_HumanNPC_C_RandomStartPosition_0_10, local_Stream) == 0x000020, "Member 'Face_AnimBP_HumanNPC_C_RandomStartPosition_0_10::local_Stream' has a wrong offset!");
static_assert(offsetof(Face_AnimBP_HumanNPC_C_RandomStartPosition_0_10, CallFunc_ConvertToSequencePlayerPure_SequencePlayer) == 0x000028, "Member 'Face_AnimBP_HumanNPC_C_RandomStartPosition_0_10::CallFunc_ConvertToSequencePlayerPure_SequencePlayer' has a wrong offset!");
static_assert(offsetof(Face_AnimBP_HumanNPC_C_RandomStartPosition_0_10, CallFunc_ConvertToSequencePlayerPure_Result) == 0x000038, "Member 'Face_AnimBP_HumanNPC_C_RandomStartPosition_0_10::CallFunc_ConvertToSequencePlayerPure_Result' has a wrong offset!");
static_assert(offsetof(Face_AnimBP_HumanNPC_C_RandomStartPosition_0_10, CallFunc_RandomFloatInRangeFromStream_ReturnValue) == 0x00003C, "Member 'Face_AnimBP_HumanNPC_C_RandomStartPosition_0_10::CallFunc_RandomFloatInRangeFromStream_ReturnValue' has a wrong offset!");
static_assert(offsetof(Face_AnimBP_HumanNPC_C_RandomStartPosition_0_10, CallFunc_SetStartPosition_ReturnValue) == 0x000040, "Member 'Face_AnimBP_HumanNPC_C_RandomStartPosition_0_10::CallFunc_SetStartPosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(Face_AnimBP_HumanNPC_C_RandomStartPosition_0_10, CallFunc_MakeRandomStream_ReturnValue) == 0x000050, "Member 'Face_AnimBP_HumanNPC_C_RandomStartPosition_0_10::CallFunc_MakeRandomStream_ReturnValue' has a wrong offset!");

// Function Face_AnimBP_HumanNPC.Face_AnimBP_HumanNPC_C.RandomStartPosition_0_2
// 0x0058 (0x0058 - 0x0000)
struct Face_AnimBP_HumanNPC_C_RandomStartPosition_0_2 final
{
public:
	struct FAnimUpdateContext                     Context;                                           // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FAnimNodeReference                     Node;                                              // 0x0010(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FRandomStream                          local_Stream;                                      // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor)
	struct FSequencePlayerReference               CallFunc_ConvertToSequencePlayerPure_SequencePlayer; // 0x0028(0x0010)(NoDestructor)
	bool                                          CallFunc_ConvertToSequencePlayerPure_Result;       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_RandomFloatInRangeFromStream_ReturnValue; // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSequencePlayerReference               CallFunc_SetStartPosition_ReturnValue;             // 0x0040(0x0010)(NoDestructor)
	struct FRandomStream                          CallFunc_MakeRandomStream_ReturnValue;             // 0x0050(0x0008)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(Face_AnimBP_HumanNPC_C_RandomStartPosition_0_2) == 0x000008, "Wrong alignment on Face_AnimBP_HumanNPC_C_RandomStartPosition_0_2");
static_assert(sizeof(Face_AnimBP_HumanNPC_C_RandomStartPosition_0_2) == 0x000058, "Wrong size on Face_AnimBP_HumanNPC_C_RandomStartPosition_0_2");
static_assert(offsetof(Face_AnimBP_HumanNPC_C_RandomStartPosition_0_2, Context) == 0x000000, "Member 'Face_AnimBP_HumanNPC_C_RandomStartPosition_0_2::Context' has a wrong offset!");
static_assert(offsetof(Face_AnimBP_HumanNPC_C_RandomStartPosition_0_2, Node) == 0x000010, "Member 'Face_AnimBP_HumanNPC_C_RandomStartPosition_0_2::Node' has a wrong offset!");
static_assert(offsetof(Face_AnimBP_HumanNPC_C_RandomStartPosition_0_2, local_Stream) == 0x000020, "Member 'Face_AnimBP_HumanNPC_C_RandomStartPosition_0_2::local_Stream' has a wrong offset!");
static_assert(offsetof(Face_AnimBP_HumanNPC_C_RandomStartPosition_0_2, CallFunc_ConvertToSequencePlayerPure_SequencePlayer) == 0x000028, "Member 'Face_AnimBP_HumanNPC_C_RandomStartPosition_0_2::CallFunc_ConvertToSequencePlayerPure_SequencePlayer' has a wrong offset!");
static_assert(offsetof(Face_AnimBP_HumanNPC_C_RandomStartPosition_0_2, CallFunc_ConvertToSequencePlayerPure_Result) == 0x000038, "Member 'Face_AnimBP_HumanNPC_C_RandomStartPosition_0_2::CallFunc_ConvertToSequencePlayerPure_Result' has a wrong offset!");
static_assert(offsetof(Face_AnimBP_HumanNPC_C_RandomStartPosition_0_2, CallFunc_RandomFloatInRangeFromStream_ReturnValue) == 0x00003C, "Member 'Face_AnimBP_HumanNPC_C_RandomStartPosition_0_2::CallFunc_RandomFloatInRangeFromStream_ReturnValue' has a wrong offset!");
static_assert(offsetof(Face_AnimBP_HumanNPC_C_RandomStartPosition_0_2, CallFunc_SetStartPosition_ReturnValue) == 0x000040, "Member 'Face_AnimBP_HumanNPC_C_RandomStartPosition_0_2::CallFunc_SetStartPosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(Face_AnimBP_HumanNPC_C_RandomStartPosition_0_2, CallFunc_MakeRandomStream_ReturnValue) == 0x000050, "Member 'Face_AnimBP_HumanNPC_C_RandomStartPosition_0_2::CallFunc_MakeRandomStream_ReturnValue' has a wrong offset!");

// Function Face_AnimBP_HumanNPC.Face_AnimBP_HumanNPC_C.SetPostProcessAnimation
// 0x0028 (0x0028 - 0x0000)
struct Face_AnimBP_HumanNPC_C_SetPostProcessAnimation final
{
public:
	class USkeletalMeshComponent*                 CallFunc_GetOwningComponent_ReturnValue;           // 0x0000(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimInstance*                          CallFunc_GetPostProcessInstance_ReturnValue;       // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_12[0x6];                                       // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UFace_PostProcess_AnimBP_MainChar_C*    K2Node_DynamicCast_AsFace_Post_Process_Anim_BP_Main_Char; // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Face_AnimBP_HumanNPC_C_SetPostProcessAnimation) == 0x000008, "Wrong alignment on Face_AnimBP_HumanNPC_C_SetPostProcessAnimation");
static_assert(sizeof(Face_AnimBP_HumanNPC_C_SetPostProcessAnimation) == 0x000028, "Wrong size on Face_AnimBP_HumanNPC_C_SetPostProcessAnimation");
static_assert(offsetof(Face_AnimBP_HumanNPC_C_SetPostProcessAnimation, CallFunc_GetOwningComponent_ReturnValue) == 0x000000, "Member 'Face_AnimBP_HumanNPC_C_SetPostProcessAnimation::CallFunc_GetOwningComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(Face_AnimBP_HumanNPC_C_SetPostProcessAnimation, CallFunc_GetPostProcessInstance_ReturnValue) == 0x000008, "Member 'Face_AnimBP_HumanNPC_C_SetPostProcessAnimation::CallFunc_GetPostProcessInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(Face_AnimBP_HumanNPC_C_SetPostProcessAnimation, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'Face_AnimBP_HumanNPC_C_SetPostProcessAnimation::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Face_AnimBP_HumanNPC_C_SetPostProcessAnimation, CallFunc_IsValid_ReturnValue_1) == 0x000011, "Member 'Face_AnimBP_HumanNPC_C_SetPostProcessAnimation::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Face_AnimBP_HumanNPC_C_SetPostProcessAnimation, K2Node_DynamicCast_AsFace_Post_Process_Anim_BP_Main_Char) == 0x000018, "Member 'Face_AnimBP_HumanNPC_C_SetPostProcessAnimation::K2Node_DynamicCast_AsFace_Post_Process_Anim_BP_Main_Char' has a wrong offset!");
static_assert(offsetof(Face_AnimBP_HumanNPC_C_SetPostProcessAnimation, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'Face_AnimBP_HumanNPC_C_SetPostProcessAnimation::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

