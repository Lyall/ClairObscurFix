﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Map_Game_Bootstrap

#include "Basic.hpp"

#include "StateTreeModule_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Map_Game_Bootstrap.Map_Game_Bootstrap_C
// 0x0018 (0x02B0 - 0x0298)
class AMap_Game_Bootstrap_C final : public ALevelScriptActor
{
public:
	class UStateTree*                             StateTree_GameFlow;                                // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FStateTreeStructRef                    StateTreeRef_GameFlow;                             // 0x02A0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Map_Game_Bootstrap_C">();
	}
	static class AMap_Game_Bootstrap_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMap_Game_Bootstrap_C>();
	}
};
static_assert(alignof(AMap_Game_Bootstrap_C) == 0x000008, "Wrong alignment on AMap_Game_Bootstrap_C");
static_assert(sizeof(AMap_Game_Bootstrap_C) == 0x0002B0, "Wrong size on AMap_Game_Bootstrap_C");
static_assert(offsetof(AMap_Game_Bootstrap_C, StateTree_GameFlow) == 0x000298, "Member 'AMap_Game_Bootstrap_C::StateTree_GameFlow' has a wrong offset!");
static_assert(offsetof(AMap_Game_Bootstrap_C, StateTreeRef_GameFlow) == 0x0002A0, "Member 'AMap_Game_Bootstrap_C::StateTreeRef_GameFlow' has a wrong offset!");

}

