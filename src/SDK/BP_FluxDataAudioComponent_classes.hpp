﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FluxDataAudioComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "BP_FluxDataComponent_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_FluxDataAudioComponent.BP_FluxDataAudioComponent_C
// 0x00A8 (0x0208 - 0x0160)
class UBP_FluxDataAudioComponent_C final : public UBP_FluxDataComponent_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_FluxDataAudioComponent_C;        // 0x0160(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                        AudioSource;                                       // 0x0168(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             SoundMixer;                                        // 0x0170(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             SoundParameter;                                    // 0x0178(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        SourceLocationChange;                              // 0x0180(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        SourceVolumeChange;                                // 0x0188(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SearchGridDivisions;                               // 0x0190(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_194[0x4];                                      // 0x0194(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        SearchGridWidth;                                   // 0x0198(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        DistantSamples;                                    // 0x01A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        AmbientVolume;                                     // 0x01A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CloseSamples;                                      // 0x01B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                FromOldToNewLocation;                              // 0x01B8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                OldLocation;                                       // 0x01D0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                NewLocation;                                       // 0x01E8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        AmbientVelocity;                                   // 0x0200(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UpdateSource(const struct FVector& Location, double Velocity, int32 Index_0, double Distance);
	void SetFluidDistance(double CameraNearSurface);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveParticleData(const TArray<struct FBasicParticleData>& Data, class UNiagaraSystem* NiagaraSystem, const struct FVector& SimulationPositionOffset);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_FluxDataAudioComponent(int32 EntryPoint);
	void DrawDebugSource();
	void ApplyNiagaraParameters();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FluxDataAudioComponent_C">();
	}
	static class UBP_FluxDataAudioComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_FluxDataAudioComponent_C>();
	}
};
static_assert(alignof(UBP_FluxDataAudioComponent_C) == 0x000008, "Wrong alignment on UBP_FluxDataAudioComponent_C");
static_assert(sizeof(UBP_FluxDataAudioComponent_C) == 0x000208, "Wrong size on UBP_FluxDataAudioComponent_C");
static_assert(offsetof(UBP_FluxDataAudioComponent_C, UberGraphFrame_BP_FluxDataAudioComponent_C) == 0x000160, "Member 'UBP_FluxDataAudioComponent_C::UberGraphFrame_BP_FluxDataAudioComponent_C' has a wrong offset!");
static_assert(offsetof(UBP_FluxDataAudioComponent_C, AudioSource) == 0x000168, "Member 'UBP_FluxDataAudioComponent_C::AudioSource' has a wrong offset!");
static_assert(offsetof(UBP_FluxDataAudioComponent_C, SoundMixer) == 0x000170, "Member 'UBP_FluxDataAudioComponent_C::SoundMixer' has a wrong offset!");
static_assert(offsetof(UBP_FluxDataAudioComponent_C, SoundParameter) == 0x000178, "Member 'UBP_FluxDataAudioComponent_C::SoundParameter' has a wrong offset!");
static_assert(offsetof(UBP_FluxDataAudioComponent_C, SourceLocationChange) == 0x000180, "Member 'UBP_FluxDataAudioComponent_C::SourceLocationChange' has a wrong offset!");
static_assert(offsetof(UBP_FluxDataAudioComponent_C, SourceVolumeChange) == 0x000188, "Member 'UBP_FluxDataAudioComponent_C::SourceVolumeChange' has a wrong offset!");
static_assert(offsetof(UBP_FluxDataAudioComponent_C, SearchGridDivisions) == 0x000190, "Member 'UBP_FluxDataAudioComponent_C::SearchGridDivisions' has a wrong offset!");
static_assert(offsetof(UBP_FluxDataAudioComponent_C, SearchGridWidth) == 0x000198, "Member 'UBP_FluxDataAudioComponent_C::SearchGridWidth' has a wrong offset!");
static_assert(offsetof(UBP_FluxDataAudioComponent_C, DistantSamples) == 0x0001A0, "Member 'UBP_FluxDataAudioComponent_C::DistantSamples' has a wrong offset!");
static_assert(offsetof(UBP_FluxDataAudioComponent_C, AmbientVolume) == 0x0001A8, "Member 'UBP_FluxDataAudioComponent_C::AmbientVolume' has a wrong offset!");
static_assert(offsetof(UBP_FluxDataAudioComponent_C, CloseSamples) == 0x0001B0, "Member 'UBP_FluxDataAudioComponent_C::CloseSamples' has a wrong offset!");
static_assert(offsetof(UBP_FluxDataAudioComponent_C, FromOldToNewLocation) == 0x0001B8, "Member 'UBP_FluxDataAudioComponent_C::FromOldToNewLocation' has a wrong offset!");
static_assert(offsetof(UBP_FluxDataAudioComponent_C, OldLocation) == 0x0001D0, "Member 'UBP_FluxDataAudioComponent_C::OldLocation' has a wrong offset!");
static_assert(offsetof(UBP_FluxDataAudioComponent_C, NewLocation) == 0x0001E8, "Member 'UBP_FluxDataAudioComponent_C::NewLocation' has a wrong offset!");
static_assert(offsetof(UBP_FluxDataAudioComponent_C, AmbientVelocity) == 0x000200, "Member 'UBP_FluxDataAudioComponent_C::AmbientVelocity' has a wrong offset!");

}

