﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FreeAim

#include "Basic.hpp"

#include "BP_FreeAim_classes.hpp"
#include "BP_FreeAim_parameters.hpp"


namespace SDK
{

// Function BP_FreeAim.BP_FreeAim_C.ComputeRaycastParameters
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                         Start                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector*                         End                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector*                         Direction                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FreeAim_C::ComputeRaycastParameters(struct FVector* Start, struct FVector* End, struct FVector* Direction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FreeAim_C", "ComputeRaycastParameters");

	Params::BP_FreeAim_C_ComputeRaycastParameters Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Start != nullptr)
		*Start = std::move(Parms.Start);

	if (End != nullptr)
		*End = std::move(Parms.End);

	if (Direction != nullptr)
		*Direction = std::move(Parms.Direction);
}


// Function BP_FreeAim.BP_FreeAim_C.DetectAndUpdateCharacters
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FVector&                   Start                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FVector&                   End                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FreeAim_C::DetectAndUpdateCharacters(const struct FVector& Start, const struct FVector& End)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FreeAim_C", "DetectAndUpdateCharacters");

	Params::BP_FreeAim_C_DetectAndUpdateCharacters Parms{};

	Parms.Start = std::move(Start);
	Parms.End = std::move(End);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FreeAim.BP_FreeAim_C.EnterFreeAim
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_FreeAim_C::EnterFreeAim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FreeAim_C", "EnterFreeAim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FreeAim.BP_FreeAim_C.ExecuteUbergraph_BP_FreeAim
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FreeAim_C::ExecuteUbergraph_BP_FreeAim(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FreeAim_C", "ExecuteUbergraph_BP_FreeAim");

	Params::BP_FreeAim_C_ExecuteUbergraph_BP_FreeAim Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FreeAim.BP_FreeAim_C.ExitFreeAim
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_FreeAim_C::ExitFreeAim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FreeAim_C", "ExitFreeAim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FreeAim.BP_FreeAim_C.GetCrosshair
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWBP_CrossHair_C**                Crosshair                                              (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_FreeAim_C::GetCrosshair(class UWBP_CrossHair_C** Crosshair)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FreeAim_C", "GetCrosshair");

	Params::BP_FreeAim_C_GetCrosshair Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Crosshair != nullptr)
		*Crosshair = Parms.Crosshair;
}


// Function BP_FreeAim.BP_FreeAim_C.GetFreeAimCameraActor
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_FreeAimCamera_C*              ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

class ABP_FreeAimCamera_C* UBP_FreeAim_C::GetFreeAimCameraActor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FreeAim_C", "GetFreeAimCameraActor");

	Params::BP_FreeAim_C_GetFreeAimCameraActor Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_FreeAim.BP_FreeAim_C.GetOwnerAsCharacterWorld
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_jRPG_Character_World_C*       ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

class ABP_jRPG_Character_World_C* UBP_FreeAim_C::GetOwnerAsCharacterWorld()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FreeAim_C", "GetOwnerAsCharacterWorld");

	Params::BP_FreeAim_C_GetOwnerAsCharacterWorld Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_FreeAim.BP_FreeAim_C.GetOwnerController
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_jRPG_Controller_World_C*      ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

