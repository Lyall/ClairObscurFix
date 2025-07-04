﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_DialogBox

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_DialogBox.W_DialogBox_C
// 0x0950 (0x0C30 - 0x02E0)
class UW_DialogBox_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                         DialogHBox;                                        // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 DialogImageUI;                                     // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             DialogNameText;                                    // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             DialogSBox;                                        // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                MainBorder;                                        // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           MainCanvasPanel;                                   // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               MainDialogOverlay;                                 // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               MainSBox;                                          // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                NPCDialogBorder;                                   // 0x0328(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                NPCDialogButton;                                   // 0x0330(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               NPCDialogOverlay;                                  // 0x0338(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             NPCDialogText;                                     // 0x0340(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           NPCDialogVBox;                                     // 0x0348(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 NPCImage;                                          // 0x0350(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               NPCImageSBox;                                      // 0x0358(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         NPCInfoHBox;                                       // 0x0360(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             NPCNameText;                                       // 0x0368(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_DialogSystem_C*                     DialogReference;                                   // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class AActor*                                 NPCReference;                                      // 0x0378(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          MouseVisible_;                                     // 0x0380(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_381[0x7];                                      // 0x0381(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Name_0;                                            // 0x0388(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   NPCDialog;                                         // 0x0398(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         NPCDialogArray;                                    // 0x03A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3AC[0x4];                                      // 0x03AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 AppendNPCDialog;                                   // 0x03B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          Collapsed_;                                        // 0x03C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DialogClickable_;                                  // 0x03C1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DialogActive_;                                     // 0x03C2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C3[0x5];                                      // 0x03C3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        NPCButtenDelay;                                    // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   EventId;                                           // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CameraBlendTime;                                   // 0x03D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             TypingSound;                                       // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 SceneCamera;                                       // 0x03E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OldSceneCamera;                                    // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F8[0x8];                                      // 0x03F8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FButtonStyle                           DefaultHoveredStyle;                               // 0x0400(0x03F0)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                        DialogEventDelay;                                  // 0x07F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7F8[0x8];                                      // 0x07F8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FButtonStyle                           DefaultNormalStyle;                                // 0x0800(0x03F0)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UTexture2D*                             BtnHoveredImage;                                   // 0x0BF0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             BtnNormalImage;                                    // 0x0BF8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           TextColorHovered;                                  // 0x0C00(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           TextColorNormal;                                   // 0x0C10(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Removed_;                                          // 0x0C20(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShowDebug_;                                        // 0x0C21(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void BndEvt__NPCButton_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void Destruct();
	void Dialog(class FName EventId_0, int32 SwitchID, const class FText& DialogText);
	void EKeyEvent();
	void ExecuteUbergraph_W_DialogBox(int32 EntryPoint);
	void MakeResponseBoxVisible();
	ESlateVisibility NPCImageVisibility();
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	class FText SetNameText();
	void SetNPCDialog(double Duration);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_DialogBox_C">();
	}
	static class UW_DialogBox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_DialogBox_C>();
	}
};
static_assert(alignof(UW_DialogBox_C) == 0x000010, "Wrong alignment on UW_DialogBox_C");
static_assert(sizeof(UW_DialogBox_C) == 0x000C30, "Wrong size on UW_DialogBox_C");
static_assert(offsetof(UW_DialogBox_C, UberGraphFrame) == 0x0002E0, "Member 'UW_DialogBox_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_DialogBox_C, DialogHBox) == 0x0002E8, "Member 'UW_DialogBox_C::DialogHBox' has a wrong offset!");
static_assert(offsetof(UW_DialogBox_C, DialogImageUI) == 0x0002F0, "Member 'UW_DialogBox_C::DialogImageUI' has a wrong offset!");
static_assert(offsetof(UW_DialogBox_C, DialogNameText) == 0x0002F8, "Member 'UW_DialogBox_C::DialogNameText' has a wrong offset!");
static_assert(offsetof(UW_DialogBox_C, DialogSBox) == 0x000300, "Member 'UW_DialogBox_C::DialogSBox' has a wrong offset!");
static_assert(offsetof(UW_DialogBox_C, MainBorder) == 0x000308, "Member 'UW_DialogBox_C::MainBorder' has a wrong offset!");
static_assert(offsetof(UW_DialogBox_C, MainCanvasPanel) == 0x000310, "Member 'UW_DialogBox_C::MainCanvasPanel' has a wrong offset!");
static_assert(offsetof(UW_DialogBox_C, MainDialogOverlay) == 0x000318, "Member 'UW_DialogBox_C::MainDialogOverlay' has a wrong offset!");
static_assert(offsetof(UW_DialogBox_C, MainSBox) == 0x000320, "Member 'UW_DialogBox_C::MainSBox' has a wrong offset!");
static_assert(offsetof(UW_DialogBox_C, NPCDialogBorder) == 0x000328, "Member 'UW_DialogBox_C::NPCDialogBorder' has a wrong offset!");
static_assert(offsetof(UW_DialogBox_C, NPCDialogButton) == 0x000330, "Member 'UW_DialogBox_C::NPCDialogButton' has a wrong offset!");
static_assert(offsetof(UW_DialogBox_C, NPCDialogOverlay) == 0x000338, "Member 'UW_DialogBox_C::NPCDialogOverlay' has a wrong offset!");
static_assert(offsetof(UW_DialogBox_C, NPCDialogText) == 0x000340, "Member 'UW_DialogBox_C::NPCDialogText' has a wrong offset!");
static_assert(offsetof(UW_DialogBox_C, NPCDialogVBox) == 0x000348, "Member 'UW_DialogBox_C::NPCDialogVBox' has a wrong offset!");
static_assert(offsetof(UW_DialogBox_C, NPCImage) == 0x000350, "Member 'UW_DialogBox_C::NPCImage' has a wrong offset!");
static_assert(offsetof(UW_DialogBox_C, NPCImageSBox) == 0x000358, "Member 'UW_DialogBox_C::NPCImageSBox' has a wrong offset!");
static_assert(offsetof(UW_DialogBox_C, NPCInfoHBox) == 0x000360, "Member 'UW_DialogBox_C::NPCInfoHBox' has a wrong offset!");
static_assert(offsetof(UW_DialogBox_C, NPCNameText) == 0x000368, "Member 'UW_DialogBox_C::NPCNameText' has a wrong offset!");
static_assert(offsetof(UW_DialogBox_C, DialogReference) == 0x000370, "Member 'UW_DialogBox_C::DialogReference' has a wrong offset!");
static_assert(offsetof(UW_DialogBox_C, NPCReference) == 0x000378, "Member 'UW_DialogBox_C::NPCReference' has a wrong offset!");
static_assert(offsetof(UW_DialogBox_C, MouseVisible_) == 0x000380, "Member 'UW_DialogBox_C::MouseVisible_' has a wrong offset!");
static_assert(offsetof(UW_DialogBox_C, Name_0) == 0x000388, "Member 'UW_DialogBox_C::Name_0' has a wrong offset!");
static_assert(offsetof(UW_DialogBox_C, NPCDialog) == 0x000398, "Member 'UW_DialogBox_C::NPCDialog' has a wrong offset!");
static_assert(offsetof(UW_DialogBox_C, NPCDialogArray) == 0x0003A8, "Member 'UW_DialogBox_C::NPCDialogArray' has a wrong offset!");
static_assert(offsetof(UW_DialogBox_C, AppendNPCDialog) == 0x0003B0, "Member 'UW_DialogBox_C::AppendNPCDialog' has a wrong offset!");
static_assert(offsetof(UW_DialogBox_C, Collapsed_) == 0x0003C0, "Member 'UW_DialogBox_C::Collapsed_' has a wrong offset!");
static_assert(offsetof(UW_DialogBox_C, DialogClickable_) == 0x0003C1, "Member 'UW_DialogBox_C::DialogClickable_' has a wrong offset!");
static_assert(offsetof(UW_DialogBox_C, DialogActive_) == 0x0003C2, "Member 'UW_DialogBox_C::DialogActive_' has a wrong offset!");
static_assert(offsetof(UW_DialogBox_C, NPCButtenDelay) == 0x0003C8, "Member 'UW_DialogBox_C::NPCButtenDelay' has a wrong offset!");
static_assert(offsetof(UW_DialogBox_C, EventId) == 0x0003D0, "Member 'UW_DialogBox_C::EventId' has a wrong offset!");
static_assert(offsetof(UW_DialogBox_C, CameraBlendTime) == 0x0003D8, "Member 'UW_DialogBox_C::CameraBlendTime' has a wrong offset!");
static_assert(offsetof(UW_DialogBox_C, TypingSound) == 0x0003E0, "Member 'UW_DialogBox_C::TypingSound' has a wrong offset!");
static_assert(offsetof(UW_DialogBox_C, SceneCamera) == 0x0003E8, "Member 'UW_DialogBox_C::SceneCamera' has a wrong offset!");
static_assert(offsetof(UW_DialogBox_C, OldSceneCamera) == 0x0003F0, "Member 'UW_DialogBox_C::OldSceneCamera' has a wrong offset!");
static_assert(offsetof(UW_DialogBox_C, DefaultHoveredStyle) == 0x000400, "Member 'UW_DialogBox_C::DefaultHoveredStyle' has a wrong offset!");
static_assert(offsetof(UW_DialogBox_C, DialogEventDelay) == 0x0007F0, "Member 'UW_DialogBox_C::DialogEventDelay' has a wrong offset!");
static_assert(offsetof(UW_DialogBox_C, DefaultNormalStyle) == 0x000800, "Member 'UW_DialogBox_C::DefaultNormalStyle' has a wrong offset!");
static_assert(offsetof(UW_DialogBox_C, BtnHoveredImage) == 0x000BF0, "Member 'UW_DialogBox_C::BtnHoveredImage' has a wrong offset!");
static_assert(offsetof(UW_DialogBox_C, BtnNormalImage) == 0x000BF8, "Member 'UW_DialogBox_C::BtnNormalImage' has a wrong offset!");
static_assert(offsetof(UW_DialogBox_C, TextColorHovered) == 0x000C00, "Member 'UW_DialogBox_C::TextColorHovered' has a wrong offset!");
static_assert(offsetof(UW_DialogBox_C, TextColorNormal) == 0x000C10, "Member 'UW_DialogBox_C::TextColorNormal' has a wrong offset!");
static_assert(offsetof(UW_DialogBox_C, Removed_) == 0x000C20, "Member 'UW_DialogBox_C::Removed_' has a wrong offset!");
static_assert(offsetof(UW_DialogBox_C, ShowDebug_) == 0x000C21, "Member 'UW_DialogBox_C::ShowDebug_' has a wrong offset!");

}

