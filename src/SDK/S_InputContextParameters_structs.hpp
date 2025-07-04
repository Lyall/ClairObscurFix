﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_InputContextParameters

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct S_InputContextParameters.S_InputContextParameters
// 0x0010 (0x0010 - 0x0000)
struct FS_InputContextParameters final
{
public:
	class UInputMappingContext*                   MovementInputMapping_4_A06DF4A74A403B96EA605D9885A120DC; // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UInputMappingContext*                   CameraInputMapping_5_5E09502C496201709DB88DBAA02E6B7C; // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FS_InputContextParameters) == 0x000008, "Wrong alignment on FS_InputContextParameters");
static_assert(sizeof(FS_InputContextParameters) == 0x000010, "Wrong size on FS_InputContextParameters");
static_assert(offsetof(FS_InputContextParameters, MovementInputMapping_4_A06DF4A74A403B96EA605D9885A120DC) == 0x000000, "Member 'FS_InputContextParameters::MovementInputMapping_4_A06DF4A74A403B96EA605D9885A120DC' has a wrong offset!");
static_assert(offsetof(FS_InputContextParameters, CameraInputMapping_5_5E09502C496201709DB88DBAA02E6B7C) == 0x000008, "Member 'FS_InputContextParameters::CameraInputMapping_5_5E09502C496201709DB88DBAA02E6B7C' has a wrong offset!");

}

