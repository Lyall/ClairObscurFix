﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MassSpawner

#include "Basic.hpp"

#include "StructUtils_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "ZoneGraph_structs.hpp"
#include "AIModule_structs.hpp"
#include "MassSpawner_structs.hpp"
#include "Engine_classes.hpp"
#include "MassEntity_classes.hpp"


namespace SDK
{

// Class MassSpawner.MassEntityTraitBase
// 0x0000 (0x0028 - 0x0028)
class UMassEntityTraitBase : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MassEntityTraitBase">();
	}
	static class UMassEntityTraitBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMassEntityTraitBase>();
	}
};
static_assert(alignof(UMassEntityTraitBase) == 0x000008, "Wrong alignment on UMassEntityTraitBase");
static_assert(sizeof(UMassEntityTraitBase) == 0x000028, "Wrong size on UMassEntityTraitBase");

// Class MassSpawner.MassAssortedFragmentsTrait
// 0x0020 (0x0048 - 0x0028)
class UMassAssortedFragmentsTrait final : public UMassEntityTraitBase
{
public:
	TArray<struct FInstancedStruct>               Fragments;                                         // 0x0028(0x0010)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FInstancedStruct>               Tags;                                              // 0x0038(0x0010)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MassAssortedFragmentsTrait">();
	}
	static class UMassAssortedFragmentsTrait* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMassAssortedFragmentsTrait>();
	}
};
static_assert(alignof(UMassAssortedFragmentsTrait) == 0x000008, "Wrong alignment on UMassAssortedFragmentsTrait");
static_assert(sizeof(UMassAssortedFragmentsTrait) == 0x000048, "Wrong size on UMassAssortedFragmentsTrait");
static_assert(offsetof(UMassAssortedFragmentsTrait, Fragments) == 0x000028, "Member 'UMassAssortedFragmentsTrait::Fragments' has a wrong offset!");
static_assert(offsetof(UMassAssortedFragmentsTrait, Tags) == 0x000038, "Member 'UMassAssortedFragmentsTrait::Tags' has a wrong offset!");

// Class MassSpawner.MassEntityConfigAsset
// 0x0030 (0x0060 - 0x0030)
class UMassEntityConfigAsset final : public UDataAsset
{
public:
	struct FMassEntityConfig                      Config;                                            // 0x0030(0x0030)(Edit, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MassEntityConfigAsset">();
	}
	static class UMassEntityConfigAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMassEntityConfigAsset>();
	}
};
static_assert(alignof(UMassEntityConfigAsset) == 0x000008, "Wrong alignment on UMassEntityConfigAsset");
static_assert(sizeof(UMassEntityConfigAsset) == 0x000060, "Wrong size on UMassEntityConfigAsset");
static_assert(offsetof(UMassEntityConfigAsset, Config) == 0x000030, "Member 'UMassEntityConfigAsset::Config' has a wrong offset!");

// Class MassSpawner.MassEntitySpawnDataGeneratorBase
// 0x0008 (0x0030 - 0x0028)
class UMassEntitySpawnDataGeneratorBase : public UObject
{
public:
	int32                                         RandomSelectionSeed;                               // 0x0028(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         bUseCustomSeed : 1;                                // 0x002C(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected))
	uint8                                         Pad_2D[0x3];                                       // 0x002D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MassEntitySpawnDataGeneratorBase">();
	}
	static class UMassEntitySpawnDataGeneratorBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMassEntitySpawnDataGeneratorBase>();
	}
};
static_assert(alignof(UMassEntitySpawnDataGeneratorBase) == 0x000008, "Wrong alignment on UMassEntitySpawnDataGeneratorBase");
static_assert(sizeof(UMassEntitySpawnDataGeneratorBase) == 0x000030, "Wrong size on UMassEntitySpawnDataGeneratorBase");
static_assert(offsetof(UMassEntitySpawnDataGeneratorBase, RandomSelectionSeed) == 0x000028, "Member 'UMassEntitySpawnDataGeneratorBase::RandomSelectionSeed' has a wrong offset!");

