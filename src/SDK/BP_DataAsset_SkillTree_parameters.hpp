﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DataAsset_SkillTree

#include "Basic.hpp"

#include "FSkillUnlockInfos_structs.hpp"
#include "FSkillUnlockData_structs.hpp"
#include "FSkillUnlockDataList_structs.hpp"


namespace SDK::Params
{

// Function BP_DataAsset_SkillTree.BP_DataAsset_SkillTree_C.BPI_GetDependencies
// 0x0078 (0x0078 - 0x0000)
struct BP_DataAsset_SkillTree_C_BPI_GetDependencies final
{
public:
	TArray<TSoftClassPtr<class UClass>>           Classes;                                           // 0x0000(0x0010)(Parm, OutParm)
	TArray<TSoftObjectPtr<class UObject>>         Assets;                                            // 0x0010(0x0010)(Parm, OutParm)
	TArray<TScriptInterface<class IBPI_LoadingDependenciesSource_C>> ExternalDependencies;           // 0x0020(0x0010)(Parm, OutParm)
	TArray<TSoftClassPtr<class UClass>>           Temp_wildcard_We_need_a_second_array_to_store_the_result_and_be_able_to_wipe_the_first__buffer__array_Variable; // 0x0030(0x0010)(ConstParm, ReferenceParm)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<TSoftClassPtr<class UClass>>           Temp_wildcard_Temp_buffer_array_Variable;          // 0x0050(0x0010)(ConstParm, ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_DataAsset_Skill_C*                  CallFunc_Array_Get_Item;                           // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x3];                                       // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DataAsset_SkillTree_C_BPI_GetDependencies) == 0x000008, "Wrong alignment on BP_DataAsset_SkillTree_C_BPI_GetDependencies");
static_assert(sizeof(BP_DataAsset_SkillTree_C_BPI_GetDependencies) == 0x000078, "Wrong size on BP_DataAsset_SkillTree_C_BPI_GetDependencies");
static_assert(offsetof(BP_DataAsset_SkillTree_C_BPI_GetDependencies, Classes) == 0x000000, "Member 'BP_DataAsset_SkillTree_C_BPI_GetDependencies::Classes' has a wrong offset!");
static_assert(offsetof(BP_DataAsset_SkillTree_C_BPI_GetDependencies, Assets) == 0x000010, "Member 'BP_DataAsset_SkillTree_C_BPI_GetDependencies::Assets' has a wrong offset!");
static_assert(offsetof(BP_DataAsset_SkillTree_C_BPI_GetDependencies, ExternalDependencies) == 0x000020, "Member 'BP_DataAsset_SkillTree_C_BPI_GetDependencies::ExternalDependencies' has a wrong offset!");
static_assert(offsetof(BP_DataAsset_SkillTree_C_BPI_GetDependencies, Temp_wildcard_We_need_a_second_array_to_store_the_result_and_be_able_to_wipe_the_first__buffer__array_Variable) == 0x000030, "Member 'BP_DataAsset_SkillTree_C_BPI_GetDependencies::Temp_wildcard_We_need_a_second_array_to_store_the_result_and_be_able_to_wipe_the_first__buffer__array_Variable' has a wrong offset!");
static_assert(offsetof(BP_DataAsset_SkillTree_C_BPI_GetDependencies, Temp_int_Loop_Counter_Variable) == 0x000040, "Member 'BP_DataAsset_SkillTree_C_BPI_GetDependencies::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_DataAsset_SkillTree_C_BPI_GetDependencies, CallFunc_Add_IntInt_ReturnValue) == 0x000044, "Member 'BP_DataAsset_SkillTree_C_BPI_GetDependencies::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DataAsset_SkillTree_C_BPI_GetDependencies, Temp_int_Array_Index_Variable) == 0x000048, "Member 'BP_DataAsset_SkillTree_C_BPI_GetDependencies::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_DataAsset_SkillTree_C_BPI_GetDependencies, Temp_wildcard_Temp_buffer_array_Variable) == 0x000050, "Member 'BP_DataAsset_SkillTree_C_BPI_GetDependencies::Temp_wildcard_Temp_buffer_array_Variable' has a wrong offset!");
static_assert(offsetof(BP_DataAsset_SkillTree_C_BPI_GetDependencies, CallFunc_Array_Length_ReturnValue) == 0x000060, "Member 'BP_DataAsset_SkillTree_C_BPI_GetDependencies::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DataAsset_SkillTree_C_BPI_GetDependencies, CallFunc_Array_Get_Item) == 0x000068, "Member 'BP_DataAsset_SkillTree_C_BPI_GetDependencies::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_DataAsset_SkillTree_C_BPI_GetDependencies, CallFunc_Less_IntInt_ReturnValue) == 0x000070, "Member 'BP_DataAsset_SkillTree_C_BPI_GetDependencies::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DataAsset_SkillTree_C_BPI_GetDependencies, CallFunc_Array_Add_ReturnValue) == 0x000074, "Member 'BP_DataAsset_SkillTree_C_BPI_GetDependencies::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function BP_DataAsset_SkillTree.BP_DataAsset_SkillTree_C.GetAllSkillUnlockInfosMap
// 0x0210 (0x0210 - 0x0000)
struct BP_DataAsset_SkillTree_C_GetAllSkillUnlockInfosMap final
{
public:
	TMap<class UBP_DataAsset_Skill_C*, struct FFSkillUnlockInfos> SkillUnlockInfos;                  // 0x0000(0x0050)(Parm, OutParm)
	TMap<class UBP_DataAsset_Skill_C*, struct FFSkillUnlockInfos> local_skillUnlockInfos;            // 0x0050(0x0050)(Edit, BlueprintVisible)
	TMap<class UBP_DataAsset_Skill_C*, struct FFSkillUnlockData> local_skillUnlocks;                 // 0x00A0(0x0050)(Edit, BlueprintVisible)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_114[0x4];                                      // 0x0114(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UBP_DataAsset_Skill_C*>          CallFunc_Map_Keys_Keys;                            // 0x0118(0x0010)(ReferenceParm)
	class UBP_DataAsset_Skill_C*                  CallFunc_Array_Get_Item;                           // 0x0128(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FFSkillUnlockData                      CallFunc_Array_Get_Item_1;                         // 0x0130(0x0028)(NoDestructor, HasGetValueTypeHash)
	struct FFSkillUnlockDataList                  CallFunc_Map_Find_Value;                           // 0x0158(0x0010)(HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_169[0x7];                                      // 0x0169(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFSkillUnlockInfos                     K2Node_MakeStruct_FSkillUnlockInfos;               // 0x0170(0x0030)(NoDestructor, HasGetValueTypeHash)
	struct FFSkillUnlockData                      CallFunc_Array_Get_Item_2;                         // 0x01A0(0x0028)(NoDestructor, HasGetValueTypeHash)
	struct FFSkillUnlockInfos                     K2Node_MakeStruct_FSkillUnlockInfos_1;             // 0x01C8(0x0030)(NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x01F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x01FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0201(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_202[0x2];                                      // 0x0202(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0204(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DataAsset_SkillTree_C_GetAllSkillUnlockInfosMap) == 0x000008, "Wrong alignment on BP_DataAsset_SkillTree_C_GetAllSkillUnlockInfosMap");
static_assert(sizeof(BP_DataAsset_SkillTree_C_GetAllSkillUnlockInfosMap) == 0x000210, "Wrong size on BP_DataAsset_SkillTree_C_GetAllSkillUnlockInfosMap");
static_assert(offsetof(BP_DataAsset_SkillTree_C_GetAllSkillUnlockInfosMap, SkillUnlockInfos) == 0x000000, "Member 'BP_DataAsset_SkillTree_C_GetAllSkillUnlockInfosMap::SkillUnlockInfos' has a wrong offset!");
static_assert(offsetof(BP_DataAsset_SkillTree_C_GetAllSkillUnlockInfosMap, local_skillUnlockInfos) == 0x000050, "Member 'BP_DataAsset_SkillTree_C_GetAllSkillUnlockInfosMap::local_skillUnlockInfos' has a wrong offset!");
static_assert(offsetof(BP_DataAsset_SkillTree_C_GetAllSkillUnlockInfosMap, local_skillUnlocks) == 0x0000A0, "Member 'BP_DataAsset_SkillTree_C_GetAllSkillUnlockInfosMap::local_skillUnlocks' has a wrong offset!");
static_assert(offsetof(BP_DataAsset_SkillTree_C_GetAllSkillUnlockInfosMap, Temp_int_Loop_Counter_Variable) == 0x0000F0, "Member 'BP_DataAsset_SkillTree_C_GetAllSkillUnlockInfosMap::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_DataAsset_SkillTree_C_GetAllSkillUnlockInfosMap, CallFunc_Add_IntInt_ReturnValue) == 0x0000F4, "Member 'BP_DataAsset_SkillTree_C_GetAllSkillUnlockInfosMap::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DataAsset_SkillTree_C_GetAllSkillUnlockInfosMap, Temp_int_Array_Index_Variable) == 0x0000F8, "Member 'BP_DataAsset_SkillTree_C_GetAllSkillUnlockInfosMap::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_DataAsset_SkillTree_C_GetAllSkillUnlockInfosMap, Temp_int_Array_Index_Variable_1) == 0x0000FC, "Member 'BP_DataAsset_SkillTree_C_GetAllSkillUnlockInfosMap::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_DataAsset_SkillTree_C_GetAllSkillUnlockInfosMap, Temp_int_Loop_Counter_Variable_1) == 0x000100, "Member 'BP_DataAsset_SkillTree_C_GetAllSkillUnlockInfosMap::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_DataAsset_SkillTree_C_GetAllSkillUnlockInfosMap, CallFunc_Add_IntInt_ReturnValue_1) == 0x000104, "Member 'BP_DataAsset_SkillTree_C_GetAllSkillUnlockInfosMap::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DataAsset_SkillTree_C_GetAllSkillUnlockInfosMap, Temp_int_Array_Index_Variable_2) == 0x000108, "Member 'BP_DataAsset_SkillTree_C_GetAllSkillUnlockInfosMap::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_DataAsset_SkillTree_C_GetAllSkillUnlockInfosMap, Temp_int_Loop_Counter_Variable_2) == 0x00010C, "Member 'BP_DataAsset_SkillTree_C_GetAllSkillUnlockInfosMap::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_DataAsset_SkillTree_C_GetAllSkillUnlockInfosMap, CallFunc_Add_IntInt_ReturnValue_2) == 0x000110, "Member 'BP_DataAsset_SkillTree_C_GetAllSkillUnlockInfosMap::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DataAsset_SkillTree_C_GetAllSkillUnlockInfosMap, CallFunc_Map_Keys_Keys) == 0x000118, "Member 'BP_DataAsset_SkillTree_C_GetAllSkillUnlockInfosMap::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(BP_DataAsset_SkillTree_C_GetAllSkillUnlockInfosMap, CallFunc_Array_Get_Item) == 0x000128, "Member 'BP_DataAsset_SkillTree_C_GetAllSkillUnlockInfosMap::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_DataAsset_SkillTree_C_GetAllSkillUnlockInfosMap, CallFunc_Array_Get_Item_1) == 0x000130, "Member 'BP_DataAsset_SkillTree_C_GetAllSkillUnlockInfosMap::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_DataAsset_SkillTree_C_GetAllSkillUnlockInfosMap, CallFunc_Map_Find_Value) == 0x000158, "Member 'BP_DataAsset_SkillTree_C_GetAllSkillUnlockInfosMap::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_DataAsset_SkillTree_C_GetAllSkillUnlockInfosMap, CallFunc_Map_Find_ReturnValue) == 0x000168, "Member 'BP_DataAsset_SkillTree_C_GetAllSkillUnlockInfosMap::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DataAsset_SkillTree_C_GetAllSkillUnlockInfosMap, K2Node_MakeStruct_FSkillUnlockInfos) == 0x000170, "Member 'BP_DataAsset_SkillTree_C_GetAllSkillUnlockInfosMap::K2Node_MakeStruct_FSkillUnlockInfos' has a wrong offset!");
static_assert(offsetof(BP_DataAsset_SkillTree_C_GetAllSkillUnlockInfosMap, CallFunc_Array_Get_Item_2) == 0x0001A0, "Member 'BP_DataAsset_SkillTree_C_GetAllSkillUnlockInfosMap::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(BP_DataAsset_SkillTree_C_GetAllSkillUnlockInfosMap, K2Node_MakeStruct_FSkillUnlockInfos_1) == 0x0001C8, "Member 'BP_DataAsset_SkillTree_C_GetAllSkillUnlockInfosMap::K2Node_MakeStruct_FSkillUnlockInfos_1' has a wrong offset!");
static_assert(offsetof(BP_DataAsset_SkillTree_C_GetAllSkillUnlockInfosMap, CallFunc_Array_Length_ReturnValue) == 0x0001F8, "Member 'BP_DataAsset_SkillTree_C_GetAllSkillUnlockInfosMap::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DataAsset_SkillTree_C_GetAllSkillUnlockInfosMap, CallFunc_Array_Length_ReturnValue_1) == 0x0001FC, "Member 'BP_DataAsset_SkillTree_C_GetAllSkillUnlockInfosMap::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DataAsset_SkillTree_C_GetAllSkillUnlockInfosMap, CallFunc_Less_IntInt_ReturnValue) == 0x000200, "Member 'BP_DataAsset_SkillTree_C_GetAllSkillUnlockInfosMap::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DataAsset_SkillTree_C_GetAllSkillUnlockInfosMap, CallFunc_Less_IntInt_ReturnValue_1) == 0x000201, "Member 'BP_DataAsset_SkillTree_C_GetAllSkillUnlockInfosMap::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DataAsset_SkillTree_C_GetAllSkillUnlockInfosMap, CallFunc_Array_Length_ReturnValue_2) == 0x000204, "Member 'BP_DataAsset_SkillTree_C_GetAllSkillUnlockInfosMap::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DataAsset_SkillTree_C_GetAllSkillUnlockInfosMap, CallFunc_Less_IntInt_ReturnValue_2) == 0x000208, "Member 'BP_DataAsset_SkillTree_C_GetAllSkillUnlockInfosMap::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");

// Function BP_DataAsset_SkillTree.BP_DataAsset_SkillTree_C.GetSkillsUnlockedBySkill
// 0x0030 (0x0030 - 0x0000)
struct BP_DataAsset_SkillTree_C_GetSkillsUnlockedBySkill final
{
public:
	const class UBP_DataAsset_Skill_C*            Key;                                               // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFSkillUnlockData>              SkillUnlocks;                                      // 0x0008(0x0010)(Parm, OutParm)
	struct FFSkillUnlockDataList                  CallFunc_Map_Find_Value;                           // 0x0018(0x0010)(HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DataAsset_SkillTree_C_GetSkillsUnlockedBySkill) == 0x000008, "Wrong alignment on BP_DataAsset_SkillTree_C_GetSkillsUnlockedBySkill");
static_assert(sizeof(BP_DataAsset_SkillTree_C_GetSkillsUnlockedBySkill) == 0x000030, "Wrong size on BP_DataAsset_SkillTree_C_GetSkillsUnlockedBySkill");
static_assert(offsetof(BP_DataAsset_SkillTree_C_GetSkillsUnlockedBySkill, Key) == 0x000000, "Member 'BP_DataAsset_SkillTree_C_GetSkillsUnlockedBySkill::Key' has a wrong offset!");
static_assert(offsetof(BP_DataAsset_SkillTree_C_GetSkillsUnlockedBySkill, SkillUnlocks) == 0x000008, "Member 'BP_DataAsset_SkillTree_C_GetSkillsUnlockedBySkill::SkillUnlocks' has a wrong offset!");
static_assert(offsetof(BP_DataAsset_SkillTree_C_GetSkillsUnlockedBySkill, CallFunc_Map_Find_Value) == 0x000018, "Member 'BP_DataAsset_SkillTree_C_GetSkillsUnlockedBySkill::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_DataAsset_SkillTree_C_GetSkillsUnlockedBySkill, CallFunc_Map_Find_ReturnValue) == 0x000028, "Member 'BP_DataAsset_SkillTree_C_GetSkillsUnlockedBySkill::CallFunc_Map_Find_ReturnValue' has a wrong offset!");

// Function BP_DataAsset_SkillTree.BP_DataAsset_SkillTree_C.GetUnlockedSkillsByNameIDs
// 0x00E0 (0x00E0 - 0x0000)
struct BP_DataAsset_SkillTree_C_GetUnlockedSkillsByNameIDs final
{
public:
	TArray<class FName>                           NameIDs;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UBP_DataAsset_Skill_C*>          UnlockedSkills;                                    // 0x0010(0x0010)(Parm, OutParm)
	bool                                          AllFound;                                          // 0x0020(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           MissingNameIDs;                                    // 0x0028(0x0010)(Parm, OutParm)
	TArray<struct FFSkillUnlockData>              local_SkillUnlocksToVisit;                         // 0x0038(0x0010)(Edit, BlueprintVisible)
	TArray<class FName>                           local_remainingNameIDs;                            // 0x0048(0x0010)(Edit, BlueprintVisible)
	TArray<class UBP_DataAsset_Skill_C*>          local_UnlockedSkills;                              // 0x0058(0x0010)(Edit, BlueprintVisible)
	TArray<class UBP_DataAsset_Skill_C*>          local_SkillsToVisit;                               // 0x0068(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C[0x4];                                       // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFSkillUnlockData                      CallFunc_Array_Get_Item;                           // 0x0080(0x0028)(NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_AC[0x4];                                       // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFSkillUnlockData>              CallFunc_GetSkillsUnlockedBySkill_SkillUnlocks;    // 0x00B0(0x0010)(ReferenceParm)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C1[0x3];                                       // 0x00C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsEmpty_ReturnValue;                // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C9[0x3];                                       // 0x00C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D1[0x3];                                       // 0x00D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DataAsset_SkillTree_C_GetUnlockedSkillsByNameIDs) == 0x000008, "Wrong alignment on BP_DataAsset_SkillTree_C_GetUnlockedSkillsByNameIDs");
static_assert(sizeof(BP_DataAsset_SkillTree_C_GetUnlockedSkillsByNameIDs) == 0x0000E0, "Wrong size on BP_DataAsset_SkillTree_C_GetUnlockedSkillsByNameIDs");
static_assert(offsetof(BP_DataAsset_SkillTree_C_GetUnlockedSkillsByNameIDs, NameIDs) == 0x000000, "Member 'BP_DataAsset_SkillTree_C_GetUnlockedSkillsByNameIDs::NameIDs' has a wrong offset!");
static_assert(offsetof(BP_DataAsset_SkillTree_C_GetUnlockedSkillsByNameIDs, UnlockedSkills) == 0x000010, "Member 'BP_DataAsset_SkillTree_C_GetUnlockedSkillsByNameIDs::UnlockedSkills' has a wrong offset!");
static_assert(offsetof(BP_DataAsset_SkillTree_C_GetUnlockedSkillsByNameIDs, AllFound) == 0x000020, "Member 'BP_DataAsset_SkillTree_C_GetUnlockedSkillsByNameIDs::AllFound' has a wrong offset!");
static_assert(offsetof(BP_DataAsset_SkillTree_C_GetUnlockedSkillsByNameIDs, MissingNameIDs) == 0x000028, "Member 'BP_DataAsset_SkillTree_C_GetUnlockedSkillsByNameIDs::MissingNameIDs' has a wrong offset!");
static_assert(offsetof(BP_DataAsset_SkillTree_C_GetUnlockedSkillsByNameIDs, local_SkillUnlocksToVisit) == 0x000038, "Member 'BP_DataAsset_SkillTree_C_GetUnlockedSkillsByNameIDs::local_SkillUnlocksToVisit' has a wrong offset!");
static_assert(offsetof(BP_DataAsset_SkillTree_C_GetUnlockedSkillsByNameIDs, local_remainingNameIDs) == 0x000048, "Member 'BP_DataAsset_SkillTree_C_GetUnlockedSkillsByNameIDs::local_remainingNameIDs' has a wrong offset!");
static_assert(offsetof(BP_DataAsset_SkillTree_C_GetUnlockedSkillsByNameIDs, local_UnlockedSkills) == 0x000058, "Member 'BP_DataAsset_SkillTree_C_GetUnlockedSkillsByNameIDs::local_UnlockedSkills' has a wrong offset!");
static_assert(offsetof(BP_DataAsset_SkillTree_C_GetUnlockedSkillsByNameIDs, local_SkillsToVisit) == 0x000068, "Member 'BP_DataAsset_SkillTree_C_GetUnlockedSkillsByNameIDs::local_SkillsToVisit' has a wrong offset!");
static_assert(offsetof(BP_DataAsset_SkillTree_C_GetUnlockedSkillsByNameIDs, Temp_int_Array_Index_Variable) == 0x000078, "Member 'BP_DataAsset_SkillTree_C_GetUnlockedSkillsByNameIDs::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_DataAsset_SkillTree_C_GetUnlockedSkillsByNameIDs, CallFunc_Array_Get_Item) == 0x000080, "Member 'BP_DataAsset_SkillTree_C_GetUnlockedSkillsByNameIDs::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_DataAsset_SkillTree_C_GetUnlockedSkillsByNameIDs, CallFunc_Array_Length_ReturnValue) == 0x0000A8, "Member 'BP_DataAsset_SkillTree_C_GetUnlockedSkillsByNameIDs::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DataAsset_SkillTree_C_GetUnlockedSkillsByNameIDs, CallFunc_GetSkillsUnlockedBySkill_SkillUnlocks) == 0x0000B0, "Member 'BP_DataAsset_SkillTree_C_GetUnlockedSkillsByNameIDs::CallFunc_GetSkillsUnlockedBySkill_SkillUnlocks' has a wrong offset!");
static_assert(offsetof(BP_DataAsset_SkillTree_C_GetUnlockedSkillsByNameIDs, CallFunc_Array_Contains_ReturnValue) == 0x0000C0, "Member 'BP_DataAsset_SkillTree_C_GetUnlockedSkillsByNameIDs::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DataAsset_SkillTree_C_GetUnlockedSkillsByNameIDs, CallFunc_Array_Add_ReturnValue) == 0x0000C4, "Member 'BP_DataAsset_SkillTree_C_GetUnlockedSkillsByNameIDs::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DataAsset_SkillTree_C_GetUnlockedSkillsByNameIDs, CallFunc_Array_IsEmpty_ReturnValue) == 0x0000C8, "Member 'BP_DataAsset_SkillTree_C_GetUnlockedSkillsByNameIDs::CallFunc_Array_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DataAsset_SkillTree_C_GetUnlockedSkillsByNameIDs, Temp_int_Loop_Counter_Variable) == 0x0000CC, "Member 'BP_DataAsset_SkillTree_C_GetUnlockedSkillsByNameIDs::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_DataAsset_SkillTree_C_GetUnlockedSkillsByNameIDs, CallFunc_Less_IntInt_ReturnValue) == 0x0000D0, "Member 'BP_DataAsset_SkillTree_C_GetUnlockedSkillsByNameIDs::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DataAsset_SkillTree_C_GetUnlockedSkillsByNameIDs, CallFunc_Add_IntInt_ReturnValue) == 0x0000D4, "Member 'BP_DataAsset_SkillTree_C_GetUnlockedSkillsByNameIDs::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DataAsset_SkillTree_C_GetUnlockedSkillsByNameIDs, CallFunc_Array_RemoveItem_ReturnValue) == 0x0000D8, "Member 'BP_DataAsset_SkillTree_C_GetUnlockedSkillsByNameIDs::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");

}

