﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CharacterMarker

#include "Basic.hpp"

#include "S_jRPG_CharacterDefinition_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WBP_CharacterMarker.WBP_CharacterMarker_C.LoadDeadMaterial
// 0x0010 (0x0010 - 0x0000)
struct WBP_CharacterMarker_C_LoadDeadMaterial final
{
public:
	class UMaterialInterface*                     DeadMaterial;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharacterMarker_C_LoadDeadMaterial) == 0x000008, "Wrong alignment on WBP_CharacterMarker_C_LoadDeadMaterial");
static_assert(sizeof(WBP_CharacterMarker_C_LoadDeadMaterial) == 0x000010, "Wrong size on WBP_CharacterMarker_C_LoadDeadMaterial");
static_assert(offsetof(WBP_CharacterMarker_C_LoadDeadMaterial, DeadMaterial) == 0x000000, "Member 'WBP_CharacterMarker_C_LoadDeadMaterial::DeadMaterial' has a wrong offset!");
static_assert(offsetof(WBP_CharacterMarker_C_LoadDeadMaterial, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000008, "Member 'WBP_CharacterMarker_C_LoadDeadMaterial::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");

// Function WBP_CharacterMarker.WBP_CharacterMarker_C.LoadTextureInMask
// 0x0010 (0x0010 - 0x0000)
struct WBP_CharacterMarker_C_LoadTextureInMask final
{
public:
	class UTexture*                               Texture;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharacterMarker_C_LoadTextureInMask) == 0x000008, "Wrong alignment on WBP_CharacterMarker_C_LoadTextureInMask");
