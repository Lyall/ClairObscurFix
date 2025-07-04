﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_jRPG_Controller_Bootstrap

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_jRPG_Controller_Bootstrap.BP_jRPG_Controller_Bootstrap_C
// 0x0010 (0x0868 - 0x0858)
class ABP_jRPG_Controller_Bootstrap_C final : public APlayerController
{
public:
	class UAC_jRPG_InventoryManager_C*            AC_jRPG_InventoryManager;                          // 0x0858(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAC_jRPG_CharactersManager_C*           AC_jRPG_CharactersManager;                         // 0x0860(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_jRPG_Controller_Bootstrap_C">();
	}
	static class ABP_jRPG_Controller_Bootstrap_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_jRPG_Controller_Bootstrap_C>();
	}
};
static_assert(alignof(ABP_jRPG_Controller_Bootstrap_C) == 0x000008, "Wrong alignment on ABP_jRPG_Controller_Bootstrap_C");
static_assert(sizeof(ABP_jRPG_Controller_Bootstrap_C) == 0x000868, "Wrong size on ABP_jRPG_Controller_Bootstrap_C");
static_assert(offsetof(ABP_jRPG_Controller_Bootstrap_C, AC_jRPG_InventoryManager) == 0x000858, "Member 'ABP_jRPG_Controller_Bootstrap_C::AC_jRPG_InventoryManager' has a wrong offset!");
static_assert(offsetof(ABP_jRPG_Controller_Bootstrap_C, AC_jRPG_CharactersManager) == 0x000860, "Member 'ABP_jRPG_Controller_Bootstrap_C::AC_jRPG_CharactersManager' has a wrong offset!");

}

