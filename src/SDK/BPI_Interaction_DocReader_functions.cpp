﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_Interaction_DocReader

#include "Basic.hpp"

#include "BPI_Interaction_DocReader_classes.hpp"
#include "BPI_Interaction_DocReader_parameters.hpp"


namespace SDK
{

// Function BPI_Interaction_DocReader.BPI_Interaction_DocReader_C.AddInteractable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Interactable                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPI_Interaction_DocReader_C::AddInteractable(class AActor* Interactable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPI_Interaction_DocReader_C", "AddInteractable");

	Params::BPI_Interaction_DocReader_C_AddInteractable Parms{};

	Parms.Interactable = Interactable;

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function BPI_Interaction_DocReader.BPI_Interaction_DocReader_C.GetClosestInteractable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                          Interactable                                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPI_Interaction_DocReader_C::GetClosestInteractable(class AActor** Interactable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPI_Interaction_DocReader_C", "GetClosestInteractable");

	Params::BPI_Interaction_DocReader_C_GetClosestInteractable Parms{};

	AsUObject()->ProcessEvent(Func, &Parms);

	if (Interactable != nullptr)
		*Interactable = Parms.Interactable;
}


// Function BPI_Interaction_DocReader.BPI_Interaction_DocReader_C.GetCurrentInputDevice
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EInputDevices::EInputDevices*           InputDevice                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_Interaction_DocReader_C::GetCurrentInputDevice(EInputDevices::EInputDevices* InputDevice)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPI_Interaction_DocReader_C", "GetCurrentInputDevice");

	Params::BPI_Interaction_DocReader_C_GetCurrentInputDevice Parms{};

	AsUObject()->ProcessEvent(Func, &Parms);

	if (InputDevice != nullptr)
		*InputDevice = Parms.InputDevice;
}


// Function BPI_Interaction_DocReader.BPI_Interaction_DocReader_C.GetTest
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_Interaction_DocReader_C::GetTest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPI_Interaction_DocReader_C", "GetTest");

	AsUObject()->ProcessEvent(Func, nullptr);
}


// Function BPI_Interaction_DocReader.BPI_Interaction_DocReader_C.RemoveInteractable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Interactable                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPI_Interaction_DocReader_C::RemoveInteractable(class AActor* Interactable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPI_Interaction_DocReader_C", "RemoveInteractable");

	Params::BPI_Interaction_DocReader_C_RemoveInteractable Parms{};

	Parms.Interactable = Interactable;

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function BPI_Interaction_DocReader.BPI_Interaction_DocReader_C.UpdateInteractables
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_Interaction_DocReader_C::UpdateInteractables()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPI_Interaction_DocReader_C", "UpdateInteractables");

	AsUObject()->ProcessEvent(Func, nullptr);
}

}

