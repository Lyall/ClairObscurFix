﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DialogSystem

#include "Basic.hpp"

#include "BP_DialogSystem_classes.hpp"
#include "BP_DialogSystem_parameters.hpp"


namespace SDK
{

// Function BP_DialogSystem.BP_DialogSystem_C.AnimDialog
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FText&                      Response                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// double*                                 AnimDuration                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DialogSystem_C::AnimDialog(const class FText& Response, double* AnimDuration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DialogSystem_C", "AnimDialog");

	Params::BP_DialogSystem_C_AnimDialog Parms{};

	Parms.Response = std::move(Response);

	UObject::ProcessEvent(Func, &Parms);

	if (AnimDuration != nullptr)
		*AnimDuration = Parms.AnimDuration;
}


// Function BP_DialogSystem.BP_DialogSystem_C.QuitDialog
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*                self2                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*                PlayerController                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                      self3                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    DontRegisterDialog                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DialogSystem_C::QuitDialog(class APlayerController* self2, class APlayerController* PlayerController, class AController* self3, bool DontRegisterDialog)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DialogSystem_C", "QuitDialog");

	Params::BP_DialogSystem_C_QuitDialog Parms{};

	Parms.self2 = self2;
	Parms.PlayerController = PlayerController;
	Parms.self3 = self3;
	Parms.DontRegisterDialog = DontRegisterDialog;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DialogSystem.BP_DialogSystem_C.AddStructDialog
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FDialog_Struct>&          TargetArray                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FName                             EventId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SwitchID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DialogSystem_C::AddStructDialog(TArray<struct FDialog_Struct>& TargetArray, class FName EventId, int32 SwitchID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DialogSystem_C", "AddStructDialog");

	Params::BP_DialogSystem_C_AddStructDialog Parms{};

	Parms.TargetArray = std::move(TargetArray);
	Parms.EventId = EventId;
	Parms.SwitchID = SwitchID;

	UObject::ProcessEvent(Func, &Parms);

	TargetArray = std::move(Parms.TargetArray);
}


// Function BP_DialogSystem.BP_DialogSystem_C.AddDataTable
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDataTable*                       DataTable_0                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                             RowName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SwitchID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DialogSystem_C::AddDataTable(class UDataTable* DataTable_0, class FName RowName, int32 SwitchID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DialogSystem_C", "AddDataTable");

	Params::BP_DialogSystem_C_AddDataTable Parms{};

	Parms.DataTable_0 = DataTable_0;
	Parms.RowName = RowName;
	Parms.SwitchID = SwitchID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DialogSystem.BP_DialogSystem_C.Add Response
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FText&                      Name_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// const class FText&                      Response                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// class FName                             EventId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SwitchID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FLinearColor&              NameColor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFont*                            ResponseFont                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                       ResponseVoice                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const struct FLinearColor&              TextColorHovered                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FLinearColor&              TextColorNormal                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                       BtnHoveredImage                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                       BtnNormalImage                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                                  EnableEventDelay                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                     ResponseAnim                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_DialogSystem_C**              DialogSystem                                           (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_DialogSystem_C::Add_Response(const class FText& Name_0, const class FText& Response, class FName EventId, int32 SwitchID, const struct FLinearColor& NameColor, class UFont* ResponseFont, class USoundBase* ResponseVoice, const struct FLinearColor& TextColorHovered, const struct FLinearColor& TextColorNormal, class UTexture2D* BtnHoveredImage, class UTexture2D* BtnNormalImage, double EnableEventDelay, class UAnimMontage* ResponseAnim, class UBP_DialogSystem_C** DialogSystem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DialogSystem_C", "Add Response");

	Params::BP_DialogSystem_C_Add_Response Parms{};

	Parms.Name_0 = std::move(Name_0);
	Parms.Response = std::move(Response);
	Parms.EventId = EventId;
	Parms.SwitchID = SwitchID;
	Parms.NameColor = std::move(NameColor);
	Parms.ResponseFont = ResponseFont;
	Parms.ResponseVoice = ResponseVoice;
	Parms.TextColorHovered = std::move(TextColorHovered);
	Parms.TextColorNormal = std::move(TextColorNormal);
	Parms.BtnHoveredImage = BtnHoveredImage;
	Parms.BtnNormalImage = BtnNormalImage;
	Parms.EnableEventDelay = EnableEventDelay;
	Parms.ResponseAnim = ResponseAnim;

	UObject::ProcessEvent(Func, &Parms);

	if (DialogSystem != nullptr)
		*DialogSystem = Parms.DialogSystem;
}


