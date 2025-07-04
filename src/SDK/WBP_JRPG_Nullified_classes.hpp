﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_JRPG_Nullified

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "EAttackType_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_JRPG_Nullified.WBP_JRPG_Nullified_C
// 0x0028 (0x0308 - 0x02E0)
class UWBP_JRPG_Nullified_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anim_Damagefade;                                   // 0x02E8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 ElementIcon;                                       // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AActor*                                 Actor_Reference;                                   // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	EAttackType                                   AttackType;                                        // 0x0300(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_WBP_JRPG_Nullified(int32 EntryPoint);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_JRPG_Nullified_C">();
	}
	static class UWBP_JRPG_Nullified_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_JRPG_Nullified_C>();
	}
};
static_assert(alignof(UWBP_JRPG_Nullified_C) == 0x000008, "Wrong alignment on UWBP_JRPG_Nullified_C");
static_assert(sizeof(UWBP_JRPG_Nullified_C) == 0x000308, "Wrong size on UWBP_JRPG_Nullified_C");
static_assert(offsetof(UWBP_JRPG_Nullified_C, UberGraphFrame) == 0x0002E0, "Member 'UWBP_JRPG_Nullified_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_JRPG_Nullified_C, Anim_Damagefade) == 0x0002E8, "Member 'UWBP_JRPG_Nullified_C::Anim_Damagefade' has a wrong offset!");
static_assert(offsetof(UWBP_JRPG_Nullified_C, ElementIcon) == 0x0002F0, "Member 'UWBP_JRPG_Nullified_C::ElementIcon' has a wrong offset!");
static_assert(offsetof(UWBP_JRPG_Nullified_C, Actor_Reference) == 0x0002F8, "Member 'UWBP_JRPG_Nullified_C::Actor_Reference' has a wrong offset!");
static_assert(offsetof(UWBP_JRPG_Nullified_C, AttackType) == 0x000300, "Member 'UWBP_JRPG_Nullified_C::AttackType' has a wrong offset!");

}

