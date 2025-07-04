﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Character_MaelleIntroRun

#include "Basic.hpp"

#include "BP_Character_MaelleIntroRun_classes.hpp"
#include "BP_Character_MaelleIntroRun_parameters.hpp"


namespace SDK
{

// Function BP_Character_MaelleIntroRun.BP_Character_MaelleIntroRun_C.ExecuteUbergraph_BP_Character_MaelleIntroRun
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Character_MaelleIntroRun_C::ExecuteUbergraph_BP_Character_MaelleIntroRun(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_MaelleIntroRun_C", "ExecuteUbergraph_BP_Character_MaelleIntroRun");

	Params::BP_Character_MaelleIntroRun_C_ExecuteUbergraph_BP_Character_MaelleIntroRun Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Character_MaelleIntroRun.BP_Character_MaelleIntroRun_C.Grappling FX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   HorizontalCorrection                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  VerticalCorrection                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Character_MaelleIntroRun_C::Grappling_FX(float HorizontalCorrection, double VerticalCorrection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_MaelleIntroRun_C", "Grappling FX");

	Params::BP_Character_MaelleIntroRun_C_Grappling_FX Parms{};

	Parms.HorizontalCorrection = HorizontalCorrection;
	Parms.VerticalCorrection = VerticalCorrection;

	UObject::ProcessEvent(Func, &Parms);
}

}

