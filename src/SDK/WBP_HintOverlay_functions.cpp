﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HintOverlay

#include "Basic.hpp"

#include "WBP_HintOverlay_classes.hpp"
#include "WBP_HintOverlay_parameters.hpp"


namespace SDK
{

// Function WBP_HintOverlay.WBP_HintOverlay_C.Appear
// (BlueprintCallable, BlueprintEvent)

void UWBP_HintOverlay_C::Appear()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HintOverlay_C", "Appear");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HintOverlay.WBP_HintOverlay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_HintOverlay_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HintOverlay_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HintOverlay.WBP_HintOverlay_C.Disappear
// (BlueprintCallable, BlueprintEvent)

void UWBP_HintOverlay_C::Disappear()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HintOverlay_C", "Disappear");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HintOverlay.WBP_HintOverlay_C.ExecuteUbergraph_WBP_HintOverlay
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HintOverlay_C::ExecuteUbergraph_WBP_HintOverlay(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HintOverlay_C", "ExecuteUbergraph_WBP_HintOverlay");

	Params::WBP_HintOverlay_C_ExecuteUbergraph_WBP_HintOverlay Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

