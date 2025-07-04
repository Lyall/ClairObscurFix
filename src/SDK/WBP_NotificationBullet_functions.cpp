﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_NotificationBullet

#include "Basic.hpp"

#include "WBP_NotificationBullet_classes.hpp"
#include "WBP_NotificationBullet_parameters.hpp"


namespace SDK
{

// Function WBP_NotificationBullet.WBP_NotificationBullet_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_NotificationBullet_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NotificationBullet_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_NotificationBullet.WBP_NotificationBullet_C.ExecuteUbergraph_WBP_NotificationBullet
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_NotificationBullet_C::ExecuteUbergraph_WBP_NotificationBullet(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NotificationBullet_C", "ExecuteUbergraph_WBP_NotificationBullet");

	Params::WBP_NotificationBullet_C_ExecuteUbergraph_WBP_NotificationBullet Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_NotificationBullet.WBP_NotificationBullet_C.Finished_339394B94330A31107E79382211BD141
// (BlueprintCallable, BlueprintEvent)

void UWBP_NotificationBullet_C::Finished_339394B94330A31107E79382211BD141()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NotificationBullet_C", "Finished_339394B94330A31107E79382211BD141");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_NotificationBullet.WBP_NotificationBullet_C.HideNotification
// (BlueprintCallable, BlueprintEvent)

void UWBP_NotificationBullet_C::HideNotification()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NotificationBullet_C", "HideNotification");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_NotificationBullet.WBP_NotificationBullet_C.LoadNotificationData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IBPI_UINotifiedObject_C>NotifiedObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_NotificationBullet_C::LoadNotificationData(TScriptInterface<class IBPI_UINotifiedObject_C> NotifiedObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NotificationBullet_C", "LoadNotificationData");

	Params::WBP_NotificationBullet_C_LoadNotificationData Parms{};

	Parms.NotifiedObject = NotifiedObject;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_NotificationBullet.WBP_NotificationBullet_C.MarkNotificationAsRead
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      MarkCaller                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_NotificationBullet_C::MarkNotificationAsRead(class UUserWidget* MarkCaller)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NotificationBullet_C", "MarkNotificationAsRead");

	Params::WBP_NotificationBullet_C_MarkNotificationAsRead Parms{};

	Parms.MarkCaller = MarkCaller;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_NotificationBullet.WBP_NotificationBullet_C.ResetNotificationData
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_NotificationBullet_C::ResetNotificationData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NotificationBullet_C", "ResetNotificationData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_NotificationBullet.WBP_NotificationBullet_C.UpdateNotificationVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_NotificationBullet_C::UpdateNotificationVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NotificationBullet_C", "UpdateNotificationVisibility");

	UObject::ProcessEvent(Func, nullptr);
}

}

