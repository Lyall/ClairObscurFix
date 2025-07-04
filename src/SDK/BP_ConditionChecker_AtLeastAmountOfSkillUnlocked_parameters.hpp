﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ConditionChecker_AtLeastAmountOfSkillUnlocked

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_ConditionChecker_AtLeastAmountOfSkillUnlocked.BP_ConditionChecker_AtLeastAmountOfSkillUnlocked_C.BindEventOnGameStateChanged
// 0x0028 (0x0028 - 0x0000)
struct BP_ConditionChecker_AtLeastAmountOfSkillUnlocked_C_BindEventOnGameStateChanged final
{
public:
	TDelegate<void()>                             Event;                                             // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_jRPG_Controller_World_C*            K2Node_DynamicCast_AsBP_J_RPG_Controller_World;    // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ConditionChecker_AtLeastAmountOfSkillUnlocked_C_BindEventOnGameStateChanged) == 0x000008, "Wrong alignment on BP_ConditionChecker_AtLeastAmountOfSkillUnlocked_C_BindEventOnGameStateChanged");
static_assert(sizeof(BP_ConditionChecker_AtLeastAmountOfSkillUnlocked_C_BindEventOnGameStateChanged) == 0x000028, "Wrong size on BP_ConditionChecker_AtLeastAmountOfSkillUnlocked_C_BindEventOnGameStateChanged");
static_assert(offsetof(BP_ConditionChecker_AtLeastAmountOfSkillUnlocked_C_BindEventOnGameStateChanged, Event) == 0x000000, "Member 'BP_ConditionChecker_AtLeastAmountOfSkillUnlocked_C_BindEventOnGameStateChanged::Event' has a wrong offset!");
static_assert(offsetof(BP_ConditionChecker_AtLeastAmountOfSkillUnlocked_C_BindEventOnGameStateChanged, CallFunc_GetPlayerController_ReturnValue) == 0x000010, "Member 'BP_ConditionChecker_AtLeastAmountOfSkillUnlocked_C_BindEventOnGameStateChanged::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ConditionChecker_AtLeastAmountOfSkillUnlocked_C_BindEventOnGameStateChanged, K2Node_DynamicCast_AsBP_J_RPG_Controller_World) == 0x000018, "Member 'BP_ConditionChecker_AtLeastAmountOfSkillUnlocked_C_BindEventOnGameStateChanged::K2Node_DynamicCast_AsBP_J_RPG_Controller_World' has a wrong offset!");
static_assert(offsetof(BP_ConditionChecker_AtLeastAmountOfSkillUnlocked_C_BindEventOnGameStateChanged, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_ConditionChecker_AtLeastAmountOfSkillUnlocked_C_BindEventOnGameStateChanged::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_ConditionChecker_AtLeastAmountOfSkillUnlocked.BP_ConditionChecker_AtLeastAmountOfSkillUnlocked_C.CheckInternal
// 0x0040 (0x0040 - 0x0000)
struct BP_ConditionChecker_AtLeastAmountOfSkillUnlocked_C_CheckInternal final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_jRPG_GI_Custom_C*                   CallFunc_GetCustomGI_ReturnValue;                  // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_ToHardcodedName_HardcodedName;            // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasCharacterInCollection_Result;          // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_CharacterData_C*                    CallFunc_GetCharacterByID_CharacterData;           // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           CallFunc_GetUnlockedSkillSaveData_UnlockedSkillIDs; // 0x0028(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ConditionChecker_AtLeastAmountOfSkillUnlocked_C_CheckInternal) == 0x000008, "Wrong alignment on BP_ConditionChecker_AtLeastAmountOfSkillUnlocked_C_CheckInternal");
static_assert(sizeof(BP_ConditionChecker_AtLeastAmountOfSkillUnlocked_C_CheckInternal) == 0x000040, "Wrong size on BP_ConditionChecker_AtLeastAmountOfSkillUnlocked_C_CheckInternal");
static_assert(offsetof(BP_ConditionChecker_AtLeastAmountOfSkillUnlocked_C_CheckInternal, ReturnValue) == 0x000000, "Member 'BP_ConditionChecker_AtLeastAmountOfSkillUnlocked_C_CheckInternal::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ConditionChecker_AtLeastAmountOfSkillUnlocked_C_CheckInternal, CallFunc_GetCustomGI_ReturnValue) == 0x000008, "Member 'BP_ConditionChecker_AtLeastAmountOfSkillUnlocked_C_CheckInternal::CallFunc_GetCustomGI_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ConditionChecker_AtLeastAmountOfSkillUnlocked_C_CheckInternal, CallFunc_ToHardcodedName_HardcodedName) == 0x000010, "Member 'BP_ConditionChecker_AtLeastAmountOfSkillUnlocked_C_CheckInternal::CallFunc_ToHardcodedName_HardcodedName' has a wrong offset!");
static_assert(offsetof(BP_ConditionChecker_AtLeastAmountOfSkillUnlocked_C_CheckInternal, CallFunc_HasCharacterInCollection_Result) == 0x000018, "Member 'BP_ConditionChecker_AtLeastAmountOfSkillUnlocked_C_CheckInternal::CallFunc_HasCharacterInCollection_Result' has a wrong offset!");
static_assert(offsetof(BP_ConditionChecker_AtLeastAmountOfSkillUnlocked_C_CheckInternal, CallFunc_GetCharacterByID_CharacterData) == 0x000020, "Member 'BP_ConditionChecker_AtLeastAmountOfSkillUnlocked_C_CheckInternal::CallFunc_GetCharacterByID_CharacterData' has a wrong offset!");
static_assert(offsetof(BP_ConditionChecker_AtLeastAmountOfSkillUnlocked_C_CheckInternal, CallFunc_GetUnlockedSkillSaveData_UnlockedSkillIDs) == 0x000028, "Member 'BP_ConditionChecker_AtLeastAmountOfSkillUnlocked_C_CheckInternal::CallFunc_GetUnlockedSkillSaveData_UnlockedSkillIDs' has a wrong offset!");
static_assert(offsetof(BP_ConditionChecker_AtLeastAmountOfSkillUnlocked_C_CheckInternal, CallFunc_Array_Length_ReturnValue) == 0x000038, "Member 'BP_ConditionChecker_AtLeastAmountOfSkillUnlocked_C_CheckInternal::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ConditionChecker_AtLeastAmountOfSkillUnlocked_C_CheckInternal, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x00003C, "Member 'BP_ConditionChecker_AtLeastAmountOfSkillUnlocked_C_CheckInternal::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");

// Function BP_ConditionChecker_AtLeastAmountOfSkillUnlocked.BP_ConditionChecker_AtLeastAmountOfSkillUnlocked_C.UnbindEventOnGameStateChanged
// 0x0028 (0x0028 - 0x0000)
struct BP_ConditionChecker_AtLeastAmountOfSkillUnlocked_C_UnbindEventOnGameStateChanged final
{
public:
	TDelegate<void()>                             Event;                                             // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_jRPG_Controller_World_C*            K2Node_DynamicCast_AsBP_J_RPG_Controller_World;    // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ConditionChecker_AtLeastAmountOfSkillUnlocked_C_UnbindEventOnGameStateChanged) == 0x000008, "Wrong alignment on BP_ConditionChecker_AtLeastAmountOfSkillUnlocked_C_UnbindEventOnGameStateChanged");
static_assert(sizeof(BP_ConditionChecker_AtLeastAmountOfSkillUnlocked_C_UnbindEventOnGameStateChanged) == 0x000028, "Wrong size on BP_ConditionChecker_AtLeastAmountOfSkillUnlocked_C_UnbindEventOnGameStateChanged");
static_assert(offsetof(BP_ConditionChecker_AtLeastAmountOfSkillUnlocked_C_UnbindEventOnGameStateChanged, Event) == 0x000000, "Member 'BP_ConditionChecker_AtLeastAmountOfSkillUnlocked_C_UnbindEventOnGameStateChanged::Event' has a wrong offset!");
static_assert(offsetof(BP_ConditionChecker_AtLeastAmountOfSkillUnlocked_C_UnbindEventOnGameStateChanged, CallFunc_GetPlayerController_ReturnValue) == 0x000010, "Member 'BP_ConditionChecker_AtLeastAmountOfSkillUnlocked_C_UnbindEventOnGameStateChanged::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ConditionChecker_AtLeastAmountOfSkillUnlocked_C_UnbindEventOnGameStateChanged, K2Node_DynamicCast_AsBP_J_RPG_Controller_World) == 0x000018, "Member 'BP_ConditionChecker_AtLeastAmountOfSkillUnlocked_C_UnbindEventOnGameStateChanged::K2Node_DynamicCast_AsBP_J_RPG_Controller_World' has a wrong offset!");
static_assert(offsetof(BP_ConditionChecker_AtLeastAmountOfSkillUnlocked_C_UnbindEventOnGameStateChanged, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_ConditionChecker_AtLeastAmountOfSkillUnlocked_C_UnbindEventOnGameStateChanged::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_ConditionChecker_AtLeastAmountOfSkillUnlocked.BP_ConditionChecker_AtLeastAmountOfSkillUnlocked_C.ValidateConditionChecker
// 0x0038 (0x0038 - 0x0000)
struct BP_ConditionChecker_AtLeastAmountOfSkillUnlocked_C_ValidateConditionChecker final
{
public:
	TArray<class FText>                           ErrorMessages;                                     // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FString                                 PropertyPath;                                      // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	class FString                                 CallFunc_AppendPropertyPath_ReturnValue;           // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ConditionChecker_AtLeastAmountOfSkillUnlocked_C_ValidateConditionChecker) == 0x000008, "Wrong alignment on BP_ConditionChecker_AtLeastAmountOfSkillUnlocked_C_ValidateConditionChecker");
static_assert(sizeof(BP_ConditionChecker_AtLeastAmountOfSkillUnlocked_C_ValidateConditionChecker) == 0x000038, "Wrong size on BP_ConditionChecker_AtLeastAmountOfSkillUnlocked_C_ValidateConditionChecker");
static_assert(offsetof(BP_ConditionChecker_AtLeastAmountOfSkillUnlocked_C_ValidateConditionChecker, ErrorMessages) == 0x000000, "Member 'BP_ConditionChecker_AtLeastAmountOfSkillUnlocked_C_ValidateConditionChecker::ErrorMessages' has a wrong offset!");
static_assert(offsetof(BP_ConditionChecker_AtLeastAmountOfSkillUnlocked_C_ValidateConditionChecker, PropertyPath) == 0x000010, "Member 'BP_ConditionChecker_AtLeastAmountOfSkillUnlocked_C_ValidateConditionChecker::PropertyPath' has a wrong offset!");
static_assert(offsetof(BP_ConditionChecker_AtLeastAmountOfSkillUnlocked_C_ValidateConditionChecker, CallFunc_AppendPropertyPath_ReturnValue) == 0x000020, "Member 'BP_ConditionChecker_AtLeastAmountOfSkillUnlocked_C_ValidateConditionChecker::CallFunc_AppendPropertyPath_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ConditionChecker_AtLeastAmountOfSkillUnlocked_C_ValidateConditionChecker, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000030, "Member 'BP_ConditionChecker_AtLeastAmountOfSkillUnlocked_C_ValidateConditionChecker::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

}

