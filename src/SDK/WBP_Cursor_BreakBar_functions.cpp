﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Cursor_BreakBar

#include "Basic.hpp"

#include "WBP_Cursor_BreakBar_classes.hpp"
#include "WBP_Cursor_BreakBar_parameters.hpp"


namespace SDK
{

// Function WBP_Cursor_BreakBar.WBP_Cursor_BreakBar_C.CursorActive
// (BlueprintCallable, BlueprintEvent)

void UWBP_Cursor_BreakBar_C::CursorActive()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Cursor_BreakBar_C", "CursorActive");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Cursor_BreakBar.WBP_Cursor_BreakBar_C.ExecuteUbergraph_WBP_Cursor_BreakBar
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Cursor_BreakBar_C::ExecuteUbergraph_WBP_Cursor_BreakBar(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Cursor_BreakBar_C", "ExecuteUbergraph_WBP_Cursor_BreakBar");

	Params::WBP_Cursor_BreakBar_C_ExecuteUbergraph_WBP_Cursor_BreakBar Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

