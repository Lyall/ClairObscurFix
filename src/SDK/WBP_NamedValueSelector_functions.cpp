﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_NamedValueSelector

#include "Basic.hpp"

#include "WBP_NamedValueSelector_classes.hpp"
#include "WBP_NamedValueSelector_parameters.hpp"


namespace SDK
{

// Function WBP_NamedValueSelector.WBP_NamedValueSelector_C.DispatchOnValueChanged
// (Protected, BlueprintCallable, BlueprintEvent)

void UWBP_NamedValueSelector_C::DispatchOnValueChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NamedValueSelector_C", "DispatchOnValueChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_NamedValueSelector.WBP_NamedValueSelector_C.SetAvailableNames
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FText>&                    Options                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_NamedValueSelector_C::SetAvailableNames(TArray<class FText>& Options)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NamedValueSelector_C", "SetAvailableNames");

	Params::WBP_NamedValueSelector_C_SetAvailableNames Parms{};

	Parms.Options = std::move(Options);

	UObject::ProcessEvent(Func, &Parms);

	Options = std::move(Parms.Options);
}


// Function WBP_NamedValueSelector.WBP_NamedValueSelector_C.GetSelectedName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText*                            Name_0                                                 (Parm, OutParm)

void UWBP_NamedValueSelector_C::GetSelectedName(class FText* Name_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NamedValueSelector_C", "GetSelectedName");

	Params::WBP_NamedValueSelector_C_GetSelectedName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Name_0 != nullptr)
		*Name_0 = std::move(Parms.Name_0);
}


// Function WBP_NamedValueSelector.WBP_NamedValueSelector_C.SetSelectedEntryIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    DispatchChange                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_NamedValueSelector_C::SetSelectedEntryIndex(int32 Index_0, bool DispatchChange)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NamedValueSelector_C", "SetSelectedEntryIndex");

	Params::WBP_NamedValueSelector_C_SetSelectedEntryIndex Parms{};

	Parms.Index_0 = Index_0;
	Parms.DispatchChange = DispatchChange;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_NamedValueSelector.WBP_NamedValueSelector_C.GetSelectedEntryIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32*                                  EntryIndex                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_NamedValueSelector_C::GetSelectedEntryIndex(int32* EntryIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NamedValueSelector_C", "GetSelectedEntryIndex");

	Params::WBP_NamedValueSelector_C_GetSelectedEntryIndex Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (EntryIndex != nullptr)
		*EntryIndex = Parms.EntryIndex;
}


// Function WBP_NamedValueSelector.WBP_NamedValueSelector_C.RefreshText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_NamedValueSelector_C::RefreshText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NamedValueSelector_C", "RefreshText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_NamedValueSelector.WBP_NamedValueSelector_C.GetValuesCount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UWBP_NamedValueSelector_C::GetValuesCount()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NamedValueSelector_C", "GetValuesCount");

	Params::WBP_NamedValueSelector_C_GetValuesCount Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_NamedValueSelector.WBP_NamedValueSelector_C.SelectPreviousValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_NamedValueSelector_C::SelectPreviousValue()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NamedValueSelector_C", "SelectPreviousValue");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_NamedValueSelector.WBP_NamedValueSelector_C.SelectNextValue
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_NamedValueSelector_C::SelectNextValue()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NamedValueSelector_C", "SelectNextValue");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_NamedValueSelector.WBP_NamedValueSelector_C.BndEvt__WBP_NamedValueSelector_WBP_CommonVirtualButton_Left_K2Node_ComponentBoundEvent_2_OnFocused__DelegateSignature
// (BlueprintEvent)

void UWBP_NamedValueSelector_C::BndEvt__WBP_NamedValueSelector_WBP_CommonVirtualButton_Left_K2Node_ComponentBoundEvent_2_OnFocused__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NamedValueSelector_C", "BndEvt__WBP_NamedValueSelector_WBP_CommonVirtualButton_Left_K2Node_ComponentBoundEvent_2_OnFocused__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_NamedValueSelector.WBP_NamedValueSelector_C.BndEvt__WBP_NamedValueSelector_WBP_CommonVirtualButton_Right_K2Node_ComponentBoundEvent_3_OnFocused__DelegateSignature
// (BlueprintEvent)

void UWBP_NamedValueSelector_C::BndEvt__WBP_NamedValueSelector_WBP_CommonVirtualButton_Right_K2Node_ComponentBoundEvent_3_OnFocused__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NamedValueSelector_C", "BndEvt__WBP_NamedValueSelector_WBP_CommonVirtualButton_Right_K2Node_ComponentBoundEvent_3_OnFocused__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_NamedValueSelector.WBP_NamedValueSelector_C.BndEvt__WBP_NamedValueSelector_WBP_ArrowButton_Upgrade_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*                Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_NamedValueSelector_C::BndEvt__WBP_NamedValueSelector_WBP_ArrowButton_Upgrade_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NamedValueSelector_C", "BndEvt__WBP_NamedValueSelector_WBP_ArrowButton_Upgrade_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature");

	Params::WBP_NamedValueSelector_C_BndEvt__WBP_NamedValueSelector_WBP_ArrowButton_Upgrade_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_NamedValueSelector.WBP_NamedValueSelector_C.BndEvt__WBP_NamedValueSelector_WBP_ArrowButton_Downgrade_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*                Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_NamedValueSelector_C::BndEvt__WBP_NamedValueSelector_WBP_ArrowButton_Downgrade_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NamedValueSelector_C", "BndEvt__WBP_NamedValueSelector_WBP_ArrowButton_Downgrade_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature");

	Params::WBP_NamedValueSelector_C_BndEvt__WBP_NamedValueSelector_WBP_ArrowButton_Downgrade_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_NamedValueSelector.WBP_NamedValueSelector_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_NamedValueSelector_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NamedValueSelector_C", "PreConstruct");

	Params::WBP_NamedValueSelector_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_NamedValueSelector.WBP_NamedValueSelector_C.SetSelectorIsLocked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    NewLockStatus                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_NamedValueSelector_C::SetSelectorIsLocked(bool NewLockStatus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NamedValueSelector_C", "SetSelectorIsLocked");

	Params::WBP_NamedValueSelector_C_SetSelectorIsLocked Parms{};

	Parms.NewLockStatus = NewLockStatus;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_NamedValueSelector.WBP_NamedValueSelector_C.ExecuteUbergraph_WBP_NamedValueSelector
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_NamedValueSelector_C::ExecuteUbergraph_WBP_NamedValueSelector(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NamedValueSelector_C", "ExecuteUbergraph_WBP_NamedValueSelector");

	Params::WBP_NamedValueSelector_C_ExecuteUbergraph_WBP_NamedValueSelector Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

