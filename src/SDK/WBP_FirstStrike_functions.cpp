﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_FirstStrike

#include "Basic.hpp"

#include "WBP_FirstStrike_classes.hpp"
#include "WBP_FirstStrike_parameters.hpp"


namespace SDK
{

// Function WBP_FirstStrike.WBP_FirstStrike_C.Appear
// (BlueprintCallable, BlueprintEvent)

void UWBP_FirstStrike_C::Appear()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FirstStrike_C", "Appear");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_FirstStrike.WBP_FirstStrike_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)

void UWBP_FirstStrike_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FirstStrike_C", "CustomEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_FirstStrike.WBP_FirstStrike_C.ExecuteUbergraph_WBP_FirstStrike
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FirstStrike_C::ExecuteUbergraph_WBP_FirstStrike(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FirstStrike_C", "ExecuteUbergraph_WBP_FirstStrike");

	Params::WBP_FirstStrike_C_ExecuteUbergraph_WBP_FirstStrike Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_FirstStrike.WBP_FirstStrike_C.FX_SmokeHorizontal2_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraSystemWidget*             FX_SmokeHorizontal2_0                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_FirstStrike_C::FX_SmokeHorizontal2_Event(class UNiagaraSystemWidget* FX_SmokeHorizontal2_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FirstStrike_C", "FX_SmokeHorizontal2_Event");

	Params::WBP_FirstStrike_C_FX_SmokeHorizontal2_Event Parms{};

	Parms.FX_SmokeHorizontal2_0 = FX_SmokeHorizontal2_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_FirstStrike.WBP_FirstStrike_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FirstStrike_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FirstStrike_C", "PreConstruct");

	Params::WBP_FirstStrike_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_FirstStrike.WBP_FirstStrike_C.SequenceEvent__ENTRYPOINTWBP_FirstStrike
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraSystemWidget*             FX_SmokeHorizontal2_0                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_FirstStrike_C::SequenceEvent__ENTRYPOINTWBP_FirstStrike(class UNiagaraSystemWidget* FX_SmokeHorizontal2_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FirstStrike_C", "SequenceEvent__ENTRYPOINTWBP_FirstStrike");

	Params::WBP_FirstStrike_C_SequenceEvent__ENTRYPOINTWBP_FirstStrike Parms{};

	Parms.FX_SmokeHorizontal2_0 = FX_SmokeHorizontal2_0;

	UObject::ProcessEvent(Func, &Parms);
}

}

