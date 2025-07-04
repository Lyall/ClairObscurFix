﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FL_AnimationHelpers

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_FL_AnimationHelpers.BP_FL_AnimationHelpers_C.ShouldDisablePostProcessInAnimation
// 0x0070 (0x0070 - 0x0000)
struct BP_FL_AnimationHelpers_C_ShouldDisablePostProcessInAnimation final
{
public:
	class APawn*                                  PawnOwner;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          ShouldDisablePostProcessAnimationBlueprint;        // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_jRPG_Character_World_C*             K2Node_DynamicCast_AsBP_J_RPG_Character_World;     // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetVelocity_ReturnValue;                  // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetIsAttachedToMovingPlatform_ReturnValue; // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_VSize_ReturnValue;                        // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AALS_CharacterBP_C*                     K2Node_DynamicCast_AsALS_Character_BP;             // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_GetMaxVelocityToDisablePostProcess_ReturnValue; // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FL_AnimationHelpers_C_ShouldDisablePostProcessInAnimation) == 0x000008, "Wrong alignment on BP_FL_AnimationHelpers_C_ShouldDisablePostProcessInAnimation");
static_assert(sizeof(BP_FL_AnimationHelpers_C_ShouldDisablePostProcessInAnimation) == 0x000070, "Wrong size on BP_FL_AnimationHelpers_C_ShouldDisablePostProcessInAnimation");
static_assert(offsetof(BP_FL_AnimationHelpers_C_ShouldDisablePostProcessInAnimation, PawnOwner) == 0x000000, "Member 'BP_FL_AnimationHelpers_C_ShouldDisablePostProcessInAnimation::PawnOwner' has a wrong offset!");
static_assert(offsetof(BP_FL_AnimationHelpers_C_ShouldDisablePostProcessInAnimation, __WorldContext) == 0x000008, "Member 'BP_FL_AnimationHelpers_C_ShouldDisablePostProcessInAnimation::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_FL_AnimationHelpers_C_ShouldDisablePostProcessInAnimation, ShouldDisablePostProcessAnimationBlueprint) == 0x000010, "Member 'BP_FL_AnimationHelpers_C_ShouldDisablePostProcessInAnimation::ShouldDisablePostProcessAnimationBlueprint' has a wrong offset!");
static_assert(offsetof(BP_FL_AnimationHelpers_C_ShouldDisablePostProcessInAnimation, K2Node_DynamicCast_AsBP_J_RPG_Character_World) == 0x000018, "Member 'BP_FL_AnimationHelpers_C_ShouldDisablePostProcessInAnimation::K2Node_DynamicCast_AsBP_J_RPG_Character_World' has a wrong offset!");
static_assert(offsetof(BP_FL_AnimationHelpers_C_ShouldDisablePostProcessInAnimation, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_FL_AnimationHelpers_C_ShouldDisablePostProcessInAnimation::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_FL_AnimationHelpers_C_ShouldDisablePostProcessInAnimation, CallFunc_GetVelocity_ReturnValue) == 0x000028, "Member 'BP_FL_AnimationHelpers_C_ShouldDisablePostProcessInAnimation::CallFunc_GetVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FL_AnimationHelpers_C_ShouldDisablePostProcessInAnimation, CallFunc_GetIsAttachedToMovingPlatform_ReturnValue) == 0x000040, "Member 'BP_FL_AnimationHelpers_C_ShouldDisablePostProcessInAnimation::CallFunc_GetIsAttachedToMovingPlatform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FL_AnimationHelpers_C_ShouldDisablePostProcessInAnimation, CallFunc_VSize_ReturnValue) == 0x000048, "Member 'BP_FL_AnimationHelpers_C_ShouldDisablePostProcessInAnimation::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FL_AnimationHelpers_C_ShouldDisablePostProcessInAnimation, K2Node_DynamicCast_AsALS_Character_BP) == 0x000050, "Member 'BP_FL_AnimationHelpers_C_ShouldDisablePostProcessInAnimation::K2Node_DynamicCast_AsALS_Character_BP' has a wrong offset!");
static_assert(offsetof(BP_FL_AnimationHelpers_C_ShouldDisablePostProcessInAnimation, K2Node_DynamicCast_bSuccess_1) == 0x000058, "Member 'BP_FL_AnimationHelpers_C_ShouldDisablePostProcessInAnimation::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_FL_AnimationHelpers_C_ShouldDisablePostProcessInAnimation, CallFunc_GetMaxVelocityToDisablePostProcess_ReturnValue) == 0x000060, "Member 'BP_FL_AnimationHelpers_C_ShouldDisablePostProcessInAnimation::CallFunc_GetMaxVelocityToDisablePostProcess_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FL_AnimationHelpers_C_ShouldDisablePostProcessInAnimation, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000068, "Member 'BP_FL_AnimationHelpers_C_ShouldDisablePostProcessInAnimation::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");

}

