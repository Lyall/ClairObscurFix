﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SaveSlotViewItem

#include "Basic.hpp"

#include "S_SaveSlotMetaData_structs.hpp"


namespace SDK::Params
{

// Function BP_SaveSlotViewItem.BP_SaveSlotViewItem_C.GetSlotIndex
// 0x0004 (0x0004 - 0x0000)
struct BP_SaveSlotViewItem_C_GetSlotIndex final
{
public:
	int32                                         SlotIndex_0;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SaveSlotViewItem_C_GetSlotIndex) == 0x000004, "Wrong alignment on BP_SaveSlotViewItem_C_GetSlotIndex");
static_assert(sizeof(BP_SaveSlotViewItem_C_GetSlotIndex) == 0x000004, "Wrong size on BP_SaveSlotViewItem_C_GetSlotIndex");
static_assert(offsetof(BP_SaveSlotViewItem_C_GetSlotIndex, SlotIndex_0) == 0x000000, "Member 'BP_SaveSlotViewItem_C_GetSlotIndex::SlotIndex_0' has a wrong offset!");

// Function BP_SaveSlotViewItem.BP_SaveSlotViewItem_C.GetSaveMetaData
// 0x0030 (0x0030 - 0x0000)
struct BP_SaveSlotViewItem_C_GetSaveMetaData final
{
public:
	struct FS_SaveSlotMetaData                    MetaData;                                          // 0x0000(0x0030)(Parm, OutParm, HasGetValueTypeHash)
};
static_assert(alignof(BP_SaveSlotViewItem_C_GetSaveMetaData) == 0x000008, "Wrong alignment on BP_SaveSlotViewItem_C_GetSaveMetaData");
static_assert(sizeof(BP_SaveSlotViewItem_C_GetSaveMetaData) == 0x000030, "Wrong size on BP_SaveSlotViewItem_C_GetSaveMetaData");
static_assert(offsetof(BP_SaveSlotViewItem_C_GetSaveMetaData, MetaData) == 0x000000, "Member 'BP_SaveSlotViewItem_C_GetSaveMetaData::MetaData' has a wrong offset!");

// Function BP_SaveSlotViewItem.BP_SaveSlotViewItem_C.GetMainSaveString
// 0x0010 (0x0010 - 0x0000)
struct BP_SaveSlotViewItem_C_GetMainSaveString final
{
public:
	class FString                                 MainSave;                                          // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SaveSlotViewItem_C_GetMainSaveString) == 0x000008, "Wrong alignment on BP_SaveSlotViewItem_C_GetMainSaveString");
static_assert(sizeof(BP_SaveSlotViewItem_C_GetMainSaveString) == 0x000010, "Wrong size on BP_SaveSlotViewItem_C_GetMainSaveString");
static_assert(offsetof(BP_SaveSlotViewItem_C_GetMainSaveString, MainSave) == 0x000000, "Member 'BP_SaveSlotViewItem_C_GetMainSaveString::MainSave' has a wrong offset!");

// Function BP_SaveSlotViewItem.BP_SaveSlotViewItem_C.GetBackupSavesStrings
// 0x0010 (0x0010 - 0x0000)
struct BP_SaveSlotViewItem_C_GetBackupSavesStrings final
{
public:
	TArray<class FString>                         BackupSaves;                                       // 0x0000(0x0010)(Parm, OutParm)
};
static_assert(alignof(BP_SaveSlotViewItem_C_GetBackupSavesStrings) == 0x000008, "Wrong alignment on BP_SaveSlotViewItem_C_GetBackupSavesStrings");
static_assert(sizeof(BP_SaveSlotViewItem_C_GetBackupSavesStrings) == 0x000010, "Wrong size on BP_SaveSlotViewItem_C_GetBackupSavesStrings");
static_assert(offsetof(BP_SaveSlotViewItem_C_GetBackupSavesStrings, BackupSaves) == 0x000000, "Member 'BP_SaveSlotViewItem_C_GetBackupSavesStrings::BackupSaves' has a wrong offset!");

}

