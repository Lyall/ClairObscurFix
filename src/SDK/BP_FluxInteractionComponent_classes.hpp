﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FluxInteractionComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "BS_InteractionSource_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_FluxInteractionComponent.BP_FluxInteractionComponent_C
// 0x0098 (0x0138 - 0x00A0)
class UBP_FluxInteractionComponent_C final : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_FluxDataComponent_C*                FluxData;                                          // 0x00A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   OwnerComponentTag;                                 // 0x00B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FBS_InteractionSource>          Sources;                                           // 0x00B8(0x0010)(Edit, BlueprintVisible)
	double                                        OwnerScale;                                        // 0x00C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        OwnerMinSpeed;                                     // 0x00D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        SourceSpeedLimit;                                  // 0x00D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                        CurrentLocation;                                   // 0x00E0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FVector>                        PreviousLocations;                                 // 0x00F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<bool>                                  SplashState;                                       // 0x0100(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          CanInteract;                                       // 0x0110(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_111[0x7];                                      // 0x0111(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        SplashDetection;                                   // 0x0118(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DrawDebug;                                         // 0x0120(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_121[0x7];                                      // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        OwnerComponent;                                    // 0x0128(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CanSpawnSplashes;                                  // 0x0130(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void DrawDebugInteractions();
	void ExecuteUbergraph_BP_FluxInteractionComponent(int32 EntryPoint);
	void OnComponentActivatedEvent(class UActorComponent* Component, bool bReset);
	void OnComponentDeactivatedEvent(class UActorComponent* Component);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ResizeArrays(int32 Size);
	void Set_Sources(TArray<struct FBS_InteractionSource>& Sources_0);
	void UpdateAttachmentsAndSplashes();

	void CalculateInteractionData(double TimeRatio, int32 Iteration, TArray<struct FBS_FluxInteractionData>* Interactions) const;
	void GetLocation(struct FBS_InteractionSource& Source, struct FVector* Location) const;
	void GetOwnerComponent(class USceneComponent** SceneComponent) const;
	bool IsOwnerTouchingFluid() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FluxInteractionComponent_C">();
	}
	static class UBP_FluxInteractionComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_FluxInteractionComponent_C>();
	}
};
static_assert(alignof(UBP_FluxInteractionComponent_C) == 0x000008, "Wrong alignment on UBP_FluxInteractionComponent_C");
static_assert(sizeof(UBP_FluxInteractionComponent_C) == 0x000138, "Wrong size on UBP_FluxInteractionComponent_C");
static_assert(offsetof(UBP_FluxInteractionComponent_C, UberGraphFrame) == 0x0000A0, "Member 'UBP_FluxInteractionComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_FluxInteractionComponent_C, FluxData) == 0x0000A8, "Member 'UBP_FluxInteractionComponent_C::FluxData' has a wrong offset!");
static_assert(offsetof(UBP_FluxInteractionComponent_C, OwnerComponentTag) == 0x0000B0, "Member 'UBP_FluxInteractionComponent_C::OwnerComponentTag' has a wrong offset!");
static_assert(offsetof(UBP_FluxInteractionComponent_C, Sources) == 0x0000B8, "Member 'UBP_FluxInteractionComponent_C::Sources' has a wrong offset!");
static_assert(offsetof(UBP_FluxInteractionComponent_C, OwnerScale) == 0x0000C8, "Member 'UBP_FluxInteractionComponent_C::OwnerScale' has a wrong offset!");
static_assert(offsetof(UBP_FluxInteractionComponent_C, OwnerMinSpeed) == 0x0000D0, "Member 'UBP_FluxInteractionComponent_C::OwnerMinSpeed' has a wrong offset!");
static_assert(offsetof(UBP_FluxInteractionComponent_C, SourceSpeedLimit) == 0x0000D8, "Member 'UBP_FluxInteractionComponent_C::SourceSpeedLimit' has a wrong offset!");
static_assert(offsetof(UBP_FluxInteractionComponent_C, CurrentLocation) == 0x0000E0, "Member 'UBP_FluxInteractionComponent_C::CurrentLocation' has a wrong offset!");
static_assert(offsetof(UBP_FluxInteractionComponent_C, PreviousLocations) == 0x0000F0, "Member 'UBP_FluxInteractionComponent_C::PreviousLocations' has a wrong offset!");
static_assert(offsetof(UBP_FluxInteractionComponent_C, SplashState) == 0x000100, "Member 'UBP_FluxInteractionComponent_C::SplashState' has a wrong offset!");
static_assert(offsetof(UBP_FluxInteractionComponent_C, CanInteract) == 0x000110, "Member 'UBP_FluxInteractionComponent_C::CanInteract' has a wrong offset!");
static_assert(offsetof(UBP_FluxInteractionComponent_C, SplashDetection) == 0x000118, "Member 'UBP_FluxInteractionComponent_C::SplashDetection' has a wrong offset!");
static_assert(offsetof(UBP_FluxInteractionComponent_C, DrawDebug) == 0x000120, "Member 'UBP_FluxInteractionComponent_C::DrawDebug' has a wrong offset!");
static_assert(offsetof(UBP_FluxInteractionComponent_C, OwnerComponent) == 0x000128, "Member 'UBP_FluxInteractionComponent_C::OwnerComponent' has a wrong offset!");
static_assert(offsetof(UBP_FluxInteractionComponent_C, CanSpawnSplashes) == 0x000130, "Member 'UBP_FluxInteractionComponent_C::CanSpawnSplashes' has a wrong offset!");

}

