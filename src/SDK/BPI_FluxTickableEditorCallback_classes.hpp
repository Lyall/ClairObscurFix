﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_FluxTickableEditorCallback

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_FluxTickableEditorCallback.BPI_FluxTickableEditorCallback_C
// 0x0000 (0x0000 - 0x0000)
class IBPI_FluxTickableEditorCallback_C final
{
public:
	void UpdateModifierMaterials(const TArray<class UMaterialInstanceDynamic*>& Materials, bool UseVelocityMap);
	void TogleDebugGround();
	void ToggleUpdateSimulation();
	void OnEditorUpdateLoop();
	void OnEditorStopSimulation();
	void OnEditorShowSimulation();
	void OnEditorSelectionChanged(bool Selected);
	void OnEditorRestartSimulation();
	void OnEditorPostLoad();
	void OnEditorModifierChanged();
	void OnEditorIterateSimulation(int32 Iterations);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_FluxTickableEditorCallback_C">();
	}
	static class IBPI_FluxTickableEditorCallback_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_FluxTickableEditorCallback_C>();
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
static_assert(alignof(IBPI_FluxTickableEditorCallback_C) == 0x000001, "Wrong alignment on IBPI_FluxTickableEditorCallback_C");
static_assert(sizeof(IBPI_FluxTickableEditorCallback_C) == 0x000001, "Wrong size on IBPI_FluxTickableEditorCallback_C");

}

