﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DialogueSystemComponent

#include "Basic.hpp"

#include "EDialogueCameraType_structs.hpp"
#include "E_CharacterList_structs.hpp"
#include "E_jRPG_ItemType_structs.hpp"
#include "GameplayCameras_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "FRichDialogueLine_structs.hpp"
#include "S_DialogueQueueElement_structs.hpp"
#include "E_Dialogue_CameraMovements_structs.hpp"
#include "E_Expressions_Metahuman_structs.hpp"
#include "E_NPC_Body_IdleType_structs.hpp"
#include "E_CanInterruptDialogue_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DialogueSystemComponent.BP_DialogueSystemComponent_C
// 0x01B8 (0x0258 - 0x00A0)
class UBP_DialogueSystemComponent_C final : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_Dialogue_C*                         ActiveDialogue;                                    // 0x00A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         LastChoice;                                        // 0x00B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B4[0x4];                                       // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FText>                           CurrentChoices;                                    // 0x00B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FFRichDialogueLine>             CurrentRichDialogueLinesQueue;                     // 0x00C8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UWBP_DialogueOverlay_C*                 DialogueUI;                                        // 0x00D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          IsWaitingForDialogInput;                           // 0x00E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E1[0x7];                                       // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void()>              OnInWorldDialogueStarted;                          // 0x00E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void()>              OnInWorldDialogueFinished;                         // 0x00F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          WasLastBattleVictory;                              // 0x0108(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_109[0x7];                                      // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_DataAsset_DialogueCharacter_C*      CurrentSpeakerData;                                // 0x0110(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CurrentSpeakerActor;                               // 0x0118(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        CurrentAudioReactionDialogue;                      // 0x0120(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             CurrentSoundBaseReactionDialogue;                  // 0x0128(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UWBP_DialogNotifBox_C*                  CurrentInWorldDialogueWidget;                      // 0x0130(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CanInterruptDialogue;                              // 0x0138(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_139[0x7];                                      // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_NPCAnimationComponent_C*            CurrentSpeakerAnimationComponent;                  // 0x0140(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                       CurrentCameraComponent;                            // 0x0148(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CurrentSpeakerSlot;                                // 0x0150(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         AvailableSpeakerSlots;                             // 0x0158(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<struct FS_DialogueQueueElement>        DialogQueue;                                       // 0x0168(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMulticastInlineDelegate<void(class ABP_Dialogue_C* Dialogue)> OnDialogueStarted;                // 0x0178(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void(class ABP_Dialogue_C* Dialogue)> OnDialogueFinished;               // 0x0188(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UWBP_CharacterSelectorPanel_C*          CharacterSelectorWindow;                           // 0x0198(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class UBP_CharacterData_C*>            LastSelectedCharacterDatas;                        // 0x01A0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UWBP_Merchant_Panel_C*                  MerchantWindow;                                    // 0x01B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           FacialTalkingTimer;                                // 0x01B8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FCameraAnimationHandle                 PreviousCameraAnimation;                           // 0x01C0(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FCameraAnimationHandle                 BreathingCameraAnimation;                          // 0x01C4(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	EDialogueCameraType                           PreviousCameraType;                                // 0x01C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C9[0x7];                                      // 0x01C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 PreviousSpeakerActor;                              // 0x01D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         AllSpeakerActors;                                  // 0x01D8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                          ForceRefreshCameraOnNextLine;                      // 0x01E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1E9[0x7];                                      // 0x01E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void()>              OnAnyDialogueStarted;                              // 0x01F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void()>              OnAnyDialogueFinished;                             // 0x0200(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          ManualTransitionInProgress;                        // 0x0210(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_211[0x7];                                      // 0x0211(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UDataTable*                             LootDialoguesTable;                                // 0x0218(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                    SoundEventWindowOpen;                              // 0x0220(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UCameraComponent*                       PreviousCamera;                                    // 0x0230(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        EnvelopeValue;                                     // 0x0238(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          TickUpdateEnvelopeVolumeOfComponent;               // 0x0240(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_241[0x7];                                      // 0x0241(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void(E_CharacterList Character)> OnDisplayRelationshipLevelIncreasedRequested; // 0x0248(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ActionPauseDialogue();
	void ActionPlayAnimation(class UBP_DataAsset_DialogueCharacter_C* Character, struct FS_Dialogue_AnimationParameters& AnimationParameters);
	void ActionShowVendor(const class FText& Greeting, const TSet<class FName>& VendorItems);
	void ActionStartBattle(const struct FFBattleStartParams& BattleStartParams);
	void ActionUnpauseDialogue();
	void ActivateCameraComponentByType(EDialogueCameraType CameraType, const struct FS_DialogueCameraParameters& Parameters);
	void ActivateDialogue(class ABP_Dialogue_C* Dialogue);
	void AddGenderContextToText(const class FText& Text, class FText* EnrichedText);
	void ApplyCamera(EDialogueCameraType CameraType, const struct FS_DialogueCameraParameters& Parameters);
	bool AreLootItemUsersCompatible(class UBP_GeneratedItemInfo_Base_C* GeneratedItemInfo, struct FS_LootDialogue& LootDialogue);
	void CloseCharacterSelectionWindow(TArray<class UBP_CharacterData_C*>& CharacterDatas);
	void CurrentSpeakerStopTalking();
	void DeactivatePreviousCameraComponents();
	void DelayUntilMainCharacterStopsTalking(float Duration);
	void DelayUntilStopTalking(double Duration);
	void DisableInputPrompts();
	void DisplayRelationshipLevelIncreased(E_CharacterList Character);
	void EndDialogue(class ABP_Dialogue_C* Dialog, const struct FS_Dialogue_EndParameters& Parameters);
	void ExecuteAudioTrigger(class FName AudioTriggerName, class AActor* Actor);
	void ExecuteUbergraph_BP_DialogueSystemComponent(int32 EntryPoint);
	void FakeChoice();
	void FakeDialogue();
	void GetActivePlayerCharacterGender(ETextGender* GenderTag);
	TArray<class AActor*> GetAllSpeakerActors();
	class UCameraAnimationSequence* GetCameraAnimationSequence(const struct FS_DialogueCameraParameters& CameraParameters);
	void GetCameraFromCurrentSpeaker(class UCameraComponent** Camera);
	void GetCurrentCameraOfType(EDialogueCameraType CameraType, const struct FS_DialogueCameraParameters& Parameters, class UCameraComponent** CameraComponent);
	void GetCurrentSpeakerActor(class AActor** CurrentSpeakerActor_0);
	const class FText GetCurrentSpeakerName();
	void GetLastSelectedCharacterDatas(TArray<class UBP_CharacterData_C*>* CharacterData);
	void GetRichLineText(const struct FFRichDialogueLine& RichDialogueLine, class FText* LineText);
	void GetSpeaker(class UObject* Character, class AActor** Actor, class AActor** Slot);
	void GetTiedObject(class UObject** Object);
	void HandleCameraType(EDialogueCameraType CameraType, struct FS_DialogueCameraParameters& Parameters);
	bool HasActiveDialogue();
	bool HasDialogueInQueue();
	bool HasManualTransitionInProgress();
	void InterruptCurrentSpeaker();
	void InterruptInWorldDialogue();
	bool IsInDialogue();
	bool IsLootDialogueCompatible(class UBP_GeneratedItemInfo_Base_C* GeneratedItemInfo, struct FS_LootDialogue& LootDialogue);
	bool IsLootItemSubtypeCompatible(class UBP_GeneratedItemInfo_Base_C* GeneratedItemInfo, struct FS_LootDialogue& LootDialogue);
	bool IsLootItemTypeCompatible(class UBP_GeneratedItemInfo_Base_C* GeneratedItemInfo, struct FS_LootDialogue& LootDialogue);
	void IsPlayingInWorldDialogue(bool* IsPlaying);
	void IsPlayingSpecificInWorldDialogue(class UBP_DA_IWD_data_C* InWorldDialogue, bool* IsPlaying);
	void NotifyCompletionToDialogue();
	void OnAllDialogLinesPlayed();
	void OnBattleFinished(bool Victory);
	void OnCharacterSelectionCanceled();
	void OnCharacterSelectionDone(TArray<class UBP_CharacterData_C*>& CharacterDatas);
	void OnChoiceMade(int32 ChoiceIndex);
	void OnDialogueInterruptInput(class UWBP_GM_PromptGeneric_C* PromptWidget);
	void OnInWorldDialogueFinishedOrInterrupted();
	void OnLoaded_EEC4040348CBFCE11AE578A7CAAE788D(class UObject* Loaded);
	void OnMerchantFightRequested();
	void OnMerchantWindowClosed();
	void OnNextClicked(class UWBP_GM_PromptGeneric_C* PromptWidget);
	void OnSaveCompleted();
	void OnUIAction();
	void OnUINavigationFocus(const class UBP_UINavigationFocusEvent_C* FocusEventBP);
	void OnUINavigationFocusLost();
	void OnVendorWindowClosed();
	void OpenCharacterSelectorWindow(int32 MaxCharacterCount, bool CanCancel);
	void OpenMerchantWindow(class AActor* Merchant, bool* IsOpened);
	void PlayAnimation(class UBP_DataAsset_DialogueCharacter_C* Character, struct FS_Dialogue_AnimationParameters& AnimationParameters);
	void PlayAudioForCurrentSpeaker(const struct FFRichDialogueLine& DialogueLine);
	void PlayCameraAnimation(const struct FS_DialogueCameraParameters& CameraParameters);
	void PlayInWorldDialogue(class UBP_DA_IWD_data_C* DialogToPlay, bool* DialogueNotPlayed);
	void PlayInWorldDialogueFromSoftRef(TSoftObjectPtr<class UBP_DA_IWD_data_C> IWDRef);
	void PlayInWorldDialogueOnLoot(TArray<class UBP_GeneratedItemInfo_Base_C*>& Items);
	void PlayNextDialogueLine();
	void PlayNextDialogueWave(class UDialogueWave* DialogueWave, class AActor* Actor);
	void PlaySoundForCharacter(class USoundBase* Sound, class AActor* Actor);
	void PlaySpeakerAnimation(const struct FFRichDialogueLine& DialogueLine);
	void QueueDialogue(TSoftObjectPtr<class ABP_jRPG_NPC_Dialog_C> DialogToQueue, const struct FS_DialogueParameters& DialogueParameters);
	void ReceiveTick(float DeltaSeconds);
	void SaveAtSpawnPoint(const struct FGameplayTag& SpawnPointTag);
	void SetActiveDialogue(class ABP_Dialogue_C* Dialogue);
	void SetBreathingCameraMovementEnable(bool Activate_0);
	void SetCurrentSpeakStopTalking();
	void SetDialogueUI(class UWBP_DialogueOverlay_C* DialogueUI_0);
	void SetEnvelopeValue(double EnvelopeValue_0);
	void SetInWorldDialoguePaused(bool Paused);
	void SetManualTransitionInProgress(bool IsInProgress);
	bool ShouldApplyCamera(EDialogueCameraType CameraType, const struct FS_DialogueCameraParameters& Parameters);
	bool ShouldApplyCameraAnimation(const struct FS_DialogueCameraParameters& Parameters);
	bool ShouldUseDialogCameras();
	void Show_Leave_Button_if_Needed();
	void StartChoice(class ABP_Dialogue_C* Dialogue, TArray<class FText>& Choices, EDialogueCameraType CameraType, const struct FS_Dialogue_CustomOptions& CustomOptions);
	void StartDialogLines(class ABP_Dialogue_C* Dialog, TArray<class FText>& Lines, class UBP_DataAsset_DialogueCharacter_C* Character);
	void StartRichDialogueLines(class ABP_Dialogue_C* Dialogue, class UBP_DataAsset_DialogueCharacter_C* CharacterAsset, TArray<struct FFRichDialogueLine>& RichDialogueLines);
	void StopAudioForAllSpeakers();
	void StopRunningAnimationForAllSpeakers();
	void StopRunningAnimationsForActor(class AActor* Actor);
	void StopSoundForCharacter(class AActor* Actor);
	void TriggerDialogueEndCameraComponentManager();
	void TriggerDialogueStartCameraComponentManager();
	void TryFindSpeakerActorInAvailableSpeakers(class UObject* Character, class AActor** Actor, class AActor** Slot);
	void TryGetCompatibleLootDialogue(class UBP_GeneratedItemInfo_Base_C* GeneratedItemInfo, TSoftObjectPtr<class UBP_DA_IWD_data_C>* InWorldDialogue);
	void TryUnqueueDialogue();
	void UpdateAllSpeakerActors();
	void UpdateAvailableSpeakers();
	void UpdateCamera(const struct FFRichDialogueLine& DialogueLine);
	void UpdateCanInterruptDialogue(class ABP_Dialogue_C* Dialogue, const struct FS_Dialogue_CustomOptions& CustomOptions);
	void UpdateCurrentSpeakerData();
	void UpdateSpeakerTalkingAnimation(const struct FFRichDialogueLine& DialogueLine);
	void ValidateNPCDialogToEnqueue(class ABP_jRPG_NPC_Dialog_C* NPCDialog, bool* IsValid);
	void WaitDialogueInput();
	void WaitForBattleToFinish();
	void WaitForVendorToFinish();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DialogueSystemComponent_C">();
	}
	static class UBP_DialogueSystemComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_DialogueSystemComponent_C>();
	}
};
static_assert(alignof(UBP_DialogueSystemComponent_C) == 0x000008, "Wrong alignment on UBP_DialogueSystemComponent_C");
static_assert(sizeof(UBP_DialogueSystemComponent_C) == 0x000258, "Wrong size on UBP_DialogueSystemComponent_C");
static_assert(offsetof(UBP_DialogueSystemComponent_C, UberGraphFrame) == 0x0000A0, "Member 'UBP_DialogueSystemComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_DialogueSystemComponent_C, ActiveDialogue) == 0x0000A8, "Member 'UBP_DialogueSystemComponent_C::ActiveDialogue' has a wrong offset!");
static_assert(offsetof(UBP_DialogueSystemComponent_C, LastChoice) == 0x0000B0, "Member 'UBP_DialogueSystemComponent_C::LastChoice' has a wrong offset!");
static_assert(offsetof(UBP_DialogueSystemComponent_C, CurrentChoices) == 0x0000B8, "Member 'UBP_DialogueSystemComponent_C::CurrentChoices' has a wrong offset!");
static_assert(offsetof(UBP_DialogueSystemComponent_C, CurrentRichDialogueLinesQueue) == 0x0000C8, "Member 'UBP_DialogueSystemComponent_C::CurrentRichDialogueLinesQueue' has a wrong offset!");
static_assert(offsetof(UBP_DialogueSystemComponent_C, DialogueUI) == 0x0000D8, "Member 'UBP_DialogueSystemComponent_C::DialogueUI' has a wrong offset!");
static_assert(offsetof(UBP_DialogueSystemComponent_C, IsWaitingForDialogInput) == 0x0000E0, "Member 'UBP_DialogueSystemComponent_C::IsWaitingForDialogInput' has a wrong offset!");
static_assert(offsetof(UBP_DialogueSystemComponent_C, OnInWorldDialogueStarted) == 0x0000E8, "Member 'UBP_DialogueSystemComponent_C::OnInWorldDialogueStarted' has a wrong offset!");
static_assert(offsetof(UBP_DialogueSystemComponent_C, OnInWorldDialogueFinished) == 0x0000F8, "Member 'UBP_DialogueSystemComponent_C::OnInWorldDialogueFinished' has a wrong offset!");
static_assert(offsetof(UBP_DialogueSystemComponent_C, WasLastBattleVictory) == 0x000108, "Member 'UBP_DialogueSystemComponent_C::WasLastBattleVictory' has a wrong offset!");
static_assert(offsetof(UBP_DialogueSystemComponent_C, CurrentSpeakerData) == 0x000110, "Member 'UBP_DialogueSystemComponent_C::CurrentSpeakerData' has a wrong offset!");
static_assert(offsetof(UBP_DialogueSystemComponent_C, CurrentSpeakerActor) == 0x000118, "Member 'UBP_DialogueSystemComponent_C::CurrentSpeakerActor' has a wrong offset!");
static_assert(offsetof(UBP_DialogueSystemComponent_C, CurrentAudioReactionDialogue) == 0x000120, "Member 'UBP_DialogueSystemComponent_C::CurrentAudioReactionDialogue' has a wrong offset!");
static_assert(offsetof(UBP_DialogueSystemComponent_C, CurrentSoundBaseReactionDialogue) == 0x000128, "Member 'UBP_DialogueSystemComponent_C::CurrentSoundBaseReactionDialogue' has a wrong offset!");
static_assert(offsetof(UBP_DialogueSystemComponent_C, CurrentInWorldDialogueWidget) == 0x000130, "Member 'UBP_DialogueSystemComponent_C::CurrentInWorldDialogueWidget' has a wrong offset!");
static_assert(offsetof(UBP_DialogueSystemComponent_C, CanInterruptDialogue) == 0x000138, "Member 'UBP_DialogueSystemComponent_C::CanInterruptDialogue' has a wrong offset!");
static_assert(offsetof(UBP_DialogueSystemComponent_C, CurrentSpeakerAnimationComponent) == 0x000140, "Member 'UBP_DialogueSystemComponent_C::CurrentSpeakerAnimationComponent' has a wrong offset!");
static_assert(offsetof(UBP_DialogueSystemComponent_C, CurrentCameraComponent) == 0x000148, "Member 'UBP_DialogueSystemComponent_C::CurrentCameraComponent' has a wrong offset!");
static_assert(offsetof(UBP_DialogueSystemComponent_C, CurrentSpeakerSlot) == 0x000150, "Member 'UBP_DialogueSystemComponent_C::CurrentSpeakerSlot' has a wrong offset!");
static_assert(offsetof(UBP_DialogueSystemComponent_C, AvailableSpeakerSlots) == 0x000158, "Member 'UBP_DialogueSystemComponent_C::AvailableSpeakerSlots' has a wrong offset!");
static_assert(offsetof(UBP_DialogueSystemComponent_C, DialogQueue) == 0x000168, "Member 'UBP_DialogueSystemComponent_C::DialogQueue' has a wrong offset!");
static_assert(offsetof(UBP_DialogueSystemComponent_C, OnDialogueStarted) == 0x000178, "Member 'UBP_DialogueSystemComponent_C::OnDialogueStarted' has a wrong offset!");
static_assert(offsetof(UBP_DialogueSystemComponent_C, OnDialogueFinished) == 0x000188, "Member 'UBP_DialogueSystemComponent_C::OnDialogueFinished' has a wrong offset!");
static_assert(offsetof(UBP_DialogueSystemComponent_C, CharacterSelectorWindow) == 0x000198, "Member 'UBP_DialogueSystemComponent_C::CharacterSelectorWindow' has a wrong offset!");
static_assert(offsetof(UBP_DialogueSystemComponent_C, LastSelectedCharacterDatas) == 0x0001A0, "Member 'UBP_DialogueSystemComponent_C::LastSelectedCharacterDatas' has a wrong offset!");
static_assert(offsetof(UBP_DialogueSystemComponent_C, MerchantWindow) == 0x0001B0, "Member 'UBP_DialogueSystemComponent_C::MerchantWindow' has a wrong offset!");
static_assert(offsetof(UBP_DialogueSystemComponent_C, FacialTalkingTimer) == 0x0001B8, "Member 'UBP_DialogueSystemComponent_C::FacialTalkingTimer' has a wrong offset!");
static_assert(offsetof(UBP_DialogueSystemComponent_C, PreviousCameraAnimation) == 0x0001C0, "Member 'UBP_DialogueSystemComponent_C::PreviousCameraAnimation' has a wrong offset!");
static_assert(offsetof(UBP_DialogueSystemComponent_C, BreathingCameraAnimation) == 0x0001C4, "Member 'UBP_DialogueSystemComponent_C::BreathingCameraAnimation' has a wrong offset!");
static_assert(offsetof(UBP_DialogueSystemComponent_C, PreviousCameraType) == 0x0001C8, "Member 'UBP_DialogueSystemComponent_C::PreviousCameraType' has a wrong offset!");
static_assert(offsetof(UBP_DialogueSystemComponent_C, PreviousSpeakerActor) == 0x0001D0, "Member 'UBP_DialogueSystemComponent_C::PreviousSpeakerActor' has a wrong offset!");
static_assert(offsetof(UBP_DialogueSystemComponent_C, AllSpeakerActors) == 0x0001D8, "Member 'UBP_DialogueSystemComponent_C::AllSpeakerActors' has a wrong offset!");
static_assert(offsetof(UBP_DialogueSystemComponent_C, ForceRefreshCameraOnNextLine) == 0x0001E8, "Member 'UBP_DialogueSystemComponent_C::ForceRefreshCameraOnNextLine' has a wrong offset!");
static_assert(offsetof(UBP_DialogueSystemComponent_C, OnAnyDialogueStarted) == 0x0001F0, "Member 'UBP_DialogueSystemComponent_C::OnAnyDialogueStarted' has a wrong offset!");
static_assert(offsetof(UBP_DialogueSystemComponent_C, OnAnyDialogueFinished) == 0x000200, "Member 'UBP_DialogueSystemComponent_C::OnAnyDialogueFinished' has a wrong offset!");
static_assert(offsetof(UBP_DialogueSystemComponent_C, ManualTransitionInProgress) == 0x000210, "Member 'UBP_DialogueSystemComponent_C::ManualTransitionInProgress' has a wrong offset!");
static_assert(offsetof(UBP_DialogueSystemComponent_C, LootDialoguesTable) == 0x000218, "Member 'UBP_DialogueSystemComponent_C::LootDialoguesTable' has a wrong offset!");
static_assert(offsetof(UBP_DialogueSystemComponent_C, SoundEventWindowOpen) == 0x000220, "Member 'UBP_DialogueSystemComponent_C::SoundEventWindowOpen' has a wrong offset!");
static_assert(offsetof(UBP_DialogueSystemComponent_C, PreviousCamera) == 0x000230, "Member 'UBP_DialogueSystemComponent_C::PreviousCamera' has a wrong offset!");
static_assert(offsetof(UBP_DialogueSystemComponent_C, EnvelopeValue) == 0x000238, "Member 'UBP_DialogueSystemComponent_C::EnvelopeValue' has a wrong offset!");
static_assert(offsetof(UBP_DialogueSystemComponent_C, TickUpdateEnvelopeVolumeOfComponent) == 0x000240, "Member 'UBP_DialogueSystemComponent_C::TickUpdateEnvelopeVolumeOfComponent' has a wrong offset!");
static_assert(offsetof(UBP_DialogueSystemComponent_C, OnDisplayRelationshipLevelIncreasedRequested) == 0x000248, "Member 'UBP_DialogueSystemComponent_C::OnDisplayRelationshipLevelIncreasedRequested' has a wrong offset!");

}

