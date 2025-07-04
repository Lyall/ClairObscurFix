﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Action_AddBuff

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Action_AddBuff.Action_AddBuff_C
// 0x0028 (0x0050 - 0x0028)
class UAction_AddBuff_C final : public UObject
{
public:
	class UAC_jRPG_CharacterBattleStats_C*        SourceCharacter;                                   // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UAC_jRPG_CharacterBattleStats_C*        TargetCharacter;                                   // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          logEnabled;                                        // 0x0038(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsPrevented;                                       // 0x0039(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A[0x6];                                       // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_BattleBuffInstance_C*               BuffInstance;                                      // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UAction_AddBuff_C*                      ParentAddAction;                                   // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void PreventAddBuff(const class FText& Reason);
	void PrintMessage(const class FText& Message);
	void SetParentAddAction(class UAction_AddBuff_C* ParentAction);
	bool WasBuffCreatedByOuter(class UObject* OuterObject);
	bool WasBuffCreatedByOuterInActionChain(class UObject* OuterObject);

	void GetSourceCharacter(class UAC_jRPG_CharacterBattleStats_C** SourceCharacter_0) const;
	void GetTargetCharacter(class UAC_jRPG_CharacterBattleStats_C** TargetCharacter_0) const;
	void PrintError(const class FText& Message) const;
	void WasPrevented(bool* RawDamages) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Action_AddBuff_C">();
	}
	static class UAction_AddBuff_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAction_AddBuff_C>();
	}
};
static_assert(alignof(UAction_AddBuff_C) == 0x000008, "Wrong alignment on UAction_AddBuff_C");
static_assert(sizeof(UAction_AddBuff_C) == 0x000050, "Wrong size on UAction_AddBuff_C");
static_assert(offsetof(UAction_AddBuff_C, SourceCharacter) == 0x000028, "Member 'UAction_AddBuff_C::SourceCharacter' has a wrong offset!");
static_assert(offsetof(UAction_AddBuff_C, TargetCharacter) == 0x000030, "Member 'UAction_AddBuff_C::TargetCharacter' has a wrong offset!");
static_assert(offsetof(UAction_AddBuff_C, logEnabled) == 0x000038, "Member 'UAction_AddBuff_C::logEnabled' has a wrong offset!");
static_assert(offsetof(UAction_AddBuff_C, IsPrevented) == 0x000039, "Member 'UAction_AddBuff_C::IsPrevented' has a wrong offset!");
static_assert(offsetof(UAction_AddBuff_C, BuffInstance) == 0x000040, "Member 'UAction_AddBuff_C::BuffInstance' has a wrong offset!");
static_assert(offsetof(UAction_AddBuff_C, ParentAddAction) == 0x000048, "Member 'UAction_AddBuff_C::ParentAddAction' has a wrong offset!");

}

