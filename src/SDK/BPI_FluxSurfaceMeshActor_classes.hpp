﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_FluxSurfaceMeshActor

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_FluxSurfaceMeshActor.BPI_FluxSurfaceMeshActor_C
// 0x0000 (0x0000 - 0x0000)
class IBPI_FluxSurfaceMeshActor_C final
{
public:
	void SetExternalMaterial(class UMaterialInterface* OverWater);
	void GetGlassMaterials(TArray<class UMaterialInstanceDynamic*>* NewParam);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_FluxSurfaceMeshActor_C">();
	}
	static class IBPI_FluxSurfaceMeshActor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_FluxSurfaceMeshActor_C>();
	}

	class UObject* AsUObject()
	{
		return reinterpret_cast<UObject*>(this);
	}
	const class UObject* AsUObject() const
	{
		return reinterpret_cast<const UObject*>(this);
	}
};
static_assert(alignof(IBPI_FluxSurfaceMeshActor_C) == 0x000001, "Wrong alignment on IBPI_FluxSurfaceMeshActor_C");
static_assert(sizeof(IBPI_FluxSurfaceMeshActor_C) == 0x000001, "Wrong size on IBPI_FluxSurfaceMeshActor_C");

}

