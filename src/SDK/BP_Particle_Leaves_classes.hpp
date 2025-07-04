﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Particle_Leaves

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "P_Leaves_Enum_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Particle_Leaves.BP_Particle_Leaves_C
// 0x0088 (0x0318 - 0x0290)
class ABP_Particle_Leaves_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                    Billboard;                                         // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere;                                            // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      Niagara;                                           // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	EP_Leaves_Enum                                Leaves_Type;                                       // 0x02B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B1[0x7];                                      // 0x02B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     Current_Material;                                  // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Custom_Material__Any_of_your_material_;            // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        Spawn_Radius;                                      // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Leaves_Amount;                                     // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Leaves_size;                                       // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Leaves_Turbulence_Speed_X;                         // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Leaves_Turbulence_Speed_Y;                         // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Leaves_Turbulence_Speed_Z;                         // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Leaves_Turbulence_Strength;                        // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Acceleration;                                      // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Leaves_LifetimeMultiplier;                         // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Speed;                                             // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Particle_Leaves(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Particle_Leaves_C">();
	}
	static class ABP_Particle_Leaves_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Particle_Leaves_C>();
	}
};
static_assert(alignof(ABP_Particle_Leaves_C) == 0x000008, "Wrong alignment on ABP_Particle_Leaves_C");
static_assert(sizeof(ABP_Particle_Leaves_C) == 0x000318, "Wrong size on ABP_Particle_Leaves_C");
static_assert(offsetof(ABP_Particle_Leaves_C, UberGraphFrame) == 0x000290, "Member 'ABP_Particle_Leaves_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Particle_Leaves_C, Billboard) == 0x000298, "Member 'ABP_Particle_Leaves_C::Billboard' has a wrong offset!");
static_assert(offsetof(ABP_Particle_Leaves_C, Sphere) == 0x0002A0, "Member 'ABP_Particle_Leaves_C::Sphere' has a wrong offset!");
static_assert(offsetof(ABP_Particle_Leaves_C, Niagara) == 0x0002A8, "Member 'ABP_Particle_Leaves_C::Niagara' has a wrong offset!");
static_assert(offsetof(ABP_Particle_Leaves_C, Leaves_Type) == 0x0002B0, "Member 'ABP_Particle_Leaves_C::Leaves_Type' has a wrong offset!");
static_assert(offsetof(ABP_Particle_Leaves_C, Current_Material) == 0x0002B8, "Member 'ABP_Particle_Leaves_C::Current_Material' has a wrong offset!");
static_assert(offsetof(ABP_Particle_Leaves_C, Custom_Material__Any_of_your_material_) == 0x0002C0, "Member 'ABP_Particle_Leaves_C::Custom_Material__Any_of_your_material_' has a wrong offset!");
static_assert(offsetof(ABP_Particle_Leaves_C, Spawn_Radius) == 0x0002C8, "Member 'ABP_Particle_Leaves_C::Spawn_Radius' has a wrong offset!");
static_assert(offsetof(ABP_Particle_Leaves_C, Leaves_Amount) == 0x0002D0, "Member 'ABP_Particle_Leaves_C::Leaves_Amount' has a wrong offset!");
static_assert(offsetof(ABP_Particle_Leaves_C, Leaves_size) == 0x0002D8, "Member 'ABP_Particle_Leaves_C::Leaves_size' has a wrong offset!");
static_assert(offsetof(ABP_Particle_Leaves_C, Leaves_Turbulence_Speed_X) == 0x0002E0, "Member 'ABP_Particle_Leaves_C::Leaves_Turbulence_Speed_X' has a wrong offset!");
static_assert(offsetof(ABP_Particle_Leaves_C, Leaves_Turbulence_Speed_Y) == 0x0002E8, "Member 'ABP_Particle_Leaves_C::Leaves_Turbulence_Speed_Y' has a wrong offset!");
static_assert(offsetof(ABP_Particle_Leaves_C, Leaves_Turbulence_Speed_Z) == 0x0002F0, "Member 'ABP_Particle_Leaves_C::Leaves_Turbulence_Speed_Z' has a wrong offset!");
static_assert(offsetof(ABP_Particle_Leaves_C, Leaves_Turbulence_Strength) == 0x0002F8, "Member 'ABP_Particle_Leaves_C::Leaves_Turbulence_Strength' has a wrong offset!");
static_assert(offsetof(ABP_Particle_Leaves_C, Acceleration) == 0x000300, "Member 'ABP_Particle_Leaves_C::Acceleration' has a wrong offset!");
static_assert(offsetof(ABP_Particle_Leaves_C, Leaves_LifetimeMultiplier) == 0x000308, "Member 'ABP_Particle_Leaves_C::Leaves_LifetimeMultiplier' has a wrong offset!");
static_assert(offsetof(ABP_Particle_Leaves_C, Speed) == 0x000310, "Member 'ABP_Particle_Leaves_C::Speed' has a wrong offset!");

}

