﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_EndBattle_CharacterPicto

#include "Basic.hpp"

#include "S_jRPG_Item_StaticData_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WBP_EndBattle_CharacterPicto.WBP_EndBattle_CharacterPicto_C.ExecuteUbergraph_WBP_EndBattle_CharacterPicto
// 0x0030 (0x0030 - 0x0000)
struct WBP_EndBattle_CharacterPicto_C_ExecuteUbergraph_WBP_EndBattle_CharacterPicto final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0004(0x0014)()
	bool                                          CallFunc_GetLearntNewLuminaThisBattle_LearntNewLuminaThisBattle; // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCurrentStep_CurrentStep;               // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_EndBattle_CharacterPicto_C_ExecuteUbergraph_WBP_EndBattle_CharacterPicto) == 0x000008, "Wrong alignment on WBP_EndBattle_CharacterPicto_C_ExecuteUbergraph_WBP_EndBattle_CharacterPicto");
static_assert(sizeof(WBP_EndBattle_CharacterPicto_C_ExecuteUbergraph_WBP_EndBattle_CharacterPicto) == 0x000030, "Wrong size on WBP_EndBattle_CharacterPicto_C_ExecuteUbergraph_WBP_EndBattle_CharacterPicto");
static_assert(offsetof(WBP_EndBattle_CharacterPicto_C_ExecuteUbergraph_WBP_EndBattle_CharacterPicto, EntryPoint) == 0x000000, "Member 'WBP_EndBattle_CharacterPicto_C_ExecuteUbergraph_WBP_EndBattle_CharacterPicto::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_EndBattle_CharacterPicto_C_ExecuteUbergraph_WBP_EndBattle_CharacterPicto, K2Node_MakeStruct_SlateColor) == 0x000004, "Member 'WBP_EndBattle_CharacterPicto_C_ExecuteUbergraph_WBP_EndBattle_CharacterPicto::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(WBP_EndBattle_CharacterPicto_C_ExecuteUbergraph_WBP_EndBattle_CharacterPicto, CallFunc_GetLearntNewLuminaThisBattle_LearntNewLuminaThisBattle) == 0x000018, "Member 'WBP_EndBattle_CharacterPicto_C_ExecuteUbergraph_WBP_EndBattle_CharacterPicto::CallFunc_GetLearntNewLuminaThisBattle_LearntNewLuminaThisBattle' has a wrong offset!");
static_assert(offsetof(WBP_EndBattle_CharacterPicto_C_ExecuteUbergraph_WBP_EndBattle_CharacterPicto, CallFunc_PlayAnimation_ReturnValue) == 0x000020, "Member 'WBP_EndBattle_CharacterPicto_C_ExecuteUbergraph_WBP_EndBattle_CharacterPicto::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EndBattle_CharacterPicto_C_ExecuteUbergraph_WBP_EndBattle_CharacterPicto, CallFunc_GetCurrentStep_CurrentStep) == 0x000028, "Member 'WBP_EndBattle_CharacterPicto_C_ExecuteUbergraph_WBP_EndBattle_CharacterPicto::CallFunc_GetCurrentStep_CurrentStep' has a wrong offset!");
static_assert(offsetof(WBP_EndBattle_CharacterPicto_C_ExecuteUbergraph_WBP_EndBattle_CharacterPicto, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00002C, "Member 'WBP_EndBattle_CharacterPicto_C_ExecuteUbergraph_WBP_EndBattle_CharacterPicto::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function WBP_EndBattle_CharacterPicto.WBP_EndBattle_CharacterPicto_C.LoadPicto
// 0x0138 (0x0138 - 0x0000)
struct WBP_EndBattle_CharacterPicto_C_LoadPicto final
{
public:
	class UBP_ItemInstance_Gear_C*                PictoInstance;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FS_jRPG_Item_StaticData                CallFunc_GetItemStaticData_ItemStaticData;         // 0x0008(0x0130)(ContainsInstancedReference, HasGetValueTypeHash)
};
static_assert(alignof(WBP_EndBattle_CharacterPicto_C_LoadPicto) == 0x000008, "Wrong alignment on WBP_EndBattle_CharacterPicto_C_LoadPicto");
static_assert(sizeof(WBP_EndBattle_CharacterPicto_C_LoadPicto) == 0x000138, "Wrong size on WBP_EndBattle_CharacterPicto_C_LoadPicto");
static_assert(offsetof(WBP_EndBattle_CharacterPicto_C_LoadPicto, PictoInstance) == 0x000000, "Member 'WBP_EndBattle_CharacterPicto_C_LoadPicto::PictoInstance' has a wrong offset!");
static_assert(offsetof(WBP_EndBattle_CharacterPicto_C_LoadPicto, CallFunc_GetItemStaticData_ItemStaticData) == 0x000008, "Member 'WBP_EndBattle_CharacterPicto_C_LoadPicto::CallFunc_GetItemStaticData_ItemStaticData' has a wrong offset!");

// Function WBP_EndBattle_CharacterPicto.WBP_EndBattle_CharacterPicto_C.SetPictoProgress
// 0x0008 (0x0008 - 0x0000)
struct WBP_EndBattle_CharacterPicto_C_SetPictoProgress final
{
public:
	double                                        PictoProgress_0;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_EndBattle_CharacterPicto_C_SetPictoProgress) == 0x000008, "Wrong alignment on WBP_EndBattle_CharacterPicto_C_SetPictoProgress");
static_assert(sizeof(WBP_EndBattle_CharacterPicto_C_SetPictoProgress) == 0x000008, "Wrong size on WBP_EndBattle_CharacterPicto_C_SetPictoProgress");
static_assert(offsetof(WBP_EndBattle_CharacterPicto_C_SetPictoProgress, PictoProgress_0) == 0x000000, "Member 'WBP_EndBattle_CharacterPicto_C_SetPictoProgress::PictoProgress_0' has a wrong offset!");

// Function WBP_EndBattle_CharacterPicto.WBP_EndBattle_CharacterPicto_C.TriggerPictoProgressionAnimation
// 0x0008 (0x0008 - 0x0000)
struct WBP_EndBattle_CharacterPicto_C_TriggerPictoProgressionAnimation final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_EndBattle_CharacterPicto_C_TriggerPictoProgressionAnimation) == 0x000008, "Wrong alignment on WBP_EndBattle_CharacterPicto_C_TriggerPictoProgressionAnimation");
static_assert(sizeof(WBP_EndBattle_CharacterPicto_C_TriggerPictoProgressionAnimation) == 0x000008, "Wrong size on WBP_EndBattle_CharacterPicto_C_TriggerPictoProgressionAnimation");
static_assert(offsetof(WBP_EndBattle_CharacterPicto_C_TriggerPictoProgressionAnimation, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'WBP_EndBattle_CharacterPicto_C_TriggerPictoProgressionAnimation::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

}

