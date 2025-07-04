﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_OverviewHealCartridge

#include "Basic.hpp"

#include "WBP_OverviewHealCartridge_classes.hpp"
#include "WBP_OverviewHealCartridge_parameters.hpp"


namespace SDK
{

// Function WBP_OverviewHealCartridge.WBP_OverviewHealCartridge_C.BndEvt__WBP_OverviewHealCartridge_HealPrompt_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*                Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_OverviewHealCartridge_C::BndEvt__WBP_OverviewHealCartridge_HealPrompt_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OverviewHealCartridge_C", "BndEvt__WBP_OverviewHealCartridge_HealPrompt_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");

	Params::WBP_OverviewHealCartridge_C_BndEvt__WBP_OverviewHealCartridge_HealPrompt_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OverviewHealCartridge.WBP_OverviewHealCartridge_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)

void UWBP_OverviewHealCartridge_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OverviewHealCartridge_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_OverviewHealCartridge.WBP_OverviewHealCartridge_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)

void UWBP_OverviewHealCartridge_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OverviewHealCartridge_C", "BP_OnDeactivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_OverviewHealCartridge.WBP_OverviewHealCartridge_C.ExecuteUbergraph_WBP_OverviewHealCartridge
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OverviewHealCartridge_C::ExecuteUbergraph_WBP_OverviewHealCartridge(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OverviewHealCartridge_C", "ExecuteUbergraph_WBP_OverviewHealCartridge");

	Params::WBP_OverviewHealCartridge_C_ExecuteUbergraph_WBP_OverviewHealCartridge Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OverviewHealCartridge.WBP_OverviewHealCartridge_C.SetPromptActive
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_OverviewHealCartridge_C::SetPromptActive()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OverviewHealCartridge_C", "SetPromptActive");

	UObject::ProcessEvent(Func, nullptr);
}

}

