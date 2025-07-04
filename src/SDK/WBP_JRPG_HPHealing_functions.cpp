﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_JRPG_HPHealing

#include "Basic.hpp"

#include "WBP_JRPG_HPHealing_classes.hpp"
#include "WBP_JRPG_HPHealing_parameters.hpp"


namespace SDK
{

// Function WBP_JRPG_HPHealing.WBP_JRPG_HPHealing_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_JRPG_HPHealing_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_JRPG_HPHealing_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_JRPG_HPHealing.WBP_JRPG_HPHealing_C.ExecuteUbergraph_WBP_JRPG_HPHealing
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_JRPG_HPHealing_C::ExecuteUbergraph_WBP_JRPG_HPHealing(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_JRPG_HPHealing_C", "ExecuteUbergraph_WBP_JRPG_HPHealing");

	Params::WBP_JRPG_HPHealing_C_ExecuteUbergraph_WBP_JRPG_HPHealing Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_JRPG_HPHealing.WBP_JRPG_HPHealing_C.GetHealText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UWBP_JRPG_HPHealing_C::GetHealText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_JRPG_HPHealing_C", "GetHealText");

	Params::WBP_JRPG_HPHealing_C_GetHealText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_JRPG_HPHealing.WBP_JRPG_HPHealing_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_JRPG_HPHealing_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_JRPG_HPHealing_C", "PreConstruct");

	Params::WBP_JRPG_HPHealing_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_JRPG_HPHealing.WBP_JRPG_HPHealing_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_JRPG_HPHealing_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_JRPG_HPHealing_C", "Tick");

	Params::WBP_JRPG_HPHealing_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

