﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_DialogueLine

#include "Basic.hpp"

#include "E_DialoguesPortraitsType_structs.hpp"
#include "E_DialoguesPortraitsCharacters_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// UserDefinedStruct S_DialogueLine.S_DialogueLine
// 0x0058 (0x0058 - 0x0000)
struct FS_DialogueLine final
{
public:
	E_DialoguesPortraitsCharacters                Character_21_9CCAA85F4D431E9DD912FD9CB38DFBB9;     // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_DialoguesPortraitsType                      Emotion_22_4E5F2363442944395D427CBC0DCCAFFD;       // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x6];                                        // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        DelayToDelete_12_F7B8F4424E025AE635FD8BA9513B8507; // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        DelayToAnswer_14_1F1CDEEA43E0BEF54D3810A237AA242C; // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseSoundDuration_30_2BFE9A814C5DA24658A59C8CB417A17F; // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UDialogueWave*                          DialogWave_25_CFDA519F4908618047A8D295B783A40F;    // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          PortraitOnTheRight_32_A078243C417EE058757087B38EE1B018; // 0x0028(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDataTableRowHandle                    SoundEventRow_35_4369BC3D47B0C2E3C9C07A9E49CF92E7; // 0x0030(0x0010)(Edit, BlueprintVisible, NoDestructor)
	class FText                                   LineText_41_AD35B4F044D43FEB5B62D58635EAC75F;      // 0x0040(0x0010)(Edit, BlueprintVisible)
	class USoundBase*                             LineSound_44_C57AC45742D2E25B6D1951AFEDB7085C;     // 0x0050(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FS_DialogueLine) == 0x000008, "Wrong alignment on FS_DialogueLine");
static_assert(sizeof(FS_DialogueLine) == 0x000058, "Wrong size on FS_DialogueLine");
static_assert(offsetof(FS_DialogueLine, Character_21_9CCAA85F4D431E9DD912FD9CB38DFBB9) == 0x000000, "Member 'FS_DialogueLine::Character_21_9CCAA85F4D431E9DD912FD9CB38DFBB9' has a wrong offset!");
static_assert(offsetof(FS_DialogueLine, Emotion_22_4E5F2363442944395D427CBC0DCCAFFD) == 0x000001, "Member 'FS_DialogueLine::Emotion_22_4E5F2363442944395D427CBC0DCCAFFD' has a wrong offset!");
static_assert(offsetof(FS_DialogueLine, DelayToDelete_12_F7B8F4424E025AE635FD8BA9513B8507) == 0x000008, "Member 'FS_DialogueLine::DelayToDelete_12_F7B8F4424E025AE635FD8BA9513B8507' has a wrong offset!");
static_assert(offsetof(FS_DialogueLine, DelayToAnswer_14_1F1CDEEA43E0BEF54D3810A237AA242C) == 0x000010, "Member 'FS_DialogueLine::DelayToAnswer_14_1F1CDEEA43E0BEF54D3810A237AA242C' has a wrong offset!");
static_assert(offsetof(FS_DialogueLine, UseSoundDuration_30_2BFE9A814C5DA24658A59C8CB417A17F) == 0x000018, "Member 'FS_DialogueLine::UseSoundDuration_30_2BFE9A814C5DA24658A59C8CB417A17F' has a wrong offset!");
static_assert(offsetof(FS_DialogueLine, DialogWave_25_CFDA519F4908618047A8D295B783A40F) == 0x000020, "Member 'FS_DialogueLine::DialogWave_25_CFDA519F4908618047A8D295B783A40F' has a wrong offset!");
static_assert(offsetof(FS_DialogueLine, PortraitOnTheRight_32_A078243C417EE058757087B38EE1B018) == 0x000028, "Member 'FS_DialogueLine::PortraitOnTheRight_32_A078243C417EE058757087B38EE1B018' has a wrong offset!");
static_assert(offsetof(FS_DialogueLine, SoundEventRow_35_4369BC3D47B0C2E3C9C07A9E49CF92E7) == 0x000030, "Member 'FS_DialogueLine::SoundEventRow_35_4369BC3D47B0C2E3C9C07A9E49CF92E7' has a wrong offset!");
static_assert(offsetof(FS_DialogueLine, LineText_41_AD35B4F044D43FEB5B62D58635EAC75F) == 0x000040, "Member 'FS_DialogueLine::LineText_41_AD35B4F044D43FEB5B62D58635EAC75F' has a wrong offset!");
static_assert(offsetof(FS_DialogueLine, LineSound_44_C57AC45742D2E25B6D1951AFEDB7085C) == 0x000050, "Member 'FS_DialogueLine::LineSound_44_C57AC45742D2E25B6D1951AFEDB7085C' has a wrong offset!");

}

