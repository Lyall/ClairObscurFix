﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_SaveGameNotification

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_SaveGameNotification.WBP_SaveGameNotification_C
// 0x0018 (0x02F8 - 0x02E0)
class UWBP_SaveGameNotification_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_CircleDot;                                   // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_SaveInProgress;                          // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_SaveGameNotification(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_SaveGameNotification_C">();
	}
	static class UWBP_SaveGameNotification_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_SaveGameNotification_C>();
	}
};
static_assert(alignof(UWBP_SaveGameNotification_C) == 0x000008, "Wrong alignment on UWBP_SaveGameNotification_C");
static_assert(sizeof(UWBP_SaveGameNotification_C) == 0x0002F8, "Wrong size on UWBP_SaveGameNotification_C");
static_assert(offsetof(UWBP_SaveGameNotification_C, UberGraphFrame) == 0x0002E0, "Member 'UWBP_SaveGameNotification_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_SaveGameNotification_C, Image_CircleDot) == 0x0002E8, "Member 'UWBP_SaveGameNotification_C::Image_CircleDot' has a wrong offset!");
static_assert(offsetof(UWBP_SaveGameNotification_C, TextBlock_SaveInProgress) == 0x0002F0, "Member 'UWBP_SaveGameNotification_C::TextBlock_SaveInProgress' has a wrong offset!");

}

