﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FL_GameActionHelpers

#include "Basic.hpp"

#include "FL_GameActionHelpers_classes.hpp"
#include "FL_GameActionHelpers_parameters.hpp"


namespace SDK
{

// Function FL_GameActionHelpers.FL_GameActionHelpers_C.IsValidGameActionWrapper
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// const struct FGameAction_Wrapper&       GameActionWrapper                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool*                                   IsValid                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFL_GameActionHelpers_C::IsValidGameActionWrapper(const struct FGameAction_Wrapper& GameActionWrapper, class UObject* __WorldContext, bool* IsValid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FL_GameActionHelpers_C", "IsValidGameActionWrapper");

	Params::FL_GameActionHelpers_C_IsValidGameActionWrapper Parms{};

	Parms.GameActionWrapper = std::move(GameActionWrapper);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;
}


// Function FL_GameActionHelpers.FL_GameActionHelpers_C.ValidateGameActionWrapper
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGameAction_Wrapper&       GameActionWrapper                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// TArray<class FText>&                    ErrorMessages                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool&                                   ExploreAssetChildren                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString&                          PropertyPath                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UFL_GameActionHelpers_C::ValidateGameActionWrapper(const struct FGameAction_Wrapper& GameActionWrapper, TArray<class FText>& ErrorMessages, bool& ExploreAssetChildren, class FString& PropertyPath, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FL_GameActionHelpers_C", "ValidateGameActionWrapper");

	Params::FL_GameActionHelpers_C_ValidateGameActionWrapper Parms{};

	Parms.GameActionWrapper = std::move(GameActionWrapper);
	Parms.ErrorMessages = std::move(ErrorMessages);
	Parms.ExploreAssetChildren = ExploreAssetChildren;
	Parms.PropertyPath = std::move(PropertyPath);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	ErrorMessages = std::move(Parms.ErrorMessages);
	ExploreAssetChildren = Parms.ExploreAssetChildren;
	PropertyPath = std::move(Parms.PropertyPath);
}


// Function FL_GameActionHelpers.FL_GameActionHelpers_C.GetGameActionExecutor
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_GameActionExecutorComponent_C**GameActionExecutor                                     (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UFL_GameActionHelpers_C::GetGameActionExecutor(class UObject* __WorldContext, class UBP_GameActionExecutorComponent_C** GameActionExecutor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FL_GameActionHelpers_C", "GetGameActionExecutor");

	Params::FL_GameActionHelpers_C_GetGameActionExecutor Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (GameActionExecutor != nullptr)
		*GameActionExecutor = Parms.GameActionExecutor;
}

}

