﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FluxDataAudioComponent

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Niagara_structs.hpp"


namespace SDK::Params
{

// Function BP_FluxDataAudioComponent.BP_FluxDataAudioComponent_C.UpdateSource
// 0x0258 (0x0258 - 0x0000)
struct BP_FluxDataAudioComponent_C_UpdateSource final
{
public:
	struct FVector                                Location;                                          // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Velocity;                                          // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Index_0;                                           // 0x0020(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Distance;                                          // 0x0028(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                LocationNew;                                       // 0x0030(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                LocationPrev;                                      // 0x0048(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Difference;                                        // 0x0060(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        SourceComponent;                                   // 0x0078(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_VSize_ReturnValue;                        // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0090(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A9[0x7];                                       // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Lerp_ReturnValue;                         // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_IntFloat_ReturnValue;            // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_IntFloat_ReturnValue_1;          // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_CC[0x4];                                       // 0x00CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Conv_IntToDouble_ReturnValue;             // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue;                       // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x00F0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_109[0x7];                                      // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAudioComponent*                        CallFunc_SpawnSoundAtLocation_ReturnValue;         // 0x0110(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_VLerp_ReturnValue;                        // 0x0118(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetWorldLocation_SweepHitResult;       // 0x0130(0x00F8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	double                                        CallFunc_FClamp_ReturnValue_1;                     // 0x0228(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0230(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Lerp_ReturnValue_1;                       // 0x0238(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VLerp_Alpha_ImplicitCast;                 // 0x0240(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_244[0x4];                                      // 0x0244(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Lerp_A_ImplicitCast;                      // 0x0248(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetVolumeMultiplier_NewVolumeMultiplier_ImplicitCast; // 0x0250(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FluxDataAudioComponent_C_UpdateSource) == 0x000008, "Wrong alignment on BP_FluxDataAudioComponent_C_UpdateSource");
static_assert(sizeof(BP_FluxDataAudioComponent_C_UpdateSource) == 0x000258, "Wrong size on BP_FluxDataAudioComponent_C_UpdateSource");
static_assert(offsetof(BP_FluxDataAudioComponent_C_UpdateSource, Location) == 0x000000, "Member 'BP_FluxDataAudioComponent_C_UpdateSource::Location' has a wrong offset!");
static_assert(offsetof(BP_FluxDataAudioComponent_C_UpdateSource, Velocity) == 0x000018, "Member 'BP_FluxDataAudioComponent_C_UpdateSource::Velocity' has a wrong offset!");
static_assert(offsetof(BP_FluxDataAudioComponent_C_UpdateSource, Index_0) == 0x000020, "Member 'BP_FluxDataAudioComponent_C_UpdateSource::Index_0' has a wrong offset!");
static_assert(offsetof(BP_FluxDataAudioComponent_C_UpdateSource, Distance) == 0x000028, "Member 'BP_FluxDataAudioComponent_C_UpdateSource::Distance' has a wrong offset!");
static_assert(offsetof(BP_FluxDataAudioComponent_C_UpdateSource, LocationNew) == 0x000030, "Member 'BP_FluxDataAudioComponent_C_UpdateSource::LocationNew' has a wrong offset!");
static_assert(offsetof(BP_FluxDataAudioComponent_C_UpdateSource, LocationPrev) == 0x000048, "Member 'BP_FluxDataAudioComponent_C_UpdateSource::LocationPrev' has a wrong offset!");
static_assert(offsetof(BP_FluxDataAudioComponent_C_UpdateSource, Difference) == 0x000060, "Member 'BP_FluxDataAudioComponent_C_UpdateSource::Difference' has a wrong offset!");
static_assert(offsetof(BP_FluxDataAudioComponent_C_UpdateSource, SourceComponent) == 0x000078, "Member 'BP_FluxDataAudioComponent_C_UpdateSource::SourceComponent' has a wrong offset!");
static_assert(offsetof(BP_FluxDataAudioComponent_C_UpdateSource, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000080, "Member 'BP_FluxDataAudioComponent_C_UpdateSource::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluxDataAudioComponent_C_UpdateSource, CallFunc_VSize_ReturnValue) == 0x000088, "Member 'BP_FluxDataAudioComponent_C_UpdateSource::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluxDataAudioComponent_C_UpdateSource, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000090, "Member 'BP_FluxDataAudioComponent_C_UpdateSource::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluxDataAudioComponent_C_UpdateSource, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x0000A8, "Member 'BP_FluxDataAudioComponent_C_UpdateSource::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluxDataAudioComponent_C_UpdateSource, CallFunc_Lerp_ReturnValue) == 0x0000B0, "Member 'BP_FluxDataAudioComponent_C_UpdateSource::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluxDataAudioComponent_C_UpdateSource, CallFunc_Multiply_IntFloat_ReturnValue) == 0x0000B8, "Member 'BP_FluxDataAudioComponent_C_UpdateSource::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluxDataAudioComponent_C_UpdateSource, CallFunc_Multiply_IntFloat_ReturnValue_1) == 0x0000C0, "Member 'BP_FluxDataAudioComponent_C_UpdateSource::CallFunc_Multiply_IntFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FluxDataAudioComponent_C_UpdateSource, CallFunc_Multiply_IntInt_ReturnValue) == 0x0000C8, "Member 'BP_FluxDataAudioComponent_C_UpdateSource::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluxDataAudioComponent_C_UpdateSource, CallFunc_Add_DoubleDouble_ReturnValue) == 0x0000D0, "Member 'BP_FluxDataAudioComponent_C_UpdateSource::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluxDataAudioComponent_C_UpdateSource, CallFunc_Conv_IntToDouble_ReturnValue) == 0x0000D8, "Member 'BP_FluxDataAudioComponent_C_UpdateSource::CallFunc_Conv_IntToDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluxDataAudioComponent_C_UpdateSource, CallFunc_FClamp_ReturnValue) == 0x0000E0, "Member 'BP_FluxDataAudioComponent_C_UpdateSource::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluxDataAudioComponent_C_UpdateSource, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x0000E8, "Member 'BP_FluxDataAudioComponent_C_UpdateSource::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluxDataAudioComponent_C_UpdateSource, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x0000F0, "Member 'BP_FluxDataAudioComponent_C_UpdateSource::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluxDataAudioComponent_C_UpdateSource, CallFunc_IsValid_ReturnValue) == 0x000108, "Member 'BP_FluxDataAudioComponent_C_UpdateSource::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluxDataAudioComponent_C_UpdateSource, CallFunc_SpawnSoundAtLocation_ReturnValue) == 0x000110, "Member 'BP_FluxDataAudioComponent_C_UpdateSource::CallFunc_SpawnSoundAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluxDataAudioComponent_C_UpdateSource, CallFunc_VLerp_ReturnValue) == 0x000118, "Member 'BP_FluxDataAudioComponent_C_UpdateSource::CallFunc_VLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluxDataAudioComponent_C_UpdateSource, CallFunc_K2_SetWorldLocation_SweepHitResult) == 0x000130, "Member 'BP_FluxDataAudioComponent_C_UpdateSource::CallFunc_K2_SetWorldLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_FluxDataAudioComponent_C_UpdateSource, CallFunc_FClamp_ReturnValue_1) == 0x000228, "Member 'BP_FluxDataAudioComponent_C_UpdateSource::CallFunc_FClamp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FluxDataAudioComponent_C_UpdateSource, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000230, "Member 'BP_FluxDataAudioComponent_C_UpdateSource::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluxDataAudioComponent_C_UpdateSource, CallFunc_Lerp_ReturnValue_1) == 0x000238, "Member 'BP_FluxDataAudioComponent_C_UpdateSource::CallFunc_Lerp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FluxDataAudioComponent_C_UpdateSource, CallFunc_VLerp_Alpha_ImplicitCast) == 0x000240, "Member 'BP_FluxDataAudioComponent_C_UpdateSource::CallFunc_VLerp_Alpha_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_FluxDataAudioComponent_C_UpdateSource, CallFunc_Lerp_A_ImplicitCast) == 0x000248, "Member 'BP_FluxDataAudioComponent_C_UpdateSource::CallFunc_Lerp_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_FluxDataAudioComponent_C_UpdateSource, CallFunc_SetVolumeMultiplier_NewVolumeMultiplier_ImplicitCast) == 0x000250, "Member 'BP_FluxDataAudioComponent_C_UpdateSource::CallFunc_SetVolumeMultiplier_NewVolumeMultiplier_ImplicitCast' has a wrong offset!");

