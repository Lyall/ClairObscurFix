﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Background_Raw_List

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Background_Raw_List.WBP_Background_Raw_List_C
// 0x0030 (0x0310 - 0x02E0)
class UWBP_Background_Raw_List_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                         HorizontalBox_BackgroundContainer;                 // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Center;                                      // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_FadeLeft;                                    // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_FadeRight;                                   // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          ShowBackground;                                    // 0x0308(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_309[0x3];                                      // 0x0309(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FColor                                 DefaultColor;                                      // 0x030C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Event_HideRawBackground();
	void Event_ShowRawBackground();
	void ExecuteUbergraph_WBP_Background_Raw_List(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void SetColor(const struct FLinearColor& Color);
	void SetColorToDefault();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Background_Raw_List_C">();
	}
	static class UWBP_Background_Raw_List_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Background_Raw_List_C>();
	}
};
static_assert(alignof(UWBP_Background_Raw_List_C) == 0x000008, "Wrong alignment on UWBP_Background_Raw_List_C");
static_assert(sizeof(UWBP_Background_Raw_List_C) == 0x000310, "Wrong size on UWBP_Background_Raw_List_C");
static_assert(offsetof(UWBP_Background_Raw_List_C, UberGraphFrame) == 0x0002E0, "Member 'UWBP_Background_Raw_List_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Background_Raw_List_C, HorizontalBox_BackgroundContainer) == 0x0002E8, "Member 'UWBP_Background_Raw_List_C::HorizontalBox_BackgroundContainer' has a wrong offset!");
static_assert(offsetof(UWBP_Background_Raw_List_C, Image_Center) == 0x0002F0, "Member 'UWBP_Background_Raw_List_C::Image_Center' has a wrong offset!");
static_assert(offsetof(UWBP_Background_Raw_List_C, Image_FadeLeft) == 0x0002F8, "Member 'UWBP_Background_Raw_List_C::Image_FadeLeft' has a wrong offset!");
static_assert(offsetof(UWBP_Background_Raw_List_C, Image_FadeRight) == 0x000300, "Member 'UWBP_Background_Raw_List_C::Image_FadeRight' has a wrong offset!");
static_assert(offsetof(UWBP_Background_Raw_List_C, ShowBackground) == 0x000308, "Member 'UWBP_Background_Raw_List_C::ShowBackground' has a wrong offset!");
static_assert(offsetof(UWBP_Background_Raw_List_C, DefaultColor) == 0x00030C, "Member 'UWBP_Background_Raw_List_C::DefaultColor' has a wrong offset!");

}

