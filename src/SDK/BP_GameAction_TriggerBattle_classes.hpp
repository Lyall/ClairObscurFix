﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GameAction_TriggerBattle

#include "Basic.hpp"

#include "FBattleStartParams_structs.hpp"
#include "BP_PDT_GameAction_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_GameAction_TriggerBattle.BP_GameAction_TriggerBattle_C
// 0x0158 (0x0188 - 0x0030)
class UBP_GameAction_TriggerBattle_C final : public UBP_PDT_GameAction_C
{
public:
	struct FFBattleStartParams                    Battle_Start_Params;                               // 0x0030(0x0158)(Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)

public:
	TSubclassOf<class UGameActionInstance> GetInstanceClass();
	void ValidateGameAction(TArray<class FText>& ErrorMessages, class FString& PropertyPath, bool& ExploreAssetChildren);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_GameAction_TriggerBattle_C">();
	}
	static class UBP_GameAction_TriggerBattle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_GameAction_TriggerBattle_C>();
	}
};
static_assert(alignof(UBP_GameAction_TriggerBattle_C) == 0x000008, "Wrong alignment on UBP_GameAction_TriggerBattle_C");
static_assert(sizeof(UBP_GameAction_TriggerBattle_C) == 0x000188, "Wrong size on UBP_GameAction_TriggerBattle_C");
static_assert(offsetof(UBP_GameAction_TriggerBattle_C, Battle_Start_Params) == 0x000030, "Member 'UBP_GameAction_TriggerBattle_C::Battle_Start_Params' has a wrong offset!");

}

