﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Face_NPCSimple_AnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK
{

// ScriptStruct Face_NPCSimple_AnimBP.Face_NPCSimple_AnimBP_C.AnimBlueprintGeneratedConstantData
// 0x021F (0x0220 - 0x0001)
struct Face_NPCSimple_AnimBP::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNodeFunctionRef                   __StructProperty_19;                               // 0x0008(0x0020)(BlueprintVisible, NoDestructor)
	class FName                                   __NameProperty_20;                                 // 0x0028(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_21;                                 // 0x0030(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;             // 0x0038(0x0080)()
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;                       // 0x00B8(0x0018)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_LayeredBoneBlend;               // 0x00D0(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Slot;                           // 0x0100(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_UseCachedPose;                  // 0x0130(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_RigLogic;                       // 0x0160(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SaveCachedPose;                 // 0x0190(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_CopyPoseFromMesh;               // 0x01C0(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Root;                           // 0x01F0(0x0030)()
};
static_assert(alignof(Face_NPCSimple_AnimBP::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on Face_NPCSimple_AnimBP::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(Face_NPCSimple_AnimBP::FAnimBlueprintGeneratedConstantData) == 0x000220, "Wrong size on Face_NPCSimple_AnimBP::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(Face_NPCSimple_AnimBP::FAnimBlueprintGeneratedConstantData, __StructProperty_19) == 0x000008, "Member 'Face_NPCSimple_AnimBP::FAnimBlueprintGeneratedConstantData::__StructProperty_19' has a wrong offset!");
static_assert(offsetof(Face_NPCSimple_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_20) == 0x000028, "Member 'Face_NPCSimple_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_20' has a wrong offset!");
static_assert(offsetof(Face_NPCSimple_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_21) == 0x000030, "Member 'Face_NPCSimple_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_21' has a wrong offset!");
static_assert(offsetof(Face_NPCSimple_AnimBP::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x000038, "Member 'Face_NPCSimple_AnimBP::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(Face_NPCSimple_AnimBP::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x0000B8, "Member 'Face_NPCSimple_AnimBP::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(Face_NPCSimple_AnimBP::FAnimBlueprintGeneratedConstantData, AnimGraphNode_LayeredBoneBlend) == 0x0000D0, "Member 'Face_NPCSimple_AnimBP::FAnimBlueprintGeneratedConstantData::AnimGraphNode_LayeredBoneBlend' has a wrong offset!");
static_assert(offsetof(Face_NPCSimple_AnimBP::FAnimBlueprintGeneratedConstantData, AnimGraphNode_Slot) == 0x000100, "Member 'Face_NPCSimple_AnimBP::FAnimBlueprintGeneratedConstantData::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(Face_NPCSimple_AnimBP::FAnimBlueprintGeneratedConstantData, AnimGraphNode_UseCachedPose) == 0x000130, "Member 'Face_NPCSimple_AnimBP::FAnimBlueprintGeneratedConstantData::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(Face_NPCSimple_AnimBP::FAnimBlueprintGeneratedConstantData, AnimGraphNode_RigLogic) == 0x000160, "Member 'Face_NPCSimple_AnimBP::FAnimBlueprintGeneratedConstantData::AnimGraphNode_RigLogic' has a wrong offset!");
static_assert(offsetof(Face_NPCSimple_AnimBP::FAnimBlueprintGeneratedConstantData, AnimGraphNode_SaveCachedPose) == 0x000190, "Member 'Face_NPCSimple_AnimBP::FAnimBlueprintGeneratedConstantData::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(Face_NPCSimple_AnimBP::FAnimBlueprintGeneratedConstantData, AnimGraphNode_CopyPoseFromMesh) == 0x0001C0, "Member 'Face_NPCSimple_AnimBP::FAnimBlueprintGeneratedConstantData::AnimGraphNode_CopyPoseFromMesh' has a wrong offset!");
static_assert(offsetof(Face_NPCSimple_AnimBP::FAnimBlueprintGeneratedConstantData, AnimGraphNode_Root) == 0x0001F0, "Member 'Face_NPCSimple_AnimBP::FAnimBlueprintGeneratedConstantData::AnimGraphNode_Root' has a wrong offset!");

}

