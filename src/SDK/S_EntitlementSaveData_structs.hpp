﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_EntitlementSaveData

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct S_EntitlementSaveData.S_EntitlementSaveData
// 0x0010 (0x0010 - 0x0000)
struct FS_EntitlementSaveData final
{
public:
	TArray<class FName>                           AddedEntitlementIDs_3_1F3DE6A24D4C72BF5369969DCBB2555C; // 0x0000(0x0010)(Edit, BlueprintVisible)
};
static_assert(alignof(FS_EntitlementSaveData) == 0x000008, "Wrong alignment on FS_EntitlementSaveData");
static_assert(sizeof(FS_EntitlementSaveData) == 0x000010, "Wrong size on FS_EntitlementSaveData");
static_assert(offsetof(FS_EntitlementSaveData, AddedEntitlementIDs_3_1F3DE6A24D4C72BF5369969DCBB2555C) == 0x000000, "Member 'FS_EntitlementSaveData::AddedEntitlementIDs_3_1F3DE6A24D4C72BF5369969DCBB2555C' has a wrong offset!");

}

