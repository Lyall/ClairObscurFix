﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BT_FleeAiComponent

#include "Basic.hpp"

#include "BT_FleeAiComponent_classes.hpp"
#include "BT_FleeAiComponent_parameters.hpp"


namespace SDK
{

// Function BT_FleeAiComponent.BT_FleeAiComponent_C.CheckForErrors
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FText>&                    ErrorMessages                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBT_FleeAiComponent_C::CheckForErrors(TArray<class FText>& ErrorMessages)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BT_FleeAiComponent_C", "CheckForErrors");

	Params::BT_FleeAiComponent_C_CheckForErrors Parms{};

	Parms.ErrorMessages = std::move(ErrorMessages);

	UObject::ProcessEvent(Func, &Parms);

	ErrorMessages = std::move(Parms.ErrorMessages);

	return Parms.ReturnValue;
}


// Function BT_FleeAiComponent.BT_FleeAiComponent_C.ExecuteUbergraph_BT_FleeAiComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBT_FleeAiComponent_C::ExecuteUbergraph_BT_FleeAiComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BT_FleeAiComponent_C", "ExecuteUbergraph_BT_FleeAiComponent");

	Params::BT_FleeAiComponent_C_ExecuteUbergraph_BT_FleeAiComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BT_FleeAiComponent.BT_FleeAiComponent_C.FindNextFleePoint
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           PursuerActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_FleePoint_C**                 FleePoint                                              (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBT_FleeAiComponent_C::FindNextFleePoint(class AActor* PursuerActor, class ABP_FleePoint_C** FleePoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BT_FleeAiComponent_C", "FindNextFleePoint");

	Params::BT_FleeAiComponent_C_FindNextFleePoint Parms{};

	Parms.PursuerActor = PursuerActor;

	UObject::ProcessEvent(Func, &Parms);

	if (FleePoint != nullptr)
		*FleePoint = Parms.FleePoint;
}


// Function BT_FleeAiComponent.BT_FleeAiComponent_C.GetCurrentFleePoint
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_FleePoint_C**                 FleePoint                                              (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBT_FleeAiComponent_C::GetCurrentFleePoint(class ABP_FleePoint_C** FleePoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BT_FleeAiComponent_C", "GetCurrentFleePoint");

	Params::BT_FleeAiComponent_C_GetCurrentFleePoint Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (FleePoint != nullptr)
		*FleePoint = Parms.FleePoint;
}


// Function BT_FleeAiComponent.BT_FleeAiComponent_C.Initialize
// (Private, BlueprintCallable, BlueprintEvent)

void UBT_FleeAiComponent_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BT_FleeAiComponent_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BT_FleeAiComponent.BT_FleeAiComponent_C.LoadState
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBT_FleeAiComponent_C::LoadState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BT_FleeAiComponent_C", "LoadState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BT_FleeAiComponent.BT_FleeAiComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBT_FleeAiComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BT_FleeAiComponent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BT_FleeAiComponent.BT_FleeAiComponent_C.ResetState
// (Public, BlueprintCallable, BlueprintEvent)

void UBT_FleeAiComponent_C::ResetState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BT_FleeAiComponent_C", "ResetState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BT_FleeAiComponent.BT_FleeAiComponent_C.ResetToInitialFleePoint
// (Public, BlueprintCallable, BlueprintEvent)

void UBT_FleeAiComponent_C::ResetToInitialFleePoint()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BT_FleeAiComponent_C", "ResetToInitialFleePoint");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BT_FleeAiComponent.BT_FleeAiComponent_C.SaveCurentFleePoint
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBT_FleeAiComponent_C::SaveCurentFleePoint()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BT_FleeAiComponent_C", "SaveCurentFleePoint");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BT_FleeAiComponent.BT_FleeAiComponent_C.SetCurrentFleePoint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_FleePoint_C*                  FleePoint                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBT_FleeAiComponent_C::SetCurrentFleePoint(class ABP_FleePoint_C* FleePoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BT_FleeAiComponent_C", "SetCurrentFleePoint");

	Params::BT_FleeAiComponent_C_SetCurrentFleePoint Parms{};

	Parms.FleePoint = FleePoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

