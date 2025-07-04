﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GameActionInstance_RemoveItemFromInventory

#include "Basic.hpp"

#include "SandFall_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_GameActionInstance_RemoveItemFromInventory.BP_GameActionInstance_RemoveItemFromInventory_C
// 0x0008 (0x0048 - 0x0040)
class UBP_GameActionInstance_RemoveItemFromInventory_C final : public UGameActionInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0040(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteGameAction(const class APlayerController* Controller);
	void ExecuteUbergraph_BP_GameActionInstance_RemoveItemFromInventory(int32 EntryPoint);
	void GetItemNameAndQuantity(const struct FS_ItemOperationData& ItemOperationData, class FName* Item, int32* Quantity);

	class FString GetDebugString() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_GameActionInstance_RemoveItemFromInventory_C">();
	}
	static class UBP_GameActionInstance_RemoveItemFromInventory_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_GameActionInstance_RemoveItemFromInventory_C>();
	}
};
static_assert(alignof(UBP_GameActionInstance_RemoveItemFromInventory_C) == 0x000008, "Wrong alignment on UBP_GameActionInstance_RemoveItemFromInventory_C");
static_assert(sizeof(UBP_GameActionInstance_RemoveItemFromInventory_C) == 0x000048, "Wrong size on UBP_GameActionInstance_RemoveItemFromInventory_C");
static_assert(offsetof(UBP_GameActionInstance_RemoveItemFromInventory_C, UberGraphFrame) == 0x000040, "Member 'UBP_GameActionInstance_RemoveItemFromInventory_C::UberGraphFrame' has a wrong offset!");

}

