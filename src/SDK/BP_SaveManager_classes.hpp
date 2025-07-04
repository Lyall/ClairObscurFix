﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SaveManager

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "S_SaveSlotData_structs.hpp"
#include "S_LoadGameRequest_structs.hpp"
#include "SandFall_structs.hpp"
#include "SandFall_classes.hpp"
#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "E_QuestStatus_structs.hpp"
#include "E_SaveManagerLoadingStatus_structs.hpp"
#include "ELevelType_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SaveManager.BP_SaveManager_C
// 0x01A8 (0x01D0 - 0x0028)
class UBP_SaveManager_C final : public UExtendedObject
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0028(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FS_SaveSlotData>                SaveSlots;                                         // 0x0030(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UClass*>                         SaveGameObjectClasses;                             // 0x0040(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	bool                                          SaveRequested;                                     // 0x0050(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SaveIsInProgress;                                  // 0x0051(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_52[0x6];                                       // 0x0052(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              LastSaveTimestamp;                                 // 0x0058(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                   CVarNameEnableDebug;                               // 0x0060(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CVarNameOverrideSaveVersion;                       // 0x0068(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CVarNameForceBackupSave;                           // 0x0070(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CVarNameNewGamePlusOverriddenLevel;                // 0x0078(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              LastRequestSaveTimestamp;                          // 0x0080(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              LastBackupSaveTimestamp;                           // 0x0088(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        MinimumTimeToWaitBetweenSaves;                     // 0x0090(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MinimumTimeToWaitBetweenBackupSaves;               // 0x0098(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           SpawnPointTagRequested;                            // 0x00A0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          EnableAutoSave;                                    // 0x00A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LoadIsInProgress;                                  // 0x00A9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_AA[0x6];                                       // 0x00AA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FS_LoadGameRequest                     LoadGameRequest;                                   // 0x00B0(0x0020)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	double                                        MinimumTimeToWaitToValidateSave;                   // 0x00D0(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MinimumDistanceToClosestEnemy;                     // 0x00D8(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameAction_Wrapper                    GameActionForNewGamePlus;                          // 0x00E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UBP_jRPG_GI_Custom_C*                   GameInstanceReference;                             // 0x00F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TMulticastInlineDelegate<void()>              OnSaveGameToSlotStarted;                           // 0x00F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void()>              OnSaveGameToSlotFinished;                          // 0x0108(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         SelectedSlot;                                      // 0x0118(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11C[0x4];                                      // 0x011C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void()>              OnLoadGameFromSlotStarted;                         // 0x0120(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void(bool Success)>  OnLoadGameFromSlotFinished;                        // 0x0130(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void(int32 PreviousSlot, int32 CurrentSlot)> OnSelectedSlotChanged;     // 0x0140(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FString                                 LastRequestReason;                                 // 0x0150(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	double                                        ElapsedTimeSinceLastSaveRequest;                   // 0x0160(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        TotalElapsedTimeSinceLastSaveRequest;              // 0x0168(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        TimeToInvalidateSanityCheck;                       // 0x0170(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HasLoggedSaveManagerSanityCheck;                   // 0x0178(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_179[0x7];                                      // 0x0179(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSF_ReferenceCounter                   AutoSaveEnableReferenceCounter;                    // 0x0180(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSF_ReferenceCounterHandle             SaveBlocker_NewGame;                               // 0x01A0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         MaxNumberOfBackupSaves;                            // 0x01C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C4[0x4];                                      // 0x01C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_SaveGameBase_C*                     LastSaveGameObject;                                // 0x01C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void AddBackupSaveToSelectedSlot(const class FString& SaveName, TArray<class FString>* SavesToDelete);
	void AsyncLoadGameFromSlot(const class FString& SlotName);
	void AsyncSaveContainer();
	void AsyncSaveGameToSlot(class USaveGame* SaveGameObject, const class FString& SlotName);
	void CacheLastSaveTimestamp();
	void CanLoadSave(bool* CanLoad);
	void CanSave(bool* CanSave_0);
	void ChangeAreaName(const class FText& NewAreaName);
	void CheckSaveManagerSanity();
	void Completed_1BF970B0492988DFD9A83ABA0B6CA48F(bool bSuccess);
	void Completed_685A6FB94E7D73F6E74DDE807397F51F(class USaveGame* SaveGame, bool bSuccess);
	void Completed_9195BA6349F82F2F84FF31A31A028C3E(class USaveGame* SaveGame, bool bSuccess);
	void Completed_BC27564C4EAA81FC716AA5B004066701(class USaveGame* SaveGame, bool bSuccess);
	void Completed_CBDE04C044E45CF17D3AE2ABD1343457(class USaveGame* SaveGame, bool bSuccess);
	void Completed_DE2492DD4E117FE40A9225B702CCF94E(class USaveGame* SaveGame, bool bSuccess);
	class FString ComputeSaveFilePath(const class FString& SaveName);
	void ComputeSaveMetaData(struct FS_SaveSlotMetaData* SaveMetaData);
	void DEBUG_MakeSaveGameFromData(const struct FFDebugSaveGame& SaveData, class UBP_jRPG_GameSave_C** CreatedSaveGameObject);
	void DeleteBackupSaveInSlot(int32 SaveSlot, const class FString& SaveName);
	void DeleteSaveFile(const class FString& SaveName);
	void DeleteSaveSlot(int32 SaveSlot);
	void ExecuteUbergraph_BP_SaveManager(int32 EntryPoint);
	void FlushAllSaveRequests();
	void ForceAutoSave(const class FString& DebugReason);
	class FString GetBackupSaveFolderName();
	int32 GetCurrentSaveVersion();
	class FString GetEditorSaveName();
	void GetElapsedTimeSinceLastRequest(double* ReturnNode);
	int32 GetMaxNumberOfSlots();
	void GetNewGameData(class FName OverrideStartLevelDataID, class FName* LevelAssetName, struct FGameplayTag* SpawnPointTag);
	class FName GetNewGamePlusLevelName();
	const struct FTransform GetPlayerCharacterTransform();
	double GetRemainingTimeToValidateSave();
	class FString GetSaveContainerBackupName();
	class FString GetSaveContainerName();
	class UClass* GetSaveGameObjectClass();
	class FString GetSaveManagerDebugStatus();
	class FString GetSaveNameForSelectedSlot();
	void GetSelectedSlot(int32* SelectedSlot_0);
	void GetSelectedSlotData(class FString* MainSave, TArray<class FString>* BackupSaves);
	void GetSlots(TArray<struct FS_SaveSlotData>* SaveSlots_0);
	void GetSpawnPointDataToSave(const struct FGameplayTag& SpawnPointTag, class FName SpawnPointName, struct FGameplayTag* SpawnPointTagToSave, class FName* SpawnPointNameToSave);
	bool HasAnySaveInAnySlot();
	bool HasDetectedPotentialError();
	bool HasProcessSaveRecently();
	void HasValidSpawnPointTagOrName(const struct FGameplayTag& SpawnPointTag, class FName SpawnPointName, bool* IsValid);
	void IncrementTimeIf_Needed();
	void Initialize(class UBP_jRPG_GI_Custom_C* GameInstance);
	void InitializeCVars();
	void InitializeLevelForNewGame(bool FromMainMenu, class FName OverrideStartLevelDataID);
	bool IsAutoSaveEnabled();
	bool IsCurrentLevelValidForSave();
	void IsLoadInProgress(bool* IsInProgress);
	void IsSaveInProgress(bool* IsInProgress);
	bool IsSaveLoadable(const class FString& SlotName);
	bool IsSaveOrLoadInProgress();
	void LoadGameFromSaveData(class UBP_SaveGameData_C* SaveData);
	void LoadGameFromSaveFile(class USaveGame* SaveGame, const class FString& SlotName);
	void LoadSavesContainer();
	void LoadSaveSlotsFromSaveContainer(class UBP_jRPG_SavesContainer_C* SaveContainer);
	void NotifyLoadRequestFinished(E_SaveManagerLoadingStatus Status);
	void OnAsyncLoadOperationsDone();
	void OnAsyncLoadOperationsFailed(E_SaveManagerLoadingStatus Status);
	void OnAsyncSaveOperationsDone();
	void OnCompleted_434DEAE74EA140DF1A536CB17D9D4FB5(bool bSuccess);
	void OnLoggedInUser();
	void ProcessLoadRequest();
	void ProcessSaveRequest();
	void ProcessSaveRequestUnsafe();
	class UBP_SaveGameBase_C* ProcessUpgradeSave(class UBP_SaveGameBase_C* SaveGame);
	void ReportAsyncDeleteSavesFailed(TArray<class FString>& SlotName, bool ShouldFinishSaveOperation);
	void ReportAsyncLoadFromSlotFailed(E_SaveManagerLoadingStatus Status, const class FString& SlotName);
	void ReportAsyncSavesToSlotFailed(TArray<class FString>& SlotName, bool ShouldFinishSaveOperation);
	void ReportAsyncSaveToSlotCompleted(const class FString& SlotName);
	void ReportAsyncSaveToSlotFailed(const class FString& SlotName, bool ShouldFinishSaveOperation);
	void ReportAsyncSaveToSlotStarted(const class FString& SlotName);
	void RequestAutoSave(const class FString& DebugReason);
	void RequestLoadGame(const struct FS_LoadGameRequest& LoadGameRequest_0);
	void RequestSaveAtSpawnPoint(const struct FGameplayTag& SpawnPointTag, bool ForceProcessImmediately, const class FString& DebugReason);
	void RequestSaveInternal(bool ProcessImmediately, const class FString& DebugReason);
	void ResetSaveTimestamps();
	class UBP_SaveGameData_C* RetrieveSaveDataFromSlotName(const class FString& SlotName);
	void RunTickFunction();
	void SaveGameToFile(const class FString& SaveToOverwrite);
	void SaveGameToObject(class UBP_SaveGameBase_C* SaveObject, const class FString& SaveName);
	void SetEnableAutoSave(const bool Enable, struct FSF_ReferenceCounterHandle& ReferenceHandle, const class FString& DebugName);
	void SetSelectedSlot(int32 SelectedSlot_0);
	bool ShouldCreateBackupSave();
	bool ShouldIncrementTime();
	void StartMainQuests();
	void StartNewGame(bool FromMainMenu, class FName OverrideStartLevelDataID);
	void StartNewGamePlus();
	void Tick();
	void TryAsyncSaveBackupToSlot(class USaveGame* SaveGameObject, const class FString& SlotName);
	void UpdateMainSaveToSelectedSlot(const class FString& SaveName);
	void UpdatePlayedTime();
	void UpdateSpawnPointTag();
	void UpgradeLegacySave(class UBP_jRPG_GameSave_C* LegacySave, class UBP_SaveGameObject_V0_C** NewSave);
	class UBP_SaveGameBase_C* UpgradeSaveIfNeeded(class USaveGame* SaveGame);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SaveManager_C">();
	}
	static class UBP_SaveManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_SaveManager_C>();
	}
};
static_assert(alignof(UBP_SaveManager_C) == 0x000008, "Wrong alignment on UBP_SaveManager_C");
static_assert(sizeof(UBP_SaveManager_C) == 0x0001D0, "Wrong size on UBP_SaveManager_C");
static_assert(offsetof(UBP_SaveManager_C, UberGraphFrame) == 0x000028, "Member 'UBP_SaveManager_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_SaveManager_C, SaveSlots) == 0x000030, "Member 'UBP_SaveManager_C::SaveSlots' has a wrong offset!");
static_assert(offsetof(UBP_SaveManager_C, SaveGameObjectClasses) == 0x000040, "Member 'UBP_SaveManager_C::SaveGameObjectClasses' has a wrong offset!");
static_assert(offsetof(UBP_SaveManager_C, SaveRequested) == 0x000050, "Member 'UBP_SaveManager_C::SaveRequested' has a wrong offset!");
static_assert(offsetof(UBP_SaveManager_C, SaveIsInProgress) == 0x000051, "Member 'UBP_SaveManager_C::SaveIsInProgress' has a wrong offset!");
static_assert(offsetof(UBP_SaveManager_C, LastSaveTimestamp) == 0x000058, "Member 'UBP_SaveManager_C::LastSaveTimestamp' has a wrong offset!");
static_assert(offsetof(UBP_SaveManager_C, CVarNameEnableDebug) == 0x000060, "Member 'UBP_SaveManager_C::CVarNameEnableDebug' has a wrong offset!");
static_assert(offsetof(UBP_SaveManager_C, CVarNameOverrideSaveVersion) == 0x000068, "Member 'UBP_SaveManager_C::CVarNameOverrideSaveVersion' has a wrong offset!");
static_assert(offsetof(UBP_SaveManager_C, CVarNameForceBackupSave) == 0x000070, "Member 'UBP_SaveManager_C::CVarNameForceBackupSave' has a wrong offset!");
static_assert(offsetof(UBP_SaveManager_C, CVarNameNewGamePlusOverriddenLevel) == 0x000078, "Member 'UBP_SaveManager_C::CVarNameNewGamePlusOverriddenLevel' has a wrong offset!");
static_assert(offsetof(UBP_SaveManager_C, LastRequestSaveTimestamp) == 0x000080, "Member 'UBP_SaveManager_C::LastRequestSaveTimestamp' has a wrong offset!");
static_assert(offsetof(UBP_SaveManager_C, LastBackupSaveTimestamp) == 0x000088, "Member 'UBP_SaveManager_C::LastBackupSaveTimestamp' has a wrong offset!");
static_assert(offsetof(UBP_SaveManager_C, MinimumTimeToWaitBetweenSaves) == 0x000090, "Member 'UBP_SaveManager_C::MinimumTimeToWaitBetweenSaves' has a wrong offset!");
static_assert(offsetof(UBP_SaveManager_C, MinimumTimeToWaitBetweenBackupSaves) == 0x000098, "Member 'UBP_SaveManager_C::MinimumTimeToWaitBetweenBackupSaves' has a wrong offset!");
static_assert(offsetof(UBP_SaveManager_C, SpawnPointTagRequested) == 0x0000A0, "Member 'UBP_SaveManager_C::SpawnPointTagRequested' has a wrong offset!");
static_assert(offsetof(UBP_SaveManager_C, EnableAutoSave) == 0x0000A8, "Member 'UBP_SaveManager_C::EnableAutoSave' has a wrong offset!");
static_assert(offsetof(UBP_SaveManager_C, LoadIsInProgress) == 0x0000A9, "Member 'UBP_SaveManager_C::LoadIsInProgress' has a wrong offset!");
static_assert(offsetof(UBP_SaveManager_C, LoadGameRequest) == 0x0000B0, "Member 'UBP_SaveManager_C::LoadGameRequest' has a wrong offset!");
static_assert(offsetof(UBP_SaveManager_C, MinimumTimeToWaitToValidateSave) == 0x0000D0, "Member 'UBP_SaveManager_C::MinimumTimeToWaitToValidateSave' has a wrong offset!");
static_assert(offsetof(UBP_SaveManager_C, MinimumDistanceToClosestEnemy) == 0x0000D8, "Member 'UBP_SaveManager_C::MinimumDistanceToClosestEnemy' has a wrong offset!");
static_assert(offsetof(UBP_SaveManager_C, GameActionForNewGamePlus) == 0x0000E0, "Member 'UBP_SaveManager_C::GameActionForNewGamePlus' has a wrong offset!");
static_assert(offsetof(UBP_SaveManager_C, GameInstanceReference) == 0x0000F0, "Member 'UBP_SaveManager_C::GameInstanceReference' has a wrong offset!");
static_assert(offsetof(UBP_SaveManager_C, OnSaveGameToSlotStarted) == 0x0000F8, "Member 'UBP_SaveManager_C::OnSaveGameToSlotStarted' has a wrong offset!");
static_assert(offsetof(UBP_SaveManager_C, OnSaveGameToSlotFinished) == 0x000108, "Member 'UBP_SaveManager_C::OnSaveGameToSlotFinished' has a wrong offset!");
static_assert(offsetof(UBP_SaveManager_C, SelectedSlot) == 0x000118, "Member 'UBP_SaveManager_C::SelectedSlot' has a wrong offset!");
static_assert(offsetof(UBP_SaveManager_C, OnLoadGameFromSlotStarted) == 0x000120, "Member 'UBP_SaveManager_C::OnLoadGameFromSlotStarted' has a wrong offset!");
static_assert(offsetof(UBP_SaveManager_C, OnLoadGameFromSlotFinished) == 0x000130, "Member 'UBP_SaveManager_C::OnLoadGameFromSlotFinished' has a wrong offset!");
static_assert(offsetof(UBP_SaveManager_C, OnSelectedSlotChanged) == 0x000140, "Member 'UBP_SaveManager_C::OnSelectedSlotChanged' has a wrong offset!");
static_assert(offsetof(UBP_SaveManager_C, LastRequestReason) == 0x000150, "Member 'UBP_SaveManager_C::LastRequestReason' has a wrong offset!");
static_assert(offsetof(UBP_SaveManager_C, ElapsedTimeSinceLastSaveRequest) == 0x000160, "Member 'UBP_SaveManager_C::ElapsedTimeSinceLastSaveRequest' has a wrong offset!");
static_assert(offsetof(UBP_SaveManager_C, TotalElapsedTimeSinceLastSaveRequest) == 0x000168, "Member 'UBP_SaveManager_C::TotalElapsedTimeSinceLastSaveRequest' has a wrong offset!");
static_assert(offsetof(UBP_SaveManager_C, TimeToInvalidateSanityCheck) == 0x000170, "Member 'UBP_SaveManager_C::TimeToInvalidateSanityCheck' has a wrong offset!");
static_assert(offsetof(UBP_SaveManager_C, HasLoggedSaveManagerSanityCheck) == 0x000178, "Member 'UBP_SaveManager_C::HasLoggedSaveManagerSanityCheck' has a wrong offset!");
static_assert(offsetof(UBP_SaveManager_C, AutoSaveEnableReferenceCounter) == 0x000180, "Member 'UBP_SaveManager_C::AutoSaveEnableReferenceCounter' has a wrong offset!");
static_assert(offsetof(UBP_SaveManager_C, SaveBlocker_NewGame) == 0x0001A0, "Member 'UBP_SaveManager_C::SaveBlocker_NewGame' has a wrong offset!");
static_assert(offsetof(UBP_SaveManager_C, MaxNumberOfBackupSaves) == 0x0001C0, "Member 'UBP_SaveManager_C::MaxNumberOfBackupSaves' has a wrong offset!");
static_assert(offsetof(UBP_SaveManager_C, LastSaveGameObject) == 0x0001C8, "Member 'UBP_SaveManager_C::LastSaveGameObject' has a wrong offset!");

}

