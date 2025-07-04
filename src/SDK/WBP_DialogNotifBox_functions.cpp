﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_DialogNotifBox

#include "Basic.hpp"

#include "WBP_DialogNotifBox_classes.hpp"
#include "WBP_DialogNotifBox_parameters.hpp"


namespace SDK
{

// Function WBP_DialogNotifBox.WBP_DialogNotifBox_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_DialogNotifBox_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DialogNotifBox_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_DialogNotifBox.WBP_DialogNotifBox_C.DEBUG_SanitizeForTextToSpeech
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// const class FString&                    SourceString                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString*                          SanitizedSpokenText                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString*                          SanitizedForWordCount                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_DialogNotifBox_C::DEBUG_SanitizeForTextToSpeech(const class FString& SourceString, class FString* SanitizedSpokenText, class FString* SanitizedForWordCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DialogNotifBox_C", "DEBUG_SanitizeForTextToSpeech");

	Params::WBP_DialogNotifBox_C_DEBUG_SanitizeForTextToSpeech Parms{};

	Parms.SourceString = std::move(SourceString);

	UObject::ProcessEvent(Func, &Parms);

	if (SanitizedSpokenText != nullptr)
		*SanitizedSpokenText = std::move(Parms.SanitizedSpokenText);

	if (SanitizedForWordCount != nullptr)
		*SanitizedForWordCount = std::move(Parms.SanitizedForWordCount);
}


// Function WBP_DialogNotifBox.WBP_DialogNotifBox_C.ExecuteUbergraph_WBP_DialogNotifBox
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DialogNotifBox_C::ExecuteUbergraph_WBP_DialogNotifBox(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DialogNotifBox_C", "ExecuteUbergraph_WBP_DialogNotifBox");

	Params::WBP_DialogNotifBox_C_ExecuteUbergraph_WBP_DialogNotifBox Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DialogNotifBox.WBP_DialogNotifBox_C.GetCurrentLine
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FS_DialogueLine*                 Output                                                 (Parm, OutParm, HasGetValueTypeHash)

void UWBP_DialogNotifBox_C::GetCurrentLine(struct FS_DialogueLine* Output)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DialogNotifBox_C", "GetCurrentLine");

	Params::WBP_DialogNotifBox_C_GetCurrentLine Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Output != nullptr)
		*Output = std::move(Parms.Output);
}


// Function WBP_DialogNotifBox.WBP_DialogNotifBox_C.GetInWorldDialogueInPlay
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBP_DA_IWD_data_C*                ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

class UBP_DA_IWD_data_C* UWBP_DialogNotifBox_C::GetInWorldDialogueInPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DialogNotifBox_C", "GetInWorldDialogueInPlay");

	Params::WBP_DialogNotifBox_C_GetInWorldDialogueInPlay Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_DialogNotifBox.WBP_DialogNotifBox_C.InterruptDialog
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_DialogNotifBox_C::InterruptDialog()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DialogNotifBox_C", "InterruptDialog");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_DialogNotifBox.WBP_DialogNotifBox_C.OnAllDialogueLinesFinished
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    PlayDisappearAnimation                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DialogNotifBox_C::OnAllDialogueLinesFinished(bool PlayDisappearAnimation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DialogNotifBox_C", "OnAllDialogueLinesFinished");

	Params::WBP_DialogNotifBox_C_OnAllDialogueLinesFinished Parms{};

	Parms.PlayDisappearAnimation = PlayDisappearAnimation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DialogNotifBox.WBP_DialogNotifBox_C.OnCurrentLineTimerCompleted
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_DialogNotifBox_C::OnCurrentLineTimerCompleted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DialogNotifBox_C", "OnCurrentLineTimerCompleted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_DialogNotifBox.WBP_DialogNotifBox_C.OnDialogLineFinished
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_DialogNotifBox_C::OnDialogLineFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DialogNotifBox_C", "OnDialogLineFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_DialogNotifBox.WBP_DialogNotifBox_C.OnDialogueLineFinishedTimerEnd
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_DialogNotifBox_C::OnDialogueLineFinishedTimerEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DialogNotifBox_C", "OnDialogueLineFinishedTimerEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_DialogNotifBox.WBP_DialogNotifBox_C.OnDisappearAnimationFinished
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_DialogNotifBox_C::OnDisappearAnimationFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DialogNotifBox_C", "OnDisappearAnimationFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_DialogNotifBox.WBP_DialogNotifBox_C.PlayDialogueLineAudio
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*                       Sound                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_DialogNotifBox_C::PlayDialogueLineAudio(class USoundBase* Sound)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DialogNotifBox_C", "PlayDialogueLineAudio");

	Params::WBP_DialogNotifBox_C_PlayDialogueLineAudio Parms{};

	Parms.Sound = Sound;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DialogNotifBox.WBP_DialogNotifBox_C.PlayNextLine
// (BlueprintCallable, BlueprintEvent)

void UWBP_DialogNotifBox_C::PlayNextLine()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DialogNotifBox_C", "PlayNextLine");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_DialogNotifBox.WBP_DialogNotifBox_C.SetDialogPaused
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Paused                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DialogNotifBox_C::SetDialogPaused(bool Paused)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DialogNotifBox_C", "SetDialogPaused");

	Params::WBP_DialogNotifBox_C_SetDialogPaused Parms{};

	Parms.Paused = Paused;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DialogNotifBox.WBP_DialogNotifBox_C.SetGameplayPaused
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Paused                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DialogNotifBox_C::SetGameplayPaused(bool Paused)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DialogNotifBox_C", "SetGameplayPaused");

	Params::WBP_DialogNotifBox_C_SetGameplayPaused Parms{};

	Parms.Paused = Paused;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DialogNotifBox.WBP_DialogNotifBox_C.UpdatePortrait
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture**                        Portrait                                               (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_DialogNotifBox_C::UpdatePortrait(class UTexture** Portrait)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DialogNotifBox_C", "UpdatePortrait");

	Params::WBP_DialogNotifBox_C_UpdatePortrait Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Portrait != nullptr)
		*Portrait = Parms.Portrait;
}


// Function WBP_DialogNotifBox.WBP_DialogNotifBox_C.UpdateWidgets
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_DialogNotifBox_C::UpdateWidgets()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DialogNotifBox_C", "UpdateWidgets");

	UObject::ProcessEvent(Func, nullptr);
}

}

