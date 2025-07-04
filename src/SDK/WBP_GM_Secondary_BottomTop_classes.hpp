﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_GM_Secondary_BottomTop

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_GM_Secondary_BottomTop.WBP_GM_Secondary_BottomTop_C
// 0x0018 (0x02F8 - 0x02E0)
class UWBP_GM_Secondary_BottomTop_C final : public UUserWidget
{
public:
	class UImage*                                 Arrowleft;                                         // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Arrowright;                                        // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line;                                              // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_GM_Secondary_BottomTop_C">();
	}
	static class UWBP_GM_Secondary_BottomTop_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_GM_Secondary_BottomTop_C>();
	}
};
static_assert(alignof(UWBP_GM_Secondary_BottomTop_C) == 0x000008, "Wrong alignment on UWBP_GM_Secondary_BottomTop_C");
static_assert(sizeof(UWBP_GM_Secondary_BottomTop_C) == 0x0002F8, "Wrong size on UWBP_GM_Secondary_BottomTop_C");
static_assert(offsetof(UWBP_GM_Secondary_BottomTop_C, Arrowleft) == 0x0002E0, "Member 'UWBP_GM_Secondary_BottomTop_C::Arrowleft' has a wrong offset!");
static_assert(offsetof(UWBP_GM_Secondary_BottomTop_C, Arrowright) == 0x0002E8, "Member 'UWBP_GM_Secondary_BottomTop_C::Arrowright' has a wrong offset!");
static_assert(offsetof(UWBP_GM_Secondary_BottomTop_C, Line) == 0x0002F0, "Member 'UWBP_GM_Secondary_BottomTop_C::Line' has a wrong offset!");

}