// Function BP_DialogSystem.BP_DialogSystem_C.AddCameraAngle
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           CameraActorTarget                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                                  CameraBlendTime                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  CameraDistence                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  CameraHight                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  CameraAngle                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CameraAttach_                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_DialogSystem_C**              DialogSystem                                           (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_DialogSystem_C::AddCameraAngle(class AActor* CameraActorTarget, double CameraBlendTime, double CameraDistence, double CameraHight, double CameraAngle, bool CameraAttach_, class UBP_DialogSystem_C** DialogSystem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DialogSystem_C", "AddCameraAngle");

	Params::BP_DialogSystem_C_AddCameraAngle Parms{};

	Parms.CameraActorTarget = CameraActorTarget;
	Parms.CameraBlendTime = CameraBlendTime;
	Parms.CameraDistence = CameraDistence;
	Parms.CameraHight = CameraHight;
	Parms.CameraAngle = CameraAngle;
	Parms.CameraAttach_ = CameraAttach_;

	UObject::ProcessEvent(Func, &Parms);

	if (DialogSystem != nullptr)
		*DialogSystem = Parms.DialogSystem;
}


// Function BP_DialogSystem.BP_DialogSystem_C.GlobalDialogEvent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             EventId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool*                                   Success                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DialogSystem_C::GlobalDialogEvent(class FName EventId, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DialogSystem_C", "GlobalDialogEvent");

	Params::BP_DialogSystem_C_GlobalDialogEvent Parms{};

	Parms.EventId = EventId;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;
}


// Function BP_DialogSystem.BP_DialogSystem_C.AddDialog
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                       Image                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const class FText&                      Name_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// const class FText&                      Dialog                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// class FName                             DialogID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FLinearColor&              NameColor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FLinearColor&              DialogHoveredColor                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FLinearColor&              DialogNormalColor                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFont*                            DialogFont                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                     DialogAnim                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                       DialogSound                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                                  DialogEventDelay                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  DialogTypingDelay                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                       DialogTypingSound                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    IsDialogClickable_                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ClearDialogResponses_                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_DialogSystem_C**              DialogSystem                                           (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double*                                 DelayValue                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DialogSystem_C::AddDialog(class UTexture2D* Image, const class FText& Name_0, const class FText& Dialog, class FName DialogID, const struct FLinearColor& NameColor, const struct FLinearColor& DialogHoveredColor, const struct FLinearColor& DialogNormalColor, class UFont* DialogFont, class UAnimMontage* DialogAnim, class USoundBase* DialogSound, double DialogEventDelay, double DialogTypingDelay, class USoundBase* DialogTypingSound, bool IsDialogClickable_, bool ClearDialogResponses_, class UBP_DialogSystem_C** DialogSystem, double* DelayValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DialogSystem_C", "AddDialog");

	Params::BP_DialogSystem_C_AddDialog Parms{};

	Parms.Image = Image;
	Parms.Name_0 = std::move(Name_0);
	Parms.Dialog = std::move(Dialog);
	Parms.DialogID = DialogID;
	Parms.NameColor = std::move(NameColor);
	Parms.DialogHoveredColor = std::move(DialogHoveredColor);
	Parms.DialogNormalColor = std::move(DialogNormalColor);
	Parms.DialogFont = DialogFont;
	Parms.DialogAnim = DialogAnim;
	Parms.DialogSound = DialogSound;
	Parms.DialogEventDelay = DialogEventDelay;
	Parms.DialogTypingDelay = DialogTypingDelay;
	Parms.DialogTypingSound = DialogTypingSound;
	Parms.IsDialogClickable_ = IsDialogClickable_;
	Parms.ClearDialogResponses_ = ClearDialogResponses_;

	UObject::ProcessEvent(Func, &Parms);

	if (DialogSystem != nullptr)
		*DialogSystem = Parms.DialogSystem;

	if (DelayValue != nullptr)
		*DelayValue = Parms.DelayValue;
}


