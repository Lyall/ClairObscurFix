﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_WeaponScalingLevel

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct S_WeaponScalingLevel.S_WeaponScalingLevel
// 0x0020 (0x0020 - 0x0000)
struct FS_WeaponScalingLevel final
{
public:
	int32                                         Level_2_479B11DA4A2B89DA7568EABFD1B1E2FE;          // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        PhysicalAttack_5_9B0990424CCCEE3E826ABFA03DEA6FE6; // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MagicalAttack_7_35190D724801E779DBA533A5C197EFC6;  // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ChromaValue_10_87D256FB42933A6D1E02839F8D8561A2;   // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FS_WeaponScalingLevel) == 0x000008, "Wrong alignment on FS_WeaponScalingLevel");
static_assert(sizeof(FS_WeaponScalingLevel) == 0x000020, "Wrong size on FS_WeaponScalingLevel");
static_assert(offsetof(FS_WeaponScalingLevel, Level_2_479B11DA4A2B89DA7568EABFD1B1E2FE) == 0x000000, "Member 'FS_WeaponScalingLevel::Level_2_479B11DA4A2B89DA7568EABFD1B1E2FE' has a wrong offset!");
static_assert(offsetof(FS_WeaponScalingLevel, PhysicalAttack_5_9B0990424CCCEE3E826ABFA03DEA6FE6) == 0x000008, "Member 'FS_WeaponScalingLevel::PhysicalAttack_5_9B0990424CCCEE3E826ABFA03DEA6FE6' has a wrong offset!");
static_assert(offsetof(FS_WeaponScalingLevel, MagicalAttack_7_35190D724801E779DBA533A5C197EFC6) == 0x000010, "Member 'FS_WeaponScalingLevel::MagicalAttack_7_35190D724801E779DBA533A5C197EFC6' has a wrong offset!");
static_assert(offsetof(FS_WeaponScalingLevel, ChromaValue_10_87D256FB42933A6D1E02839F8D8561A2) == 0x000018, "Member 'FS_WeaponScalingLevel::ChromaValue_10_87D256FB42933A6D1E02839F8D8561A2' has a wrong offset!");

}

