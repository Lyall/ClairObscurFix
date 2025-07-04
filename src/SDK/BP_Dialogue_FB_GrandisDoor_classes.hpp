﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Dialogue_FB_GrandisDoor

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_Dialogue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Dialogue_FB_GrandisDoor.BP_Dialogue_FB_GrandisDoor_C
// 0x0008 (0x0340 - 0x0338)
class ABP_Dialogue_FB_GrandisDoor_C final : public ABP_Dialogue_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Dialogue_FB_GrandisDoor_C;       // 0x0338(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_Dialogue_FB_GrandisDoor(int32 EntryPoint);
	void StartDialog();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Dialogue_FB_GrandisDoor_C">();
	}
	static class ABP_Dialogue_FB_GrandisDoor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Dialogue_FB_GrandisDoor_C>();
	}
};
static_assert(alignof(ABP_Dialogue_FB_GrandisDoor_C) == 0x000008, "Wrong alignment on ABP_Dialogue_FB_GrandisDoor_C");
static_assert(sizeof(ABP_Dialogue_FB_GrandisDoor_C) == 0x000340, "Wrong size on ABP_Dialogue_FB_GrandisDoor_C");
static_assert(offsetof(ABP_Dialogue_FB_GrandisDoor_C, UberGraphFrame_BP_Dialogue_FB_GrandisDoor_C) == 0x000338, "Member 'ABP_Dialogue_FB_GrandisDoor_C::UberGraphFrame_BP_Dialogue_FB_GrandisDoor_C' has a wrong offset!");

}

