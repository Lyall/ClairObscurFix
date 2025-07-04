﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PerfectionMechanicComponent

#include "Basic.hpp"

#include "BP_PerfectionMechanicComponent_classes.hpp"
#include "BP_PerfectionMechanicComponent_parameters.hpp"


namespace SDK
{

// Function BP_PerfectionMechanicComponent.BP_PerfectionMechanicComponent_C.AddPerfection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   PerfectionToAdd_0                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EPerfectionReason                       PerfectionChangeReason                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PerfectionMechanicComponent_C::AddPerfection(int32 PerfectionToAdd_0, EPerfectionReason PerfectionChangeReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PerfectionMechanicComponent_C", "AddPerfection");

	Params::BP_PerfectionMechanicComponent_C_AddPerfection Parms{};

	Parms.PerfectionToAdd_0 = PerfectionToAdd_0;
	Parms.PerfectionChangeReason = PerfectionChangeReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PerfectionMechanicComponent.BP_PerfectionMechanicComponent_C.ApplyPerfectionManagerBuff
// (BlueprintCallable, BlueprintEvent)

void UBP_PerfectionMechanicComponent_C::ApplyPerfectionManagerBuff()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PerfectionMechanicComponent_C", "ApplyPerfectionManagerBuff");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PerfectionMechanicComponent.BP_PerfectionMechanicComponent_C.CreatePortraitWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget**                     CreatedUserWidget                                      (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32*                                  SlotIndex                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PerfectionMechanicComponent_C::CreatePortraitWidget(class UUserWidget** CreatedUserWidget, int32* SlotIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PerfectionMechanicComponent_C", "CreatePortraitWidget");

	Params::BP_PerfectionMechanicComponent_C_CreatePortraitWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CreatedUserWidget != nullptr)
		*CreatedUserWidget = Parms.CreatedUserWidget;

	if (SlotIndex != nullptr)
		*SlotIndex = Parms.SlotIndex;
}


// Function BP_PerfectionMechanicComponent.BP_PerfectionMechanicComponent_C.ExecuteUbergraph_BP_PerfectionMechanicComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PerfectionMechanicComponent_C::ExecuteUbergraph_BP_PerfectionMechanicComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PerfectionMechanicComponent_C", "ExecuteUbergraph_BP_PerfectionMechanicComponent");

	Params::BP_PerfectionMechanicComponent_C_ExecuteUbergraph_BP_PerfectionMechanicComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PerfectionMechanicComponent.BP_PerfectionMechanicComponent_C.Get Rank from Perfection
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   PerfectionInput                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// E_Perfection_Ranks*                     Value                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PerfectionMechanicComponent_C::Get_Rank_from_Perfection(int32 PerfectionInput, E_Perfection_Ranks* Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PerfectionMechanicComponent_C", "Get Rank from Perfection");

	Params::BP_PerfectionMechanicComponent_C_Get_Rank_from_Perfection Parms{};

	Parms.PerfectionInput = PerfectionInput;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;
}


// Function BP_PerfectionMechanicComponent.BP_PerfectionMechanicComponent_C.GetMaximumPerfectionForRank
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// const E_Perfection_Ranks&               Rank                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UBP_PerfectionMechanicComponent_C::GetMaximumPerfectionForRank(const E_Perfection_Ranks& Rank)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PerfectionMechanicComponent_C", "GetMaximumPerfectionForRank");

	Params::BP_PerfectionMechanicComponent_C_GetMaximumPerfectionForRank Parms{};

	Parms.Rank = Rank;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_PerfectionMechanicComponent.BP_PerfectionMechanicComponent_C.GetMinimumPerfectionForRank
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// const E_Perfection_Ranks&               Rank                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UBP_PerfectionMechanicComponent_C::GetMinimumPerfectionForRank(const E_Perfection_Ranks& Rank)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PerfectionMechanicComponent_C", "GetMinimumPerfectionForRank");

	Params::BP_PerfectionMechanicComponent_C_GetMinimumPerfectionForRank Parms{};

	Parms.Rank = Rank;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_PerfectionMechanicComponent.BP_PerfectionMechanicComponent_C.GetNextRank
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// const E_Perfection_Ranks&               Rank                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool*                                   IsValid                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// E_Perfection_Ranks*                     Output                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PerfectionMechanicComponent_C::GetNextRank(const E_Perfection_Ranks& Rank, bool* IsValid, E_Perfection_Ranks* Output)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PerfectionMechanicComponent_C", "GetNextRank");

	Params::BP_PerfectionMechanicComponent_C_GetNextRank Parms{};

	Parms.Rank = Rank;

	UObject::ProcessEvent(Func, &Parms);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

	if (Output != nullptr)
		*Output = Parms.Output;
}


