﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_WeaponTooltipLumina

#include "Basic.hpp"

#include "WBP_WeaponTooltipLumina_classes.hpp"
#include "WBP_WeaponTooltipLumina_parameters.hpp"


namespace SDK
{

// Function WBP_WeaponTooltipLumina.WBP_WeaponTooltipLumina_C.LoadPassiveEffectData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FFPassiveEffect&           PassiveEffectDefiniton                                 (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// EWeaponQuality                          QualityLevel                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsLocked                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   UnlockLevel                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_WeaponTooltipLumina_C::LoadPassiveEffectData(const struct FFPassiveEffect& PassiveEffectDefiniton, EWeaponQuality QualityLevel, bool IsLocked, int32 UnlockLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WeaponTooltipLumina_C", "LoadPassiveEffectData");

	Params::WBP_WeaponTooltipLumina_C_LoadPassiveEffectData Parms{};

	Parms.PassiveEffectDefiniton = std::move(PassiveEffectDefiniton);
	Parms.QualityLevel = QualityLevel;
	Parms.IsLocked = IsLocked;
	Parms.UnlockLevel = UnlockLevel;

	UObject::ProcessEvent(Func, &Parms);
}

}

