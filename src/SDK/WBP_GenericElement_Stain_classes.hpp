﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_GenericElement_Stain

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SandFall_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_classes.hpp"
#include "EAttackType_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_GenericElement_Stain.WBP_GenericElement_Stain_C
// 0x0070 (0x0350 - 0x02E0)
class UWBP_GenericElement_Stain_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anim_Disappear;                                    // 0x02E8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_Appear;                                       // 0x02F0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystemWidget*                   FX_PuffSmoke;                                      // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNiagaraSystemWidget*                   FX_Stain_Outer;                                    // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          Size;                                              // 0x0308(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_309[0x7];                                      // 0x0309(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              Desired_Size;                                      // 0x0310(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          IsIncrease;                                        // 0x0320(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_321[0x7];                                      // 0x0321(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSoundEventDataTableRowHandle          SD_Stain_TurnStart;                                // 0x0328(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UMaterialInstanceDynamic*               MID_ElementFX;                                     // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        FX_ScaleX;                                         // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        FX_ScaleY;                                         // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Appear(const struct FLinearColor& Color);
	void ChangeStainColor(EAttackType ElementType);
	void Construct();
	void Disappear();
	void ExecuteUbergraph_WBP_GenericElement_Stain(int32 EntryPoint);
	void GetStainsColors(EAttackType AttackType, struct FLinearColor* OuterColor, struct FLinearColor* CenterColor);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_GenericElement_Stain_C">();
	}
	static class UWBP_GenericElement_Stain_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_GenericElement_Stain_C>();
	}
};
static_assert(alignof(UWBP_GenericElement_Stain_C) == 0x000008, "Wrong alignment on UWBP_GenericElement_Stain_C");
static_assert(sizeof(UWBP_GenericElement_Stain_C) == 0x000350, "Wrong size on UWBP_GenericElement_Stain_C");
static_assert(offsetof(UWBP_GenericElement_Stain_C, UberGraphFrame) == 0x0002E0, "Member 'UWBP_GenericElement_Stain_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_GenericElement_Stain_C, Anim_Disappear) == 0x0002E8, "Member 'UWBP_GenericElement_Stain_C::Anim_Disappear' has a wrong offset!");
static_assert(offsetof(UWBP_GenericElement_Stain_C, Anim_Appear) == 0x0002F0, "Member 'UWBP_GenericElement_Stain_C::Anim_Appear' has a wrong offset!");
static_assert(offsetof(UWBP_GenericElement_Stain_C, FX_PuffSmoke) == 0x0002F8, "Member 'UWBP_GenericElement_Stain_C::FX_PuffSmoke' has a wrong offset!");
static_assert(offsetof(UWBP_GenericElement_Stain_C, FX_Stain_Outer) == 0x000300, "Member 'UWBP_GenericElement_Stain_C::FX_Stain_Outer' has a wrong offset!");
static_assert(offsetof(UWBP_GenericElement_Stain_C, Size) == 0x000308, "Member 'UWBP_GenericElement_Stain_C::Size' has a wrong offset!");
static_assert(offsetof(UWBP_GenericElement_Stain_C, Desired_Size) == 0x000310, "Member 'UWBP_GenericElement_Stain_C::Desired_Size' has a wrong offset!");
static_assert(offsetof(UWBP_GenericElement_Stain_C, IsIncrease) == 0x000320, "Member 'UWBP_GenericElement_Stain_C::IsIncrease' has a wrong offset!");
static_assert(offsetof(UWBP_GenericElement_Stain_C, SD_Stain_TurnStart) == 0x000328, "Member 'UWBP_GenericElement_Stain_C::SD_Stain_TurnStart' has a wrong offset!");
static_assert(offsetof(UWBP_GenericElement_Stain_C, MID_ElementFX) == 0x000338, "Member 'UWBP_GenericElement_Stain_C::MID_ElementFX' has a wrong offset!");
static_assert(offsetof(UWBP_GenericElement_Stain_C, FX_ScaleX) == 0x000340, "Member 'UWBP_GenericElement_Stain_C::FX_ScaleX' has a wrong offset!");
static_assert(offsetof(UWBP_GenericElement_Stain_C, FX_ScaleY) == 0x000348, "Member 'UWBP_GenericElement_Stain_C::FX_ScaleY' has a wrong offset!");

}

