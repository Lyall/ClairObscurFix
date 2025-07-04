﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GameActionInstance_AddItemToInventory

#include "Basic.hpp"

#include "BP_GameActionInstance_AddItemToInventory_classes.hpp"
#include "BP_GameActionInstance_AddItemToInventory_parameters.hpp"


namespace SDK
{

// Function BP_GameActionInstance_AddItemToInventory.BP_GameActionInstance_AddItemToInventory_C.ExecuteGameAction
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class APlayerController*          Controller                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_GameActionInstance_AddItemToInventory_C::ExecuteGameAction(const class APlayerController* Controller)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameActionInstance_AddItemToInventory_C", "ExecuteGameAction");

	Params::BP_GameActionInstance_AddItemToInventory_C_ExecuteGameAction Parms{};

	Parms.Controller = Controller;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GameActionInstance_AddItemToInventory.BP_GameActionInstance_AddItemToInventory_C.ExecuteUbergraph_BP_GameActionInstance_AddItemToInventory
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_GameActionInstance_AddItemToInventory_C::ExecuteUbergraph_BP_GameActionInstance_AddItemToInventory(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameActionInstance_AddItemToInventory_C", "ExecuteUbergraph_BP_GameActionInstance_AddItemToInventory");

	Params::BP_GameActionInstance_AddItemToInventory_C_ExecuteUbergraph_BP_GameActionInstance_AddItemToInventory Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GameActionInstance_AddItemToInventory.BP_GameActionInstance_AddItemToInventory_C.GetItemNameAndQuantity
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// const struct FS_ItemOperationData&      ItemOperationData                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class FName*                            Item                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32*                                  Quantity                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_GameActionInstance_AddItemToInventory_C::GetItemNameAndQuantity(const struct FS_ItemOperationData& ItemOperationData, class FName* Item, int32* Quantity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameActionInstance_AddItemToInventory_C", "GetItemNameAndQuantity");

	Params::BP_GameActionInstance_AddItemToInventory_C_GetItemNameAndQuantity Parms{};

	Parms.ItemOperationData = std::move(ItemOperationData);

	UObject::ProcessEvent(Func, &Parms);

	if (Item != nullptr)
		*Item = Parms.Item;

	if (Quantity != nullptr)
		*Quantity = Parms.Quantity;
}


// Function BP_GameActionInstance_AddItemToInventory.BP_GameActionInstance_AddItemToInventory_C.GetDebugString
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UBP_GameActionInstance_AddItemToInventory_C::GetDebugString() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameActionInstance_AddItemToInventory_C", "GetDebugString");

	Params::BP_GameActionInstance_AddItemToInventory_C_GetDebugString Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

