﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_CharacterCustomization

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct S_CharacterCustomization.S_CharacterCustomization
// 0x0050 (0x0050 - 0x0000)
struct FS_CharacterCustomization final
{
public:
	TSoftClassPtr<class UClass>                   CharacterSkinBase_9_D6F8B7E048CBA86E677340839167C4FA; // 0x0000(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   CharacterFaceBase_10_069193A2473BA2E48EDF77841A8F3AFD; // 0x0028(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
};
static_assert(alignof(FS_CharacterCustomization) == 0x000008, "Wrong alignment on FS_CharacterCustomization");
static_assert(sizeof(FS_CharacterCustomization) == 0x000050, "Wrong size on FS_CharacterCustomization");
static_assert(offsetof(FS_CharacterCustomization, CharacterSkinBase_9_D6F8B7E048CBA86E677340839167C4FA) == 0x000000, "Member 'FS_CharacterCustomization::CharacterSkinBase_9_D6F8B7E048CBA86E677340839167C4FA' has a wrong offset!");
static_assert(offsetof(FS_CharacterCustomization, CharacterFaceBase_10_069193A2473BA2E48EDF77841A8F3AFD) == 0x000028, "Member 'FS_CharacterCustomization::CharacterFaceBase_10_069193A2473BA2E48EDF77841A8F3AFD' has a wrong offset!");

}

