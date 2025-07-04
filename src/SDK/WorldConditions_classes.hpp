﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WorldConditions

#include "Basic.hpp"

#include "WorldConditions_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class WorldConditions.WorldConditionSchema
// 0x0010 (0x0038 - 0x0028)
class UWorldConditionSchema : public UObject
{
public:
	TArray<struct FWorldConditionContextDataDesc> ContextDataDescs;                                  // 0x0028(0x0010)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WorldConditionSchema">();
	}
	static class UWorldConditionSchema* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWorldConditionSchema>();
	}
};
static_assert(alignof(UWorldConditionSchema) == 0x000008, "Wrong alignment on UWorldConditionSchema");
static_assert(sizeof(UWorldConditionSchema) == 0x000038, "Wrong size on UWorldConditionSchema");
static_assert(offsetof(UWorldConditionSchema, ContextDataDescs) == 0x000028, "Member 'UWorldConditionSchema::ContextDataDescs' has a wrong offset!");

}