// Class MassSpawner.MassEntityEQSSpawnPointsGenerator
// 0x0048 (0x0078 - 0x0030)
class UMassEntityEQSSpawnPointsGenerator final : public UMassEntitySpawnDataGeneratorBase
{
public:
	struct FEQSParametrizedQueryExecutionRequest  EQSRequest;                                        // 0x0030(0x0048)(Edit, Protected, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MassEntityEQSSpawnPointsGenerator">();
	}
	static class UMassEntityEQSSpawnPointsGenerator* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMassEntityEQSSpawnPointsGenerator>();
	}
};
static_assert(alignof(UMassEntityEQSSpawnPointsGenerator) == 0x000008, "Wrong alignment on UMassEntityEQSSpawnPointsGenerator");
static_assert(sizeof(UMassEntityEQSSpawnPointsGenerator) == 0x000078, "Wrong size on UMassEntityEQSSpawnPointsGenerator");
static_assert(offsetof(UMassEntityEQSSpawnPointsGenerator, EQSRequest) == 0x000030, "Member 'UMassEntityEQSSpawnPointsGenerator::EQSRequest' has a wrong offset!");

// Class MassSpawner.MassEntityTemplateRegistry
// 0x0000 (0x0028 - 0x0028)
class UMassEntityTemplateRegistry final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MassEntityTemplateRegistry">();
	}
	static class UMassEntityTemplateRegistry* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMassEntityTemplateRegistry>();
	}
};
static_assert(alignof(UMassEntityTemplateRegistry) == 0x000008, "Wrong alignment on UMassEntityTemplateRegistry");
static_assert(sizeof(UMassEntityTemplateRegistry) == 0x000028, "Wrong size on UMassEntityTemplateRegistry");

// Class MassSpawner.MassEntityZoneGraphSpawnPointsGenerator
// 0x0018 (0x0048 - 0x0030)
class UMassEntityZoneGraphSpawnPointsGenerator final : public UMassEntitySpawnDataGeneratorBase
{
public:
	struct FZoneGraphTagFilter                    TagFilter;                                         // 0x0030(0x000C)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	float                                         MinGap;                                            // 0x003C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         MaxGap;                                            // 0x0040(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MassEntityZoneGraphSpawnPointsGenerator">();
	}
	static class UMassEntityZoneGraphSpawnPointsGenerator* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMassEntityZoneGraphSpawnPointsGenerator>();
	}
};
static_assert(alignof(UMassEntityZoneGraphSpawnPointsGenerator) == 0x000008, "Wrong alignment on UMassEntityZoneGraphSpawnPointsGenerator");
static_assert(sizeof(UMassEntityZoneGraphSpawnPointsGenerator) == 0x000048, "Wrong size on UMassEntityZoneGraphSpawnPointsGenerator");
static_assert(offsetof(UMassEntityZoneGraphSpawnPointsGenerator, TagFilter) == 0x000030, "Member 'UMassEntityZoneGraphSpawnPointsGenerator::TagFilter' has a wrong offset!");
static_assert(offsetof(UMassEntityZoneGraphSpawnPointsGenerator, MinGap) == 0x00003C, "Member 'UMassEntityZoneGraphSpawnPointsGenerator::MinGap' has a wrong offset!");
static_assert(offsetof(UMassEntityZoneGraphSpawnPointsGenerator, MaxGap) == 0x000040, "Member 'UMassEntityZoneGraphSpawnPointsGenerator::MaxGap' has a wrong offset!");

// Class MassSpawner.MassSpawner
// 0x00A8 (0x0338 - 0x0290)
class AMassSpawner : public AActor
{
public:
	TMulticastInlineDelegate<void()>              OnSpawningFinishedEvent;                           // 0x0290(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void()>              OnDespawningFinishedEvent;                         // 0x02A0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	int32                                         Count;                                             // 0x02B0(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_2B4[0x4];                                      // 0x02B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FMassSpawnedEntityType>         EntityTypes;                                       // 0x02B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FMassSpawnDataGenerator>        SpawnDataGenerators;                               // 0x02C8(0x0010)(Edit, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                         bAutoSpawnOnBeginPlay : 1;                         // 0x02D8(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected))
	uint8                                         bOverrideSchematics : 1;                           // 0x02D8(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected))
	uint8                                         Pad_2D9[0x7];                                      // 0x02D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMassProcessor*>                 PostSpawnProcessors;                               // 0x02E0(0x0010)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	float                                         SpawningCountScale;                                // 0x02F0(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_2F4[0x44];                                     // 0x02F4(0x0044)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void ClearTemplates();
	void DoDespawning();
	void DoSpawning();
	void ScaleSpawningCount(float Scale);
	void UnloadConfig();

