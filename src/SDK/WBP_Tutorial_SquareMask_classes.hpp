﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Tutorial_SquareMask

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Tutorial_SquareMask.WBP_Tutorial_SquareMask_C
// 0x0048 (0x0328 - 0x02E0)
class UWBP_Tutorial_SquareMask_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anim_AppearHighlight;                              // 0x02E8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_MaskImagesContainer;                   // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_OverlayContainer;                      // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MaskImage_Preview;                                 // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                           RetainerBox_0;                                     // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UWidget*>                        TargetWidget;                                      // 0x0310(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference, ExposeOnSpawn)
	bool                                          HasAppeared;                                       // 0x0320(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Appear();
	void Construct();
	void CustomEvent_0();
	void DisableAndRemove();
	void Disappear();
	void ExecuteUbergraph_WBP_Tutorial_SquareMask(int32 EntryPoint);
	void ExitTuto();
	void GetTiedObject(class UObject** Object);
	void OnUIAction();
	void OnUINavigationFocus(const class UBP_UINavigationFocusEvent_C* FocusEventBP);
	void OnUINavigationFocusLost();
	void RegisterInput();
	void SetHighlightedWidgets(const TArray<class UWidget*>& TargetWidget_0);
	void TestRender();
	void UpdateMasks();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Tutorial_SquareMask_C">();
	}
	static class UWBP_Tutorial_SquareMask_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Tutorial_SquareMask_C>();
	}
};
static_assert(alignof(UWBP_Tutorial_SquareMask_C) == 0x000008, "Wrong alignment on UWBP_Tutorial_SquareMask_C");
static_assert(sizeof(UWBP_Tutorial_SquareMask_C) == 0x000328, "Wrong size on UWBP_Tutorial_SquareMask_C");
static_assert(offsetof(UWBP_Tutorial_SquareMask_C, UberGraphFrame) == 0x0002E0, "Member 'UWBP_Tutorial_SquareMask_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Tutorial_SquareMask_C, Anim_AppearHighlight) == 0x0002E8, "Member 'UWBP_Tutorial_SquareMask_C::Anim_AppearHighlight' has a wrong offset!");
static_assert(offsetof(UWBP_Tutorial_SquareMask_C, CanvasPanel_MaskImagesContainer) == 0x0002F0, "Member 'UWBP_Tutorial_SquareMask_C::CanvasPanel_MaskImagesContainer' has a wrong offset!");
static_assert(offsetof(UWBP_Tutorial_SquareMask_C, CanvasPanel_OverlayContainer) == 0x0002F8, "Member 'UWBP_Tutorial_SquareMask_C::CanvasPanel_OverlayContainer' has a wrong offset!");
static_assert(offsetof(UWBP_Tutorial_SquareMask_C, MaskImage_Preview) == 0x000300, "Member 'UWBP_Tutorial_SquareMask_C::MaskImage_Preview' has a wrong offset!");
static_assert(offsetof(UWBP_Tutorial_SquareMask_C, RetainerBox_0) == 0x000308, "Member 'UWBP_Tutorial_SquareMask_C::RetainerBox_0' has a wrong offset!");
static_assert(offsetof(UWBP_Tutorial_SquareMask_C, TargetWidget) == 0x000310, "Member 'UWBP_Tutorial_SquareMask_C::TargetWidget' has a wrong offset!");
static_assert(offsetof(UWBP_Tutorial_SquareMask_C, HasAppeared) == 0x000320, "Member 'UWBP_Tutorial_SquareMask_C::HasAppeared' has a wrong offset!");

}

