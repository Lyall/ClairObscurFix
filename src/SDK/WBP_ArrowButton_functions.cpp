﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ArrowButton

#include "Basic.hpp"

#include "WBP_ArrowButton_classes.hpp"
#include "WBP_ArrowButton_parameters.hpp"


namespace SDK
{

// Function WBP_ArrowButton.WBP_ArrowButton_C.BP_OnFocusLost
// (Event, Protected, BlueprintEvent)

void UWBP_ArrowButton_C::BP_OnFocusLost()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ArrowButton_C", "BP_OnFocusLost");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ArrowButton.WBP_ArrowButton_C.BP_OnFocusReceived
// (Event, Protected, BlueprintEvent)

void UWBP_ArrowButton_C::BP_OnFocusReceived()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ArrowButton_C", "BP_OnFocusReceived");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ArrowButton.WBP_ArrowButton_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void UWBP_ArrowButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ArrowButton_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ArrowButton.WBP_ArrowButton_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void UWBP_ArrowButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ArrowButton_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ArrowButton.WBP_ArrowButton_C.ExecuteUbergraph_WBP_ArrowButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ArrowButton_C::ExecuteUbergraph_WBP_ArrowButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ArrowButton_C", "ExecuteUbergraph_WBP_ArrowButton");

	Params::WBP_ArrowButton_C_ExecuteUbergraph_WBP_ArrowButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ArrowButton.WBP_ArrowButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ArrowButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ArrowButton_C", "PreConstruct");

	Params::WBP_ArrowButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ArrowButton.WBP_ArrowButton_C.SetFocused
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Focused                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ArrowButton_C::SetFocused(bool Focused)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ArrowButton_C", "SetFocused");

	Params::WBP_ArrowButton_C_SetFocused Parms{};

	Parms.Focused = Focused;

	UObject::ProcessEvent(Func, &Parms);
}

}

