﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GameAction_SetExplorationCapacityUnlocked

#include "Basic.hpp"

#include "BP_GameAction_SetExplorationCapacityUnlocked_classes.hpp"
#include "BP_GameAction_SetExplorationCapacityUnlocked_parameters.hpp"


namespace SDK
{

// Function BP_GameAction_SetExplorationCapacityUnlocked.BP_GameAction_SetExplorationCapacityUnlocked_C.GetInstanceClass
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UGameActionInstance>  ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

TSubclassOf<class UGameActionInstance> UBP_GameAction_SetExplorationCapacityUnlocked_C::GetInstanceClass()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameAction_SetExplorationCapacityUnlocked_C", "GetInstanceClass");

	Params::BP_GameAction_SetExplorationCapacityUnlocked_C_GetInstanceClass Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

