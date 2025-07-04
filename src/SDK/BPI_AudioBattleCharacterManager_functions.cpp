﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_AudioBattleCharacterManager

#include "Basic.hpp"

#include "BPI_AudioBattleCharacterManager_classes.hpp"
#include "BPI_AudioBattleCharacterManager_parameters.hpp"


namespace SDK
{

// Function BPI_AudioBattleCharacterManager.BPI_AudioBattleCharacterManager_C.Activate ControlBusMix
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundControlBusMix*              Activate_ControlBusMix_0                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPI_AudioBattleCharacterManager_C::Activate_ControlBusMix(class USoundControlBusMix* Activate_ControlBusMix_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPI_AudioBattleCharacterManager_C", "Activate ControlBusMix");

	Params::BPI_AudioBattleCharacterManager_C_Activate_ControlBusMix Parms{};

	Parms.Activate_ControlBusMix_0 = Activate_ControlBusMix_0;

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function BPI_AudioBattleCharacterManager.BPI_AudioBattleCharacterManager_C.Battle_Stop_AC_SFX_01
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_AudioBattleCharacterManager_C::Battle_Stop_AC_SFX_01()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPI_AudioBattleCharacterManager_C", "Battle_Stop_AC_SFX_01");

	AsUObject()->ProcessEvent(Func, nullptr);
}


// Function BPI_AudioBattleCharacterManager.BPI_AudioBattleCharacterManager_C.Deactivate ControlBusMix
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundControlBusMix*              Deactivate_ControlBusMix_0                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPI_AudioBattleCharacterManager_C::Deactivate_ControlBusMix(class USoundControlBusMix* Deactivate_ControlBusMix_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPI_AudioBattleCharacterManager_C", "Deactivate ControlBusMix");

	Params::BPI_AudioBattleCharacterManager_C_Deactivate_ControlBusMix Parms{};

	Parms.Deactivate_ControlBusMix_0 = Deactivate_ControlBusMix_0;

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function BPI_AudioBattleCharacterManager.BPI_AudioBattleCharacterManager_C.PlayBattleCommonSFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBattleCommonSFX                        Battle_Common_SFX                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ShouldAttachToComponent_                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_AudioBattleCharacterManager_C::PlayBattleCommonSFX(EBattleCommonSFX Battle_Common_SFX, bool ShouldAttachToComponent_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPI_AudioBattleCharacterManager_C", "PlayBattleCommonSFX");

	Params::BPI_AudioBattleCharacterManager_C_PlayBattleCommonSFX Parms{};

	Parms.Battle_Common_SFX = Battle_Common_SFX;
	Parms.ShouldAttachToComponent_ = ShouldAttachToComponent_;

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function BPI_AudioBattleCharacterManager.BPI_AudioBattleCharacterManager_C.PlayBattleFoley
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMetaSoundSource*                 BattleFoley                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundAttenuation*                AttenuationOverride                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    ShouldAttachToComponent_                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_AudioBattleCharacterManager_C::PlayBattleFoley(class UMetaSoundSource* BattleFoley, class USoundAttenuation* AttenuationOverride, bool ShouldAttachToComponent_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPI_AudioBattleCharacterManager_C", "PlayBattleFoley");

	Params::BPI_AudioBattleCharacterManager_C_PlayBattleFoley Parms{};

	Parms.BattleFoley = BattleFoley;
	Parms.AttenuationOverride = AttenuationOverride;
	Parms.ShouldAttachToComponent_ = ShouldAttachToComponent_;

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function BPI_AudioBattleCharacterManager.BPI_AudioBattleCharacterManager_C.PlayBattleFootstepEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFootstepsType                          FootstepType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FVector&                   Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EPhysicalSurface                        SurfaceType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ShouldAttachToComponent_                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_AudioBattleCharacterManager_C::PlayBattleFootstepEvent(EFootstepsType FootstepType, const struct FVector& Location, EPhysicalSurface SurfaceType, bool ShouldAttachToComponent_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPI_AudioBattleCharacterManager_C", "PlayBattleFootstepEvent");

	Params::BPI_AudioBattleCharacterManager_C_PlayBattleFootstepEvent Parms{};

	Parms.FootstepType = FootstepType;
	Parms.Location = std::move(Location);
	Parms.SurfaceType = SurfaceType;
	Parms.ShouldAttachToComponent_ = ShouldAttachToComponent_;

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function BPI_AudioBattleCharacterManager.BPI_AudioBattleCharacterManager_C.PlayBattleOno
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EOnoType                                OnoType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_AudioBattleCharacterManager_C::PlayBattleOno(EOnoType OnoType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPI_AudioBattleCharacterManager_C", "PlayBattleOno");

	Params::BPI_AudioBattleCharacterManager_C_PlayBattleOno Parms{};

	Parms.OnoType = OnoType;

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function BPI_AudioBattleCharacterManager.BPI_AudioBattleCharacterManager_C.PlayBattleSFXEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMetaSoundSource*                 BattleSFX                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundAttenuation*                AttenuationOverride                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    ShouldAttachToComponent_                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_AudioBattleCharacterManager_C::PlayBattleSFXEvent(class UMetaSoundSource* BattleSFX, class USoundAttenuation* AttenuationOverride, bool ShouldAttachToComponent_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPI_AudioBattleCharacterManager_C", "PlayBattleSFXEvent");

	Params::BPI_AudioBattleCharacterManager_C_PlayBattleSFXEvent Parms{};

	Parms.BattleSFX = BattleSFX;
	Parms.AttenuationOverride = AttenuationOverride;
	Parms.ShouldAttachToComponent_ = ShouldAttachToComponent_;

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function BPI_AudioBattleCharacterManager.BPI_AudioBattleCharacterManager_C.PlayBattleSoundProto
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*                       BattlePlaceholder                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPI_AudioBattleCharacterManager_C::PlayBattleSoundProto(class USoundBase* BattlePlaceholder)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPI_AudioBattleCharacterManager_C", "PlayBattleSoundProto");

	Params::BPI_AudioBattleCharacterManager_C_PlayBattleSoundProto Parms{};

	Parms.BattlePlaceholder = BattlePlaceholder;

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function BPI_AudioBattleCharacterManager.BPI_AudioBattleCharacterManager_C.PlayBattleUi
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUiBattleType                           UI_Battle_Type                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ShouldAttachToComponent_                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_AudioBattleCharacterManager_C::PlayBattleUi(EUiBattleType UI_Battle_Type, bool ShouldAttachToComponent_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPI_AudioBattleCharacterManager_C", "PlayBattleUi");

	Params::BPI_AudioBattleCharacterManager_C_PlayBattleUi Parms{};

	Parms.UI_Battle_Type = UI_Battle_Type;
	Parms.ShouldAttachToComponent_ = ShouldAttachToComponent_;

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function BPI_AudioBattleCharacterManager.BPI_AudioBattleCharacterManager_C.PlayBattleVocalEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMetaSoundSource*                 BattleVocal                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundAttenuation*                AttenuationOverride                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    ShouldAttachToComponent_                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_AudioBattleCharacterManager_C::PlayBattleVocalEvent(class UMetaSoundSource* BattleVocal, class USoundAttenuation* AttenuationOverride, bool ShouldAttachToComponent_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPI_AudioBattleCharacterManager_C", "PlayBattleVocalEvent");

	Params::BPI_AudioBattleCharacterManager_C_PlayBattleVocalEvent Parms{};

	Parms.BattleVocal = BattleVocal;
	Parms.AttenuationOverride = AttenuationOverride;
	Parms.ShouldAttachToComponent_ = ShouldAttachToComponent_;

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function BPI_AudioBattleCharacterManager.BPI_AudioBattleCharacterManager_C.PlayBattleWeaponLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMetaSoundSource*                 BattleWeaponLeft                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundAttenuation*                AttenuationOverride                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    ShouldAttachToComponent_                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_AudioBattleCharacterManager_C::PlayBattleWeaponLeft(class UMetaSoundSource* BattleWeaponLeft, class USoundAttenuation* AttenuationOverride, bool ShouldAttachToComponent_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPI_AudioBattleCharacterManager_C", "PlayBattleWeaponLeft");

	Params::BPI_AudioBattleCharacterManager_C_PlayBattleWeaponLeft Parms{};

	Parms.BattleWeaponLeft = BattleWeaponLeft;
	Parms.AttenuationOverride = AttenuationOverride;
	Parms.ShouldAttachToComponent_ = ShouldAttachToComponent_;

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function BPI_AudioBattleCharacterManager.BPI_AudioBattleCharacterManager_C.PlayBattleWeaponRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMetaSoundSource*                 BattleWeaponRight                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundAttenuation*                AttenuationOverride                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    ShouldAttachToComponent_                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_AudioBattleCharacterManager_C::PlayBattleWeaponRight(class UMetaSoundSource* BattleWeaponRight, class USoundAttenuation* AttenuationOverride, bool ShouldAttachToComponent_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPI_AudioBattleCharacterManager_C", "PlayBattleWeaponRight");

	Params::BPI_AudioBattleCharacterManager_C_PlayBattleWeaponRight Parms{};

	Parms.BattleWeaponRight = BattleWeaponRight;
	Parms.AttenuationOverride = AttenuationOverride;
	Parms.ShouldAttachToComponent_ = ShouldAttachToComponent_;

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function BPI_AudioBattleCharacterManager.BPI_AudioBattleCharacterManager_C.PlayDeathCommon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundAttenuation*                AttenuationOverride                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    ShouldAttachToComponent_                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_AudioBattleCharacterManager_C::PlayDeathCommon(class USoundAttenuation* AttenuationOverride, bool ShouldAttachToComponent_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPI_AudioBattleCharacterManager_C", "PlayDeathCommon");

	Params::BPI_AudioBattleCharacterManager_C_PlayDeathCommon Parms{};

	Parms.AttenuationOverride = AttenuationOverride;
	Parms.ShouldAttachToComponent_ = ShouldAttachToComponent_;

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function BPI_AudioBattleCharacterManager.BPI_AudioBattleCharacterManager_C.PlayDeathCommon_Bodyfall
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundAttenuation*                AttenuationOverride                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    ShouldAttachToComponent_                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_AudioBattleCharacterManager_C::PlayDeathCommon_Bodyfall(class USoundAttenuation* AttenuationOverride, bool ShouldAttachToComponent_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPI_AudioBattleCharacterManager_C", "PlayDeathCommon_Bodyfall");

	Params::BPI_AudioBattleCharacterManager_C_PlayDeathCommon_Bodyfall Parms{};

	Parms.AttenuationOverride = AttenuationOverride;
	Parms.ShouldAttachToComponent_ = ShouldAttachToComponent_;

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function BPI_AudioBattleCharacterManager.BPI_AudioBattleCharacterManager_C.PlayHitBy_CallByBP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBattleHitBy                            Hit_By_CallByBP                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_AudioBattleCharacterManager_C::PlayHitBy_CallByBP(EBattleHitBy Hit_By_CallByBP)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPI_AudioBattleCharacterManager_C", "PlayHitBy_CallByBP");

	Params::BPI_AudioBattleCharacterManager_C_PlayHitBy_CallByBP Parms{};

	Parms.Hit_By_CallByBP = Hit_By_CallByBP;

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function BPI_AudioBattleCharacterManager.BPI_AudioBattleCharacterManager_C.PlayHitByCommonEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundAttenuation*                AttenuationOverride                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    ShouldAttachToComponent_                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_AudioBattleCharacterManager_C::PlayHitByCommonEvent(class USoundAttenuation* AttenuationOverride, bool ShouldAttachToComponent_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPI_AudioBattleCharacterManager_C", "PlayHitByCommonEvent");

	Params::BPI_AudioBattleCharacterManager_C_PlayHitByCommonEvent Parms{};

	Parms.AttenuationOverride = AttenuationOverride;
	Parms.ShouldAttachToComponent_ = ShouldAttachToComponent_;

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function BPI_AudioBattleCharacterManager.BPI_AudioBattleCharacterManager_C.PlayHitByEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMetaSoundSource*                 BattleHitBy                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    ShouldAttachToComponent_                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_AudioBattleCharacterManager_C::PlayHitByEvent(class UMetaSoundSource* BattleHitBy, bool ShouldAttachToComponent_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPI_AudioBattleCharacterManager_C", "PlayHitByEvent");

	Params::BPI_AudioBattleCharacterManager_C_PlayHitByEvent Parms{};

	Parms.BattleHitBy = BattleHitBy;
	Parms.ShouldAttachToComponent_ = ShouldAttachToComponent_;

	AsUObject()->ProcessEvent(Func, &Parms);
}

}

