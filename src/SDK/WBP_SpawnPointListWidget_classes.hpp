﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_SpawnPointListWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_SpawnPointListWidget.WBP_SpawnPointListWidget_C
// 0x0048 (0x0478 - 0x0430)
class UWBP_SpawnPointListWidget_C final : public UCommonActivatableWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0430(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UDynamicEntryBox*                       SpawnPointsEntryBox;                               // 0x0438(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FGameplayTag>                   UnlockedSpawnPointTags;                            // 0x0440(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMulticastInlineDelegate<void(const struct FGameplayTag& SpawnPointTag)> OnTeleportPointSelected; // 0x0450(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void()>              OnBackClicked;                                     // 0x0460(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FGameplayTag                           CurrentSpawnPointTag;                              // 0x0470(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ConstructSpawnPointButton(const class FText& SpawnPointName);
	void ExecuteUbergraph_WBP_SpawnPointListWidget(int32 EntryPoint);
	int32 GetNumberOfUnlockedSpawnPoints();
	void LoadUnlockedSpawnPoints(const struct FGameplayTag& CurrentSpawnPointTag_0);
	void OnAnyEntryClicked(class UWBP_SpawnPointEntry_C* SpawnPointEntry);
	bool ShouldDisplaySpawnPoint(const struct FGameplayTag& SpawnPointTag);

	class UWidget* BP_GetDesiredFocusTarget() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_SpawnPointListWidget_C">();
	}
	static class UWBP_SpawnPointListWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_SpawnPointListWidget_C>();
	}
};
static_assert(alignof(UWBP_SpawnPointListWidget_C) == 0x000008, "Wrong alignment on UWBP_SpawnPointListWidget_C");
static_assert(sizeof(UWBP_SpawnPointListWidget_C) == 0x000478, "Wrong size on UWBP_SpawnPointListWidget_C");
static_assert(offsetof(UWBP_SpawnPointListWidget_C, UberGraphFrame) == 0x000430, "Member 'UWBP_SpawnPointListWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_SpawnPointListWidget_C, SpawnPointsEntryBox) == 0x000438, "Member 'UWBP_SpawnPointListWidget_C::SpawnPointsEntryBox' has a wrong offset!");
static_assert(offsetof(UWBP_SpawnPointListWidget_C, UnlockedSpawnPointTags) == 0x000440, "Member 'UWBP_SpawnPointListWidget_C::UnlockedSpawnPointTags' has a wrong offset!");
static_assert(offsetof(UWBP_SpawnPointListWidget_C, OnTeleportPointSelected) == 0x000450, "Member 'UWBP_SpawnPointListWidget_C::OnTeleportPointSelected' has a wrong offset!");
static_assert(offsetof(UWBP_SpawnPointListWidget_C, OnBackClicked) == 0x000460, "Member 'UWBP_SpawnPointListWidget_C::OnBackClicked' has a wrong offset!");
static_assert(offsetof(UWBP_SpawnPointListWidget_C, CurrentSpawnPointTag) == 0x000470, "Member 'UWBP_SpawnPointListWidget_C::CurrentSpawnPointTag' has a wrong offset!");

}

