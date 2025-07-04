﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BattleBuffInstance_HitCountSinceSincePreviousTurn

#include "Basic.hpp"

#include "BP_BattleBuffInstance_HitCountSinceSincePreviousTurn_classes.hpp"
#include "BP_BattleBuffInstance_HitCountSinceSincePreviousTurn_parameters.hpp"


namespace SDK
{

// Function BP_BattleBuffInstance_HitCountSinceSincePreviousTurn.BP_BattleBuffInstance_HitCountSinceSincePreviousTurn_C.ApplyOnTurnEnd
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_BattleBuffInstance_HitCountSinceSincePreviousTurn_C::ApplyOnTurnEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleBuffInstance_HitCountSinceSincePreviousTurn_C", "ApplyOnTurnEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleBuffInstance_HitCountSinceSincePreviousTurn.BP_BattleBuffInstance_HitCountSinceSincePreviousTurn_C.ExecuteUbergraph_BP_BattleBuffInstance_HitCountSinceSincePreviousTurn
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BattleBuffInstance_HitCountSinceSincePreviousTurn_C::ExecuteUbergraph_BP_BattleBuffInstance_HitCountSinceSincePreviousTurn(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleBuffInstance_HitCountSinceSincePreviousTurn_C", "ExecuteUbergraph_BP_BattleBuffInstance_HitCountSinceSincePreviousTurn");

	Params::BP_BattleBuffInstance_HitCountSinceSincePreviousTurn_C_ExecuteUbergraph_BP_BattleBuffInstance_HitCountSinceSincePreviousTurn Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BattleBuffInstance_HitCountSinceSincePreviousTurn.BP_BattleBuffInstance_HitCountSinceSincePreviousTurn_C.OnCharacterReceivedDamages
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAC_jRPG_CharacterBattleStats_C*  TargetCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAC_jRPG_CharacterBattleStats_C*  SourceCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                                  ReceivedDamages                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_BattleDamages_C*              BattleDamages                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_BattleBuffInstance_HitCountSinceSincePreviousTurn_C::OnCharacterReceivedDamages(class UAC_jRPG_CharacterBattleStats_C* TargetCharacter, class UAC_jRPG_CharacterBattleStats_C* SourceCharacter, double ReceivedDamages, class UBP_BattleDamages_C* BattleDamages)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleBuffInstance_HitCountSinceSincePreviousTurn_C", "OnCharacterReceivedDamages");

	Params::BP_BattleBuffInstance_HitCountSinceSincePreviousTurn_C_OnCharacterReceivedDamages Parms{};

	Parms.TargetCharacter = TargetCharacter;
	Parms.SourceCharacter = SourceCharacter;
	Parms.ReceivedDamages = ReceivedDamages;
	Parms.BattleDamages = BattleDamages;

	UObject::ProcessEvent(Func, &Parms);
}

}

