﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_UINavigationElement

#include "Basic.hpp"


namespace SDK::Params
{

// Function BPI_UINavigationElement.BPI_UINavigationElement_C.GetTiedObject
// 0x0008 (0x0008 - 0x0000)
struct BPI_UINavigationElement_C_GetTiedObject final
{
public:
	class UObject*                                Object;                                            // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_UINavigationElement_C_GetTiedObject) == 0x000008, "Wrong alignment on BPI_UINavigationElement_C_GetTiedObject");
static_assert(sizeof(BPI_UINavigationElement_C_GetTiedObject) == 0x000008, "Wrong size on BPI_UINavigationElement_C_GetTiedObject");
static_assert(offsetof(BPI_UINavigationElement_C_GetTiedObject, Object) == 0x000000, "Member 'BPI_UINavigationElement_C_GetTiedObject::Object' has a wrong offset!");

// Function BPI_UINavigationElement.BPI_UINavigationElement_C.OnUINavigationFocus
// 0x0008 (0x0008 - 0x0000)
struct BPI_UINavigationElement_C_OnUINavigationFocus final
{
public:
	const class UBP_UINavigationFocusEvent_C*     FocusEventBP;                                      // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_UINavigationElement_C_OnUINavigationFocus) == 0x000008, "Wrong alignment on BPI_UINavigationElement_C_OnUINavigationFocus");
static_assert(sizeof(BPI_UINavigationElement_C_OnUINavigationFocus) == 0x000008, "Wrong size on BPI_UINavigationElement_C_OnUINavigationFocus");
static_assert(offsetof(BPI_UINavigationElement_C_OnUINavigationFocus, FocusEventBP) == 0x000000, "Member 'BPI_UINavigationElement_C_OnUINavigationFocus::FocusEventBP' has a wrong offset!");

}

