﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_GoldAmount

#include "Basic.hpp"

#include "WBP_GoldAmount_classes.hpp"
#include "WBP_GoldAmount_parameters.hpp"


namespace SDK
{

// Function WBP_GoldAmount.WBP_GoldAmount_C.SetAnimationLerp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  AnimationLerp_0                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GoldAmount_C::SetAnimationLerp(double AnimationLerp_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GoldAmount_C", "SetAnimationLerp");

	Params::WBP_GoldAmount_C_SetAnimationLerp Parms{};

	Parms.AnimationLerp_0 = AnimationLerp_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GoldAmount.WBP_GoldAmount_C.UpdateCurrentValue
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   CurrentValue_0                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GoldAmount_C::UpdateCurrentValue(int32 CurrentValue_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GoldAmount_C", "UpdateCurrentValue");

	Params::WBP_GoldAmount_C_UpdateCurrentValue Parms{};

	Parms.CurrentValue_0 = CurrentValue_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GoldAmount.WBP_GoldAmount_C.AnimateValue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NewValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GoldAmount_C::AnimateValue(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GoldAmount_C", "AnimateValue");

	Params::WBP_GoldAmount_C_AnimateValue Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GoldAmount.WBP_GoldAmount_C.SetCurrentValue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GoldAmount_C::SetCurrentValue(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GoldAmount_C", "SetCurrentValue");

	Params::WBP_GoldAmount_C_SetCurrentValue Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GoldAmount.WBP_GoldAmount_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_GoldAmount_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GoldAmount_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_GoldAmount.WBP_GoldAmount_C.ExecuteUbergraph_WBP_GoldAmount
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GoldAmount_C::ExecuteUbergraph_WBP_GoldAmount(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GoldAmount_C", "ExecuteUbergraph_WBP_GoldAmount");

	Params::WBP_GoldAmount_C_ExecuteUbergraph_WBP_GoldAmount Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

