﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GroupingPolicy_UniqueMechanic_Stances

#include "Basic.hpp"

#include "BP_GroupingPolicy_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_GroupingPolicy_UniqueMechanic_Stances.BP_GroupingPolicy_UniqueMechanic_Stances_C
// 0x0000 (0x0058 - 0x0058)
class UBP_GroupingPolicy_UniqueMechanic_Stances_C final : public UBP_GroupingPolicy_Base_C
{
public:
	void InitGroupPolicy();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_GroupingPolicy_UniqueMechanic_Stances_C">();
	}
	static class UBP_GroupingPolicy_UniqueMechanic_Stances_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_GroupingPolicy_UniqueMechanic_Stances_C>();
	}
};
static_assert(alignof(UBP_GroupingPolicy_UniqueMechanic_Stances_C) == 0x000008, "Wrong alignment on UBP_GroupingPolicy_UniqueMechanic_Stances_C");
static_assert(sizeof(UBP_GroupingPolicy_UniqueMechanic_Stances_C) == 0x000058, "Wrong size on UBP_GroupingPolicy_UniqueMechanic_Stances_C");

}

