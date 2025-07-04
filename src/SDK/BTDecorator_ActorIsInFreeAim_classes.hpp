﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTDecorator_ActorIsInFreeAim

#include "Basic.hpp"

#include "AIModule_structs.hpp"
#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BTDecorator_ActorIsInFreeAim.BTDecorator_ActorIsInFreeAim_C
// 0x0028 (0x00C8 - 0x00A0)
class UBTDecorator_ActorIsInFreeAim_C final : public UBTDecorator_BlueprintBase
{
public:
	struct FBlackboardKeySelector                 ActorBlackboardKeySelector;                        // 0x00A0(0x0028)(Edit, BlueprintVisible)

public:
	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BTDecorator_ActorIsInFreeAim_C">();
	}
	static class UBTDecorator_ActorIsInFreeAim_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTDecorator_ActorIsInFreeAim_C>();
	}
};
static_assert(alignof(UBTDecorator_ActorIsInFreeAim_C) == 0x000008, "Wrong alignment on UBTDecorator_ActorIsInFreeAim_C");
static_assert(sizeof(UBTDecorator_ActorIsInFreeAim_C) == 0x0000C8, "Wrong size on UBTDecorator_ActorIsInFreeAim_C");
static_assert(offsetof(UBTDecorator_ActorIsInFreeAim_C, ActorBlackboardKeySelector) == 0x0000A0, "Member 'UBTDecorator_ActorIsInFreeAim_C::ActorBlackboardKeySelector' has a wrong offset!");

}

