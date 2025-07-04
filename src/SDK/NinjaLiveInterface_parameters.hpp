﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NinjaLiveInterface

#include "Basic.hpp"


namespace SDK::Params
{

// Function NinjaLiveInterface.NinjaLiveInterface_C.LiveActivation
// 0x0018 (0x0018 - 0x0000)
struct NinjaLiveInterface_C_LiveActivation final
{
public:
	class FName                                   ParamName;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        FadeTimeOfBrush;                                   // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        FadeTimeOfCanvas;                                  // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NinjaLiveInterface_C_LiveActivation) == 0x000008, "Wrong alignment on NinjaLiveInterface_C_LiveActivation");
static_assert(sizeof(NinjaLiveInterface_C_LiveActivation) == 0x000018, "Wrong size on NinjaLiveInterface_C_LiveActivation");
static_assert(offsetof(NinjaLiveInterface_C_LiveActivation, ParamName) == 0x000000, "Member 'NinjaLiveInterface_C_LiveActivation::ParamName' has a wrong offset!");
static_assert(offsetof(NinjaLiveInterface_C_LiveActivation, FadeTimeOfBrush) == 0x000008, "Member 'NinjaLiveInterface_C_LiveActivation::FadeTimeOfBrush' has a wrong offset!");
static_assert(offsetof(NinjaLiveInterface_C_LiveActivation, FadeTimeOfCanvas) == 0x000010, "Member 'NinjaLiveInterface_C_LiveActivation::FadeTimeOfCanvas' has a wrong offset!");

// Function NinjaLiveInterface.NinjaLiveInterface_C.LiveFluidParams
// 0x0008 (0x0008 - 0x0000)
struct NinjaLiveInterface_C_LiveFluidParams final
{
public:
	double                                        BrushSize;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NinjaLiveInterface_C_LiveFluidParams) == 0x000008, "Wrong alignment on NinjaLiveInterface_C_LiveFluidParams");
static_assert(sizeof(NinjaLiveInterface_C_LiveFluidParams) == 0x000008, "Wrong size on NinjaLiveInterface_C_LiveFluidParams");
static_assert(offsetof(NinjaLiveInterface_C_LiveFluidParams, BrushSize) == 0x000000, "Member 'NinjaLiveInterface_C_LiveFluidParams::BrushSize' has a wrong offset!");

}