// Function BP_PerfectionMechanicComponent.BP_PerfectionMechanicComponent_C.HideUI
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PerfectionMechanicComponent_C::HideUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PerfectionMechanicComponent_C", "HideUI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PerfectionMechanicComponent.BP_PerfectionMechanicComponent_C.IncreaseOrDecreaseRank
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NbRanks                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EPerfectionReason                       Reason                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// E_Perfection_Ranks*                     NewRank                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PerfectionMechanicComponent_C::IncreaseOrDecreaseRank(int32 NbRanks, EPerfectionReason Reason, E_Perfection_Ranks* NewRank)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PerfectionMechanicComponent_C", "IncreaseOrDecreaseRank");

	Params::BP_PerfectionMechanicComponent_C_IncreaseOrDecreaseRank Parms{};

	Parms.NbRanks = NbRanks;
	Parms.Reason = Reason;

	UObject::ProcessEvent(Func, &Parms);

	if (NewRank != nullptr)
		*NewRank = Parms.NewRank;
}


// Function BP_PerfectionMechanicComponent.BP_PerfectionMechanicComponent_C.LoseOneRankAtATimeOnHit
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PerfectionMechanicComponent_C::LoseOneRankAtATimeOnHit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PerfectionMechanicComponent_C", "LoseOneRankAtATimeOnHit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PerfectionMechanicComponent.BP_PerfectionMechanicComponent_C.On DodgeSuccessful
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_jRPG_Character_Battle_Base_C* Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_jRPG_Character_Battle_Base_C* Enemy                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_PerfectionMechanicComponent_C::On_DodgeSuccessful(class ABP_jRPG_Character_Battle_Base_C* Character, class ABP_jRPG_Character_Battle_Base_C* Enemy)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PerfectionMechanicComponent_C", "On DodgeSuccessful");

	Params::BP_PerfectionMechanicComponent_C_On_DodgeSuccessful Parms{};

	Parms.Character = Character;
	Parms.Enemy = Enemy;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PerfectionMechanicComponent.BP_PerfectionMechanicComponent_C.OnDeath
// (BlueprintCallable, BlueprintEvent)

void UBP_PerfectionMechanicComponent_C::OnDeath()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PerfectionMechanicComponent_C", "OnDeath");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PerfectionMechanicComponent.BP_PerfectionMechanicComponent_C.OnParrySuccessful
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_jRPG_Character_Battle_Base_C* Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_jRPG_Character_Battle_Base_C* Enemy                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_PerfectionMechanicComponent_C::OnParrySuccessful(class ABP_jRPG_Character_Battle_Base_C* Character, class ABP_jRPG_Character_Battle_Base_C* Enemy)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PerfectionMechanicComponent_C", "OnParrySuccessful");

	Params::BP_PerfectionMechanicComponent_C_OnParrySuccessful Parms{};

	Parms.Character = Character;
	Parms.Enemy = Enemy;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PerfectionMechanicComponent.BP_PerfectionMechanicComponent_C.OnRankDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// E_Perfection_Ranks                      NewRank                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PerfectionMechanicComponent_C::OnRankDown(E_Perfection_Ranks NewRank)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PerfectionMechanicComponent_C", "OnRankDown");

	Params::BP_PerfectionMechanicComponent_C_OnRankDown Parms{};

	Parms.NewRank = NewRank;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PerfectionMechanicComponent.BP_PerfectionMechanicComponent_C.OnRankUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// E_Perfection_Ranks                      NewRank                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PerfectionMechanicComponent_C::OnRankUp(E_Perfection_Ranks NewRank)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PerfectionMechanicComponent_C", "OnRankUp");

	Params::BP_PerfectionMechanicComponent_C_OnRankUp Parms{};

	Parms.NewRank = NewRank;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PerfectionMechanicComponent.BP_PerfectionMechanicComponent_C.OnTurnEnd
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PerfectionMechanicComponent_C::OnTurnEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PerfectionMechanicComponent_C", "OnTurnEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PerfectionMechanicComponent.BP_PerfectionMechanicComponent_C.OnTurnStart
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PerfectionMechanicComponent_C::OnTurnStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PerfectionMechanicComponent_C", "OnTurnStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PerfectionMechanicComponent.BP_PerfectionMechanicComponent_C.OverridePerfectionGainReasons
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<EPerfectionReason>&              NewGainPerfectionReasons                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_PerfectionMechanicComponent_C::OverridePerfectionGainReasons(TArray<EPerfectionReason>& NewGainPerfectionReasons)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PerfectionMechanicComponent_C", "OverridePerfectionGainReasons");

	Params::BP_PerfectionMechanicComponent_C_OverridePerfectionGainReasons Parms{};

	Parms.NewGainPerfectionReasons = std::move(NewGainPerfectionReasons);

	UObject::ProcessEvent(Func, &Parms);

	NewGainPerfectionReasons = std::move(Parms.NewGainPerfectionReasons);
}


