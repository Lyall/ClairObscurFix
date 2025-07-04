﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EasyFog

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_EasyFog.BP_EasyFog_C.UserConstructionScript
// 0x0018 (0x0018 - 0x0000)
struct BP_EasyFog_C_UserConstructionScript final
{
public:
	class UStaticMesh*                            NewLocalVar;                                       // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Source_Material;                                   // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EasyFog_C_UserConstructionScript) == 0x000008, "Wrong alignment on BP_EasyFog_C_UserConstructionScript");
static_assert(sizeof(BP_EasyFog_C_UserConstructionScript) == 0x000018, "Wrong size on BP_EasyFog_C_UserConstructionScript");
static_assert(offsetof(BP_EasyFog_C_UserConstructionScript, NewLocalVar) == 0x000000, "Member 'BP_EasyFog_C_UserConstructionScript::NewLocalVar' has a wrong offset!");
static_assert(offsetof(BP_EasyFog_C_UserConstructionScript, Source_Material) == 0x000008, "Member 'BP_EasyFog_C_UserConstructionScript::Source_Material' has a wrong offset!");
static_assert(offsetof(BP_EasyFog_C_UserConstructionScript, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000010, "Member 'BP_EasyFog_C_UserConstructionScript::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");

// Function BP_EasyFog.BP_EasyFog_C.ExecuteUbergraph_BP_EasyFog
// 0x0004 (0x0004 - 0x0000)
struct BP_EasyFog_C_ExecuteUbergraph_BP_EasyFog final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EasyFog_C_ExecuteUbergraph_BP_EasyFog) == 0x000004, "Wrong alignment on BP_EasyFog_C_ExecuteUbergraph_BP_EasyFog");
static_assert(sizeof(BP_EasyFog_C_ExecuteUbergraph_BP_EasyFog) == 0x000004, "Wrong size on BP_EasyFog_C_ExecuteUbergraph_BP_EasyFog");
static_assert(offsetof(BP_EasyFog_C_ExecuteUbergraph_BP_EasyFog, EntryPoint) == 0x000000, "Member 'BP_EasyFog_C_ExecuteUbergraph_BP_EasyFog::EntryPoint' has a wrong offset!");

}

