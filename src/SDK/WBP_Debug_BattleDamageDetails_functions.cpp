﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Debug_BattleDamageDetails

#include "Basic.hpp"

#include "WBP_Debug_BattleDamageDetails_classes.hpp"
#include "WBP_Debug_BattleDamageDetails_parameters.hpp"


namespace SDK
{

// Function WBP_Debug_BattleDamageDetails.WBP_Debug_BattleDamageDetails_C.AddLog
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FText&                      InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// class UPanelWidget*                     List                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Debug_BattleDamageDetails_C::AddLog(const class FText& InText, class UPanelWidget* List)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Debug_BattleDamageDetails_C", "AddLog");

	Params::WBP_Debug_BattleDamageDetails_C_AddLog Parms{};

	Parms.InText = std::move(InText);
	Parms.List = List;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Debug_BattleDamageDetails.WBP_Debug_BattleDamageDetails_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Debug_BattleDamageDetails_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Debug_BattleDamageDetails_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Debug_BattleDamageDetails.WBP_Debug_BattleDamageDetails_C.ExecuteUbergraph_WBP_Debug_BattleDamageDetails
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Debug_BattleDamageDetails_C::ExecuteUbergraph_WBP_Debug_BattleDamageDetails(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Debug_BattleDamageDetails_C", "ExecuteUbergraph_WBP_Debug_BattleDamageDetails");

	Params::WBP_Debug_BattleDamageDetails_C_ExecuteUbergraph_WBP_Debug_BattleDamageDetails Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Debug_BattleDamageDetails.WBP_Debug_BattleDamageDetails_C.GetAffinityDisplayName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EElementalAffinity                      Affinity                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UWBP_Debug_BattleDamageDetails_C::GetAffinityDisplayName(EElementalAffinity Affinity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Debug_BattleDamageDetails_C", "GetAffinityDisplayName");

	Params::WBP_Debug_BattleDamageDetails_C_GetAffinityDisplayName Parms{};

	Parms.Affinity = Affinity;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_Debug_BattleDamageDetails.WBP_Debug_BattleDamageDetails_C.GetDamageDetails
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UWBP_Debug_BattleDamageDetails_C::GetDamageDetails()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Debug_BattleDamageDetails_C", "GetDamageDetails");

	Params::WBP_Debug_BattleDamageDetails_C_GetDamageDetails Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_Debug_BattleDamageDetails.WBP_Debug_BattleDamageDetails_C.InitFinalDamages
// (BlueprintCallable, BlueprintEvent)

void UWBP_Debug_BattleDamageDetails_C::InitFinalDamages()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Debug_BattleDamageDetails_C", "InitFinalDamages");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Debug_BattleDamageDetails.WBP_Debug_BattleDamageDetails_C.LoadCriticalRoll
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsCritical                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const class FText&                      Details                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Debug_BattleDamageDetails_C::LoadCriticalRoll(bool IsCritical, const class FText& Details)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Debug_BattleDamageDetails_C", "LoadCriticalRoll");

	Params::WBP_Debug_BattleDamageDetails_C_LoadCriticalRoll Parms{};

	Parms.IsCritical = IsCritical;
	Parms.Details = std::move(Details);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Debug_BattleDamageDetails.WBP_Debug_BattleDamageDetails_C.LogDamageTypeModifier
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FText&                      Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Debug_BattleDamageDetails_C::LogDamageTypeModifier(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Debug_BattleDamageDetails_C", "LogDamageTypeModifier");

	Params::WBP_Debug_BattleDamageDetails_C_LogDamageTypeModifier Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Debug_BattleDamageDetails.WBP_Debug_BattleDamageDetails_C.LogFinalModifier
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FText&                      Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Debug_BattleDamageDetails_C::LogFinalModifier(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Debug_BattleDamageDetails_C", "LogFinalModifier");

	Params::WBP_Debug_BattleDamageDetails_C_LogFinalModifier Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Debug_BattleDamageDetails.WBP_Debug_BattleDamageDetails_C.LogRawModifier
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FText&                      Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Debug_BattleDamageDetails_C::LogRawModifier(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Debug_BattleDamageDetails_C", "LogRawModifier");

	Params::WBP_Debug_BattleDamageDetails_C_LogRawModifier Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Debug_BattleDamageDetails.WBP_Debug_BattleDamageDetails_C.OnAffinitiesSet
// (BlueprintCallable, BlueprintEvent)

void UWBP_Debug_BattleDamageDetails_C::OnAffinitiesSet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Debug_BattleDamageDetails_C", "OnAffinitiesSet");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Debug_BattleDamageDetails.WBP_Debug_BattleDamageDetails_C.OnCalculationCompleted
// (BlueprintCallable, BlueprintEvent)

void UWBP_Debug_BattleDamageDetails_C::OnCalculationCompleted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Debug_BattleDamageDetails_C", "OnCalculationCompleted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Debug_BattleDamageDetails.WBP_Debug_BattleDamageDetails_C.OnCanceled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FText&                      Reason                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Debug_BattleDamageDetails_C::OnCanceled(const class FText& Reason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Debug_BattleDamageDetails_C", "OnCanceled");

	Params::WBP_Debug_BattleDamageDetails_C_OnCanceled Parms{};

	Parms.Reason = std::move(Reason);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Debug_BattleDamageDetails.WBP_Debug_BattleDamageDetails_C.OnExpansionChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UExpandableArea*                  Area                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsExpanded                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Debug_BattleDamageDetails_C::OnExpansionChanged(class UExpandableArea* Area, bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Debug_BattleDamageDetails_C", "OnExpansionChanged");

	Params::WBP_Debug_BattleDamageDetails_C_OnExpansionChanged Parms{};

	Parms.Area = Area;
	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Debug_BattleDamageDetails.WBP_Debug_BattleDamageDetails_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Debug_BattleDamageDetails_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Debug_BattleDamageDetails_C", "PreConstruct");

	Params::WBP_Debug_BattleDamageDetails_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

