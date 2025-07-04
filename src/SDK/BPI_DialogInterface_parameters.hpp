﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_DialogInterface

#include "Basic.hpp"


namespace SDK::Params
{

// Function BPI_DialogInterface.BPI_DialogInterface_C.Dialog
// 0x0020 (0x0020 - 0x0000)
struct BPI_DialogInterface_C_Dialog final
{
public:
	class FName                                   EventId;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SwitchID;                                          // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   DialogText;                                        // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(BPI_DialogInterface_C_Dialog) == 0x000008, "Wrong alignment on BPI_DialogInterface_C_Dialog");
static_assert(sizeof(BPI_DialogInterface_C_Dialog) == 0x000020, "Wrong size on BPI_DialogInterface_C_Dialog");
static_assert(offsetof(BPI_DialogInterface_C_Dialog, EventId) == 0x000000, "Member 'BPI_DialogInterface_C_Dialog::EventId' has a wrong offset!");
static_assert(offsetof(BPI_DialogInterface_C_Dialog, SwitchID) == 0x000008, "Member 'BPI_DialogInterface_C_Dialog::SwitchID' has a wrong offset!");
static_assert(offsetof(BPI_DialogInterface_C_Dialog, DialogText) == 0x000010, "Member 'BPI_DialogInterface_C_Dialog::DialogText' has a wrong offset!");

}

