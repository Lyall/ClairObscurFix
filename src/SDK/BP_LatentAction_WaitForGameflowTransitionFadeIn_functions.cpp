﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LatentAction_WaitForGameflowTransitionFadeIn

#include "Basic.hpp"

#include "BP_LatentAction_WaitForGameflowTransitionFadeIn_classes.hpp"
#include "BP_LatentAction_WaitForGameflowTransitionFadeIn_parameters.hpp"


namespace SDK
{

// Function BP_LatentAction_WaitForGameflowTransitionFadeIn.BP_LatentAction_WaitForGameflowTransitionFadeIn_C.ExecuteUbergraph_BP_LatentAction_WaitForGameflowTransitionFadeIn
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_LatentAction_WaitForGameflowTransitionFadeIn_C::ExecuteUbergraph_BP_LatentAction_WaitForGameflowTransitionFadeIn(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LatentAction_WaitForGameflowTransitionFadeIn_C", "ExecuteUbergraph_BP_LatentAction_WaitForGameflowTransitionFadeIn");

	Params::BP_LatentAction_WaitForGameflowTransitionFadeIn_C_ExecuteUbergraph_BP_LatentAction_WaitForGameflowTransitionFadeIn Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LatentAction_WaitForGameflowTransitionFadeIn.BP_LatentAction_WaitForGameflowTransitionFadeIn_C.OnFadeInCompleted
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_LatentAction_WaitForGameflowTransitionFadeIn_C::OnFadeInCompleted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LatentAction_WaitForGameflowTransitionFadeIn_C", "OnFadeInCompleted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LatentAction_WaitForGameflowTransitionFadeIn.BP_LatentAction_WaitForGameflowTransitionFadeIn_C.StartOperation
// (Event, Public, BlueprintEvent)

void UBP_LatentAction_WaitForGameflowTransitionFadeIn_C::StartOperation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LatentAction_WaitForGameflowTransitionFadeIn_C", "StartOperation");

	UObject::ProcessEvent(Func, nullptr);
}

}

