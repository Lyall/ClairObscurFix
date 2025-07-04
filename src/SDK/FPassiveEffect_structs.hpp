﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FPassiveEffect

#include "Basic.hpp"

#include "E_PassiveEffectCategory_structs.hpp"


namespace SDK
{

// UserDefinedStruct FPassiveEffect.FPassiveEffect
// 0x0048 (0x0048 - 0x0000)
struct FFPassiveEffect final
{
public:
	class FText                                   Name_2_10859E81431F2583F434998C9A00D4AC;           // 0x0000(0x0010)(Edit, BlueprintVisible)
	class FText                                   Description_12_EEFC7EED42F5C4FA14BBD7B356617893;   // 0x0010(0x0010)(Edit, BlueprintVisible)
	TArray<TSoftClassPtr<class UClass>>           BattleBuffs_27_CB56347044EDBC0335BC8E898B751680;   // 0x0020(0x0010)(Edit, BlueprintVisible)
	int32                                         LuminaCost_15_BC10A93D48987A14F96279AC521E94CF;    // 0x0030(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LuminaUnlockStepsCount_19_B80447FF455A4D693EAD2991AD473004; // 0x0034(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<E_PassiveEffectCategory>               Categories_23_4052AE7B40B336B43096B7A2E554F50D;    // 0x0038(0x0010)(Edit, BlueprintVisible)
};
static_assert(alignof(FFPassiveEffect) == 0x000008, "Wrong alignment on FFPassiveEffect");
static_assert(sizeof(FFPassiveEffect) == 0x000048, "Wrong size on FFPassiveEffect");
static_assert(offsetof(FFPassiveEffect, Name_2_10859E81431F2583F434998C9A00D4AC) == 0x000000, "Member 'FFPassiveEffect::Name_2_10859E81431F2583F434998C9A00D4AC' has a wrong offset!");
static_assert(offsetof(FFPassiveEffect, Description_12_EEFC7EED42F5C4FA14BBD7B356617893) == 0x000010, "Member 'FFPassiveEffect::Description_12_EEFC7EED42F5C4FA14BBD7B356617893' has a wrong offset!");
static_assert(offsetof(FFPassiveEffect, BattleBuffs_27_CB56347044EDBC0335BC8E898B751680) == 0x000020, "Member 'FFPassiveEffect::BattleBuffs_27_CB56347044EDBC0335BC8E898B751680' has a wrong offset!");
static_assert(offsetof(FFPassiveEffect, LuminaCost_15_BC10A93D48987A14F96279AC521E94CF) == 0x000030, "Member 'FFPassiveEffect::LuminaCost_15_BC10A93D48987A14F96279AC521E94CF' has a wrong offset!");
static_assert(offsetof(FFPassiveEffect, LuminaUnlockStepsCount_19_B80447FF455A4D693EAD2991AD473004) == 0x000034, "Member 'FFPassiveEffect::LuminaUnlockStepsCount_19_B80447FF455A4D693EAD2991AD473004' has a wrong offset!");
static_assert(offsetof(FFPassiveEffect, Categories_23_4052AE7B40B336B43096B7A2E554F50D) == 0x000038, "Member 'FFPassiveEffect::Categories_23_4052AE7B40B336B43096B7A2E554F50D' has a wrong offset!");

}

