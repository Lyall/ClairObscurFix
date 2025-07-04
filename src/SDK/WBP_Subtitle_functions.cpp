﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Subtitle

#include "Basic.hpp"

#include "WBP_Subtitle_classes.hpp"
#include "WBP_Subtitle_parameters.hpp"


namespace SDK
{

// Function WBP_Subtitle.WBP_Subtitle_C.DisplaySubtitles
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    SpokenText                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// double                                  SubtitleDuration                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Subtitle_C::DisplaySubtitles(const class FString& SpokenText, double SubtitleDuration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Subtitle_C", "DisplaySubtitles");

	Params::WBP_Subtitle_C_DisplaySubtitles Parms{};

	Parms.SpokenText = std::move(SpokenText);
	Parms.SubtitleDuration = SubtitleDuration;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Subtitle.WBP_Subtitle_C.ExecuteUbergraph_WBP_Subtitle
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Subtitle_C::ExecuteUbergraph_WBP_Subtitle(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Subtitle_C", "ExecuteUbergraph_WBP_Subtitle");

	Params::WBP_Subtitle_C_ExecuteUbergraph_WBP_Subtitle Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