// Function BP_FluxDataAudioComponent.BP_FluxDataAudioComponent_C.SetFluidDistance
// 0x0010 (0x0010 - 0x0000)
struct BP_FluxDataAudioComponent_C_SetFluidDistance final
{
public:
	double                                        CameraNearSurface;                                 // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SetFloatParameter_InFloat_ImplicitCast;   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FluxDataAudioComponent_C_SetFluidDistance) == 0x000008, "Wrong alignment on BP_FluxDataAudioComponent_C_SetFluidDistance");
static_assert(sizeof(BP_FluxDataAudioComponent_C_SetFluidDistance) == 0x000010, "Wrong size on BP_FluxDataAudioComponent_C_SetFluidDistance");
static_assert(offsetof(BP_FluxDataAudioComponent_C_SetFluidDistance, CameraNearSurface) == 0x000000, "Member 'BP_FluxDataAudioComponent_C_SetFluidDistance::CameraNearSurface' has a wrong offset!");
static_assert(offsetof(BP_FluxDataAudioComponent_C_SetFluidDistance, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'BP_FluxDataAudioComponent_C_SetFluidDistance::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluxDataAudioComponent_C_SetFluidDistance, CallFunc_SetFloatParameter_InFloat_ImplicitCast) == 0x00000C, "Member 'BP_FluxDataAudioComponent_C_SetFluidDistance::CallFunc_SetFloatParameter_InFloat_ImplicitCast' has a wrong offset!");

// Function BP_FluxDataAudioComponent.BP_FluxDataAudioComponent_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_FluxDataAudioComponent_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FluxDataAudioComponent_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_FluxDataAudioComponent_C_ReceiveTick");
static_assert(sizeof(BP_FluxDataAudioComponent_C_ReceiveTick) == 0x000004, "Wrong size on BP_FluxDataAudioComponent_C_ReceiveTick");
static_assert(offsetof(BP_FluxDataAudioComponent_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_FluxDataAudioComponent_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_FluxDataAudioComponent.BP_FluxDataAudioComponent_C.ReceiveParticleData
// 0x0030 (0x0030 - 0x0000)
struct BP_FluxDataAudioComponent_C_ReceiveParticleData final
{
public:
	TArray<struct FBasicParticleData>             Data;                                              // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UNiagaraSystem*                         NiagaraSystem;                                     // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                SimulationPositionOffset;                          // 0x0018(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FluxDataAudioComponent_C_ReceiveParticleData) == 0x000008, "Wrong alignment on BP_FluxDataAudioComponent_C_ReceiveParticleData");
static_assert(sizeof(BP_FluxDataAudioComponent_C_ReceiveParticleData) == 0x000030, "Wrong size on BP_FluxDataAudioComponent_C_ReceiveParticleData");
static_assert(offsetof(BP_FluxDataAudioComponent_C_ReceiveParticleData, Data) == 0x000000, "Member 'BP_FluxDataAudioComponent_C_ReceiveParticleData::Data' has a wrong offset!");
static_assert(offsetof(BP_FluxDataAudioComponent_C_ReceiveParticleData, NiagaraSystem) == 0x000010, "Member 'BP_FluxDataAudioComponent_C_ReceiveParticleData::NiagaraSystem' has a wrong offset!");
static_assert(offsetof(BP_FluxDataAudioComponent_C_ReceiveParticleData, SimulationPositionOffset) == 0x000018, "Member 'BP_FluxDataAudioComponent_C_ReceiveParticleData::SimulationPositionOffset' has a wrong offset!");

// Function BP_FluxDataAudioComponent.BP_FluxDataAudioComponent_C.ExecuteUbergraph_BP_FluxDataAudioComponent
// 0x00C8 (0x00C8 - 0x0000)
struct BP_FluxDataAudioComponent_C_ExecuteUbergraph_BP_FluxDataAudioComponent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FVector>                        K2Node_MakeArray_Array;                            // 0x0008(0x0010)(ReferenceParm)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FBasicParticleData>             K2Node_Event_Data;                                 // 0x0020(0x0010)(ConstParm, ReferenceParm)
	class UNiagaraSystem*                         K2Node_Event_NiagaraSystem;                        // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_Event_SimulationPositionOffset;             // 0x0038(0x0018)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FBasicParticleData                     CallFunc_Array_Get_Item;                           // 0x0058(0x0038)(NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_94[0x4];                                       // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_BreakVector_X;                            // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B9[0x3];                                       // 0x00B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_UpdateSource_Velocity_ImplicitCast;       // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FluxDataAudioComponent_C_ExecuteUbergraph_BP_FluxDataAudioComponent) == 0x000008, "Wrong alignment on BP_FluxDataAudioComponent_C_ExecuteUbergraph_BP_FluxDataAudioComponent");
static_assert(sizeof(BP_FluxDataAudioComponent_C_ExecuteUbergraph_BP_FluxDataAudioComponent) == 0x0000C8, "Wrong size on BP_FluxDataAudioComponent_C_ExecuteUbergraph_BP_FluxDataAudioComponent");
static_assert(offsetof(BP_FluxDataAudioComponent_C_ExecuteUbergraph_BP_FluxDataAudioComponent, EntryPoint) == 0x000000, "Member 'BP_FluxDataAudioComponent_C_ExecuteUbergraph_BP_FluxDataAudioComponent::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_FluxDataAudioComponent_C_ExecuteUbergraph_BP_FluxDataAudioComponent, K2Node_MakeArray_Array) == 0x000008, "Member 'BP_FluxDataAudioComponent_C_ExecuteUbergraph_BP_FluxDataAudioComponent::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_FluxDataAudioComponent_C_ExecuteUbergraph_BP_FluxDataAudioComponent, Temp_int_Array_Index_Variable) == 0x000018, "Member 'BP_FluxDataAudioComponent_C_ExecuteUbergraph_BP_FluxDataAudioComponent::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_FluxDataAudioComponent_C_ExecuteUbergraph_BP_FluxDataAudioComponent, K2Node_Event_Data) == 0x000020, "Member 'BP_FluxDataAudioComponent_C_ExecuteUbergraph_BP_FluxDataAudioComponent::K2Node_Event_Data' has a wrong offset!");
static_assert(offsetof(BP_FluxDataAudioComponent_C_ExecuteUbergraph_BP_FluxDataAudioComponent, K2Node_Event_NiagaraSystem) == 0x000030, "Member 'BP_FluxDataAudioComponent_C_ExecuteUbergraph_BP_FluxDataAudioComponent::K2Node_Event_NiagaraSystem' has a wrong offset!");
static_assert(offsetof(BP_FluxDataAudioComponent_C_ExecuteUbergraph_BP_FluxDataAudioComponent, K2Node_Event_SimulationPositionOffset) == 0x000038, "Member 'BP_FluxDataAudioComponent_C_ExecuteUbergraph_BP_FluxDataAudioComponent::K2Node_Event_SimulationPositionOffset' has a wrong offset!");
static_assert(offsetof(BP_FluxDataAudioComponent_C_ExecuteUbergraph_BP_FluxDataAudioComponent, K2Node_Event_DeltaSeconds) == 0x000050, "Member 'BP_FluxDataAudioComponent_C_ExecuteUbergraph_BP_FluxDataAudioComponent::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_FluxDataAudioComponent_C_ExecuteUbergraph_BP_FluxDataAudioComponent, CallFunc_Array_Get_Item) == 0x000058, "Member 'BP_FluxDataAudioComponent_C_ExecuteUbergraph_BP_FluxDataAudioComponent::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_FluxDataAudioComponent_C_ExecuteUbergraph_BP_FluxDataAudioComponent, CallFunc_Array_Length_ReturnValue) == 0x000090, "Member 'BP_FluxDataAudioComponent_C_ExecuteUbergraph_BP_FluxDataAudioComponent::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluxDataAudioComponent_C_ExecuteUbergraph_BP_FluxDataAudioComponent, CallFunc_BreakVector_X) == 0x000098, "Member 'BP_FluxDataAudioComponent_C_ExecuteUbergraph_BP_FluxDataAudioComponent::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_FluxDataAudioComponent_C_ExecuteUbergraph_BP_FluxDataAudioComponent, CallFunc_BreakVector_Y) == 0x0000A0, "Member 'BP_FluxDataAudioComponent_C_ExecuteUbergraph_BP_FluxDataAudioComponent::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_FluxDataAudioComponent_C_ExecuteUbergraph_BP_FluxDataAudioComponent, CallFunc_BreakVector_Z) == 0x0000A8, "Member 'BP_FluxDataAudioComponent_C_ExecuteUbergraph_BP_FluxDataAudioComponent::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_FluxDataAudioComponent_C_ExecuteUbergraph_BP_FluxDataAudioComponent, Temp_int_Loop_Counter_Variable) == 0x0000B0, "Member 'BP_FluxDataAudioComponent_C_ExecuteUbergraph_BP_FluxDataAudioComponent::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_FluxDataAudioComponent_C_ExecuteUbergraph_BP_FluxDataAudioComponent, CallFunc_FTrunc_ReturnValue) == 0x0000B4, "Member 'BP_FluxDataAudioComponent_C_ExecuteUbergraph_BP_FluxDataAudioComponent::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluxDataAudioComponent_C_ExecuteUbergraph_BP_FluxDataAudioComponent, CallFunc_Less_IntInt_ReturnValue) == 0x0000B8, "Member 'BP_FluxDataAudioComponent_C_ExecuteUbergraph_BP_FluxDataAudioComponent::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluxDataAudioComponent_C_ExecuteUbergraph_BP_FluxDataAudioComponent, CallFunc_Add_IntInt_ReturnValue) == 0x0000BC, "Member 'BP_FluxDataAudioComponent_C_ExecuteUbergraph_BP_FluxDataAudioComponent::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluxDataAudioComponent_C_ExecuteUbergraph_BP_FluxDataAudioComponent, CallFunc_UpdateSource_Velocity_ImplicitCast) == 0x0000C0, "Member 'BP_FluxDataAudioComponent_C_ExecuteUbergraph_BP_FluxDataAudioComponent::CallFunc_UpdateSource_Velocity_ImplicitCast' has a wrong offset!");

// Function BP_FluxDataAudioComponent.BP_FluxDataAudioComponent_C.DrawDebugSource
// 0x0070 (0x0070 - 0x0000)
struct BP_FluxDataAudioComponent_C_DrawDebugSource final
{
public:
	class UAudioComponent*                        SourceComponent;                                   // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0010(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FColor                                 K2Node_MakeStruct_Color;                           // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FColor                                 K2Node_MakeStruct_Color_1;                         // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FColor                                 K2Node_MakeStruct_Color_2;                         // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FColor                                 K2Node_MakeStruct_Color_3;                         // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FColor                                 K2Node_Select_Default;                             // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_Conv_ColorToLinearColor_ReturnValue;      // 0x0050(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_DrawDebugSphere_Radius_ImplicitCast;      // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FluxDataAudioComponent_C_DrawDebugSource) == 0x000008, "Wrong alignment on BP_FluxDataAudioComponent_C_DrawDebugSource");
static_assert(sizeof(BP_FluxDataAudioComponent_C_DrawDebugSource) == 0x000070, "Wrong size on BP_FluxDataAudioComponent_C_DrawDebugSource");
static_assert(offsetof(BP_FluxDataAudioComponent_C_DrawDebugSource, SourceComponent) == 0x000000, "Member 'BP_FluxDataAudioComponent_C_DrawDebugSource::SourceComponent' has a wrong offset!");
static_assert(offsetof(BP_FluxDataAudioComponent_C_DrawDebugSource, Temp_int_Variable) == 0x000008, "Member 'BP_FluxDataAudioComponent_C_DrawDebugSource::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_FluxDataAudioComponent_C_DrawDebugSource, CallFunc_IsValid_ReturnValue) == 0x00000C, "Member 'BP_FluxDataAudioComponent_C_DrawDebugSource::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluxDataAudioComponent_C_DrawDebugSource, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000010, "Member 'BP_FluxDataAudioComponent_C_DrawDebugSource::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluxDataAudioComponent_C_DrawDebugSource, K2Node_MakeStruct_Color) == 0x000028, "Member 'BP_FluxDataAudioComponent_C_DrawDebugSource::K2Node_MakeStruct_Color' has a wrong offset!");
static_assert(offsetof(BP_FluxDataAudioComponent_C_DrawDebugSource, K2Node_MakeStruct_Color_1) == 0x00002C, "Member 'BP_FluxDataAudioComponent_C_DrawDebugSource::K2Node_MakeStruct_Color_1' has a wrong offset!");
static_assert(offsetof(BP_FluxDataAudioComponent_C_DrawDebugSource, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000030, "Member 'BP_FluxDataAudioComponent_C_DrawDebugSource::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluxDataAudioComponent_C_DrawDebugSource, K2Node_MakeStruct_Color_2) == 0x000038, "Member 'BP_FluxDataAudioComponent_C_DrawDebugSource::K2Node_MakeStruct_Color_2' has a wrong offset!");
static_assert(offsetof(BP_FluxDataAudioComponent_C_DrawDebugSource, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000040, "Member 'BP_FluxDataAudioComponent_C_DrawDebugSource::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluxDataAudioComponent_C_DrawDebugSource, K2Node_MakeStruct_Color_3) == 0x000048, "Member 'BP_FluxDataAudioComponent_C_DrawDebugSource::K2Node_MakeStruct_Color_3' has a wrong offset!");
static_assert(offsetof(BP_FluxDataAudioComponent_C_DrawDebugSource, K2Node_Select_Default) == 0x00004C, "Member 'BP_FluxDataAudioComponent_C_DrawDebugSource::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_FluxDataAudioComponent_C_DrawDebugSource, CallFunc_Conv_ColorToLinearColor_ReturnValue) == 0x000050, "Member 'BP_FluxDataAudioComponent_C_DrawDebugSource::CallFunc_Conv_ColorToLinearColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluxDataAudioComponent_C_DrawDebugSource, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x000060, "Member 'BP_FluxDataAudioComponent_C_DrawDebugSource::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_FluxDataAudioComponent_C_DrawDebugSource, CallFunc_DrawDebugSphere_Radius_ImplicitCast) == 0x000068, "Member 'BP_FluxDataAudioComponent_C_DrawDebugSource::CallFunc_DrawDebugSphere_Radius_ImplicitCast' has a wrong offset!");

// Function BP_FluxDataAudioComponent.BP_FluxDataAudioComponent_C.ApplyNiagaraParameters
// 0x0018 (0x0018 - 0x0000)
struct BP_FluxDataAudioComponent_C_ApplyNiagaraParameters final
{
public:
	double                                        CallFunc_Conv_IntToDouble_ReturnValue;             // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetFloatParameter_Param_ImplicitCast;     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FluxDataAudioComponent_C_ApplyNiagaraParameters) == 0x000008, "Wrong alignment on BP_FluxDataAudioComponent_C_ApplyNiagaraParameters");
static_assert(sizeof(BP_FluxDataAudioComponent_C_ApplyNiagaraParameters) == 0x000018, "Wrong size on BP_FluxDataAudioComponent_C_ApplyNiagaraParameters");
static_assert(offsetof(BP_FluxDataAudioComponent_C_ApplyNiagaraParameters, CallFunc_Conv_IntToDouble_ReturnValue) == 0x000000, "Member 'BP_FluxDataAudioComponent_C_ApplyNiagaraParameters::CallFunc_Conv_IntToDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluxDataAudioComponent_C_ApplyNiagaraParameters, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000008, "Member 'BP_FluxDataAudioComponent_C_ApplyNiagaraParameters::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluxDataAudioComponent_C_ApplyNiagaraParameters, CallFunc_SetFloatParameter_Param_ImplicitCast) == 0x000010, "Member 'BP_FluxDataAudioComponent_C_ApplyNiagaraParameters::CallFunc_SetFloatParameter_Param_ImplicitCast' has a wrong offset!");

}

