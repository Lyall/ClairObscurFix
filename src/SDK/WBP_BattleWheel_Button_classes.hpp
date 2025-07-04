﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_BattleWheel_Button

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"
#include "S_InputBindingParameters_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_BattleWheel_Button.WBP_BattleWheel_Button_C
// 0x0140 (0x0570 - 0x0430)
class UWBP_BattleWheel_Button_C final : public UCommonActivatableWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0430(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anim_Disappear;                                    // 0x0438(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_Clicked;                                      // 0x0440(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_Appear;                                       // 0x0448(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Border;                                            // 0x0450(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                ButtonOverlay;                                     // 0x0458(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x0460(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonLazyImage*                       ElementIcon;                                       // 0x0468(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               ElementIconOverlay;                                // 0x0470(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Circle;                                      // 0x0478(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Circle_2;                                    // 0x0480(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_CircleDot;                                   // 0x0488(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_DirtText;                                    // 0x0490(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Spike;                                       // 0x0498(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_HeadingText_C*                     InputText;                                         // 0x04A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             NamedSlot_Title;                                   // 0x04A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             NamedSlot_TopOverlay;                              // 0x04B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNiagaraSystemWidget*                   NiagaraSystemWidget_Appear;                        // 0x04B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNiagaraSystemWidget*                   NiagaraSystemWidget_Background;                    // 0x04C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_BattleWheelButton_Aim_Var5_C*      WBP_Aim_Child_BW_Background_Var5;                  // 0x04C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_BattleWheelButton_Attack_Var4_C*   WBP_Attack_Child_BW_Background_Var4;               // 0x04D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_BattleWheelButton_Background_TRAILER_AIM_C* WBP_BattleWheelButton_Background_TRAILER_AIM; // 0x04D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ButtonBinding_C*                   WBP_ButtonBinding_BattleButton;                    // 0x04E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_BattleWheelButton_Gradient_Var1_C* WBP_Gradient_Child_BW_Background_Var1;             // 0x04E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_BattleWheelButton_Items_Var2_C*    WBP_Items_Child_BW_Background_Var2;                // 0x04F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Niagara_SlowParticules_C*          WBP_Niagara_SlowParticules_Overcharged;            // 0x04F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_BattleWheelButton_Skills_Var3_C*   WBP_Skills_Child_BW_Background_Var3;               // 0x0500(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_Background;                         // 0x0508(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_DirtText;                           // 0x0510(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   CustomButtonText;                                  // 0x0518(0x0010)(Edit, BlueprintVisible)
	double                                        FXAlpha;                                           // 0x0528(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	TMulticastInlineDelegate<void(class UWBP_BattleWheel_Button_C* ButtonWidget)> OnButtonClicked;   // 0x0530(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FS_InputBindingParameters              ButtonBindingParameters;                           // 0x0540(0x0028)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	bool                                          WasClicked;                                        // 0x0568(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          TRAILER_Aim;                                       // 0x0569(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PreventClick;                                      // 0x056A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ActivateWidgetWithDelay(float Duration);
	void BndEvt__WBP_BattleWheel_Button_ButtonOverlay_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WBP_BattleWheel_Button_WBP_ButtonBinding_BattleButton_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature(class UWBP_ButtonBinding_C* PromptWidget);
	void BP_OnActivated();
	void BP_OnDeactivated();
	void DeactivateWidgetOrCancelPendingActivation();
	void ExecuteUbergraph_WBP_BattleWheel_Button(int32 EntryPoint);
	void Finished_C0F123FD4DD1D6BFB199DDA0E0BDDE73();
	void NiagaraSystemWidget_Appear_Event(class UNiagaraSystemWidget* NiagaraSystemWidget_Appear_0);
	void OnActivationTimerComplete();
	void OnClickedAnimationFinished();
	void PreConstruct(bool IsDesignTime);
	void SequenceEvent__ENTRYPOINTWBP_BattleWheel_Button(class UNiagaraSystemWidget* NiagaraSystemWidget_Appear_0);
	void SetButtonPrevented(bool Prevented);
	void SetFXAlpha(double NewValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_BattleWheel_Button_C">();
	}
	static class UWBP_BattleWheel_Button_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_BattleWheel_Button_C>();
	}
};
static_assert(alignof(UWBP_BattleWheel_Button_C) == 0x000008, "Wrong alignment on UWBP_BattleWheel_Button_C");
static_assert(sizeof(UWBP_BattleWheel_Button_C) == 0x000570, "Wrong size on UWBP_BattleWheel_Button_C");
static_assert(offsetof(UWBP_BattleWheel_Button_C, UberGraphFrame) == 0x000430, "Member 'UWBP_BattleWheel_Button_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_BattleWheel_Button_C, Anim_Disappear) == 0x000438, "Member 'UWBP_BattleWheel_Button_C::Anim_Disappear' has a wrong offset!");
static_assert(offsetof(UWBP_BattleWheel_Button_C, Anim_Clicked) == 0x000440, "Member 'UWBP_BattleWheel_Button_C::Anim_Clicked' has a wrong offset!");
static_assert(offsetof(UWBP_BattleWheel_Button_C, Anim_Appear) == 0x000448, "Member 'UWBP_BattleWheel_Button_C::Anim_Appear' has a wrong offset!");
static_assert(offsetof(UWBP_BattleWheel_Button_C, Border) == 0x000450, "Member 'UWBP_BattleWheel_Button_C::Border' has a wrong offset!");
static_assert(offsetof(UWBP_BattleWheel_Button_C, ButtonOverlay) == 0x000458, "Member 'UWBP_BattleWheel_Button_C::ButtonOverlay' has a wrong offset!");
static_assert(offsetof(UWBP_BattleWheel_Button_C, CanvasPanel_0) == 0x000460, "Member 'UWBP_BattleWheel_Button_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UWBP_BattleWheel_Button_C, ElementIcon) == 0x000468, "Member 'UWBP_BattleWheel_Button_C::ElementIcon' has a wrong offset!");
static_assert(offsetof(UWBP_BattleWheel_Button_C, ElementIconOverlay) == 0x000470, "Member 'UWBP_BattleWheel_Button_C::ElementIconOverlay' has a wrong offset!");
static_assert(offsetof(UWBP_BattleWheel_Button_C, Image_Circle) == 0x000478, "Member 'UWBP_BattleWheel_Button_C::Image_Circle' has a wrong offset!");
static_assert(offsetof(UWBP_BattleWheel_Button_C, Image_Circle_2) == 0x000480, "Member 'UWBP_BattleWheel_Button_C::Image_Circle_2' has a wrong offset!");
static_assert(offsetof(UWBP_BattleWheel_Button_C, Image_CircleDot) == 0x000488, "Member 'UWBP_BattleWheel_Button_C::Image_CircleDot' has a wrong offset!");
static_assert(offsetof(UWBP_BattleWheel_Button_C, Image_DirtText) == 0x000490, "Member 'UWBP_BattleWheel_Button_C::Image_DirtText' has a wrong offset!");
static_assert(offsetof(UWBP_BattleWheel_Button_C, Image_Spike) == 0x000498, "Member 'UWBP_BattleWheel_Button_C::Image_Spike' has a wrong offset!");
static_assert(offsetof(UWBP_BattleWheel_Button_C, InputText) == 0x0004A0, "Member 'UWBP_BattleWheel_Button_C::InputText' has a wrong offset!");
static_assert(offsetof(UWBP_BattleWheel_Button_C, NamedSlot_Title) == 0x0004A8, "Member 'UWBP_BattleWheel_Button_C::NamedSlot_Title' has a wrong offset!");
static_assert(offsetof(UWBP_BattleWheel_Button_C, NamedSlot_TopOverlay) == 0x0004B0, "Member 'UWBP_BattleWheel_Button_C::NamedSlot_TopOverlay' has a wrong offset!");
static_assert(offsetof(UWBP_BattleWheel_Button_C, NiagaraSystemWidget_Appear) == 0x0004B8, "Member 'UWBP_BattleWheel_Button_C::NiagaraSystemWidget_Appear' has a wrong offset!");
static_assert(offsetof(UWBP_BattleWheel_Button_C, NiagaraSystemWidget_Background) == 0x0004C0, "Member 'UWBP_BattleWheel_Button_C::NiagaraSystemWidget_Background' has a wrong offset!");
static_assert(offsetof(UWBP_BattleWheel_Button_C, WBP_Aim_Child_BW_Background_Var5) == 0x0004C8, "Member 'UWBP_BattleWheel_Button_C::WBP_Aim_Child_BW_Background_Var5' has a wrong offset!");
static_assert(offsetof(UWBP_BattleWheel_Button_C, WBP_Attack_Child_BW_Background_Var4) == 0x0004D0, "Member 'UWBP_BattleWheel_Button_C::WBP_Attack_Child_BW_Background_Var4' has a wrong offset!");
static_assert(offsetof(UWBP_BattleWheel_Button_C, WBP_BattleWheelButton_Background_TRAILER_AIM) == 0x0004D8, "Member 'UWBP_BattleWheel_Button_C::WBP_BattleWheelButton_Background_TRAILER_AIM' has a wrong offset!");
static_assert(offsetof(UWBP_BattleWheel_Button_C, WBP_ButtonBinding_BattleButton) == 0x0004E0, "Member 'UWBP_BattleWheel_Button_C::WBP_ButtonBinding_BattleButton' has a wrong offset!");
static_assert(offsetof(UWBP_BattleWheel_Button_C, WBP_Gradient_Child_BW_Background_Var1) == 0x0004E8, "Member 'UWBP_BattleWheel_Button_C::WBP_Gradient_Child_BW_Background_Var1' has a wrong offset!");
static_assert(offsetof(UWBP_BattleWheel_Button_C, WBP_Items_Child_BW_Background_Var2) == 0x0004F0, "Member 'UWBP_BattleWheel_Button_C::WBP_Items_Child_BW_Background_Var2' has a wrong offset!");
static_assert(offsetof(UWBP_BattleWheel_Button_C, WBP_Niagara_SlowParticules_Overcharged) == 0x0004F8, "Member 'UWBP_BattleWheel_Button_C::WBP_Niagara_SlowParticules_Overcharged' has a wrong offset!");
static_assert(offsetof(UWBP_BattleWheel_Button_C, WBP_Skills_Child_BW_Background_Var3) == 0x000500, "Member 'UWBP_BattleWheel_Button_C::WBP_Skills_Child_BW_Background_Var3' has a wrong offset!");
static_assert(offsetof(UWBP_BattleWheel_Button_C, WidgetSwitcher_Background) == 0x000508, "Member 'UWBP_BattleWheel_Button_C::WidgetSwitcher_Background' has a wrong offset!");
static_assert(offsetof(UWBP_BattleWheel_Button_C, WidgetSwitcher_DirtText) == 0x000510, "Member 'UWBP_BattleWheel_Button_C::WidgetSwitcher_DirtText' has a wrong offset!");
static_assert(offsetof(UWBP_BattleWheel_Button_C, CustomButtonText) == 0x000518, "Member 'UWBP_BattleWheel_Button_C::CustomButtonText' has a wrong offset!");
static_assert(offsetof(UWBP_BattleWheel_Button_C, FXAlpha) == 0x000528, "Member 'UWBP_BattleWheel_Button_C::FXAlpha' has a wrong offset!");
static_assert(offsetof(UWBP_BattleWheel_Button_C, OnButtonClicked) == 0x000530, "Member 'UWBP_BattleWheel_Button_C::OnButtonClicked' has a wrong offset!");
static_assert(offsetof(UWBP_BattleWheel_Button_C, ButtonBindingParameters) == 0x000540, "Member 'UWBP_BattleWheel_Button_C::ButtonBindingParameters' has a wrong offset!");
static_assert(offsetof(UWBP_BattleWheel_Button_C, WasClicked) == 0x000568, "Member 'UWBP_BattleWheel_Button_C::WasClicked' has a wrong offset!");
static_assert(offsetof(UWBP_BattleWheel_Button_C, TRAILER_Aim) == 0x000569, "Member 'UWBP_BattleWheel_Button_C::TRAILER_Aim' has a wrong offset!");
static_assert(offsetof(UWBP_BattleWheel_Button_C, PreventClick) == 0x00056A, "Member 'UWBP_BattleWheel_Button_C::PreventClick' has a wrong offset!");

}

