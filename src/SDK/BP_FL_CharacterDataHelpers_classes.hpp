﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FL_CharacterDataHelpers

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "E_jRPG_ItemSubtype_structs.hpp"
#include "E_CharacterList_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_FL_CharacterDataHelpers.BP_FL_CharacterDataHelpers_C
// 0x0000 (0x0028 - 0x0028)
class UBP_FL_CharacterDataHelpers_C final : public UBlueprintFunctionLibrary
{
public:
	static TArray<struct FS_ItemQuantity> GetCharacterResetConsumableCost(class UObject* __WorldContext);
	static void GetNameFromItemSubtype(E_jRPG_ItemSubtype ItemSubtype, class UObject* __WorldContext, class FName* Name_0);
	static void ToHardcodedName(E_CharacterList Character, class UObject* __WorldContext, class FName* HardcodedName);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FL_CharacterDataHelpers_C">();
	}
	static class UBP_FL_CharacterDataHelpers_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_FL_CharacterDataHelpers_C>();
	}
};
static_assert(alignof(UBP_FL_CharacterDataHelpers_C) == 0x000008, "Wrong alignment on UBP_FL_CharacterDataHelpers_C");
static_assert(sizeof(UBP_FL_CharacterDataHelpers_C) == 0x000028, "Wrong size on UBP_FL_CharacterDataHelpers_C");

}

