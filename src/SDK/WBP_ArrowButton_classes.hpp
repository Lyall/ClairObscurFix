﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ArrowButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ArrowButton.WBP_ArrowButton_C
// 0x0050 (0x15F0 - 0x15A0)
class UWBP_ArrowButton_C final : public UCommonButtonBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x15A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           CanvasPanel_ArrowLeft;                             // 0x15A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_ArrowRight;                            // 0x15B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Arrow_Upgrade_in;                            // 0x15B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Arrow_Upgrade_in_1;                          // 0x15C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Arrow_Upgrade_out_size;                      // 0x15C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Arrow_UpgradeRight_out_Size;                 // 0x15D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Switcher_ArrowContainer;                           // 0x15D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_GlowContainer_C*                   WBP_GlowContainer;                                 // 0x15E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsLeftArrow;                                       // 0x15E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BP_OnFocusLost();
	void BP_OnFocusReceived();
	void BP_OnHovered();
	void BP_OnUnhovered();
	void ExecuteUbergraph_WBP_ArrowButton(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void SetFocused(bool Focused);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ArrowButton_C">();
	}
	static class UWBP_ArrowButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ArrowButton_C>();
	}
};
static_assert(alignof(UWBP_ArrowButton_C) == 0x000010, "Wrong alignment on UWBP_ArrowButton_C");
static_assert(sizeof(UWBP_ArrowButton_C) == 0x0015F0, "Wrong size on UWBP_ArrowButton_C");
static_assert(offsetof(UWBP_ArrowButton_C, UberGraphFrame) == 0x0015A0, "Member 'UWBP_ArrowButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ArrowButton_C, CanvasPanel_ArrowLeft) == 0x0015A8, "Member 'UWBP_ArrowButton_C::CanvasPanel_ArrowLeft' has a wrong offset!");
static_assert(offsetof(UWBP_ArrowButton_C, CanvasPanel_ArrowRight) == 0x0015B0, "Member 'UWBP_ArrowButton_C::CanvasPanel_ArrowRight' has a wrong offset!");
static_assert(offsetof(UWBP_ArrowButton_C, Image_Arrow_Upgrade_in) == 0x0015B8, "Member 'UWBP_ArrowButton_C::Image_Arrow_Upgrade_in' has a wrong offset!");
static_assert(offsetof(UWBP_ArrowButton_C, Image_Arrow_Upgrade_in_1) == 0x0015C0, "Member 'UWBP_ArrowButton_C::Image_Arrow_Upgrade_in_1' has a wrong offset!");
static_assert(offsetof(UWBP_ArrowButton_C, Image_Arrow_Upgrade_out_size) == 0x0015C8, "Member 'UWBP_ArrowButton_C::Image_Arrow_Upgrade_out_size' has a wrong offset!");
static_assert(offsetof(UWBP_ArrowButton_C, Image_Arrow_UpgradeRight_out_Size) == 0x0015D0, "Member 'UWBP_ArrowButton_C::Image_Arrow_UpgradeRight_out_Size' has a wrong offset!");
static_assert(offsetof(UWBP_ArrowButton_C, Switcher_ArrowContainer) == 0x0015D8, "Member 'UWBP_ArrowButton_C::Switcher_ArrowContainer' has a wrong offset!");
static_assert(offsetof(UWBP_ArrowButton_C, WBP_GlowContainer) == 0x0015E0, "Member 'UWBP_ArrowButton_C::WBP_GlowContainer' has a wrong offset!");
static_assert(offsetof(UWBP_ArrowButton_C, IsLeftArrow) == 0x0015E8, "Member 'UWBP_ArrowButton_C::IsLeftArrow' has a wrong offset!");

}

