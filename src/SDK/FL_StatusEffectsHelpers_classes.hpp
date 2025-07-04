﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FL_StatusEffectsHelpers

#include "Basic.hpp"

#include "E_StatusEffects_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass FL_StatusEffectsHelpers.FL_StatusEffectsHelpers_C
// 0x0000 (0x0028 - 0x0028)
class UFL_StatusEffectsHelpers_C final : public UBlueprintFunctionLibrary
{
public:
	static void GetStatusEffectBuffClassSoft(E_StatusEffects StatusEffect, class UObject* __WorldContext, TSoftClassPtr<class UClass>* BP_Class);
	static void GetStatusEffectBuffClass(E_StatusEffects Index_0, class UObject* __WorldContext, class UClass** BP_Class);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FL_StatusEffectsHelpers_C">();
	}
	static class UFL_StatusEffectsHelpers_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFL_StatusEffectsHelpers_C>();
	}
};
static_assert(alignof(UFL_StatusEffectsHelpers_C) == 0x000008, "Wrong alignment on UFL_StatusEffectsHelpers_C");
static_assert(sizeof(UFL_StatusEffectsHelpers_C) == 0x000028, "Wrong size on UFL_StatusEffectsHelpers_C");

}

