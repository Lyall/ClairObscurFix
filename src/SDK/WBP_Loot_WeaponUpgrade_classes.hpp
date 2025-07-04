﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Loot_WeaponUpgrade

#include "Basic.hpp"

#include "WBP_Loot_Base_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Loot_WeaponUpgrade.WBP_Loot_WeaponUpgrade_C
// 0x0028 (0x0480 - 0x0458)
class UWBP_Loot_WeaponUpgrade_C final : public UWBP_Loot_Base_C
{
public:
	class UCommonLazyImage*                       ArrowIcon;                                         // 0x0458(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_WeaponIcon_C*                      WeaponIcon;                                        // 0x0460(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_HeadingText_C*                     WeaponName;                                        // 0x0468(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_WeaponLevelTooltip_C*              WeaponNextLevel;                                   // 0x0470(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_WeaponLevelTooltip_C*              WeaponPreviousLevel;                               // 0x0478(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetBoughtItemData(const struct FS_MerchantItemQueueData& BoughtItem, int32 Quantity);
	void SetItemData(class UBP_GeneratedItemInfo_Base_C* GeneratedItemInfo, const struct FS_LootContext& LootContext);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Loot_WeaponUpgrade_C">();
	}
	static class UWBP_Loot_WeaponUpgrade_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Loot_WeaponUpgrade_C>();
	}
};
static_assert(alignof(UWBP_Loot_WeaponUpgrade_C) == 0x000008, "Wrong alignment on UWBP_Loot_WeaponUpgrade_C");
static_assert(sizeof(UWBP_Loot_WeaponUpgrade_C) == 0x000480, "Wrong size on UWBP_Loot_WeaponUpgrade_C");
static_assert(offsetof(UWBP_Loot_WeaponUpgrade_C, ArrowIcon) == 0x000458, "Member 'UWBP_Loot_WeaponUpgrade_C::ArrowIcon' has a wrong offset!");
static_assert(offsetof(UWBP_Loot_WeaponUpgrade_C, WeaponIcon) == 0x000460, "Member 'UWBP_Loot_WeaponUpgrade_C::WeaponIcon' has a wrong offset!");
static_assert(offsetof(UWBP_Loot_WeaponUpgrade_C, WeaponName) == 0x000468, "Member 'UWBP_Loot_WeaponUpgrade_C::WeaponName' has a wrong offset!");
static_assert(offsetof(UWBP_Loot_WeaponUpgrade_C, WeaponNextLevel) == 0x000470, "Member 'UWBP_Loot_WeaponUpgrade_C::WeaponNextLevel' has a wrong offset!");
static_assert(offsetof(UWBP_Loot_WeaponUpgrade_C, WeaponPreviousLevel) == 0x000478, "Member 'UWBP_Loot_WeaponUpgrade_C::WeaponPreviousLevel' has a wrong offset!");

}

