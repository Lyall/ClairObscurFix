﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SaveGameObjectUpgrader_V1_To_V2

#include "Basic.hpp"

#include "BP_SaveGameObjectUpgrader_V1_To_V2_classes.hpp"
#include "BP_SaveGameObjectUpgrader_V1_To_V2_parameters.hpp"


namespace SDK
{

// Function BP_SaveGameObjectUpgrader_V1_To_V2.BP_SaveGameObjectUpgrader_V1_To_V2_C.PatchPersistentFlags
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SaveGameObject_V1_C*          From                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_SaveGameObject_V2_C*          To                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_SaveGameObjectUpgrader_V1_To_V2_C::PatchPersistentFlags(class UBP_SaveGameObject_V1_C* From, class UBP_SaveGameObject_V2_C* To)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SaveGameObjectUpgrader_V1_To_V2_C", "PatchPersistentFlags");

	Params::BP_SaveGameObjectUpgrader_V1_To_V2_C_PatchPersistentFlags Parms{};

	Parms.From = From;
	Parms.To = To;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SaveGameObjectUpgrader_V1_To_V2.BP_SaveGameObjectUpgrader_V1_To_V2_C.ProcessUpgradeSaveGameObject
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SaveGameBase_C*               FromSaveGameObject                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_SaveGameBase_C*               ToSaveGameObject                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_SaveGameObjectUpgrader_V1_To_V2_C::ProcessUpgradeSaveGameObject(class UBP_SaveGameBase_C* FromSaveGameObject, class UBP_SaveGameBase_C* ToSaveGameObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SaveGameObjectUpgrader_V1_To_V2_C", "ProcessUpgradeSaveGameObject");

	Params::BP_SaveGameObjectUpgrader_V1_To_V2_C_ProcessUpgradeSaveGameObject Parms{};

	Parms.FromSaveGameObject = FromSaveGameObject;
	Parms.ToSaveGameObject = ToSaveGameObject;

	UObject::ProcessEvent(Func, &Parms);
}

}

