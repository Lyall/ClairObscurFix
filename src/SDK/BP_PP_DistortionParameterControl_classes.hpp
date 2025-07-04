﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PP_DistortionParameterControl

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PP_DistortionParameterControl.BP_PP_DistortionParameterControl_C
// 0x0030 (0x02C0 - 0x0290)
class ABP_PP_DistortionParameterControl_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         DistortionTimeline_0to1_64EAC131498BD3E99CD8C99844349C8F; // 0x02A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            DistortionTimeline__Direction_64EAC131498BD3E99CD8C99844349C8F; // 0x02A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A5[0x3];                                      // 0x02A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     DistortionTimeline;                                // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        Distortion;                                        // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	double                                        Hardness;                                          // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)

public:
	void DistortionTimeline__FinishedFunc();
	void DistortionTimeline__UpdateFunc();
	void ExecuteUbergraph_BP_PP_DistortionParameterControl(int32 EntryPoint);
	void ReverseDistortionParameter(const double Speed);
	void SetDistortion(double NewParam);
	void SetDistortionParameter(const double Speed, const double DistortionValue, const double HardnessValue);
	void SetHardness(double NewParam);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PP_DistortionParameterControl_C">();
	}
	static class ABP_PP_DistortionParameterControl_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PP_DistortionParameterControl_C>();
	}
};
static_assert(alignof(ABP_PP_DistortionParameterControl_C) == 0x000008, "Wrong alignment on ABP_PP_DistortionParameterControl_C");
static_assert(sizeof(ABP_PP_DistortionParameterControl_C) == 0x0002C0, "Wrong size on ABP_PP_DistortionParameterControl_C");
static_assert(offsetof(ABP_PP_DistortionParameterControl_C, UberGraphFrame) == 0x000290, "Member 'ABP_PP_DistortionParameterControl_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_PP_DistortionParameterControl_C, DefaultSceneRoot) == 0x000298, "Member 'ABP_PP_DistortionParameterControl_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_PP_DistortionParameterControl_C, DistortionTimeline_0to1_64EAC131498BD3E99CD8C99844349C8F) == 0x0002A0, "Member 'ABP_PP_DistortionParameterControl_C::DistortionTimeline_0to1_64EAC131498BD3E99CD8C99844349C8F' has a wrong offset!");
static_assert(offsetof(ABP_PP_DistortionParameterControl_C, DistortionTimeline__Direction_64EAC131498BD3E99CD8C99844349C8F) == 0x0002A4, "Member 'ABP_PP_DistortionParameterControl_C::DistortionTimeline__Direction_64EAC131498BD3E99CD8C99844349C8F' has a wrong offset!");
static_assert(offsetof(ABP_PP_DistortionParameterControl_C, DistortionTimeline) == 0x0002A8, "Member 'ABP_PP_DistortionParameterControl_C::DistortionTimeline' has a wrong offset!");
static_assert(offsetof(ABP_PP_DistortionParameterControl_C, Distortion) == 0x0002B0, "Member 'ABP_PP_DistortionParameterControl_C::Distortion' has a wrong offset!");
static_assert(offsetof(ABP_PP_DistortionParameterControl_C, Hardness) == 0x0002B8, "Member 'ABP_PP_DistortionParameterControl_C::Hardness' has a wrong offset!");

}

