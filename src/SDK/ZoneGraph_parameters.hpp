﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ZoneGraph

#include "Basic.hpp"

#include "ZoneGraph_structs.hpp"


namespace SDK::Params
{

// Function ZoneGraph.ZoneShapeComponent.SetPolygonRoutingType
// 0x0001 (0x0001 - 0x0000)
struct ZoneShapeComponent_SetPolygonRoutingType final
{
public:
	EZoneShapePolygonRoutingType                  NewType;                                           // 0x0000(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ZoneShapeComponent_SetPolygonRoutingType) == 0x000001, "Wrong alignment on ZoneShapeComponent_SetPolygonRoutingType");
static_assert(sizeof(ZoneShapeComponent_SetPolygonRoutingType) == 0x000001, "Wrong size on ZoneShapeComponent_SetPolygonRoutingType");
static_assert(offsetof(ZoneShapeComponent_SetPolygonRoutingType, NewType) == 0x000000, "Member 'ZoneShapeComponent_SetPolygonRoutingType::NewType' has a wrong offset!");

// Function ZoneGraph.ZoneShapeComponent.SetReverseLaneProfile
// 0x0002 (0x0002 - 0x0000)
struct ZoneShapeComponent_SetReverseLaneProfile final
{
public:
	bool                                          bReverse;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ZoneShapeComponent_SetReverseLaneProfile) == 0x000001, "Wrong alignment on ZoneShapeComponent_SetReverseLaneProfile");
static_assert(sizeof(ZoneShapeComponent_SetReverseLaneProfile) == 0x000002, "Wrong size on ZoneShapeComponent_SetReverseLaneProfile");
static_assert(offsetof(ZoneShapeComponent_SetReverseLaneProfile, bReverse) == 0x000000, "Member 'ZoneShapeComponent_SetReverseLaneProfile::bReverse' has a wrong offset!");
static_assert(offsetof(ZoneShapeComponent_SetReverseLaneProfile, ReturnValue) == 0x000001, "Member 'ZoneShapeComponent_SetReverseLaneProfile::ReturnValue' has a wrong offset!");

// Function ZoneGraph.ZoneShapeComponent.SetShapeType
// 0x0001 (0x0001 - 0x0000)
struct ZoneShapeComponent_SetShapeType final
{
public:
	EFZoneShapeType                               Type;                                              // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ZoneShapeComponent_SetShapeType) == 0x000001, "Wrong alignment on ZoneShapeComponent_SetShapeType");
static_assert(sizeof(ZoneShapeComponent_SetShapeType) == 0x000001, "Wrong size on ZoneShapeComponent_SetShapeType");
static_assert(offsetof(ZoneShapeComponent_SetShapeType, Type) == 0x000000, "Member 'ZoneShapeComponent_SetShapeType::Type' has a wrong offset!");

// Function ZoneGraph.ZoneShapeComponent.SetTags
// 0x0004 (0x0004 - 0x0000)
struct ZoneShapeComponent_SetTags final
{
public:
	struct FZoneGraphTagMask                      NewTags;                                           // 0x0000(0x0004)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ZoneShapeComponent_SetTags) == 0x000004, "Wrong alignment on ZoneShapeComponent_SetTags");
static_assert(sizeof(ZoneShapeComponent_SetTags) == 0x000004, "Wrong size on ZoneShapeComponent_SetTags");
static_assert(offsetof(ZoneShapeComponent_SetTags, NewTags) == 0x000000, "Member 'ZoneShapeComponent_SetTags::NewTags' has a wrong offset!");

// Function ZoneGraph.ZoneShapeComponent.GetShapeType
// 0x0001 (0x0001 - 0x0000)
struct ZoneShapeComponent_GetShapeType final
{
public:
	EFZoneShapeType                               ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ZoneShapeComponent_GetShapeType) == 0x000001, "Wrong alignment on ZoneShapeComponent_GetShapeType");
static_assert(sizeof(ZoneShapeComponent_GetShapeType) == 0x000001, "Wrong size on ZoneShapeComponent_GetShapeType");
static_assert(offsetof(ZoneShapeComponent_GetShapeType, ReturnValue) == 0x000000, "Member 'ZoneShapeComponent_GetShapeType::ReturnValue' has a wrong offset!");

// Function ZoneGraph.ZoneShapeComponent.GetTags
// 0x0004 (0x0004 - 0x0000)
struct ZoneShapeComponent_GetTags final
{
public:
	struct FZoneGraphTagMask                      ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ZoneShapeComponent_GetTags) == 0x000004, "Wrong alignment on ZoneShapeComponent_GetTags");
static_assert(sizeof(ZoneShapeComponent_GetTags) == 0x000004, "Wrong size on ZoneShapeComponent_GetTags");
static_assert(offsetof(ZoneShapeComponent_GetTags, ReturnValue) == 0x000000, "Member 'ZoneShapeComponent_GetTags::ReturnValue' has a wrong offset!");

// Function ZoneGraph.ZoneShapeComponent.IsLaneProfileReversed
// 0x0001 (0x0001 - 0x0000)
struct ZoneShapeComponent_IsLaneProfileReversed final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ZoneShapeComponent_IsLaneProfileReversed) == 0x000001, "Wrong alignment on ZoneShapeComponent_IsLaneProfileReversed");
static_assert(sizeof(ZoneShapeComponent_IsLaneProfileReversed) == 0x000001, "Wrong size on ZoneShapeComponent_IsLaneProfileReversed");
static_assert(offsetof(ZoneShapeComponent_IsLaneProfileReversed, ReturnValue) == 0x000000, "Member 'ZoneShapeComponent_IsLaneProfileReversed::ReturnValue' has a wrong offset!");

}

