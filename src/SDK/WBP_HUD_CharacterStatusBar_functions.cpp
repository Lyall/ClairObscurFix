﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HUD_CharacterStatusBar

#include "Basic.hpp"

#include "WBP_HUD_CharacterStatusBar_classes.hpp"
#include "WBP_HUD_CharacterStatusBar_parameters.hpp"


namespace SDK
{

// Function WBP_HUD_CharacterStatusBar.WBP_HUD_CharacterStatusBar_C.Appear_WBP
// (BlueprintCallable, BlueprintEvent)

void UWBP_HUD_CharacterStatusBar_C::Appear_WBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUD_CharacterStatusBar_C", "Appear_WBP");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HUD_CharacterStatusBar.WBP_HUD_CharacterStatusBar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_HUD_CharacterStatusBar_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUD_CharacterStatusBar_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HUD_CharacterStatusBar.WBP_HUD_CharacterStatusBar_C.DeadEvent_Life
// (BlueprintCallable, BlueprintEvent)

void UWBP_HUD_CharacterStatusBar_C::DeadEvent_Life()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUD_CharacterStatusBar_C", "DeadEvent_Life");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HUD_CharacterStatusBar.WBP_HUD_CharacterStatusBar_C.EventDamaged_bar
// (BlueprintCallable, BlueprintEvent)

void UWBP_HUD_CharacterStatusBar_C::EventDamaged_bar()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUD_CharacterStatusBar_C", "EventDamaged_bar");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HUD_CharacterStatusBar.WBP_HUD_CharacterStatusBar_C.ExecuteUbergraph_WBP_HUD_CharacterStatusBar
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_CharacterStatusBar_C::ExecuteUbergraph_WBP_HUD_CharacterStatusBar(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUD_CharacterStatusBar_C", "ExecuteUbergraph_WBP_HUD_CharacterStatusBar");

	Params::WBP_HUD_CharacterStatusBar_C_ExecuteUbergraph_WBP_HUD_CharacterStatusBar Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HUD_CharacterStatusBar.WBP_HUD_CharacterStatusBar_C.SetActionPoints
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   CurrentAP                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_CharacterStatusBar_C::SetActionPoints(int32 CurrentAP)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUD_CharacterStatusBar_C", "SetActionPoints");

	Params::WBP_HUD_CharacterStatusBar_C_SetActionPoints Parms{};

	Parms.CurrentAP = CurrentAP;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HUD_CharacterStatusBar.WBP_HUD_CharacterStatusBar_C.SetAP
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NewAP                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   MaxAP                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   PreviousAP                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_CharacterStatusBar_C::SetAP(int32 NewAP, int32 MaxAP, int32 PreviousAP)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUD_CharacterStatusBar_C", "SetAP");

	Params::WBP_HUD_CharacterStatusBar_C_SetAP Parms{};

	Parms.NewAP = NewAP;
	Parms.MaxAP = MaxAP;
	Parms.PreviousAP = PreviousAP;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HUD_CharacterStatusBar.WBP_HUD_CharacterStatusBar_C.SetLife
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   HP_0                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   MaxHP                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_CharacterStatusBar_C::SetLife(int32 HP_0, int32 MaxHP)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUD_CharacterStatusBar_C", "SetLife");

	Params::WBP_HUD_CharacterStatusBar_C_SetLife Parms{};

	Parms.HP_0 = HP_0;
	Parms.MaxHP = MaxHP;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HUD_CharacterStatusBar.WBP_HUD_CharacterStatusBar_C.SetShieldCount
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ShieldCount                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_CharacterStatusBar_C::SetShieldCount(int32 ShieldCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUD_CharacterStatusBar_C", "SetShieldCount");

	Params::WBP_HUD_CharacterStatusBar_C_SetShieldCount Parms{};

	Parms.ShieldCount = ShieldCount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HUD_CharacterStatusBar.WBP_HUD_CharacterStatusBar_C.UpdateHealthColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_HUD_CharacterStatusBar_C::UpdateHealthColor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUD_CharacterStatusBar_C", "UpdateHealthColor");

	UObject::ProcessEvent(Func, nullptr);
}

}

