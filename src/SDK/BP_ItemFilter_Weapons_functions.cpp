﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ItemFilter_Weapons

#include "Basic.hpp"

#include "BP_ItemFilter_Weapons_classes.hpp"
#include "BP_ItemFilter_Weapons_parameters.hpp"


namespace SDK
{

// Function BP_ItemFilter_Weapons.BP_ItemFilter_Weapons_C.GetCompatibleItemSorters
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UClass*>*                  ItemSorters                                            (Parm, OutParm)

void UBP_ItemFilter_Weapons_C::GetCompatibleItemSorters(TArray<class UClass*>* ItemSorters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemFilter_Weapons_C", "GetCompatibleItemSorters");

	Params::BP_ItemFilter_Weapons_C_GetCompatibleItemSorters Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ItemSorters != nullptr)
		*ItemSorters = std::move(Parms.ItemSorters);
}


// Function BP_ItemFilter_Weapons.BP_ItemFilter_Weapons_C.GetDisplayName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText*                            DisplayName                                            (Parm, OutParm)

void UBP_ItemFilter_Weapons_C::GetDisplayName(class FText* DisplayName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemFilter_Weapons_C", "GetDisplayName");

	Params::BP_ItemFilter_Weapons_C_GetDisplayName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (DisplayName != nullptr)
		*DisplayName = std::move(Parms.DisplayName);
}


// Function BP_ItemFilter_Weapons.BP_ItemFilter_Weapons_C.GetFilteredTypes
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<E_jRPG_ItemType>*                FilteredType                                           (Parm, OutParm)

void UBP_ItemFilter_Weapons_C::GetFilteredTypes(TArray<E_jRPG_ItemType>* FilteredType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemFilter_Weapons_C", "GetFilteredTypes");

	Params::BP_ItemFilter_Weapons_C_GetFilteredTypes Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (FilteredType != nullptr)
		*FilteredType = std::move(Parms.FilteredType);
}

}

