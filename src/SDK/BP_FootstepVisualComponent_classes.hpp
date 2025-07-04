﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FootstepVisualComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_FootstepVisualComponent.BP_FootstepVisualComponent_C
// 0x0010 (0x00B0 - 0x00A0)
class UBP_FootstepVisualComponent_C final : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_DataAsset_FootstepVisualProfile_C*  FootstepVisualProfile;                             // 0x00A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_FootstepVisualComponent(int32 EntryPoint);
	void FootstepVisualEvent(bool IsRightFoot, const struct FVector& Location, const struct FRotator& Rotation);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FootstepVisualComponent_C">();
	}
	static class UBP_FootstepVisualComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_FootstepVisualComponent_C>();
	}
};
static_assert(alignof(UBP_FootstepVisualComponent_C) == 0x000008, "Wrong alignment on UBP_FootstepVisualComponent_C");
static_assert(sizeof(UBP_FootstepVisualComponent_C) == 0x0000B0, "Wrong size on UBP_FootstepVisualComponent_C");
static_assert(offsetof(UBP_FootstepVisualComponent_C, UberGraphFrame) == 0x0000A0, "Member 'UBP_FootstepVisualComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_FootstepVisualComponent_C, FootstepVisualProfile) == 0x0000A8, "Member 'UBP_FootstepVisualComponent_C::FootstepVisualProfile' has a wrong offset!");

}

