﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Settings_MappingOptionEntry

#include "Basic.hpp"

#include "EnhancedInput_structs.hpp"
#include "Slate_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WBP_Settings_MappingOptionEntry.WBP_Settings_MappingOptionEntry_C.BndEvt__WBP_Settings_MappingOptionEntry_InputKeySelector_Slot1_K2Node_ComponentBoundEvent_1_OnKeySelected__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct WBP_Settings_MappingOptionEntry_C_BndEvt__WBP_Settings_MappingOptionEntry_InputKeySelector_Slot1_K2Node_ComponentBoundEvent_1_OnKeySelected__DelegateSignature final
{
public:
	struct FInputChord                            SelectedKey;                                       // 0x0000(0x0020)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Settings_MappingOptionEntry_C_BndEvt__WBP_Settings_MappingOptionEntry_InputKeySelector_Slot1_K2Node_ComponentBoundEvent_1_OnKeySelected__DelegateSignature) == 0x000008, "Wrong alignment on WBP_Settings_MappingOptionEntry_C_BndEvt__WBP_Settings_MappingOptionEntry_InputKeySelector_Slot1_K2Node_ComponentBoundEvent_1_OnKeySelected__DelegateSignature");
static_assert(sizeof(WBP_Settings_MappingOptionEntry_C_BndEvt__WBP_Settings_MappingOptionEntry_InputKeySelector_Slot1_K2Node_ComponentBoundEvent_1_OnKeySelected__DelegateSignature) == 0x000020, "Wrong size on WBP_Settings_MappingOptionEntry_C_BndEvt__WBP_Settings_MappingOptionEntry_InputKeySelector_Slot1_K2Node_ComponentBoundEvent_1_OnKeySelected__DelegateSignature");
static_assert(offsetof(WBP_Settings_MappingOptionEntry_C_BndEvt__WBP_Settings_MappingOptionEntry_InputKeySelector_Slot1_K2Node_ComponentBoundEvent_1_OnKeySelected__DelegateSignature, SelectedKey) == 0x000000, "Member 'WBP_Settings_MappingOptionEntry_C_BndEvt__WBP_Settings_MappingOptionEntry_InputKeySelector_Slot1_K2Node_ComponentBoundEvent_1_OnKeySelected__DelegateSignature::SelectedKey' has a wrong offset!");

// Function WBP_Settings_MappingOptionEntry.WBP_Settings_MappingOptionEntry_C.ExecuteUbergraph_WBP_Settings_MappingOptionEntry
// 0x01B8 (0x01B8 - 0x0000)
struct WBP_Settings_MappingOptionEntry_C_ExecuteUbergraph_WBP_Settings_MappingOptionEntry final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFocusEvent                            K2Node_Event_InFocusEvent_1;                       // 0x0008(0x0008)(NoDestructor)
	struct FFocusEvent                            K2Node_Event_InFocusEvent;                         // 0x0010(0x0008)(NoDestructor)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0018(0x0038)(IsPlainOldData, NoDestructor)
	struct FPointerEvent                          K2Node_Event_MouseEvent_1;                         // 0x0050(0x0078)(ConstParm)
	struct FPointerEvent                          K2Node_Event_MouseEvent;                           // 0x00C8(0x0078)(ConstParm)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_141[0x7];                                      // 0x0141(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInputChord                            K2Node_ComponentBoundEvent_SelectedKey;            // 0x0148(0x0020)(HasGetValueTypeHash)
	struct FMapPlayerKeyArgs                      K2Node_MakeStruct_MapPlayerKeyArgs;                // 0x0168(0x0040)()
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x01A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x01B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Settings_MappingOptionEntry_C_ExecuteUbergraph_WBP_Settings_MappingOptionEntry) == 0x000008, "Wrong alignment on WBP_Settings_MappingOptionEntry_C_ExecuteUbergraph_WBP_Settings_MappingOptionEntry");
static_assert(sizeof(WBP_Settings_MappingOptionEntry_C_ExecuteUbergraph_WBP_Settings_MappingOptionEntry) == 0x0001B8, "Wrong size on WBP_Settings_MappingOptionEntry_C_ExecuteUbergraph_WBP_Settings_MappingOptionEntry");
static_assert(offsetof(WBP_Settings_MappingOptionEntry_C_ExecuteUbergraph_WBP_Settings_MappingOptionEntry, EntryPoint) == 0x000000, "Member 'WBP_Settings_MappingOptionEntry_C_ExecuteUbergraph_WBP_Settings_MappingOptionEntry::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Settings_MappingOptionEntry_C_ExecuteUbergraph_WBP_Settings_MappingOptionEntry, Temp_bool_Variable) == 0x000004, "Member 'WBP_Settings_MappingOptionEntry_C_ExecuteUbergraph_WBP_Settings_MappingOptionEntry::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Settings_MappingOptionEntry_C_ExecuteUbergraph_WBP_Settings_MappingOptionEntry, CallFunc_Not_PreBool_ReturnValue) == 0x000005, "Member 'WBP_Settings_MappingOptionEntry_C_ExecuteUbergraph_WBP_Settings_MappingOptionEntry::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Settings_MappingOptionEntry_C_ExecuteUbergraph_WBP_Settings_MappingOptionEntry, K2Node_Event_InFocusEvent_1) == 0x000008, "Member 'WBP_Settings_MappingOptionEntry_C_ExecuteUbergraph_WBP_Settings_MappingOptionEntry::K2Node_Event_InFocusEvent_1' has a wrong offset!");
static_assert(offsetof(WBP_Settings_MappingOptionEntry_C_ExecuteUbergraph_WBP_Settings_MappingOptionEntry, K2Node_Event_InFocusEvent) == 0x000010, "Member 'WBP_Settings_MappingOptionEntry_C_ExecuteUbergraph_WBP_Settings_MappingOptionEntry::K2Node_Event_InFocusEvent' has a wrong offset!");
static_assert(offsetof(WBP_Settings_MappingOptionEntry_C_ExecuteUbergraph_WBP_Settings_MappingOptionEntry, K2Node_Event_MyGeometry) == 0x000018, "Member 'WBP_Settings_MappingOptionEntry_C_ExecuteUbergraph_WBP_Settings_MappingOptionEntry::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_Settings_MappingOptionEntry_C_ExecuteUbergraph_WBP_Settings_MappingOptionEntry, K2Node_Event_MouseEvent_1) == 0x000050, "Member 'WBP_Settings_MappingOptionEntry_C_ExecuteUbergraph_WBP_Settings_MappingOptionEntry::K2Node_Event_MouseEvent_1' has a wrong offset!");
static_assert(offsetof(WBP_Settings_MappingOptionEntry_C_ExecuteUbergraph_WBP_Settings_MappingOptionEntry, K2Node_Event_MouseEvent) == 0x0000C8, "Member 'WBP_Settings_MappingOptionEntry_C_ExecuteUbergraph_WBP_Settings_MappingOptionEntry::K2Node_Event_MouseEvent' has a wrong offset!");
static_assert(offsetof(WBP_Settings_MappingOptionEntry_C_ExecuteUbergraph_WBP_Settings_MappingOptionEntry, K2Node_Event_IsDesignTime) == 0x000140, "Member 'WBP_Settings_MappingOptionEntry_C_ExecuteUbergraph_WBP_Settings_MappingOptionEntry::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_Settings_MappingOptionEntry_C_ExecuteUbergraph_WBP_Settings_MappingOptionEntry, K2Node_ComponentBoundEvent_SelectedKey) == 0x000148, "Member 'WBP_Settings_MappingOptionEntry_C_ExecuteUbergraph_WBP_Settings_MappingOptionEntry::K2Node_ComponentBoundEvent_SelectedKey' has a wrong offset!");
static_assert(offsetof(WBP_Settings_MappingOptionEntry_C_ExecuteUbergraph_WBP_Settings_MappingOptionEntry, K2Node_MakeStruct_MapPlayerKeyArgs) == 0x000168, "Member 'WBP_Settings_MappingOptionEntry_C_ExecuteUbergraph_WBP_Settings_MappingOptionEntry::K2Node_MakeStruct_MapPlayerKeyArgs' has a wrong offset!");
static_assert(offsetof(WBP_Settings_MappingOptionEntry_C_ExecuteUbergraph_WBP_Settings_MappingOptionEntry, CallFunc_PlayAnimationReverse_ReturnValue) == 0x0001A8, "Member 'WBP_Settings_MappingOptionEntry_C_ExecuteUbergraph_WBP_Settings_MappingOptionEntry::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Settings_MappingOptionEntry_C_ExecuteUbergraph_WBP_Settings_MappingOptionEntry, CallFunc_PlayAnimationForward_ReturnValue) == 0x0001B0, "Member 'WBP_Settings_MappingOptionEntry_C_ExecuteUbergraph_WBP_Settings_MappingOptionEntry::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

// Function WBP_Settings_MappingOptionEntry.WBP_Settings_MappingOptionEntry_C.GetConflictCategories
// 0x0010 (0x0010 - 0x0000)
struct WBP_Settings_MappingOptionEntry_C_GetConflictCategories final
{
public:
	TArray<class FName>                           ConflictCategories_0;                              // 0x0000(0x0010)(Parm, OutParm)
};
static_assert(alignof(WBP_Settings_MappingOptionEntry_C_GetConflictCategories) == 0x000008, "Wrong alignment on WBP_Settings_MappingOptionEntry_C_GetConflictCategories");
static_assert(sizeof(WBP_Settings_MappingOptionEntry_C_GetConflictCategories) == 0x000010, "Wrong size on WBP_Settings_MappingOptionEntry_C_GetConflictCategories");
static_assert(offsetof(WBP_Settings_MappingOptionEntry_C_GetConflictCategories, ConflictCategories_0) == 0x000000, "Member 'WBP_Settings_MappingOptionEntry_C_GetConflictCategories::ConflictCategories_0' has a wrong offset!");

// Function WBP_Settings_MappingOptionEntry.WBP_Settings_MappingOptionEntry_C.GetKeyMapping
// 0x0050 (0x0050 - 0x0000)
struct WBP_Settings_MappingOptionEntry_C_GetKeyMapping final
{
public:
	struct FKeyMappingRow                         KeyMappings_0;                                     // 0x0000(0x0050)(Parm, OutParm)
};
static_assert(alignof(WBP_Settings_MappingOptionEntry_C_GetKeyMapping) == 0x000008, "Wrong alignment on WBP_Settings_MappingOptionEntry_C_GetKeyMapping");
static_assert(sizeof(WBP_Settings_MappingOptionEntry_C_GetKeyMapping) == 0x000050, "Wrong size on WBP_Settings_MappingOptionEntry_C_GetKeyMapping");
static_assert(offsetof(WBP_Settings_MappingOptionEntry_C_GetKeyMapping, KeyMappings_0) == 0x000000, "Member 'WBP_Settings_MappingOptionEntry_C_GetKeyMapping::KeyMappings_0' has a wrong offset!");

// Function WBP_Settings_MappingOptionEntry.WBP_Settings_MappingOptionEntry_C.GetMappingName
// 0x0008 (0x0008 - 0x0000)
struct WBP_Settings_MappingOptionEntry_C_GetMappingName final
{
public:
	class FName                                   MappingName_0;                                     // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Settings_MappingOptionEntry_C_GetMappingName) == 0x000004, "Wrong alignment on WBP_Settings_MappingOptionEntry_C_GetMappingName");
static_assert(sizeof(WBP_Settings_MappingOptionEntry_C_GetMappingName) == 0x000008, "Wrong size on WBP_Settings_MappingOptionEntry_C_GetMappingName");
static_assert(offsetof(WBP_Settings_MappingOptionEntry_C_GetMappingName, MappingName_0) == 0x000000, "Member 'WBP_Settings_MappingOptionEntry_C_GetMappingName::MappingName_0' has a wrong offset!");

// Function WBP_Settings_MappingOptionEntry.WBP_Settings_MappingOptionEntry_C.GetNewMapping
// 0x0040 (0x0040 - 0x0000)
struct WBP_Settings_MappingOptionEntry_C_GetNewMapping final
{
public:
	struct FMapPlayerKeyArgs                      NewMapping_0;                                      // 0x0000(0x0040)(Parm, OutParm)
};
static_assert(alignof(WBP_Settings_MappingOptionEntry_C_GetNewMapping) == 0x000008, "Wrong alignment on WBP_Settings_MappingOptionEntry_C_GetNewMapping");
static_assert(sizeof(WBP_Settings_MappingOptionEntry_C_GetNewMapping) == 0x000040, "Wrong size on WBP_Settings_MappingOptionEntry_C_GetNewMapping");
static_assert(offsetof(WBP_Settings_MappingOptionEntry_C_GetNewMapping, NewMapping_0) == 0x000000, "Member 'WBP_Settings_MappingOptionEntry_C_GetNewMapping::NewMapping_0' has a wrong offset!");

// Function WBP_Settings_MappingOptionEntry.WBP_Settings_MappingOptionEntry_C.IsAvailableOnCurrentPlatform
// 0x000C (0x000C - 0x0000)
struct WBP_Settings_MappingOptionEntry_C_IsAvailableOnCurrentPlatform final
{
public:
	struct FGameplayTag                           CurrentPlatformTag;                                // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	bool                                          IsAvailable;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasTag_ReturnValue;                       // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasTag_ReturnValue_1;                     // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Settings_MappingOptionEntry_C_IsAvailableOnCurrentPlatform) == 0x000004, "Wrong alignment on WBP_Settings_MappingOptionEntry_C_IsAvailableOnCurrentPlatform");
static_assert(sizeof(WBP_Settings_MappingOptionEntry_C_IsAvailableOnCurrentPlatform) == 0x00000C, "Wrong size on WBP_Settings_MappingOptionEntry_C_IsAvailableOnCurrentPlatform");
static_assert(offsetof(WBP_Settings_MappingOptionEntry_C_IsAvailableOnCurrentPlatform, CurrentPlatformTag) == 0x000000, "Member 'WBP_Settings_MappingOptionEntry_C_IsAvailableOnCurrentPlatform::CurrentPlatformTag' has a wrong offset!");
static_assert(offsetof(WBP_Settings_MappingOptionEntry_C_IsAvailableOnCurrentPlatform, IsAvailable) == 0x000008, "Member 'WBP_Settings_MappingOptionEntry_C_IsAvailableOnCurrentPlatform::IsAvailable' has a wrong offset!");
static_assert(offsetof(WBP_Settings_MappingOptionEntry_C_IsAvailableOnCurrentPlatform, CallFunc_HasTag_ReturnValue) == 0x000009, "Member 'WBP_Settings_MappingOptionEntry_C_IsAvailableOnCurrentPlatform::CallFunc_HasTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Settings_MappingOptionEntry_C_IsAvailableOnCurrentPlatform, CallFunc_HasTag_ReturnValue_1) == 0x00000A, "Member 'WBP_Settings_MappingOptionEntry_C_IsAvailableOnCurrentPlatform::CallFunc_HasTag_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Settings_MappingOptionEntry_C_IsAvailableOnCurrentPlatform, CallFunc_BooleanOR_ReturnValue) == 0x00000B, "Member 'WBP_Settings_MappingOptionEntry_C_IsAvailableOnCurrentPlatform::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function WBP_Settings_MappingOptionEntry.WBP_Settings_MappingOptionEntry_C.OnAddedToFocusPath
// 0x0008 (0x0008 - 0x0000)
struct WBP_Settings_MappingOptionEntry_C_OnAddedToFocusPath final
{
public:
	struct FFocusEvent                            InFocusEvent;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(WBP_Settings_MappingOptionEntry_C_OnAddedToFocusPath) == 0x000004, "Wrong alignment on WBP_Settings_MappingOptionEntry_C_OnAddedToFocusPath");
static_assert(sizeof(WBP_Settings_MappingOptionEntry_C_OnAddedToFocusPath) == 0x000008, "Wrong size on WBP_Settings_MappingOptionEntry_C_OnAddedToFocusPath");
static_assert(offsetof(WBP_Settings_MappingOptionEntry_C_OnAddedToFocusPath, InFocusEvent) == 0x000000, "Member 'WBP_Settings_MappingOptionEntry_C_OnAddedToFocusPath::InFocusEvent' has a wrong offset!");

// Function WBP_Settings_MappingOptionEntry.WBP_Settings_MappingOptionEntry_C.OnMouseEnter
// 0x00B0 (0x00B0 - 0x0000)
struct WBP_Settings_MappingOptionEntry_C_OnMouseEnter final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0078)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_Settings_MappingOptionEntry_C_OnMouseEnter) == 0x000008, "Wrong alignment on WBP_Settings_MappingOptionEntry_C_OnMouseEnter");
static_assert(sizeof(WBP_Settings_MappingOptionEntry_C_OnMouseEnter) == 0x0000B0, "Wrong size on WBP_Settings_MappingOptionEntry_C_OnMouseEnter");
static_assert(offsetof(WBP_Settings_MappingOptionEntry_C_OnMouseEnter, MyGeometry) == 0x000000, "Member 'WBP_Settings_MappingOptionEntry_C_OnMouseEnter::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_Settings_MappingOptionEntry_C_OnMouseEnter, MouseEvent) == 0x000038, "Member 'WBP_Settings_MappingOptionEntry_C_OnMouseEnter::MouseEvent' has a wrong offset!");

// Function WBP_Settings_MappingOptionEntry.WBP_Settings_MappingOptionEntry_C.OnMouseLeave
// 0x0078 (0x0078 - 0x0000)
struct WBP_Settings_MappingOptionEntry_C_OnMouseLeave final
{
public:
	struct FPointerEvent                          MouseEvent;                                        // 0x0000(0x0078)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_Settings_MappingOptionEntry_C_OnMouseLeave) == 0x000008, "Wrong alignment on WBP_Settings_MappingOptionEntry_C_OnMouseLeave");
static_assert(sizeof(WBP_Settings_MappingOptionEntry_C_OnMouseLeave) == 0x000078, "Wrong size on WBP_Settings_MappingOptionEntry_C_OnMouseLeave");
static_assert(offsetof(WBP_Settings_MappingOptionEntry_C_OnMouseLeave, MouseEvent) == 0x000000, "Member 'WBP_Settings_MappingOptionEntry_C_OnMouseLeave::MouseEvent' has a wrong offset!");

// Function WBP_Settings_MappingOptionEntry.WBP_Settings_MappingOptionEntry_C.OnRemovedFromFocusPath
// 0x0008 (0x0008 - 0x0000)
struct WBP_Settings_MappingOptionEntry_C_OnRemovedFromFocusPath final
{
public:
	struct FFocusEvent                            InFocusEvent;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(WBP_Settings_MappingOptionEntry_C_OnRemovedFromFocusPath) == 0x000004, "Wrong alignment on WBP_Settings_MappingOptionEntry_C_OnRemovedFromFocusPath");
static_assert(sizeof(WBP_Settings_MappingOptionEntry_C_OnRemovedFromFocusPath) == 0x000008, "Wrong size on WBP_Settings_MappingOptionEntry_C_OnRemovedFromFocusPath");
static_assert(offsetof(WBP_Settings_MappingOptionEntry_C_OnRemovedFromFocusPath, InFocusEvent) == 0x000000, "Member 'WBP_Settings_MappingOptionEntry_C_OnRemovedFromFocusPath::InFocusEvent' has a wrong offset!");

// Function WBP_Settings_MappingOptionEntry.WBP_Settings_MappingOptionEntry_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_Settings_MappingOptionEntry_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Settings_MappingOptionEntry_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_Settings_MappingOptionEntry_C_PreConstruct");
static_assert(sizeof(WBP_Settings_MappingOptionEntry_C_PreConstruct) == 0x000001, "Wrong size on WBP_Settings_MappingOptionEntry_C_PreConstruct");
static_assert(offsetof(WBP_Settings_MappingOptionEntry_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_Settings_MappingOptionEntry_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_Settings_MappingOptionEntry.WBP_Settings_MappingOptionEntry_C.ResetToCurrentMapping
// 0x0048 (0x0048 - 0x0000)
struct WBP_Settings_MappingOptionEntry_C_ResetToCurrentMapping final
{
public:
	class FName                                   CallFunc_MakeLiteralName_ReturnValue;              // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMapPlayerKeyArgs                      K2Node_MakeStruct_MapPlayerKeyArgs;                // 0x0008(0x0040)()
};
static_assert(alignof(WBP_Settings_MappingOptionEntry_C_ResetToCurrentMapping) == 0x000008, "Wrong alignment on WBP_Settings_MappingOptionEntry_C_ResetToCurrentMapping");
static_assert(sizeof(WBP_Settings_MappingOptionEntry_C_ResetToCurrentMapping) == 0x000048, "Wrong size on WBP_Settings_MappingOptionEntry_C_ResetToCurrentMapping");
static_assert(offsetof(WBP_Settings_MappingOptionEntry_C_ResetToCurrentMapping, CallFunc_MakeLiteralName_ReturnValue) == 0x000000, "Member 'WBP_Settings_MappingOptionEntry_C_ResetToCurrentMapping::CallFunc_MakeLiteralName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Settings_MappingOptionEntry_C_ResetToCurrentMapping, K2Node_MakeStruct_MapPlayerKeyArgs) == 0x000008, "Member 'WBP_Settings_MappingOptionEntry_C_ResetToCurrentMapping::K2Node_MakeStruct_MapPlayerKeyArgs' has a wrong offset!");

// Function WBP_Settings_MappingOptionEntry.WBP_Settings_MappingOptionEntry_C.SetKeyMapping
// 0x0170 (0x0170 - 0x0000)
struct WBP_Settings_MappingOptionEntry_C_SetKeyMapping final
{
public:
	struct FKeyMappingRow                         KeyMappings_0;                                     // 0x0000(0x0050)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue;              // 0x005C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMapPlayerKeyArgs                      K2Node_MakeStruct_MapPlayerKeyArgs;                // 0x0068(0x0040)()
	TArray<struct FPlayerKeyMapping>              CallFunc_Set_ToArray_Result;                       // 0x00A8(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BC[0x4];                                       // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPlayerKeyMapping                      CallFunc_Array_Get_Item;                           // 0x00C0(0x0080)(HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_141[0x7];                                      // 0x0141(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInputChord                            K2Node_MakeStruct_InputChord;                      // 0x0148(0x0020)(HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Settings_MappingOptionEntry_C_SetKeyMapping) == 0x000008, "Wrong alignment on WBP_Settings_MappingOptionEntry_C_SetKeyMapping");
static_assert(sizeof(WBP_Settings_MappingOptionEntry_C_SetKeyMapping) == 0x000170, "Wrong size on WBP_Settings_MappingOptionEntry_C_SetKeyMapping");
static_assert(offsetof(WBP_Settings_MappingOptionEntry_C_SetKeyMapping, KeyMappings_0) == 0x000000, "Member 'WBP_Settings_MappingOptionEntry_C_SetKeyMapping::KeyMappings_0' has a wrong offset!");
static_assert(offsetof(WBP_Settings_MappingOptionEntry_C_SetKeyMapping, Temp_int_Array_Index_Variable) == 0x000050, "Member 'WBP_Settings_MappingOptionEntry_C_SetKeyMapping::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Settings_MappingOptionEntry_C_SetKeyMapping, Temp_int_Loop_Counter_Variable) == 0x000054, "Member 'WBP_Settings_MappingOptionEntry_C_SetKeyMapping::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Settings_MappingOptionEntry_C_SetKeyMapping, CallFunc_Add_IntInt_ReturnValue) == 0x000058, "Member 'WBP_Settings_MappingOptionEntry_C_SetKeyMapping::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Settings_MappingOptionEntry_C_SetKeyMapping, CallFunc_MakeLiteralName_ReturnValue) == 0x00005C, "Member 'WBP_Settings_MappingOptionEntry_C_SetKeyMapping::CallFunc_MakeLiteralName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Settings_MappingOptionEntry_C_SetKeyMapping, K2Node_MakeStruct_MapPlayerKeyArgs) == 0x000068, "Member 'WBP_Settings_MappingOptionEntry_C_SetKeyMapping::K2Node_MakeStruct_MapPlayerKeyArgs' has a wrong offset!");
static_assert(offsetof(WBP_Settings_MappingOptionEntry_C_SetKeyMapping, CallFunc_Set_ToArray_Result) == 0x0000A8, "Member 'WBP_Settings_MappingOptionEntry_C_SetKeyMapping::CallFunc_Set_ToArray_Result' has a wrong offset!");
static_assert(offsetof(WBP_Settings_MappingOptionEntry_C_SetKeyMapping, CallFunc_Array_Length_ReturnValue) == 0x0000B8, "Member 'WBP_Settings_MappingOptionEntry_C_SetKeyMapping::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Settings_MappingOptionEntry_C_SetKeyMapping, CallFunc_Array_Get_Item) == 0x0000C0, "Member 'WBP_Settings_MappingOptionEntry_C_SetKeyMapping::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_Settings_MappingOptionEntry_C_SetKeyMapping, CallFunc_Less_IntInt_ReturnValue) == 0x000140, "Member 'WBP_Settings_MappingOptionEntry_C_SetKeyMapping::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Settings_MappingOptionEntry_C_SetKeyMapping, K2Node_MakeStruct_InputChord) == 0x000148, "Member 'WBP_Settings_MappingOptionEntry_C_SetKeyMapping::K2Node_MakeStruct_InputChord' has a wrong offset!");
static_assert(offsetof(WBP_Settings_MappingOptionEntry_C_SetKeyMapping, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000168, "Member 'WBP_Settings_MappingOptionEntry_C_SetKeyMapping::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function WBP_Settings_MappingOptionEntry.WBP_Settings_MappingOptionEntry_C.SetMappingsSlotToNone
// 0x0060 (0x0060 - 0x0000)
struct WBP_Settings_MappingOptionEntry_C_SetMappingsSlotToNone final
{
public:
	struct FInputChord                            K2Node_MakeStruct_InputChord;                      // 0x0000(0x0020)(HasGetValueTypeHash)
	struct FMapPlayerKeyArgs                      K2Node_MakeStruct_MapPlayerKeyArgs;                // 0x0020(0x0040)()
};
static_assert(alignof(WBP_Settings_MappingOptionEntry_C_SetMappingsSlotToNone) == 0x000008, "Wrong alignment on WBP_Settings_MappingOptionEntry_C_SetMappingsSlotToNone");
static_assert(sizeof(WBP_Settings_MappingOptionEntry_C_SetMappingsSlotToNone) == 0x000060, "Wrong size on WBP_Settings_MappingOptionEntry_C_SetMappingsSlotToNone");
static_assert(offsetof(WBP_Settings_MappingOptionEntry_C_SetMappingsSlotToNone, K2Node_MakeStruct_InputChord) == 0x000000, "Member 'WBP_Settings_MappingOptionEntry_C_SetMappingsSlotToNone::K2Node_MakeStruct_InputChord' has a wrong offset!");
static_assert(offsetof(WBP_Settings_MappingOptionEntry_C_SetMappingsSlotToNone, K2Node_MakeStruct_MapPlayerKeyArgs) == 0x000020, "Member 'WBP_Settings_MappingOptionEntry_C_SetMappingsSlotToNone::K2Node_MakeStruct_MapPlayerKeyArgs' has a wrong offset!");

}

