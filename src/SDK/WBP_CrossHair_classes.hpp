﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CrossHair

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "EFreeAimBodyPartType_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CrossHair.WBP_CrossHair_C
// 0x0038 (0x0318 - 0x02E0)
class UWBP_CrossHair_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anim_Shoot_HeadShot;                               // 0x02E8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_Shoot;                                        // 0x02F0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_Visible;                                      // 0x02F8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_Hover;                                        // 0x0300(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_CrossHair;                                   // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_CrosshairOutlines;                           // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_CrossHair(int32 EntryPoint);
	void OnInitialized();
	void PlayAnim_Shoot(EFreeAimBodyPartType BodyPartType);
	void PlayAnim_Visible();
	void SetCrossHairTintInteract(bool CanInteract, bool ShouldPlayAnimation);
	void SetCrossHairVisibility(ESlateVisibility InVisibility);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CrossHair_C">();
	}
	static class UWBP_CrossHair_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CrossHair_C>();
	}
};
static_assert(alignof(UWBP_CrossHair_C) == 0x000008, "Wrong alignment on UWBP_CrossHair_C");
static_assert(sizeof(UWBP_CrossHair_C) == 0x000318, "Wrong size on UWBP_CrossHair_C");
static_assert(offsetof(UWBP_CrossHair_C, UberGraphFrame) == 0x0002E0, "Member 'UWBP_CrossHair_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_CrossHair_C, Anim_Shoot_HeadShot) == 0x0002E8, "Member 'UWBP_CrossHair_C::Anim_Shoot_HeadShot' has a wrong offset!");
static_assert(offsetof(UWBP_CrossHair_C, Anim_Shoot) == 0x0002F0, "Member 'UWBP_CrossHair_C::Anim_Shoot' has a wrong offset!");
static_assert(offsetof(UWBP_CrossHair_C, Anim_Visible) == 0x0002F8, "Member 'UWBP_CrossHair_C::Anim_Visible' has a wrong offset!");
static_assert(offsetof(UWBP_CrossHair_C, Anim_Hover) == 0x000300, "Member 'UWBP_CrossHair_C::Anim_Hover' has a wrong offset!");
static_assert(offsetof(UWBP_CrossHair_C, Image_CrossHair) == 0x000308, "Member 'UWBP_CrossHair_C::Image_CrossHair' has a wrong offset!");
static_assert(offsetof(UWBP_CrossHair_C, Image_CrosshairOutlines) == 0x000310, "Member 'UWBP_CrossHair_C::Image_CrosshairOutlines' has a wrong offset!");

}

