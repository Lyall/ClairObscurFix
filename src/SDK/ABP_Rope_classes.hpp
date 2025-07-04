﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Rope

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "E_RopeMovementStep_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "E_RopeMovementDirection_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_Rope.ABP_Rope_C
// 0x0860 (0x0BD0 - 0x0370)
class UABP_Rope_C final : public UAnimInstance
{
public:
	uint8                                         Pad_368[0x8];                                      // 0x0368(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0370(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0378(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0380(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0388(0x0020)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_11;                 // 0x03A8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_10;                 // 0x03D0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_9;                  // 0x03F8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_8;                  // 0x0420(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_7;                  // 0x0448(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_6;                  // 0x0470(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_5;                  // 0x0498(0x0028)()
	struct FAnimNode_SequenceEvaluator            AnimGraphNode_SequenceEvaluator_1;                 // 0x04C0(0x0040)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_10;                      // 0x0500(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_6;                    // 0x0520(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_9;                       // 0x0568(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_5;                    // 0x0588(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_8;                       // 0x05D0(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_4;                    // 0x05F0(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_7;                       // 0x0638(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_2;                      // 0x0658(0x00C8)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_6;                       // 0x0720(0x0020)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_4;                  // 0x0740(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_3;                  // 0x0768(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x0790(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x07B8(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;                    // 0x07E0(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_5;                       // 0x0828(0x0020)()
	struct FAnimNode_SequenceEvaluator            AnimGraphNode_SequenceEvaluator;                   // 0x0848(0x0040)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_4;                       // 0x0888(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x08A8(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;                       // 0x08F0(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x0910(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x0958(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x0978(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x09C0(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_1;                      // 0x09E0(0x00C8)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x0AA8(0x0020)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x0AC8(0x0028)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x0AF0(0x00C8)()
	class UBP_ExplorationCapacityComponent_Rope_C* ExplorationCapacityRopeComponent;                 // 0x0BB8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	E_RopeMovementDirection                       RopeMovementDirection;                             // 0x0BC0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_RopeMovementStep                            RopeMovementStep;                                  // 0x0BC1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HasLanded;                                         // 0x0BC2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void AnimNotify_OnEnterTransitionDone();
	void AnimNotify_OnFinal();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Rope_AnimGraphNode_TransitionResult_198199DE48F98A3CC9354CA2B8FF8984();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Rope_AnimGraphNode_TransitionResult_3280FAEB48C4608D18B224A0350A9C05();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Rope_AnimGraphNode_TransitionResult_336557F147CF37075D2C6883ABC61387();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Rope_AnimGraphNode_TransitionResult_4DF3BF6748F21C92B578C0908CFDCF52();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Rope_AnimGraphNode_TransitionResult_88755CC6450A726295F05EB2C145DE90();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Rope_AnimGraphNode_TransitionResult_9779FC5B4672710E8934ABADFD7A0658();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Rope_AnimGraphNode_TransitionResult_9D17ABFE4A1D8F7A556A089D8B381BF3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Rope_AnimGraphNode_TransitionResult_B96B6FF540DF3C056832AA922A0F73A6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Rope_AnimGraphNode_TransitionResult_CEACDCBD4F661DF2D6EB7387612A223B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Rope_AnimGraphNode_TransitionResult_DA41C38B4190978C79141D92B105B16A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Rope_AnimGraphNode_TransitionResult_E5F3437042D85EBEB665C7B0C48E40EE();
	void ExecuteUbergraph_ABP_Rope(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_Rope_C">();
	}
	static class UABP_Rope_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_Rope_C>();
	}
};
static_assert(alignof(UABP_Rope_C) == 0x000010, "Wrong alignment on UABP_Rope_C");
static_assert(sizeof(UABP_Rope_C) == 0x000BD0, "Wrong size on UABP_Rope_C");
static_assert(offsetof(UABP_Rope_C, UberGraphFrame) == 0x000370, "Member 'UABP_Rope_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_Rope_C, AnimBlueprintExtension_PropertyAccess) == 0x000378, "Member 'UABP_Rope_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UABP_Rope_C, AnimBlueprintExtension_Base) == 0x000380, "Member 'UABP_Rope_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UABP_Rope_C, AnimGraphNode_Root) == 0x000388, "Member 'UABP_Rope_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_Rope_C, AnimGraphNode_TransitionResult_11) == 0x0003A8, "Member 'UABP_Rope_C::AnimGraphNode_TransitionResult_11' has a wrong offset!");
static_assert(offsetof(UABP_Rope_C, AnimGraphNode_TransitionResult_10) == 0x0003D0, "Member 'UABP_Rope_C::AnimGraphNode_TransitionResult_10' has a wrong offset!");
static_assert(offsetof(UABP_Rope_C, AnimGraphNode_TransitionResult_9) == 0x0003F8, "Member 'UABP_Rope_C::AnimGraphNode_TransitionResult_9' has a wrong offset!");
static_assert(offsetof(UABP_Rope_C, AnimGraphNode_TransitionResult_8) == 0x000420, "Member 'UABP_Rope_C::AnimGraphNode_TransitionResult_8' has a wrong offset!");
static_assert(offsetof(UABP_Rope_C, AnimGraphNode_TransitionResult_7) == 0x000448, "Member 'UABP_Rope_C::AnimGraphNode_TransitionResult_7' has a wrong offset!");
static_assert(offsetof(UABP_Rope_C, AnimGraphNode_TransitionResult_6) == 0x000470, "Member 'UABP_Rope_C::AnimGraphNode_TransitionResult_6' has a wrong offset!");
static_assert(offsetof(UABP_Rope_C, AnimGraphNode_TransitionResult_5) == 0x000498, "Member 'UABP_Rope_C::AnimGraphNode_TransitionResult_5' has a wrong offset!");
static_assert(offsetof(UABP_Rope_C, AnimGraphNode_SequenceEvaluator_1) == 0x0004C0, "Member 'UABP_Rope_C::AnimGraphNode_SequenceEvaluator_1' has a wrong offset!");
static_assert(offsetof(UABP_Rope_C, AnimGraphNode_StateResult_10) == 0x000500, "Member 'UABP_Rope_C::AnimGraphNode_StateResult_10' has a wrong offset!");
static_assert(offsetof(UABP_Rope_C, AnimGraphNode_SequencePlayer_6) == 0x000520, "Member 'UABP_Rope_C::AnimGraphNode_SequencePlayer_6' has a wrong offset!");
static_assert(offsetof(UABP_Rope_C, AnimGraphNode_StateResult_9) == 0x000568, "Member 'UABP_Rope_C::AnimGraphNode_StateResult_9' has a wrong offset!");
static_assert(offsetof(UABP_Rope_C, AnimGraphNode_SequencePlayer_5) == 0x000588, "Member 'UABP_Rope_C::AnimGraphNode_SequencePlayer_5' has a wrong offset!");
static_assert(offsetof(UABP_Rope_C, AnimGraphNode_StateResult_8) == 0x0005D0, "Member 'UABP_Rope_C::AnimGraphNode_StateResult_8' has a wrong offset!");
static_assert(offsetof(UABP_Rope_C, AnimGraphNode_SequencePlayer_4) == 0x0005F0, "Member 'UABP_Rope_C::AnimGraphNode_SequencePlayer_4' has a wrong offset!");
static_assert(offsetof(UABP_Rope_C, AnimGraphNode_StateResult_7) == 0x000638, "Member 'UABP_Rope_C::AnimGraphNode_StateResult_7' has a wrong offset!");
static_assert(offsetof(UABP_Rope_C, AnimGraphNode_StateMachine_2) == 0x000658, "Member 'UABP_Rope_C::AnimGraphNode_StateMachine_2' has a wrong offset!");
static_assert(offsetof(UABP_Rope_C, AnimGraphNode_StateResult_6) == 0x000720, "Member 'UABP_Rope_C::AnimGraphNode_StateResult_6' has a wrong offset!");
static_assert(offsetof(UABP_Rope_C, AnimGraphNode_TransitionResult_4) == 0x000740, "Member 'UABP_Rope_C::AnimGraphNode_TransitionResult_4' has a wrong offset!");
static_assert(offsetof(UABP_Rope_C, AnimGraphNode_TransitionResult_3) == 0x000768, "Member 'UABP_Rope_C::AnimGraphNode_TransitionResult_3' has a wrong offset!");
static_assert(offsetof(UABP_Rope_C, AnimGraphNode_TransitionResult_2) == 0x000790, "Member 'UABP_Rope_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(UABP_Rope_C, AnimGraphNode_TransitionResult_1) == 0x0007B8, "Member 'UABP_Rope_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UABP_Rope_C, AnimGraphNode_SequencePlayer_3) == 0x0007E0, "Member 'UABP_Rope_C::AnimGraphNode_SequencePlayer_3' has a wrong offset!");
static_assert(offsetof(UABP_Rope_C, AnimGraphNode_StateResult_5) == 0x000828, "Member 'UABP_Rope_C::AnimGraphNode_StateResult_5' has a wrong offset!");
static_assert(offsetof(UABP_Rope_C, AnimGraphNode_SequenceEvaluator) == 0x000848, "Member 'UABP_Rope_C::AnimGraphNode_SequenceEvaluator' has a wrong offset!");
static_assert(offsetof(UABP_Rope_C, AnimGraphNode_StateResult_4) == 0x000888, "Member 'UABP_Rope_C::AnimGraphNode_StateResult_4' has a wrong offset!");
static_assert(offsetof(UABP_Rope_C, AnimGraphNode_SequencePlayer_2) == 0x0008A8, "Member 'UABP_Rope_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UABP_Rope_C, AnimGraphNode_StateResult_3) == 0x0008F0, "Member 'UABP_Rope_C::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(UABP_Rope_C, AnimGraphNode_SequencePlayer_1) == 0x000910, "Member 'UABP_Rope_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UABP_Rope_C, AnimGraphNode_StateResult_2) == 0x000958, "Member 'UABP_Rope_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UABP_Rope_C, AnimGraphNode_SequencePlayer) == 0x000978, "Member 'UABP_Rope_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UABP_Rope_C, AnimGraphNode_StateResult_1) == 0x0009C0, "Member 'UABP_Rope_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UABP_Rope_C, AnimGraphNode_StateMachine_1) == 0x0009E0, "Member 'UABP_Rope_C::AnimGraphNode_StateMachine_1' has a wrong offset!");
static_assert(offsetof(UABP_Rope_C, AnimGraphNode_StateResult) == 0x000AA8, "Member 'UABP_Rope_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UABP_Rope_C, AnimGraphNode_TransitionResult) == 0x000AC8, "Member 'UABP_Rope_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UABP_Rope_C, AnimGraphNode_StateMachine) == 0x000AF0, "Member 'UABP_Rope_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UABP_Rope_C, ExplorationCapacityRopeComponent) == 0x000BB8, "Member 'UABP_Rope_C::ExplorationCapacityRopeComponent' has a wrong offset!");
static_assert(offsetof(UABP_Rope_C, RopeMovementDirection) == 0x000BC0, "Member 'UABP_Rope_C::RopeMovementDirection' has a wrong offset!");
static_assert(offsetof(UABP_Rope_C, RopeMovementStep) == 0x000BC1, "Member 'UABP_Rope_C::RopeMovementStep' has a wrong offset!");
static_assert(offsetof(UABP_Rope_C, HasLanded) == 0x000BC2, "Member 'UABP_Rope_C::HasLanded' has a wrong offset!");

}

