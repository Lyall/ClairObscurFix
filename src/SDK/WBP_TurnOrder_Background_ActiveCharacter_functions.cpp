﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TurnOrder_Background_ActiveCharacter

#include "Basic.hpp"

#include "WBP_TurnOrder_Background_ActiveCharacter_classes.hpp"
#include "WBP_TurnOrder_Background_ActiveCharacter_parameters.hpp"


namespace SDK
{

// Function WBP_TurnOrder_Background_ActiveCharacter.WBP_TurnOrder_Background_ActiveCharacter_C.Appear
// (BlueprintCallable, BlueprintEvent)

void UWBP_TurnOrder_Background_ActiveCharacter_C::Appear()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TurnOrder_Background_ActiveCharacter_C", "Appear");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_TurnOrder_Background_ActiveCharacter.WBP_TurnOrder_Background_ActiveCharacter_C.ExecuteUbergraph_WBP_TurnOrder_Background_ActiveCharacter
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TurnOrder_Background_ActiveCharacter_C::ExecuteUbergraph_WBP_TurnOrder_Background_ActiveCharacter(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TurnOrder_Background_ActiveCharacter_C", "ExecuteUbergraph_WBP_TurnOrder_Background_ActiveCharacter");

	Params::WBP_TurnOrder_Background_ActiveCharacter_C_ExecuteUbergraph_WBP_TurnOrder_Background_ActiveCharacter Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_TurnOrder_Background_ActiveCharacter.WBP_TurnOrder_Background_ActiveCharacter_C.SetBackgroundText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FText&                      InName                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_TurnOrder_Background_ActiveCharacter_C::SetBackgroundText(const class FText& InName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TurnOrder_Background_ActiveCharacter_C", "SetBackgroundText");

	Params::WBP_TurnOrder_Background_ActiveCharacter_C_SetBackgroundText Parms{};

	Parms.InName = std::move(InName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_TurnOrder_Background_ActiveCharacter.WBP_TurnOrder_Background_ActiveCharacter_C.SetCurrentTeam
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ECharacterTeamSelector                  CurrentTeam_0                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TurnOrder_Background_ActiveCharacter_C::SetCurrentTeam(ECharacterTeamSelector CurrentTeam_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TurnOrder_Background_ActiveCharacter_C", "SetCurrentTeam");

	Params::WBP_TurnOrder_Background_ActiveCharacter_C_SetCurrentTeam Parms{};

	Parms.CurrentTeam_0 = CurrentTeam_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_TurnOrder_Background_ActiveCharacter.WBP_TurnOrder_Background_ActiveCharacter_C.SetTeamColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FLinearColor&              TeamColor_0                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TurnOrder_Background_ActiveCharacter_C::SetTeamColor(const struct FLinearColor& TeamColor_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TurnOrder_Background_ActiveCharacter_C", "SetTeamColor");

	Params::WBP_TurnOrder_Background_ActiveCharacter_C_SetTeamColor Parms{};

	Parms.TeamColor_0 = std::move(TeamColor_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_TurnOrder_Background_ActiveCharacter.WBP_TurnOrder_Background_ActiveCharacter_C.SwapToBlue
// (BlueprintCallable, BlueprintEvent)

void UWBP_TurnOrder_Background_ActiveCharacter_C::SwapToBlue()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TurnOrder_Background_ActiveCharacter_C", "SwapToBlue");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_TurnOrder_Background_ActiveCharacter.WBP_TurnOrder_Background_ActiveCharacter_C.SwapToRed
// (BlueprintCallable, BlueprintEvent)

void UWBP_TurnOrder_Background_ActiveCharacter_C::SwapToRed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TurnOrder_Background_ActiveCharacter_C", "SwapToRed");

	UObject::ProcessEvent(Func, nullptr);
}

}

