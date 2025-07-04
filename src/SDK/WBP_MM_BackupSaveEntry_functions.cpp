﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_MM_BackupSaveEntry

#include "Basic.hpp"

#include "WBP_MM_BackupSaveEntry_classes.hpp"
#include "WBP_MM_BackupSaveEntry_parameters.hpp"


namespace SDK
{

// Function WBP_MM_BackupSaveEntry.WBP_MM_BackupSaveEntry_C.BndEvt__WBP_MM_BackupSaveEntry_WBP_BaseButton_K2Node_ComponentBoundEvent_0_OnButtonBaseFocused__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*                Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_MM_BackupSaveEntry_C::BndEvt__WBP_MM_BackupSaveEntry_WBP_BaseButton_K2Node_ComponentBoundEvent_0_OnButtonBaseFocused__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MM_BackupSaveEntry_C", "BndEvt__WBP_MM_BackupSaveEntry_WBP_BaseButton_K2Node_ComponentBoundEvent_0_OnButtonBaseFocused__DelegateSignature");

	Params::WBP_MM_BackupSaveEntry_C_BndEvt__WBP_MM_BackupSaveEntry_WBP_BaseButton_K2Node_ComponentBoundEvent_0_OnButtonBaseFocused__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MM_BackupSaveEntry.WBP_MM_BackupSaveEntry_C.BndEvt__WBP_MM_BackupSaveEntry_WBP_BaseButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*                Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_MM_BackupSaveEntry_C::BndEvt__WBP_MM_BackupSaveEntry_WBP_BaseButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MM_BackupSaveEntry_C", "BndEvt__WBP_MM_BackupSaveEntry_WBP_BaseButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");

	Params::WBP_MM_BackupSaveEntry_C_BndEvt__WBP_MM_BackupSaveEntry_WBP_BaseButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MM_BackupSaveEntry.WBP_MM_BackupSaveEntry_C.ExecuteUbergraph_WBP_MM_BackupSaveEntry
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MM_BackupSaveEntry_C::ExecuteUbergraph_WBP_MM_BackupSaveEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MM_BackupSaveEntry_C", "ExecuteUbergraph_WBP_MM_BackupSaveEntry");

	Params::WBP_MM_BackupSaveEntry_C_ExecuteUbergraph_WBP_MM_BackupSaveEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MM_BackupSaveEntry.WBP_MM_BackupSaveEntry_C.GetBackUpSave
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString*                          BackUpSave_0                                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_MM_BackupSaveEntry_C::GetBackUpSave(class FString* BackUpSave_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MM_BackupSaveEntry_C", "GetBackUpSave");

	Params::WBP_MM_BackupSaveEntry_C_GetBackUpSave Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (BackUpSave_0 != nullptr)
		*BackUpSave_0 = std::move(Parms.BackUpSave_0);
}


// Function WBP_MM_BackupSaveEntry.WBP_MM_BackupSaveEntry_C.LoadBackupSaveData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    SaveString                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UBP_SaveGameData_C*               SaveData                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_MM_BackupSaveEntry_C::LoadBackupSaveData(const class FString& SaveString, class UBP_SaveGameData_C* SaveData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MM_BackupSaveEntry_C", "LoadBackupSaveData");

	Params::WBP_MM_BackupSaveEntry_C_LoadBackupSaveData Parms{};

	Parms.SaveString = std::move(SaveString);
	Parms.SaveData = SaveData;

	UObject::ProcessEvent(Func, &Parms);
}

}

