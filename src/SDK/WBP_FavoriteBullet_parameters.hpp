﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_FavoriteBullet

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "UMG_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function WBP_FavoriteBullet.WBP_FavoriteBullet_C.ResetFavoriteData
// 0x0018 (0x0018 - 0x0000)
struct WBP_FavoriteBullet_C_ResetFavoriteData final
{
public:
	TDelegate<void(const struct FGameplayTag& PoolTag, class FName ObjectId, bool IsFavorite)> K2Node_CreateDelegate_OutputDelegate; // 0x0000(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_jRPG_GI_Custom_C*                   CallFunc_GetCustomGI_ReturnValue;                  // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_FavoriteBullet_C_ResetFavoriteData) == 0x000008, "Wrong alignment on WBP_FavoriteBullet_C_ResetFavoriteData");
static_assert(sizeof(WBP_FavoriteBullet_C_ResetFavoriteData) == 0x000018, "Wrong size on WBP_FavoriteBullet_C_ResetFavoriteData");
static_assert(offsetof(WBP_FavoriteBullet_C_ResetFavoriteData, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'WBP_FavoriteBullet_C_ResetFavoriteData::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_FavoriteBullet_C_ResetFavoriteData, CallFunc_GetCustomGI_ReturnValue) == 0x000010, "Member 'WBP_FavoriteBullet_C_ResetFavoriteData::CallFunc_GetCustomGI_ReturnValue' has a wrong offset!");

// Function WBP_FavoriteBullet.WBP_FavoriteBullet_C.UpdateFavoriteVisibility
// 0x0018 (0x0018 - 0x0000)
struct WBP_FavoriteBullet_C_UpdateFavoriteVisibility final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3[0x5];                                        // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_jRPG_GI_Custom_C*                   CallFunc_GetCustomGI_ReturnValue;                  // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsObjectFavorite_IsFavorite;              // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_FavoriteBullet_C_UpdateFavoriteVisibility) == 0x000008, "Wrong alignment on WBP_FavoriteBullet_C_UpdateFavoriteVisibility");
static_assert(sizeof(WBP_FavoriteBullet_C_UpdateFavoriteVisibility) == 0x000018, "Wrong size on WBP_FavoriteBullet_C_UpdateFavoriteVisibility");
static_assert(offsetof(WBP_FavoriteBullet_C_UpdateFavoriteVisibility, Temp_bool_Variable) == 0x000000, "Member 'WBP_FavoriteBullet_C_UpdateFavoriteVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_FavoriteBullet_C_UpdateFavoriteVisibility, Temp_byte_Variable) == 0x000001, "Member 'WBP_FavoriteBullet_C_UpdateFavoriteVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_FavoriteBullet_C_UpdateFavoriteVisibility, Temp_byte_Variable_1) == 0x000002, "Member 'WBP_FavoriteBullet_C_UpdateFavoriteVisibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_FavoriteBullet_C_UpdateFavoriteVisibility, CallFunc_GetCustomGI_ReturnValue) == 0x000008, "Member 'WBP_FavoriteBullet_C_UpdateFavoriteVisibility::CallFunc_GetCustomGI_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_FavoriteBullet_C_UpdateFavoriteVisibility, CallFunc_IsObjectFavorite_IsFavorite) == 0x000010, "Member 'WBP_FavoriteBullet_C_UpdateFavoriteVisibility::CallFunc_IsObjectFavorite_IsFavorite' has a wrong offset!");
static_assert(offsetof(WBP_FavoriteBullet_C_UpdateFavoriteVisibility, K2Node_Select_Default) == 0x000011, "Member 'WBP_FavoriteBullet_C_UpdateFavoriteVisibility::K2Node_Select_Default' has a wrong offset!");

// Function WBP_FavoriteBullet.WBP_FavoriteBullet_C.LoadFavoriteData
// 0x0028 (0x0028 - 0x0000)
struct WBP_FavoriteBullet_C_LoadFavoriteData final
{
public:
	struct FGameplayTag                           FavoritePoolTag_0;                                 // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	class FName                                   FavouriteObjectID_0;                               // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FGameplayTag& PoolTag, class FName ObjectId, bool IsFavorite)> K2Node_CreateDelegate_OutputDelegate; // 0x0010(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_jRPG_GI_Custom_C*                   CallFunc_GetCustomGI_ReturnValue;                  // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_FavoriteBullet_C_LoadFavoriteData) == 0x000008, "Wrong alignment on WBP_FavoriteBullet_C_LoadFavoriteData");
static_assert(sizeof(WBP_FavoriteBullet_C_LoadFavoriteData) == 0x000028, "Wrong size on WBP_FavoriteBullet_C_LoadFavoriteData");
static_assert(offsetof(WBP_FavoriteBullet_C_LoadFavoriteData, FavoritePoolTag_0) == 0x000000, "Member 'WBP_FavoriteBullet_C_LoadFavoriteData::FavoritePoolTag_0' has a wrong offset!");
static_assert(offsetof(WBP_FavoriteBullet_C_LoadFavoriteData, FavouriteObjectID_0) == 0x000008, "Member 'WBP_FavoriteBullet_C_LoadFavoriteData::FavouriteObjectID_0' has a wrong offset!");
static_assert(offsetof(WBP_FavoriteBullet_C_LoadFavoriteData, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'WBP_FavoriteBullet_C_LoadFavoriteData::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_FavoriteBullet_C_LoadFavoriteData, CallFunc_GetCustomGI_ReturnValue) == 0x000020, "Member 'WBP_FavoriteBullet_C_LoadFavoriteData::CallFunc_GetCustomGI_ReturnValue' has a wrong offset!");

// Function WBP_FavoriteBullet.WBP_FavoriteBullet_C.OnFavoriteObjectChanged
// 0x0014 (0x0014 - 0x0000)
struct WBP_FavoriteBullet_C_OnFavoriteObjectChanged final
{
public:
	struct FGameplayTag                           PoolTag;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	class FName                                   ObjectId;                                          // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsFavorite;                                        // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_FavoriteBullet_C_OnFavoriteObjectChanged) == 0x000004, "Wrong alignment on WBP_FavoriteBullet_C_OnFavoriteObjectChanged");
static_assert(sizeof(WBP_FavoriteBullet_C_OnFavoriteObjectChanged) == 0x000014, "Wrong size on WBP_FavoriteBullet_C_OnFavoriteObjectChanged");
static_assert(offsetof(WBP_FavoriteBullet_C_OnFavoriteObjectChanged, PoolTag) == 0x000000, "Member 'WBP_FavoriteBullet_C_OnFavoriteObjectChanged::PoolTag' has a wrong offset!");
static_assert(offsetof(WBP_FavoriteBullet_C_OnFavoriteObjectChanged, ObjectId) == 0x000008, "Member 'WBP_FavoriteBullet_C_OnFavoriteObjectChanged::ObjectId' has a wrong offset!");
static_assert(offsetof(WBP_FavoriteBullet_C_OnFavoriteObjectChanged, IsFavorite) == 0x000010, "Member 'WBP_FavoriteBullet_C_OnFavoriteObjectChanged::IsFavorite' has a wrong offset!");

// Function WBP_FavoriteBullet.WBP_FavoriteBullet_C.ExecuteUbergraph_WBP_FavoriteBullet
// 0x0048 (0x0048 - 0x0000)
struct WBP_FavoriteBullet_C_ExecuteUbergraph_WBP_FavoriteBullet final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           K2Node_CustomEvent_PoolTag;                        // 0x0014(0x0008)(NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_ObjectID;                       // 0x001C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsFavorite;                     // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_25[0x3];                                       // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_MatchesTag_ReturnValue;                   // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_33[0x1];                                       // 0x0033(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetEndTime_ReturnValue;                   // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0038(0x0008)(NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_FavoriteBullet_C_ExecuteUbergraph_WBP_FavoriteBullet) == 0x000008, "Wrong alignment on WBP_FavoriteBullet_C_ExecuteUbergraph_WBP_FavoriteBullet");
static_assert(sizeof(WBP_FavoriteBullet_C_ExecuteUbergraph_WBP_FavoriteBullet) == 0x000048, "Wrong size on WBP_FavoriteBullet_C_ExecuteUbergraph_WBP_FavoriteBullet");
static_assert(offsetof(WBP_FavoriteBullet_C_ExecuteUbergraph_WBP_FavoriteBullet, EntryPoint) == 0x000000, "Member 'WBP_FavoriteBullet_C_ExecuteUbergraph_WBP_FavoriteBullet::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_FavoriteBullet_C_ExecuteUbergraph_WBP_FavoriteBullet, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_FavoriteBullet_C_ExecuteUbergraph_WBP_FavoriteBullet::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_FavoriteBullet_C_ExecuteUbergraph_WBP_FavoriteBullet, K2Node_CustomEvent_PoolTag) == 0x000014, "Member 'WBP_FavoriteBullet_C_ExecuteUbergraph_WBP_FavoriteBullet::K2Node_CustomEvent_PoolTag' has a wrong offset!");
static_assert(offsetof(WBP_FavoriteBullet_C_ExecuteUbergraph_WBP_FavoriteBullet, K2Node_CustomEvent_ObjectID) == 0x00001C, "Member 'WBP_FavoriteBullet_C_ExecuteUbergraph_WBP_FavoriteBullet::K2Node_CustomEvent_ObjectID' has a wrong offset!");
static_assert(offsetof(WBP_FavoriteBullet_C_ExecuteUbergraph_WBP_FavoriteBullet, K2Node_CustomEvent_IsFavorite) == 0x000024, "Member 'WBP_FavoriteBullet_C_ExecuteUbergraph_WBP_FavoriteBullet::K2Node_CustomEvent_IsFavorite' has a wrong offset!");
static_assert(offsetof(WBP_FavoriteBullet_C_ExecuteUbergraph_WBP_FavoriteBullet, CallFunc_PlayAnimationForward_ReturnValue) == 0x000028, "Member 'WBP_FavoriteBullet_C_ExecuteUbergraph_WBP_FavoriteBullet::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_FavoriteBullet_C_ExecuteUbergraph_WBP_FavoriteBullet, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000030, "Member 'WBP_FavoriteBullet_C_ExecuteUbergraph_WBP_FavoriteBullet::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_FavoriteBullet_C_ExecuteUbergraph_WBP_FavoriteBullet, CallFunc_MatchesTag_ReturnValue) == 0x000031, "Member 'WBP_FavoriteBullet_C_ExecuteUbergraph_WBP_FavoriteBullet::CallFunc_MatchesTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_FavoriteBullet_C_ExecuteUbergraph_WBP_FavoriteBullet, CallFunc_BooleanAND_ReturnValue) == 0x000032, "Member 'WBP_FavoriteBullet_C_ExecuteUbergraph_WBP_FavoriteBullet::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_FavoriteBullet_C_ExecuteUbergraph_WBP_FavoriteBullet, CallFunc_GetEndTime_ReturnValue) == 0x000034, "Member 'WBP_FavoriteBullet_C_ExecuteUbergraph_WBP_FavoriteBullet::CallFunc_GetEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_FavoriteBullet_C_ExecuteUbergraph_WBP_FavoriteBullet, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000038, "Member 'WBP_FavoriteBullet_C_ExecuteUbergraph_WBP_FavoriteBullet::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_FavoriteBullet_C_ExecuteUbergraph_WBP_FavoriteBullet, CallFunc_PlayAnimation_ReturnValue) == 0x000040, "Member 'WBP_FavoriteBullet_C_ExecuteUbergraph_WBP_FavoriteBullet::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

}

