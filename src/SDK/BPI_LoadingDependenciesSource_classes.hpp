﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_LoadingDependenciesSource

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_LoadingDependenciesSource.BPI_LoadingDependenciesSource_C
// 0x0000 (0x0000 - 0x0000)
class IBPI_LoadingDependenciesSource_C final
{
public:
	void BPI_GetDependencies(TArray<TSoftClassPtr<class UClass>>* Classes, TArray<TSoftObjectPtr<class UObject>>* Assets, TArray<TScriptInterface<class IBPI_LoadingDependenciesSource_C>>* ExternalDependencies);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_LoadingDependenciesSource_C">();
	}
	static class IBPI_LoadingDependenciesSource_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_LoadingDependenciesSource_C>();
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
static_assert(alignof(IBPI_LoadingDependenciesSource_C) == 0x000001, "Wrong alignment on IBPI_LoadingDependenciesSource_C");
static_assert(sizeof(IBPI_LoadingDependenciesSource_C) == 0x000001, "Wrong size on IBPI_LoadingDependenciesSource_C");

}

