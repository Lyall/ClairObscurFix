﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_BattleAudioCharacter_GetComponents

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_BattleAudioCharacter_GetComponents.BPI_BattleAudioCharacter_GetComponents_C
// 0x0000 (0x0000 - 0x0000)
class IBPI_BattleAudioCharacter_GetComponents_C final
{
public:
	void GetBattleAudioCharacterManager(class UBP_AudioCharacter_BattleManager_C** AudioCharacterBattleManager);
	void GetBattleAudioContainerComponents(class USceneComponent** SFX, class USceneComponent** weapon_l, class USceneComponent** weapon_r, class USceneComponent** Foley, class USceneComponent** Vocal, class USceneComponent** foot_l, class USceneComponent** Foot_R, class USceneComponent** HitBy);
	void GetBattleAudioProfile(class UBP_DataAsset_CharacterBattleAudioProfile_C** AudioProfile);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_BattleAudioCharacter_GetComponents_C">();
	}
	static class IBPI_BattleAudioCharacter_GetComponents_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_BattleAudioCharacter_GetComponents_C>();
	}

	class UObject* AsUObject()
	{
		return reinterpret_cast<UObject*>(this);
	}
	const class UObject* AsUObject() const
	{
		return reinterpret_cast<const UObject*>(this);
	}
};
static_assert(alignof(IBPI_BattleAudioCharacter_GetComponents_C) == 0x000001, "Wrong alignment on IBPI_BattleAudioCharacter_GetComponents_C");
static_assert(sizeof(IBPI_BattleAudioCharacter_GetComponents_C) == 0x000001, "Wrong size on IBPI_BattleAudioCharacter_GetComponents_C");

}

