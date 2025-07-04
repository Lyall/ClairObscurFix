﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_GM_LuminaPoints

#include "Basic.hpp"

#include "WBP_GM_LuminaPoints_classes.hpp"
#include "WBP_GM_LuminaPoints_parameters.hpp"


namespace SDK
{

// Function WBP_GM_LuminaPoints.WBP_GM_LuminaPoints_C.SetValues
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InUsedPoints                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InMaxPoints                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GM_LuminaPoints_C::SetValues(int32 InUsedPoints, int32 InMaxPoints)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GM_LuminaPoints_C", "SetValues");

	Params::WBP_GM_LuminaPoints_C_SetValues Parms{};

	Parms.InUsedPoints = InUsedPoints;
	Parms.InMaxPoints = InMaxPoints;

	UObject::ProcessEvent(Func, &Parms);
}

}

