﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Top_MenuHorizontal

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SandFall_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Top_MenuHorizontal.WBP_Top_MenuHorizontal_C
// 0x0080 (0x0508 - 0x0488)
class UWBP_Top_MenuHorizontal_C final : public UCommonTabListWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0488(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                         HorizontalBox_MenuItems;                           // 0x0490(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                    LeftTabAction;                                     // 0x0498(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                    RightTabAction;                                    // 0x04A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Button_TopMenu_Horizontal_C*       WBP_Button_TopMenu_Horizontal;                     // 0x04A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Button_TopMenu_Horizontal_C*       WBP_Button_TopMenu_Horizontal_1;                   // 0x04B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Button_TopMenu_Horizontal_C*       WBP_Button_TopMenu_Horizontal_2;                   // 0x04B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Button_TopMenu_Horizontal_C*       WBP_Button_TopMenu_Horizontal_3;                   // 0x04C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Button_TopMenu_Horizontal_C*       WBP_Button_TopMenu_Horizontal_4;                   // 0x04C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Button_TopMenu_Horizontal_C*       WBP_Button_TopMenu_Horizontal_5;                   // 0x04D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Button_TopMenu_Horizontal_C*       WBP_Button_TopMenu_Horizontal_6;                   // 0x04D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonAnimatedSwitcher*                LinkedSwitcherWidget;                              // 0x04E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class UCommonActivatableWidget*>       TabWidgets;                                        // 0x04E8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FSoundEventDataTableRowHandle          SD_OnTabSwitch;                                    // 0x04F8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void AddTabWidget(const class FText& TabName, class UCommonActivatableWidget* Widget);
	void BindTabAudio();
	void ClearAllTabWidgets();
	void Construct();
	void EventOnTabSelected(class FName TabId);
	void ExecuteUbergraph_WBP_Top_MenuHorizontal(int32 EntryPoint);
	void Initialize(class UCommonAnimatedSwitcher* LinkedSwitcher_0, const TMap<class UCommonActivatableWidget*, class FText>& Tabs);
	void InstantResetTabs();
	void UnbindTabAudio();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Top_MenuHorizontal_C">();
	}
	static class UWBP_Top_MenuHorizontal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Top_MenuHorizontal_C>();
	}
};
static_assert(alignof(UWBP_Top_MenuHorizontal_C) == 0x000008, "Wrong alignment on UWBP_Top_MenuHorizontal_C");
static_assert(sizeof(UWBP_Top_MenuHorizontal_C) == 0x000508, "Wrong size on UWBP_Top_MenuHorizontal_C");
static_assert(offsetof(UWBP_Top_MenuHorizontal_C, UberGraphFrame) == 0x000488, "Member 'UWBP_Top_MenuHorizontal_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Top_MenuHorizontal_C, HorizontalBox_MenuItems) == 0x000490, "Member 'UWBP_Top_MenuHorizontal_C::HorizontalBox_MenuItems' has a wrong offset!");
static_assert(offsetof(UWBP_Top_MenuHorizontal_C, LeftTabAction) == 0x000498, "Member 'UWBP_Top_MenuHorizontal_C::LeftTabAction' has a wrong offset!");
static_assert(offsetof(UWBP_Top_MenuHorizontal_C, RightTabAction) == 0x0004A0, "Member 'UWBP_Top_MenuHorizontal_C::RightTabAction' has a wrong offset!");
static_assert(offsetof(UWBP_Top_MenuHorizontal_C, WBP_Button_TopMenu_Horizontal) == 0x0004A8, "Member 'UWBP_Top_MenuHorizontal_C::WBP_Button_TopMenu_Horizontal' has a wrong offset!");
static_assert(offsetof(UWBP_Top_MenuHorizontal_C, WBP_Button_TopMenu_Horizontal_1) == 0x0004B0, "Member 'UWBP_Top_MenuHorizontal_C::WBP_Button_TopMenu_Horizontal_1' has a wrong offset!");
static_assert(offsetof(UWBP_Top_MenuHorizontal_C, WBP_Button_TopMenu_Horizontal_2) == 0x0004B8, "Member 'UWBP_Top_MenuHorizontal_C::WBP_Button_TopMenu_Horizontal_2' has a wrong offset!");
static_assert(offsetof(UWBP_Top_MenuHorizontal_C, WBP_Button_TopMenu_Horizontal_3) == 0x0004C0, "Member 'UWBP_Top_MenuHorizontal_C::WBP_Button_TopMenu_Horizontal_3' has a wrong offset!");
static_assert(offsetof(UWBP_Top_MenuHorizontal_C, WBP_Button_TopMenu_Horizontal_4) == 0x0004C8, "Member 'UWBP_Top_MenuHorizontal_C::WBP_Button_TopMenu_Horizontal_4' has a wrong offset!");
static_assert(offsetof(UWBP_Top_MenuHorizontal_C, WBP_Button_TopMenu_Horizontal_5) == 0x0004D0, "Member 'UWBP_Top_MenuHorizontal_C::WBP_Button_TopMenu_Horizontal_5' has a wrong offset!");
static_assert(offsetof(UWBP_Top_MenuHorizontal_C, WBP_Button_TopMenu_Horizontal_6) == 0x0004D8, "Member 'UWBP_Top_MenuHorizontal_C::WBP_Button_TopMenu_Horizontal_6' has a wrong offset!");
static_assert(offsetof(UWBP_Top_MenuHorizontal_C, LinkedSwitcherWidget) == 0x0004E0, "Member 'UWBP_Top_MenuHorizontal_C::LinkedSwitcherWidget' has a wrong offset!");
static_assert(offsetof(UWBP_Top_MenuHorizontal_C, TabWidgets) == 0x0004E8, "Member 'UWBP_Top_MenuHorizontal_C::TabWidgets' has a wrong offset!");
static_assert(offsetof(UWBP_Top_MenuHorizontal_C, SD_OnTabSwitch) == 0x0004F8, "Member 'UWBP_Top_MenuHorizontal_C::SD_OnTabSwitch' has a wrong offset!");

}

