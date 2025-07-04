﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_PostProcess_Hair_GUSTAVE

#include "Basic.hpp"

#include "KawaiiPhysics_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_PostProcess_Hair_GUSTAVE.ABP_PostProcess_Hair_GUSTAVE_C
// 0x10480 (0x107F0 - 0x0370)
class UABP_PostProcess_Hair_GUSTAVE_C final : public UAnimInstance
{
public:
	uint8                                         Pad_368[0x8];                                      // 0x0368(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0370(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0378(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0380(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0388(0x0020)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x03A8(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x03C8(0x0020)()
	uint8                                         Pad_3E8[0x8];                                      // 0x03E8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_33;                    // 0x03F0(0x07A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_32;                    // 0x0B90(0x07A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_31;                    // 0x1330(0x07A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_30;                    // 0x1AD0(0x07A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_29;                    // 0x2270(0x07A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_28;                    // 0x2A10(0x07A0)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose;                     // 0x31B0(0x00B8)()
	uint8                                         Pad_3268[0x8];                                     // 0x3268(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_27;                    // 0x3270(0x07A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_26;                    // 0x3A10(0x07A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_25;                    // 0x41B0(0x07A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_24;                    // 0x4950(0x07A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_23;                    // 0x50F0(0x07A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_22;                    // 0x5890(0x07A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_21;                    // 0x6030(0x07A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_20;                    // 0x67D0(0x07A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_19;                    // 0x6F70(0x07A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_18;                    // 0x7710(0x07A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_17;                    // 0x7EB0(0x07A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_16;                    // 0x8650(0x07A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_15;                    // 0x8DF0(0x07A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_14;                    // 0x9590(0x07A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_13;                    // 0x9D30(0x07A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_12;                    // 0xA4D0(0x07A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_11;                    // 0xAC70(0x07A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_10;                    // 0xB410(0x07A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_9;                     // 0xBBB0(0x07A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_8;                     // 0xC350(0x07A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_7;                     // 0xCAF0(0x07A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_6;                     // 0xD290(0x07A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_5;                     // 0xDA30(0x07A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_4;                     // 0xE1D0(0x07A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_3;                     // 0xE970(0x07A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_2;                     // 0xF110(0x07A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_1;                     // 0xF8B0(0x07A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics;                       // 0x10050(0x07A0)()

public:
	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph_0);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PostProcess_Hair_GUSTAVE_AnimGraphNode_KawaiiPhysics_053D35734D7A70083DAF27898D6C3304();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PostProcess_Hair_GUSTAVE_AnimGraphNode_KawaiiPhysics_1F40DAC047DD1650B9FF8B8A68E802AB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PostProcess_Hair_GUSTAVE_AnimGraphNode_KawaiiPhysics_20DA9A0B419DF33D5EA9ECB5410E8854();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PostProcess_Hair_GUSTAVE_AnimGraphNode_KawaiiPhysics_218C08294BCFCBBF72DD258C352C4EFD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PostProcess_Hair_GUSTAVE_AnimGraphNode_KawaiiPhysics_24CB4B1E4CF31F7E087C6CA0E24D3F08();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PostProcess_Hair_GUSTAVE_AnimGraphNode_KawaiiPhysics_574EFC8F4AA95406B9F296BA9B013E7A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PostProcess_Hair_GUSTAVE_AnimGraphNode_KawaiiPhysics_602D90CA4E0777FCAF65CDA93FD57967();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PostProcess_Hair_GUSTAVE_AnimGraphNode_KawaiiPhysics_61EBFE6D47C3001B64FEE59528E6E220();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PostProcess_Hair_GUSTAVE_AnimGraphNode_KawaiiPhysics_63EB7D124D9E27981B96C7B6C6FE007F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PostProcess_Hair_GUSTAVE_AnimGraphNode_KawaiiPhysics_64C7E4C648FD1D4F749FB59BF026568E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PostProcess_Hair_GUSTAVE_AnimGraphNode_KawaiiPhysics_6C961D204C2723F524BC65854DAA2B15();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PostProcess_Hair_GUSTAVE_AnimGraphNode_KawaiiPhysics_7A54FE70476DCAF7EE016C8EA713D84E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PostProcess_Hair_GUSTAVE_AnimGraphNode_KawaiiPhysics_7F28A26D4E5F74359FAF1D9F97BFFBF7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PostProcess_Hair_GUSTAVE_AnimGraphNode_KawaiiPhysics_85D250B24E53E436AE7B338F9A911BD5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PostProcess_Hair_GUSTAVE_AnimGraphNode_KawaiiPhysics_8B3F8AC649ACA5B2862769835423B4EB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PostProcess_Hair_GUSTAVE_AnimGraphNode_KawaiiPhysics_8E70FC58457AC8150B7F009F65BB2D07();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PostProcess_Hair_GUSTAVE_AnimGraphNode_KawaiiPhysics_92CF7A804487058E76627FA2AD998269();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PostProcess_Hair_GUSTAVE_AnimGraphNode_KawaiiPhysics_A8A76C3B4BCD67001578A39EC29A0F8C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PostProcess_Hair_GUSTAVE_AnimGraphNode_KawaiiPhysics_B934501143E842BD4F7F6D8FA2B3DA91();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PostProcess_Hair_GUSTAVE_AnimGraphNode_KawaiiPhysics_B99357C14720C0EEBB9908ACCE922970();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PostProcess_Hair_GUSTAVE_AnimGraphNode_KawaiiPhysics_C56355CF40C926DEA9579AA1B4861CFC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PostProcess_Hair_GUSTAVE_AnimGraphNode_KawaiiPhysics_D21F81B64A7097BF50655A9B11FB0EBD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PostProcess_Hair_GUSTAVE_AnimGraphNode_KawaiiPhysics_D2A7D8D749E1ED2855EE88A09F08BDA4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PostProcess_Hair_GUSTAVE_AnimGraphNode_KawaiiPhysics_D751BBF14F097E13E0099F9CF31CAACB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PostProcess_Hair_GUSTAVE_AnimGraphNode_KawaiiPhysics_DCAEE9B54C8384AD4E3D88AF4C6CE602();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PostProcess_Hair_GUSTAVE_AnimGraphNode_KawaiiPhysics_DCC80D744E2121951541F6A0FBB25027();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PostProcess_Hair_GUSTAVE_AnimGraphNode_KawaiiPhysics_DE447EA64CE2D74F57D3EEAF61EC2AB6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PostProcess_Hair_GUSTAVE_AnimGraphNode_KawaiiPhysics_DEA11C844F630E1E8BDA43958852AA7F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PostProcess_Hair_GUSTAVE_AnimGraphNode_KawaiiPhysics_E306D650439EE15D73DA81AD37C1794C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PostProcess_Hair_GUSTAVE_AnimGraphNode_KawaiiPhysics_E6605EA241E4880B3754F0B2474B4AB9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PostProcess_Hair_GUSTAVE_AnimGraphNode_KawaiiPhysics_F22D054240D66A186A4A8C9F597BDDC1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PostProcess_Hair_GUSTAVE_AnimGraphNode_KawaiiPhysics_F2A098EE4E6B9EEC15FFAFBFEEE82E54();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PostProcess_Hair_GUSTAVE_AnimGraphNode_KawaiiPhysics_FD11C709444A114D6BE1588F93C9583B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PostProcess_Hair_GUSTAVE_AnimGraphNode_KawaiiPhysics_FDADD76B4A02DB7FFF531CA0066260B3();
	void ExecuteUbergraph_ABP_PostProcess_Hair_GUSTAVE(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_PostProcess_Hair_GUSTAVE_C">();
	}
	static class UABP_PostProcess_Hair_GUSTAVE_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_PostProcess_Hair_GUSTAVE_C>();
	}
};
static_assert(alignof(UABP_PostProcess_Hair_GUSTAVE_C) == 0x000010, "Wrong alignment on UABP_PostProcess_Hair_GUSTAVE_C");
static_assert(sizeof(UABP_PostProcess_Hair_GUSTAVE_C) == 0x0107F0, "Wrong size on UABP_PostProcess_Hair_GUSTAVE_C");
static_assert(offsetof(UABP_PostProcess_Hair_GUSTAVE_C, UberGraphFrame) == 0x000370, "Member 'UABP_PostProcess_Hair_GUSTAVE_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Hair_GUSTAVE_C, AnimBlueprintExtension_PropertyAccess) == 0x000378, "Member 'UABP_PostProcess_Hair_GUSTAVE_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Hair_GUSTAVE_C, AnimBlueprintExtension_Base) == 0x000380, "Member 'UABP_PostProcess_Hair_GUSTAVE_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Hair_GUSTAVE_C, AnimGraphNode_Root) == 0x000388, "Member 'UABP_PostProcess_Hair_GUSTAVE_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Hair_GUSTAVE_C, AnimGraphNode_LocalToComponentSpace) == 0x0003A8, "Member 'UABP_PostProcess_Hair_GUSTAVE_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Hair_GUSTAVE_C, AnimGraphNode_ComponentToLocalSpace) == 0x0003C8, "Member 'UABP_PostProcess_Hair_GUSTAVE_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Hair_GUSTAVE_C, AnimGraphNode_KawaiiPhysics_33) == 0x0003F0, "Member 'UABP_PostProcess_Hair_GUSTAVE_C::AnimGraphNode_KawaiiPhysics_33' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Hair_GUSTAVE_C, AnimGraphNode_KawaiiPhysics_32) == 0x000B90, "Member 'UABP_PostProcess_Hair_GUSTAVE_C::AnimGraphNode_KawaiiPhysics_32' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Hair_GUSTAVE_C, AnimGraphNode_KawaiiPhysics_31) == 0x001330, "Member 'UABP_PostProcess_Hair_GUSTAVE_C::AnimGraphNode_KawaiiPhysics_31' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Hair_GUSTAVE_C, AnimGraphNode_KawaiiPhysics_30) == 0x001AD0, "Member 'UABP_PostProcess_Hair_GUSTAVE_C::AnimGraphNode_KawaiiPhysics_30' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Hair_GUSTAVE_C, AnimGraphNode_KawaiiPhysics_29) == 0x002270, "Member 'UABP_PostProcess_Hair_GUSTAVE_C::AnimGraphNode_KawaiiPhysics_29' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Hair_GUSTAVE_C, AnimGraphNode_KawaiiPhysics_28) == 0x002A10, "Member 'UABP_PostProcess_Hair_GUSTAVE_C::AnimGraphNode_KawaiiPhysics_28' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Hair_GUSTAVE_C, AnimGraphNode_LinkedInputPose) == 0x0031B0, "Member 'UABP_PostProcess_Hair_GUSTAVE_C::AnimGraphNode_LinkedInputPose' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Hair_GUSTAVE_C, AnimGraphNode_KawaiiPhysics_27) == 0x003270, "Member 'UABP_PostProcess_Hair_GUSTAVE_C::AnimGraphNode_KawaiiPhysics_27' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Hair_GUSTAVE_C, AnimGraphNode_KawaiiPhysics_26) == 0x003A10, "Member 'UABP_PostProcess_Hair_GUSTAVE_C::AnimGraphNode_KawaiiPhysics_26' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Hair_GUSTAVE_C, AnimGraphNode_KawaiiPhysics_25) == 0x0041B0, "Member 'UABP_PostProcess_Hair_GUSTAVE_C::AnimGraphNode_KawaiiPhysics_25' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Hair_GUSTAVE_C, AnimGraphNode_KawaiiPhysics_24) == 0x004950, "Member 'UABP_PostProcess_Hair_GUSTAVE_C::AnimGraphNode_KawaiiPhysics_24' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Hair_GUSTAVE_C, AnimGraphNode_KawaiiPhysics_23) == 0x0050F0, "Member 'UABP_PostProcess_Hair_GUSTAVE_C::AnimGraphNode_KawaiiPhysics_23' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Hair_GUSTAVE_C, AnimGraphNode_KawaiiPhysics_22) == 0x005890, "Member 'UABP_PostProcess_Hair_GUSTAVE_C::AnimGraphNode_KawaiiPhysics_22' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Hair_GUSTAVE_C, AnimGraphNode_KawaiiPhysics_21) == 0x006030, "Member 'UABP_PostProcess_Hair_GUSTAVE_C::AnimGraphNode_KawaiiPhysics_21' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Hair_GUSTAVE_C, AnimGraphNode_KawaiiPhysics_20) == 0x0067D0, "Member 'UABP_PostProcess_Hair_GUSTAVE_C::AnimGraphNode_KawaiiPhysics_20' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Hair_GUSTAVE_C, AnimGraphNode_KawaiiPhysics_19) == 0x006F70, "Member 'UABP_PostProcess_Hair_GUSTAVE_C::AnimGraphNode_KawaiiPhysics_19' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Hair_GUSTAVE_C, AnimGraphNode_KawaiiPhysics_18) == 0x007710, "Member 'UABP_PostProcess_Hair_GUSTAVE_C::AnimGraphNode_KawaiiPhysics_18' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Hair_GUSTAVE_C, AnimGraphNode_KawaiiPhysics_17) == 0x007EB0, "Member 'UABP_PostProcess_Hair_GUSTAVE_C::AnimGraphNode_KawaiiPhysics_17' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Hair_GUSTAVE_C, AnimGraphNode_KawaiiPhysics_16) == 0x008650, "Member 'UABP_PostProcess_Hair_GUSTAVE_C::AnimGraphNode_KawaiiPhysics_16' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Hair_GUSTAVE_C, AnimGraphNode_KawaiiPhysics_15) == 0x008DF0, "Member 'UABP_PostProcess_Hair_GUSTAVE_C::AnimGraphNode_KawaiiPhysics_15' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Hair_GUSTAVE_C, AnimGraphNode_KawaiiPhysics_14) == 0x009590, "Member 'UABP_PostProcess_Hair_GUSTAVE_C::AnimGraphNode_KawaiiPhysics_14' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Hair_GUSTAVE_C, AnimGraphNode_KawaiiPhysics_13) == 0x009D30, "Member 'UABP_PostProcess_Hair_GUSTAVE_C::AnimGraphNode_KawaiiPhysics_13' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Hair_GUSTAVE_C, AnimGraphNode_KawaiiPhysics_12) == 0x00A4D0, "Member 'UABP_PostProcess_Hair_GUSTAVE_C::AnimGraphNode_KawaiiPhysics_12' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Hair_GUSTAVE_C, AnimGraphNode_KawaiiPhysics_11) == 0x00AC70, "Member 'UABP_PostProcess_Hair_GUSTAVE_C::AnimGraphNode_KawaiiPhysics_11' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Hair_GUSTAVE_C, AnimGraphNode_KawaiiPhysics_10) == 0x00B410, "Member 'UABP_PostProcess_Hair_GUSTAVE_C::AnimGraphNode_KawaiiPhysics_10' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Hair_GUSTAVE_C, AnimGraphNode_KawaiiPhysics_9) == 0x00BBB0, "Member 'UABP_PostProcess_Hair_GUSTAVE_C::AnimGraphNode_KawaiiPhysics_9' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Hair_GUSTAVE_C, AnimGraphNode_KawaiiPhysics_8) == 0x00C350, "Member 'UABP_PostProcess_Hair_GUSTAVE_C::AnimGraphNode_KawaiiPhysics_8' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Hair_GUSTAVE_C, AnimGraphNode_KawaiiPhysics_7) == 0x00CAF0, "Member 'UABP_PostProcess_Hair_GUSTAVE_C::AnimGraphNode_KawaiiPhysics_7' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Hair_GUSTAVE_C, AnimGraphNode_KawaiiPhysics_6) == 0x00D290, "Member 'UABP_PostProcess_Hair_GUSTAVE_C::AnimGraphNode_KawaiiPhysics_6' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Hair_GUSTAVE_C, AnimGraphNode_KawaiiPhysics_5) == 0x00DA30, "Member 'UABP_PostProcess_Hair_GUSTAVE_C::AnimGraphNode_KawaiiPhysics_5' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Hair_GUSTAVE_C, AnimGraphNode_KawaiiPhysics_4) == 0x00E1D0, "Member 'UABP_PostProcess_Hair_GUSTAVE_C::AnimGraphNode_KawaiiPhysics_4' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Hair_GUSTAVE_C, AnimGraphNode_KawaiiPhysics_3) == 0x00E970, "Member 'UABP_PostProcess_Hair_GUSTAVE_C::AnimGraphNode_KawaiiPhysics_3' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Hair_GUSTAVE_C, AnimGraphNode_KawaiiPhysics_2) == 0x00F110, "Member 'UABP_PostProcess_Hair_GUSTAVE_C::AnimGraphNode_KawaiiPhysics_2' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Hair_GUSTAVE_C, AnimGraphNode_KawaiiPhysics_1) == 0x00F8B0, "Member 'UABP_PostProcess_Hair_GUSTAVE_C::AnimGraphNode_KawaiiPhysics_1' has a wrong offset!");
static_assert(offsetof(UABP_PostProcess_Hair_GUSTAVE_C, AnimGraphNode_KawaiiPhysics) == 0x010050, "Member 'UABP_PostProcess_Hair_GUSTAVE_C::AnimGraphNode_KawaiiPhysics' has a wrong offset!");

}

