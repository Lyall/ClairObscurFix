﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CustomShapeExtruder

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_CustomShapeExtruder.BP_CustomShapeExtruder_C.UserConstructionScript
// 0x0130 (0x0130 - 0x0000)
struct BP_CustomShapeExtruder_C_UserConstructionScript final
{
public:
	struct FVector                                CallFunc_GetComponentBounds_Origin;                // 0x0000(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetComponentBounds_BoxExtent;             // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetComponentBounds_SphereRadius;          // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPackagedBuild_ReturnValue;              // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35[0x3];                                       // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetWorldLocation_SweepHitResult;       // 0x0038(0x00F8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_CustomShapeExtruder_C_UserConstructionScript) == 0x000008, "Wrong alignment on BP_CustomShapeExtruder_C_UserConstructionScript");
static_assert(sizeof(BP_CustomShapeExtruder_C_UserConstructionScript) == 0x000130, "Wrong size on BP_CustomShapeExtruder_C_UserConstructionScript");
static_assert(offsetof(BP_CustomShapeExtruder_C_UserConstructionScript, CallFunc_GetComponentBounds_Origin) == 0x000000, "Member 'BP_CustomShapeExtruder_C_UserConstructionScript::CallFunc_GetComponentBounds_Origin' has a wrong offset!");
static_assert(offsetof(BP_CustomShapeExtruder_C_UserConstructionScript, CallFunc_GetComponentBounds_BoxExtent) == 0x000018, "Member 'BP_CustomShapeExtruder_C_UserConstructionScript::CallFunc_GetComponentBounds_BoxExtent' has a wrong offset!");
static_assert(offsetof(BP_CustomShapeExtruder_C_UserConstructionScript, CallFunc_GetComponentBounds_SphereRadius) == 0x000030, "Member 'BP_CustomShapeExtruder_C_UserConstructionScript::CallFunc_GetComponentBounds_SphereRadius' has a wrong offset!");
static_assert(offsetof(BP_CustomShapeExtruder_C_UserConstructionScript, CallFunc_IsPackagedBuild_ReturnValue) == 0x000034, "Member 'BP_CustomShapeExtruder_C_UserConstructionScript::CallFunc_IsPackagedBuild_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CustomShapeExtruder_C_UserConstructionScript, CallFunc_K2_SetWorldLocation_SweepHitResult) == 0x000038, "Member 'BP_CustomShapeExtruder_C_UserConstructionScript::CallFunc_K2_SetWorldLocation_SweepHitResult' has a wrong offset!");

}

