﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Dialogue_Lumiere_WalkAct1_FlowerSeller

#include "Basic.hpp"

#include "BP_Dialogue_Lumiere_WalkAct1_FlowerSeller_classes.hpp"
#include "BP_Dialogue_Lumiere_WalkAct1_FlowerSeller_parameters.hpp"


namespace SDK
{

// Function BP_Dialogue_Lumiere_WalkAct1_FlowerSeller.BP_Dialogue_Lumiere_WalkAct1_FlowerSeller_C.ExecuteUbergraph_BP_Dialogue_Lumiere_WalkAct1_FlowerSeller
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Dialogue_Lumiere_WalkAct1_FlowerSeller_C::ExecuteUbergraph_BP_Dialogue_Lumiere_WalkAct1_FlowerSeller(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Dialogue_Lumiere_WalkAct1_FlowerSeller_C", "ExecuteUbergraph_BP_Dialogue_Lumiere_WalkAct1_FlowerSeller");

	Params::BP_Dialogue_Lumiere_WalkAct1_FlowerSeller_C_ExecuteUbergraph_BP_Dialogue_Lumiere_WalkAct1_FlowerSeller Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Dialogue_Lumiere_WalkAct1_FlowerSeller.BP_Dialogue_Lumiere_WalkAct1_FlowerSeller_C.StartDialog
// (BlueprintCallable, BlueprintEvent)

void ABP_Dialogue_Lumiere_WalkAct1_FlowerSeller_C::StartDialog()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Dialogue_Lumiere_WalkAct1_FlowerSeller_C", "StartDialog");

	UObject::ProcessEvent(Func, nullptr);
}

}

