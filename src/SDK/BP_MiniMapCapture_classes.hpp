﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MiniMapCapture

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MiniMapCapture.BP_MiniMapCapture_C
// 0x0070 (0x0300 - 0x0290)
class ABP_MiniMapCapture_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USF_ReadTexturePixelQuery*              ReadQuery;                                         // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                                TopLeft;                                           // 0x02A8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                BottomRight;                                       // 0x02C0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              WantedTextureRef;                                  // 0x02D8(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void ConvertLocationToMapLocation(const struct FVector& Location, struct FVector2D* TwoDPosition);
	void ExecuteUbergraph_BP_MiniMapCapture(int32 EntryPoint);
	double GetMapHeight();
	double GetMapWidth();
	void IsLocationInUnlockedSection(const struct FVector2D& Location, bool* IsInUnlockedSection);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void TryReadSectionGrayscaleValue(const struct FVector2D& TwoDPosition, bool* Succeed, uint8* GreyscaleValue);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MiniMapCapture_C">();
	}
	static class ABP_MiniMapCapture_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MiniMapCapture_C>();
	}
};
static_assert(alignof(ABP_MiniMapCapture_C) == 0x000008, "Wrong alignment on ABP_MiniMapCapture_C");
static_assert(sizeof(ABP_MiniMapCapture_C) == 0x000300, "Wrong size on ABP_MiniMapCapture_C");
static_assert(offsetof(ABP_MiniMapCapture_C, UberGraphFrame) == 0x000290, "Member 'ABP_MiniMapCapture_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_MiniMapCapture_C, DefaultSceneRoot) == 0x000298, "Member 'ABP_MiniMapCapture_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_MiniMapCapture_C, ReadQuery) == 0x0002A0, "Member 'ABP_MiniMapCapture_C::ReadQuery' has a wrong offset!");
static_assert(offsetof(ABP_MiniMapCapture_C, TopLeft) == 0x0002A8, "Member 'ABP_MiniMapCapture_C::TopLeft' has a wrong offset!");
static_assert(offsetof(ABP_MiniMapCapture_C, BottomRight) == 0x0002C0, "Member 'ABP_MiniMapCapture_C::BottomRight' has a wrong offset!");
static_assert(offsetof(ABP_MiniMapCapture_C, WantedTextureRef) == 0x0002D8, "Member 'ABP_MiniMapCapture_C::WantedTextureRef' has a wrong offset!");

}

