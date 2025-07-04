﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_PostProcess_Maelle_Baguette

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "ABP_PostProcess_Maelle_Baguette_structs.hpp"
#include "ControlRig_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_PostProcess_Maelle_Baguette.ABP_PostProcess_Maelle_Baguette_C
// 0x8F50 (0x92C0 - 0x0370)
class UABP_PostProcess_Maelle_Baguette_C final : public UAnimInstance
{
public:
	uint8                                         Pad_368[0x8];                                      // 0x0368(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0370(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables; // 0x0378(0x0002)(HasGetValueTypeHash)
	uint8                                         Pad_37A[0x6];                                      // 0x037A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0380(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0388(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0390(0x0020)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose;                     // 0x03B0(0x00B8)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;             // 0x0468(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0x0488(0x0020)()
	uint8                                         Pad_4A8[0x8];                                      // 0x04A8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_9;                      // 0x04B0(0x0520)()
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_8;                      // 0x09D0(0x0520)()
	struct FAnimNode_ControlRig                   AnimGraphNode_ControlRig;                          // 0x0EF0(0x04D0)(ContainsInstancedReference)
	struct FAnimNode_PoseDriver                   AnimGraphNode_PoseDriver_43;                       // 0x13C0(0x01A0)()
	struct FAnimNode_PoseDriver                   AnimGraphNode_PoseDriver_42;                       // 0x1560(0x01A0)()
	struct FAnimNode_PoseDriver                   AnimGraphNode_PoseDriver_41;                       // 0x1700(0x01A0)()
	struct FAnimNode_PoseDriver                   AnimGraphNode_PoseDriver_40;                       // 0x18A0(0x01A0)()
	struct FAnimNode_PoseDriver                   AnimGraphNode_PoseDriver_39;                       // 0x1A40(0x01A0)()
	struct FAnimNode_PoseDriver                   AnimGraphNode_PoseDriver_38;                       // 0x1BE0(0x01A0)()
	struct FAnimNode_PoseDriver                   AnimGraphNode_PoseDriver_37;                       // 0x1D80(0x01A0)()
	struct FAnimNode_PoseDriver                   AnimGraphNode_PoseDriver_36;                       // 0x1F20(0x01A0)()
	struct FAnimNode_PoseDriver                   AnimGraphNode_PoseDriver_35;                       // 0x20C0(0x01A0)()
	struct FAnimNode_PoseDriver                   AnimGraphNode_PoseDriver_34;                       // 0x2260(0x01A0)()
	struct FAnimNode_PoseDriver                   AnimGraphNode_PoseDriver_33;                       // 0x2400(0x01A0)()
	struct FAnimNode_PoseDriver                   AnimGraphNode_PoseDriver_32;                       // 0x25A0(0x01A0)()
	struct FAnimNode_PoseDriver                   AnimGraphNode_PoseDriver_31;                       // 0x2740(0x01A0)()
	struct FAnimNode_PoseDriver                   AnimGraphNode_PoseDriver_30;                       // 0x28E0(0x01A0)()
	struct FAnimNode_BoneDrivenController         AnimGraphNode_BoneDrivenController_3;              // 0x2A80(0x0128)()
	struct FAnimNode_BoneDrivenController         AnimGraphNode_BoneDrivenController_2;              // 0x2BA8(0x0128)()
	struct FAnimNode_BoneDrivenController         AnimGraphNode_BoneDrivenController_1;              // 0x2CD0(0x0128)()
	struct FAnimNode_BoneDrivenController         AnimGraphNode_BoneDrivenController;                // 0x2DF8(0x0128)()
	struct FAnimNode_PoseDriver                   AnimGraphNode_PoseDriver_29;                       // 0x2F20(0x01A0)()
	struct FAnimNode_PoseDriver                   AnimGraphNode_PoseDriver_28;                       // 0x30C0(0x01A0)()
	struct FAnimNode_PoseDriver                   AnimGraphNode_PoseDriver_27;                       // 0x3260(0x01A0)()
	struct FAnimNode_PoseDriver                   AnimGraphNode_PoseDriver_26;                       // 0x3400(0x01A0)()
	struct FAnimNode_PoseDriver                   AnimGraphNode_PoseDriver_25;                       // 0x35A0(0x01A0)()
	struct FAnimNode_PoseDriver                   AnimGraphNode_PoseDriver_24;                       // 0x3740(0x01A0)()
	struct FAnimNode_PoseDriver                   AnimGraphNode_PoseDriver_23;                       // 0x38E0(0x01A0)()
	struct FAnimNode_PoseDriver                   AnimGraphNode_PoseDriver_22;                       // 0x3A80(0x01A0)()
	struct FAnimNode_PoseDriver                   AnimGraphNode_PoseDriver_21;                       // 0x3C20(0x01A0)()
	struct FAnimNode_PoseDriver                   AnimGraphNode_PoseDriver_20;                       // 0x3DC0(0x01A0)()
	struct FAnimNode_PoseDriver                   AnimGraphNode_PoseDriver_19;                       // 0x3F60(0x01A0)()
	struct FAnimNode_PoseDriver                   AnimGraphNode_PoseDriver_18;                       // 0x4100(0x01A0)()
	struct FAnimNode_PoseDriver                   AnimGraphNode_PoseDriver_17;                       // 0x42A0(0x01A0)()
	struct FAnimNode_PoseDriver                   AnimGraphNode_PoseDriver_16;                       // 0x4440(0x01A0)()
	struct FAnimNode_PoseDriver                   AnimGraphNode_PoseDriver_15;                       // 0x45E0(0x01A0)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;                     // 0x4780(0x0028)()
	struct FAnimNode_PoseDriver                   AnimGraphNode_PoseDriver_14;                       // 0x47A8(0x01A0)()
	struct FAnimNode_PoseDriver                   AnimGraphNode_PoseDriver_13;                       // 0x4948(0x01A0)()
	struct FAnimNode_PoseDriver                   AnimGraphNode_PoseDriver_12;                       // 0x4AE8(0x01A0)()
	struct FAnimNode_PoseDriver                   AnimGraphNode_PoseDriver_11;                       // 0x4C88(0x01A0)()
	struct FAnimNode_PoseDriver                   AnimGraphNode_PoseDriver_10;                       // 0x4E28(0x01A0)()
	struct FAnimNode_PoseDriver                   AnimGraphNode_PoseDriver_9;                        // 0x4FC8(0x01A0)()
	struct FAnimNode_PoseDriver                   AnimGraphNode_PoseDriver_8;                        // 0x5168(0x01A0)()
	struct FAnimNode_PoseDriver                   AnimGraphNode_PoseDriver_7;                        // 0x5308(0x01A0)()
	struct FAnimNode_PoseDriver                   AnimGraphNode_PoseDriver_6;                        // 0x54A8(0x01A0)()
	struct FAnimNode_PoseDriver                   AnimGraphNode_PoseDriver_5;                        // 0x5648(0x01A0)()
	struct FAnimNode_PoseDriver                   AnimGraphNode_PoseDriver_4;                        // 0x57E8(0x01A0)()
	struct FAnimNode_PoseDriver                   AnimGraphNode_PoseDriver_3;                        // 0x5988(0x01A0)()
	struct FAnimNode_PoseDriver                   AnimGraphNode_PoseDriver_2;                        // 0x5B28(0x01A0)()
	struct FAnimNode_PoseDriver                   AnimGraphNode_PoseDriver_1;                        // 0x5CC8(0x01A0)()
	struct FAnimNode_PoseDriver                   AnimGraphNode_PoseDriver;                          // 0x5E68(0x01A0)()
	uint8                                         Pad_6008[0x8];                                     // 0x6008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_7;                      // 0x6010(0x0520)()
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_6;                      // 0x6530(0x0520)()
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_5;                      // 0x6A50(0x0520)()
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_4;                      // 0x6F70(0x0520)()
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_3;                      // 0x7490(0x0520)()
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_2;                      // 0x79B0(0x0520)()
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_1;                      // 0x7ED0(0x0520)()
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics;                        // 0x83F0(0x0520)()
	struct FAnimNode_SpringBone                   AnimGraphNode_SpringBone_5;                        // 0x8910(0x0168)()
	struct FAnimNode_SpringBone                   AnimGraphNode_SpringBone_4;                        // 0x8A78(0x0168)()
	struct FAnimNode_SpringBone                   AnimGraphNode_SpringBone_3;                        // 0x8BE0(0x0168)()
	struct FAnimNode_SpringBone                   AnimGraphNode_SpringBone_2;                        // 0x8D48(0x0168)()
	struct FAnimNode_SpringBone                   AnimGraphNode_SpringBone_1;                        // 0x8EB0(0x0168)()
	struct FAnimNode_SpringBone                   AnimGraphNode_SpringBone;                          // 0x9018(0x0168)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x9180(0x0020)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x91A0(0x0020)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x91C0(0x0080)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x9240(0x0028)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;                     // 0x9268(0x0048)()
	bool                                          ShouldDisablePostProcess;                          // 0x92B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph_0);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_ABP_PostProcess_Maelle_Baguette(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_PostProcess_Maelle_Baguette_C">();
	}
	static class UABP_PostProcess_Maelle_Baguette_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_PostProcess_Maelle_Baguette_C>();
	}
};
static_assert(alignof(UABP_PostProcess_Maelle_Baguette_C) == 0x000010, "Wrong alignment on UABP_PostProcess_Maelle_Baguette_C");
static_assert(sizeof(UABP_PostProcess_Maelle_Baguette_C) == 0x0092C0, "Wrong size on UABP_PostProcess_Maelle_Baguette_C");
static_assert(offsetof(UABP_PostProcess_Maelle_Baguette_C, UberGraphFrame) == 0x000370, "Member 'UABP_PostProcess_Maelle_Baguette_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Maelle_Baguette_C, __AnimBlueprintMutables) == 0x000378, "Member 'UABP_PostProcess_Maelle_Baguette_C::__AnimBlueprintMutables' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Maelle_Baguette_C, AnimBlueprintExtension_PropertyAccess) == 0x000380, "Member 'UABP_PostProcess_Maelle_Baguette_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Maelle_Baguette_C, AnimBlueprintExtension_Base) == 0x000388, "Member 'UABP_PostProcess_Maelle_Baguette_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Maelle_Baguette_C, AnimGraphNode_Root) == 0x000390, "Member 'UABP_PostProcess_Maelle_Baguette_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Maelle_Baguette_C, AnimGraphNode_LinkedInputPose) == 0x0003B0, "Member 'UABP_PostProcess_Maelle_Baguette_C::AnimGraphNode_LinkedInputPose' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Maelle_Baguette_C, AnimGraphNode_LocalToComponentSpace_1) == 0x000468, "Member 'UABP_PostProcess_Maelle_Baguette_C::AnimGraphNode_LocalToComponentSpace_1' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Maelle_Baguette_C, AnimGraphNode_ComponentToLocalSpace_1) == 0x000488, "Member 'UABP_PostProcess_Maelle_Baguette_C::AnimGraphNode_ComponentToLocalSpace_1' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Maelle_Baguette_C, AnimGraphNode_AnimDynamics_9) == 0x0004B0, "Member 'UABP_PostProcess_Maelle_Baguette_C::AnimGraphNode_AnimDynamics_9' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Maelle_Baguette_C, AnimGraphNode_AnimDynamics_8) == 0x0009D0, "Member 'UABP_PostProcess_Maelle_Baguette_C::AnimGraphNode_AnimDynamics_8' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Maelle_Baguette_C, AnimGraphNode_ControlRig) == 0x000EF0, "Member 'UABP_PostProcess_Maelle_Baguette_C::AnimGraphNode_ControlRig' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Maelle_Baguette_C, AnimGraphNode_PoseDriver_43) == 0x0013C0, "Member 'UABP_PostProcess_Maelle_Baguette_C::AnimGraphNode_PoseDriver_43' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Maelle_Baguette_C, AnimGraphNode_PoseDriver_42) == 0x001560, "Member 'UABP_PostProcess_Maelle_Baguette_C::AnimGraphNode_PoseDriver_42' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Maelle_Baguette_C, AnimGraphNode_PoseDriver_41) == 0x001700, "Member 'UABP_PostProcess_Maelle_Baguette_C::AnimGraphNode_PoseDriver_41' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Maelle_Baguette_C, AnimGraphNode_PoseDriver_40) == 0x0018A0, "Member 'UABP_PostProcess_Maelle_Baguette_C::AnimGraphNode_PoseDriver_40' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Maelle_Baguette_C, AnimGraphNode_PoseDriver_39) == 0x001A40, "Member 'UABP_PostProcess_Maelle_Baguette_C::AnimGraphNode_PoseDriver_39' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Maelle_Baguette_C, AnimGraphNode_PoseDriver_38) == 0x001BE0, "Member 'UABP_PostProcess_Maelle_Baguette_C::AnimGraphNode_PoseDriver_38' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Maelle_Baguette_C, AnimGraphNode_PoseDriver_37) == 0x001D80, "Member 'UABP_PostProcess_Maelle_Baguette_C::AnimGraphNode_PoseDriver_37' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Maelle_Baguette_C, AnimGraphNode_PoseDriver_36) == 0x001F20, "Member 'UABP_PostProcess_Maelle_Baguette_C::AnimGraphNode_PoseDriver_36' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Maelle_Baguette_C, AnimGraphNode_PoseDriver_35) == 0x0020C0, "Member 'UABP_PostProcess_Maelle_Baguette_C::AnimGraphNode_PoseDriver_35' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Maelle_Baguette_C, AnimGraphNode_PoseDriver_34) == 0x002260, "Member 'UABP_PostProcess_Maelle_Baguette_C::AnimGraphNode_PoseDriver_34' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Maelle_Baguette_C, AnimGraphNode_PoseDriver_33) == 0x002400, "Member 'UABP_PostProcess_Maelle_Baguette_C::AnimGraphNode_PoseDriver_33' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Maelle_Baguette_C, AnimGraphNode_PoseDriver_32) == 0x0025A0, "Member 'UABP_PostProcess_Maelle_Baguette_C::AnimGraphNode_PoseDriver_32' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Maelle_Baguette_C, AnimGraphNode_PoseDriver_31) == 0x002740, "Member 'UABP_PostProcess_Maelle_Baguette_C::AnimGraphNode_PoseDriver_31' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Maelle_Baguette_C, AnimGraphNode_PoseDriver_30) == 0x0028E0, "Member 'UABP_PostProcess_Maelle_Baguette_C::AnimGraphNode_PoseDriver_30' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Maelle_Baguette_C, AnimGraphNode_BoneDrivenController_3) == 0x002A80, "Member 'UABP_PostProcess_Maelle_Baguette_C::AnimGraphNode_BoneDrivenController_3' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Maelle_Baguette_C, AnimGraphNode_BoneDrivenController_2) == 0x002BA8, "Member 'UABP_PostProcess_Maelle_Baguette_C::AnimGraphNode_BoneDrivenController_2' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Maelle_Baguette_C, AnimGraphNode_BoneDrivenController_1) == 0x002CD0, "Member 'UABP_PostProcess_Maelle_Baguette_C::AnimGraphNode_BoneDrivenController_1' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Maelle_Baguette_C, AnimGraphNode_BoneDrivenController) == 0x002DF8, "Member 'UABP_PostProcess_Maelle_Baguette_C::AnimGraphNode_BoneDrivenController' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Maelle_Baguette_C, AnimGraphNode_PoseDriver_29) == 0x002F20, "Member 'UABP_PostProcess_Maelle_Baguette_C::AnimGraphNode_PoseDriver_29' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Maelle_Baguette_C, AnimGraphNode_PoseDriver_28) == 0x0030C0, "Member 'UABP_PostProcess_Maelle_Baguette_C::AnimGraphNode_PoseDriver_28' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Maelle_Baguette_C, AnimGraphNode_PoseDriver_27) == 0x003260, "Member 'UABP_PostProcess_Maelle_Baguette_C::AnimGraphNode_PoseDriver_27' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Maelle_Baguette_C, AnimGraphNode_PoseDriver_26) == 0x003400, "Member 'UABP_PostProcess_Maelle_Baguette_C::AnimGraphNode_PoseDriver_26' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Maelle_Baguette_C, AnimGraphNode_PoseDriver_25) == 0x0035A0, "Member 'UABP_PostProcess_Maelle_Baguette_C::AnimGraphNode_PoseDriver_25' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Maelle_Baguette_C, AnimGraphNode_PoseDriver_24) == 0x003740, "Member 'UABP_PostProcess_Maelle_Baguette_C::AnimGraphNode_PoseDriver_24' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Maelle_Baguette_C, AnimGraphNode_PoseDriver_23) == 0x0038E0, "Member 'UABP_PostProcess_Maelle_Baguette_C::AnimGraphNode_PoseDriver_23' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Maelle_Baguette_C, AnimGraphNode_PoseDriver_22) == 0x003A80, "Member 'UABP_PostProcess_Maelle_Baguette_C::AnimGraphNode_PoseDriver_22' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Maelle_Baguette_C, AnimGraphNode_PoseDriver_21) == 0x003C20, "Member 'UABP_PostProcess_Maelle_Baguette_C::AnimGraphNode_PoseDriver_21' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Maelle_Baguette_C, AnimGraphNode_PoseDriver_20) == 0x003DC0, "Member 'UABP_PostProcess_Maelle_Baguette_C::AnimGraphNode_PoseDriver_20' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Maelle_Baguette_C, AnimGraphNode_PoseDriver_19) == 0x003F60, "Member 'UABP_PostProcess_Maelle_Baguette_C::AnimGraphNode_PoseDriver_19' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Maelle_Baguette_C, AnimGraphNode_PoseDriver_18) == 0x004100, "Member 'UABP_PostProcess_Maelle_Baguette_C::AnimGraphNode_PoseDriver_18' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Maelle_Baguette_C, AnimGraphNode_PoseDriver_17) == 0x0042A0, "Member 'UABP_PostProcess_Maelle_Baguette_C::AnimGraphNode_PoseDriver_17' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Maelle_Baguette_C, AnimGraphNode_PoseDriver_16) == 0x004440, "Member 'UABP_PostProcess_Maelle_Baguette_C::AnimGraphNode_PoseDriver_16' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Maelle_Baguette_C, AnimGraphNode_PoseDriver_15) == 0x0045E0, "Member 'UABP_PostProcess_Maelle_Baguette_C::AnimGraphNode_PoseDriver_15' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Maelle_Baguette_C, AnimGraphNode_UseCachedPose_1) == 0x004780, "Member 'UABP_PostProcess_Maelle_Baguette_C::AnimGraphNode_UseCachedPose_1' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Maelle_Baguette_C, AnimGraphNode_PoseDriver_14) == 0x0047A8, "Member 'UABP_PostProcess_Maelle_Baguette_C::AnimGraphNode_PoseDriver_14' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Maelle_Baguette_C, AnimGraphNode_PoseDriver_13) == 0x004948, "Member 'UABP_PostProcess_Maelle_Baguette_C::AnimGraphNode_PoseDriver_13' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Maelle_Baguette_C, AnimGraphNode_PoseDriver_12) == 0x004AE8, "Member 'UABP_PostProcess_Maelle_Baguette_C::AnimGraphNode_PoseDriver_12' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Maelle_Baguette_C, AnimGraphNode_PoseDriver_11) == 0x004C88, "Member 'UABP_PostProcess_Maelle_Baguette_C::AnimGraphNode_PoseDriver_11' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Maelle_Baguette_C, AnimGraphNode_PoseDriver_10) == 0x004E28, "Member 'UABP_PostProcess_Maelle_Baguette_C::AnimGraphNode_PoseDriver_10' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Maelle_Baguette_C, AnimGraphNode_PoseDriver_9) == 0x004FC8, "Member 'UABP_PostProcess_Maelle_Baguette_C::AnimGraphNode_PoseDriver_9' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Maelle_Baguette_C, AnimGraphNode_PoseDriver_8) == 0x005168, "Member 'UABP_PostProcess_Maelle_Baguette_C::AnimGraphNode_PoseDriver_8' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Maelle_Baguette_C, AnimGraphNode_PoseDriver_7) == 0x005308, "Member 'UABP_PostProcess_Maelle_Baguette_C::AnimGraphNode_PoseDriver_7' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Maelle_Baguette_C, AnimGraphNode_PoseDriver_6) == 0x0054A8, "Member 'UABP_PostProcess_Maelle_Baguette_C::AnimGraphNode_PoseDriver_6' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Maelle_Baguette_C, AnimGraphNode_PoseDriver_5) == 0x005648, "Member 'UABP_PostProcess_Maelle_Baguette_C::AnimGraphNode_PoseDriver_5' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Maelle_Baguette_C, AnimGraphNode_PoseDriver_4) == 0x0057E8, "Member 'UABP_PostProcess_Maelle_Baguette_C::AnimGraphNode_PoseDriver_4' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Maelle_Baguette_C, AnimGraphNode_PoseDriver_3) == 0x005988, "Member 'UABP_PostProcess_Maelle_Baguette_C::AnimGraphNode_PoseDriver_3' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Maelle_Baguette_C, AnimGraphNode_PoseDriver_2) == 0x005B28, "Member 'UABP_PostProcess_Maelle_Baguette_C::AnimGraphNode_PoseDriver_2' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Maelle_Baguette_C, AnimGraphNode_PoseDriver_1) == 0x005CC8, "Member 'UABP_PostProcess_Maelle_Baguette_C::AnimGraphNode_PoseDriver_1' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Maelle_Baguette_C, AnimGraphNode_PoseDriver) == 0x005E68, "Member 'UABP_PostProcess_Maelle_Baguette_C::AnimGraphNode_PoseDriver' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Maelle_Baguette_C, AnimGraphNode_AnimDynamics_7) == 0x006010, "Member 'UABP_PostProcess_Maelle_Baguette_C::AnimGraphNode_AnimDynamics_7' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Maelle_Baguette_C, AnimGraphNode_AnimDynamics_6) == 0x006530, "Member 'UABP_PostProcess_Maelle_Baguette_C::AnimGraphNode_AnimDynamics_6' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Maelle_Baguette_C, AnimGraphNode_AnimDynamics_5) == 0x006A50, "Member 'UABP_PostProcess_Maelle_Baguette_C::AnimGraphNode_AnimDynamics_5' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Maelle_Baguette_C, AnimGraphNode_AnimDynamics_4) == 0x006F70, "Member 'UABP_PostProcess_Maelle_Baguette_C::AnimGraphNode_AnimDynamics_4' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Maelle_Baguette_C, AnimGraphNode_AnimDynamics_3) == 0x007490, "Member 'UABP_PostProcess_Maelle_Baguette_C::AnimGraphNode_AnimDynamics_3' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Maelle_Baguette_C, AnimGraphNode_AnimDynamics_2) == 0x0079B0, "Member 'UABP_PostProcess_Maelle_Baguette_C::AnimGraphNode_AnimDynamics_2' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Maelle_Baguette_C, AnimGraphNode_AnimDynamics_1) == 0x007ED0, "Member 'UABP_PostProcess_Maelle_Baguette_C::AnimGraphNode_AnimDynamics_1' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Maelle_Baguette_C, AnimGraphNode_AnimDynamics) == 0x0083F0, "Member 'UABP_PostProcess_Maelle_Baguette_C::AnimGraphNode_AnimDynamics' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Maelle_Baguette_C, AnimGraphNode_SpringBone_5) == 0x008910, "Member 'UABP_PostProcess_Maelle_Baguette_C::AnimGraphNode_SpringBone_5' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Maelle_Baguette_C, AnimGraphNode_SpringBone_4) == 0x008A78, "Member 'UABP_PostProcess_Maelle_Baguette_C::AnimGraphNode_SpringBone_4' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Maelle_Baguette_C, AnimGraphNode_SpringBone_3) == 0x008BE0, "Member 'UABP_PostProcess_Maelle_Baguette_C::AnimGraphNode_SpringBone_3' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Maelle_Baguette_C, AnimGraphNode_SpringBone_2) == 0x008D48, "Member 'UABP_PostProcess_Maelle_Baguette_C::AnimGraphNode_SpringBone_2' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Maelle_Baguette_C, AnimGraphNode_SpringBone_1) == 0x008EB0, "Member 'UABP_PostProcess_Maelle_Baguette_C::AnimGraphNode_SpringBone_1' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Maelle_Baguette_C, AnimGraphNode_SpringBone) == 0x009018, "Member 'UABP_PostProcess_Maelle_Baguette_C::AnimGraphNode_SpringBone' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Maelle_Baguette_C, AnimGraphNode_ComponentToLocalSpace) == 0x009180, "Member 'UABP_PostProcess_Maelle_Baguette_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Maelle_Baguette_C, AnimGraphNode_LocalToComponentSpace) == 0x0091A0, "Member 'UABP_PostProcess_Maelle_Baguette_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Maelle_Baguette_C, AnimGraphNode_SaveCachedPose) == 0x0091C0, "Member 'UABP_PostProcess_Maelle_Baguette_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Maelle_Baguette_C, AnimGraphNode_UseCachedPose) == 0x009240, "Member 'UABP_PostProcess_Maelle_Baguette_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Maelle_Baguette_C, AnimGraphNode_BlendListByBool) == 0x009268, "Member 'UABP_PostProcess_Maelle_Baguette_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Maelle_Baguette_C, ShouldDisablePostProcess) == 0x0092B0, "Member 'UABP_PostProcess_Maelle_Baguette_C::ShouldDisablePostProcess' has a wrong offset!");

}

