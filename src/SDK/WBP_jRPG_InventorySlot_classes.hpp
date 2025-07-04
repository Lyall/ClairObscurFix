﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_jRPG_InventorySlot

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_jRPG_InventorySlot.WBP_jRPG_InventorySlot_C
// 0x0048 (0x0328 - 0x02E0)
class UWBP_jRPG_InventorySlot_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       LootHighlight;                                     // 0x02E8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       HoveredInventory;                                  // 0x02F0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                                Button_InventorySlot;                              // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Fx;                                                // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_ItemIcon;                                    // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_Amount;                                  // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_ItemName;                                // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAC_jRPG_InventoryManager_C*            InventoryManagerReference;                         // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ActivateHighlightFX();
	void BndEvt__Button_InventorySlot_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_InventorySlot_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__Button_InventorySlot_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void DeactivateFX();
	void ExecuteUbergraph_WBP_jRPG_InventorySlot(int32 EntryPoint);
	void HighlightLoot();
	void OnGamepadPressed_Button_InventorySlot_();
	void UpdateItemData(int32 CurrentStackAmount, const struct FS_jRPG_Item_StaticData& ItemStaticData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_jRPG_InventorySlot_C">();
	}
	static class UWBP_jRPG_InventorySlot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_jRPG_InventorySlot_C>();
	}
};
static_assert(alignof(UWBP_jRPG_InventorySlot_C) == 0x000008, "Wrong alignment on UWBP_jRPG_InventorySlot_C");
static_assert(sizeof(UWBP_jRPG_InventorySlot_C) == 0x000328, "Wrong size on UWBP_jRPG_InventorySlot_C");
static_assert(offsetof(UWBP_jRPG_InventorySlot_C, UberGraphFrame) == 0x0002E0, "Member 'UWBP_jRPG_InventorySlot_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_jRPG_InventorySlot_C, LootHighlight) == 0x0002E8, "Member 'UWBP_jRPG_InventorySlot_C::LootHighlight' has a wrong offset!");
static_assert(offsetof(UWBP_jRPG_InventorySlot_C, HoveredInventory) == 0x0002F0, "Member 'UWBP_jRPG_InventorySlot_C::HoveredInventory' has a wrong offset!");
static_assert(offsetof(UWBP_jRPG_InventorySlot_C, Button_InventorySlot) == 0x0002F8, "Member 'UWBP_jRPG_InventorySlot_C::Button_InventorySlot' has a wrong offset!");
static_assert(offsetof(UWBP_jRPG_InventorySlot_C, Fx) == 0x000300, "Member 'UWBP_jRPG_InventorySlot_C::Fx' has a wrong offset!");
static_assert(offsetof(UWBP_jRPG_InventorySlot_C, Image_ItemIcon) == 0x000308, "Member 'UWBP_jRPG_InventorySlot_C::Image_ItemIcon' has a wrong offset!");
static_assert(offsetof(UWBP_jRPG_InventorySlot_C, TextBlock_Amount) == 0x000310, "Member 'UWBP_jRPG_InventorySlot_C::TextBlock_Amount' has a wrong offset!");
static_assert(offsetof(UWBP_jRPG_InventorySlot_C, TextBlock_ItemName) == 0x000318, "Member 'UWBP_jRPG_InventorySlot_C::TextBlock_ItemName' has a wrong offset!");
static_assert(offsetof(UWBP_jRPG_InventorySlot_C, InventoryManagerReference) == 0x000320, "Member 'UWBP_jRPG_InventorySlot_C::InventoryManagerReference' has a wrong offset!");

}

