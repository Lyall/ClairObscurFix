﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_InteractiveMusicParameters

#include "Basic.hpp"

#include "E_InteractiveMusicContext_structs.hpp"


namespace SDK
{

// UserDefinedStruct S_InteractiveMusicParameters.S_InteractiveMusicParameters
// 0x0018 (0x0018 - 0x0000)
struct FS_InteractiveMusicParameters final
{
public:
	class USoundBase*                             Music_2_87A789F742039AA5DF05D0BFE10C5604;          // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   AudioTrigger_6_94089C9F4FB0CEBFBB7CB5BB0E6C3086;   // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_InteractiveMusicContext                     Context_9_AC4E800D437EF030BFB25DABDD55BD18;        // 0x0010(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FS_InteractiveMusicParameters) == 0x000008, "Wrong alignment on FS_InteractiveMusicParameters");
static_assert(sizeof(FS_InteractiveMusicParameters) == 0x000018, "Wrong size on FS_InteractiveMusicParameters");
static_assert(offsetof(FS_InteractiveMusicParameters, Music_2_87A789F742039AA5DF05D0BFE10C5604) == 0x000000, "Member 'FS_InteractiveMusicParameters::Music_2_87A789F742039AA5DF05D0BFE10C5604' has a wrong offset!");
static_assert(offsetof(FS_InteractiveMusicParameters, AudioTrigger_6_94089C9F4FB0CEBFBB7CB5BB0E6C3086) == 0x000008, "Member 'FS_InteractiveMusicParameters::AudioTrigger_6_94089C9F4FB0CEBFBB7CB5BB0E6C3086' has a wrong offset!");
static_assert(offsetof(FS_InteractiveMusicParameters, Context_9_AC4E800D437EF030BFB25DABDD55BD18) == 0x000010, "Member 'FS_InteractiveMusicParameters::Context_9_AC4E800D437EF030BFB25DABDD55BD18' has a wrong offset!");

}

