﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_WeaponTooltip

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "EWeaponQuality_structs.hpp"
#include "CommonUI_classes.hpp"
#include "EAttributeScalingGrade_structs.hpp"
#include "UMG_structs.hpp"
#include "ECharacterAttribute_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_WeaponTooltip.WBP_WeaponTooltip_C
// 0x0070 (0x0378 - 0x0308)
class UWBP_WeaponTooltip_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0308(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anim_UpgradeStatePreview;                          // 0x0310(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_UpgradeStateCurrent;                          // 0x0318(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_TriggerUpgrade;                               // 0x0320(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonLazyImage*                       Background;                                        // 0x0328(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                           BackgroundStainRetainer;                           // 0x0330(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNiagaraSystemWidget*                   NiagaraSystemWidget_Explosion;                     // 0x0338(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_WeaponAttackType_C*                WBP_WeaponAttackType;                              // 0x0340(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_WeaponPower_C*                     WBP_WeaponPower;                                   // 0x0348(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_WeaponIcon_C*                      WeaponIcon;                                        // 0x0350(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_WeaponLevelTooltip_C*              WeaponLevelTooltip;                                // 0x0358(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDynamicEntryBox*                       WeaponLuminaList;                                  // 0x0360(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_HeadingText_C*                     WeaponName;                                        // 0x0368(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDynamicEntryBox*                       WeaponScalingList;                                 // 0x0370(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SequenceEvent__ENTRYPOINTWBP_WeaponTooltip(class UOverlay* Overlay_25);
	void ShowUpgrade(bool IsUpgrade);
	void LoadWeaponAttributeScalings(class UBP_ItemInstance_Gear_Weapon_C* InWeaponInstance, const TMap<ECharacterAttribute, int32>& InWeaponScalingDamageByAttribute);
	void LoadWeaponLuminas(const struct FS_WeaponDefinition& InWeaponDefinition, EWeaponQuality InCurrentQuality);
	void LoadWeapon(class UBP_ItemInstance_Gear_Weapon_C* InWeaponInstance, class UBP_CharacterData_C* InCharacterData);
	void Event_Explosion(class UOverlay* Overlay_25);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_WBP_WeaponTooltip(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_WeaponTooltip_C">();
	}
	static class UWBP_WeaponTooltip_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_WeaponTooltip_C>();
	}
};
static_assert(alignof(UWBP_WeaponTooltip_C) == 0x000008, "Wrong alignment on UWBP_WeaponTooltip_C");
static_assert(sizeof(UWBP_WeaponTooltip_C) == 0x000378, "Wrong size on UWBP_WeaponTooltip_C");
static_assert(offsetof(UWBP_WeaponTooltip_C, UberGraphFrame) == 0x000308, "Member 'UWBP_WeaponTooltip_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_WeaponTooltip_C, Anim_UpgradeStatePreview) == 0x000310, "Member 'UWBP_WeaponTooltip_C::Anim_UpgradeStatePreview' has a wrong offset!");
static_assert(offsetof(UWBP_WeaponTooltip_C, Anim_UpgradeStateCurrent) == 0x000318, "Member 'UWBP_WeaponTooltip_C::Anim_UpgradeStateCurrent' has a wrong offset!");
static_assert(offsetof(UWBP_WeaponTooltip_C, Anim_TriggerUpgrade) == 0x000320, "Member 'UWBP_WeaponTooltip_C::Anim_TriggerUpgrade' has a wrong offset!");
static_assert(offsetof(UWBP_WeaponTooltip_C, Background) == 0x000328, "Member 'UWBP_WeaponTooltip_C::Background' has a wrong offset!");
static_assert(offsetof(UWBP_WeaponTooltip_C, BackgroundStainRetainer) == 0x000330, "Member 'UWBP_WeaponTooltip_C::BackgroundStainRetainer' has a wrong offset!");
static_assert(offsetof(UWBP_WeaponTooltip_C, NiagaraSystemWidget_Explosion) == 0x000338, "Member 'UWBP_WeaponTooltip_C::NiagaraSystemWidget_Explosion' has a wrong offset!");
static_assert(offsetof(UWBP_WeaponTooltip_C, WBP_WeaponAttackType) == 0x000340, "Member 'UWBP_WeaponTooltip_C::WBP_WeaponAttackType' has a wrong offset!");
static_assert(offsetof(UWBP_WeaponTooltip_C, WBP_WeaponPower) == 0x000348, "Member 'UWBP_WeaponTooltip_C::WBP_WeaponPower' has a wrong offset!");
static_assert(offsetof(UWBP_WeaponTooltip_C, WeaponIcon) == 0x000350, "Member 'UWBP_WeaponTooltip_C::WeaponIcon' has a wrong offset!");
static_assert(offsetof(UWBP_WeaponTooltip_C, WeaponLevelTooltip) == 0x000358, "Member 'UWBP_WeaponTooltip_C::WeaponLevelTooltip' has a wrong offset!");
static_assert(offsetof(UWBP_WeaponTooltip_C, WeaponLuminaList) == 0x000360, "Member 'UWBP_WeaponTooltip_C::WeaponLuminaList' has a wrong offset!");
static_assert(offsetof(UWBP_WeaponTooltip_C, WeaponName) == 0x000368, "Member 'UWBP_WeaponTooltip_C::WeaponName' has a wrong offset!");
static_assert(offsetof(UWBP_WeaponTooltip_C, WeaponScalingList) == 0x000370, "Member 'UWBP_WeaponTooltip_C::WeaponScalingList' has a wrong offset!");

}

