﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FDebugSaveGame

#include "Basic.hpp"

#include "S_jRPG_Item_DynamicData_structs.hpp"
#include "S_WeaponInstanceHandle_structs.hpp"
#include "S_jRPG_PartySlot_structs.hpp"
#include "FDebugSaveGame_SkilList_structs.hpp"
#include "S_jRPG_CharacterSaveState_structs.hpp"
#include "FExplorationProgression_SaveState_structs.hpp"
#include "Engine_structs.hpp"
#include "E_Characters_structs.hpp"


namespace SDK
{

// UserDefinedStruct FDebugSaveGame.FDebugSaveGame
// 0x0180 (0x0180 - 0x0000)
struct FFDebugSaveGame final
{
public:
	TArray<struct FS_jRPG_PartySlot>              CurrentParty_19_8CA4C7114C415B9EEFE94280B8A810B3;  // 0x0000(0x0010)(Edit, BlueprintVisible)
	TMap<class FName, struct FS_jRPG_CharacterSaveState> CharactersCollection_42_F0B931364C17447E5CBC1085FAC03107; // 0x0010(0x0050)(Edit, BlueprintVisible)
	struct FFExplorationProgression_SaveState     ExplorationProgression_11_762697AA4A41FFA24127FD9C8A64D91F; // 0x0060(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	int32                                         Gold_14_B5E8025D43547F3CE8EA3D9518895A2E;          // 0x0088(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8C[0x4];                                       // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FS_jRPG_Item_DynamicData>       Inventory_18_8E15424D480CDEC26658B1926BE4E0CD;     // 0x0090(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	TMap<class FName, int32>                      InventoryItems_26_2060B1AC4C513A12B3B63EB99B86A029; // 0x00A0(0x0050)(Edit, BlueprintVisible)
	TMap<E_Characters, struct FFDebugSaveGame_SkilList> EquippedSkillOverrides_32_4899EF6848E3DD87CEFF2E94F6C05FC8; // 0x00F0(0x0050)(Edit, BlueprintVisible)
	TArray<class FName>                           EquippedConsumablesShards_37_F02152444A0A064655BAEE8AD0FE96A9; // 0x0140(0x0010)(Edit, BlueprintVisible)
	TArray<class UNamedID*>                       PersistentFlags_41_FF4B1CBB4A6C895CBE5E7297E0218491; // 0x0150(0x0010)(Edit, BlueprintVisible)
	TArray<struct FS_WeaponInstanceHandle>        WeaponProgression_46_1B472D7E4CB912EB0EEEC693273AB51C; // 0x0160(0x0010)(Edit, BlueprintVisible)
	struct FDataTableRowHandle                    ForceGoldenPathStep_49_024DFEB649DF8CF658443FBAECF911A2; // 0x0170(0x0010)(Edit, BlueprintVisible, NoDestructor)
};
static_assert(alignof(FFDebugSaveGame) == 0x000008, "Wrong alignment on FFDebugSaveGame");
static_assert(sizeof(FFDebugSaveGame) == 0x000180, "Wrong size on FFDebugSaveGame");
static_assert(offsetof(FFDebugSaveGame, CurrentParty_19_8CA4C7114C415B9EEFE94280B8A810B3) == 0x000000, "Member 'FFDebugSaveGame::CurrentParty_19_8CA4C7114C415B9EEFE94280B8A810B3' has a wrong offset!");
static_assert(offsetof(FFDebugSaveGame, CharactersCollection_42_F0B931364C17447E5CBC1085FAC03107) == 0x000010, "Member 'FFDebugSaveGame::CharactersCollection_42_F0B931364C17447E5CBC1085FAC03107' has a wrong offset!");
static_assert(offsetof(FFDebugSaveGame, ExplorationProgression_11_762697AA4A41FFA24127FD9C8A64D91F) == 0x000060, "Member 'FFDebugSaveGame::ExplorationProgression_11_762697AA4A41FFA24127FD9C8A64D91F' has a wrong offset!");
static_assert(offsetof(FFDebugSaveGame, Gold_14_B5E8025D43547F3CE8EA3D9518895A2E) == 0x000088, "Member 'FFDebugSaveGame::Gold_14_B5E8025D43547F3CE8EA3D9518895A2E' has a wrong offset!");
static_assert(offsetof(FFDebugSaveGame, Inventory_18_8E15424D480CDEC26658B1926BE4E0CD) == 0x000090, "Member 'FFDebugSaveGame::Inventory_18_8E15424D480CDEC26658B1926BE4E0CD' has a wrong offset!");
static_assert(offsetof(FFDebugSaveGame, InventoryItems_26_2060B1AC4C513A12B3B63EB99B86A029) == 0x0000A0, "Member 'FFDebugSaveGame::InventoryItems_26_2060B1AC4C513A12B3B63EB99B86A029' has a wrong offset!");
static_assert(offsetof(FFDebugSaveGame, EquippedSkillOverrides_32_4899EF6848E3DD87CEFF2E94F6C05FC8) == 0x0000F0, "Member 'FFDebugSaveGame::EquippedSkillOverrides_32_4899EF6848E3DD87CEFF2E94F6C05FC8' has a wrong offset!");
static_assert(offsetof(FFDebugSaveGame, EquippedConsumablesShards_37_F02152444A0A064655BAEE8AD0FE96A9) == 0x000140, "Member 'FFDebugSaveGame::EquippedConsumablesShards_37_F02152444A0A064655BAEE8AD0FE96A9' has a wrong offset!");
static_assert(offsetof(FFDebugSaveGame, PersistentFlags_41_FF4B1CBB4A6C895CBE5E7297E0218491) == 0x000150, "Member 'FFDebugSaveGame::PersistentFlags_41_FF4B1CBB4A6C895CBE5E7297E0218491' has a wrong offset!");
static_assert(offsetof(FFDebugSaveGame, WeaponProgression_46_1B472D7E4CB912EB0EEEC693273AB51C) == 0x000160, "Member 'FFDebugSaveGame::WeaponProgression_46_1B472D7E4CB912EB0EEEC693273AB51C' has a wrong offset!");
static_assert(offsetof(FFDebugSaveGame, ForceGoldenPathStep_49_024DFEB649DF8CF658443FBAECF911A2) == 0x000170, "Member 'FFDebugSaveGame::ForceGoldenPathStep_49_024DFEB649DF8CF658443FBAECF911A2' has a wrong offset!");

}

