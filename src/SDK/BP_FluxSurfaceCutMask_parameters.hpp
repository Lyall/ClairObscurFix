﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FluxSurfaceCutMask

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_FluxSurfaceCutMask.BP_FluxSurfaceCutMask_C.UserConstructionScript
// 0x0050 (0x0050 - 0x0000)
struct BP_FluxSurfaceCutMask_C_UserConstructionScript final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_SetActorRotation_ReturnValue;          // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         CallFunc_GetAllActorsWithInterface_OutActors;      // 0x0010(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_FluxSurface_C>    K2Node_DynamicCast_AsBPI_Flux_Surface;             // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FluxSurfaceCutMask_C_UserConstructionScript) == 0x000008, "Wrong alignment on BP_FluxSurfaceCutMask_C_UserConstructionScript");
static_assert(sizeof(BP_FluxSurfaceCutMask_C_UserConstructionScript) == 0x000050, "Wrong size on BP_FluxSurfaceCutMask_C_UserConstructionScript");
static_assert(offsetof(BP_FluxSurfaceCutMask_C_UserConstructionScript, Temp_int_Variable) == 0x000000, "Member 'BP_FluxSurfaceCutMask_C_UserConstructionScript::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_FluxSurfaceCutMask_C_UserConstructionScript, CallFunc_K2_SetActorRotation_ReturnValue) == 0x000004, "Member 'BP_FluxSurfaceCutMask_C_UserConstructionScript::CallFunc_K2_SetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluxSurfaceCutMask_C_UserConstructionScript, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BP_FluxSurfaceCutMask_C_UserConstructionScript::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluxSurfaceCutMask_C_UserConstructionScript, CallFunc_GetAllActorsWithInterface_OutActors) == 0x000010, "Member 'BP_FluxSurfaceCutMask_C_UserConstructionScript::CallFunc_GetAllActorsWithInterface_OutActors' has a wrong offset!");
static_assert(offsetof(BP_FluxSurfaceCutMask_C_UserConstructionScript, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'BP_FluxSurfaceCutMask_C_UserConstructionScript::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluxSurfaceCutMask_C_UserConstructionScript, CallFunc_Array_Get_Item) == 0x000028, "Member 'BP_FluxSurfaceCutMask_C_UserConstructionScript::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_FluxSurfaceCutMask_C_UserConstructionScript, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'BP_FluxSurfaceCutMask_C_UserConstructionScript::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluxSurfaceCutMask_C_UserConstructionScript, K2Node_DynamicCast_AsBPI_Flux_Surface) == 0x000038, "Member 'BP_FluxSurfaceCutMask_C_UserConstructionScript::K2Node_DynamicCast_AsBPI_Flux_Surface' has a wrong offset!");
static_assert(offsetof(BP_FluxSurfaceCutMask_C_UserConstructionScript, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'BP_FluxSurfaceCutMask_C_UserConstructionScript::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

