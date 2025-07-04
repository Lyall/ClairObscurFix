﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TextualInputActionBinding

#include "Basic.hpp"

#include "WBP_TextualInputActionBinding_classes.hpp"
#include "WBP_TextualInputActionBinding_parameters.hpp"


namespace SDK
{

// Function WBP_TextualInputActionBinding.WBP_TextualInputActionBinding_C.SetRadialProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  InProgress                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TextualInputActionBinding_C::SetRadialProgress(double InProgress)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TextualInputActionBinding_C", "SetRadialProgress");

	Params::WBP_TextualInputActionBinding_C_SetRadialProgress Parms{};

	Parms.InProgress = InProgress;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_TextualInputActionBinding.WBP_TextualInputActionBinding_C.SetInputText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FText&                      Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_TextualInputActionBinding_C::SetInputText(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TextualInputActionBinding_C", "SetInputText");

	Params::WBP_TextualInputActionBinding_C_SetInputText Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_TextualInputActionBinding.WBP_TextualInputActionBinding_C.RefreshText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_TextualInputActionBinding_C::RefreshText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TextualInputActionBinding_C", "RefreshText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_TextualInputActionBinding.WBP_TextualInputActionBinding_C.RefreshWidget
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_TextualInputActionBinding_C::RefreshWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TextualInputActionBinding_C", "RefreshWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_TextualInputActionBinding.WBP_TextualInputActionBinding_C.Feedback_Forbidden
// (BlueprintCallable, BlueprintEvent)

void UWBP_TextualInputActionBinding_C::Feedback_Forbidden()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TextualInputActionBinding_C", "Feedback_Forbidden");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_TextualInputActionBinding.WBP_TextualInputActionBinding_C.SetAllowed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    isAllowed                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TextualInputActionBinding_C::SetAllowed(bool isAllowed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TextualInputActionBinding_C", "SetAllowed");

	Params::WBP_TextualInputActionBinding_C_SetAllowed Parms{};

	Parms.isAllowed = isAllowed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_TextualInputActionBinding.WBP_TextualInputActionBinding_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_TextualInputActionBinding_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TextualInputActionBinding_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_TextualInputActionBinding.WBP_TextualInputActionBinding_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TextualInputActionBinding_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TextualInputActionBinding_C", "PreConstruct");

	Params::WBP_TextualInputActionBinding_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_TextualInputActionBinding.WBP_TextualInputActionBinding_C.ExecuteUbergraph_WBP_TextualInputActionBinding
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TextualInputActionBinding_C::ExecuteUbergraph_WBP_TextualInputActionBinding(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TextualInputActionBinding_C", "ExecuteUbergraph_WBP_TextualInputActionBinding");

	Params::WBP_TextualInputActionBinding_C_ExecuteUbergraph_WBP_TextualInputActionBinding Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

