﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_PostProcess_Maelle_Baguette

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// ScriptStruct ABP_PostProcess_Maelle_Baguette.ABP_PostProcess_Maelle_Baguette_C.AnimBlueprintGeneratedConstantData
// 0x0EDF (0x0EE0 - 0x0001)
struct ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_223;                                // 0x0004(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_224;                                // 0x000C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNodeFunctionRef                   __StructProperty_225;                              // 0x0018(0x0020)(BlueprintVisible, NoDestructor)
	class UBlendProfile*                          __BlendProfile_226;                                // 0x0038(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UCurveFloat*                            __CurveFloat_227;                                  // 0x0040(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          __BoolProperty_228;                                // 0x0048(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAlphaBlendOption                             __EnumProperty_229;                                // 0x0049(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EBlendListTransitionType                      __EnumProperty_230;                                // 0x004A(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B[0x5];                                       // 0x004B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 __ArrayProperty_231;                               // 0x0050(0x0010)(BlueprintVisible, EditFixedSize)
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;             // 0x0060(0x0080)()
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;                       // 0x00E0(0x0018)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Root;                           // 0x00F8(0x0030)()
	struct FAnimNodeExposedValueHandler           AnimGraphNode_LinkedInputPose;                     // 0x0128(0x0008)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_LocalToComponentSpace_1;        // 0x0130(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ComponentToLocalSpace_1;        // 0x0160(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_AnimDynamics_9;                 // 0x0190(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_AnimDynamics_8;                 // 0x01C0(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ControlRig;                     // 0x01F0(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_PoseDriver_43;                  // 0x0220(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_PoseDriver_42;                  // 0x0250(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_PoseDriver_41;                  // 0x0280(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_PoseDriver_40;                  // 0x02B0(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_PoseDriver_39;                  // 0x02E0(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_PoseDriver_38;                  // 0x0310(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_PoseDriver_37;                  // 0x0340(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_PoseDriver_36;                  // 0x0370(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_PoseDriver_35;                  // 0x03A0(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_PoseDriver_34;                  // 0x03D0(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_PoseDriver_33;                  // 0x0400(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_PoseDriver_32;                  // 0x0430(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_PoseDriver_31;                  // 0x0460(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_PoseDriver_30;                  // 0x0490(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BoneDrivenController_3;         // 0x04C0(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BoneDrivenController_2;         // 0x04F0(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BoneDrivenController_1;         // 0x0520(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BoneDrivenController;           // 0x0550(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_PoseDriver_29;                  // 0x0580(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_PoseDriver_28;                  // 0x05B0(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_PoseDriver_27;                  // 0x05E0(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_PoseDriver_26;                  // 0x0610(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_PoseDriver_25;                  // 0x0640(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_PoseDriver_24;                  // 0x0670(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_PoseDriver_23;                  // 0x06A0(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_PoseDriver_22;                  // 0x06D0(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_PoseDriver_21;                  // 0x0700(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_PoseDriver_20;                  // 0x0730(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_PoseDriver_19;                  // 0x0760(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_PoseDriver_18;                  // 0x0790(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_PoseDriver_17;                  // 0x07C0(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_PoseDriver_16;                  // 0x07F0(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_PoseDriver_15;                  // 0x0820(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_UseCachedPose_1;                // 0x0850(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_PoseDriver_14;                  // 0x0880(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_PoseDriver_13;                  // 0x08B0(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_PoseDriver_12;                  // 0x08E0(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_PoseDriver_11;                  // 0x0910(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_PoseDriver_10;                  // 0x0940(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_PoseDriver_9;                   // 0x0970(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_PoseDriver_8;                   // 0x09A0(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_PoseDriver_7;                   // 0x09D0(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_PoseDriver_6;                   // 0x0A00(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_PoseDriver_5;                   // 0x0A30(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_PoseDriver_4;                   // 0x0A60(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_PoseDriver_3;                   // 0x0A90(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_PoseDriver_2;                   // 0x0AC0(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_PoseDriver_1;                   // 0x0AF0(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_PoseDriver;                     // 0x0B20(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_AnimDynamics_7;                 // 0x0B50(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_AnimDynamics_6;                 // 0x0B80(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_AnimDynamics_5;                 // 0x0BB0(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_AnimDynamics_4;                 // 0x0BE0(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_AnimDynamics_3;                 // 0x0C10(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_AnimDynamics_2;                 // 0x0C40(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_AnimDynamics_1;                 // 0x0C70(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_AnimDynamics;                   // 0x0CA0(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SpringBone_5;                   // 0x0CD0(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SpringBone_4;                   // 0x0D00(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SpringBone_3;                   // 0x0D30(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SpringBone_2;                   // 0x0D60(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SpringBone_1;                   // 0x0D90(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SpringBone;                     // 0x0DC0(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ComponentToLocalSpace;          // 0x0DF0(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_LocalToComponentSpace;          // 0x0E20(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SaveCachedPose;                 // 0x0E50(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_UseCachedPose;                  // 0x0E80(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool;                // 0x0EB0(0x0030)()
};
static_assert(alignof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData) == 0x000EE0, "Wrong size on ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData, __NameProperty_223) == 0x000004, "Member 'ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData::__NameProperty_223' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData, __NameProperty_224) == 0x00000C, "Member 'ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData::__NameProperty_224' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData, __StructProperty_225) == 0x000018, "Member 'ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData::__StructProperty_225' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData, __BlendProfile_226) == 0x000038, "Member 'ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData::__BlendProfile_226' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData, __CurveFloat_227) == 0x000040, "Member 'ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData::__CurveFloat_227' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData, __BoolProperty_228) == 0x000048, "Member 'ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData::__BoolProperty_228' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData, __EnumProperty_229) == 0x000049, "Member 'ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData::__EnumProperty_229' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData, __EnumProperty_230) == 0x00004A, "Member 'ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData::__EnumProperty_230' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData, __ArrayProperty_231) == 0x000050, "Member 'ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData::__ArrayProperty_231' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x000060, "Member 'ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x0000E0, "Member 'ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData, AnimGraphNode_Root) == 0x0000F8, "Member 'ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData, AnimGraphNode_LinkedInputPose) == 0x000128, "Member 'ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData::AnimGraphNode_LinkedInputPose' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData, AnimGraphNode_LocalToComponentSpace_1) == 0x000130, "Member 'ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData::AnimGraphNode_LocalToComponentSpace_1' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData, AnimGraphNode_ComponentToLocalSpace_1) == 0x000160, "Member 'ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData::AnimGraphNode_ComponentToLocalSpace_1' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData, AnimGraphNode_AnimDynamics_9) == 0x000190, "Member 'ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData::AnimGraphNode_AnimDynamics_9' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData, AnimGraphNode_AnimDynamics_8) == 0x0001C0, "Member 'ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData::AnimGraphNode_AnimDynamics_8' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData, AnimGraphNode_ControlRig) == 0x0001F0, "Member 'ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData::AnimGraphNode_ControlRig' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData, AnimGraphNode_PoseDriver_43) == 0x000220, "Member 'ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData::AnimGraphNode_PoseDriver_43' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData, AnimGraphNode_PoseDriver_42) == 0x000250, "Member 'ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData::AnimGraphNode_PoseDriver_42' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData, AnimGraphNode_PoseDriver_41) == 0x000280, "Member 'ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData::AnimGraphNode_PoseDriver_41' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData, AnimGraphNode_PoseDriver_40) == 0x0002B0, "Member 'ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData::AnimGraphNode_PoseDriver_40' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData, AnimGraphNode_PoseDriver_39) == 0x0002E0, "Member 'ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData::AnimGraphNode_PoseDriver_39' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData, AnimGraphNode_PoseDriver_38) == 0x000310, "Member 'ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData::AnimGraphNode_PoseDriver_38' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData, AnimGraphNode_PoseDriver_37) == 0x000340, "Member 'ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData::AnimGraphNode_PoseDriver_37' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData, AnimGraphNode_PoseDriver_36) == 0x000370, "Member 'ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData::AnimGraphNode_PoseDriver_36' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData, AnimGraphNode_PoseDriver_35) == 0x0003A0, "Member 'ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData::AnimGraphNode_PoseDriver_35' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData, AnimGraphNode_PoseDriver_34) == 0x0003D0, "Member 'ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData::AnimGraphNode_PoseDriver_34' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData, AnimGraphNode_PoseDriver_33) == 0x000400, "Member 'ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData::AnimGraphNode_PoseDriver_33' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData, AnimGraphNode_PoseDriver_32) == 0x000430, "Member 'ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData::AnimGraphNode_PoseDriver_32' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData, AnimGraphNode_PoseDriver_31) == 0x000460, "Member 'ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData::AnimGraphNode_PoseDriver_31' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData, AnimGraphNode_PoseDriver_30) == 0x000490, "Member 'ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData::AnimGraphNode_PoseDriver_30' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData, AnimGraphNode_BoneDrivenController_3) == 0x0004C0, "Member 'ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData::AnimGraphNode_BoneDrivenController_3' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData, AnimGraphNode_BoneDrivenController_2) == 0x0004F0, "Member 'ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData::AnimGraphNode_BoneDrivenController_2' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData, AnimGraphNode_BoneDrivenController_1) == 0x000520, "Member 'ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData::AnimGraphNode_BoneDrivenController_1' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData, AnimGraphNode_BoneDrivenController) == 0x000550, "Member 'ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData::AnimGraphNode_BoneDrivenController' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData, AnimGraphNode_PoseDriver_29) == 0x000580, "Member 'ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData::AnimGraphNode_PoseDriver_29' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData, AnimGraphNode_PoseDriver_28) == 0x0005B0, "Member 'ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData::AnimGraphNode_PoseDriver_28' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData, AnimGraphNode_PoseDriver_27) == 0x0005E0, "Member 'ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData::AnimGraphNode_PoseDriver_27' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData, AnimGraphNode_PoseDriver_26) == 0x000610, "Member 'ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData::AnimGraphNode_PoseDriver_26' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData, AnimGraphNode_PoseDriver_25) == 0x000640, "Member 'ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData::AnimGraphNode_PoseDriver_25' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData, AnimGraphNode_PoseDriver_24) == 0x000670, "Member 'ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData::AnimGraphNode_PoseDriver_24' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData, AnimGraphNode_PoseDriver_23) == 0x0006A0, "Member 'ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData::AnimGraphNode_PoseDriver_23' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData, AnimGraphNode_PoseDriver_22) == 0x0006D0, "Member 'ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData::AnimGraphNode_PoseDriver_22' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData, AnimGraphNode_PoseDriver_21) == 0x000700, "Member 'ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData::AnimGraphNode_PoseDriver_21' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData, AnimGraphNode_PoseDriver_20) == 0x000730, "Member 'ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData::AnimGraphNode_PoseDriver_20' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData, AnimGraphNode_PoseDriver_19) == 0x000760, "Member 'ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData::AnimGraphNode_PoseDriver_19' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData, AnimGraphNode_PoseDriver_18) == 0x000790, "Member 'ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData::AnimGraphNode_PoseDriver_18' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData, AnimGraphNode_PoseDriver_17) == 0x0007C0, "Member 'ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData::AnimGraphNode_PoseDriver_17' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData, AnimGraphNode_PoseDriver_16) == 0x0007F0, "Member 'ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData::AnimGraphNode_PoseDriver_16' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData, AnimGraphNode_PoseDriver_15) == 0x000820, "Member 'ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData::AnimGraphNode_PoseDriver_15' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData, AnimGraphNode_UseCachedPose_1) == 0x000850, "Member 'ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData::AnimGraphNode_UseCachedPose_1' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData, AnimGraphNode_PoseDriver_14) == 0x000880, "Member 'ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData::AnimGraphNode_PoseDriver_14' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData, AnimGraphNode_PoseDriver_13) == 0x0008B0, "Member 'ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData::AnimGraphNode_PoseDriver_13' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData, AnimGraphNode_PoseDriver_12) == 0x0008E0, "Member 'ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData::AnimGraphNode_PoseDriver_12' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData, AnimGraphNode_PoseDriver_11) == 0x000910, "Member 'ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData::AnimGraphNode_PoseDriver_11' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData, AnimGraphNode_PoseDriver_10) == 0x000940, "Member 'ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData::AnimGraphNode_PoseDriver_10' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData, AnimGraphNode_PoseDriver_9) == 0x000970, "Member 'ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData::AnimGraphNode_PoseDriver_9' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData, AnimGraphNode_PoseDriver_8) == 0x0009A0, "Member 'ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData::AnimGraphNode_PoseDriver_8' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData, AnimGraphNode_PoseDriver_7) == 0x0009D0, "Member 'ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData::AnimGraphNode_PoseDriver_7' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData, AnimGraphNode_PoseDriver_6) == 0x000A00, "Member 'ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData::AnimGraphNode_PoseDriver_6' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData, AnimGraphNode_PoseDriver_5) == 0x000A30, "Member 'ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData::AnimGraphNode_PoseDriver_5' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData, AnimGraphNode_PoseDriver_4) == 0x000A60, "Member 'ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData::AnimGraphNode_PoseDriver_4' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData, AnimGraphNode_PoseDriver_3) == 0x000A90, "Member 'ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData::AnimGraphNode_PoseDriver_3' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData, AnimGraphNode_PoseDriver_2) == 0x000AC0, "Member 'ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData::AnimGraphNode_PoseDriver_2' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData, AnimGraphNode_PoseDriver_1) == 0x000AF0, "Member 'ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData::AnimGraphNode_PoseDriver_1' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData, AnimGraphNode_PoseDriver) == 0x000B20, "Member 'ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData::AnimGraphNode_PoseDriver' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData, AnimGraphNode_AnimDynamics_7) == 0x000B50, "Member 'ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData::AnimGraphNode_AnimDynamics_7' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData, AnimGraphNode_AnimDynamics_6) == 0x000B80, "Member 'ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData::AnimGraphNode_AnimDynamics_6' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData, AnimGraphNode_AnimDynamics_5) == 0x000BB0, "Member 'ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData::AnimGraphNode_AnimDynamics_5' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData, AnimGraphNode_AnimDynamics_4) == 0x000BE0, "Member 'ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData::AnimGraphNode_AnimDynamics_4' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData, AnimGraphNode_AnimDynamics_3) == 0x000C10, "Member 'ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData::AnimGraphNode_AnimDynamics_3' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData, AnimGraphNode_AnimDynamics_2) == 0x000C40, "Member 'ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData::AnimGraphNode_AnimDynamics_2' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData, AnimGraphNode_AnimDynamics_1) == 0x000C70, "Member 'ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData::AnimGraphNode_AnimDynamics_1' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData, AnimGraphNode_AnimDynamics) == 0x000CA0, "Member 'ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData::AnimGraphNode_AnimDynamics' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData, AnimGraphNode_SpringBone_5) == 0x000CD0, "Member 'ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData::AnimGraphNode_SpringBone_5' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData, AnimGraphNode_SpringBone_4) == 0x000D00, "Member 'ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData::AnimGraphNode_SpringBone_4' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData, AnimGraphNode_SpringBone_3) == 0x000D30, "Member 'ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData::AnimGraphNode_SpringBone_3' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData, AnimGraphNode_SpringBone_2) == 0x000D60, "Member 'ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData::AnimGraphNode_SpringBone_2' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData, AnimGraphNode_SpringBone_1) == 0x000D90, "Member 'ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData::AnimGraphNode_SpringBone_1' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData, AnimGraphNode_SpringBone) == 0x000DC0, "Member 'ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData::AnimGraphNode_SpringBone' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData, AnimGraphNode_ComponentToLocalSpace) == 0x000DF0, "Member 'ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData, AnimGraphNode_LocalToComponentSpace) == 0x000E20, "Member 'ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData, AnimGraphNode_SaveCachedPose) == 0x000E50, "Member 'ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData, AnimGraphNode_UseCachedPose) == 0x000E80, "Member 'ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData, AnimGraphNode_BlendListByBool) == 0x000EB0, "Member 'ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedConstantData::AnimGraphNode_BlendListByBool' has a wrong offset!");

// ScriptStruct ABP_PostProcess_Maelle_Baguette.ABP_PostProcess_Maelle_Baguette_C.AnimBlueprintGeneratedMutableData
// 0x0001 (0x0002 - 0x0001)
struct ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedMutableData final : public FAnimBlueprintMutableData
{
public:
	bool                                          __BoolProperty;                                    // 0x0001(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedMutableData) == 0x000001, "Wrong alignment on ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedMutableData");
static_assert(sizeof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedMutableData) == 0x000002, "Wrong size on ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedMutableData");
static_assert(offsetof(ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedMutableData, __BoolProperty) == 0x000001, "Member 'ABP_PostProcess_Maelle_Baguette::FAnimBlueprintGeneratedMutableData::__BoolProperty' has a wrong offset!");

}

