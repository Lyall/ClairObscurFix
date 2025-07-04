﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TutoPanel

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_TutoPanel.WBP_TutoPanel_C.ExecuteUbergraph_WBP_TutoPanel
// 0x0048 (0x0048 - 0x0000)
struct WBP_TutoPanel_C_ExecuteUbergraph_WBP_TutoPanel final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMediaSource*                           K2Node_CustomEvent_Media_Source;                   // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMediaTexture*                          K2Node_CustomEvent_Video;                          // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_CustomEvent_NameToSet;                      // 0x0020(0x0010)()
	class FText                                   K2Node_CustomEvent_DescriptionToSet;               // 0x0030(0x0010)()
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TutoPanel_C_ExecuteUbergraph_WBP_TutoPanel) == 0x000008, "Wrong alignment on WBP_TutoPanel_C_ExecuteUbergraph_WBP_TutoPanel");
static_assert(sizeof(WBP_TutoPanel_C_ExecuteUbergraph_WBP_TutoPanel) == 0x000048, "Wrong size on WBP_TutoPanel_C_ExecuteUbergraph_WBP_TutoPanel");
static_assert(offsetof(WBP_TutoPanel_C_ExecuteUbergraph_WBP_TutoPanel, EntryPoint) == 0x000000, "Member 'WBP_TutoPanel_C_ExecuteUbergraph_WBP_TutoPanel::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_TutoPanel_C_ExecuteUbergraph_WBP_TutoPanel, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'WBP_TutoPanel_C_ExecuteUbergraph_WBP_TutoPanel::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TutoPanel_C_ExecuteUbergraph_WBP_TutoPanel, K2Node_CustomEvent_Media_Source) == 0x000010, "Member 'WBP_TutoPanel_C_ExecuteUbergraph_WBP_TutoPanel::K2Node_CustomEvent_Media_Source' has a wrong offset!");
static_assert(offsetof(WBP_TutoPanel_C_ExecuteUbergraph_WBP_TutoPanel, K2Node_CustomEvent_Video) == 0x000018, "Member 'WBP_TutoPanel_C_ExecuteUbergraph_WBP_TutoPanel::K2Node_CustomEvent_Video' has a wrong offset!");
static_assert(offsetof(WBP_TutoPanel_C_ExecuteUbergraph_WBP_TutoPanel, K2Node_CustomEvent_NameToSet) == 0x000020, "Member 'WBP_TutoPanel_C_ExecuteUbergraph_WBP_TutoPanel::K2Node_CustomEvent_NameToSet' has a wrong offset!");
static_assert(offsetof(WBP_TutoPanel_C_ExecuteUbergraph_WBP_TutoPanel, K2Node_CustomEvent_DescriptionToSet) == 0x000030, "Member 'WBP_TutoPanel_C_ExecuteUbergraph_WBP_TutoPanel::K2Node_CustomEvent_DescriptionToSet' has a wrong offset!");
static_assert(offsetof(WBP_TutoPanel_C_ExecuteUbergraph_WBP_TutoPanel, CallFunc_PlayAnimation_ReturnValue_1) == 0x000040, "Member 'WBP_TutoPanel_C_ExecuteUbergraph_WBP_TutoPanel::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

// Function WBP_TutoPanel.WBP_TutoPanel_C.SetTutoText
// 0x0030 (0x0030 - 0x0000)
struct WBP_TutoPanel_C_SetTutoText final
{
public:
	class UMediaSource*                           Media_Source;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMediaTexture*                          Video;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   NameToSet;                                         // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   DescriptionToSet;                                  // 0x0020(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_TutoPanel_C_SetTutoText) == 0x000008, "Wrong alignment on WBP_TutoPanel_C_SetTutoText");
static_assert(sizeof(WBP_TutoPanel_C_SetTutoText) == 0x000030, "Wrong size on WBP_TutoPanel_C_SetTutoText");
static_assert(offsetof(WBP_TutoPanel_C_SetTutoText, Media_Source) == 0x000000, "Member 'WBP_TutoPanel_C_SetTutoText::Media_Source' has a wrong offset!");
static_assert(offsetof(WBP_TutoPanel_C_SetTutoText, Video) == 0x000008, "Member 'WBP_TutoPanel_C_SetTutoText::Video' has a wrong offset!");
static_assert(offsetof(WBP_TutoPanel_C_SetTutoText, NameToSet) == 0x000010, "Member 'WBP_TutoPanel_C_SetTutoText::NameToSet' has a wrong offset!");
static_assert(offsetof(WBP_TutoPanel_C_SetTutoText, DescriptionToSet) == 0x000020, "Member 'WBP_TutoPanel_C_SetTutoText::DescriptionToSet' has a wrong offset!");

}

