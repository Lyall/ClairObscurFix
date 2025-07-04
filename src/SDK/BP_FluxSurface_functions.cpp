﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FluxSurface

#include "Basic.hpp"

#include "BP_FluxSurface_classes.hpp"
#include "BP_FluxSurface_parameters.hpp"


namespace SDK
{

// Function BP_FluxSurface.BP_FluxSurface_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_FluxSurface_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FluxSurface.BP_FluxSurface_C.UpdateHeightMap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture*                         Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_FluxSurface_C::UpdateHeightMap(class UTexture* Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_C", "UpdateHeightMap");

	Params::BP_FluxSurface_C_UpdateHeightMap Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FluxSurface.BP_FluxSurface_C.UpdateCamera
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FluxSurface_C::UpdateCamera(double DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_C", "UpdateCamera");

	Params::BP_FluxSurface_C_UpdateCamera Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FluxSurface.BP_FluxSurface_C.SpawnSplashAtLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FVector&                   Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FluxSurface_C::SpawnSplashAtLocation(const struct FVector& Location, int32 Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_C", "SpawnSplashAtLocation");

	Params::BP_FluxSurface_C_SpawnSplashAtLocation Parms{};

	Parms.Location = std::move(Location);
	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FluxSurface.BP_FluxSurface_C.SpawnSplash
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FVector&                   Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FBS_FluxSplashData&        BS_FluxSplashData                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

void ABP_FluxSurface_C::SpawnSplash(const struct FVector& Location, const struct FBS_FluxSplashData& BS_FluxSplashData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_C", "SpawnSplash");

	Params::BP_FluxSurface_C_SpawnSplash Parms{};

	Parms.Location = std::move(Location);
	Parms.BS_FluxSplashData = std::move(BS_FluxSplashData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FluxSurface.BP_FluxSurface_C.SetWaveTextureAndArea
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextureRenderTarget2D*           Texture                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const struct FLinearColor&              Area                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FluxSurface_C::SetWaveTextureAndArea(class UTextureRenderTarget2D* Texture, const struct FLinearColor& Area)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_C", "SetWaveTextureAndArea");

	Params::BP_FluxSurface_C_SetWaveTextureAndArea Parms{};

	Parms.Texture = Texture;
	Parms.Area = std::move(Area);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FluxSurface.BP_FluxSurface_C.SetWaveTexture
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FluxSurface_C::SetWaveTexture()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_C", "SetWaveTexture");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FluxSurface.BP_FluxSurface_C.SetWaveProfile
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPDA_FluxWaveProfile_C*           Profile                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_FluxSurface_C::SetWaveProfile(class UPDA_FluxWaveProfile_C* Profile)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_C", "SetWaveProfile");

	Params::BP_FluxSurface_C_SetWaveProfile Parms{};

	Parms.Profile = Profile;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FluxSurface.BP_FluxSurface_C.SetStateHeightWetMap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture*                         Texture                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_FluxSurface_C::SetStateHeightWetMap(class UTexture* Texture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_C", "SetStateHeightWetMap");

	Params::BP_FluxSurface_C_SetStateHeightWetMap Parms{};

	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FluxSurface.BP_FluxSurface_C.SetSimulationState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPDA_FluxSimulationState_C*       State                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_FluxSurface_C::SetSimulationState(class UPDA_FluxSimulationState_C* State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_C", "SetSimulationState");

	Params::BP_FluxSurface_C_SetSimulationState Parms{};

	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FluxSurface.BP_FluxSurface_C.SetNiagaraData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraComponent*                NiagaraSystem                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool&                                   RequiredGround                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool&                                   RequiredWave                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FluxSurface_C::SetNiagaraData(class UNiagaraComponent* NiagaraSystem, bool& RequiredGround, bool& RequiredWave)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_C", "SetNiagaraData");

	Params::BP_FluxSurface_C_SetNiagaraData Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.RequiredGround = RequiredGround;
	Parms.RequiredWave = RequiredWave;

	UObject::ProcessEvent(Func, &Parms);

	RequiredGround = Parms.RequiredGround;
	RequiredWave = Parms.RequiredWave;
}


// Function BP_FluxSurface.BP_FluxSurface_C.SetInteractionsTexture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextureRenderTarget2D*           Texture                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_FluxSurface_C::SetInteractionsTexture(class UTextureRenderTarget2D* Texture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_C", "SetInteractionsTexture");

	Params::BP_FluxSurface_C_SetInteractionsTexture Parms{};

	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FluxSurface.BP_FluxSurface_C.SetInteractionsArea
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FLinearColor&              Area                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FluxSurface_C::SetInteractionsArea(const struct FLinearColor& Area)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_C", "SetInteractionsArea");

	Params::BP_FluxSurface_C_SetInteractionsArea Parms{};

	Parms.Area = std::move(Area);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FluxSurface.BP_FluxSurface_C.SetColorPreset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPDA_FluxSurfacePreset_C*         Preset                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_FluxSurface_C::SetColorPreset(int32 Index_0, class UPDA_FluxSurfacePreset_C* Preset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_C", "SetColorPreset");

	Params::BP_FluxSurface_C_SetColorPreset Parms{};

	Parms.Index_0 = Index_0;
	Parms.Preset = Preset;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FluxSurface.BP_FluxSurface_C.SetCoastlineState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPDA_FluxCoastlineState_C*        State                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_FluxSurface_C::SetCoastlineState(class UPDA_FluxCoastlineState_C* State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_C", "SetCoastlineState");

	Params::BP_FluxSurface_C_SetCoastlineState Parms{};

	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FluxSurface.BP_FluxSurface_C.SetCameraUnderVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    PostProcessVolume                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    BottomSurface                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FluxSurface_C::SetCameraUnderVisibility(bool PostProcessVolume, bool BottomSurface)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_C", "SetCameraUnderVisibility");

	Params::BP_FluxSurface_C_SetCameraUnderVisibility Parms{};

	Parms.PostProcessVolume = PostProcessVolume;
	Parms.BottomSurface = BottomSurface;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FluxSurface.BP_FluxSurface_C.RemovePostprocess
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_FluxSurface_C::RemovePostprocess()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_C", "RemovePostprocess");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FluxSurface.BP_FluxSurface_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FluxSurface_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_C", "ReceiveTick");

	Params::BP_FluxSurface_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FluxSurface.BP_FluxSurface_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FluxSurface_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_C", "ReceiveEndPlay");

	Params::BP_FluxSurface_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FluxSurface.BP_FluxSurface_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_FluxSurface_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FluxSurface.BP_FluxSurface_C.OnGlassMeshChanged
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FluxSurface_C::OnGlassMeshChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_C", "OnGlassMeshChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FluxSurface.BP_FluxSurface_C.OffsetWorld
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FluxSurface_C::OffsetWorld()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_C", "OffsetWorld");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FluxSurface.BP_FluxSurface_C.LoadMesh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_FluxSurface_C::LoadMesh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_C", "LoadMesh");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FluxSurface.BP_FluxSurface_C.InitializeVolumes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FVector&                   AreaSize                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FluxSurface_C::InitializeVolumes(const struct FVector& AreaSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_C", "InitializeVolumes");

	Params::BP_FluxSurface_C_InitializeVolumes Parms{};

	Parms.AreaSize = std::move(AreaSize);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FluxSurface.BP_FluxSurface_C.InitializeSurfaces
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FVector&                   AreaSize                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FluxSurface_C::InitializeSurfaces(const struct FVector& AreaSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_C", "InitializeSurfaces");

	Params::BP_FluxSurface_C_InitializeSurfaces Parms{};

	Parms.AreaSize = std::move(AreaSize);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FluxSurface.BP_FluxSurface_C.InitializeStates
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_FluxSurface_C::InitializeStates()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_C", "InitializeStates");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FluxSurface.BP_FluxSurface_C.InitializeOverlaping
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_FluxSurface_C::InitializeOverlaping()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_C", "InitializeOverlaping");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FluxSurface.BP_FluxSurface_C.InitializeOvelapingEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_FluxSurface_C::InitializeOvelapingEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_C", "InitializeOvelapingEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FluxSurface.BP_FluxSurface_C.InitializeAllStates
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FluxSurface_C::InitializeAllStates()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_C", "InitializeAllStates");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FluxSurface.BP_FluxSurface_C.GetWaveTextureMaterials
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UMaterialInstanceDynamic*>*MaterialInstances_0                                    (Parm, OutParm)

void ABP_FluxSurface_C::GetWaveTextureMaterials(TArray<class UMaterialInstanceDynamic*>* MaterialInstances_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_C", "GetWaveTextureMaterials");

	Params::BP_FluxSurface_C_GetWaveTextureMaterials Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (MaterialInstances_0 != nullptr)
		*MaterialInstances_0 = std::move(Parms.MaterialInstances_0);
}


// Function BP_FluxSurface.BP_FluxSurface_C.GetSimulationState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPDA_FluxSimulationState_C**      State                                                  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_FluxSurface_C::GetSimulationState(class UPDA_FluxSimulationState_C** State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_C", "GetSimulationState");

	Params::BP_FluxSurface_C_GetSimulationState Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (State != nullptr)
		*State = Parms.State;
}


// Function BP_FluxSurface.BP_FluxSurface_C.GetColorPreset
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPDA_FluxSurfacePreset_C**        Preset                                                 (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_FluxSurface_C::GetColorPreset(int32 Index_0, class UPDA_FluxSurfacePreset_C** Preset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_C", "GetColorPreset");

	Params::BP_FluxSurface_C_GetColorPreset Parms{};

	Parms.Index_0 = Index_0;

	UObject::ProcessEvent(Func, &Parms);

	if (Preset != nullptr)
		*Preset = Parms.Preset;
}


// Function BP_FluxSurface.BP_FluxSurface_C.GetCoastlineState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPDA_FluxCoastlineState_C**       State                                                  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_FluxSurface_C::GetCoastlineState(class UPDA_FluxCoastlineState_C** State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_C", "GetCoastlineState");

	Params::BP_FluxSurface_C_GetCoastlineState Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (State != nullptr)
		*State = Parms.State;
}


// Function BP_FluxSurface.BP_FluxSurface_C.GenerateProceduralMeshFromSimulationState
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FluxSurface_C::GenerateProceduralMeshFromSimulationState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_C", "GenerateProceduralMeshFromSimulationState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FluxSurface.BP_FluxSurface_C.GenerateMesh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPDA_FluxSimulationState_C*       State                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_FluxSurface_C::GenerateMesh(class UPDA_FluxSimulationState_C* State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_C", "GenerateMesh");

	Params::BP_FluxSurface_C_GenerateMesh Parms{};

	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FluxSurface.BP_FluxSurface_C.Generate
// (BlueprintCallable, BlueprintEvent)

void ABP_FluxSurface_C::Generate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_C", "Generate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FluxSurface.BP_FluxSurface_C.ExecuteUbergraph_BP_FluxSurface
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FluxSurface_C::ExecuteUbergraph_BP_FluxSurface(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_C", "ExecuteUbergraph_BP_FluxSurface");

	Params::BP_FluxSurface_C_ExecuteUbergraph_BP_FluxSurface Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FluxSurface.BP_FluxSurface_C.DetectCurrentCamera
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FluxSurface_C::DetectCurrentCamera()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_C", "DetectCurrentCamera");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FluxSurface.BP_FluxSurface_C.CreateMaterialsForMesh
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FluxSurface_C::CreateMaterialsForMesh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_C", "CreateMaterialsForMesh");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FluxSurface.BP_FluxSurface_C.CreateMaterialsForGlass
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_FluxSurface_C::CreateMaterialsForGlass()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_C", "CreateMaterialsForGlass");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FluxSurface.BP_FluxSurface_C.CreateMaterials
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_FluxSurface_C::CreateMaterials()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_C", "CreateMaterials");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FluxSurface.BP_FluxSurface_C.CreateDynamicWaterBodyMaterial
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           WaterBodyActor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic**        Material                                               (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_FluxSurface_C::CreateDynamicWaterBodyMaterial(class AActor* WaterBodyActor, class UMaterialInstanceDynamic** Material)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_C", "CreateDynamicWaterBodyMaterial");

	Params::BP_FluxSurface_C_CreateDynamicWaterBodyMaterial Parms{};

	Parms.WaterBodyActor = WaterBodyActor;

	UObject::ProcessEvent(Func, &Parms);

	if (Material != nullptr)
		*Material = Parms.Material;
}


// Function BP_FluxSurface.BP_FluxSurface_C.ConstructSurfaceMesh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_FluxSurface_C::ConstructSurfaceMesh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_C", "ConstructSurfaceMesh");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FluxSurface.BP_FluxSurface_C.CanRenderWave
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                                   CanRender                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FluxSurface_C::CanRenderWave(bool* CanRender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_C", "CanRenderWave");

	Params::BP_FluxSurface_C_CanRenderWave Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CanRender != nullptr)
		*CanRender = Parms.CanRender;
}


// Function BP_FluxSurface.BP_FluxSurface_C.CanRenderInteractions
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                                   CanRender                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FluxSurface_C::CanRenderInteractions(bool* CanRender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_C", "CanRenderInteractions");

	Params::BP_FluxSurface_C_CanRenderInteractions Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CanRender != nullptr)
		*CanRender = Parms.CanRender;
}


// Function BP_FluxSurface.BP_FluxSurface_C.BndEvt__BP_FluxSurface_Volume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FHitResult&                SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_FluxSurface_C::BndEvt__BP_FluxSurface_Volume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_C", "BndEvt__BP_FluxSurface_Volume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::BP_FluxSurface_C_BndEvt__BP_FluxSurface_Volume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FluxSurface.BP_FluxSurface_C.ApplySurfaceNiagaraData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraComponent*                ParticleSystem                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    RequiredGround                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    RequiredWave                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FluxSurface_C::ApplySurfaceNiagaraData(class UNiagaraComponent* ParticleSystem, bool RequiredGround, bool RequiredWave)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_C", "ApplySurfaceNiagaraData");

	Params::BP_FluxSurface_C_ApplySurfaceNiagaraData Parms{};

	Parms.ParticleSystem = ParticleSystem;
	Parms.RequiredGround = RequiredGround;
	Parms.RequiredWave = RequiredWave;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FluxSurface.BP_FluxSurface_C.ApplySurfaceMaterialData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const TArray<class UMaterialInstanceDynamic*>&Materials                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_FluxSurface_C::ApplySurfaceMaterialData(const TArray<class UMaterialInstanceDynamic*>& Materials)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_C", "ApplySurfaceMaterialData");

	Params::BP_FluxSurface_C_ApplySurfaceMaterialData Parms{};

	Parms.Materials = std::move(Materials);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FluxSurface.BP_FluxSurface_C.ApplySurfaceBoundsZ
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FluxSurface_C::ApplySurfaceBoundsZ()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_C", "ApplySurfaceBoundsZ");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FluxSurface.BP_FluxSurface_C.ApplyPainter
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FluxSurface_C::ApplyPainter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_C", "ApplyPainter");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FluxSurface.BP_FluxSurface_C.ApplyMaterialData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UMaterialInstanceDynamic*>&Materials                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_FluxSurface_C::ApplyMaterialData(TArray<class UMaterialInstanceDynamic*>& Materials)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_C", "ApplyMaterialData");

	Params::BP_FluxSurface_C_ApplyMaterialData Parms{};

	Parms.Materials = std::move(Materials);

	UObject::ProcessEvent(Func, &Parms);

	Materials = std::move(Parms.Materials);
}


// Function BP_FluxSurface.BP_FluxSurface_C.ApplyMask
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FluxSurface_C::ApplyMask()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_C", "ApplyMask");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FluxSurface.BP_FluxSurface_C.ApplyColorProfiles
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FluxSurface_C::ApplyColorProfiles()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_C", "ApplyColorProfiles");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FluxSurface.BP_FluxSurface_C.ApplyColor
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FluxSurface_C::ApplyColor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_C", "ApplyColor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FluxSurface.BP_FluxSurface_C.AddToUnderSurfaceList
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class USceneComponent*&           Item                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void ABP_FluxSurface_C::AddToUnderSurfaceList(const class USceneComponent*& Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_C", "AddToUnderSurfaceList");

	Params::BP_FluxSurface_C_AddToUnderSurfaceList Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FluxSurface.BP_FluxSurface_C.GetVolumeCollision
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UPrimitiveComponent**             Volume                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_FluxSurface_C::GetVolumeCollision(class UPrimitiveComponent** Volume) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_C", "GetVolumeCollision");

	Params::BP_FluxSurface_C_GetVolumeCollision Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Volume != nullptr)
		*Volume = Parms.Volume;
}


// Function BP_FluxSurface.BP_FluxSurface_C.Get Cut Mask
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector4*                        Mask                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FluxSurface_C::Get_Cut_Mask(struct FVector4* Mask) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_C", "Get Cut Mask");

	Params::BP_FluxSurface_C_Get_Cut_Mask Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Mask != nullptr)
		*Mask = std::move(Parms.Mask);
}

}