static_assert(sizeof(WBP_CharacterMarker_C_LoadTextureInMask) == 0x000010, "Wrong size on WBP_CharacterMarker_C_LoadTextureInMask");
static_assert(offsetof(WBP_CharacterMarker_C_LoadTextureInMask, Texture) == 0x000000, "Member 'WBP_CharacterMarker_C_LoadTextureInMask::Texture' has a wrong offset!");
static_assert(offsetof(WBP_CharacterMarker_C_LoadTextureInMask, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000008, "Member 'WBP_CharacterMarker_C_LoadTextureInMask::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");

// Function WBP_CharacterMarker.WBP_CharacterMarker_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_CharacterMarker_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharacterMarker_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_CharacterMarker_C_PreConstruct");
static_assert(sizeof(WBP_CharacterMarker_C_PreConstruct) == 0x000001, "Wrong size on WBP_CharacterMarker_C_PreConstruct");
static_assert(offsetof(WBP_CharacterMarker_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_CharacterMarker_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_CharacterMarker.WBP_CharacterMarker_C.SetCharacterData
// 0x0010 (0x0010 - 0x0000)
struct WBP_CharacterMarker_C_SetCharacterData final
{
public:
	class UBP_CharacterData_C*                    CharacterData_0;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Learnt_0;                                          // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsDead_0;                                          // 0x0009(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharacterMarker_C_SetCharacterData) == 0x000008, "Wrong alignment on WBP_CharacterMarker_C_SetCharacterData");
static_assert(sizeof(WBP_CharacterMarker_C_SetCharacterData) == 0x000010, "Wrong size on WBP_CharacterMarker_C_SetCharacterData");
static_assert(offsetof(WBP_CharacterMarker_C_SetCharacterData, CharacterData_0) == 0x000000, "Member 'WBP_CharacterMarker_C_SetCharacterData::CharacterData_0' has a wrong offset!");
static_assert(offsetof(WBP_CharacterMarker_C_SetCharacterData, Learnt_0) == 0x000008, "Member 'WBP_CharacterMarker_C_SetCharacterData::Learnt_0' has a wrong offset!");
static_assert(offsetof(WBP_CharacterMarker_C_SetCharacterData, IsDead_0) == 0x000009, "Member 'WBP_CharacterMarker_C_SetCharacterData::IsDead_0' has a wrong offset!");

// Function WBP_CharacterMarker.WBP_CharacterMarker_C.SetCharacterDefinition
// 0x0328 (0x0328 - 0x0000)
struct WBP_CharacterMarker_C_SetCharacterDefinition final
{
public:
	struct FS_jRPG_CharacterDefinition            CharacterDefinition;                               // 0x0000(0x0328)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharacterMarker_C_SetCharacterDefinition) == 0x000008, "Wrong alignment on WBP_CharacterMarker_C_SetCharacterDefinition");
static_assert(sizeof(WBP_CharacterMarker_C_SetCharacterDefinition) == 0x000328, "Wrong size on WBP_CharacterMarker_C_SetCharacterDefinition");
static_assert(offsetof(WBP_CharacterMarker_C_SetCharacterDefinition, CharacterDefinition) == 0x000000, "Member 'WBP_CharacterMarker_C_SetCharacterDefinition::CharacterDefinition' has a wrong offset!");

// Function WBP_CharacterMarker.WBP_CharacterMarker_C.ExecuteUbergraph_WBP_CharacterMarker
// 0x03B0 (0x03B0 - 0x0000)
struct WBP_CharacterMarker_C_ExecuteUbergraph_WBP_CharacterMarker final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstance*                      CallFunc_GetCharacterDeadPortrait_CharacterDeadPortrait; // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_12[0x2];                                       // 0x0012(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable;                              // 0x0014(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_1;                            // 0x0024(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0036(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0037(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_4;                              // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_5;                              // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_3;                              // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x003B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_CharacterData_C*                    K2Node_CustomEvent_CharacterData;                  // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Learnt;                         // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsDead;                         // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B[0x5];                                       // 0x004B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             CallFunc_GetCharacterPortrait_CharacterIcon;       // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x3];                                       // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_Select_Default_1;                           // 0x005C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6D[0x3];                                       // 0x006D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7A[0x6];                                       // 0x007A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FS_jRPG_CharacterDefinition            K2Node_CustomEvent_CharacterDefinition;            // 0x0080(0x0328)(ContainsInstancedReference, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x03A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_3;                           // 0x03A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharacterMarker_C_ExecuteUbergraph_WBP_CharacterMarker) == 0x000008, "Wrong alignment on WBP_CharacterMarker_C_ExecuteUbergraph_WBP_CharacterMarker");
static_assert(sizeof(WBP_CharacterMarker_C_ExecuteUbergraph_WBP_CharacterMarker) == 0x0003B0, "Wrong size on WBP_CharacterMarker_C_ExecuteUbergraph_WBP_CharacterMarker");
static_assert(offsetof(WBP_CharacterMarker_C_ExecuteUbergraph_WBP_CharacterMarker, EntryPoint) == 0x000000, "Member 'WBP_CharacterMarker_C_ExecuteUbergraph_WBP_CharacterMarker::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_CharacterMarker_C_ExecuteUbergraph_WBP_CharacterMarker, Temp_byte_Variable) == 0x000004, "Member 'WBP_CharacterMarker_C_ExecuteUbergraph_WBP_CharacterMarker::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CharacterMarker_C_ExecuteUbergraph_WBP_CharacterMarker, CallFunc_GetCharacterDeadPortrait_CharacterDeadPortrait) == 0x000008, "Member 'WBP_CharacterMarker_C_ExecuteUbergraph_WBP_CharacterMarker::CallFunc_GetCharacterDeadPortrait_CharacterDeadPortrait' has a wrong offset!");
static_assert(offsetof(WBP_CharacterMarker_C_ExecuteUbergraph_WBP_CharacterMarker, Temp_byte_Variable_1) == 0x000010, "Member 'WBP_CharacterMarker_C_ExecuteUbergraph_WBP_CharacterMarker::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_CharacterMarker_C_ExecuteUbergraph_WBP_CharacterMarker, Temp_bool_Variable) == 0x000011, "Member 'WBP_CharacterMarker_C_ExecuteUbergraph_WBP_CharacterMarker::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CharacterMarker_C_ExecuteUbergraph_WBP_CharacterMarker, Temp_struct_Variable) == 0x000014, "Member 'WBP_CharacterMarker_C_ExecuteUbergraph_WBP_CharacterMarker::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CharacterMarker_C_ExecuteUbergraph_WBP_CharacterMarker, Temp_struct_Variable_1) == 0x000024, "Member 'WBP_CharacterMarker_C_ExecuteUbergraph_WBP_CharacterMarker::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_CharacterMarker_C_ExecuteUbergraph_WBP_CharacterMarker, Temp_bool_Variable_1) == 0x000034, "Member 'WBP_CharacterMarker_C_ExecuteUbergraph_WBP_CharacterMarker::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_CharacterMarker_C_ExecuteUbergraph_WBP_CharacterMarker, Temp_byte_Variable_2) == 0x000035, "Member 'WBP_CharacterMarker_C_ExecuteUbergraph_WBP_CharacterMarker::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_CharacterMarker_C_ExecuteUbergraph_WBP_CharacterMarker, Temp_byte_Variable_3) == 0x000036, "Member 'WBP_CharacterMarker_C_ExecuteUbergraph_WBP_CharacterMarker::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_CharacterMarker_C_ExecuteUbergraph_WBP_CharacterMarker, Temp_bool_Variable_2) == 0x000037, "Member 'WBP_CharacterMarker_C_ExecuteUbergraph_WBP_CharacterMarker::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_CharacterMarker_C_ExecuteUbergraph_WBP_CharacterMarker, Temp_byte_Variable_4) == 0x000038, "Member 'WBP_CharacterMarker_C_ExecuteUbergraph_WBP_CharacterMarker::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_CharacterMarker_C_ExecuteUbergraph_WBP_CharacterMarker, Temp_byte_Variable_5) == 0x000039, "Member 'WBP_CharacterMarker_C_ExecuteUbergraph_WBP_CharacterMarker::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_CharacterMarker_C_ExecuteUbergraph_WBP_CharacterMarker, Temp_bool_Variable_3) == 0x00003A, "Member 'WBP_CharacterMarker_C_ExecuteUbergraph_WBP_CharacterMarker::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_CharacterMarker_C_ExecuteUbergraph_WBP_CharacterMarker, K2Node_Event_IsDesignTime) == 0x00003B, "Member 'WBP_CharacterMarker_C_ExecuteUbergraph_WBP_CharacterMarker::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_CharacterMarker_C_ExecuteUbergraph_WBP_CharacterMarker, K2Node_CustomEvent_CharacterData) == 0x000040, "Member 'WBP_CharacterMarker_C_ExecuteUbergraph_WBP_CharacterMarker::K2Node_CustomEvent_CharacterData' has a wrong offset!");
static_assert(offsetof(WBP_CharacterMarker_C_ExecuteUbergraph_WBP_CharacterMarker, K2Node_CustomEvent_Learnt) == 0x000048, "Member 'WBP_CharacterMarker_C_ExecuteUbergraph_WBP_CharacterMarker::K2Node_CustomEvent_Learnt' has a wrong offset!");
static_assert(offsetof(WBP_CharacterMarker_C_ExecuteUbergraph_WBP_CharacterMarker, K2Node_CustomEvent_IsDead) == 0x000049, "Member 'WBP_CharacterMarker_C_ExecuteUbergraph_WBP_CharacterMarker::K2Node_CustomEvent_IsDead' has a wrong offset!");
static_assert(offsetof(WBP_CharacterMarker_C_ExecuteUbergraph_WBP_CharacterMarker, CallFunc_IsValid_ReturnValue) == 0x00004A, "Member 'WBP_CharacterMarker_C_ExecuteUbergraph_WBP_CharacterMarker::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharacterMarker_C_ExecuteUbergraph_WBP_CharacterMarker, CallFunc_GetCharacterPortrait_CharacterIcon) == 0x000050, "Member 'WBP_CharacterMarker_C_ExecuteUbergraph_WBP_CharacterMarker::CallFunc_GetCharacterPortrait_CharacterIcon' has a wrong offset!");
static_assert(offsetof(WBP_CharacterMarker_C_ExecuteUbergraph_WBP_CharacterMarker, K2Node_Select_Default) == 0x000058, "Member 'WBP_CharacterMarker_C_ExecuteUbergraph_WBP_CharacterMarker::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_CharacterMarker_C_ExecuteUbergraph_WBP_CharacterMarker, K2Node_Select_Default_1) == 0x00005C, "Member 'WBP_CharacterMarker_C_ExecuteUbergraph_WBP_CharacterMarker::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_CharacterMarker_C_ExecuteUbergraph_WBP_CharacterMarker, CallFunc_IsValid_ReturnValue_1) == 0x00006C, "Member 'WBP_CharacterMarker_C_ExecuteUbergraph_WBP_CharacterMarker::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CharacterMarker_C_ExecuteUbergraph_WBP_CharacterMarker, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000070, "Member 'WBP_CharacterMarker_C_ExecuteUbergraph_WBP_CharacterMarker::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharacterMarker_C_ExecuteUbergraph_WBP_CharacterMarker, CallFunc_IsValid_ReturnValue_2) == 0x000078, "Member 'WBP_CharacterMarker_C_ExecuteUbergraph_WBP_CharacterMarker::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_CharacterMarker_C_ExecuteUbergraph_WBP_CharacterMarker, K2Node_Select_Default_2) == 0x000079, "Member 'WBP_CharacterMarker_C_ExecuteUbergraph_WBP_CharacterMarker::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(WBP_CharacterMarker_C_ExecuteUbergraph_WBP_CharacterMarker, K2Node_CustomEvent_CharacterDefinition) == 0x000080, "Member 'WBP_CharacterMarker_C_ExecuteUbergraph_WBP_CharacterMarker::K2Node_CustomEvent_CharacterDefinition' has a wrong offset!");
static_assert(offsetof(WBP_CharacterMarker_C_ExecuteUbergraph_WBP_CharacterMarker, CallFunc_IsValid_ReturnValue_3) == 0x0003A8, "Member 'WBP_CharacterMarker_C_ExecuteUbergraph_WBP_CharacterMarker::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_CharacterMarker_C_ExecuteUbergraph_WBP_CharacterMarker, K2Node_Select_Default_3) == 0x0003A9, "Member 'WBP_CharacterMarker_C_ExecuteUbergraph_WBP_CharacterMarker::K2Node_Select_Default_3' has a wrong offset!");

}

