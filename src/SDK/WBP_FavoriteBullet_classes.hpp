﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_FavoriteBullet

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SandFall_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_FavoriteBullet.WBP_FavoriteBullet_C
// 0x0070 (0x0350 - 0x02E0)
class UWBP_FavoriteBullet_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Animation_Disappear;                               // 0x02E8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Animation_Appear;                                  // 0x02F0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_FavoriteBullet_Star;                         // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Glow_CircleBlurMaterial;                     // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FGameplayTag                           FavoritePoolTag;                                   // 0x0308(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                   FavouriteObjectID;                                 // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMulticastInlineDelegate<void()>              OnSetToFavorite;                                   // 0x0318(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FTimerHandle                           VisibilityTimerHandle;                             // 0x0328(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FSoundEventDataTableRowHandle          SD_AddToFavotite;                                  // 0x0330(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FSoundEventDataTableRowHandle          SD_RemoveFromFavorite;                             // 0x0340(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void ResetFavoriteData();
	void UpdateFavoriteVisibility();
	void LoadFavoriteData(const struct FGameplayTag& FavoritePoolTag_0, class FName FavouriteObjectID_0);
	void Construct();
	void OnFavoriteObjectChanged(const struct FGameplayTag& PoolTag, class FName ObjectId, bool IsFavorite);
	void OnAnimationEnded();
	void ExecuteUbergraph_WBP_FavoriteBullet(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_FavoriteBullet_C">();
	}
	static class UWBP_FavoriteBullet_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_FavoriteBullet_C>();
	}
};
static_assert(alignof(UWBP_FavoriteBullet_C) == 0x000008, "Wrong alignment on UWBP_FavoriteBullet_C");
static_assert(sizeof(UWBP_FavoriteBullet_C) == 0x000350, "Wrong size on UWBP_FavoriteBullet_C");
static_assert(offsetof(UWBP_FavoriteBullet_C, UberGraphFrame) == 0x0002E0, "Member 'UWBP_FavoriteBullet_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_FavoriteBullet_C, Animation_Disappear) == 0x0002E8, "Member 'UWBP_FavoriteBullet_C::Animation_Disappear' has a wrong offset!");
static_assert(offsetof(UWBP_FavoriteBullet_C, Animation_Appear) == 0x0002F0, "Member 'UWBP_FavoriteBullet_C::Animation_Appear' has a wrong offset!");
static_assert(offsetof(UWBP_FavoriteBullet_C, Image_FavoriteBullet_Star) == 0x0002F8, "Member 'UWBP_FavoriteBullet_C::Image_FavoriteBullet_Star' has a wrong offset!");
static_assert(offsetof(UWBP_FavoriteBullet_C, Image_Glow_CircleBlurMaterial) == 0x000300, "Member 'UWBP_FavoriteBullet_C::Image_Glow_CircleBlurMaterial' has a wrong offset!");
static_assert(offsetof(UWBP_FavoriteBullet_C, FavoritePoolTag) == 0x000308, "Member 'UWBP_FavoriteBullet_C::FavoritePoolTag' has a wrong offset!");
static_assert(offsetof(UWBP_FavoriteBullet_C, FavouriteObjectID) == 0x000310, "Member 'UWBP_FavoriteBullet_C::FavouriteObjectID' has a wrong offset!");
static_assert(offsetof(UWBP_FavoriteBullet_C, OnSetToFavorite) == 0x000318, "Member 'UWBP_FavoriteBullet_C::OnSetToFavorite' has a wrong offset!");
static_assert(offsetof(UWBP_FavoriteBullet_C, VisibilityTimerHandle) == 0x000328, "Member 'UWBP_FavoriteBullet_C::VisibilityTimerHandle' has a wrong offset!");
static_assert(offsetof(UWBP_FavoriteBullet_C, SD_AddToFavotite) == 0x000330, "Member 'UWBP_FavoriteBullet_C::SD_AddToFavotite' has a wrong offset!");
static_assert(offsetof(UWBP_FavoriteBullet_C, SD_RemoveFromFavorite) == 0x000340, "Member 'UWBP_FavoriteBullet_C::SD_RemoveFromFavorite' has a wrong offset!");

}

