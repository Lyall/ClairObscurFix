﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Subtitles

#include "Basic.hpp"

#include "SandFall_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Subtitles.WBP_Subtitles_C
// 0x0010 (0x0388 - 0x0378)
class UWBP_Subtitles_C final : public USF_SubtitlesWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0378(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USafeZone*                              SafeZone;                                          // 0x0380(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void OnSubtitleWidgetCreated_BP(class UVerticalBoxSlot* NewSubWidget);
	void ExecuteUbergraph_WBP_Subtitles(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Subtitles_C">();
	}
	static class UWBP_Subtitles_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Subtitles_C>();
	}
};
static_assert(alignof(UWBP_Subtitles_C) == 0x000008, "Wrong alignment on UWBP_Subtitles_C");
static_assert(sizeof(UWBP_Subtitles_C) == 0x000388, "Wrong size on UWBP_Subtitles_C");
static_assert(offsetof(UWBP_Subtitles_C, UberGraphFrame) == 0x000378, "Member 'UWBP_Subtitles_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Subtitles_C, SafeZone) == 0x000380, "Member 'UWBP_Subtitles_C::SafeZone' has a wrong offset!");

}

