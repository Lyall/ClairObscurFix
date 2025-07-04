﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_UniqueMechanic_Foretell

#include "Basic.hpp"

#include "EBattleContext_structs.hpp"
#include "Engine_structs.hpp"
#include "SandFall_structs.hpp"
#include "E_UniqueMechanic_Foretell_ChargeType_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_UniqueMechanic_Foretell.WBP_UniqueMechanic_Foretell_C
// 0x0198 (0x0478 - 0x02E0)
class UWBP_UniqueMechanic_Foretell_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anim_DescTextFlare;                                // 0x02E8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_DistortFade;                                  // 0x02F0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_TurnStart;                                    // 0x02F8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_CardSwap;                                     // 0x0300(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_TwilightCharge;                               // 0x0308(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_SunCharge;                                    // 0x0310(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_MoonCharge;                                   // 0x0318(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_TwilightStateOff;                             // 0x0320(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_TwilightStateOn;                              // 0x0328(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWBP_WrappingRichText_C*                ForetellDescText;                                  // 0x0330(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNiagaraSystemWidget*                   FX_CardExplosion;                                  // 0x0338(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNiagaraSystemWidget*                   FX_FlameCardMoon;                                  // 0x0340(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNiagaraSystemWidget*                   FX_FlameCardSun;                                   // 0x0348(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNiagaraSystemWidget*                   FX_FlameCardTwilight;                              // 0x0350(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Background_Color;                            // 0x0358(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonLazyImage*                       MoonCard;                                          // 0x0360(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                           MoonCardGlow;                                      // 0x0368(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_GlowContainer_C*                   MoonChargesGlow;                                   // 0x0370(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       MoonChargesText;                                   // 0x0378(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               MoonOverlay;                                       // 0x0380(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                           RetainerBox;                                       // 0x0388(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonLazyImage*                       SunCard;                                           // 0x0390(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                           SunCardGlow;                                       // 0x0398(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_GlowContainer_C*                   SunChargesGlow;                                    // 0x03A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       SunChargesText;                                    // 0x03A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                           TwilightCardGlow;                                  // 0x03B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TwilightChargesText;                               // 0x03B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_WrappingText_C*                    TwilightTurnCounterText;                           // 0x03C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Name_UniqueMechanics_C*            WBP_Name_UniqueMechanics;                          // 0x03C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_UniqueMechanic_Foretell_Component_C* ForetellCardsMechanicComponent;                   // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          IsAppearing;                                       // 0x03D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D9[0x7];                                      // 0x03D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_BattleBuffInstance_C*               TurnLeftFeedbackBuff;                              // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TMulticastInlineDelegate<void()>              OnTwilightEngagedAnimationCompleted;               // 0x03E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         NextTwilightCharge;                                // 0x03F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3FC[0x4];                                      // 0x03FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSoundEventDataTableRowHandle          SD_Twilight_Switch;                                // 0x0400(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UMaterialInstanceDynamic*               MID_FXForetell;                                    // 0x0410(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          ShouldPlayVFXOnAppear;                             // 0x0418(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsInTwilightMode;                                  // 0x0419(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41A[0x6];                                      // 0x041A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSoundEventDataTableRowHandle          SD_Twilight_TurnStart;                             // 0x0420(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FSoundEventDataTableRowHandle          SD_Moon_Switch;                                    // 0x0430(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FSoundEventDataTableRowHandle          SD_Moon_TurnStart;                                 // 0x0440(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FSoundEventDataTableRowHandle          SD_Sun_Switch;                                     // 0x0450(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FSoundEventDataTableRowHandle          SD_Sun_TurnStart;                                  // 0x0460(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	E_UniqueMechanic_Foretell_ChargeType          CurrentCharge;                                     // 0x0470(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Appear();
	void BindToGameplayComponent(class UBP_UniqueMechanic_Foretell_Component_C* ForetellComponent);
	void Construct();
	void Disappear();
	void ExecuteUbergraph_WBP_UniqueMechanic_Foretell(int32 EntryPoint);
	void Finished_42876A7D434D0A443F0FCCBF3883943D();
	void Finished_D42F07C4468E346309000B876642CE05();
	void FX_FlameCardMoon_Event(class UNiagaraSystemWidget* FX_FlameCardMoon_0);
	void FX_FlameCardSun_Event(class UNiagaraSystemWidget* FX_FlameCardSun_0);
	void FX_FlameCardTwilight_Event(class UNiagaraSystemWidget* FX_FlameCardTwilight_0);
	void FX_FlameCardTwilight_Event_0(class UNiagaraSystemWidget* FX_FlameCardTwilight_0);
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void OnChargeChanged(E_UniqueMechanic_Foretell_ChargeType ChargeType, int32 NewValue, int32 PreviousValue, EBattleContext Reason);
	void OnTriggerTwilight();
	void OnTwilightDisabled();
	void OnTwilightEngaged(const TMap<E_UniqueMechanic_Foretell_ChargeType, int32>& ChargeState);
	void PreConstruct(bool IsDesignTime);
	void SequenceEvent__ENTRYPOINTWBP_UniqueMechanic_Foretell();
	void SequenceEvent__ENTRYPOINTWBP_UniqueMechanic_Foretell_0(class UNiagaraSystemWidget* FX_FlameCardMoon_0);
	void SequenceEvent__ENTRYPOINTWBP_UniqueMechanic_Foretell_1(class UNiagaraSystemWidget* FX_FlameCardSun_0);
	void SequenceEvent__ENTRYPOINTWBP_UniqueMechanic_Foretell_2(class UNiagaraSystemWidget* FX_FlameCardTwilight_0);
	void SequenceEvent__ENTRYPOINTWBP_UniqueMechanic_Foretell_3(class UNiagaraSystemWidget* FX_FlameCardTwilight_0);
	void SetCurrentCharge(E_UniqueMechanic_Foretell_ChargeType Charge);
	void SetFXChargeParameters(E_UniqueMechanic_Foretell_ChargeType Charge);
	void UpdateTwilightText();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_UniqueMechanic_Foretell_C">();
	}
	static class UWBP_UniqueMechanic_Foretell_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_UniqueMechanic_Foretell_C>();
	}
};
static_assert(alignof(UWBP_UniqueMechanic_Foretell_C) == 0x000008, "Wrong alignment on UWBP_UniqueMechanic_Foretell_C");
static_assert(sizeof(UWBP_UniqueMechanic_Foretell_C) == 0x000478, "Wrong size on UWBP_UniqueMechanic_Foretell_C");
static_assert(offsetof(UWBP_UniqueMechanic_Foretell_C, UberGraphFrame) == 0x0002E0, "Member 'UWBP_UniqueMechanic_Foretell_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_UniqueMechanic_Foretell_C, Anim_DescTextFlare) == 0x0002E8, "Member 'UWBP_UniqueMechanic_Foretell_C::Anim_DescTextFlare' has a wrong offset!");
static_assert(offsetof(UWBP_UniqueMechanic_Foretell_C, Anim_DistortFade) == 0x0002F0, "Member 'UWBP_UniqueMechanic_Foretell_C::Anim_DistortFade' has a wrong offset!");
static_assert(offsetof(UWBP_UniqueMechanic_Foretell_C, Anim_TurnStart) == 0x0002F8, "Member 'UWBP_UniqueMechanic_Foretell_C::Anim_TurnStart' has a wrong offset!");
static_assert(offsetof(UWBP_UniqueMechanic_Foretell_C, Anim_CardSwap) == 0x000300, "Member 'UWBP_UniqueMechanic_Foretell_C::Anim_CardSwap' has a wrong offset!");
static_assert(offsetof(UWBP_UniqueMechanic_Foretell_C, Anim_TwilightCharge) == 0x000308, "Member 'UWBP_UniqueMechanic_Foretell_C::Anim_TwilightCharge' has a wrong offset!");
static_assert(offsetof(UWBP_UniqueMechanic_Foretell_C, Anim_SunCharge) == 0x000310, "Member 'UWBP_UniqueMechanic_Foretell_C::Anim_SunCharge' has a wrong offset!");
static_assert(offsetof(UWBP_UniqueMechanic_Foretell_C, Anim_MoonCharge) == 0x000318, "Member 'UWBP_UniqueMechanic_Foretell_C::Anim_MoonCharge' has a wrong offset!");
static_assert(offsetof(UWBP_UniqueMechanic_Foretell_C, Anim_TwilightStateOff) == 0x000320, "Member 'UWBP_UniqueMechanic_Foretell_C::Anim_TwilightStateOff' has a wrong offset!");
static_assert(offsetof(UWBP_UniqueMechanic_Foretell_C, Anim_TwilightStateOn) == 0x000328, "Member 'UWBP_UniqueMechanic_Foretell_C::Anim_TwilightStateOn' has a wrong offset!");
static_assert(offsetof(UWBP_UniqueMechanic_Foretell_C, ForetellDescText) == 0x000330, "Member 'UWBP_UniqueMechanic_Foretell_C::ForetellDescText' has a wrong offset!");
static_assert(offsetof(UWBP_UniqueMechanic_Foretell_C, FX_CardExplosion) == 0x000338, "Member 'UWBP_UniqueMechanic_Foretell_C::FX_CardExplosion' has a wrong offset!");
static_assert(offsetof(UWBP_UniqueMechanic_Foretell_C, FX_FlameCardMoon) == 0x000340, "Member 'UWBP_UniqueMechanic_Foretell_C::FX_FlameCardMoon' has a wrong offset!");
static_assert(offsetof(UWBP_UniqueMechanic_Foretell_C, FX_FlameCardSun) == 0x000348, "Member 'UWBP_UniqueMechanic_Foretell_C::FX_FlameCardSun' has a wrong offset!");
static_assert(offsetof(UWBP_UniqueMechanic_Foretell_C, FX_FlameCardTwilight) == 0x000350, "Member 'UWBP_UniqueMechanic_Foretell_C::FX_FlameCardTwilight' has a wrong offset!");
static_assert(offsetof(UWBP_UniqueMechanic_Foretell_C, Image_Background_Color) == 0x000358, "Member 'UWBP_UniqueMechanic_Foretell_C::Image_Background_Color' has a wrong offset!");
static_assert(offsetof(UWBP_UniqueMechanic_Foretell_C, MoonCard) == 0x000360, "Member 'UWBP_UniqueMechanic_Foretell_C::MoonCard' has a wrong offset!");
static_assert(offsetof(UWBP_UniqueMechanic_Foretell_C, MoonCardGlow) == 0x000368, "Member 'UWBP_UniqueMechanic_Foretell_C::MoonCardGlow' has a wrong offset!");
static_assert(offsetof(UWBP_UniqueMechanic_Foretell_C, MoonChargesGlow) == 0x000370, "Member 'UWBP_UniqueMechanic_Foretell_C::MoonChargesGlow' has a wrong offset!");
static_assert(offsetof(UWBP_UniqueMechanic_Foretell_C, MoonChargesText) == 0x000378, "Member 'UWBP_UniqueMechanic_Foretell_C::MoonChargesText' has a wrong offset!");
static_assert(offsetof(UWBP_UniqueMechanic_Foretell_C, MoonOverlay) == 0x000380, "Member 'UWBP_UniqueMechanic_Foretell_C::MoonOverlay' has a wrong offset!");
static_assert(offsetof(UWBP_UniqueMechanic_Foretell_C, RetainerBox) == 0x000388, "Member 'UWBP_UniqueMechanic_Foretell_C::RetainerBox' has a wrong offset!");
static_assert(offsetof(UWBP_UniqueMechanic_Foretell_C, SunCard) == 0x000390, "Member 'UWBP_UniqueMechanic_Foretell_C::SunCard' has a wrong offset!");
static_assert(offsetof(UWBP_UniqueMechanic_Foretell_C, SunCardGlow) == 0x000398, "Member 'UWBP_UniqueMechanic_Foretell_C::SunCardGlow' has a wrong offset!");
static_assert(offsetof(UWBP_UniqueMechanic_Foretell_C, SunChargesGlow) == 0x0003A0, "Member 'UWBP_UniqueMechanic_Foretell_C::SunChargesGlow' has a wrong offset!");
static_assert(offsetof(UWBP_UniqueMechanic_Foretell_C, SunChargesText) == 0x0003A8, "Member 'UWBP_UniqueMechanic_Foretell_C::SunChargesText' has a wrong offset!");
static_assert(offsetof(UWBP_UniqueMechanic_Foretell_C, TwilightCardGlow) == 0x0003B0, "Member 'UWBP_UniqueMechanic_Foretell_C::TwilightCardGlow' has a wrong offset!");
static_assert(offsetof(UWBP_UniqueMechanic_Foretell_C, TwilightChargesText) == 0x0003B8, "Member 'UWBP_UniqueMechanic_Foretell_C::TwilightChargesText' has a wrong offset!");
static_assert(offsetof(UWBP_UniqueMechanic_Foretell_C, TwilightTurnCounterText) == 0x0003C0, "Member 'UWBP_UniqueMechanic_Foretell_C::TwilightTurnCounterText' has a wrong offset!");
static_assert(offsetof(UWBP_UniqueMechanic_Foretell_C, WBP_Name_UniqueMechanics) == 0x0003C8, "Member 'UWBP_UniqueMechanic_Foretell_C::WBP_Name_UniqueMechanics' has a wrong offset!");
static_assert(offsetof(UWBP_UniqueMechanic_Foretell_C, ForetellCardsMechanicComponent) == 0x0003D0, "Member 'UWBP_UniqueMechanic_Foretell_C::ForetellCardsMechanicComponent' has a wrong offset!");
static_assert(offsetof(UWBP_UniqueMechanic_Foretell_C, IsAppearing) == 0x0003D8, "Member 'UWBP_UniqueMechanic_Foretell_C::IsAppearing' has a wrong offset!");
static_assert(offsetof(UWBP_UniqueMechanic_Foretell_C, TurnLeftFeedbackBuff) == 0x0003E0, "Member 'UWBP_UniqueMechanic_Foretell_C::TurnLeftFeedbackBuff' has a wrong offset!");
static_assert(offsetof(UWBP_UniqueMechanic_Foretell_C, OnTwilightEngagedAnimationCompleted) == 0x0003E8, "Member 'UWBP_UniqueMechanic_Foretell_C::OnTwilightEngagedAnimationCompleted' has a wrong offset!");
static_assert(offsetof(UWBP_UniqueMechanic_Foretell_C, NextTwilightCharge) == 0x0003F8, "Member 'UWBP_UniqueMechanic_Foretell_C::NextTwilightCharge' has a wrong offset!");
static_assert(offsetof(UWBP_UniqueMechanic_Foretell_C, SD_Twilight_Switch) == 0x000400, "Member 'UWBP_UniqueMechanic_Foretell_C::SD_Twilight_Switch' has a wrong offset!");
static_assert(offsetof(UWBP_UniqueMechanic_Foretell_C, MID_FXForetell) == 0x000410, "Member 'UWBP_UniqueMechanic_Foretell_C::MID_FXForetell' has a wrong offset!");
static_assert(offsetof(UWBP_UniqueMechanic_Foretell_C, ShouldPlayVFXOnAppear) == 0x000418, "Member 'UWBP_UniqueMechanic_Foretell_C::ShouldPlayVFXOnAppear' has a wrong offset!");
static_assert(offsetof(UWBP_UniqueMechanic_Foretell_C, IsInTwilightMode) == 0x000419, "Member 'UWBP_UniqueMechanic_Foretell_C::IsInTwilightMode' has a wrong offset!");
static_assert(offsetof(UWBP_UniqueMechanic_Foretell_C, SD_Twilight_TurnStart) == 0x000420, "Member 'UWBP_UniqueMechanic_Foretell_C::SD_Twilight_TurnStart' has a wrong offset!");
static_assert(offsetof(UWBP_UniqueMechanic_Foretell_C, SD_Moon_Switch) == 0x000430, "Member 'UWBP_UniqueMechanic_Foretell_C::SD_Moon_Switch' has a wrong offset!");
static_assert(offsetof(UWBP_UniqueMechanic_Foretell_C, SD_Moon_TurnStart) == 0x000440, "Member 'UWBP_UniqueMechanic_Foretell_C::SD_Moon_TurnStart' has a wrong offset!");
static_assert(offsetof(UWBP_UniqueMechanic_Foretell_C, SD_Sun_Switch) == 0x000450, "Member 'UWBP_UniqueMechanic_Foretell_C::SD_Sun_Switch' has a wrong offset!");
static_assert(offsetof(UWBP_UniqueMechanic_Foretell_C, SD_Sun_TurnStart) == 0x000460, "Member 'UWBP_UniqueMechanic_Foretell_C::SD_Sun_TurnStart' has a wrong offset!");
static_assert(offsetof(UWBP_UniqueMechanic_Foretell_C, CurrentCharge) == 0x000470, "Member 'UWBP_UniqueMechanic_Foretell_C::CurrentCharge' has a wrong offset!");

}

