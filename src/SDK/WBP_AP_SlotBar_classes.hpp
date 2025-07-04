﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_AP_SlotBar

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_AP_SlotBar.WBP_AP_SlotBar_C
// 0x0078 (0x0358 - 0x02E0)
class UWBP_AP_SlotBar_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anim_Revive;                                       // 0x02E8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_Dead;                                         // 0x02F0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_Appear;                                       // 0x02F8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_ActionPointContainer;                  // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_ActionPointBackground;                       // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_ActionPointDot_1;                            // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_ActionPointDot_2;                            // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_ActionPointDot_3;                            // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_ActionPointDot_4;                            // 0x0328(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_ActionPointDot_5;                            // 0x0330(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_ActionPointDot_6;                            // 0x0338(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_ActionPointDot_7;                            // 0x0340(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_ActionPointDot_8;                            // 0x0348(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_ActionPointDot_9;                            // 0x0350(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_AP_SlotBar(int32 EntryPoint);
	void SetCurrentValue(int32 Count);
	void SetDead();
	void SetRevive();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_AP_SlotBar_C">();
	}
	static class UWBP_AP_SlotBar_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_AP_SlotBar_C>();
	}
};
static_assert(alignof(UWBP_AP_SlotBar_C) == 0x000008, "Wrong alignment on UWBP_AP_SlotBar_C");
static_assert(sizeof(UWBP_AP_SlotBar_C) == 0x000358, "Wrong size on UWBP_AP_SlotBar_C");
static_assert(offsetof(UWBP_AP_SlotBar_C, UberGraphFrame) == 0x0002E0, "Member 'UWBP_AP_SlotBar_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_AP_SlotBar_C, Anim_Revive) == 0x0002E8, "Member 'UWBP_AP_SlotBar_C::Anim_Revive' has a wrong offset!");
static_assert(offsetof(UWBP_AP_SlotBar_C, Anim_Dead) == 0x0002F0, "Member 'UWBP_AP_SlotBar_C::Anim_Dead' has a wrong offset!");
static_assert(offsetof(UWBP_AP_SlotBar_C, Anim_Appear) == 0x0002F8, "Member 'UWBP_AP_SlotBar_C::Anim_Appear' has a wrong offset!");
static_assert(offsetof(UWBP_AP_SlotBar_C, CanvasPanel_ActionPointContainer) == 0x000300, "Member 'UWBP_AP_SlotBar_C::CanvasPanel_ActionPointContainer' has a wrong offset!");
static_assert(offsetof(UWBP_AP_SlotBar_C, Image_ActionPointBackground) == 0x000308, "Member 'UWBP_AP_SlotBar_C::Image_ActionPointBackground' has a wrong offset!");
static_assert(offsetof(UWBP_AP_SlotBar_C, Image_ActionPointDot_1) == 0x000310, "Member 'UWBP_AP_SlotBar_C::Image_ActionPointDot_1' has a wrong offset!");
static_assert(offsetof(UWBP_AP_SlotBar_C, Image_ActionPointDot_2) == 0x000318, "Member 'UWBP_AP_SlotBar_C::Image_ActionPointDot_2' has a wrong offset!");
static_assert(offsetof(UWBP_AP_SlotBar_C, Image_ActionPointDot_3) == 0x000320, "Member 'UWBP_AP_SlotBar_C::Image_ActionPointDot_3' has a wrong offset!");
static_assert(offsetof(UWBP_AP_SlotBar_C, Image_ActionPointDot_4) == 0x000328, "Member 'UWBP_AP_SlotBar_C::Image_ActionPointDot_4' has a wrong offset!");
static_assert(offsetof(UWBP_AP_SlotBar_C, Image_ActionPointDot_5) == 0x000330, "Member 'UWBP_AP_SlotBar_C::Image_ActionPointDot_5' has a wrong offset!");
static_assert(offsetof(UWBP_AP_SlotBar_C, Image_ActionPointDot_6) == 0x000338, "Member 'UWBP_AP_SlotBar_C::Image_ActionPointDot_6' has a wrong offset!");
static_assert(offsetof(UWBP_AP_SlotBar_C, Image_ActionPointDot_7) == 0x000340, "Member 'UWBP_AP_SlotBar_C::Image_ActionPointDot_7' has a wrong offset!");
static_assert(offsetof(UWBP_AP_SlotBar_C, Image_ActionPointDot_8) == 0x000348, "Member 'UWBP_AP_SlotBar_C::Image_ActionPointDot_8' has a wrong offset!");
static_assert(offsetof(UWBP_AP_SlotBar_C, Image_ActionPointDot_9) == 0x000350, "Member 'UWBP_AP_SlotBar_C::Image_ActionPointDot_9' has a wrong offset!");

}

