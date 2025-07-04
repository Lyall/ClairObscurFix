﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HUD_DriveG_TimeContainer

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_HUD_DriveG_TimeContainer.WBP_HUD_DriveG_TimeContainer_C
// 0x0018 (0x02F8 - 0x02E0)
class UWBP_HUD_DriveG_TimeContainer_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Appear_Animation;                                  // 0x02E8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWBP_HUD_TurnOrder_C*                   WBP_HUD_TurnOrder;                                 // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Appear();
	void Construct();
	void ExecuteUbergraph_WBP_HUD_DriveG_TimeContainer(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_HUD_DriveG_TimeContainer_C">();
	}
	static class UWBP_HUD_DriveG_TimeContainer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_HUD_DriveG_TimeContainer_C>();
	}
};
static_assert(alignof(UWBP_HUD_DriveG_TimeContainer_C) == 0x000008, "Wrong alignment on UWBP_HUD_DriveG_TimeContainer_C");
static_assert(sizeof(UWBP_HUD_DriveG_TimeContainer_C) == 0x0002F8, "Wrong size on UWBP_HUD_DriveG_TimeContainer_C");
static_assert(offsetof(UWBP_HUD_DriveG_TimeContainer_C, UberGraphFrame) == 0x0002E0, "Member 'UWBP_HUD_DriveG_TimeContainer_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_DriveG_TimeContainer_C, Appear_Animation) == 0x0002E8, "Member 'UWBP_HUD_DriveG_TimeContainer_C::Appear_Animation' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_DriveG_TimeContainer_C, WBP_HUD_TurnOrder) == 0x0002F0, "Member 'UWBP_HUD_DriveG_TimeContainer_C::WBP_HUD_TurnOrder' has a wrong offset!");

}

