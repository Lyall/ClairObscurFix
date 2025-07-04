﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AC_InteractionCheck

#include "Basic.hpp"

#include "AC_InteractionCheck_classes.hpp"
#include "AC_InteractionCheck_parameters.hpp"


namespace SDK
{

// Function AC_InteractionCheck.AC_InteractionCheck_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UAC_InteractionCheck_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AC_InteractionCheck_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AC_InteractionCheck.AC_InteractionCheck_C.ExecuteUbergraph_AC_InteractionCheck
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAC_InteractionCheck_C::ExecuteUbergraph_AC_InteractionCheck(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AC_InteractionCheck_C", "ExecuteUbergraph_AC_InteractionCheck");

	Params::AC_InteractionCheck_C_ExecuteUbergraph_AC_InteractionCheck Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

