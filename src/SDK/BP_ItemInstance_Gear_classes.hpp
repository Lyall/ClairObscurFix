﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ItemInstance_Gear

#include "Basic.hpp"

#include "BP_ItemInstance_Base_classes.hpp"
#include "E_jRPG_StatType_structs.hpp"
#include "EWeaponQuality_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ItemInstance_Gear.BP_ItemInstance_Gear_C
// 0x00A8 (0x0220 - 0x0178)
class UBP_ItemInstance_Gear_C : public UBP_ItemInstance_Base_C
{
public:
	TMap<E_jRPG_StatType, double>                 CurrentStats;                                      // 0x0178(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         CurrentLevel;                                      // 0x01C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1CC[0x4];                                      // 0x01CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<E_jRPG_StatType, double>                 BaseStatsMultipliers;                              // 0x01D0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ChangeLevel(int32 NewLevel, const class FString& DebugReason);
	void ChangeLevelWithLootContext(const struct FS_LootContext& LootContext, const class FString& DebugReason);
	class UBP_ItemInstance_Gear_C* CreateCopy();
	void GenerateItem(struct FS_jRPG_Item_StaticData& ItemStaticItem, struct FS_LootContext& LootContext, class UBP_GeneratedItemInfo_Base_C** GeneratedItemInfo);
	TMap<E_jRPG_StatType, double> GetBaseStatsMultipliers();
	int32 GetChromaValue();
	int32 GetCurrentLevel();
	void GetCurrentQuality(EWeaponQuality* Quality);
	void GetCurrentStats(TMap<E_jRPG_StatType, double>* CurrentStats_0);
	class UClass* GetGearGeneratedItemClass();
	class UDataTable* GetScalingDataTable();
	void GetStatBaseValue();
	void GetUnlockedPassiveEffectsIDs(TArray<class FName>* PassiveEffectIDs);
	void LoadBaseStatsMultipliers();
	void LoadItemDefinition();
	void LoadState(const struct FS_WeaponInstanceHandle& SaveData);
	void MergeItem(class UBP_ItemInstance_Base_C* OtherItemInstance);
	void RefreshCurrentGearStats();
	void SaveState(const struct FS_WeaponInstanceHandle& SaveData);
	void SetBaseStatsMultiplier(const E_jRPG_StatType Stat, const double Value);
	void SetCurrentStatValue(const E_jRPG_StatType StatType, const double& Value, const class FString& Reason);
	void TryUpgradeLevel(int32 NewLevel, bool* HasUpgraded);
	void UpgradeLevel(const class FString& DebugReason);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ItemInstance_Gear_C">();
	}
	static class UBP_ItemInstance_Gear_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ItemInstance_Gear_C>();
	}
};
static_assert(alignof(UBP_ItemInstance_Gear_C) == 0x000008, "Wrong alignment on UBP_ItemInstance_Gear_C");
static_assert(sizeof(UBP_ItemInstance_Gear_C) == 0x000220, "Wrong size on UBP_ItemInstance_Gear_C");
static_assert(offsetof(UBP_ItemInstance_Gear_C, CurrentStats) == 0x000178, "Member 'UBP_ItemInstance_Gear_C::CurrentStats' has a wrong offset!");
static_assert(offsetof(UBP_ItemInstance_Gear_C, CurrentLevel) == 0x0001C8, "Member 'UBP_ItemInstance_Gear_C::CurrentLevel' has a wrong offset!");
static_assert(offsetof(UBP_ItemInstance_Gear_C, BaseStatsMultipliers) == 0x0001D0, "Member 'UBP_ItemInstance_Gear_C::BaseStatsMultipliers' has a wrong offset!");

}

