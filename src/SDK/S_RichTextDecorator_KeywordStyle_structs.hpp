﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_RichTextDecorator_KeywordStyle

#include "Basic.hpp"

#include "SandFall_structs.hpp"
#include "SlateCore_structs.hpp"
#include "E_RichTextDecorator_Keyword_IconPosition_structs.hpp"


namespace SDK
{

// UserDefinedStruct S_RichTextDecorator_KeywordStyle.S_RichTextDecorator_KeywordStyle
// 0x0048 (0x0048 - 0x0000)
struct FS_RichTextDecorator_KeywordStyle final
{
public:
	struct FFontInfoMinimal                       TextStyle_31_AD6A95F242DE6A1E90C09690B51BFCB0;     // 0x0000(0x0010)(Edit, BlueprintVisible, NoDestructor)
	struct FSlateColor                            TextColor_13_3C7166F64784F7065595BF9CC074288D;     // 0x0010(0x0014)(Edit, BlueprintVisible)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             Icon_8_C0475B6E417805203DC4318CE1FED829;           // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            IconColor_34_55DFBB104D135F5EDA20308F53A21DF3;     // 0x0030(0x0014)(Edit, BlueprintVisible)
	E_RichTextDecorator_Keyword_IconPosition      IconPosition_37_F50C2C9044CFCA8A0EA72FAB306567C2;  // 0x0044(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FS_RichTextDecorator_KeywordStyle) == 0x000008, "Wrong alignment on FS_RichTextDecorator_KeywordStyle");
static_assert(sizeof(FS_RichTextDecorator_KeywordStyle) == 0x000048, "Wrong size on FS_RichTextDecorator_KeywordStyle");
static_assert(offsetof(FS_RichTextDecorator_KeywordStyle, TextStyle_31_AD6A95F242DE6A1E90C09690B51BFCB0) == 0x000000, "Member 'FS_RichTextDecorator_KeywordStyle::TextStyle_31_AD6A95F242DE6A1E90C09690B51BFCB0' has a wrong offset!");
static_assert(offsetof(FS_RichTextDecorator_KeywordStyle, TextColor_13_3C7166F64784F7065595BF9CC074288D) == 0x000010, "Member 'FS_RichTextDecorator_KeywordStyle::TextColor_13_3C7166F64784F7065595BF9CC074288D' has a wrong offset!");
static_assert(offsetof(FS_RichTextDecorator_KeywordStyle, Icon_8_C0475B6E417805203DC4318CE1FED829) == 0x000028, "Member 'FS_RichTextDecorator_KeywordStyle::Icon_8_C0475B6E417805203DC4318CE1FED829' has a wrong offset!");
static_assert(offsetof(FS_RichTextDecorator_KeywordStyle, IconColor_34_55DFBB104D135F5EDA20308F53A21DF3) == 0x000030, "Member 'FS_RichTextDecorator_KeywordStyle::IconColor_34_55DFBB104D135F5EDA20308F53A21DF3' has a wrong offset!");
static_assert(offsetof(FS_RichTextDecorator_KeywordStyle, IconPosition_37_F50C2C9044CFCA8A0EA72FAB306567C2) == 0x000044, "Member 'FS_RichTextDecorator_KeywordStyle::IconPosition_37_F50C2C9044CFCA8A0EA72FAB306567C2' has a wrong offset!");

}

