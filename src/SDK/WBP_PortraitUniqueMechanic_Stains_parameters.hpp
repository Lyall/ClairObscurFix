﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PortraitUniqueMechanic_Stains

#include "Basic.hpp"

#include "EStainChangeReason_structs.hpp"
#include "EAttackType_structs.hpp"


namespace SDK::Params
{

// Function WBP_PortraitUniqueMechanic_Stains.WBP_PortraitUniqueMechanic_Stains_C.ExecuteUbergraph_WBP_PortraitUniqueMechanic_Stains
// 0x0108 (0x0108 - 0x0000)
struct WBP_PortraitUniqueMechanic_Stains_C_ExecuteUbergraph_WBP_PortraitUniqueMechanic_Stains final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EAttackType>                           CallFunc_GetCurrentStainQueue_Stains;              // 0x0008(0x0010)(ReferenceParm)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAttackType                                   CallFunc_Array_Get_Item;                           // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_22[0x2];                                       // 0x0022(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWBP_GenericElement_Stain_C*>    Temp_wildcard_Variable;                            // 0x0028(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UWBP_GenericElement_Stain_C*            CallFunc_Array_Get_Item_1;                         // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EStainChangeReason                            K2Node_CustomEvent_Reason;                         // 0x0045(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46[0x2];                                       // 0x0046(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<EAttackType, int32>                      K2Node_CustomEvent_GainedStains;                   // 0x0048(0x0050)()
	TMap<EAttackType, int32>                      K2Node_CustomEvent_LostStains;                     // 0x0098(0x0050)()
	TArray<class UWBP_GenericElement_Stain_C*>    CallFunc_GetStainWidgets_StainWidgets;             // 0x00E8(0x0010)(ReferenceParm, ContainsInstancedReference)
	TDelegate<void(EStainChangeReason Reason, const TMap<EAttackType, int32>& GainedStains, const TMap<EAttackType, int32>& LostStains)> K2Node_CreateDelegate_OutputDelegate; // 0x00F8(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PortraitUniqueMechanic_Stains_C_ExecuteUbergraph_WBP_PortraitUniqueMechanic_Stains) == 0x000008, "Wrong alignment on WBP_PortraitUniqueMechanic_Stains_C_ExecuteUbergraph_WBP_PortraitUniqueMechanic_Stains");
static_assert(sizeof(WBP_PortraitUniqueMechanic_Stains_C_ExecuteUbergraph_WBP_PortraitUniqueMechanic_Stains) == 0x000108, "Wrong size on WBP_PortraitUniqueMechanic_Stains_C_ExecuteUbergraph_WBP_PortraitUniqueMechanic_Stains");
static_assert(offsetof(WBP_PortraitUniqueMechanic_Stains_C_ExecuteUbergraph_WBP_PortraitUniqueMechanic_Stains, EntryPoint) == 0x000000, "Member 'WBP_PortraitUniqueMechanic_Stains_C_ExecuteUbergraph_WBP_PortraitUniqueMechanic_Stains::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_PortraitUniqueMechanic_Stains_C_ExecuteUbergraph_WBP_PortraitUniqueMechanic_Stains, CallFunc_GetCurrentStainQueue_Stains) == 0x000008, "Member 'WBP_PortraitUniqueMechanic_Stains_C_ExecuteUbergraph_WBP_PortraitUniqueMechanic_Stains::CallFunc_GetCurrentStainQueue_Stains' has a wrong offset!");
static_assert(offsetof(WBP_PortraitUniqueMechanic_Stains_C_ExecuteUbergraph_WBP_PortraitUniqueMechanic_Stains, Temp_int_Array_Index_Variable) == 0x000018, "Member 'WBP_PortraitUniqueMechanic_Stains_C_ExecuteUbergraph_WBP_PortraitUniqueMechanic_Stains::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PortraitUniqueMechanic_Stains_C_ExecuteUbergraph_WBP_PortraitUniqueMechanic_Stains, Temp_int_Loop_Counter_Variable) == 0x00001C, "Member 'WBP_PortraitUniqueMechanic_Stains_C_ExecuteUbergraph_WBP_PortraitUniqueMechanic_Stains::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PortraitUniqueMechanic_Stains_C_ExecuteUbergraph_WBP_PortraitUniqueMechanic_Stains, CallFunc_Array_Get_Item) == 0x000020, "Member 'WBP_PortraitUniqueMechanic_Stains_C_ExecuteUbergraph_WBP_PortraitUniqueMechanic_Stains::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_PortraitUniqueMechanic_Stains_C_ExecuteUbergraph_WBP_PortraitUniqueMechanic_Stains, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000021, "Member 'WBP_PortraitUniqueMechanic_Stains_C_ExecuteUbergraph_WBP_PortraitUniqueMechanic_Stains::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PortraitUniqueMechanic_Stains_C_ExecuteUbergraph_WBP_PortraitUniqueMechanic_Stains, CallFunc_Add_IntInt_ReturnValue) == 0x000024, "Member 'WBP_PortraitUniqueMechanic_Stains_C_ExecuteUbergraph_WBP_PortraitUniqueMechanic_Stains::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PortraitUniqueMechanic_Stains_C_ExecuteUbergraph_WBP_PortraitUniqueMechanic_Stains, Temp_wildcard_Variable) == 0x000028, "Member 'WBP_PortraitUniqueMechanic_Stains_C_ExecuteUbergraph_WBP_PortraitUniqueMechanic_Stains::Temp_wildcard_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PortraitUniqueMechanic_Stains_C_ExecuteUbergraph_WBP_PortraitUniqueMechanic_Stains, CallFunc_Array_Get_Item_1) == 0x000038, "Member 'WBP_PortraitUniqueMechanic_Stains_C_ExecuteUbergraph_WBP_PortraitUniqueMechanic_Stains::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_PortraitUniqueMechanic_Stains_C_ExecuteUbergraph_WBP_PortraitUniqueMechanic_Stains, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'WBP_PortraitUniqueMechanic_Stains_C_ExecuteUbergraph_WBP_PortraitUniqueMechanic_Stains::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PortraitUniqueMechanic_Stains_C_ExecuteUbergraph_WBP_PortraitUniqueMechanic_Stains, CallFunc_Less_IntInt_ReturnValue) == 0x000044, "Member 'WBP_PortraitUniqueMechanic_Stains_C_ExecuteUbergraph_WBP_PortraitUniqueMechanic_Stains::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PortraitUniqueMechanic_Stains_C_ExecuteUbergraph_WBP_PortraitUniqueMechanic_Stains, K2Node_CustomEvent_Reason) == 0x000045, "Member 'WBP_PortraitUniqueMechanic_Stains_C_ExecuteUbergraph_WBP_PortraitUniqueMechanic_Stains::K2Node_CustomEvent_Reason' has a wrong offset!");
static_assert(offsetof(WBP_PortraitUniqueMechanic_Stains_C_ExecuteUbergraph_WBP_PortraitUniqueMechanic_Stains, K2Node_CustomEvent_GainedStains) == 0x000048, "Member 'WBP_PortraitUniqueMechanic_Stains_C_ExecuteUbergraph_WBP_PortraitUniqueMechanic_Stains::K2Node_CustomEvent_GainedStains' has a wrong offset!");
static_assert(offsetof(WBP_PortraitUniqueMechanic_Stains_C_ExecuteUbergraph_WBP_PortraitUniqueMechanic_Stains, K2Node_CustomEvent_LostStains) == 0x000098, "Member 'WBP_PortraitUniqueMechanic_Stains_C_ExecuteUbergraph_WBP_PortraitUniqueMechanic_Stains::K2Node_CustomEvent_LostStains' has a wrong offset!");
static_assert(offsetof(WBP_PortraitUniqueMechanic_Stains_C_ExecuteUbergraph_WBP_PortraitUniqueMechanic_Stains, CallFunc_GetStainWidgets_StainWidgets) == 0x0000E8, "Member 'WBP_PortraitUniqueMechanic_Stains_C_ExecuteUbergraph_WBP_PortraitUniqueMechanic_Stains::CallFunc_GetStainWidgets_StainWidgets' has a wrong offset!");
static_assert(offsetof(WBP_PortraitUniqueMechanic_Stains_C_ExecuteUbergraph_WBP_PortraitUniqueMechanic_Stains, K2Node_CreateDelegate_OutputDelegate) == 0x0000F8, "Member 'WBP_PortraitUniqueMechanic_Stains_C_ExecuteUbergraph_WBP_PortraitUniqueMechanic_Stains::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function WBP_PortraitUniqueMechanic_Stains.WBP_PortraitUniqueMechanic_Stains_C.GetStainWidgets
// 0x0020 (0x0020 - 0x0000)
struct WBP_PortraitUniqueMechanic_Stains_C_GetStainWidgets final
{
public:
	TArray<class UWBP_GenericElement_Stain_C*>    StainWidgets;                                      // 0x0000(0x0010)(Parm, OutParm, ContainsInstancedReference)
	TArray<class UWBP_GenericElement_Stain_C*>    K2Node_MakeArray_Array;                            // 0x0010(0x0010)(ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(WBP_PortraitUniqueMechanic_Stains_C_GetStainWidgets) == 0x000008, "Wrong alignment on WBP_PortraitUniqueMechanic_Stains_C_GetStainWidgets");
static_assert(sizeof(WBP_PortraitUniqueMechanic_Stains_C_GetStainWidgets) == 0x000020, "Wrong size on WBP_PortraitUniqueMechanic_Stains_C_GetStainWidgets");
static_assert(offsetof(WBP_PortraitUniqueMechanic_Stains_C_GetStainWidgets, StainWidgets) == 0x000000, "Member 'WBP_PortraitUniqueMechanic_Stains_C_GetStainWidgets::StainWidgets' has a wrong offset!");
static_assert(offsetof(WBP_PortraitUniqueMechanic_Stains_C_GetStainWidgets, K2Node_MakeArray_Array) == 0x000010, "Member 'WBP_PortraitUniqueMechanic_Stains_C_GetStainWidgets::K2Node_MakeArray_Array' has a wrong offset!");

// Function WBP_PortraitUniqueMechanic_Stains.WBP_PortraitUniqueMechanic_Stains_C.OnNewStainAction
// 0x00A8 (0x00A8 - 0x0000)
struct WBP_PortraitUniqueMechanic_Stains_C_OnNewStainAction final
{
public:
	EStainChangeReason                            Reason;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<EAttackType, int32>                      GainedStains;                                      // 0x0008(0x0050)(BlueprintVisible, BlueprintReadOnly, Parm)
	TMap<EAttackType, int32>                      LostStains;                                        // 0x0058(0x0050)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_PortraitUniqueMechanic_Stains_C_OnNewStainAction) == 0x000008, "Wrong alignment on WBP_PortraitUniqueMechanic_Stains_C_OnNewStainAction");
static_assert(sizeof(WBP_PortraitUniqueMechanic_Stains_C_OnNewStainAction) == 0x0000A8, "Wrong size on WBP_PortraitUniqueMechanic_Stains_C_OnNewStainAction");
static_assert(offsetof(WBP_PortraitUniqueMechanic_Stains_C_OnNewStainAction, Reason) == 0x000000, "Member 'WBP_PortraitUniqueMechanic_Stains_C_OnNewStainAction::Reason' has a wrong offset!");
static_assert(offsetof(WBP_PortraitUniqueMechanic_Stains_C_OnNewStainAction, GainedStains) == 0x000008, "Member 'WBP_PortraitUniqueMechanic_Stains_C_OnNewStainAction::GainedStains' has a wrong offset!");
static_assert(offsetof(WBP_PortraitUniqueMechanic_Stains_C_OnNewStainAction, LostStains) == 0x000058, "Member 'WBP_PortraitUniqueMechanic_Stains_C_OnNewStainAction::LostStains' has a wrong offset!");

}

