﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DataAsset_BattleHitSound

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DataAsset_BattleHitSound.BP_DataAsset_BattleHitSound_C
// 0x0010 (0x0040 - 0x0030)
class UBP_DataAsset_BattleHitSound_C final : public UPrimaryDataAsset
{
public:
	class USoundBase*                             BaseIntensity;                                     // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             HighIntensity;                                     // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void GetSoundForDamage(class UBP_BattleDamages_C* BattleDamage, class USoundBase** Sound);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DataAsset_BattleHitSound_C">();
	}
	static class UBP_DataAsset_BattleHitSound_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_DataAsset_BattleHitSound_C>();
	}
};
static_assert(alignof(UBP_DataAsset_BattleHitSound_C) == 0x000008, "Wrong alignment on UBP_DataAsset_BattleHitSound_C");
static_assert(sizeof(UBP_DataAsset_BattleHitSound_C) == 0x000040, "Wrong size on UBP_DataAsset_BattleHitSound_C");
static_assert(offsetof(UBP_DataAsset_BattleHitSound_C, BaseIntensity) == 0x000030, "Member 'UBP_DataAsset_BattleHitSound_C::BaseIntensity' has a wrong offset!");
static_assert(offsetof(UBP_DataAsset_BattleHitSound_C, HighIntensity) == 0x000038, "Member 'UBP_DataAsset_BattleHitSound_C::HighIntensity' has a wrong offset!");

}

