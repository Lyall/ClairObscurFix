﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Settings_GenericPage

#include "Basic.hpp"

#include "EModalUIResponse_structs.hpp"


namespace SDK::Params
{

// Function WBP_Settings_GenericPage.WBP_Settings_GenericPage_C.AreSettingValidBeforeApply
// 0x0001 (0x0001 - 0x0000)
struct WBP_Settings_GenericPage_C_AreSettingValidBeforeApply final
{
public:
	bool                                          IsValid;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Settings_GenericPage_C_AreSettingValidBeforeApply) == 0x000001, "Wrong alignment on WBP_Settings_GenericPage_C_AreSettingValidBeforeApply");
static_assert(sizeof(WBP_Settings_GenericPage_C_AreSettingValidBeforeApply) == 0x000001, "Wrong size on WBP_Settings_GenericPage_C_AreSettingValidBeforeApply");
static_assert(offsetof(WBP_Settings_GenericPage_C_AreSettingValidBeforeApply, IsValid) == 0x000000, "Member 'WBP_Settings_GenericPage_C_AreSettingValidBeforeApply::IsValid' has a wrong offset!");

// Function WBP_Settings_GenericPage.WBP_Settings_GenericPage_C.AreSettingsDirty
// 0x0018 (0x0018 - 0x0000)
struct WBP_Settings_GenericPage_C_AreSettingsDirty final
{
public:
	bool                                          IsDirty;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_GameDifficultyManager_C*            CallFunc_GetDifficultyManager_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCurrentDifficultyDirty_IsDirty;         // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDirty_ReturnValue;                      // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Settings_GenericPage_C_AreSettingsDirty) == 0x000008, "Wrong alignment on WBP_Settings_GenericPage_C_AreSettingsDirty");
static_assert(sizeof(WBP_Settings_GenericPage_C_AreSettingsDirty) == 0x000018, "Wrong size on WBP_Settings_GenericPage_C_AreSettingsDirty");
static_assert(offsetof(WBP_Settings_GenericPage_C_AreSettingsDirty, IsDirty) == 0x000000, "Member 'WBP_Settings_GenericPage_C_AreSettingsDirty::IsDirty' has a wrong offset!");
static_assert(offsetof(WBP_Settings_GenericPage_C_AreSettingsDirty, CallFunc_GetDifficultyManager_ReturnValue) == 0x000008, "Member 'WBP_Settings_GenericPage_C_AreSettingsDirty::CallFunc_GetDifficultyManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Settings_GenericPage_C_AreSettingsDirty, CallFunc_IsCurrentDifficultyDirty_IsDirty) == 0x000010, "Member 'WBP_Settings_GenericPage_C_AreSettingsDirty::CallFunc_IsCurrentDifficultyDirty_IsDirty' has a wrong offset!");
static_assert(offsetof(WBP_Settings_GenericPage_C_AreSettingsDirty, CallFunc_IsDirty_ReturnValue) == 0x000011, "Member 'WBP_Settings_GenericPage_C_AreSettingsDirty::CallFunc_IsDirty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Settings_GenericPage_C_AreSettingsDirty, CallFunc_BooleanOR_ReturnValue) == 0x000012, "Member 'WBP_Settings_GenericPage_C_AreSettingsDirty::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function WBP_Settings_GenericPage.WBP_Settings_GenericPage_C.Apply Settings
// 0x0008 (0x0008 - 0x0000)
struct WBP_Settings_GenericPage_C_Apply_Settings final
{
public:
	class UBP_jRPG_GI_Custom_C*                   CallFunc_GetCustomGI_ReturnValue;                  // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Settings_GenericPage_C_Apply_Settings) == 0x000008, "Wrong alignment on WBP_Settings_GenericPage_C_Apply_Settings");
static_assert(sizeof(WBP_Settings_GenericPage_C_Apply_Settings) == 0x000008, "Wrong size on WBP_Settings_GenericPage_C_Apply_Settings");
static_assert(offsetof(WBP_Settings_GenericPage_C_Apply_Settings, CallFunc_GetCustomGI_ReturnValue) == 0x000000, "Member 'WBP_Settings_GenericPage_C_Apply_Settings::CallFunc_GetCustomGI_ReturnValue' has a wrong offset!");

// Function WBP_Settings_GenericPage.WBP_Settings_GenericPage_C.OnOptionEntryFocused
// 0x0018 (0x0018 - 0x0000)
struct WBP_Settings_GenericPage_C_OnOptionEntryFocused final
{
public:
	class UWBP_Settings_OptionEntry_C*            Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetOptionDescription_DescriptionText;     // 0x0008(0x0010)()
};
static_assert(alignof(WBP_Settings_GenericPage_C_OnOptionEntryFocused) == 0x000008, "Wrong alignment on WBP_Settings_GenericPage_C_OnOptionEntryFocused");
static_assert(sizeof(WBP_Settings_GenericPage_C_OnOptionEntryFocused) == 0x000018, "Wrong size on WBP_Settings_GenericPage_C_OnOptionEntryFocused");
static_assert(offsetof(WBP_Settings_GenericPage_C_OnOptionEntryFocused, Widget) == 0x000000, "Member 'WBP_Settings_GenericPage_C_OnOptionEntryFocused::Widget' has a wrong offset!");
static_assert(offsetof(WBP_Settings_GenericPage_C_OnOptionEntryFocused, CallFunc_GetOptionDescription_DescriptionText) == 0x000008, "Member 'WBP_Settings_GenericPage_C_OnOptionEntryFocused::CallFunc_GetOptionDescription_DescriptionText' has a wrong offset!");

// Function WBP_Settings_GenericPage.WBP_Settings_GenericPage_C.SetSettingInformation
// 0x0020 (0x0020 - 0x0000)
struct WBP_Settings_GenericPage_C_SetSettingInformation final
{
public:
	class FText                                   Name_0;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   Description;                                       // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_Settings_GenericPage_C_SetSettingInformation) == 0x000008, "Wrong alignment on WBP_Settings_GenericPage_C_SetSettingInformation");
static_assert(sizeof(WBP_Settings_GenericPage_C_SetSettingInformation) == 0x000020, "Wrong size on WBP_Settings_GenericPage_C_SetSettingInformation");
static_assert(offsetof(WBP_Settings_GenericPage_C_SetSettingInformation, Name_0) == 0x000000, "Member 'WBP_Settings_GenericPage_C_SetSettingInformation::Name_0' has a wrong offset!");
static_assert(offsetof(WBP_Settings_GenericPage_C_SetSettingInformation, Description) == 0x000010, "Member 'WBP_Settings_GenericPage_C_SetSettingInformation::Description' has a wrong offset!");

// Function WBP_Settings_GenericPage.WBP_Settings_GenericPage_C.BndEvt__WBP_Settings_GenericPage_WBP_CommonBoundActionButton_ApplySettings_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_Settings_GenericPage_C_BndEvt__WBP_Settings_GenericPage_WBP_CommonBoundActionButton_ApplySettings_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature final
{
public:
	class UCommonButtonBase*                      Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Settings_GenericPage_C_BndEvt__WBP_Settings_GenericPage_WBP_CommonBoundActionButton_ApplySettings_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong alignment on WBP_Settings_GenericPage_C_BndEvt__WBP_Settings_GenericPage_WBP_CommonBoundActionButton_ApplySettings_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");
static_assert(sizeof(WBP_Settings_GenericPage_C_BndEvt__WBP_Settings_GenericPage_WBP_CommonBoundActionButton_ApplySettings_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong size on WBP_Settings_GenericPage_C_BndEvt__WBP_Settings_GenericPage_WBP_CommonBoundActionButton_ApplySettings_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");
static_assert(offsetof(WBP_Settings_GenericPage_C_BndEvt__WBP_Settings_GenericPage_WBP_CommonBoundActionButton_ApplySettings_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature, Button) == 0x000000, "Member 'WBP_Settings_GenericPage_C_BndEvt__WBP_Settings_GenericPage_WBP_CommonBoundActionButton_ApplySettings_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature::Button' has a wrong offset!");

// Function WBP_Settings_GenericPage.WBP_Settings_GenericPage_C.BndEvt__WBP_Settings_GenericPage_WBP_CommonBoundActionButton_Back_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_Settings_GenericPage_C_BndEvt__WBP_Settings_GenericPage_WBP_CommonBoundActionButton_Back_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature final
{
public:
	class UCommonButtonBase*                      Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Settings_GenericPage_C_BndEvt__WBP_Settings_GenericPage_WBP_CommonBoundActionButton_Back_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong alignment on WBP_Settings_GenericPage_C_BndEvt__WBP_Settings_GenericPage_WBP_CommonBoundActionButton_Back_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature");
static_assert(sizeof(WBP_Settings_GenericPage_C_BndEvt__WBP_Settings_GenericPage_WBP_CommonBoundActionButton_Back_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong size on WBP_Settings_GenericPage_C_BndEvt__WBP_Settings_GenericPage_WBP_CommonBoundActionButton_Back_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature");
static_assert(offsetof(WBP_Settings_GenericPage_C_BndEvt__WBP_Settings_GenericPage_WBP_CommonBoundActionButton_Back_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature, Button) == 0x000000, "Member 'WBP_Settings_GenericPage_C_BndEvt__WBP_Settings_GenericPage_WBP_CommonBoundActionButton_Back_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature::Button' has a wrong offset!");

// Function WBP_Settings_GenericPage.WBP_Settings_GenericPage_C.BndEvt__WBP_Settings_GenericPage_WBP_CommonBoundActionButton_Revert_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_Settings_GenericPage_C_BndEvt__WBP_Settings_GenericPage_WBP_CommonBoundActionButton_Revert_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature final
{
public:
	class UCommonButtonBase*                      Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Settings_GenericPage_C_BndEvt__WBP_Settings_GenericPage_WBP_CommonBoundActionButton_Revert_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong alignment on WBP_Settings_GenericPage_C_BndEvt__WBP_Settings_GenericPage_WBP_CommonBoundActionButton_Revert_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature");
static_assert(sizeof(WBP_Settings_GenericPage_C_BndEvt__WBP_Settings_GenericPage_WBP_CommonBoundActionButton_Revert_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong size on WBP_Settings_GenericPage_C_BndEvt__WBP_Settings_GenericPage_WBP_CommonBoundActionButton_Revert_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature");
static_assert(offsetof(WBP_Settings_GenericPage_C_BndEvt__WBP_Settings_GenericPage_WBP_CommonBoundActionButton_Revert_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature, Button) == 0x000000, "Member 'WBP_Settings_GenericPage_C_BndEvt__WBP_Settings_GenericPage_WBP_CommonBoundActionButton_Revert_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature::Button' has a wrong offset!");

// Function WBP_Settings_GenericPage.WBP_Settings_GenericPage_C.BndEvt__WBP_Settings_GenericPage_WBP_CommonBoundActionButton_SetToDefaults_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_Settings_GenericPage_C_BndEvt__WBP_Settings_GenericPage_WBP_CommonBoundActionButton_SetToDefaults_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature final
{
public:
	class UCommonButtonBase*                      Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Settings_GenericPage_C_BndEvt__WBP_Settings_GenericPage_WBP_CommonBoundActionButton_SetToDefaults_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong alignment on WBP_Settings_GenericPage_C_BndEvt__WBP_Settings_GenericPage_WBP_CommonBoundActionButton_SetToDefaults_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature");
static_assert(sizeof(WBP_Settings_GenericPage_C_BndEvt__WBP_Settings_GenericPage_WBP_CommonBoundActionButton_SetToDefaults_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong size on WBP_Settings_GenericPage_C_BndEvt__WBP_Settings_GenericPage_WBP_CommonBoundActionButton_SetToDefaults_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature");
static_assert(offsetof(WBP_Settings_GenericPage_C_BndEvt__WBP_Settings_GenericPage_WBP_CommonBoundActionButton_SetToDefaults_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature, Button) == 0x000000, "Member 'WBP_Settings_GenericPage_C_BndEvt__WBP_Settings_GenericPage_WBP_CommonBoundActionButton_SetToDefaults_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature::Button' has a wrong offset!");

// Function WBP_Settings_GenericPage.WBP_Settings_GenericPage_C.OnApplySettingsResponse
// 0x0001 (0x0001 - 0x0000)
struct WBP_Settings_GenericPage_C_OnApplySettingsResponse final
{
public:
	EModalUIResponse                              InUserResponse;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Settings_GenericPage_C_OnApplySettingsResponse) == 0x000001, "Wrong alignment on WBP_Settings_GenericPage_C_OnApplySettingsResponse");
static_assert(sizeof(WBP_Settings_GenericPage_C_OnApplySettingsResponse) == 0x000001, "Wrong size on WBP_Settings_GenericPage_C_OnApplySettingsResponse");
static_assert(offsetof(WBP_Settings_GenericPage_C_OnApplySettingsResponse, InUserResponse) == 0x000000, "Member 'WBP_Settings_GenericPage_C_OnApplySettingsResponse::InUserResponse' has a wrong offset!");

// Function WBP_Settings_GenericPage.WBP_Settings_GenericPage_C.OnRevertSettingsResponse
// 0x0001 (0x0001 - 0x0000)
struct WBP_Settings_GenericPage_C_OnRevertSettingsResponse final
{
public:
	EModalUIResponse                              InUserResponse;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Settings_GenericPage_C_OnRevertSettingsResponse) == 0x000001, "Wrong alignment on WBP_Settings_GenericPage_C_OnRevertSettingsResponse");
static_assert(sizeof(WBP_Settings_GenericPage_C_OnRevertSettingsResponse) == 0x000001, "Wrong size on WBP_Settings_GenericPage_C_OnRevertSettingsResponse");
static_assert(offsetof(WBP_Settings_GenericPage_C_OnRevertSettingsResponse, InUserResponse) == 0x000000, "Member 'WBP_Settings_GenericPage_C_OnRevertSettingsResponse::InUserResponse' has a wrong offset!");

// Function WBP_Settings_GenericPage.WBP_Settings_GenericPage_C.OnResetSettingsResponse
// 0x0001 (0x0001 - 0x0000)
struct WBP_Settings_GenericPage_C_OnResetSettingsResponse final
{
public:
	EModalUIResponse                              InUserResponse;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Settings_GenericPage_C_OnResetSettingsResponse) == 0x000001, "Wrong alignment on WBP_Settings_GenericPage_C_OnResetSettingsResponse");
static_assert(sizeof(WBP_Settings_GenericPage_C_OnResetSettingsResponse) == 0x000001, "Wrong size on WBP_Settings_GenericPage_C_OnResetSettingsResponse");
static_assert(offsetof(WBP_Settings_GenericPage_C_OnResetSettingsResponse, InUserResponse) == 0x000000, "Member 'WBP_Settings_GenericPage_C_OnResetSettingsResponse::InUserResponse' has a wrong offset!");

// Function WBP_Settings_GenericPage.WBP_Settings_GenericPage_C.OnUnsavedResponse
// 0x0001 (0x0001 - 0x0000)
struct WBP_Settings_GenericPage_C_OnUnsavedResponse final
{
public:
	EModalUIResponse                              InUserResponse;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Settings_GenericPage_C_OnUnsavedResponse) == 0x000001, "Wrong alignment on WBP_Settings_GenericPage_C_OnUnsavedResponse");
static_assert(sizeof(WBP_Settings_GenericPage_C_OnUnsavedResponse) == 0x000001, "Wrong size on WBP_Settings_GenericPage_C_OnUnsavedResponse");
static_assert(offsetof(WBP_Settings_GenericPage_C_OnUnsavedResponse, InUserResponse) == 0x000000, "Member 'WBP_Settings_GenericPage_C_OnUnsavedResponse::InUserResponse' has a wrong offset!");

// Function WBP_Settings_GenericPage.WBP_Settings_GenericPage_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_Settings_GenericPage_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Settings_GenericPage_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_Settings_GenericPage_C_PreConstruct");
static_assert(sizeof(WBP_Settings_GenericPage_C_PreConstruct) == 0x000001, "Wrong size on WBP_Settings_GenericPage_C_PreConstruct");
static_assert(offsetof(WBP_Settings_GenericPage_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_Settings_GenericPage_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_Settings_GenericPage.WBP_Settings_GenericPage_C.ExecuteUbergraph_WBP_Settings_GenericPage
// 0x0100 (0x0100 - 0x0000)
struct WBP_Settings_GenericPage_C_ExecuteUbergraph_WBP_Settings_GenericPage final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_AreSettingValidBeforeApply_IsValid;       // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EModalUIResponse InUserResponse)> K2Node_CreateDelegate_OutputDelegate;           // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UConfigurableGameUserSettings*          CallFunc_GetConfigurableGameUserSettings_GameUserSettings; // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EModalUIResponse InUserResponse)> K2Node_CreateDelegate_OutputDelegate_1;         // 0x0020(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UWBP_Settings_OptionEntry_C* Widget)> K2Node_CreateDelegate_OutputDelegate_2; // 0x0030(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetContent_ReturnValue;                   // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_Settings_OptionsList_Abstract_C*   K2Node_DynamicCast_AsWBP_Settings_Options_List_Abstract; // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x3];                                       // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EModalUIResponse InUserResponse)> K2Node_CreateDelegate_OutputDelegate_3;         // 0x0054(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UWBP_Settings_OptionEntry_C* Widget)> K2Node_CreateDelegate_OutputDelegate_4; // 0x0064(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_74[0x4];                                       // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetContent_ReturnValue_1;                 // 0x0078(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_Settings_OptionsList_Abstract_C*   K2Node_DynamicCast_AsWBP_Settings_Options_List_Abstract_1; // 0x0080(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89[0x3];                                       // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EModalUIResponse InUserResponse)> K2Node_CreateDelegate_OutputDelegate_5;         // 0x008C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9C[0x4];                                       // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButtonBase*                      K2Node_ComponentBoundEvent_Button_3;               // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                      K2Node_ComponentBoundEvent_Button_2;               // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                      K2Node_ComponentBoundEvent_Button_1;               // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                      K2Node_ComponentBoundEvent_Button;                 // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_ModalPopup_C*                      CallFunc_CreateModalWindow_OutputPin;              // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	EModalUIResponse                              K2Node_CustomEvent_InUserResponse_3;               // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C9[0x7];                                       // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_ModalPopup_C*                      CallFunc_CreateModalWindow_OutputPin_1;            // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EModalUIResponse                              K2Node_CustomEvent_InUserResponse_2;               // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DA[0x6];                                       // 0x00DA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_ModalPopup_C*                      CallFunc_CreateModalWindow_OutputPin_2;            // 0x00E0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EModalUIResponse                              K2Node_CustomEvent_InUserResponse_1;               // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_EA[0x6];                                       // 0x00EA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_ModalPopup_C*                      CallFunc_CreateModalWindow_OutputPin_3;            // 0x00F0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_2;                    // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EModalUIResponse                              K2Node_CustomEvent_InUserResponse;                 // 0x00F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_3;                    // 0x00FA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x00FB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_AreSettingsDirty_IsDirty;                 // 0x00FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_AreSettingValidBeforeApply_IsValid_1;     // 0x00FD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Settings_GenericPage_C_ExecuteUbergraph_WBP_Settings_GenericPage) == 0x000008, "Wrong alignment on WBP_Settings_GenericPage_C_ExecuteUbergraph_WBP_Settings_GenericPage");
static_assert(sizeof(WBP_Settings_GenericPage_C_ExecuteUbergraph_WBP_Settings_GenericPage) == 0x000100, "Wrong size on WBP_Settings_GenericPage_C_ExecuteUbergraph_WBP_Settings_GenericPage");
static_assert(offsetof(WBP_Settings_GenericPage_C_ExecuteUbergraph_WBP_Settings_GenericPage, EntryPoint) == 0x000000, "Member 'WBP_Settings_GenericPage_C_ExecuteUbergraph_WBP_Settings_GenericPage::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Settings_GenericPage_C_ExecuteUbergraph_WBP_Settings_GenericPage, CallFunc_AreSettingValidBeforeApply_IsValid) == 0x000004, "Member 'WBP_Settings_GenericPage_C_ExecuteUbergraph_WBP_Settings_GenericPage::CallFunc_AreSettingValidBeforeApply_IsValid' has a wrong offset!");
static_assert(offsetof(WBP_Settings_GenericPage_C_ExecuteUbergraph_WBP_Settings_GenericPage, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'WBP_Settings_GenericPage_C_ExecuteUbergraph_WBP_Settings_GenericPage::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_Settings_GenericPage_C_ExecuteUbergraph_WBP_Settings_GenericPage, CallFunc_GetConfigurableGameUserSettings_GameUserSettings) == 0x000018, "Member 'WBP_Settings_GenericPage_C_ExecuteUbergraph_WBP_Settings_GenericPage::CallFunc_GetConfigurableGameUserSettings_GameUserSettings' has a wrong offset!");
static_assert(offsetof(WBP_Settings_GenericPage_C_ExecuteUbergraph_WBP_Settings_GenericPage, K2Node_CreateDelegate_OutputDelegate_1) == 0x000020, "Member 'WBP_Settings_GenericPage_C_ExecuteUbergraph_WBP_Settings_GenericPage::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_Settings_GenericPage_C_ExecuteUbergraph_WBP_Settings_GenericPage, K2Node_CreateDelegate_OutputDelegate_2) == 0x000030, "Member 'WBP_Settings_GenericPage_C_ExecuteUbergraph_WBP_Settings_GenericPage::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_Settings_GenericPage_C_ExecuteUbergraph_WBP_Settings_GenericPage, CallFunc_GetContent_ReturnValue) == 0x000040, "Member 'WBP_Settings_GenericPage_C_ExecuteUbergraph_WBP_Settings_GenericPage::CallFunc_GetContent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Settings_GenericPage_C_ExecuteUbergraph_WBP_Settings_GenericPage, K2Node_DynamicCast_AsWBP_Settings_Options_List_Abstract) == 0x000048, "Member 'WBP_Settings_GenericPage_C_ExecuteUbergraph_WBP_Settings_GenericPage::K2Node_DynamicCast_AsWBP_Settings_Options_List_Abstract' has a wrong offset!");
static_assert(offsetof(WBP_Settings_GenericPage_C_ExecuteUbergraph_WBP_Settings_GenericPage, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'WBP_Settings_GenericPage_C_ExecuteUbergraph_WBP_Settings_GenericPage::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Settings_GenericPage_C_ExecuteUbergraph_WBP_Settings_GenericPage, K2Node_CreateDelegate_OutputDelegate_3) == 0x000054, "Member 'WBP_Settings_GenericPage_C_ExecuteUbergraph_WBP_Settings_GenericPage::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(WBP_Settings_GenericPage_C_ExecuteUbergraph_WBP_Settings_GenericPage, K2Node_CreateDelegate_OutputDelegate_4) == 0x000064, "Member 'WBP_Settings_GenericPage_C_ExecuteUbergraph_WBP_Settings_GenericPage::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(WBP_Settings_GenericPage_C_ExecuteUbergraph_WBP_Settings_GenericPage, CallFunc_GetContent_ReturnValue_1) == 0x000078, "Member 'WBP_Settings_GenericPage_C_ExecuteUbergraph_WBP_Settings_GenericPage::CallFunc_GetContent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Settings_GenericPage_C_ExecuteUbergraph_WBP_Settings_GenericPage, K2Node_DynamicCast_AsWBP_Settings_Options_List_Abstract_1) == 0x000080, "Member 'WBP_Settings_GenericPage_C_ExecuteUbergraph_WBP_Settings_GenericPage::K2Node_DynamicCast_AsWBP_Settings_Options_List_Abstract_1' has a wrong offset!");
static_assert(offsetof(WBP_Settings_GenericPage_C_ExecuteUbergraph_WBP_Settings_GenericPage, K2Node_DynamicCast_bSuccess_1) == 0x000088, "Member 'WBP_Settings_GenericPage_C_ExecuteUbergraph_WBP_Settings_GenericPage::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_Settings_GenericPage_C_ExecuteUbergraph_WBP_Settings_GenericPage, K2Node_CreateDelegate_OutputDelegate_5) == 0x00008C, "Member 'WBP_Settings_GenericPage_C_ExecuteUbergraph_WBP_Settings_GenericPage::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(WBP_Settings_GenericPage_C_ExecuteUbergraph_WBP_Settings_GenericPage, K2Node_ComponentBoundEvent_Button_3) == 0x0000A0, "Member 'WBP_Settings_GenericPage_C_ExecuteUbergraph_WBP_Settings_GenericPage::K2Node_ComponentBoundEvent_Button_3' has a wrong offset!");
static_assert(offsetof(WBP_Settings_GenericPage_C_ExecuteUbergraph_WBP_Settings_GenericPage, K2Node_ComponentBoundEvent_Button_2) == 0x0000A8, "Member 'WBP_Settings_GenericPage_C_ExecuteUbergraph_WBP_Settings_GenericPage::K2Node_ComponentBoundEvent_Button_2' has a wrong offset!");
static_assert(offsetof(WBP_Settings_GenericPage_C_ExecuteUbergraph_WBP_Settings_GenericPage, K2Node_ComponentBoundEvent_Button_1) == 0x0000B0, "Member 'WBP_Settings_GenericPage_C_ExecuteUbergraph_WBP_Settings_GenericPage::K2Node_ComponentBoundEvent_Button_1' has a wrong offset!");
static_assert(offsetof(WBP_Settings_GenericPage_C_ExecuteUbergraph_WBP_Settings_GenericPage, K2Node_ComponentBoundEvent_Button) == 0x0000B8, "Member 'WBP_Settings_GenericPage_C_ExecuteUbergraph_WBP_Settings_GenericPage::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(WBP_Settings_GenericPage_C_ExecuteUbergraph_WBP_Settings_GenericPage, CallFunc_CreateModalWindow_OutputPin) == 0x0000C0, "Member 'WBP_Settings_GenericPage_C_ExecuteUbergraph_WBP_Settings_GenericPage::CallFunc_CreateModalWindow_OutputPin' has a wrong offset!");
static_assert(offsetof(WBP_Settings_GenericPage_C_ExecuteUbergraph_WBP_Settings_GenericPage, K2Node_CustomEvent_InUserResponse_3) == 0x0000C8, "Member 'WBP_Settings_GenericPage_C_ExecuteUbergraph_WBP_Settings_GenericPage::K2Node_CustomEvent_InUserResponse_3' has a wrong offset!");
static_assert(offsetof(WBP_Settings_GenericPage_C_ExecuteUbergraph_WBP_Settings_GenericPage, CallFunc_CreateModalWindow_OutputPin_1) == 0x0000D0, "Member 'WBP_Settings_GenericPage_C_ExecuteUbergraph_WBP_Settings_GenericPage::CallFunc_CreateModalWindow_OutputPin_1' has a wrong offset!");
static_assert(offsetof(WBP_Settings_GenericPage_C_ExecuteUbergraph_WBP_Settings_GenericPage, K2Node_SwitchEnum_CmpSuccess) == 0x0000D8, "Member 'WBP_Settings_GenericPage_C_ExecuteUbergraph_WBP_Settings_GenericPage::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Settings_GenericPage_C_ExecuteUbergraph_WBP_Settings_GenericPage, K2Node_CustomEvent_InUserResponse_2) == 0x0000D9, "Member 'WBP_Settings_GenericPage_C_ExecuteUbergraph_WBP_Settings_GenericPage::K2Node_CustomEvent_InUserResponse_2' has a wrong offset!");
static_assert(offsetof(WBP_Settings_GenericPage_C_ExecuteUbergraph_WBP_Settings_GenericPage, CallFunc_CreateModalWindow_OutputPin_2) == 0x0000E0, "Member 'WBP_Settings_GenericPage_C_ExecuteUbergraph_WBP_Settings_GenericPage::CallFunc_CreateModalWindow_OutputPin_2' has a wrong offset!");
static_assert(offsetof(WBP_Settings_GenericPage_C_ExecuteUbergraph_WBP_Settings_GenericPage, K2Node_SwitchEnum_CmpSuccess_1) == 0x0000E8, "Member 'WBP_Settings_GenericPage_C_ExecuteUbergraph_WBP_Settings_GenericPage::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_Settings_GenericPage_C_ExecuteUbergraph_WBP_Settings_GenericPage, K2Node_CustomEvent_InUserResponse_1) == 0x0000E9, "Member 'WBP_Settings_GenericPage_C_ExecuteUbergraph_WBP_Settings_GenericPage::K2Node_CustomEvent_InUserResponse_1' has a wrong offset!");
static_assert(offsetof(WBP_Settings_GenericPage_C_ExecuteUbergraph_WBP_Settings_GenericPage, CallFunc_CreateModalWindow_OutputPin_3) == 0x0000F0, "Member 'WBP_Settings_GenericPage_C_ExecuteUbergraph_WBP_Settings_GenericPage::CallFunc_CreateModalWindow_OutputPin_3' has a wrong offset!");
static_assert(offsetof(WBP_Settings_GenericPage_C_ExecuteUbergraph_WBP_Settings_GenericPage, K2Node_SwitchEnum_CmpSuccess_2) == 0x0000F8, "Member 'WBP_Settings_GenericPage_C_ExecuteUbergraph_WBP_Settings_GenericPage::K2Node_SwitchEnum_CmpSuccess_2' has a wrong offset!");
static_assert(offsetof(WBP_Settings_GenericPage_C_ExecuteUbergraph_WBP_Settings_GenericPage, K2Node_CustomEvent_InUserResponse) == 0x0000F9, "Member 'WBP_Settings_GenericPage_C_ExecuteUbergraph_WBP_Settings_GenericPage::K2Node_CustomEvent_InUserResponse' has a wrong offset!");
static_assert(offsetof(WBP_Settings_GenericPage_C_ExecuteUbergraph_WBP_Settings_GenericPage, K2Node_SwitchEnum_CmpSuccess_3) == 0x0000FA, "Member 'WBP_Settings_GenericPage_C_ExecuteUbergraph_WBP_Settings_GenericPage::K2Node_SwitchEnum_CmpSuccess_3' has a wrong offset!");
static_assert(offsetof(WBP_Settings_GenericPage_C_ExecuteUbergraph_WBP_Settings_GenericPage, K2Node_Event_IsDesignTime) == 0x0000FB, "Member 'WBP_Settings_GenericPage_C_ExecuteUbergraph_WBP_Settings_GenericPage::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_Settings_GenericPage_C_ExecuteUbergraph_WBP_Settings_GenericPage, CallFunc_AreSettingsDirty_IsDirty) == 0x0000FC, "Member 'WBP_Settings_GenericPage_C_ExecuteUbergraph_WBP_Settings_GenericPage::CallFunc_AreSettingsDirty_IsDirty' has a wrong offset!");
static_assert(offsetof(WBP_Settings_GenericPage_C_ExecuteUbergraph_WBP_Settings_GenericPage, CallFunc_AreSettingValidBeforeApply_IsValid_1) == 0x0000FD, "Member 'WBP_Settings_GenericPage_C_ExecuteUbergraph_WBP_Settings_GenericPage::CallFunc_AreSettingValidBeforeApply_IsValid_1' has a wrong offset!");

}

