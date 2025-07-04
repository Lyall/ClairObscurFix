﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_UINavigationComponent

#include "Basic.hpp"

#include "FUINavigationNode_structs.hpp"
#include "EInputAction_structs.hpp"
#include "EFaceActions_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "EUINavigationDirection_structs.hpp"
#include "EUINavigationLayer_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_UINavigationComponent.BP_UINavigationComponent_C
// 0x02B0 (0x0350 - 0x00A0)
class UBP_UINavigationComponent_C final : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TMap<EFaceActions, TScriptInterface<class IBPI_UINavigationElement_C>> FaceActionElements;       // 0x00A8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<EInputAction, TScriptInterface<class IBPI_UINavigationElement_C>> InputActionElements;      // 0x00F8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFUINavigationNode                     DEPRECATED_ActiveNode;                             // 0x0148(0x0040)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TMap<int32, struct FFUINavigationNode>        AllNodes;                                          // 0x0188(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class UObject*, int32>                   AllNodeIDsByTiedObject;                            // 0x01D8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         NextNodeID;                                        // 0x0228(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DefaultNodeID;                                     // 0x022C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class UObject*, TScriptInterface<class IBPI_UINavigationElement_C>> ObjectsToNavigationElements; // 0x0230(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FFUINavigationNode>             DEPRECATED_ActiveNodeStack;                        // 0x0280(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, Deprecated)
	TArray<int32>                                 ActiveNodeIDStack;                                 // 0x0290(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UWBP_Debug_UINavigation_C*              DEBUG_WidgetOverlay;                               // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   DEBUG_CVar_DebugOverlayToggle;                     // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_UINavigationInputActor_C*           InputActor;                                        // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	EUINavigationDirection                        LastValidNavigationDirection;                      // 0x02B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsAlreadyActivatingANode;                          // 0x02B9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2BA[0x2];                                      // 0x02BA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ActivationNodeStackSize;                           // 0x02BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DEBUG_LogLinks;                                    // 0x02C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DEBUG_LogNodeCreation;                             // 0x02C1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DEBUG_LogNodeParenting;                            // 0x02C2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C3[0x5];                                      // 0x02C3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<TScriptInterface<class IBPI_UINavigationElement_C>> ForcedActions;                        // 0x02C8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMulticastInlineDelegate<void(TScriptInterface<class IBPI_UINavigationElement_C> NavigationElement)> OnNavigationElementActivated; // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	EUINavigationLayer                            NavigationLayerOnly;                               // 0x02E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E9[0x7];                                      // 0x02E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_Tutorial_SquareMask_C*             TutorialMaskWidget;                                // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          HasOverlay;                                        // 0x02F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DisableNavigation;                                 // 0x02F9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HijackInteraction;                                 // 0x02FA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2FB[0x5];                                      // 0x02FB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<EUINavigationLayer, int32>               WIP_NodesPerNavigationLayer;                       // 0x0300(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void BP_UINavigationComponent_AutoGenFunc(class UBP_InputKeyState_C* KeyState);
	const TDelegate<void()> GetInputActionUICallback(EInputAction InputAction);
	void Has_Any_Input_Action_From_List(TScriptInterface<class IBPI_UINavigationElement_C> Element, bool* Return_Value, EInputAction* ArrayElement);
	void UnregisterInputAction(TScriptInterface<class IBPI_UINavigationElement_C> Element);
	void OnElementAction(TScriptInterface<class IBPI_UINavigationElement_C> InputPin);
	void OnInputActionPressed();
	void StopForceNavigationToElement();
	void RegisterInputAction(EInputAction InputAction, TScriptInterface<class IBPI_UINavigationElement_C> Element);
	void ForceNavigationToElement(const TScriptInterface<class IBPI_UINavigationElement_C>& Element, const TDelegate<void(TScriptInterface<class IBPI_UINavigationElement_C> NavigationElement)>& OnActivated, bool RestrictInput, bool HijackInteraction_0);
	void CreateInputActor();
	void StopHighlightOverlay();
	void HighlightWidget(const class UWidget*& TargetWidget);
	void HighlightNothing();
	void HighlightWidgets(const TArray<class UWidget*>& TargetWidget);
	void PrintNavigationStack();
	void RegisterListNavigationGeneric_FromAny(TArray<class UObject*>& Objects, bool Vertical, bool Loop);
	void DeclareNavigationElementsGeneric(TArray<class UObject*>& NavigationElement, class UObject* Outer_0, EUINavigationLayer NavigationLayer);
	void DeclareNavigationElementGeneric(class UObject* NavigationElement, class UObject* Outer_0, EUINavigationLayer NavigationLayer, TScriptInterface<class IBPI_UINavigationElement_C>* BPI_NavigationElement);
	void DeclareNavigationElements(TArray<TScriptInterface<class IBPI_UINavigationElement_C>>& NavigationElement, class UObject* Outer_0, EUINavigationLayer NavigationLayer);
	void DeclareNavigationElement(TScriptInterface<class IBPI_UINavigationElement_C> NavigationElement, class UObject* Outer_0, EUINavigationLayer NavigationLayer);
	void EDITORONLY_CheckOuters();
	void UnregisterFromOuterObject(class UObject* Outer_0);
	class UBP_UINavigationGenericElement_PanelWidget_C* CreateVirtualContainer(class UPanelWidget* PanelWidget, class UObject* Outer_0, struct FFUINavigationNode* NewNavigationNode);
	void HasNavigationFromActiveNode(EUINavigationDirection Direction, bool* HasNavigation);
	void DEBUG_GetInputActor(class ABP_UINavigationInputActor_C** InputActor_0);
	void InsertNavigationGridLine(struct FFNavigationGridCreationInfo& NavGridInfo, TArray<class UObject*>& Column, bool IsColumn, bool IsRow, int32 OffsetX, int32 OffsetY, struct FFNavigationGridCreationInfo* NavGridInfo_Out);
	void Register_Parent_Node(struct FFUINavigationNode& ParentNode, struct FFUINavigationNode& ChildNode);
	void RegisterParentNodeForChildren(class UObject* Parent, TArray<class UObject*>& Children);
	void RegisterNavigationGrid(struct FFNavigationGridCreationInfo& NavGridInfo, class UObject* Outer_0);
	void AppendNavigationGridLine(struct FFNavigationGridCreationInfo& NavGridInfo, TArray<class UObject*>& Column, bool IsColumn, bool IsRow, int32 OffsetX, int32 OffsetY, struct FFNavigationGridCreationInfo* NavGridInfo_Out);
	void InitializeNavigationGrid(struct FFNavigationGridCreationInfo* FNavigationGridCreationInfo);
	void SetNavigationDefaultObject(class UObject* Object);
	void GetChildNavigationNodes(int32 ParentNodeID, TArray<struct FFUINavigationNode>* NavNodes);
	void GetRootNavigationNodes(TArray<struct FFUINavigationNode>* RootNodes);
	void GetNavigationNodeFullHierarchy(struct FFUINavigationNode& Node, TArray<int32>* HierarchyNodeIDs);
	void FindFirstHierarchyNodeInStack(struct FFUINavigationNode& NavigationNode, int32* FirstParentStackIndex, int32* FirstParentNodeID);
	void GetActiveNode(struct FFUINavigationNode* Output);
	void RegisterDirectionalLink_OneToOne_Generic(class UObject* Source, class UObject* Target, const struct FVector2D& Direction, bool Bidirectionnal);
	void RegisterPanelAsNavigationList(class UPanelWidget* PanelWidget, bool Vertical, class UObject* Outer_0);
	void RegisterDirectionalLink_ManyToOne_Generic(TArray<class UObject*>& Objects, class UObject* Target, const struct FVector2D& Direction);
	void GetOrCreateNavigationElementList(TArray<class UObject*>& Objects, TArray<TScriptInterface<class IBPI_UINavigationElement_C>>* Value);
	void GetOrCreateNavigationElement(class UObject* InputPin, TScriptInterface<class IBPI_UINavigationElement_C>* Value);
	void GetNavigationElement(const class UObject*& Object, TScriptInterface<class IBPI_UINavigationElement_C>* Value);
	void NavigationNodeToString(const struct FFUINavigationNode& NavNode, class FText* Str);
	bool IsNavigationNodeValid(const struct FFUINavigationNode& NavigationNode);
	void CreateNavigationElement(class UObject* InputPin, TScriptInterface<class IBPI_UINavigationElement_C>* Value);
	void CreateNavigationNode(TScriptInterface<class IBPI_UINavigationElement_C> NavigationElement, class UObject*& Outer_0, EUINavigationLayer NavigationLayer, struct FFUINavigationNode* NewNavigationNode);
	void GetNavigationNodeFromElement(TScriptInterface<class IBPI_UINavigationElement_C> Object, struct FFUINavigationNode* NavigationNode);
	void GetOrCreateNavigationNodeFromElement(TScriptInterface<class IBPI_UINavigationElement_C> Object, struct FFUINavigationNode* NavigationNode);
	class UBP_UINavigationGenericElement_Widget_C* CreateGenericNavigationElement(class UWidget* Widget);
	bool IsActiveNavigationNodeObject(TScriptInterface<class IBPI_UINavigationElement_C> InterfaceObject);
	bool IsActiveNavigationNode(const struct FFUINavigationNode& NavNode);
	void UnregisterNavigationGraph();
	void RegisterListNavigationGenericDeclareChildren(TArray<class UObject*>& Objects, bool Vertical, class UObject* Outer_0, EUINavigationLayer NavigationLayer);
	void UnfocusNavigableElement(TScriptInterface<class IBPI_UINavigationElement_C> NavElement);
	void FocusNavigableElement(TScriptInterface<class IBPI_UINavigationElement_C> NavElement);
	void FindNodeByNavigableElement(TScriptInterface<class IBPI_UINavigationElement_C> NavElement, struct FFUINavigationNode* Value, bool* Found);
	void UpdateNavigationNode(const struct FFUINavigationNode& NavNode);
	void DeactivateNavigationNode(const struct FFUINavigationNode& NavigationNode);
	void ActivateNavigationNodeHierarchy(struct FFUINavigationNode& FinalNode);
	void ActivateNavigationNodeInternal(const struct FFUINavigationNode& NavigationNode, bool IsFinalNode);
	void ActivateNavigationElementGeneric(class UObject* Object);
	void ActivateNavigationElement(TScriptInterface<class IBPI_UINavigationElement_C> Object);
	void DEPRECATED_ActivateNavigationNode(const struct FFUINavigationNode& NavigationNode);
	void Get_Tied_Object_From_Interface(TScriptInterface<class IBPI_UINavigationElement_C> InterfaceObject, class UObject** Object);
	void Has_Any_Face_Action_From_List(TScriptInterface<class IBPI_UINavigationElement_C> Element, bool* Return_Value, EFaceActions* Array_Element);
	void UnregisterFaceAction(TScriptInterface<class IBPI_UINavigationElement_C> Element);
	void RegisterFaceAction(EFaceActions FaceButton, TScriptInterface<class IBPI_UINavigationElement_C> Element);
	void DEPRECATED_GetNextOrPrevious(TScriptInterface<class IBPI_UINavigationElement_C> CurrentElement, TArray<TScriptInterface<class IBPI_UINavigationElement_C>>& Elements, bool Next, bool Wrap, TScriptInterface<class IBPI_UINavigationElement_C>* Output);
	void RegisterListNavigation(TArray<TScriptInterface<class IBPI_UINavigationElement_C>>& Elements, bool Vertical, bool Loop);
	void SetDirectionalLink(const struct FVector2D& Direction, struct FFUINavigationNode& NavNode, int32 TargetNodeID, struct FFUINavigationNode* StructOut);
	void TryDirectionalNavigationOnNode(const struct FIntVector& Direction, const struct FFUINavigationNode& FUINavigationNode, EUINavigationLayer NavigationLayer, bool* Consumed);
	void UnregisterActions(TArray<TScriptInterface<class IBPI_UINavigationElement_C>>& ActionElementsToRemove);
	void RegisterFaceActions(TArray<TScriptInterface<class IBPI_UINavigationElement_C>>& ActionElements);
	void OnActionButtonPressed(EFaceActions Index_0);
	void OnDirectionalNavigation(const struct FIntVector& Direction, EUINavigationLayer NavigationLayer);
	void FaceDownButtonPressed();
	void FaceRightButtonPressed();
	void FaceUpButtonPressed();
	void FaceLeftButtonPressed();
	void DownPressed();
	void RightPressed();
	void UpPressed();
	void LeftPressed();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void EnableInput();
	void DisableInput();
	void InputAction_UI_OpenGameMenu();
	void DEBUG_OnOverlayToggle(bool NewValue);
	void InputAction_Unsupported();
	void OnInputActionUI(EInputAction InputAction);
	void InputAction_UI_Cancel();
	void InputAction_UI_Confirm();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ExecuteUbergraph_BP_UINavigationComponent(int32 EntryPoint);

	void GetGridPositionForWidget(class UObject* Object, struct FFNavigationGridCreationInfo& Grid, struct FIntVector* Coords, bool* Found) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_UINavigationComponent_C">();
	}
	static class UBP_UINavigationComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_UINavigationComponent_C>();
	}
};
static_assert(alignof(UBP_UINavigationComponent_C) == 0x000008, "Wrong alignment on UBP_UINavigationComponent_C");
static_assert(sizeof(UBP_UINavigationComponent_C) == 0x000350, "Wrong size on UBP_UINavigationComponent_C");
static_assert(offsetof(UBP_UINavigationComponent_C, UberGraphFrame) == 0x0000A0, "Member 'UBP_UINavigationComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_UINavigationComponent_C, FaceActionElements) == 0x0000A8, "Member 'UBP_UINavigationComponent_C::FaceActionElements' has a wrong offset!");
static_assert(offsetof(UBP_UINavigationComponent_C, InputActionElements) == 0x0000F8, "Member 'UBP_UINavigationComponent_C::InputActionElements' has a wrong offset!");
static_assert(offsetof(UBP_UINavigationComponent_C, DEPRECATED_ActiveNode) == 0x000148, "Member 'UBP_UINavigationComponent_C::DEPRECATED_ActiveNode' has a wrong offset!");
static_assert(offsetof(UBP_UINavigationComponent_C, AllNodes) == 0x000188, "Member 'UBP_UINavigationComponent_C::AllNodes' has a wrong offset!");
static_assert(offsetof(UBP_UINavigationComponent_C, AllNodeIDsByTiedObject) == 0x0001D8, "Member 'UBP_UINavigationComponent_C::AllNodeIDsByTiedObject' has a wrong offset!");
static_assert(offsetof(UBP_UINavigationComponent_C, NextNodeID) == 0x000228, "Member 'UBP_UINavigationComponent_C::NextNodeID' has a wrong offset!");
static_assert(offsetof(UBP_UINavigationComponent_C, DefaultNodeID) == 0x00022C, "Member 'UBP_UINavigationComponent_C::DefaultNodeID' has a wrong offset!");
static_assert(offsetof(UBP_UINavigationComponent_C, ObjectsToNavigationElements) == 0x000230, "Member 'UBP_UINavigationComponent_C::ObjectsToNavigationElements' has a wrong offset!");
static_assert(offsetof(UBP_UINavigationComponent_C, DEPRECATED_ActiveNodeStack) == 0x000280, "Member 'UBP_UINavigationComponent_C::DEPRECATED_ActiveNodeStack' has a wrong offset!");
static_assert(offsetof(UBP_UINavigationComponent_C, ActiveNodeIDStack) == 0x000290, "Member 'UBP_UINavigationComponent_C::ActiveNodeIDStack' has a wrong offset!");
static_assert(offsetof(UBP_UINavigationComponent_C, DEBUG_WidgetOverlay) == 0x0002A0, "Member 'UBP_UINavigationComponent_C::DEBUG_WidgetOverlay' has a wrong offset!");
static_assert(offsetof(UBP_UINavigationComponent_C, DEBUG_CVar_DebugOverlayToggle) == 0x0002A8, "Member 'UBP_UINavigationComponent_C::DEBUG_CVar_DebugOverlayToggle' has a wrong offset!");
static_assert(offsetof(UBP_UINavigationComponent_C, InputActor) == 0x0002B0, "Member 'UBP_UINavigationComponent_C::InputActor' has a wrong offset!");
static_assert(offsetof(UBP_UINavigationComponent_C, LastValidNavigationDirection) == 0x0002B8, "Member 'UBP_UINavigationComponent_C::LastValidNavigationDirection' has a wrong offset!");
static_assert(offsetof(UBP_UINavigationComponent_C, IsAlreadyActivatingANode) == 0x0002B9, "Member 'UBP_UINavigationComponent_C::IsAlreadyActivatingANode' has a wrong offset!");
static_assert(offsetof(UBP_UINavigationComponent_C, ActivationNodeStackSize) == 0x0002BC, "Member 'UBP_UINavigationComponent_C::ActivationNodeStackSize' has a wrong offset!");
static_assert(offsetof(UBP_UINavigationComponent_C, DEBUG_LogLinks) == 0x0002C0, "Member 'UBP_UINavigationComponent_C::DEBUG_LogLinks' has a wrong offset!");
static_assert(offsetof(UBP_UINavigationComponent_C, DEBUG_LogNodeCreation) == 0x0002C1, "Member 'UBP_UINavigationComponent_C::DEBUG_LogNodeCreation' has a wrong offset!");
static_assert(offsetof(UBP_UINavigationComponent_C, DEBUG_LogNodeParenting) == 0x0002C2, "Member 'UBP_UINavigationComponent_C::DEBUG_LogNodeParenting' has a wrong offset!");
static_assert(offsetof(UBP_UINavigationComponent_C, ForcedActions) == 0x0002C8, "Member 'UBP_UINavigationComponent_C::ForcedActions' has a wrong offset!");
static_assert(offsetof(UBP_UINavigationComponent_C, OnNavigationElementActivated) == 0x0002D8, "Member 'UBP_UINavigationComponent_C::OnNavigationElementActivated' has a wrong offset!");
static_assert(offsetof(UBP_UINavigationComponent_C, NavigationLayerOnly) == 0x0002E8, "Member 'UBP_UINavigationComponent_C::NavigationLayerOnly' has a wrong offset!");
static_assert(offsetof(UBP_UINavigationComponent_C, TutorialMaskWidget) == 0x0002F0, "Member 'UBP_UINavigationComponent_C::TutorialMaskWidget' has a wrong offset!");
static_assert(offsetof(UBP_UINavigationComponent_C, HasOverlay) == 0x0002F8, "Member 'UBP_UINavigationComponent_C::HasOverlay' has a wrong offset!");
static_assert(offsetof(UBP_UINavigationComponent_C, DisableNavigation) == 0x0002F9, "Member 'UBP_UINavigationComponent_C::DisableNavigation' has a wrong offset!");
static_assert(offsetof(UBP_UINavigationComponent_C, HijackInteraction) == 0x0002FA, "Member 'UBP_UINavigationComponent_C::HijackInteraction' has a wrong offset!");
static_assert(offsetof(UBP_UINavigationComponent_C, WIP_NodesPerNavigationLayer) == 0x000300, "Member 'UBP_UINavigationComponent_C::WIP_NodesPerNavigationLayer' has a wrong offset!");

}

