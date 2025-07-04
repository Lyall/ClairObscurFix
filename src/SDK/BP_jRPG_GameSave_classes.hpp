﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_jRPG_GameSave

#include "Basic.hpp"

#include "S_jRPG_PartySlot_structs.hpp"
#include "S_jRPG_Item_DynamicData_structs.hpp"
#include "S_WeaponInstanceHandle_structs.hpp"
#include "E_GPE_MovingAlongSplineDestination_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "S_jRPG_CharacterSaveState_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "FExplorationProgression_SaveState_structs.hpp"
#include "S_GameDifficultySaveData_structs.hpp"
#include "S_QuestStatusData_structs.hpp"
#include "S_ManorDoors_structs.hpp"
#include "S_LevelSpawnPointsData_structs.hpp"
#include "FPassiveEffectProgression_structs.hpp"
#include "E_CharacterList_structs.hpp"
#include "S_AreaAudioParameters_structs.hpp"
#include "S_MerchantSaveData_structs.hpp"
#include "S_BattleTowerSaveData_structs.hpp"
#include "S_EntitlementSaveData_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_jRPG_GameSave.BP_jRPG_GameSave_C
// 0x0948 (0x0970 - 0x0028)
class UBP_jRPG_GameSave_C final : public USaveGame
{
public:
	TArray<struct FS_jRPG_PartySlot>              CurrentParty;                                      // 0x0028(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FName, struct FS_jRPG_CharacterSaveState> CharactersCollection;                       // 0x0038(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FName                                   MapToLoad;                                         // 0x0088(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_jRPG_Item_DynamicData>       Inventory;                                         // 0x0090(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, Deprecated, ContainsInstancedReference)
	class FText                                   AreaName;                                          // 0x00A0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                        TimePlayed;                                        // 0x00B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         FinishedGameCount;                                 // 0x00B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BC[0x4];                                       // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FName, int32>                      InventoryItems;                                    // 0x00C0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         Gold;                                              // 0x0110(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_114[0x4];                                      // 0x0114(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FName, bool>                       GPE_States;                                        // 0x0118(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FName, bool>                       TransientBattledEnemies;                           // 0x0168(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FName, struct FTransform>          TransientEnemyTransforms;                          // 0x01B8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FName, bool>                       BattledEnemies;                                    // 0x0208(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FName, E_GPE_MovingAlongSplineDestination> MovingPlatformsStates;                     // 0x0258(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FName, bool>                       TransientInteractedObjects;                        // 0x02A8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FName, bool>                       InteractedObjects;                                 // 0x02F8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FName, bool>                       InteractedCinematics;                              // 0x0348(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FName, bool>                       InteractedTutorials;                               // 0x0398(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FName, bool>                       SoundNotif;                                        // 0x03E8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FName, bool>                       InteractedDialogs;                                 // 0x0438(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FName                                   CurrentCharacterWorld;                             // 0x0488(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           SpawnPointTagToLoadAt;                             // 0x0490(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           ReturnSpawnPointTag;                               // 0x0498(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                   MapToLoadAfterCamp;                                // 0x04A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A8[0x8];                                      // 0x04A8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             LastWorldMapTransform;                             // 0x04B0(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class FName, bool>                       ManorGestrals;                                     // 0x0510(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFExplorationProgression_SaveState     ExplorationProgression;                            // 0x0560(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TMap<struct FGuid, bool>                      NamedIDsStates;                                    // 0x0588(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                           EquippedConsumableShards;                          // 0x05D8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FName, int32>                      LiftsFloor;                                        // 0x05E8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FName, struct FS_QuestStatusData>  QuestStatuses;                                     // 0x0638(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FS_ManorDoors                          PreviousManorDoorInfo;                             // 0x0688(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_WeaponInstanceHandle>        WeaponProgressions;                                // 0x0698(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FName, bool>                       Nine9Gestrals;                                     // 0x06A8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<struct FGuid, int32>                     InteractedDialogues;                               // 0x06F8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<E_CharacterList, int32>                  Relationship_Level;                                // 0x0748(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	uint8                                         Pad_798[0x8];                                      // 0x0798(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             LastTransform;                                     // 0x07A0(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class ABP_LightingScenarioReference_C> LastLightingScenario;                      // 0x0800(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FS_AreaAudioParameters                 LastAudioParameters;                               // 0x0828(0x0038)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TMap<class FName, struct FS_MerchantSaveData> MerchantStates;                                    // 0x0860(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FS_BattleTowerSaveData                 BattleTowerSaveData;                               // 0x08B0(0x0058)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FDateTime                              SaveDateTime;                                      // 0x0908(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           ExternalCompanions;                                // 0x0910(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FFPassiveEffectProgression>     PassiveEffectsProgressions;                        // 0x0920(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FS_GameDifficultySaveData              GameDifficultyData;                                // 0x0930(0x0002)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_932[0x6];                                      // 0x0932(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FS_LevelSpawnPointsData>        UnlockedSpawnPoints;                               // 0x0938(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<uint8>                                 UnlockedMapSections;                               // 0x0948(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsMountInUse;                                      // 0x0958(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_959[0x7];                                      // 0x0959(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FS_EntitlementSaveData                 EntitlementData;                                   // 0x0960(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_jRPG_GameSave_C">();
	}
	static class UBP_jRPG_GameSave_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_jRPG_GameSave_C>();
	}
};
static_assert(alignof(UBP_jRPG_GameSave_C) == 0x000010, "Wrong alignment on UBP_jRPG_GameSave_C");
static_assert(sizeof(UBP_jRPG_GameSave_C) == 0x000970, "Wrong size on UBP_jRPG_GameSave_C");
static_assert(offsetof(UBP_jRPG_GameSave_C, CurrentParty) == 0x000028, "Member 'UBP_jRPG_GameSave_C::CurrentParty' has a wrong offset!");
static_assert(offsetof(UBP_jRPG_GameSave_C, CharactersCollection) == 0x000038, "Member 'UBP_jRPG_GameSave_C::CharactersCollection' has a wrong offset!");
static_assert(offsetof(UBP_jRPG_GameSave_C, MapToLoad) == 0x000088, "Member 'UBP_jRPG_GameSave_C::MapToLoad' has a wrong offset!");
static_assert(offsetof(UBP_jRPG_GameSave_C, Inventory) == 0x000090, "Member 'UBP_jRPG_GameSave_C::Inventory' has a wrong offset!");
static_assert(offsetof(UBP_jRPG_GameSave_C, AreaName) == 0x0000A0, "Member 'UBP_jRPG_GameSave_C::AreaName' has a wrong offset!");
static_assert(offsetof(UBP_jRPG_GameSave_C, TimePlayed) == 0x0000B0, "Member 'UBP_jRPG_GameSave_C::TimePlayed' has a wrong offset!");
static_assert(offsetof(UBP_jRPG_GameSave_C, FinishedGameCount) == 0x0000B8, "Member 'UBP_jRPG_GameSave_C::FinishedGameCount' has a wrong offset!");
static_assert(offsetof(UBP_jRPG_GameSave_C, InventoryItems) == 0x0000C0, "Member 'UBP_jRPG_GameSave_C::InventoryItems' has a wrong offset!");
static_assert(offsetof(UBP_jRPG_GameSave_C, Gold) == 0x000110, "Member 'UBP_jRPG_GameSave_C::Gold' has a wrong offset!");
static_assert(offsetof(UBP_jRPG_GameSave_C, GPE_States) == 0x000118, "Member 'UBP_jRPG_GameSave_C::GPE_States' has a wrong offset!");
static_assert(offsetof(UBP_jRPG_GameSave_C, TransientBattledEnemies) == 0x000168, "Member 'UBP_jRPG_GameSave_C::TransientBattledEnemies' has a wrong offset!");
static_assert(offsetof(UBP_jRPG_GameSave_C, TransientEnemyTransforms) == 0x0001B8, "Member 'UBP_jRPG_GameSave_C::TransientEnemyTransforms' has a wrong offset!");
static_assert(offsetof(UBP_jRPG_GameSave_C, BattledEnemies) == 0x000208, "Member 'UBP_jRPG_GameSave_C::BattledEnemies' has a wrong offset!");
static_assert(offsetof(UBP_jRPG_GameSave_C, MovingPlatformsStates) == 0x000258, "Member 'UBP_jRPG_GameSave_C::MovingPlatformsStates' has a wrong offset!");
static_assert(offsetof(UBP_jRPG_GameSave_C, TransientInteractedObjects) == 0x0002A8, "Member 'UBP_jRPG_GameSave_C::TransientInteractedObjects' has a wrong offset!");
static_assert(offsetof(UBP_jRPG_GameSave_C, InteractedObjects) == 0x0002F8, "Member 'UBP_jRPG_GameSave_C::InteractedObjects' has a wrong offset!");
static_assert(offsetof(UBP_jRPG_GameSave_C, InteractedCinematics) == 0x000348, "Member 'UBP_jRPG_GameSave_C::InteractedCinematics' has a wrong offset!");
static_assert(offsetof(UBP_jRPG_GameSave_C, InteractedTutorials) == 0x000398, "Member 'UBP_jRPG_GameSave_C::InteractedTutorials' has a wrong offset!");
static_assert(offsetof(UBP_jRPG_GameSave_C, SoundNotif) == 0x0003E8, "Member 'UBP_jRPG_GameSave_C::SoundNotif' has a wrong offset!");
static_assert(offsetof(UBP_jRPG_GameSave_C, InteractedDialogs) == 0x000438, "Member 'UBP_jRPG_GameSave_C::InteractedDialogs' has a wrong offset!");
static_assert(offsetof(UBP_jRPG_GameSave_C, CurrentCharacterWorld) == 0x000488, "Member 'UBP_jRPG_GameSave_C::CurrentCharacterWorld' has a wrong offset!");
static_assert(offsetof(UBP_jRPG_GameSave_C, SpawnPointTagToLoadAt) == 0x000490, "Member 'UBP_jRPG_GameSave_C::SpawnPointTagToLoadAt' has a wrong offset!");
static_assert(offsetof(UBP_jRPG_GameSave_C, ReturnSpawnPointTag) == 0x000498, "Member 'UBP_jRPG_GameSave_C::ReturnSpawnPointTag' has a wrong offset!");
static_assert(offsetof(UBP_jRPG_GameSave_C, MapToLoadAfterCamp) == 0x0004A0, "Member 'UBP_jRPG_GameSave_C::MapToLoadAfterCamp' has a wrong offset!");
static_assert(offsetof(UBP_jRPG_GameSave_C, LastWorldMapTransform) == 0x0004B0, "Member 'UBP_jRPG_GameSave_C::LastWorldMapTransform' has a wrong offset!");
static_assert(offsetof(UBP_jRPG_GameSave_C, ManorGestrals) == 0x000510, "Member 'UBP_jRPG_GameSave_C::ManorGestrals' has a wrong offset!");
static_assert(offsetof(UBP_jRPG_GameSave_C, ExplorationProgression) == 0x000560, "Member 'UBP_jRPG_GameSave_C::ExplorationProgression' has a wrong offset!");
static_assert(offsetof(UBP_jRPG_GameSave_C, NamedIDsStates) == 0x000588, "Member 'UBP_jRPG_GameSave_C::NamedIDsStates' has a wrong offset!");
static_assert(offsetof(UBP_jRPG_GameSave_C, EquippedConsumableShards) == 0x0005D8, "Member 'UBP_jRPG_GameSave_C::EquippedConsumableShards' has a wrong offset!");
static_assert(offsetof(UBP_jRPG_GameSave_C, LiftsFloor) == 0x0005E8, "Member 'UBP_jRPG_GameSave_C::LiftsFloor' has a wrong offset!");
static_assert(offsetof(UBP_jRPG_GameSave_C, QuestStatuses) == 0x000638, "Member 'UBP_jRPG_GameSave_C::QuestStatuses' has a wrong offset!");
static_assert(offsetof(UBP_jRPG_GameSave_C, PreviousManorDoorInfo) == 0x000688, "Member 'UBP_jRPG_GameSave_C::PreviousManorDoorInfo' has a wrong offset!");
static_assert(offsetof(UBP_jRPG_GameSave_C, WeaponProgressions) == 0x000698, "Member 'UBP_jRPG_GameSave_C::WeaponProgressions' has a wrong offset!");
static_assert(offsetof(UBP_jRPG_GameSave_C, Nine9Gestrals) == 0x0006A8, "Member 'UBP_jRPG_GameSave_C::Nine9Gestrals' has a wrong offset!");
static_assert(offsetof(UBP_jRPG_GameSave_C, InteractedDialogues) == 0x0006F8, "Member 'UBP_jRPG_GameSave_C::InteractedDialogues' has a wrong offset!");
static_assert(offsetof(UBP_jRPG_GameSave_C, Relationship_Level) == 0x000748, "Member 'UBP_jRPG_GameSave_C::Relationship_Level' has a wrong offset!");
static_assert(offsetof(UBP_jRPG_GameSave_C, LastTransform) == 0x0007A0, "Member 'UBP_jRPG_GameSave_C::LastTransform' has a wrong offset!");
static_assert(offsetof(UBP_jRPG_GameSave_C, LastLightingScenario) == 0x000800, "Member 'UBP_jRPG_GameSave_C::LastLightingScenario' has a wrong offset!");
static_assert(offsetof(UBP_jRPG_GameSave_C, LastAudioParameters) == 0x000828, "Member 'UBP_jRPG_GameSave_C::LastAudioParameters' has a wrong offset!");
static_assert(offsetof(UBP_jRPG_GameSave_C, MerchantStates) == 0x000860, "Member 'UBP_jRPG_GameSave_C::MerchantStates' has a wrong offset!");
static_assert(offsetof(UBP_jRPG_GameSave_C, BattleTowerSaveData) == 0x0008B0, "Member 'UBP_jRPG_GameSave_C::BattleTowerSaveData' has a wrong offset!");
static_assert(offsetof(UBP_jRPG_GameSave_C, SaveDateTime) == 0x000908, "Member 'UBP_jRPG_GameSave_C::SaveDateTime' has a wrong offset!");
static_assert(offsetof(UBP_jRPG_GameSave_C, ExternalCompanions) == 0x000910, "Member 'UBP_jRPG_GameSave_C::ExternalCompanions' has a wrong offset!");
static_assert(offsetof(UBP_jRPG_GameSave_C, PassiveEffectsProgressions) == 0x000920, "Member 'UBP_jRPG_GameSave_C::PassiveEffectsProgressions' has a wrong offset!");
static_assert(offsetof(UBP_jRPG_GameSave_C, GameDifficultyData) == 0x000930, "Member 'UBP_jRPG_GameSave_C::GameDifficultyData' has a wrong offset!");
static_assert(offsetof(UBP_jRPG_GameSave_C, UnlockedSpawnPoints) == 0x000938, "Member 'UBP_jRPG_GameSave_C::UnlockedSpawnPoints' has a wrong offset!");
static_assert(offsetof(UBP_jRPG_GameSave_C, UnlockedMapSections) == 0x000948, "Member 'UBP_jRPG_GameSave_C::UnlockedMapSections' has a wrong offset!");
static_assert(offsetof(UBP_jRPG_GameSave_C, IsMountInUse) == 0x000958, "Member 'UBP_jRPG_GameSave_C::IsMountInUse' has a wrong offset!");
static_assert(offsetof(UBP_jRPG_GameSave_C, EntitlementData) == 0x000960, "Member 'UBP_jRPG_GameSave_C::EntitlementData' has a wrong offset!");

}

