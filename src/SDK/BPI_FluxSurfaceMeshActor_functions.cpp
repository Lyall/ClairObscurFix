﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_FluxSurfaceMeshActor

#include "Basic.hpp"

#include "BPI_FluxSurfaceMeshActor_classes.hpp"
#include "BPI_FluxSurfaceMeshActor_parameters.hpp"


namespace SDK
{

// Function BPI_FluxSurfaceMeshActor.BPI_FluxSurfaceMeshActor_C.SetExternalMaterial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface*               OverWater                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPI_FluxSurfaceMeshActor_C::SetExternalMaterial(class UMaterialInterface* OverWater)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPI_FluxSurfaceMeshActor_C", "SetExternalMaterial");

	Params::BPI_FluxSurfaceMeshActor_C_SetExternalMaterial Parms{};

	Parms.OverWater = OverWater;

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function BPI_FluxSurfaceMeshActor.BPI_FluxSurfaceMeshActor_C.GetGlassMaterials
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UMaterialInstanceDynamic*>*NewParam                                               (Parm, OutParm)

void IBPI_FluxSurfaceMeshActor_C::GetGlassMaterials(TArray<class UMaterialInstanceDynamic*>* NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPI_FluxSurfaceMeshActor_C", "GetGlassMaterials");

	Params::BPI_FluxSurfaceMeshActor_C_GetGlassMaterials Parms{};

	AsUObject()->ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = std::move(Parms.NewParam);
}

}

