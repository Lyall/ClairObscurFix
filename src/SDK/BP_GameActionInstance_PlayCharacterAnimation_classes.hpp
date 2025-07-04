﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GameActionInstance_PlayCharacterAnimation

#include "Basic.hpp"

#include "SandFall_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_GameActionInstance_PlayCharacterAnimation.BP_GameActionInstance_PlayCharacterAnimation_C
// 0x0010 (0x0050 - 0x0040)
class UBP_GameActionInstance_PlayCharacterAnimation_C final : public UGameActionInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0040(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ULevelSequencePlayer*                   LevelSequencePlayer;                               // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteGameAction(const class APlayerController* Controller);
	void ExecuteUbergraph_BP_GameActionInstance_PlayCharacterAnimation(int32 EntryPoint);
	void GetAnimationParameters(TArray<struct FS_CharacterAnimationParameters>* CharacterAnimationParameters);
	void OnBlendOut_59E1B9894783BC83F05507AF42E2EC74(class FName NotifyName);
	void OnCompleted_59E1B9894783BC83F05507AF42E2EC74(class FName NotifyName);
	void OnInterrupted_59E1B9894783BC83F05507AF42E2EC74(class FName NotifyName);
	void OnNotifyBegin_59E1B9894783BC83F05507AF42E2EC74(class FName NotifyName);
	void OnNotifyEnd_59E1B9894783BC83F05507AF42E2EC74(class FName NotifyName);

	class FString GetDebugString() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_GameActionInstance_PlayCharacterAnimation_C">();
	}
	static class UBP_GameActionInstance_PlayCharacterAnimation_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_GameActionInstance_PlayCharacterAnimation_C>();
	}
};
static_assert(alignof(UBP_GameActionInstance_PlayCharacterAnimation_C) == 0x000008, "Wrong alignment on UBP_GameActionInstance_PlayCharacterAnimation_C");
static_assert(sizeof(UBP_GameActionInstance_PlayCharacterAnimation_C) == 0x000050, "Wrong size on UBP_GameActionInstance_PlayCharacterAnimation_C");
static_assert(offsetof(UBP_GameActionInstance_PlayCharacterAnimation_C, UberGraphFrame) == 0x000040, "Member 'UBP_GameActionInstance_PlayCharacterAnimation_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_GameActionInstance_PlayCharacterAnimation_C, LevelSequencePlayer) == 0x000048, "Member 'UBP_GameActionInstance_PlayCharacterAnimation_C::LevelSequencePlayer' has a wrong offset!");

}

