﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_EnemyScalingDataLevel

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct S_EnemyScalingDataLevel.S_EnemyScalingDataLevel
// 0x0038 (0x0038 - 0x0000)
struct FS_EnemyScalingDataLevel final
{
public:
	int32                                         Level_26_C91160174BDDE0B34E9F96AAE366C0D5;         // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         HP_27_9B8F0EF14EBC6DBDE30E86A7FFE48646;            // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PhysicalAttack_28_82A69E334B7A1E723084829AFCCEAA25; // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PhysicalDefense_29_F610675445A2768C30612FBAB57F46DE; // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MagicalAttack_30_653EB84143B61538EFE2F1BE21539BC7; // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MagicalDefense_31_5972F1F24C89F844C3B6DEBF6AE09DD0; // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Mastery_32_6E8B50B847CAA10796C547931DA5B71F;       // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Accuracy_33_75BBC9AE40CCAAD4B40F23983475A0D8;      // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Speed_36_FC80E04941CF184AEFA369950419F557;         // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CriticalChance_18_29F8B957479C0D953C447E95FF3492E4; // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Chroma_34_6C260F8F48BCE6E6C43C568C38941012;        // 0x0030(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Experience_35_BEE8A0DD4ED59C6C6782B88443AB9AE8;    // 0x0034(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FS_EnemyScalingDataLevel) == 0x000008, "Wrong alignment on FS_EnemyScalingDataLevel");
static_assert(sizeof(FS_EnemyScalingDataLevel) == 0x000038, "Wrong size on FS_EnemyScalingDataLevel");
static_assert(offsetof(FS_EnemyScalingDataLevel, Level_26_C91160174BDDE0B34E9F96AAE366C0D5) == 0x000000, "Member 'FS_EnemyScalingDataLevel::Level_26_C91160174BDDE0B34E9F96AAE366C0D5' has a wrong offset!");
static_assert(offsetof(FS_EnemyScalingDataLevel, HP_27_9B8F0EF14EBC6DBDE30E86A7FFE48646) == 0x000004, "Member 'FS_EnemyScalingDataLevel::HP_27_9B8F0EF14EBC6DBDE30E86A7FFE48646' has a wrong offset!");
static_assert(offsetof(FS_EnemyScalingDataLevel, PhysicalAttack_28_82A69E334B7A1E723084829AFCCEAA25) == 0x000008, "Member 'FS_EnemyScalingDataLevel::PhysicalAttack_28_82A69E334B7A1E723084829AFCCEAA25' has a wrong offset!");
static_assert(offsetof(FS_EnemyScalingDataLevel, PhysicalDefense_29_F610675445A2768C30612FBAB57F46DE) == 0x00000C, "Member 'FS_EnemyScalingDataLevel::PhysicalDefense_29_F610675445A2768C30612FBAB57F46DE' has a wrong offset!");
static_assert(offsetof(FS_EnemyScalingDataLevel, MagicalAttack_30_653EB84143B61538EFE2F1BE21539BC7) == 0x000010, "Member 'FS_EnemyScalingDataLevel::MagicalAttack_30_653EB84143B61538EFE2F1BE21539BC7' has a wrong offset!");
static_assert(offsetof(FS_EnemyScalingDataLevel, MagicalDefense_31_5972F1F24C89F844C3B6DEBF6AE09DD0) == 0x000014, "Member 'FS_EnemyScalingDataLevel::MagicalDefense_31_5972F1F24C89F844C3B6DEBF6AE09DD0' has a wrong offset!");
static_assert(offsetof(FS_EnemyScalingDataLevel, Mastery_32_6E8B50B847CAA10796C547931DA5B71F) == 0x000018, "Member 'FS_EnemyScalingDataLevel::Mastery_32_6E8B50B847CAA10796C547931DA5B71F' has a wrong offset!");
static_assert(offsetof(FS_EnemyScalingDataLevel, Accuracy_33_75BBC9AE40CCAAD4B40F23983475A0D8) == 0x00001C, "Member 'FS_EnemyScalingDataLevel::Accuracy_33_75BBC9AE40CCAAD4B40F23983475A0D8' has a wrong offset!");
static_assert(offsetof(FS_EnemyScalingDataLevel, Speed_36_FC80E04941CF184AEFA369950419F557) == 0x000020, "Member 'FS_EnemyScalingDataLevel::Speed_36_FC80E04941CF184AEFA369950419F557' has a wrong offset!");
static_assert(offsetof(FS_EnemyScalingDataLevel, CriticalChance_18_29F8B957479C0D953C447E95FF3492E4) == 0x000028, "Member 'FS_EnemyScalingDataLevel::CriticalChance_18_29F8B957479C0D953C447E95FF3492E4' has a wrong offset!");
static_assert(offsetof(FS_EnemyScalingDataLevel, Chroma_34_6C260F8F48BCE6E6C43C568C38941012) == 0x000030, "Member 'FS_EnemyScalingDataLevel::Chroma_34_6C260F8F48BCE6E6C43C568C38941012' has a wrong offset!");
static_assert(offsetof(FS_EnemyScalingDataLevel, Experience_35_BEE8A0DD4ED59C6C6782B88443AB9AE8) == 0x000034, "Member 'FS_EnemyScalingDataLevel::Experience_35_BEE8A0DD4ED59C6C6782B88443AB9AE8' has a wrong offset!");

}

