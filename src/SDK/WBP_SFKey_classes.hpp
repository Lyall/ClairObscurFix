﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_SFKey

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "InputCore_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_SFKey.WBP_SFKey_C
// 0x0088 (0x0368 - 0x02E0)
class UWBP_SFKey_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Frame;                                             // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonLazyImage*                       KeyIcon;                                           // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text;                                              // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FKey                                   Key;                                               // 0x0300(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TMap<struct FKey, TSoftObjectPtr<class UTexture2D>> KeysWithIcons;                               // 0x0318(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_WBP_SFKey(int32 EntryPoint);
	void GetKey(struct FKey* Key_0);
	void PreConstruct(bool IsDesignTime);
	void SetKey(const struct FKey& InKey);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_SFKey_C">();
	}
	static class UWBP_SFKey_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_SFKey_C>();
	}
};
static_assert(alignof(UWBP_SFKey_C) == 0x000008, "Wrong alignment on UWBP_SFKey_C");
static_assert(sizeof(UWBP_SFKey_C) == 0x000368, "Wrong size on UWBP_SFKey_C");
static_assert(offsetof(UWBP_SFKey_C, UberGraphFrame) == 0x0002E0, "Member 'UWBP_SFKey_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_SFKey_C, Frame) == 0x0002E8, "Member 'UWBP_SFKey_C::Frame' has a wrong offset!");
static_assert(offsetof(UWBP_SFKey_C, KeyIcon) == 0x0002F0, "Member 'UWBP_SFKey_C::KeyIcon' has a wrong offset!");
static_assert(offsetof(UWBP_SFKey_C, Text) == 0x0002F8, "Member 'UWBP_SFKey_C::Text' has a wrong offset!");
static_assert(offsetof(UWBP_SFKey_C, Key) == 0x000300, "Member 'UWBP_SFKey_C::Key' has a wrong offset!");
static_assert(offsetof(UWBP_SFKey_C, KeysWithIcons) == 0x000318, "Member 'UWBP_SFKey_C::KeysWithIcons' has a wrong offset!");

}

