﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GenericFunctionLibrary

#include "Basic.hpp"

#include "RigLogicModule_structs.hpp"
#include "EOptionalBoolean_structs.hpp"
#include "Engine_classes.hpp"
#include "UMG_structs.hpp"
#include "EUINavigationDirection_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GenericFunctionLibrary.GenericFunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UGenericFunctionLibrary_C final : public UBlueprintFunctionLibrary
{
public:
	static void ConcatenateSoftObjectDisplayNames(TArray<TSoftObjectPtr<class UObject>>& Objects, const class FString& Separator, class UObject* __WorldContext, class FString* Result);
	static bool IsInEditorPreview(class UObject* __WorldContext);
	static bool CompareIntegers(uint8 Comparison, int32 A, int32 B, class UObject* __WorldContext);
	static void IsCurrentPlatformConsole(class UObject* __WorldContext, bool* CurrentPlatformIsConsole);
	static void AddIfValid(class UObject* Object, TArray<class UObject*>& Array, class UObject* __WorldContext);
	static void ToTextArray__String_(TArray<class FString>& StringArray, class UObject* __WorldContext, TArray<class FText>* TextArray);
	static void ValidateObjectArray(TArray<class UObject*>& Array, const class FString& ArrayName, class UObject* __WorldContext, bool* IsValid, class FString* ErrorMessage);
	static void CheckObjectArray(TArray<class UObject*>& Array, const class FString& ArrayName, class UObject* __WorldContext);
	static void ToStringArray__integer_(TArray<int32>& IntegerArray, class UObject* __WorldContext, TArray<class FString>* StringArray);
	static void SetCanvasSlotAsHorizontalFillPercentage(class UCanvasPanelSlot* Target, double FillAlpha, class UObject* __WorldContext);
	static void ArrayOfFloatsToString(TArray<double>& In, class UObject* __WorldContext, class FString* OutString);
	static bool IsDataRowHandleSet(const struct FDataTableRowHandle& RowHandle, class UObject* __WorldContext);
	static void GetRandomOtherObjectFromArray(TArray<class UObject*>& Array, class UObject* Object, class UObject* __WorldContext, class UObject** OutItem);
	static void ConcatenateClassDisplayNames(TArray<class UClass*>& Objects, const class FString& Separator, class UObject* __WorldContext, class FString* Result);
	static void ConcatenateSoftClassDisplayNames(TArray<TSoftClassPtr<class UClass>>& Objects, const class FString& Separator, class UObject* __WorldContext, class FString* Result);
	static bool CompareFloats(uint8 Comparison, double A, double B, class UObject* __WorldContext);
	static void StartLatentAction(const class FString& DebugReason, class UObject* __WorldContext, class USF_BlueprintLatentAction** AsyncAction);
	static int32 IncrementModulo(int32& Value, int32 Modulo, class UObject* __WorldContext);
	static void ConcatenateDisplayNamesString(TArray<class UObject*>& Objects, const class FString& Separator, class UObject* __WorldContext, class FString* Result);
	static void GetShorterVector(const struct FVector& Start1, const struct FVector& End1, double Distance, class UObject* __WorldContext, struct FVector* Start2, struct FVector* End2);
	static bool AreWIP_ChecksEnabled(class UObject* __WorldContext);
	static bool IsChildOfClass(class UObject* Object, TSoftClassPtr<class UClass> SoftClass, class UObject* __WorldContext);
	static bool IsDebugModeEnabled(class UObject* __WorldContext);
	static void ArrayContainsInvalid(TArray<class UObject*>& Array, class UObject* __WorldContext, bool* Result, TArray<int32>* ArrayIndex);
	static double GetPrimitiveScreenPercentage(const class USceneComponent* Primitive, class UObject* __WorldContext);
	static bool WasPrimitiveRecentlyRenderedOnScreen(const class UPrimitiveComponent* Primitive, class UObject* __WorldContext);
	static void ResetHysteresisTimer(struct FTimerHandle& Handle, const class FString& DebugName, class UObject* __WorldContext);
	static void GetLocalCanvasSlotParams(class UWidget* ChildWidget, class UWidget* NewParentCanvas, class UObject* __WorldContext, struct FVector2D* position, struct FVector2D* Size);
	static void AddChildToCanvas_Fill(class UCanvasPanel* Canvas, class UWidget* Content, class UObject* __WorldContext, class UCanvasPanelSlot** CanvasSlot);
	static void CopyUISlot(class UPanelSlot* SourceSlot, class UPanelSlot* TargetSlot, class UObject* __WorldContext);
	static void ApplyUISlotToWidget(class UWidget* Widget, class UPanelSlot* Slot, class UObject* __WorldContext);
	static void CloneUISlotFromWidget(class UWidget* Widget, class UObject* __WorldContext, class UPanelSlot** Slot);
	static bool IsDifferentOptionalBool(EOptionalBoolean& Bool1, bool& Bool, class UObject* __WorldContext);
	static bool IsSameOptionalBool(EOptionalBoolean& Bool1, bool& Bool, class UObject* __WorldContext, bool* IsSet);
	static void __OptionalBool(EOptionalBoolean& Bool1, EOptionalBoolean& Bool2, class UObject* __WorldContext, bool* IsSame);
	static void ResetOptionalBool(EOptionalBoolean& Bool, class UObject* __WorldContext);
	static void SetOptionalBool(bool Value, EOptionalBoolean& Bool, class UObject* __WorldContext, bool* _);
	static void FromOptionalBool(EOptionalBoolean Bool, class UObject* __WorldContext, bool* IsSet, bool* Value);
	static void ToOptionalBool(bool Bool, class UObject* __WorldContext, EOptionalBoolean* OptionalBool);
	static void GetThresholdIntVector(double X, double Y, double Threshold, class UObject* __WorldContext, struct FIntVector* IntVector);
	static double GetThresholdAbsoluteValue_Float(double Value, double Threshold, class UObject* __WorldContext);
	static void GetUINavigationDirectionFromInputVector(struct FIntVector& DirectionVector, class UObject* __WorldContext, EUINavigationDirection* Direction);
	static void GetDirectionFromInputVector(const struct FIntVector& DirectionVector, class UObject* __WorldContext, EDirection* Direction);
	static void SetWidgetVisibilityIfNeeded(class UWidget* Widget, ESlateVisibility WantedVisibility, class UObject* __WorldContext, bool* Visibility_Changed);
	static class UBP_UINavigationComponent_C* GetUINavigationComponent(class UObject* __WorldContext);
	static void ClampToViewport(const struct FVector2D& position, const struct FVector2D& Margin, class UObject* __WorldContext, struct FVector2D* Result);
	static void ConcatenateDisplayNames(TArray<class UObject*>& Objects, class UObject* __WorldContext, class FText* Result);
	static void BattleSequenceKeyframeToText(double Time, const struct FFBattleSequenceTimelineKeyframe& Keyframe, class UObject* __WorldContext, class FText* Text);
	static void GetUndilatedTimeSeconds(class UObject* WorldContextObject, class UObject* __WorldContext, double* UndilatedTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GenericFunctionLibrary_C">();
	}
	static class UGenericFunctionLibrary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGenericFunctionLibrary_C>();
	}
};
static_assert(alignof(UGenericFunctionLibrary_C) == 0x000008, "Wrong alignment on UGenericFunctionLibrary_C");
static_assert(sizeof(UGenericFunctionLibrary_C) == 0x000028, "Wrong size on UGenericFunctionLibrary_C");

}