// Function BP_DialogSystem.BP_DialogSystem_C.CreateDialogUI
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                       GUITexture                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const struct FVector2D&                 MainSize                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FVector2D&                 MainTranslation                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FLinearColor&              MainBorderColor                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FLinearColor&              TextBorderColor                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FVector2D&                 DialogIconSize                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bShowMouseCursor                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bCenterMouse_                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bShowDebug_                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_DialogSystem_C**              DialogSystem                                           (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_DialogSystem_C::CreateDialogUI(class UTexture2D* GUITexture, const struct FVector2D& MainSize, const struct FVector2D& MainTranslation, const struct FLinearColor& MainBorderColor, const struct FLinearColor& TextBorderColor, const struct FVector2D& DialogIconSize, bool bShowMouseCursor, bool bCenterMouse_, bool bShowDebug_, class UBP_DialogSystem_C** DialogSystem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DialogSystem_C", "CreateDialogUI");

	Params::BP_DialogSystem_C_CreateDialogUI Parms{};

	Parms.GUITexture = GUITexture;
	Parms.MainSize = std::move(MainSize);
	Parms.MainTranslation = std::move(MainTranslation);
	Parms.MainBorderColor = std::move(MainBorderColor);
	Parms.TextBorderColor = std::move(TextBorderColor);
	Parms.DialogIconSize = std::move(DialogIconSize);
	Parms.bShowMouseCursor = bShowMouseCursor;
	Parms.bCenterMouse_ = bCenterMouse_;
	Parms.bShowDebug_ = bShowDebug_;

	UObject::ProcessEvent(Func, &Parms);

	if (DialogSystem != nullptr)
		*DialogSystem = Parms.DialogSystem;
}


// Function BP_DialogSystem.BP_DialogSystem_C.Dialog
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             EventId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SwitchID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const class FText&                      DialogText                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_DialogSystem_C::Dialog(class FName EventId, int32 SwitchID, const class FText& DialogText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DialogSystem_C", "Dialog");

	Params::BP_DialogSystem_C_Dialog Parms{};

	Parms.EventId = EventId;
	Parms.SwitchID = SwitchID;
	Parms.DialogText = std::move(DialogText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DialogSystem.BP_DialogSystem_C.Talk
// (BlueprintCallable, BlueprintEvent)

void UBP_DialogSystem_C::Talk()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DialogSystem_C", "Talk");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DialogSystem.BP_DialogSystem_C.StopAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*           Mesh                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*                    Target_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                     Montage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_DialogSystem_C::StopAnim(class USkeletalMeshComponent* Mesh, class UAnimInstance* Target_0, class UAnimMontage* Montage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DialogSystem_C", "StopAnim");

	Params::BP_DialogSystem_C_StopAnim Parms{};

	Parms.Mesh = Mesh;
	Parms.Target_0 = Target_0;
	Parms.Montage = Montage;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DialogSystem.BP_DialogSystem_C.ExecuteUbergraph_BP_DialogSystem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DialogSystem_C::ExecuteUbergraph_BP_DialogSystem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DialogSystem_C", "ExecuteUbergraph_BP_DialogSystem");

	Params::BP_DialogSystem_C_ExecuteUbergraph_BP_DialogSystem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

