﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PlayerCameraManager

#include "Basic.hpp"

#include "BP_PlayerCameraManager_classes.hpp"
#include "BP_PlayerCameraManager_parameters.hpp"


namespace SDK
{

// Function BP_PlayerCameraManager.BP_PlayerCameraManager_C.ShouldPlayCameraShake
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_PlayerCameraManager_C::ShouldPlayCameraShake() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCameraManager_C", "ShouldPlayCameraShake");

	Params::BP_PlayerCameraManager_C_ShouldPlayCameraShake Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

