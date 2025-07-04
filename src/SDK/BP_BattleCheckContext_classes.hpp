﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BattleCheckContext

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BattleCheckContext.BP_BattleCheckContext_C
// 0x0040 (0x0068 - 0x0028)
class UBP_BattleCheckContext_C final : public UObject
{
public:
	TArray<class FName>                           ActiveChecks;                                      // 0x0028(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UAC_jRPG_CharacterBattleStats_C*        CharacterStats;                                    // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FName                                   Constant_IsAlive;                                  // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Constant_CanResurrect;                             // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsConstructed;                                     // 0x0050(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x3];                                       // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Constant_CanRecoverHP;                             // 0x0054(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Constant_CanRecoverMP;                             // 0x005C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          FEATURE_IsAssertive;                               // 0x0064(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Add_Check(class FName CheckName, bool CheckMode);
	bool CheckCanRecoverActionPoint(bool CheckMode, bool* BecauseDead);
	bool CheckCanRecoverHP(bool CheckMode, bool* BecauseDead);
	bool CheckCanResurrect(bool CheckMode);
	void CheckIsAlive(bool CheckMode, bool Bypass, bool* Value);
	void ClearAllChecks();
	void ClearCheckList(TArray<class FName>& CheckNames);
	void GetAllConstants(TArray<class FName>* Array);
	bool HasCheck(const class FName& ItemToFind);
	void InvalidateCheck();
	void IsCheckDeclared(class FName CheckName);
	void MergeFrom(class UBP_BattleCheckContext_C* Other);
	void OnConstruct();
	void OnHPChanged();
	void OnNewTurn();
	bool ShouldAssert(bool Bool);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BattleCheckContext_C">();
	}
	static class UBP_BattleCheckContext_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_BattleCheckContext_C>();
	}
};
static_assert(alignof(UBP_BattleCheckContext_C) == 0x000008, "Wrong alignment on UBP_BattleCheckContext_C");
static_assert(sizeof(UBP_BattleCheckContext_C) == 0x000068, "Wrong size on UBP_BattleCheckContext_C");
static_assert(offsetof(UBP_BattleCheckContext_C, ActiveChecks) == 0x000028, "Member 'UBP_BattleCheckContext_C::ActiveChecks' has a wrong offset!");
static_assert(offsetof(UBP_BattleCheckContext_C, CharacterStats) == 0x000038, "Member 'UBP_BattleCheckContext_C::CharacterStats' has a wrong offset!");
static_assert(offsetof(UBP_BattleCheckContext_C, Constant_IsAlive) == 0x000040, "Member 'UBP_BattleCheckContext_C::Constant_IsAlive' has a wrong offset!");
static_assert(offsetof(UBP_BattleCheckContext_C, Constant_CanResurrect) == 0x000048, "Member 'UBP_BattleCheckContext_C::Constant_CanResurrect' has a wrong offset!");
static_assert(offsetof(UBP_BattleCheckContext_C, IsConstructed) == 0x000050, "Member 'UBP_BattleCheckContext_C::IsConstructed' has a wrong offset!");
static_assert(offsetof(UBP_BattleCheckContext_C, Constant_CanRecoverHP) == 0x000054, "Member 'UBP_BattleCheckContext_C::Constant_CanRecoverHP' has a wrong offset!");
static_assert(offsetof(UBP_BattleCheckContext_C, Constant_CanRecoverMP) == 0x00005C, "Member 'UBP_BattleCheckContext_C::Constant_CanRecoverMP' has a wrong offset!");
static_assert(offsetof(UBP_BattleCheckContext_C, FEATURE_IsAssertive) == 0x000064, "Member 'UBP_BattleCheckContext_C::FEATURE_IsAssertive' has a wrong offset!");

}

