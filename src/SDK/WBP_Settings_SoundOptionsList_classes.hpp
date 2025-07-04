﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Settings_SoundOptionsList

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "WBP_Settings_OptionsList_Abstract_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Settings_SoundOptionsList.WBP_Settings_SoundOptionsList_C
// 0x0068 (0x04A0 - 0x0438)
class UWBP_Settings_SoundOptionsList_C final : public UWBP_Settings_OptionsList_Abstract_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_WBP_Settings_SoundOptionsList_C;    // 0x0438(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_Settings_OptionEntriesHeader_C*    WBP_Settings_OptionEntriesHeader_Volume;           // 0x0440(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_OptionEntry_C*            WBP_Settings_OptionEntry_MasterVolume;             // 0x0448(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_OptionEntry_C*            WBP_Settings_OptionEntry_MusicVolume;              // 0x0450(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_OptionEntry_C*            WBP_Settings_OptionEntry_SpecialEffectsVolume;     // 0x0458(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_OptionEntry_C*            WBP_Settings_OptionEntry_UserInterfaceVolume;      // 0x0460(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_OptionEntry_C*            WBP_Settings_OptionEntry_VoiceVolume;              // 0x0468(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SliderSelector_C*                  WBP_SliderSelector_MasterVolume;                   // 0x0470(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SliderSelector_C*                  WBP_SliderSelector_MusicVolume;                    // 0x0478(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SliderSelector_C*                  WBP_SliderSelector_SpecialEffectsVolume;           // 0x0480(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SliderSelector_C*                  WBP_SliderSelector_UserInterfaceVolume;            // 0x0488(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SliderSelector_C*                  WBP_SliderSelector_VoiceVolume;                    // 0x0490(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UConfigurableGameUserSettings*          GameUserSettings;                                  // 0x0498(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void BindOnOptionEntryFocused(const TDelegate<void(class UWBP_Settings_OptionEntry_C* Widget)>& Event);
	void BndEvt__WBP_Settings_SoundOptionsList_WBP_SliderSelector_MasterVolume_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature(double Value, class UUserWidget* Widget);
	void BndEvt__WBP_Settings_SoundOptionsList_WBP_SliderSelector_MusicVolume_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature(double Value, class UUserWidget* Widget);
	void BndEvt__WBP_Settings_SoundOptionsList_WBP_SliderSelector_SpecialEffectsVolume_K2Node_ComponentBoundEvent_5_OnValueChanged__DelegateSignature(double Value, class UUserWidget* Widget);
	void BndEvt__WBP_Settings_SoundOptionsList_WBP_SliderSelector_UserInterfaceVolume_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature(double Value, class UUserWidget* Widget);
	void BndEvt__WBP_Settings_SoundOptionsList_WBP_SliderSelector_VoiceVolume_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature(double Value, class UUserWidget* Widget);
	void ExecuteUbergraph_WBP_Settings_SoundOptionsList(int32 EntryPoint);
	void LoadUserSettings();
	void SetupAvailableOptions();
	void UnbindOnOptionEntryFocused(const TDelegate<void(class UWBP_Settings_OptionEntry_C* Widget)>& Event);

	class UWidget* BP_GetDesiredFocusTarget() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Settings_SoundOptionsList_C">();
	}
	static class UWBP_Settings_SoundOptionsList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Settings_SoundOptionsList_C>();
	}
};
static_assert(alignof(UWBP_Settings_SoundOptionsList_C) == 0x000008, "Wrong alignment on UWBP_Settings_SoundOptionsList_C");
static_assert(sizeof(UWBP_Settings_SoundOptionsList_C) == 0x0004A0, "Wrong size on UWBP_Settings_SoundOptionsList_C");
static_assert(offsetof(UWBP_Settings_SoundOptionsList_C, UberGraphFrame_WBP_Settings_SoundOptionsList_C) == 0x000438, "Member 'UWBP_Settings_SoundOptionsList_C::UberGraphFrame_WBP_Settings_SoundOptionsList_C' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_SoundOptionsList_C, WBP_Settings_OptionEntriesHeader_Volume) == 0x000440, "Member 'UWBP_Settings_SoundOptionsList_C::WBP_Settings_OptionEntriesHeader_Volume' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_SoundOptionsList_C, WBP_Settings_OptionEntry_MasterVolume) == 0x000448, "Member 'UWBP_Settings_SoundOptionsList_C::WBP_Settings_OptionEntry_MasterVolume' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_SoundOptionsList_C, WBP_Settings_OptionEntry_MusicVolume) == 0x000450, "Member 'UWBP_Settings_SoundOptionsList_C::WBP_Settings_OptionEntry_MusicVolume' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_SoundOptionsList_C, WBP_Settings_OptionEntry_SpecialEffectsVolume) == 0x000458, "Member 'UWBP_Settings_SoundOptionsList_C::WBP_Settings_OptionEntry_SpecialEffectsVolume' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_SoundOptionsList_C, WBP_Settings_OptionEntry_UserInterfaceVolume) == 0x000460, "Member 'UWBP_Settings_SoundOptionsList_C::WBP_Settings_OptionEntry_UserInterfaceVolume' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_SoundOptionsList_C, WBP_Settings_OptionEntry_VoiceVolume) == 0x000468, "Member 'UWBP_Settings_SoundOptionsList_C::WBP_Settings_OptionEntry_VoiceVolume' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_SoundOptionsList_C, WBP_SliderSelector_MasterVolume) == 0x000470, "Member 'UWBP_Settings_SoundOptionsList_C::WBP_SliderSelector_MasterVolume' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_SoundOptionsList_C, WBP_SliderSelector_MusicVolume) == 0x000478, "Member 'UWBP_Settings_SoundOptionsList_C::WBP_SliderSelector_MusicVolume' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_SoundOptionsList_C, WBP_SliderSelector_SpecialEffectsVolume) == 0x000480, "Member 'UWBP_Settings_SoundOptionsList_C::WBP_SliderSelector_SpecialEffectsVolume' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_SoundOptionsList_C, WBP_SliderSelector_UserInterfaceVolume) == 0x000488, "Member 'UWBP_Settings_SoundOptionsList_C::WBP_SliderSelector_UserInterfaceVolume' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_SoundOptionsList_C, WBP_SliderSelector_VoiceVolume) == 0x000490, "Member 'UWBP_Settings_SoundOptionsList_C::WBP_SliderSelector_VoiceVolume' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_SoundOptionsList_C, GameUserSettings) == 0x000498, "Member 'UWBP_Settings_SoundOptionsList_C::GameUserSettings' has a wrong offset!");

}

