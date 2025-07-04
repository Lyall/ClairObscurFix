﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TutorialListener_CardCompletedDispatcher

#include "Basic.hpp"

#include "SandFall_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_TutorialListener_CardCompletedDispatcher.BP_TutorialListener_CardCompletedDispatcher_C
// 0x0020 (0x0048 - 0x0028)
class UBP_TutorialListener_CardCompletedDispatcher_C final : public UExtendedObject
{
public:
	TMulticastInlineDelegate<void()>              DispatchTutorialCardCompleted;                     // 0x0028(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FDataTableRowHandle                    TutorialCardRowToCheck;                            // 0x0038(0x0010)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn)

public:
	void OnTutorialCardCompleted(const struct FDataTableRowHandle& TutorialCardRow, bool* ShouldBeDestroyed);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_TutorialListener_CardCompletedDispatcher_C">();
	}
	static class UBP_TutorialListener_CardCompletedDispatcher_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_TutorialListener_CardCompletedDispatcher_C>();
	}
};
static_assert(alignof(UBP_TutorialListener_CardCompletedDispatcher_C) == 0x000008, "Wrong alignment on UBP_TutorialListener_CardCompletedDispatcher_C");
static_assert(sizeof(UBP_TutorialListener_CardCompletedDispatcher_C) == 0x000048, "Wrong size on UBP_TutorialListener_CardCompletedDispatcher_C");
static_assert(offsetof(UBP_TutorialListener_CardCompletedDispatcher_C, DispatchTutorialCardCompleted) == 0x000028, "Member 'UBP_TutorialListener_CardCompletedDispatcher_C::DispatchTutorialCardCompleted' has a wrong offset!");
static_assert(offsetof(UBP_TutorialListener_CardCompletedDispatcher_C, TutorialCardRowToCheck) == 0x000038, "Member 'UBP_TutorialListener_CardCompletedDispatcher_C::TutorialCardRowToCheck' has a wrong offset!");

}

