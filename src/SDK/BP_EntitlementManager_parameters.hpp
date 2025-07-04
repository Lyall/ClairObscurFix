﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EntitlementManager

#include "Basic.hpp"

#include "S_EntitlementData_structs.hpp"
#include "S_EntitlementSaveData_structs.hpp"


namespace SDK::Params
{

// Function BP_EntitlementManager.BP_EntitlementManager_C.HasAnyEntitlement
// 0x0028 (0x0028 - 0x0000)
struct BP_EntitlementManager_C_HasAnyEntitlement final
{
public:
	TArray<class FName>                           Entitlements;                                      // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetBoolCVar_ReturnValue;                  // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_12[0x6];                                       // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPlatformsSubsystem*                    CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAnyEntitlement_ReturnValue;            // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPackagedForDistribution_ReturnValue;    // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EntitlementManager_C_HasAnyEntitlement) == 0x000008, "Wrong alignment on BP_EntitlementManager_C_HasAnyEntitlement");
static_assert(sizeof(BP_EntitlementManager_C_HasAnyEntitlement) == 0x000028, "Wrong size on BP_EntitlementManager_C_HasAnyEntitlement");
static_assert(offsetof(BP_EntitlementManager_C_HasAnyEntitlement, Entitlements) == 0x000000, "Member 'BP_EntitlementManager_C_HasAnyEntitlement::Entitlements' has a wrong offset!");
static_assert(offsetof(BP_EntitlementManager_C_HasAnyEntitlement, ReturnValue) == 0x000010, "Member 'BP_EntitlementManager_C_HasAnyEntitlement::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EntitlementManager_C_HasAnyEntitlement, CallFunc_GetBoolCVar_ReturnValue) == 0x000011, "Member 'BP_EntitlementManager_C_HasAnyEntitlement::CallFunc_GetBoolCVar_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EntitlementManager_C_HasAnyEntitlement, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x000018, "Member 'BP_EntitlementManager_C_HasAnyEntitlement::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EntitlementManager_C_HasAnyEntitlement, CallFunc_HasAnyEntitlement_ReturnValue) == 0x000020, "Member 'BP_EntitlementManager_C_HasAnyEntitlement::CallFunc_HasAnyEntitlement_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EntitlementManager_C_HasAnyEntitlement, CallFunc_IsPackagedForDistribution_ReturnValue) == 0x000021, "Member 'BP_EntitlementManager_C_HasAnyEntitlement::CallFunc_IsPackagedForDistribution_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EntitlementManager_C_HasAnyEntitlement, CallFunc_Not_PreBool_ReturnValue) == 0x000022, "Member 'BP_EntitlementManager_C_HasAnyEntitlement::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function BP_EntitlementManager.BP_EntitlementManager_C.LoadState
// 0x0010 (0x0010 - 0x0000)
struct BP_EntitlementManager_C_LoadState final
{
public:
	struct FS_EntitlementSaveData                 EntitlementData;                                   // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};
static_assert(alignof(BP_EntitlementManager_C_LoadState) == 0x000008, "Wrong alignment on BP_EntitlementManager_C_LoadState");
static_assert(sizeof(BP_EntitlementManager_C_LoadState) == 0x000010, "Wrong size on BP_EntitlementManager_C_LoadState");
static_assert(offsetof(BP_EntitlementManager_C_LoadState, EntitlementData) == 0x000000, "Member 'BP_EntitlementManager_C_LoadState::EntitlementData' has a wrong offset!");

// Function BP_EntitlementManager.BP_EntitlementManager_C.OnEntitlementDetected
// 0x0030 (0x0030 - 0x0000)
struct BP_EntitlementManager_C_OnEntitlementDetected final
{
public:
	class FName                                   EntitlementID;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_EntitlementDataUpdaterBase_C*       EntitlementDataUpdater;                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_jRPG_GI_Custom_C*                   CallFunc_GetCustomGI_ReturnValue;                  // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EntitlementManager_C_OnEntitlementDetected) == 0x000008, "Wrong alignment on BP_EntitlementManager_C_OnEntitlementDetected");
static_assert(sizeof(BP_EntitlementManager_C_OnEntitlementDetected) == 0x000030, "Wrong size on BP_EntitlementManager_C_OnEntitlementDetected");
static_assert(offsetof(BP_EntitlementManager_C_OnEntitlementDetected, EntitlementID) == 0x000000, "Member 'BP_EntitlementManager_C_OnEntitlementDetected::EntitlementID' has a wrong offset!");
static_assert(offsetof(BP_EntitlementManager_C_OnEntitlementDetected, EntitlementDataUpdater) == 0x000008, "Member 'BP_EntitlementManager_C_OnEntitlementDetected::EntitlementDataUpdater' has a wrong offset!");
static_assert(offsetof(BP_EntitlementManager_C_OnEntitlementDetected, CallFunc_GetCustomGI_ReturnValue) == 0x000010, "Member 'BP_EntitlementManager_C_OnEntitlementDetected::CallFunc_GetCustomGI_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EntitlementManager_C_OnEntitlementDetected, CallFunc_Array_Add_ReturnValue) == 0x000018, "Member 'BP_EntitlementManager_C_OnEntitlementDetected::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EntitlementManager_C_OnEntitlementDetected, CallFunc_GetPlayerController_ReturnValue) == 0x000020, "Member 'BP_EntitlementManager_C_OnEntitlementDetected::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EntitlementManager_C_OnEntitlementDetected, CallFunc_Array_Contains_ReturnValue) == 0x000028, "Member 'BP_EntitlementManager_C_OnEntitlementDetected::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EntitlementManager_C_OnEntitlementDetected, CallFunc_Not_PreBool_ReturnValue) == 0x000029, "Member 'BP_EntitlementManager_C_OnEntitlementDetected::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function BP_EntitlementManager.BP_EntitlementManager_C.OnEntitlementUndetected
// 0x0030 (0x0030 - 0x0000)
struct BP_EntitlementManager_C_OnEntitlementUndetected final
{
public:
	class FName                                   EntitlementID;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_EntitlementDataUpdaterBase_C*       EntitlementDataUpdater;                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_jRPG_GI_Custom_C*                   CallFunc_GetCustomGI_ReturnValue;                  // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EntitlementManager_C_OnEntitlementUndetected) == 0x000008, "Wrong alignment on BP_EntitlementManager_C_OnEntitlementUndetected");
static_assert(sizeof(BP_EntitlementManager_C_OnEntitlementUndetected) == 0x000030, "Wrong size on BP_EntitlementManager_C_OnEntitlementUndetected");
static_assert(offsetof(BP_EntitlementManager_C_OnEntitlementUndetected, EntitlementID) == 0x000000, "Member 'BP_EntitlementManager_C_OnEntitlementUndetected::EntitlementID' has a wrong offset!");
static_assert(offsetof(BP_EntitlementManager_C_OnEntitlementUndetected, EntitlementDataUpdater) == 0x000008, "Member 'BP_EntitlementManager_C_OnEntitlementUndetected::EntitlementDataUpdater' has a wrong offset!");
static_assert(offsetof(BP_EntitlementManager_C_OnEntitlementUndetected, CallFunc_GetPlayerController_ReturnValue) == 0x000010, "Member 'BP_EntitlementManager_C_OnEntitlementUndetected::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EntitlementManager_C_OnEntitlementUndetected, CallFunc_Array_RemoveItem_ReturnValue) == 0x000018, "Member 'BP_EntitlementManager_C_OnEntitlementUndetected::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EntitlementManager_C_OnEntitlementUndetected, CallFunc_GetCustomGI_ReturnValue) == 0x000020, "Member 'BP_EntitlementManager_C_OnEntitlementUndetected::CallFunc_GetCustomGI_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EntitlementManager_C_OnEntitlementUndetected, CallFunc_Array_Contains_ReturnValue) == 0x000028, "Member 'BP_EntitlementManager_C_OnEntitlementUndetected::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");

// Function BP_EntitlementManager.BP_EntitlementManager_C.RetrieveAllIDsForEntitlement
// 0x0060 (0x0060 - 0x0000)
struct BP_EntitlementManager_C_RetrieveAllIDsForEntitlement final
{
public:
	struct FS_EntitlementData                     EntitlementData;                                   // 0x0000(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	TArray<class FName>                           ReturnValue;                                       // 0x0030(0x0010)(Parm, OutParm, ReturnParm)
	TArray<class FName>                           local_IDs;                                         // 0x0040(0x0010)(Edit, BlueprintVisible)
	TArray<class FName>                           K2Node_MakeArray_Array;                            // 0x0050(0x0010)(ReferenceParm)
};
static_assert(alignof(BP_EntitlementManager_C_RetrieveAllIDsForEntitlement) == 0x000008, "Wrong alignment on BP_EntitlementManager_C_RetrieveAllIDsForEntitlement");
static_assert(sizeof(BP_EntitlementManager_C_RetrieveAllIDsForEntitlement) == 0x000060, "Wrong size on BP_EntitlementManager_C_RetrieveAllIDsForEntitlement");
static_assert(offsetof(BP_EntitlementManager_C_RetrieveAllIDsForEntitlement, EntitlementData) == 0x000000, "Member 'BP_EntitlementManager_C_RetrieveAllIDsForEntitlement::EntitlementData' has a wrong offset!");
static_assert(offsetof(BP_EntitlementManager_C_RetrieveAllIDsForEntitlement, ReturnValue) == 0x000030, "Member 'BP_EntitlementManager_C_RetrieveAllIDsForEntitlement::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EntitlementManager_C_RetrieveAllIDsForEntitlement, local_IDs) == 0x000040, "Member 'BP_EntitlementManager_C_RetrieveAllIDsForEntitlement::local_IDs' has a wrong offset!");
static_assert(offsetof(BP_EntitlementManager_C_RetrieveAllIDsForEntitlement, K2Node_MakeArray_Array) == 0x000050, "Member 'BP_EntitlementManager_C_RetrieveAllIDsForEntitlement::K2Node_MakeArray_Array' has a wrong offset!");

// Function BP_EntitlementManager.BP_EntitlementManager_C.SaveState
// 0x0010 (0x0010 - 0x0000)
struct BP_EntitlementManager_C_SaveState final
{
public:
	struct FS_EntitlementSaveData                 EntitlementData;                                   // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};
static_assert(alignof(BP_EntitlementManager_C_SaveState) == 0x000008, "Wrong alignment on BP_EntitlementManager_C_SaveState");
static_assert(sizeof(BP_EntitlementManager_C_SaveState) == 0x000010, "Wrong size on BP_EntitlementManager_C_SaveState");
static_assert(offsetof(BP_EntitlementManager_C_SaveState, EntitlementData) == 0x000000, "Member 'BP_EntitlementManager_C_SaveState::EntitlementData' has a wrong offset!");

// Function BP_EntitlementManager.BP_EntitlementManager_C.UpdateEntitlementData
// 0x00B8 (0x00B8 - 0x0000)
struct BP_EntitlementManager_C_UpdateEntitlementData final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FS_EntitlementData                     Temp_wildcard_Variable;                            // 0x0008(0x0030)(HasGetValueTypeHash)
	TArray<class FName>                           CallFunc_RetrieveAllIDsForEntitlement_ReturnValue; // 0x0038(0x0010)(ReferenceParm)
	bool                                          CallFunc_HasAnyEntitlement_ReturnValue;            // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_jRPG_GI_Custom_C*                   CallFunc_GetCustomGI_ReturnValue;                  // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetIsSaveLoaded_ReturnNode;               // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5D[0x3];                                       // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x0068(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x007C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_85[0x3];                                       // 0x0085(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FS_EntitlementData                     CallFunc_GetDataTableRowFromName_OutRow;           // 0x0088(0x0030)(HasGetValueTypeHash)
};
static_assert(alignof(BP_EntitlementManager_C_UpdateEntitlementData) == 0x000008, "Wrong alignment on BP_EntitlementManager_C_UpdateEntitlementData");
static_assert(sizeof(BP_EntitlementManager_C_UpdateEntitlementData) == 0x0000B8, "Wrong size on BP_EntitlementManager_C_UpdateEntitlementData");
static_assert(offsetof(BP_EntitlementManager_C_UpdateEntitlementData, Temp_int_Array_Index_Variable) == 0x000000, "Member 'BP_EntitlementManager_C_UpdateEntitlementData::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_EntitlementManager_C_UpdateEntitlementData, Temp_wildcard_Variable) == 0x000008, "Member 'BP_EntitlementManager_C_UpdateEntitlementData::Temp_wildcard_Variable' has a wrong offset!");
static_assert(offsetof(BP_EntitlementManager_C_UpdateEntitlementData, CallFunc_RetrieveAllIDsForEntitlement_ReturnValue) == 0x000038, "Member 'BP_EntitlementManager_C_UpdateEntitlementData::CallFunc_RetrieveAllIDsForEntitlement_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EntitlementManager_C_UpdateEntitlementData, CallFunc_HasAnyEntitlement_ReturnValue) == 0x000048, "Member 'BP_EntitlementManager_C_UpdateEntitlementData::CallFunc_HasAnyEntitlement_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EntitlementManager_C_UpdateEntitlementData, CallFunc_GetCustomGI_ReturnValue) == 0x000050, "Member 'BP_EntitlementManager_C_UpdateEntitlementData::CallFunc_GetCustomGI_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EntitlementManager_C_UpdateEntitlementData, Temp_int_Loop_Counter_Variable) == 0x000058, "Member 'BP_EntitlementManager_C_UpdateEntitlementData::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_EntitlementManager_C_UpdateEntitlementData, CallFunc_GetIsSaveLoaded_ReturnNode) == 0x00005C, "Member 'BP_EntitlementManager_C_UpdateEntitlementData::CallFunc_GetIsSaveLoaded_ReturnNode' has a wrong offset!");
static_assert(offsetof(BP_EntitlementManager_C_UpdateEntitlementData, CallFunc_Add_IntInt_ReturnValue) == 0x000060, "Member 'BP_EntitlementManager_C_UpdateEntitlementData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EntitlementManager_C_UpdateEntitlementData, CallFunc_GetDataTableRowNames_OutRowNames) == 0x000068, "Member 'BP_EntitlementManager_C_UpdateEntitlementData::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(BP_EntitlementManager_C_UpdateEntitlementData, CallFunc_Array_Length_ReturnValue) == 0x000078, "Member 'BP_EntitlementManager_C_UpdateEntitlementData::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EntitlementManager_C_UpdateEntitlementData, CallFunc_Array_Get_Item) == 0x00007C, "Member 'BP_EntitlementManager_C_UpdateEntitlementData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_EntitlementManager_C_UpdateEntitlementData, CallFunc_Less_IntInt_ReturnValue) == 0x000084, "Member 'BP_EntitlementManager_C_UpdateEntitlementData::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EntitlementManager_C_UpdateEntitlementData, CallFunc_GetDataTableRowFromName_OutRow) == 0x000088, "Member 'BP_EntitlementManager_C_UpdateEntitlementData::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");

}

