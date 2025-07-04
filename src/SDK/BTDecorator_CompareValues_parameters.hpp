﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTDecorator_CompareValues

#include "Basic.hpp"


namespace SDK::Params
{

// Function BTDecorator_CompareValues.BTDecorator_CompareValues_C.GetLeftValue
// 0x0008 (0x0008 - 0x0000)
struct BTDecorator_CompareValues_C_GetLeftValue final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetBlackboardValueAsFloat_ReturnValue;    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTDecorator_CompareValues_C_GetLeftValue) == 0x000004, "Wrong alignment on BTDecorator_CompareValues_C_GetLeftValue");
static_assert(sizeof(BTDecorator_CompareValues_C_GetLeftValue) == 0x000008, "Wrong size on BTDecorator_CompareValues_C_GetLeftValue");
static_assert(offsetof(BTDecorator_CompareValues_C_GetLeftValue, ReturnValue) == 0x000000, "Member 'BTDecorator_CompareValues_C_GetLeftValue::ReturnValue' has a wrong offset!");
static_assert(offsetof(BTDecorator_CompareValues_C_GetLeftValue, CallFunc_GetBlackboardValueAsFloat_ReturnValue) == 0x000004, "Member 'BTDecorator_CompareValues_C_GetLeftValue::CallFunc_GetBlackboardValueAsFloat_ReturnValue' has a wrong offset!");

// Function BTDecorator_CompareValues.BTDecorator_CompareValues_C.GetRightValue
// 0x0008 (0x0008 - 0x0000)
struct BTDecorator_CompareValues_C_GetRightValue final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetBlackboardValueAsFloat_ReturnValue;    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTDecorator_CompareValues_C_GetRightValue) == 0x000004, "Wrong alignment on BTDecorator_CompareValues_C_GetRightValue");
static_assert(sizeof(BTDecorator_CompareValues_C_GetRightValue) == 0x000008, "Wrong size on BTDecorator_CompareValues_C_GetRightValue");
static_assert(offsetof(BTDecorator_CompareValues_C_GetRightValue, ReturnValue) == 0x000000, "Member 'BTDecorator_CompareValues_C_GetRightValue::ReturnValue' has a wrong offset!");
static_assert(offsetof(BTDecorator_CompareValues_C_GetRightValue, CallFunc_GetBlackboardValueAsFloat_ReturnValue) == 0x000004, "Member 'BTDecorator_CompareValues_C_GetRightValue::CallFunc_GetBlackboardValueAsFloat_ReturnValue' has a wrong offset!");