class ABP_jRPG_Controller_World_C* UBP_FreeAim_C::GetOwnerController()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FreeAim_C", "GetOwnerController");

	Params::BP_FreeAim_C_GetOwnerController Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_FreeAim.BP_FreeAim_C.IsInFreeAim
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_FreeAim_C::IsInFreeAim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FreeAim_C", "IsInFreeAim");

	Params::BP_FreeAim_C_IsInFreeAim Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_FreeAim.BP_FreeAim_C.PerformFreeAimRaycast
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FVector&                   Start                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FVector&                   End                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool*                                   HasHit                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                                  HitDistance                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector*                         HitLocation                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor**                          HitActor                                               (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_FreeAim_C::PerformFreeAimRaycast(const struct FVector& Start, const struct FVector& End, bool* HasHit, float* HitDistance, struct FVector* HitLocation, class AActor** HitActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FreeAim_C", "PerformFreeAimRaycast");

	Params::BP_FreeAim_C_PerformFreeAimRaycast Parms{};

	Parms.Start = std::move(Start);
	Parms.End = std::move(End);

	UObject::ProcessEvent(Func, &Parms);

	if (HasHit != nullptr)
		*HasHit = Parms.HasHit;

	if (HitDistance != nullptr)
		*HitDistance = Parms.HitDistance;

	if (HitLocation != nullptr)
		*HitLocation = std::move(Parms.HitLocation);

	if (HitActor != nullptr)
		*HitActor = Parms.HitActor;
}


// Function BP_FreeAim.BP_FreeAim_C.PerformShoot
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_FreeAim_C::PerformShoot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FreeAim_C", "PerformShoot");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FreeAim.BP_FreeAim_C.PerformShootProjectileFeedback
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_FreeAim_C::PerformShootProjectileFeedback()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FreeAim_C", "PerformShootProjectileFeedback");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FreeAim.BP_FreeAim_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FreeAim_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FreeAim_C", "ReceiveTick");

	Params::BP_FreeAim_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FreeAim.BP_FreeAim_C.ResetFreeAimData
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_FreeAim_C::ResetFreeAimData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FreeAim_C", "ResetFreeAimData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FreeAim.BP_FreeAim_C.SpawnProjectile
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_FreeAim_C::SpawnProjectile()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FreeAim_C", "SpawnProjectile");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FreeAim.BP_FreeAim_C.ToggleCamera
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FreeAim_C::ToggleCamera(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FreeAim_C", "ToggleCamera");

	Params::BP_FreeAim_C_ToggleCamera Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FreeAim.BP_FreeAim_C.ToggleFreeAim
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_FreeAim_C::ToggleFreeAim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FreeAim_C", "ToggleFreeAim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FreeAim.BP_FreeAim_C.UpdateFreeAim
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FreeAim_C::UpdateFreeAim(double DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FreeAim_C", "UpdateFreeAim");

	Params::BP_FreeAim_C_UpdateFreeAim Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FreeAim.BP_FreeAim_C.UpdateFreeAimArmRing
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_FreeAim_C::UpdateFreeAimArmRing()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FreeAim_C", "UpdateFreeAimArmRing");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FreeAim.BP_FreeAim_C.UpdateFreeAimCrosshair
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_FreeAim_C::UpdateFreeAimCrosshair()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FreeAim_C", "UpdateFreeAimCrosshair");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FreeAim.BP_FreeAim_C.UpdateFreeAimFeedback
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_FreeAim_C::UpdateFreeAimFeedback()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FreeAim_C", "UpdateFreeAimFeedback");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FreeAim.BP_FreeAim_C.UpdateMeshSettingsForDetectedCharacter
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// EKinematicBonesUpdateToPhysics          KinematicBonesUpdateType                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                       Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_FreeAim_C::UpdateMeshSettingsForDetectedCharacter(EKinematicBonesUpdateToPhysics KinematicBonesUpdateType, class ACharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FreeAim_C", "UpdateMeshSettingsForDetectedCharacter");

	Params::BP_FreeAim_C_UpdateMeshSettingsForDetectedCharacter Parms{};

	Parms.KinematicBonesUpdateType = KinematicBonesUpdateType;
	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FreeAim.BP_FreeAim_C.UpdateMeshSettingsForDetectedCharacters
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// EKinematicBonesUpdateToPhysics          Kinematic_Bones_Update_Type                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FreeAim_C::UpdateMeshSettingsForDetectedCharacters(EKinematicBonesUpdateToPhysics Kinematic_Bones_Update_Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FreeAim_C", "UpdateMeshSettingsForDetectedCharacters");

	Params::BP_FreeAim_C_UpdateMeshSettingsForDetectedCharacters Parms{};

	Parms.Kinematic_Bones_Update_Type = Kinematic_Bones_Update_Type;

	UObject::ProcessEvent(Func, &Parms);
}

}

