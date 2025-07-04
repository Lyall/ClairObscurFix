﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_WP_StreamingSourceComponent

#include "Basic.hpp"

#include "BP_WP_StreamingSourceComponent_classes.hpp"
#include "BP_WP_StreamingSourceComponent_parameters.hpp"


namespace SDK
{

// Function BP_WP_StreamingSourceComponent.BP_WP_StreamingSourceComponent_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_WP_StreamingSourceComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WP_StreamingSourceComponent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WP_StreamingSourceComponent.BP_WP_StreamingSourceComponent_C.ExecuteUbergraph_BP_WP_StreamingSourceComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WP_StreamingSourceComponent_C::ExecuteUbergraph_BP_WP_StreamingSourceComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WP_StreamingSourceComponent_C", "ExecuteUbergraph_BP_WP_StreamingSourceComponent");

	Params::BP_WP_StreamingSourceComponent_C_ExecuteUbergraph_BP_WP_StreamingSourceComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_WP_StreamingSourceComponent.BP_WP_StreamingSourceComponent_C.EnableStreamingSource
// (BlueprintCallable, BlueprintEvent)

void ABP_WP_StreamingSourceComponent_C::EnableStreamingSource()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WP_StreamingSourceComponent_C", "EnableStreamingSource");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WP_StreamingSourceComponent.BP_WP_StreamingSourceComponent_C.DisableStreamingSource
// (BlueprintCallable, BlueprintEvent)

void ABP_WP_StreamingSourceComponent_C::DisableStreamingSource()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WP_StreamingSourceComponent_C", "DisableStreamingSource");

	UObject::ProcessEvent(Func, nullptr);
}

}

