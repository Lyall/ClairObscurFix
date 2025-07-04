﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_StanceMechanicComponent

#include "Basic.hpp"

#include "E_StanceType_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "E_EnemyIdleState_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_StanceMechanicComponent.BP_StanceMechanicComponent_C
// 0x00B0 (0x0150 - 0x00A0)
class UBP_StanceMechanicComponent_C final : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	E_StanceType                                  CurrentStance;                                     // 0x00A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A9[0x7];                                       // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_StanceMechanicComponent_C*         StanceUI;                                          // 0x00B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          HasSwitchedStanceDuringTurn;                       // 0x00B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B9[0x7];                                       // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void()>              OnStanceChangeDispatch;                            // 0x00C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<E_StanceType>                          ValidBattleActionStances;                          // 0x00D0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          DEBUG_IsPerformingDebugCommand;                    // 0x00E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsStanceChangeFromSkill;                           // 0x00E1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E2[0x6];                                       // 0x00E2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             Sound_SwitchToOffensive;                           // 0x00E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Sound_SwitchToDefensive;                           // 0x00F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Sound_SwitchToVirtuose;                            // 0x00F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Sound_SwitchToStanceless;                          // 0x0100(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                                FXStanceOffsetSequencer;                           // 0x0108(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                         FX_SwitchToDefensive;                              // 0x0120(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                         FX_SwitchToVirtuose;                               // 0x0128(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                         FX_SwitchToOffensive;                              // 0x0130(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                         FX_SwitchToStanceless;                             // 0x0138(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_jRPG_Character_Battle_Base_C*       CharacterBattleBaseOwner;                          // 0x0140(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	E_StanceType                                  AttackTurnEndStanceSwitch;                         // 0x0148(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void CreatePortraitWidget(class UUserWidget** CreatedUserWidget, int32* SlotIndex);
	void ExecuteUbergraph_BP_StanceMechanicComponent(int32 EntryPoint);
	void GetBattleManager(class UAC_jRPG_BattleManager_C** BattleManagerReference);
	void GetNextStance(E_StanceType DesiredStance, E_StanceType* NewStance);
	void IsStanceSwitchValid(const E_StanceType& ItemToFind, bool* Valid);
	void OnBattleFinished_Event_0(bool Victory);
	void OnDeath();
	void OnTurnEnd();
	void OnTurnStart();
	void OverrideSwitchStanceOnBaseAttack(E_StanceType AttackTurnEndStanceSwitch_0);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ResetBattleActionValidation();
	void Sandfall_SwitchStance(E_StanceType Stance);
	void SetIsStanceChangeFromSkill(bool Value);
	void Stanceless();
	void SwitchStance(E_StanceType Stance, bool ResetToNoStanceIfSameStance, bool ShouldPlayVFX, E_StanceType* NewStance);
	void SwitchStanceOnBaseAttack_New();
	void TryRemoveMechanicPanel();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_StanceMechanicComponent_C">();
	}
	static class UBP_StanceMechanicComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_StanceMechanicComponent_C>();
	}
};
static_assert(alignof(UBP_StanceMechanicComponent_C) == 0x000008, "Wrong alignment on UBP_StanceMechanicComponent_C");
static_assert(sizeof(UBP_StanceMechanicComponent_C) == 0x000150, "Wrong size on UBP_StanceMechanicComponent_C");
static_assert(offsetof(UBP_StanceMechanicComponent_C, UberGraphFrame) == 0x0000A0, "Member 'UBP_StanceMechanicComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_StanceMechanicComponent_C, CurrentStance) == 0x0000A8, "Member 'UBP_StanceMechanicComponent_C::CurrentStance' has a wrong offset!");
static_assert(offsetof(UBP_StanceMechanicComponent_C, StanceUI) == 0x0000B0, "Member 'UBP_StanceMechanicComponent_C::StanceUI' has a wrong offset!");
static_assert(offsetof(UBP_StanceMechanicComponent_C, HasSwitchedStanceDuringTurn) == 0x0000B8, "Member 'UBP_StanceMechanicComponent_C::HasSwitchedStanceDuringTurn' has a wrong offset!");
static_assert(offsetof(UBP_StanceMechanicComponent_C, OnStanceChangeDispatch) == 0x0000C0, "Member 'UBP_StanceMechanicComponent_C::OnStanceChangeDispatch' has a wrong offset!");
static_assert(offsetof(UBP_StanceMechanicComponent_C, ValidBattleActionStances) == 0x0000D0, "Member 'UBP_StanceMechanicComponent_C::ValidBattleActionStances' has a wrong offset!");
static_assert(offsetof(UBP_StanceMechanicComponent_C, DEBUG_IsPerformingDebugCommand) == 0x0000E0, "Member 'UBP_StanceMechanicComponent_C::DEBUG_IsPerformingDebugCommand' has a wrong offset!");
static_assert(offsetof(UBP_StanceMechanicComponent_C, IsStanceChangeFromSkill) == 0x0000E1, "Member 'UBP_StanceMechanicComponent_C::IsStanceChangeFromSkill' has a wrong offset!");
static_assert(offsetof(UBP_StanceMechanicComponent_C, Sound_SwitchToOffensive) == 0x0000E8, "Member 'UBP_StanceMechanicComponent_C::Sound_SwitchToOffensive' has a wrong offset!");
static_assert(offsetof(UBP_StanceMechanicComponent_C, Sound_SwitchToDefensive) == 0x0000F0, "Member 'UBP_StanceMechanicComponent_C::Sound_SwitchToDefensive' has a wrong offset!");
static_assert(offsetof(UBP_StanceMechanicComponent_C, Sound_SwitchToVirtuose) == 0x0000F8, "Member 'UBP_StanceMechanicComponent_C::Sound_SwitchToVirtuose' has a wrong offset!");
static_assert(offsetof(UBP_StanceMechanicComponent_C, Sound_SwitchToStanceless) == 0x000100, "Member 'UBP_StanceMechanicComponent_C::Sound_SwitchToStanceless' has a wrong offset!");
static_assert(offsetof(UBP_StanceMechanicComponent_C, FXStanceOffsetSequencer) == 0x000108, "Member 'UBP_StanceMechanicComponent_C::FXStanceOffsetSequencer' has a wrong offset!");
static_assert(offsetof(UBP_StanceMechanicComponent_C, FX_SwitchToDefensive) == 0x000120, "Member 'UBP_StanceMechanicComponent_C::FX_SwitchToDefensive' has a wrong offset!");
static_assert(offsetof(UBP_StanceMechanicComponent_C, FX_SwitchToVirtuose) == 0x000128, "Member 'UBP_StanceMechanicComponent_C::FX_SwitchToVirtuose' has a wrong offset!");
static_assert(offsetof(UBP_StanceMechanicComponent_C, FX_SwitchToOffensive) == 0x000130, "Member 'UBP_StanceMechanicComponent_C::FX_SwitchToOffensive' has a wrong offset!");
static_assert(offsetof(UBP_StanceMechanicComponent_C, FX_SwitchToStanceless) == 0x000138, "Member 'UBP_StanceMechanicComponent_C::FX_SwitchToStanceless' has a wrong offset!");
static_assert(offsetof(UBP_StanceMechanicComponent_C, CharacterBattleBaseOwner) == 0x000140, "Member 'UBP_StanceMechanicComponent_C::CharacterBattleBaseOwner' has a wrong offset!");
static_assert(offsetof(UBP_StanceMechanicComponent_C, AttackTurnEndStanceSwitch) == 0x000148, "Member 'UBP_StanceMechanicComponent_C::AttackTurnEndStanceSwitch' has a wrong offset!");

}

