﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FL_RelationshipHelpers

#include "Basic.hpp"

#include "BP_FL_RelationshipHelpers_classes.hpp"
#include "BP_FL_RelationshipHelpers_parameters.hpp"


namespace SDK
{

// Function BP_FL_RelationshipHelpers.BP_FL_RelationshipHelpers_C.SetCurrentRelationshipLevel
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_CharacterList                         Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Level                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_FL_RelationshipHelpers_C::SetCurrentRelationshipLevel(E_CharacterList Character, int32 Level, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_FL_RelationshipHelpers_C", "SetCurrentRelationshipLevel");

	Params::BP_FL_RelationshipHelpers_C_SetCurrentRelationshipLevel Parms{};

	Parms.Character = Character;
	Parms.Level = Level;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BP_FL_RelationshipHelpers.BP_FL_RelationshipHelpers_C.GetCurrentRelationshipLevel
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// E_CharacterList                         Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32*                                  Level                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FL_RelationshipHelpers_C::GetCurrentRelationshipLevel(E_CharacterList Character, class UObject* __WorldContext, int32* Level)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_FL_RelationshipHelpers_C", "GetCurrentRelationshipLevel");

	Params::BP_FL_RelationshipHelpers_C_GetCurrentRelationshipLevel Parms{};

	Parms.Character = Character;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Level != nullptr)
		*Level = Parms.Level;
}


// Function BP_FL_RelationshipHelpers.BP_FL_RelationshipHelpers_C.GetRelationshipSystem
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_RelationshipSystem_C**        RelationshipSystem                                     (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_FL_RelationshipHelpers_C::GetRelationshipSystem(class UObject* __WorldContext, class UBP_RelationshipSystem_C** RelationshipSystem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_FL_RelationshipHelpers_C", "GetRelationshipSystem");

	Params::BP_FL_RelationshipHelpers_C_GetRelationshipSystem Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (RelationshipSystem != nullptr)
		*RelationshipSystem = Parms.RelationshipSystem;
}

}

