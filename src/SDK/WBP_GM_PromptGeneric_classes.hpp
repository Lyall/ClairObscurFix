﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_GM_PromptGeneric

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SandFall_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_GM_PromptGeneric.WBP_GM_PromptGeneric_C
// 0x0080 (0x1620 - 0x15A0)
class UWBP_GM_PromptGeneric_C final : public UCommonButtonBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x15A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_TextualInputActionBinding_C*       WBP_TextualInputActionBinding;                     // 0x15A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   BottomText;                                        // 0x15B0(0x0010)(Edit, BlueprintVisible)
	TMulticastInlineDelegate<void(class UWBP_GM_PromptGeneric_C* PromptWidget)> OnPressed;           // 0x15C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsPromptTextVisible;                               // 0x15D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsHorizontalText;                                  // 0x15D1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShowBorder;                                        // 0x15D2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15D3[0x5];                                     // 0x15D3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        IconScale;                                         // 0x15D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        TextMaxDesiredWidth;                               // 0x15E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         FontSize;                                          // 0x15E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsActive;                                          // 0x15EC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15ED[0x3];                                     // 0x15ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UInputMappingContext*                   PromptMappingContext;                              // 0x15F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TMulticastInlineDelegate<void()>              OnPromptPressed;                                   // 0x15F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UAudioComponent*                        HoldSound;                                         // 0x1608(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FSoundEventDataTableRowHandle          SD_OnClicked;                                      // 0x1610(0x0010)(Edit, BlueprintVisible, NoDestructor)

public:
	bool IsHold();
	void RefreshWidget();
	void TryActivate(bool* HasActivated);
	void TryDeactivate(bool* HasDeactivated);
	void SetupWidgetInternal();
	void Activate();
	void Deactivate();
	void SetPromptText(const class FText& Text);
	void Feedback_Forbidden();
	void SetAllowed(bool isAllowed);
	void Construct();
	void OnButtonBaseClicked_Event(class UCommonButtonBase* Button);
	void OnActionProgress(float HeldPercent);
	void OnTriggeringInputActionChanged(const struct FDataTableRowHandle& NewTriggeredAction);
	void PreConstruct(bool IsDesignTime);
	void OnTriggeringEnhancedInputActionChanged(const class UInputAction* InInputAction);
	void BP_OnPressed();
	void OnTutorialActionProgress(double InProgress);
	void ExecuteUbergraph_WBP_GM_PromptGeneric(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_GM_PromptGeneric_C">();
	}
	static class UWBP_GM_PromptGeneric_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_GM_PromptGeneric_C>();
	}
};
static_assert(alignof(UWBP_GM_PromptGeneric_C) == 0x000010, "Wrong alignment on UWBP_GM_PromptGeneric_C");
static_assert(sizeof(UWBP_GM_PromptGeneric_C) == 0x001620, "Wrong size on UWBP_GM_PromptGeneric_C");
static_assert(offsetof(UWBP_GM_PromptGeneric_C, UberGraphFrame) == 0x0015A0, "Member 'UWBP_GM_PromptGeneric_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_GM_PromptGeneric_C, WBP_TextualInputActionBinding) == 0x0015A8, "Member 'UWBP_GM_PromptGeneric_C::WBP_TextualInputActionBinding' has a wrong offset!");
static_assert(offsetof(UWBP_GM_PromptGeneric_C, BottomText) == 0x0015B0, "Member 'UWBP_GM_PromptGeneric_C::BottomText' has a wrong offset!");
static_assert(offsetof(UWBP_GM_PromptGeneric_C, OnPressed) == 0x0015C0, "Member 'UWBP_GM_PromptGeneric_C::OnPressed' has a wrong offset!");
static_assert(offsetof(UWBP_GM_PromptGeneric_C, IsPromptTextVisible) == 0x0015D0, "Member 'UWBP_GM_PromptGeneric_C::IsPromptTextVisible' has a wrong offset!");
static_assert(offsetof(UWBP_GM_PromptGeneric_C, IsHorizontalText) == 0x0015D1, "Member 'UWBP_GM_PromptGeneric_C::IsHorizontalText' has a wrong offset!");
static_assert(offsetof(UWBP_GM_PromptGeneric_C, ShowBorder) == 0x0015D2, "Member 'UWBP_GM_PromptGeneric_C::ShowBorder' has a wrong offset!");
static_assert(offsetof(UWBP_GM_PromptGeneric_C, IconScale) == 0x0015D8, "Member 'UWBP_GM_PromptGeneric_C::IconScale' has a wrong offset!");
static_assert(offsetof(UWBP_GM_PromptGeneric_C, TextMaxDesiredWidth) == 0x0015E0, "Member 'UWBP_GM_PromptGeneric_C::TextMaxDesiredWidth' has a wrong offset!");
static_assert(offsetof(UWBP_GM_PromptGeneric_C, FontSize) == 0x0015E8, "Member 'UWBP_GM_PromptGeneric_C::FontSize' has a wrong offset!");
static_assert(offsetof(UWBP_GM_PromptGeneric_C, IsActive) == 0x0015EC, "Member 'UWBP_GM_PromptGeneric_C::IsActive' has a wrong offset!");
static_assert(offsetof(UWBP_GM_PromptGeneric_C, PromptMappingContext) == 0x0015F0, "Member 'UWBP_GM_PromptGeneric_C::PromptMappingContext' has a wrong offset!");
static_assert(offsetof(UWBP_GM_PromptGeneric_C, OnPromptPressed) == 0x0015F8, "Member 'UWBP_GM_PromptGeneric_C::OnPromptPressed' has a wrong offset!");
static_assert(offsetof(UWBP_GM_PromptGeneric_C, HoldSound) == 0x001608, "Member 'UWBP_GM_PromptGeneric_C::HoldSound' has a wrong offset!");
static_assert(offsetof(UWBP_GM_PromptGeneric_C, SD_OnClicked) == 0x001610, "Member 'UWBP_GM_PromptGeneric_C::SD_OnClicked' has a wrong offset!");

}

