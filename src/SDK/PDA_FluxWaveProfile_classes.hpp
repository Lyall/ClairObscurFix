﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PDA_FluxWaveProfile

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass PDA_FluxWaveProfile.PDA_FluxWaveProfile_C
// 0x0030 (0x0060 - 0x0030)
class UPDA_FluxWaveProfile_C final : public UPrimaryDataAsset
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0030(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTexture*                               WaveProfileForwardMap;                             // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture*                               WaveProfileInverseMap;                             // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           WaveProfileDecode;                                 // 0x0048(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Frames;                                            // 0x0058(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         WaveHeight;                                        // 0x005C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SetWaveProfileData(class UTexture* WaveProfilesForward, class UTexture* WaveProfilesInverse, const struct FLinearColor& WaveProfileDecode_0, int32 Frames_0, int32 WaveWidth, int32 WaveHeight_0);
	void GetExternalReferences(TArray<class UTexture*>* Objects);
	void ExecuteUbergraph_PDA_FluxWaveProfile(int32 EntryPoint);
	void CopyPropertiesToObject(class UObject* Destination, bool* Done);
	void ClearExternalReferences();

	void ApplyWaveProfileNiagaraData(class UNiagaraComponent* NiagaraSystem) const;
	void ApplyWaveProfileMaterialData(TArray<class UMaterialInstanceDynamic*>& Materials) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PDA_FluxWaveProfile_C">();
	}
	static class UPDA_FluxWaveProfile_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPDA_FluxWaveProfile_C>();
	}
};
static_assert(alignof(UPDA_FluxWaveProfile_C) == 0x000008, "Wrong alignment on UPDA_FluxWaveProfile_C");
static_assert(sizeof(UPDA_FluxWaveProfile_C) == 0x000060, "Wrong size on UPDA_FluxWaveProfile_C");
static_assert(offsetof(UPDA_FluxWaveProfile_C, UberGraphFrame) == 0x000030, "Member 'UPDA_FluxWaveProfile_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPDA_FluxWaveProfile_C, WaveProfileForwardMap) == 0x000038, "Member 'UPDA_FluxWaveProfile_C::WaveProfileForwardMap' has a wrong offset!");
static_assert(offsetof(UPDA_FluxWaveProfile_C, WaveProfileInverseMap) == 0x000040, "Member 'UPDA_FluxWaveProfile_C::WaveProfileInverseMap' has a wrong offset!");
static_assert(offsetof(UPDA_FluxWaveProfile_C, WaveProfileDecode) == 0x000048, "Member 'UPDA_FluxWaveProfile_C::WaveProfileDecode' has a wrong offset!");
static_assert(offsetof(UPDA_FluxWaveProfile_C, Frames) == 0x000058, "Member 'UPDA_FluxWaveProfile_C::Frames' has a wrong offset!");
static_assert(offsetof(UPDA_FluxWaveProfile_C, WaveHeight) == 0x00005C, "Member 'UPDA_FluxWaveProfile_C::WaveHeight' has a wrong offset!");

}

