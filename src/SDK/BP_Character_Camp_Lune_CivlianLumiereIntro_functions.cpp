﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Character_Camp_Lune_CivlianLumiereIntro

#include "Basic.hpp"

#include "BP_Character_Camp_Lune_CivlianLumiereIntro_classes.hpp"
#include "BP_Character_Camp_Lune_CivlianLumiereIntro_parameters.hpp"


namespace SDK
{

// Function BP_Character_Camp_Lune_CivlianLumiereIntro.BP_Character_Camp_Lune_CivlianLumiereIntro_C.ExecuteUbergraph_BP_Character_Camp_Lune_CivlianLumiereIntro
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Character_Camp_Lune_CivlianLumiereIntro_C::ExecuteUbergraph_BP_Character_Camp_Lune_CivlianLumiereIntro(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_Camp_Lune_CivlianLumiereIntro_C", "ExecuteUbergraph_BP_Character_Camp_Lune_CivlianLumiereIntro");

	Params::BP_Character_Camp_Lune_CivlianLumiereIntro_C_ExecuteUbergraph_BP_Character_Camp_Lune_CivlianLumiereIntro Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Character_Camp_Lune_CivlianLumiereIntro.BP_Character_Camp_Lune_CivlianLumiereIntro_C.IsInteractionAvailable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                                   Available                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Character_Camp_Lune_CivlianLumiereIntro_C::IsInteractionAvailable(bool* Available)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_Camp_Lune_CivlianLumiereIntro_C", "IsInteractionAvailable");

	Params::BP_Character_Camp_Lune_CivlianLumiereIntro_C_IsInteractionAvailable Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Available != nullptr)
		*Available = Parms.Available;
}


// Function BP_Character_Camp_Lune_CivlianLumiereIntro.BP_Character_Camp_Lune_CivlianLumiereIntro_C.OnInteractionEnabled
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Character_Camp_Lune_CivlianLumiereIntro_C::OnInteractionEnabled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_Camp_Lune_CivlianLumiereIntro_C", "OnInteractionEnabled");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Character_Camp_Lune_CivlianLumiereIntro.BP_Character_Camp_Lune_CivlianLumiereIntro_C.OnPlayerEnteredInteractionRange
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_Camp_Lune_CivlianLumiereIntro_C::OnPlayerEnteredInteractionRange()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_Camp_Lune_CivlianLumiereIntro_C", "OnPlayerEnteredInteractionRange");

	UObject::ProcessEvent(Func, nullptr);
}

}