// Function BP_PerfectionMechanicComponent.BP_PerfectionMechanicComponent_C.OverridePerfectionLossReasons
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<EPerfectionReason>&              NewReasons                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_PerfectionMechanicComponent_C::OverridePerfectionLossReasons(TArray<EPerfectionReason>& NewReasons)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PerfectionMechanicComponent_C", "OverridePerfectionLossReasons");

	Params::BP_PerfectionMechanicComponent_C_OverridePerfectionLossReasons Parms{};

	Parms.NewReasons = std::move(NewReasons);

	UObject::ProcessEvent(Func, &Parms);

	NewReasons = std::move(Parms.NewReasons);
}


// Function BP_PerfectionMechanicComponent.BP_PerfectionMechanicComponent_C.OverridePerfectionMapping
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const TMap<E_Perfection_Ranks, int32>&  NewMap                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_PerfectionMechanicComponent_C::OverridePerfectionMapping(const TMap<E_Perfection_Ranks, int32>& NewMap)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PerfectionMechanicComponent_C", "OverridePerfectionMapping");

	Params::BP_PerfectionMechanicComponent_C_OverridePerfectionMapping Parms{};

	Parms.NewMap = std::move(NewMap);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PerfectionMechanicComponent.BP_PerfectionMechanicComponent_C.OverridePerfectionToAdd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPerfectionReason                       ValueToChange                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   NewPerfection                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PerfectionMechanicComponent_C::OverridePerfectionToAdd(EPerfectionReason ValueToChange, int32 NewPerfection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PerfectionMechanicComponent_C", "OverridePerfectionToAdd");

	Params::BP_PerfectionMechanicComponent_C_OverridePerfectionToAdd Parms{};

	Parms.ValueToChange = ValueToChange;
	Parms.NewPerfection = NewPerfection;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PerfectionMechanicComponent.BP_PerfectionMechanicComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_PerfectionMechanicComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PerfectionMechanicComponent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PerfectionMechanicComponent.BP_PerfectionMechanicComponent_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PerfectionMechanicComponent_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PerfectionMechanicComponent_C", "ReceiveEndPlay");

	Params::BP_PerfectionMechanicComponent_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PerfectionMechanicComponent.BP_PerfectionMechanicComponent_C.RemoveAllPerfection
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PerfectionMechanicComponent_C::RemoveAllPerfection()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PerfectionMechanicComponent_C", "RemoveAllPerfection");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PerfectionMechanicComponent.BP_PerfectionMechanicComponent_C.RemoveXPerfection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   PerfectionToRemove                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EPerfectionReason                       PerfectionReason                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PerfectionMechanicComponent_C::RemoveXPerfection(int32 PerfectionToRemove, EPerfectionReason PerfectionReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PerfectionMechanicComponent_C", "RemoveXPerfection");

	Params::BP_PerfectionMechanicComponent_C_RemoveXPerfection Parms{};

	Parms.PerfectionToRemove = PerfectionToRemove;
	Parms.PerfectionReason = PerfectionReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PerfectionMechanicComponent.BP_PerfectionMechanicComponent_C.ResetMechaState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPerfectionReason                       Reason                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PerfectionMechanicComponent_C::ResetMechaState(EPerfectionReason Reason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PerfectionMechanicComponent_C", "ResetMechaState");

	Params::BP_PerfectionMechanicComponent_C_ResetMechaState Parms{};

	Parms.Reason = Reason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PerfectionMechanicComponent.BP_PerfectionMechanicComponent_C.Set Perfection Clamped
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NewPerfection                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// E_PerfectionUpdateType                  UpdatePerfectionType                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EPerfectionReason                       PerfectionChangeReason                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PerfectionMechanicComponent_C::Set_Perfection_Clamped(int32 NewPerfection, E_PerfectionUpdateType UpdatePerfectionType, EPerfectionReason PerfectionChangeReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PerfectionMechanicComponent_C", "Set Perfection Clamped");

	Params::BP_PerfectionMechanicComponent_C_Set_Perfection_Clamped Parms{};

	Parms.NewPerfection = NewPerfection;
	Parms.UpdatePerfectionType = UpdatePerfectionType;
	Parms.PerfectionChangeReason = PerfectionChangeReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PerfectionMechanicComponent.BP_PerfectionMechanicComponent_C.SetSpecificRank
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_Perfection_Ranks                      Rank                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EPerfectionReason                       Reason                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PerfectionMechanicComponent_C::SetSpecificRank(E_Perfection_Ranks Rank, EPerfectionReason Reason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PerfectionMechanicComponent_C", "SetSpecificRank");

	Params::BP_PerfectionMechanicComponent_C_SetSpecificRank Parms{};

	Parms.Rank = Rank;
	Parms.Reason = Reason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PerfectionMechanicComponent.BP_PerfectionMechanicComponent_C.TryPlayPerfectionTutorial
// (BlueprintCallable, BlueprintEvent)

void UBP_PerfectionMechanicComponent_C::TryPlayPerfectionTutorial()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PerfectionMechanicComponent_C", "TryPlayPerfectionTutorial");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PerfectionMechanicComponent.BP_PerfectionMechanicComponent_C.TryRemoveMechanicWidget
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PerfectionMechanicComponent_C::TryRemoveMechanicWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PerfectionMechanicComponent_C", "TryRemoveMechanicWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PerfectionMechanicComponent.BP_PerfectionMechanicComponent_C.TryUnlockAchievementVersoPerfection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_Perfection_Ranks                      CurrentRank_0                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PerfectionMechanicComponent_C::TryUnlockAchievementVersoPerfection(E_Perfection_Ranks CurrentRank_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PerfectionMechanicComponent_C", "TryUnlockAchievementVersoPerfection");

	Params::BP_PerfectionMechanicComponent_C_TryUnlockAchievementVersoPerfection Parms{};

	Parms.CurrentRank_0 = CurrentRank_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PerfectionMechanicComponent.BP_PerfectionMechanicComponent_C.UpdatePerfectionFinalDamageMultipliers
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  RankDMultiplier                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  RankCMultiplier                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  RankBMultiplier                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  RankAMultiplier                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  RankSMultiplier                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PerfectionMechanicComponent_C::UpdatePerfectionFinalDamageMultipliers(double RankDMultiplier, double RankCMultiplier, double RankBMultiplier, double RankAMultiplier, double RankSMultiplier)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PerfectionMechanicComponent_C", "UpdatePerfectionFinalDamageMultipliers");

	Params::BP_PerfectionMechanicComponent_C_UpdatePerfectionFinalDamageMultipliers Parms{};

	Parms.RankDMultiplier = RankDMultiplier;
	Parms.RankCMultiplier = RankCMultiplier;
	Parms.RankBMultiplier = RankBMultiplier;
	Parms.RankAMultiplier = RankAMultiplier;
	Parms.RankSMultiplier = RankSMultiplier;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PerfectionMechanicComponent.BP_PerfectionMechanicComponent_C.UpdateRank
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PerfectionMechanicComponent_C::UpdateRank()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PerfectionMechanicComponent_C", "UpdateRank");

	UObject::ProcessEvent(Func, nullptr);
}

}

