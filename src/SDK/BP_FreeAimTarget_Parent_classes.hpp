﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FreeAimTarget_Parent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_jRPG_InteractionObject_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_FreeAimTarget_Parent.BP_FreeAimTarget_Parent_C
// 0x0020 (0x0310 - 0x02F0)
class ABP_FreeAimTarget_Parent_C : public ABP_jRPG_InteractionObject_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_FreeAimTarget_Parent_C;          // 0x02F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x02F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class ATargetPoint*>                   QA_ExpectedLineOfSightTargetPoints;                // 0x0300(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)

public:
	void UserConstructionScript();
	void QA_TraceLinesOfSight(const TArray<class FText>& OutMessages, float DrawTime);
	void IsFreeAimTargetDisabled(bool* IsDisabled);
	void FreeAimHit(class ABP_jRPG_Character_World_C* PlayerCharacterWorld, const struct FVector& HitLocation, bool IsDisabled);
	void ExplorationAttacked(class ABP_jRPG_Character_World_C* PlayerCharacter, const struct FVector& ImpactPoint);
	void ExecuteUbergraph_BP_FreeAimTarget_Parent(int32 EntryPoint);
	void EDITOR_ShowLinesOfSights();
	bool CheckForErrors(TArray<class FText>& ErrorMessages);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FreeAimTarget_Parent_C">();
	}
	static class ABP_FreeAimTarget_Parent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_FreeAimTarget_Parent_C>();
	}
};
static_assert(alignof(ABP_FreeAimTarget_Parent_C) == 0x000008, "Wrong alignment on ABP_FreeAimTarget_Parent_C");
static_assert(sizeof(ABP_FreeAimTarget_Parent_C) == 0x000310, "Wrong size on ABP_FreeAimTarget_Parent_C");
static_assert(offsetof(ABP_FreeAimTarget_Parent_C, UberGraphFrame_BP_FreeAimTarget_Parent_C) == 0x0002F0, "Member 'ABP_FreeAimTarget_Parent_C::UberGraphFrame_BP_FreeAimTarget_Parent_C' has a wrong offset!");
static_assert(offsetof(ABP_FreeAimTarget_Parent_C, StaticMesh) == 0x0002F8, "Member 'ABP_FreeAimTarget_Parent_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_FreeAimTarget_Parent_C, QA_ExpectedLineOfSightTargetPoints) == 0x000300, "Member 'ABP_FreeAimTarget_Parent_C::QA_ExpectedLineOfSightTargetPoints' has a wrong offset!");

}

