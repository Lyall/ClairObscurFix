﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_JrpgNPCDialog_Mime_LumiereAct1

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_jRPG_NPC_Dialog_classes.hpp"
#include "E_QuestStatus_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_JrpgNPCDialog_Mime_LumiereAct1.BP_JrpgNPCDialog_Mime_LumiereAct1_C
// 0x0010 (0x0B80 - 0x0B70)
class ABP_JrpgNPCDialog_Mime_LumiereAct1_C final : public ABP_jRPG_NPC_Dialog_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_JrpgNPCDialog_Mime_LumiereAct1_C; // 0x0B70(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_JrpgNPCDialog_Mime_LumiereAct1(int32 EntryPoint);
	void ReceiveBeginPlay();
	void RefreshIdle();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_JrpgNPCDialog_Mime_LumiereAct1_C">();
	}
	static class ABP_JrpgNPCDialog_Mime_LumiereAct1_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_JrpgNPCDialog_Mime_LumiereAct1_C>();
	}
};
static_assert(alignof(ABP_JrpgNPCDialog_Mime_LumiereAct1_C) == 0x000010, "Wrong alignment on ABP_JrpgNPCDialog_Mime_LumiereAct1_C");
static_assert(sizeof(ABP_JrpgNPCDialog_Mime_LumiereAct1_C) == 0x000B80, "Wrong size on ABP_JrpgNPCDialog_Mime_LumiereAct1_C");
static_assert(offsetof(ABP_JrpgNPCDialog_Mime_LumiereAct1_C, UberGraphFrame_BP_JrpgNPCDialog_Mime_LumiereAct1_C) == 0x000B70, "Member 'ABP_JrpgNPCDialog_Mime_LumiereAct1_C::UberGraphFrame_BP_JrpgNPCDialog_Mime_LumiereAct1_C' has a wrong offset!");

}

