﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NPCs_Lumiere_Children_Female_1

#include "Basic.hpp"

#include "BP_NPCs_Lumiere_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_NPCs_Lumiere_Children_Female_1.BP_NPCs_Lumiere_Children_Female_1_C
// 0x0008 (0x0300 - 0x02F8)
class ABP_NPCs_Lumiere_Children_Female_1_C final : public ABP_NPCs_Lumiere_C
{
public:
	class UStaticMeshComponent*                   NPCs_Child_Girl_Bow_01;                            // 0x02F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_NPCs_Lumiere_Children_Female_1_C">();
	}
	static class ABP_NPCs_Lumiere_Children_Female_1_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_NPCs_Lumiere_Children_Female_1_C>();
	}
};
static_assert(alignof(ABP_NPCs_Lumiere_Children_Female_1_C) == 0x000008, "Wrong alignment on ABP_NPCs_Lumiere_Children_Female_1_C");
static_assert(sizeof(ABP_NPCs_Lumiere_Children_Female_1_C) == 0x000300, "Wrong size on ABP_NPCs_Lumiere_Children_Female_1_C");
static_assert(offsetof(ABP_NPCs_Lumiere_Children_Female_1_C, NPCs_Child_Girl_Bow_01) == 0x0002F8, "Member 'ABP_NPCs_Lumiere_Children_Female_1_C::NPCs_Child_Girl_Bow_01' has a wrong offset!");

}

