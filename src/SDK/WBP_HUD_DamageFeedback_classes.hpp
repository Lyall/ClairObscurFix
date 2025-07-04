﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HUD_DamageFeedback

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "EElementalAffinity_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "EAttackType_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_HUD_DamageFeedback.WBP_HUD_DamageFeedback_C
// 0x00E8 (0x03C8 - 0x02E0)
class UWBP_HUD_DamageFeedback_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anim_FeedbackText;                                 // 0x02E8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_ShieldBreak;                                  // 0x02F0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_SecondFeedbackResistant;                      // 0x02F8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_SecondFeedbackWeak;                           // 0x0300(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_BasicWithBackground;                          // 0x0308(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_Basic;                                        // 0x0310(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_Critical;                                     // 0x0318(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_MainContainer;                         // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       DamageText;                                        // 0x0328(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Element_Picture;                                   // 0x0330(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_BackgroundMain;                              // 0x0338(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_BackgroundSecond;                            // 0x0340(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Shield;                                      // 0x0348(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Spike;                                             // 0x0350(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_MainFeedback;                            // 0x0358(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextBlock_ReasonFeedback;                          // 0x0360(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_SecondFeedback_Resistant;                // 0x0368(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_SecondFeedback_Weak;                     // 0x0370(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AActor*                                 Actor_Reference;                                   // 0x0378(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FSlateColor                            Color;                                             // 0x0380(0x0014)(Edit, BlueprintVisible)
	uint8                                         Pad_394[0x4];                                      // 0x0394(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_BattleDamages_C*                    BattleDamages;                                     // 0x0398(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          HasStackExpired;                                   // 0x03A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A1[0x7];                                      // 0x03A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              WidgetOffset;                                      // 0x03A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector2D                              BaseOffset;                                        // 0x03B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	struct FSlateColor UpdateColor();
	void ShowFeedbackReasonText(const class FText& Text, const struct FLinearColor& Color_0);
	struct FVector GetWorldPosition();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void LoadDamageInfo();
	void QueueEnd();
	void ExecuteUbergraph_WBP_HUD_DamageFeedback(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_HUD_DamageFeedback_C">();
	}
	static class UWBP_HUD_DamageFeedback_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_HUD_DamageFeedback_C>();
	}
};
static_assert(alignof(UWBP_HUD_DamageFeedback_C) == 0x000008, "Wrong alignment on UWBP_HUD_DamageFeedback_C");
static_assert(sizeof(UWBP_HUD_DamageFeedback_C) == 0x0003C8, "Wrong size on UWBP_HUD_DamageFeedback_C");
static_assert(offsetof(UWBP_HUD_DamageFeedback_C, UberGraphFrame) == 0x0002E0, "Member 'UWBP_HUD_DamageFeedback_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_DamageFeedback_C, Anim_FeedbackText) == 0x0002E8, "Member 'UWBP_HUD_DamageFeedback_C::Anim_FeedbackText' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_DamageFeedback_C, Anim_ShieldBreak) == 0x0002F0, "Member 'UWBP_HUD_DamageFeedback_C::Anim_ShieldBreak' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_DamageFeedback_C, Anim_SecondFeedbackResistant) == 0x0002F8, "Member 'UWBP_HUD_DamageFeedback_C::Anim_SecondFeedbackResistant' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_DamageFeedback_C, Anim_SecondFeedbackWeak) == 0x000300, "Member 'UWBP_HUD_DamageFeedback_C::Anim_SecondFeedbackWeak' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_DamageFeedback_C, Anim_BasicWithBackground) == 0x000308, "Member 'UWBP_HUD_DamageFeedback_C::Anim_BasicWithBackground' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_DamageFeedback_C, Anim_Basic) == 0x000310, "Member 'UWBP_HUD_DamageFeedback_C::Anim_Basic' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_DamageFeedback_C, Anim_Critical) == 0x000318, "Member 'UWBP_HUD_DamageFeedback_C::Anim_Critical' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_DamageFeedback_C, CanvasPanel_MainContainer) == 0x000320, "Member 'UWBP_HUD_DamageFeedback_C::CanvasPanel_MainContainer' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_DamageFeedback_C, DamageText) == 0x000328, "Member 'UWBP_HUD_DamageFeedback_C::DamageText' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_DamageFeedback_C, Element_Picture) == 0x000330, "Member 'UWBP_HUD_DamageFeedback_C::Element_Picture' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_DamageFeedback_C, Image_BackgroundMain) == 0x000338, "Member 'UWBP_HUD_DamageFeedback_C::Image_BackgroundMain' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_DamageFeedback_C, Image_BackgroundSecond) == 0x000340, "Member 'UWBP_HUD_DamageFeedback_C::Image_BackgroundSecond' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_DamageFeedback_C, Image_Shield) == 0x000348, "Member 'UWBP_HUD_DamageFeedback_C::Image_Shield' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_DamageFeedback_C, Spike) == 0x000350, "Member 'UWBP_HUD_DamageFeedback_C::Spike' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_DamageFeedback_C, TextBlock_MainFeedback) == 0x000358, "Member 'UWBP_HUD_DamageFeedback_C::TextBlock_MainFeedback' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_DamageFeedback_C, TextBlock_ReasonFeedback) == 0x000360, "Member 'UWBP_HUD_DamageFeedback_C::TextBlock_ReasonFeedback' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_DamageFeedback_C, TextBlock_SecondFeedback_Resistant) == 0x000368, "Member 'UWBP_HUD_DamageFeedback_C::TextBlock_SecondFeedback_Resistant' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_DamageFeedback_C, TextBlock_SecondFeedback_Weak) == 0x000370, "Member 'UWBP_HUD_DamageFeedback_C::TextBlock_SecondFeedback_Weak' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_DamageFeedback_C, Actor_Reference) == 0x000378, "Member 'UWBP_HUD_DamageFeedback_C::Actor_Reference' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_DamageFeedback_C, Color) == 0x000380, "Member 'UWBP_HUD_DamageFeedback_C::Color' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_DamageFeedback_C, BattleDamages) == 0x000398, "Member 'UWBP_HUD_DamageFeedback_C::BattleDamages' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_DamageFeedback_C, HasStackExpired) == 0x0003A0, "Member 'UWBP_HUD_DamageFeedback_C::HasStackExpired' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_DamageFeedback_C, WidgetOffset) == 0x0003A8, "Member 'UWBP_HUD_DamageFeedback_C::WidgetOffset' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_DamageFeedback_C, BaseOffset) == 0x0003B8, "Member 'UWBP_HUD_DamageFeedback_C::BaseOffset' has a wrong offset!");

}

