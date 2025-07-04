﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_APShard_Single

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_APShard_Single.WBP_APShard_Single_C
// 0x0008 (0x02E8 - 0x02E0)
class UWBP_APShard_Single_C final : public UUserWidget
{
public:
	class UImage*                                 Image_114;                                         // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_APShard_Single_C">();
	}
	static class UWBP_APShard_Single_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_APShard_Single_C>();
	}
};
static_assert(alignof(UWBP_APShard_Single_C) == 0x000008, "Wrong alignment on UWBP_APShard_Single_C");
static_assert(sizeof(UWBP_APShard_Single_C) == 0x0002E8, "Wrong size on UWBP_APShard_Single_C");
static_assert(offsetof(UWBP_APShard_Single_C, Image_114) == 0x0002E0, "Member 'UWBP_APShard_Single_C::Image_114' has a wrong offset!");

}

