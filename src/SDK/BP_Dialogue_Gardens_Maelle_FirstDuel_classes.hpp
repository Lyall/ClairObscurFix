﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Dialogue_Gardens_Maelle_FirstDuel

#include "Basic.hpp"

#include "BP_Dialogue_classes.hpp"
#include "FBattleStartParams_structs.hpp"
#include "SandFall_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Dialogue_Gardens_Maelle_FirstDuel.BP_Dialogue_Gardens_Maelle_FirstDuel_C
// 0x02D8 (0x0610 - 0x0338)
class ABP_Dialogue_Gardens_Maelle_FirstDuel_C final : public ABP_Dialogue_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Dialogue_Gardens_Maelle_FirstDuel_C; // 0x0338(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FItemDataTableRowHandle                FlowerItem;                                        // 0x0340(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FFBattleStartParams                    maelleWithTutorialDuelBattleParams;                // 0x0350(0x0158)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	struct FFBattleStartParams                    MaelleNoTutorialDuelBattleParams;                  // 0x04A8(0x0158)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	struct FItemDataTableRowHandle                Reward;                                            // 0x0600(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void ExecuteUbergraph_BP_Dialogue_Gardens_Maelle_FirstDuel(int32 EntryPoint);
	void StartDialog();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Dialogue_Gardens_Maelle_FirstDuel_C">();
	}
	static class ABP_Dialogue_Gardens_Maelle_FirstDuel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Dialogue_Gardens_Maelle_FirstDuel_C>();
	}
};
static_assert(alignof(ABP_Dialogue_Gardens_Maelle_FirstDuel_C) == 0x000008, "Wrong alignment on ABP_Dialogue_Gardens_Maelle_FirstDuel_C");
static_assert(sizeof(ABP_Dialogue_Gardens_Maelle_FirstDuel_C) == 0x000610, "Wrong size on ABP_Dialogue_Gardens_Maelle_FirstDuel_C");
static_assert(offsetof(ABP_Dialogue_Gardens_Maelle_FirstDuel_C, UberGraphFrame_BP_Dialogue_Gardens_Maelle_FirstDuel_C) == 0x000338, "Member 'ABP_Dialogue_Gardens_Maelle_FirstDuel_C::UberGraphFrame_BP_Dialogue_Gardens_Maelle_FirstDuel_C' has a wrong offset!");
static_assert(offsetof(ABP_Dialogue_Gardens_Maelle_FirstDuel_C, FlowerItem) == 0x000340, "Member 'ABP_Dialogue_Gardens_Maelle_FirstDuel_C::FlowerItem' has a wrong offset!");
static_assert(offsetof(ABP_Dialogue_Gardens_Maelle_FirstDuel_C, maelleWithTutorialDuelBattleParams) == 0x000350, "Member 'ABP_Dialogue_Gardens_Maelle_FirstDuel_C::maelleWithTutorialDuelBattleParams' has a wrong offset!");
static_assert(offsetof(ABP_Dialogue_Gardens_Maelle_FirstDuel_C, MaelleNoTutorialDuelBattleParams) == 0x0004A8, "Member 'ABP_Dialogue_Gardens_Maelle_FirstDuel_C::MaelleNoTutorialDuelBattleParams' has a wrong offset!");
static_assert(offsetof(ABP_Dialogue_Gardens_Maelle_FirstDuel_C, Reward) == 0x000600, "Member 'ABP_Dialogue_Gardens_Maelle_FirstDuel_C::Reward' has a wrong offset!");

}

