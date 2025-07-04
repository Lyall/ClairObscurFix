﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GameAction_Hint

#include "Basic.hpp"

#include "S_TutorialHintParameters_structs.hpp"
#include "BP_PDT_GameAction_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_GameAction_Hint.BP_GameAction_Hint_C
// 0x0018 (0x0048 - 0x0030)
class UBP_GameAction_Hint_C final : public UBP_PDT_GameAction_C
{
public:
	struct FS_TutorialHintParameters              TutorialHintParameters;                            // 0x0030(0x0018)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)

public:
	TSubclassOf<class UGameActionInstance> GetInstanceClass();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_GameAction_Hint_C">();
	}
	static class UBP_GameAction_Hint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_GameAction_Hint_C>();
	}
};
static_assert(alignof(UBP_GameAction_Hint_C) == 0x000008, "Wrong alignment on UBP_GameAction_Hint_C");
static_assert(sizeof(UBP_GameAction_Hint_C) == 0x000048, "Wrong size on UBP_GameAction_Hint_C");
static_assert(offsetof(UBP_GameAction_Hint_C, TutorialHintParameters) == 0x000030, "Member 'UBP_GameAction_Hint_C::TutorialHintParameters' has a wrong offset!");

}

