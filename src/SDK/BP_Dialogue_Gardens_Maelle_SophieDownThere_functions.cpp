﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Dialogue_Gardens_Maelle_SophieDownThere

#include "Basic.hpp"

#include "BP_Dialogue_Gardens_Maelle_SophieDownThere_classes.hpp"
#include "BP_Dialogue_Gardens_Maelle_SophieDownThere_parameters.hpp"


namespace SDK
{

// Function BP_Dialogue_Gardens_Maelle_SophieDownThere.BP_Dialogue_Gardens_Maelle_SophieDownThere_C.ExecuteUbergraph_BP_Dialogue_Gardens_Maelle_SophieDownThere
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Dialogue_Gardens_Maelle_SophieDownThere_C::ExecuteUbergraph_BP_Dialogue_Gardens_Maelle_SophieDownThere(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Dialogue_Gardens_Maelle_SophieDownThere_C", "ExecuteUbergraph_BP_Dialogue_Gardens_Maelle_SophieDownThere");

	Params::BP_Dialogue_Gardens_Maelle_SophieDownThere_C_ExecuteUbergraph_BP_Dialogue_Gardens_Maelle_SophieDownThere Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Dialogue_Gardens_Maelle_SophieDownThere.BP_Dialogue_Gardens_Maelle_SophieDownThere_C.StartDialog
// (BlueprintCallable, BlueprintEvent)

void ABP_Dialogue_Gardens_Maelle_SophieDownThere_C::StartDialog()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Dialogue_Gardens_Maelle_SophieDownThere_C", "StartDialog");

	UObject::ProcessEvent(Func, nullptr);
}

}