// Function BTDecorator_CompareValues.BTDecorator_CompareValues_C.PerformConditionCheckAI
// 0x0088 (0x0088 - 0x0000)
struct BTDecorator_CompareValues_C_PerformConditionCheckAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          local_WasGreater;                                  // 0x0011(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_12[0x2];                                       // 0x0012(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetRightValue_ReturnValue;                // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetLeftValue_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x001E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x001F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_DoubleDouble_ReturnValue;        // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_23[0x5];                                       // 0x0023(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_EqualEqual_DoubleDouble_B_ImplicitCast;   // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_NotEqual_DoubleDouble_B_ImplicitCast;     // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Greater_DoubleDouble_B_ImplicitCast;      // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_GreaterEqual_DoubleDouble_B_ImplicitCast; // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Less_DoubleDouble_B_ImplicitCast;         // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_LessEqual_DoubleDouble_B_ImplicitCast;    // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;   // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_NotEqual_DoubleDouble_A_ImplicitCast;     // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast; // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Less_DoubleDouble_A_ImplicitCast;         // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;    // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTDecorator_CompareValues_C_PerformConditionCheckAI) == 0x000008, "Wrong alignment on BTDecorator_CompareValues_C_PerformConditionCheckAI");
static_assert(sizeof(BTDecorator_CompareValues_C_PerformConditionCheckAI) == 0x000088, "Wrong size on BTDecorator_CompareValues_C_PerformConditionCheckAI");
static_assert(offsetof(BTDecorator_CompareValues_C_PerformConditionCheckAI, OwnerController) == 0x000000, "Member 'BTDecorator_CompareValues_C_PerformConditionCheckAI::OwnerController' has a wrong offset!");
static_assert(offsetof(BTDecorator_CompareValues_C_PerformConditionCheckAI, ControlledPawn) == 0x000008, "Member 'BTDecorator_CompareValues_C_PerformConditionCheckAI::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BTDecorator_CompareValues_C_PerformConditionCheckAI, ReturnValue) == 0x000010, "Member 'BTDecorator_CompareValues_C_PerformConditionCheckAI::ReturnValue' has a wrong offset!");
static_assert(offsetof(BTDecorator_CompareValues_C_PerformConditionCheckAI, local_WasGreater) == 0x000011, "Member 'BTDecorator_CompareValues_C_PerformConditionCheckAI::local_WasGreater' has a wrong offset!");
static_assert(offsetof(BTDecorator_CompareValues_C_PerformConditionCheckAI, CallFunc_GetRightValue_ReturnValue) == 0x000014, "Member 'BTDecorator_CompareValues_C_PerformConditionCheckAI::CallFunc_GetRightValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTDecorator_CompareValues_C_PerformConditionCheckAI, CallFunc_GetLeftValue_ReturnValue) == 0x000018, "Member 'BTDecorator_CompareValues_C_PerformConditionCheckAI::CallFunc_GetLeftValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTDecorator_CompareValues_C_PerformConditionCheckAI, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x00001C, "Member 'BTDecorator_CompareValues_C_PerformConditionCheckAI::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTDecorator_CompareValues_C_PerformConditionCheckAI, K2Node_SwitchEnum_CmpSuccess) == 0x00001D, "Member 'BTDecorator_CompareValues_C_PerformConditionCheckAI::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BTDecorator_CompareValues_C_PerformConditionCheckAI, CallFunc_Less_DoubleDouble_ReturnValue) == 0x00001E, "Member 'BTDecorator_CompareValues_C_PerformConditionCheckAI::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTDecorator_CompareValues_C_PerformConditionCheckAI, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x00001F, "Member 'BTDecorator_CompareValues_C_PerformConditionCheckAI::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTDecorator_CompareValues_C_PerformConditionCheckAI, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000020, "Member 'BTDecorator_CompareValues_C_PerformConditionCheckAI::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTDecorator_CompareValues_C_PerformConditionCheckAI, CallFunc_NotEqual_DoubleDouble_ReturnValue) == 0x000021, "Member 'BTDecorator_CompareValues_C_PerformConditionCheckAI::CallFunc_NotEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTDecorator_CompareValues_C_PerformConditionCheckAI, CallFunc_EqualEqual_DoubleDouble_ReturnValue) == 0x000022, "Member 'BTDecorator_CompareValues_C_PerformConditionCheckAI::CallFunc_EqualEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTDecorator_CompareValues_C_PerformConditionCheckAI, CallFunc_EqualEqual_DoubleDouble_B_ImplicitCast) == 0x000028, "Member 'BTDecorator_CompareValues_C_PerformConditionCheckAI::CallFunc_EqualEqual_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BTDecorator_CompareValues_C_PerformConditionCheckAI, CallFunc_NotEqual_DoubleDouble_B_ImplicitCast) == 0x000030, "Member 'BTDecorator_CompareValues_C_PerformConditionCheckAI::CallFunc_NotEqual_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BTDecorator_CompareValues_C_PerformConditionCheckAI, CallFunc_Greater_DoubleDouble_B_ImplicitCast) == 0x000038, "Member 'BTDecorator_CompareValues_C_PerformConditionCheckAI::CallFunc_Greater_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BTDecorator_CompareValues_C_PerformConditionCheckAI, CallFunc_GreaterEqual_DoubleDouble_B_ImplicitCast) == 0x000040, "Member 'BTDecorator_CompareValues_C_PerformConditionCheckAI::CallFunc_GreaterEqual_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BTDecorator_CompareValues_C_PerformConditionCheckAI, CallFunc_Less_DoubleDouble_B_ImplicitCast) == 0x000048, "Member 'BTDecorator_CompareValues_C_PerformConditionCheckAI::CallFunc_Less_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BTDecorator_CompareValues_C_PerformConditionCheckAI, CallFunc_LessEqual_DoubleDouble_B_ImplicitCast) == 0x000050, "Member 'BTDecorator_CompareValues_C_PerformConditionCheckAI::CallFunc_LessEqual_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BTDecorator_CompareValues_C_PerformConditionCheckAI, CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast) == 0x000058, "Member 'BTDecorator_CompareValues_C_PerformConditionCheckAI::CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BTDecorator_CompareValues_C_PerformConditionCheckAI, CallFunc_NotEqual_DoubleDouble_A_ImplicitCast) == 0x000060, "Member 'BTDecorator_CompareValues_C_PerformConditionCheckAI::CallFunc_NotEqual_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BTDecorator_CompareValues_C_PerformConditionCheckAI, CallFunc_Greater_DoubleDouble_A_ImplicitCast) == 0x000068, "Member 'BTDecorator_CompareValues_C_PerformConditionCheckAI::CallFunc_Greater_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BTDecorator_CompareValues_C_PerformConditionCheckAI, CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast) == 0x000070, "Member 'BTDecorator_CompareValues_C_PerformConditionCheckAI::CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BTDecorator_CompareValues_C_PerformConditionCheckAI, CallFunc_Less_DoubleDouble_A_ImplicitCast) == 0x000078, "Member 'BTDecorator_CompareValues_C_PerformConditionCheckAI::CallFunc_Less_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BTDecorator_CompareValues_C_PerformConditionCheckAI, CallFunc_LessEqual_DoubleDouble_A_ImplicitCast) == 0x000080, "Member 'BTDecorator_CompareValues_C_PerformConditionCheckAI::CallFunc_LessEqual_DoubleDouble_A_ImplicitCast' has a wrong offset!");

}

