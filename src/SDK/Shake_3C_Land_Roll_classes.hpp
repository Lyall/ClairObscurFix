﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Shake_3C_Land_Roll

#include "Basic.hpp"

#include "GameplayCameras_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Shake_3C_Land_Roll.Shake_3C_Land_Roll_C
// 0x0000 (0x00E0 - 0x00E0)
class UShake_3C_Land_Roll_C final : public UDefaultCameraShakeBase
{
public:
	void NewFunction_0();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Shake_3C_Land_Roll_C">();
	}
	static class UShake_3C_Land_Roll_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UShake_3C_Land_Roll_C>();
	}
};
static_assert(alignof(UShake_3C_Land_Roll_C) == 0x000010, "Wrong alignment on UShake_3C_Land_Roll_C");
static_assert(sizeof(UShake_3C_Land_Roll_C) == 0x0000E0, "Wrong size on UShake_3C_Land_Roll_C");

}

