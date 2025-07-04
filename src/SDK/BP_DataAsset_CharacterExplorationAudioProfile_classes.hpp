﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DataAsset_CharacterExplorationAudioProfile

#include "Basic.hpp"

#include "FAudioCharacter_ExplorationSFXType_structs.hpp"
#include "S_OnoSoundData_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DataAsset_CharacterExplorationAudioProfile.BP_DataAsset_CharacterExplorationAudioProfile_C
// 0x00A0 (0x00D0 - 0x0030)
class UBP_DataAsset_CharacterExplorationAudioProfile_C final : public UPrimaryDataAsset
{
public:
	struct FFAudioCharacter_ExplorationSFXType    SfxType;                                           // 0x0030(0x0038)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UBP_DataAsset_Footsteps_C*              DA_Footsteps;                                      // 0x0068(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FS_OnoSoundData                        OnoSoundData;                                      // 0x0070(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class USoundBase*                             FoleyMetaSound;                                    // 0x00C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             BreathMetaSound;                                   // 0x00C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DataAsset_CharacterExplorationAudioProfile_C">();
	}
	static class UBP_DataAsset_CharacterExplorationAudioProfile_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_DataAsset_CharacterExplorationAudioProfile_C>();
	}
};
static_assert(alignof(UBP_DataAsset_CharacterExplorationAudioProfile_C) == 0x000008, "Wrong alignment on UBP_DataAsset_CharacterExplorationAudioProfile_C");
static_assert(sizeof(UBP_DataAsset_CharacterExplorationAudioProfile_C) == 0x0000D0, "Wrong size on UBP_DataAsset_CharacterExplorationAudioProfile_C");
static_assert(offsetof(UBP_DataAsset_CharacterExplorationAudioProfile_C, SfxType) == 0x000030, "Member 'UBP_DataAsset_CharacterExplorationAudioProfile_C::SfxType' has a wrong offset!");
static_assert(offsetof(UBP_DataAsset_CharacterExplorationAudioProfile_C, DA_Footsteps) == 0x000068, "Member 'UBP_DataAsset_CharacterExplorationAudioProfile_C::DA_Footsteps' has a wrong offset!");
static_assert(offsetof(UBP_DataAsset_CharacterExplorationAudioProfile_C, OnoSoundData) == 0x000070, "Member 'UBP_DataAsset_CharacterExplorationAudioProfile_C::OnoSoundData' has a wrong offset!");
static_assert(offsetof(UBP_DataAsset_CharacterExplorationAudioProfile_C, FoleyMetaSound) == 0x0000C0, "Member 'UBP_DataAsset_CharacterExplorationAudioProfile_C::FoleyMetaSound' has a wrong offset!");
static_assert(offsetof(UBP_DataAsset_CharacterExplorationAudioProfile_C, BreathMetaSound) == 0x0000C8, "Member 'UBP_DataAsset_CharacterExplorationAudioProfile_C::BreathMetaSound' has a wrong offset!");

}