	int32 GetCount() const;
	float GetSpawningCountScale() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MassSpawner">();
	}
	static class AMassSpawner* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMassSpawner>();
	}
};
static_assert(alignof(AMassSpawner) == 0x000008, "Wrong alignment on AMassSpawner");
static_assert(sizeof(AMassSpawner) == 0x000338, "Wrong size on AMassSpawner");
static_assert(offsetof(AMassSpawner, OnSpawningFinishedEvent) == 0x000290, "Member 'AMassSpawner::OnSpawningFinishedEvent' has a wrong offset!");
static_assert(offsetof(AMassSpawner, OnDespawningFinishedEvent) == 0x0002A0, "Member 'AMassSpawner::OnDespawningFinishedEvent' has a wrong offset!");
static_assert(offsetof(AMassSpawner, Count) == 0x0002B0, "Member 'AMassSpawner::Count' has a wrong offset!");
static_assert(offsetof(AMassSpawner, EntityTypes) == 0x0002B8, "Member 'AMassSpawner::EntityTypes' has a wrong offset!");
static_assert(offsetof(AMassSpawner, SpawnDataGenerators) == 0x0002C8, "Member 'AMassSpawner::SpawnDataGenerators' has a wrong offset!");
static_assert(offsetof(AMassSpawner, PostSpawnProcessors) == 0x0002E0, "Member 'AMassSpawner::PostSpawnProcessors' has a wrong offset!");
static_assert(offsetof(AMassSpawner, SpawningCountScale) == 0x0002F0, "Member 'AMassSpawner::SpawningCountScale' has a wrong offset!");

// Class MassSpawner.MassSpawnerSubsystem
// 0x0088 (0x00C0 - 0x0038)
class UMassSpawnerSubsystem final : public UMassSubsystemBase
{
public:
	TArray<class UMassProcessor*>                 SpawnDataInitializers;                             // 0x0038(0x0010)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                         Pad_48[0x78];                                      // 0x0048(0x0078)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MassSpawnerSubsystem">();
	}
	static class UMassSpawnerSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMassSpawnerSubsystem>();
	}
};
static_assert(alignof(UMassSpawnerSubsystem) == 0x000008, "Wrong alignment on UMassSpawnerSubsystem");
static_assert(sizeof(UMassSpawnerSubsystem) == 0x0000C0, "Wrong size on UMassSpawnerSubsystem");
static_assert(offsetof(UMassSpawnerSubsystem, SpawnDataInitializers) == 0x000038, "Member 'UMassSpawnerSubsystem::SpawnDataInitializers' has a wrong offset!");

// Class MassSpawner.MassSpawnLocationProcessor
// 0x02B0 (0x0370 - 0x00C0)
class UMassSpawnLocationProcessor : public UMassProcessor
{
public:
	uint8                                         Pad_C0[0x2B0];                                     // 0x00C0(0x02B0)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MassSpawnLocationProcessor">();
	}
	static class UMassSpawnLocationProcessor* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMassSpawnLocationProcessor>();
	}
};
static_assert(alignof(UMassSpawnLocationProcessor) == 0x000008, "Wrong alignment on UMassSpawnLocationProcessor");
static_assert(sizeof(UMassSpawnLocationProcessor) == 0x000370, "Wrong size on UMassSpawnLocationProcessor");

// Class MassSpawner.MassTranslator
// 0x0020 (0x00E0 - 0x00C0)
class UMassTranslator : public UMassProcessor
{
public:
	uint8                                         Pad_C0[0x20];                                      // 0x00C0(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MassTranslator">();
	}
	static class UMassTranslator* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMassTranslator>();
	}
};
static_assert(alignof(UMassTranslator) == 0x000008, "Wrong alignment on UMassTranslator");
static_assert(sizeof(UMassTranslator) == 0x0000E0, "Wrong size on UMassTranslator");

}

