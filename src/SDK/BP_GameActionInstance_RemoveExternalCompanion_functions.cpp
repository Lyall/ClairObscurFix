﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GameActionInstance_RemoveExternalCompanion

#include "Basic.hpp"

#include "BP_GameActionInstance_RemoveExternalCompanion_classes.hpp"
#include "BP_GameActionInstance_RemoveExternalCompanion_parameters.hpp"


namespace SDK
{

// Function BP_GameActionInstance_RemoveExternalCompanion.BP_GameActionInstance_RemoveExternalCompanion_C.ExecuteGameAction
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class APlayerController*          Controller                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_GameActionInstance_RemoveExternalCompanion_C::ExecuteGameAction(const class APlayerController* Controller)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameActionInstance_RemoveExternalCompanion_C", "ExecuteGameAction");

	Params::BP_GameActionInstance_RemoveExternalCompanion_C_ExecuteGameAction Parms{};

	Parms.Controller = Controller;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GameActionInstance_RemoveExternalCompanion.BP_GameActionInstance_RemoveExternalCompanion_C.ExecuteUbergraph_BP_GameActionInstance_RemoveExternalCompanion
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_GameActionInstance_RemoveExternalCompanion_C::ExecuteUbergraph_BP_GameActionInstance_RemoveExternalCompanion(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameActionInstance_RemoveExternalCompanion_C", "ExecuteUbergraph_BP_GameActionInstance_RemoveExternalCompanion");

	Params::BP_GameActionInstance_RemoveExternalCompanion_C_ExecuteUbergraph_BP_GameActionInstance_RemoveExternalCompanion Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GameActionInstance_RemoveExternalCompanion.BP_GameActionInstance_RemoveExternalCompanion_C.GetCharacterNames
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class FName>                     ReturnValue                                            (Parm, OutParm, ReturnParm)

TArray<class FName> UBP_GameActionInstance_RemoveExternalCompanion_C::GetCharacterNames()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameActionInstance_RemoveExternalCompanion_C", "GetCharacterNames");

	Params::BP_GameActionInstance_RemoveExternalCompanion_C_GetCharacterNames Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_GameActionInstance_RemoveExternalCompanion.BP_GameActionInstance_RemoveExternalCompanion_C.GetDebugString
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UBP_GameActionInstance_RemoveExternalCompanion_C::GetDebugString() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameActionInstance_RemoveExternalCompanion_C", "GetDebugString");

	Params::BP_GameActionInstance_RemoveExternalCompanion_C_GetDebugString Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

