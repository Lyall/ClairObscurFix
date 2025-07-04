﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_DialogEntry

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_DialogEntry.W_DialogEntry_C
// 0x0880 (0x0B60 - 0x02E0)
class UW_DialogEntry_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                Button;                                            // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text;                                              // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                   EventId;                                           // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         SwitchID;                                          // 0x0300(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_304[0x4];                                      // 0x0304(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   ResponseDialog;                                    // 0x0308(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)
	class USoundBase*                             ResponseAudio;                                     // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class AActor*                                 NPCReference;                                      // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UBP_DialogSystem_C*                     DialogReference;                                   // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                        EnableDelay;                                       // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FLinearColor                           TextColorHovered;                                  // 0x0338(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FLinearColor                           TextColorNormal;                                   // 0x0348(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UTexture2D*                             BtnHoveredImage;                                   // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UTexture2D*                             BtnNormalImage;                                    // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_368[0x8];                                      // 0x0368(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FButtonStyle                           DefaultNormalStyle;                                // 0x0370(0x03F0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FButtonStyle                           DefaultHoveredStyle;                               // 0x0760(0x03F0)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          ShowDebug_;                                        // 0x0B50(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_B51[0x7];                                      // 0x0B51(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAudioComponent*                        AudioDialogue;                                     // 0x0B58(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void BndEvt__Button_10_K2Node_ComponentBoundEvent_280_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void Dialog(class FName EventId_0, int32 SwitchID_0, const class FText& DialogText);
	void EKeyEvent();
	void ExecuteUbergraph_W_DialogEntry(int32 EntryPoint);
	void Highlight();
	class FText SetDialogResponse();
	void texthighlight();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_DialogEntry_C">();
	}
	static class UW_DialogEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_DialogEntry_C>();
	}
};
static_assert(alignof(UW_DialogEntry_C) == 0x000010, "Wrong alignment on UW_DialogEntry_C");
static_assert(sizeof(UW_DialogEntry_C) == 0x000B60, "Wrong size on UW_DialogEntry_C");
static_assert(offsetof(UW_DialogEntry_C, UberGraphFrame) == 0x0002E0, "Member 'UW_DialogEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_DialogEntry_C, Button) == 0x0002E8, "Member 'UW_DialogEntry_C::Button' has a wrong offset!");
static_assert(offsetof(UW_DialogEntry_C, Text) == 0x0002F0, "Member 'UW_DialogEntry_C::Text' has a wrong offset!");
static_assert(offsetof(UW_DialogEntry_C, EventId) == 0x0002F8, "Member 'UW_DialogEntry_C::EventId' has a wrong offset!");
static_assert(offsetof(UW_DialogEntry_C, SwitchID) == 0x000300, "Member 'UW_DialogEntry_C::SwitchID' has a wrong offset!");
static_assert(offsetof(UW_DialogEntry_C, ResponseDialog) == 0x000308, "Member 'UW_DialogEntry_C::ResponseDialog' has a wrong offset!");
static_assert(offsetof(UW_DialogEntry_C, ResponseAudio) == 0x000318, "Member 'UW_DialogEntry_C::ResponseAudio' has a wrong offset!");
static_assert(offsetof(UW_DialogEntry_C, NPCReference) == 0x000320, "Member 'UW_DialogEntry_C::NPCReference' has a wrong offset!");
static_assert(offsetof(UW_DialogEntry_C, DialogReference) == 0x000328, "Member 'UW_DialogEntry_C::DialogReference' has a wrong offset!");
static_assert(offsetof(UW_DialogEntry_C, EnableDelay) == 0x000330, "Member 'UW_DialogEntry_C::EnableDelay' has a wrong offset!");
static_assert(offsetof(UW_DialogEntry_C, TextColorHovered) == 0x000338, "Member 'UW_DialogEntry_C::TextColorHovered' has a wrong offset!");
static_assert(offsetof(UW_DialogEntry_C, TextColorNormal) == 0x000348, "Member 'UW_DialogEntry_C::TextColorNormal' has a wrong offset!");
static_assert(offsetof(UW_DialogEntry_C, BtnHoveredImage) == 0x000358, "Member 'UW_DialogEntry_C::BtnHoveredImage' has a wrong offset!");
static_assert(offsetof(UW_DialogEntry_C, BtnNormalImage) == 0x000360, "Member 'UW_DialogEntry_C::BtnNormalImage' has a wrong offset!");
static_assert(offsetof(UW_DialogEntry_C, DefaultNormalStyle) == 0x000370, "Member 'UW_DialogEntry_C::DefaultNormalStyle' has a wrong offset!");
static_assert(offsetof(UW_DialogEntry_C, DefaultHoveredStyle) == 0x000760, "Member 'UW_DialogEntry_C::DefaultHoveredStyle' has a wrong offset!");
static_assert(offsetof(UW_DialogEntry_C, ShowDebug_) == 0x000B50, "Member 'UW_DialogEntry_C::ShowDebug_' has a wrong offset!");
static_assert(offsetof(UW_DialogEntry_C, AudioDialogue) == 0x000B58, "Member 'UW_DialogEntry_C::AudioDialogue' has a wrong offset!");

}

