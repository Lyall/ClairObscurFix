﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Dialogue_Harbour_HotelLove

#include "Basic.hpp"

#include "BP_Dialogue_classes.hpp"
#include "SandFall_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Dialogue_Harbour_HotelLove.BP_Dialogue_Harbour_HotelLove_C
// 0x0018 (0x0350 - 0x0338)
class ABP_Dialogue_Harbour_HotelLove_C final : public ABP_Dialogue_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Dialogue_Harbour_HotelLove_C;    // 0x0338(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FItemDataTableRowHandle                Item_Data_Table_Row_Handle;                        // 0x0340(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void ExecuteUbergraph_BP_Dialogue_Harbour_HotelLove(int32 EntryPoint);
	void StartDialog();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Dialogue_Harbour_HotelLove_C">();
	}
	static class ABP_Dialogue_Harbour_HotelLove_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Dialogue_Harbour_HotelLove_C>();
	}
};
static_assert(alignof(ABP_Dialogue_Harbour_HotelLove_C) == 0x000008, "Wrong alignment on ABP_Dialogue_Harbour_HotelLove_C");
static_assert(sizeof(ABP_Dialogue_Harbour_HotelLove_C) == 0x000350, "Wrong size on ABP_Dialogue_Harbour_HotelLove_C");
static_assert(offsetof(ABP_Dialogue_Harbour_HotelLove_C, UberGraphFrame_BP_Dialogue_Harbour_HotelLove_C) == 0x000338, "Member 'ABP_Dialogue_Harbour_HotelLove_C::UberGraphFrame_BP_Dialogue_Harbour_HotelLove_C' has a wrong offset!");
static_assert(offsetof(ABP_Dialogue_Harbour_HotelLove_C, Item_Data_Table_Row_Handle) == 0x000340, "Member 'ABP_Dialogue_Harbour_HotelLove_C::Item_Data_Table_Row_Handle' has a wrong offset!");

}

