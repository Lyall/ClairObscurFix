﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_UniqueMechanic_Charge_Component

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "EDamageReason_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_UniqueMechanic_Charge_Component.BP_UniqueMechanic_Charge_Component_C
// 0x0028 (0x00C8 - 0x00A0)
class UBP_UniqueMechanic_Charge_Component_C final : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         ChargeCount;                                       // 0x00A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxChargeCount;                                    // 0x00AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_UniqueMechanic_Charge_C*           WBP_UniqueMechanic_Charge;                         // 0x00B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TMulticastInlineDelegate<void(int32 NewValue, int32 PreviousValue)> OnChargeCountChanged;        // 0x00B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void AddCharge();
	void ChangeCharge(int32 Delta);
	void CreatePortraitWidget(class UUserWidget** CreatedUserWidget, int32* SlotIndex);
	void ExecuteUbergraph_BP_UniqueMechanic_Charge_Component(int32 EntryPoint);
	int32 GetCurrentChargeCount();
	int32 GetMaxChargeCount();
	void GetWBP_UniqueMechanic_Charge(class UWBP_UniqueMechanic_Charge_C** WBP_UniqueMechanic_Charge_0);
	bool IsCharacterOwner(class ABP_jRPG_Character_Battle_Base_C* CharacterBattle);
	bool IsFullyCharged();
	void OnCharacterReceivedDamage(class UBP_BattleDamages_C* BattleDamage);
	void OnDodgeSuccessful_Event(class ABP_jRPG_Character_Battle_Base_C* Character, class ABP_jRPG_Character_Battle_Base_C* Enemy);
	void OnParrySuccessful_Event(class ABP_jRPG_Character_Battle_Base_C* Character, class ABP_jRPG_Character_Battle_Base_C* Enemy);
	void OnTurnEnd();
	void OnTurnStart();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void SetChargeCountInternal(int32 ChargeCount_0);
	void TryFlushCharge(bool* Success);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_UniqueMechanic_Charge_Component_C">();
	}
	static class UBP_UniqueMechanic_Charge_Component_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_UniqueMechanic_Charge_Component_C>();
	}
};
static_assert(alignof(UBP_UniqueMechanic_Charge_Component_C) == 0x000008, "Wrong alignment on UBP_UniqueMechanic_Charge_Component_C");
static_assert(sizeof(UBP_UniqueMechanic_Charge_Component_C) == 0x0000C8, "Wrong size on UBP_UniqueMechanic_Charge_Component_C");
static_assert(offsetof(UBP_UniqueMechanic_Charge_Component_C, UberGraphFrame) == 0x0000A0, "Member 'UBP_UniqueMechanic_Charge_Component_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_UniqueMechanic_Charge_Component_C, ChargeCount) == 0x0000A8, "Member 'UBP_UniqueMechanic_Charge_Component_C::ChargeCount' has a wrong offset!");
static_assert(offsetof(UBP_UniqueMechanic_Charge_Component_C, MaxChargeCount) == 0x0000AC, "Member 'UBP_UniqueMechanic_Charge_Component_C::MaxChargeCount' has a wrong offset!");
static_assert(offsetof(UBP_UniqueMechanic_Charge_Component_C, WBP_UniqueMechanic_Charge) == 0x0000B0, "Member 'UBP_UniqueMechanic_Charge_Component_C::WBP_UniqueMechanic_Charge' has a wrong offset!");
static_assert(offsetof(UBP_UniqueMechanic_Charge_Component_C, OnChargeCountChanged) == 0x0000B8, "Member 'UBP_UniqueMechanic_Charge_Component_C::OnChargeCountChanged' has a wrong offset!");

}

