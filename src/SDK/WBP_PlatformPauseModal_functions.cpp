﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PlatformPauseModal

#include "Basic.hpp"

#include "WBP_PlatformPauseModal_classes.hpp"
#include "WBP_PlatformPauseModal_parameters.hpp"


namespace SDK
{

// Function WBP_PlatformPauseModal.WBP_PlatformPauseModal_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)

void UWBP_PlatformPauseModal_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlatformPauseModal_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlatformPauseModal.WBP_PlatformPauseModal_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)

void UWBP_PlatformPauseModal_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlatformPauseModal_C", "BP_OnDeactivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlatformPauseModal.WBP_PlatformPauseModal_C.ExecuteUbergraph_WBP_PlatformPauseModal
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlatformPauseModal_C::ExecuteUbergraph_WBP_PlatformPauseModal(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlatformPauseModal_C", "ExecuteUbergraph_WBP_PlatformPauseModal");

	Params::WBP_PlatformPauseModal_C_ExecuteUbergraph_WBP_PlatformPauseModal Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

