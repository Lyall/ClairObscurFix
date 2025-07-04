﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Dialogue_Henri

#include "Basic.hpp"

#include "BP_Dialogue_Henri_classes.hpp"
#include "BP_Dialogue_Henri_parameters.hpp"


namespace SDK
{

// Function BP_Dialogue_Henri.BP_Dialogue_Henri_C.ExecuteUbergraph_BP_Dialogue_Henri
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Dialogue_Henri_C::ExecuteUbergraph_BP_Dialogue_Henri(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Dialogue_Henri_C", "ExecuteUbergraph_BP_Dialogue_Henri");

	Params::BP_Dialogue_Henri_C_ExecuteUbergraph_BP_Dialogue_Henri Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Dialogue_Henri.BP_Dialogue_Henri_C.StartDialog
// (BlueprintCallable, BlueprintEvent)

void ABP_Dialogue_Henri_C::StartDialog()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Dialogue_Henri_C", "StartDialog");

	UObject::ProcessEvent(Func, nullptr);
}

}

