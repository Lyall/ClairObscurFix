﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CustomizationIcon

#include "Basic.hpp"

#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CustomizationIcon.WBP_CustomizationIcon_C
// 0x0020 (0x0328 - 0x0308)
class UWBP_CustomizationIcon_C final : public UCommonUserWidget
{
public:
	class UCommonLazyImage*                       CustomizationItemIcon;                             // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonLazyImage*                       HairBackground;                                    // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstance*                      SkinCustoMaterial;                                 // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UMaterialInstance*                      HairCustoMaterial;                                 // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

public:
	void LoadCustomizationIcon(const struct FS_jRPG_Item_StaticData& ItemData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CustomizationIcon_C">();
	}
	static class UWBP_CustomizationIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CustomizationIcon_C>();
	}
};
static_assert(alignof(UWBP_CustomizationIcon_C) == 0x000008, "Wrong alignment on UWBP_CustomizationIcon_C");
static_assert(sizeof(UWBP_CustomizationIcon_C) == 0x000328, "Wrong size on UWBP_CustomizationIcon_C");
static_assert(offsetof(UWBP_CustomizationIcon_C, CustomizationItemIcon) == 0x000308, "Member 'UWBP_CustomizationIcon_C::CustomizationItemIcon' has a wrong offset!");
static_assert(offsetof(UWBP_CustomizationIcon_C, HairBackground) == 0x000310, "Member 'UWBP_CustomizationIcon_C::HairBackground' has a wrong offset!");
static_assert(offsetof(UWBP_CustomizationIcon_C, SkinCustoMaterial) == 0x000318, "Member 'UWBP_CustomizationIcon_C::SkinCustoMaterial' has a wrong offset!");
static_assert(offsetof(UWBP_CustomizationIcon_C, HairCustoMaterial) == 0x000320, "Member 'UWBP_CustomizationIcon_C::HairCustoMaterial' has a wrong offset!");

}

