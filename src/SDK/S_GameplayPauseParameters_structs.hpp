﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_GameplayPauseParameters

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct S_GameplayPauseParameters.S_GameplayPauseParameters
// 0x0030 (0x0030 - 0x0000)
struct FS_GameplayPauseParameters final
{
public:
	bool                                          WantToPause_4_D2C95FFF4C8FC6B4767A8D8E83A23601;    // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IncludeControlledPawn_1_629F995B4278E66BDBC0D9A0C702DD98; // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x6];                                        // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         IgnoredActors_8_E99796DB4D06E78BC4E49F9F6F3445B9;  // 0x0008(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	TArray<class UClass*>                         IgnoredClasses_12_085EE7BD49477FFEC76484A02A491475; // 0x0018(0x0010)(Edit, BlueprintVisible)
	bool                                          PreparingToChangeMap_14_21564C914267D05CC4E3EEA10E81949C; // 0x0028(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ForceUpdatePausedActors_16_A5C834414A338CE0614A7D8F7B98F60E; // 0x0029(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FS_GameplayPauseParameters) == 0x000008, "Wrong alignment on FS_GameplayPauseParameters");
static_assert(sizeof(FS_GameplayPauseParameters) == 0x000030, "Wrong size on FS_GameplayPauseParameters");
static_assert(offsetof(FS_GameplayPauseParameters, WantToPause_4_D2C95FFF4C8FC6B4767A8D8E83A23601) == 0x000000, "Member 'FS_GameplayPauseParameters::WantToPause_4_D2C95FFF4C8FC6B4767A8D8E83A23601' has a wrong offset!");
static_assert(offsetof(FS_GameplayPauseParameters, IncludeControlledPawn_1_629F995B4278E66BDBC0D9A0C702DD98) == 0x000001, "Member 'FS_GameplayPauseParameters::IncludeControlledPawn_1_629F995B4278E66BDBC0D9A0C702DD98' has a wrong offset!");
static_assert(offsetof(FS_GameplayPauseParameters, IgnoredActors_8_E99796DB4D06E78BC4E49F9F6F3445B9) == 0x000008, "Member 'FS_GameplayPauseParameters::IgnoredActors_8_E99796DB4D06E78BC4E49F9F6F3445B9' has a wrong offset!");
static_assert(offsetof(FS_GameplayPauseParameters, IgnoredClasses_12_085EE7BD49477FFEC76484A02A491475) == 0x000018, "Member 'FS_GameplayPauseParameters::IgnoredClasses_12_085EE7BD49477FFEC76484A02A491475' has a wrong offset!");
static_assert(offsetof(FS_GameplayPauseParameters, PreparingToChangeMap_14_21564C914267D05CC4E3EEA10E81949C) == 0x000028, "Member 'FS_GameplayPauseParameters::PreparingToChangeMap_14_21564C914267D05CC4E3EEA10E81949C' has a wrong offset!");
static_assert(offsetof(FS_GameplayPauseParameters, ForceUpdatePausedActors_16_A5C834414A338CE0614A7D8F7B98F60E) == 0x000029, "Member 'FS_GameplayPauseParameters::ForceUpdatePausedActors_16_A5C834414A338CE0614A7D8F7B98F60E' has a wrong offset!");

}

