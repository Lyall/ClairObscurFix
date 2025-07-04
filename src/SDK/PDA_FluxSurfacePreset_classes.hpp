﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PDA_FluxSurfacePreset

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PDA_FluxSurfacePreset.PDA_FluxSurfacePreset_C
// 0x0078 (0x00A8 - 0x0030)
class UPDA_FluxSurfacePreset_C final : public UPrimaryDataAsset
{
public:
	TSoftObjectPtr<class UObject>                 ApplyTarget;                                       // 0x0030(0x0028)(Edit, BlueprintVisible, Transient, DisableEditOnInstance, HasGetValueTypeHash)
	double                                        Clarity;                                           // 0x0058(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Scattering;                                        // 0x0060(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Absorption;                                        // 0x0070(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Overlay;                                           // 0x0080(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Behind;                                            // 0x0090(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        PhaseG;                                            // 0x00A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SetSurfaceColor(TArray<class UMaterialInstanceDynamic*>& Materials, const class FString& Postfix);
	void SetEditorOwner(class AActor* Input);
	void LoadFromMaterial(class UMaterialInstanceDynamic* Source);
	void ApplyToSurfaceMaterials();
	void ApplyMaterial(TArray<class UMaterialInstanceDynamic*>& MaterialInstances, const class FString& Postfix);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PDA_FluxSurfacePreset_C">();
	}
	static class UPDA_FluxSurfacePreset_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPDA_FluxSurfacePreset_C>();
	}
};
static_assert(alignof(UPDA_FluxSurfacePreset_C) == 0x000008, "Wrong alignment on UPDA_FluxSurfacePreset_C");
static_assert(sizeof(UPDA_FluxSurfacePreset_C) == 0x0000A8, "Wrong size on UPDA_FluxSurfacePreset_C");
static_assert(offsetof(UPDA_FluxSurfacePreset_C, ApplyTarget) == 0x000030, "Member 'UPDA_FluxSurfacePreset_C::ApplyTarget' has a wrong offset!");
static_assert(offsetof(UPDA_FluxSurfacePreset_C, Clarity) == 0x000058, "Member 'UPDA_FluxSurfacePreset_C::Clarity' has a wrong offset!");
static_assert(offsetof(UPDA_FluxSurfacePreset_C, Scattering) == 0x000060, "Member 'UPDA_FluxSurfacePreset_C::Scattering' has a wrong offset!");
static_assert(offsetof(UPDA_FluxSurfacePreset_C, Absorption) == 0x000070, "Member 'UPDA_FluxSurfacePreset_C::Absorption' has a wrong offset!");
static_assert(offsetof(UPDA_FluxSurfacePreset_C, Overlay) == 0x000080, "Member 'UPDA_FluxSurfacePreset_C::Overlay' has a wrong offset!");
static_assert(offsetof(UPDA_FluxSurfacePreset_C, Behind) == 0x000090, "Member 'UPDA_FluxSurfacePreset_C::Behind' has a wrong offset!");
static_assert(offsetof(UPDA_FluxSurfacePreset_C, PhaseG) == 0x0000A0, "Member 'UPDA_FluxSurfacePreset_C::PhaseG' has a wrong offset!");

}

