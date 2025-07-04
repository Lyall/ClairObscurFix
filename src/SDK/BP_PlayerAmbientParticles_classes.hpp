﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PlayerAmbientParticles

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PlayerAmbientParticles.BP_PlayerAmbientParticles_C
// 0x0098 (0x0328 - 0x0290)
class ABP_PlayerAmbientParticles_C : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                    Billboard;                                         // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      FX_AmbientParticles;                               // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Box;                                               // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                        Amount;                                            // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Size;                                              // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        TurbulenceStrength;                                // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                TurbulenceSpeed;                                   // 0x02D0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Glow;                                              // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Lifetime;                                          // 0x02F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           MinimumColor;                                      // 0x02F4(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           MaximumColor;                                      // 0x0304(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_314[0x4];                                      // 0x0314(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Speed;                                             // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Overlap;                                           // 0x0320(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_321[0x3];                                      // 0x0321(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         SphereRadius;                                      // 0x0324(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();
	void SetPreviewParticlesParameters();
	void SetParticlesParameters();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_PlayerAmbientParticles(int32 EntryPoint);
	void BndEvt__BP_PlayerAmbientParticles_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BndEvt__BP_PlayerAmbientParticles_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlayerAmbientParticles_C">();
	}
	static class ABP_PlayerAmbientParticles_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PlayerAmbientParticles_C>();
	}
};
static_assert(alignof(ABP_PlayerAmbientParticles_C) == 0x000008, "Wrong alignment on ABP_PlayerAmbientParticles_C");
static_assert(sizeof(ABP_PlayerAmbientParticles_C) == 0x000328, "Wrong size on ABP_PlayerAmbientParticles_C");
static_assert(offsetof(ABP_PlayerAmbientParticles_C, UberGraphFrame) == 0x000290, "Member 'ABP_PlayerAmbientParticles_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_PlayerAmbientParticles_C, Billboard) == 0x000298, "Member 'ABP_PlayerAmbientParticles_C::Billboard' has a wrong offset!");
static_assert(offsetof(ABP_PlayerAmbientParticles_C, FX_AmbientParticles) == 0x0002A0, "Member 'ABP_PlayerAmbientParticles_C::FX_AmbientParticles' has a wrong offset!");
static_assert(offsetof(ABP_PlayerAmbientParticles_C, Box) == 0x0002A8, "Member 'ABP_PlayerAmbientParticles_C::Box' has a wrong offset!");
static_assert(offsetof(ABP_PlayerAmbientParticles_C, DefaultSceneRoot) == 0x0002B0, "Member 'ABP_PlayerAmbientParticles_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_PlayerAmbientParticles_C, Amount) == 0x0002B8, "Member 'ABP_PlayerAmbientParticles_C::Amount' has a wrong offset!");
static_assert(offsetof(ABP_PlayerAmbientParticles_C, Size) == 0x0002C0, "Member 'ABP_PlayerAmbientParticles_C::Size' has a wrong offset!");
static_assert(offsetof(ABP_PlayerAmbientParticles_C, TurbulenceStrength) == 0x0002C8, "Member 'ABP_PlayerAmbientParticles_C::TurbulenceStrength' has a wrong offset!");
static_assert(offsetof(ABP_PlayerAmbientParticles_C, TurbulenceSpeed) == 0x0002D0, "Member 'ABP_PlayerAmbientParticles_C::TurbulenceSpeed' has a wrong offset!");
static_assert(offsetof(ABP_PlayerAmbientParticles_C, Glow) == 0x0002E8, "Member 'ABP_PlayerAmbientParticles_C::Glow' has a wrong offset!");
static_assert(offsetof(ABP_PlayerAmbientParticles_C, Lifetime) == 0x0002F0, "Member 'ABP_PlayerAmbientParticles_C::Lifetime' has a wrong offset!");
static_assert(offsetof(ABP_PlayerAmbientParticles_C, MinimumColor) == 0x0002F4, "Member 'ABP_PlayerAmbientParticles_C::MinimumColor' has a wrong offset!");
static_assert(offsetof(ABP_PlayerAmbientParticles_C, MaximumColor) == 0x000304, "Member 'ABP_PlayerAmbientParticles_C::MaximumColor' has a wrong offset!");
static_assert(offsetof(ABP_PlayerAmbientParticles_C, Speed) == 0x000318, "Member 'ABP_PlayerAmbientParticles_C::Speed' has a wrong offset!");
static_assert(offsetof(ABP_PlayerAmbientParticles_C, Overlap) == 0x000320, "Member 'ABP_PlayerAmbientParticles_C::Overlap' has a wrong offset!");
static_assert(offsetof(ABP_PlayerAmbientParticles_C, SphereRadius) == 0x000324, "Member 'ABP_PlayerAmbientParticles_C::SphereRadius' has a wrong offset!");

}

