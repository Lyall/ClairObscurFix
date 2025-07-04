﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTService_UpdatePlayerCharacterParameters

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AIModule_structs.hpp"
#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BTService_UpdatePlayerCharacterParameters.BTService_UpdatePlayerCharacterParameters_C
// 0x0058 (0x00F0 - 0x0098)
class UBTService_UpdatePlayerCharacterParameters_C final : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0098(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                 PlayerCharacterActor;                              // 0x00A0(0x0028)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                 PlayerCharacterLocation;                           // 0x00C8(0x0028)(Edit, BlueprintVisible)

public:
	void ExecuteUbergraph_BTService_UpdatePlayerCharacterParameters(int32 EntryPoint);
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BTService_UpdatePlayerCharacterParameters_C">();
	}
	static class UBTService_UpdatePlayerCharacterParameters_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTService_UpdatePlayerCharacterParameters_C>();
	}
};
static_assert(alignof(UBTService_UpdatePlayerCharacterParameters_C) == 0x000008, "Wrong alignment on UBTService_UpdatePlayerCharacterParameters_C");
static_assert(sizeof(UBTService_UpdatePlayerCharacterParameters_C) == 0x0000F0, "Wrong size on UBTService_UpdatePlayerCharacterParameters_C");
static_assert(offsetof(UBTService_UpdatePlayerCharacterParameters_C, UberGraphFrame) == 0x000098, "Member 'UBTService_UpdatePlayerCharacterParameters_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBTService_UpdatePlayerCharacterParameters_C, PlayerCharacterActor) == 0x0000A0, "Member 'UBTService_UpdatePlayerCharacterParameters_C::PlayerCharacterActor' has a wrong offset!");
static_assert(offsetof(UBTService_UpdatePlayerCharacterParameters_C, PlayerCharacterLocation) == 0x0000C8, "Member 'UBTService_UpdatePlayerCharacterParameters_C::PlayerCharacterLocation' has a wrong offset!");

}

