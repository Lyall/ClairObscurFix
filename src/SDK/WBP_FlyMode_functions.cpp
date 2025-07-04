﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_FlyMode

#include "Basic.hpp"

#include "WBP_FlyMode_classes.hpp"
#include "WBP_FlyMode_parameters.hpp"


namespace SDK
{

// Function WBP_FlyMode.WBP_FlyMode_C.ExecuteUbergraph_WBP_FlyMode
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FlyMode_C::ExecuteUbergraph_WBP_FlyMode(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FlyMode_C", "ExecuteUbergraph_WBP_FlyMode");

	Params::WBP_FlyMode_C_ExecuteUbergraph_WBP_FlyMode Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_FlyMode.WBP_FlyMode_C.SetCurrentFlySpeedValue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FlyMode_C::SetCurrentFlySpeedValue(double Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FlyMode_C", "SetCurrentFlySpeedValue");

	Params::WBP_FlyMode_C_SetCurrentFlySpeedValue Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}

}

