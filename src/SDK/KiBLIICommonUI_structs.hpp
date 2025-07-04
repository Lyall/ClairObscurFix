﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KiBLIICommonUI

#include "Basic.hpp"


namespace SDK
{

// ScriptStruct KiBLIICommonUI.KiBLIIKeysWidgetData
// 0x0038 (0x0038 - 0x0000)
struct FKiBLIIKeysWidgetData final
{
public:
	uint8                                         Pad_0[0x10];                                       // 0x0000(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	class UKiBLIIKeysWidget*                      Widget;                                            // 0x0010(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextureRenderTarget2D*                 Texture;                                           // 0x0018(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_20[0x18];                                      // 0x0020(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FKiBLIIKeysWidgetData) == 0x000008, "Wrong alignment on FKiBLIIKeysWidgetData");
static_assert(sizeof(FKiBLIIKeysWidgetData) == 0x000038, "Wrong size on FKiBLIIKeysWidgetData");
static_assert(offsetof(FKiBLIIKeysWidgetData, Widget) == 0x000010, "Member 'FKiBLIIKeysWidgetData::Widget' has a wrong offset!");
static_assert(offsetof(FKiBLIIKeysWidgetData, Texture) == 0x000018, "Member 'FKiBLIIKeysWidgetData::Texture' has a wrong offset!");

}

