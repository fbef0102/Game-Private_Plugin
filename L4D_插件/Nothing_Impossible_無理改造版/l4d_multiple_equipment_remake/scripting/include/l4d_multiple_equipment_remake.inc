#if defined  _l4d_multiple_equipment_included_
 #endinput
#endif
#define _l4d_multiple_equipment_included_

public SharedPlugin __pl_l4d_multiple_equipment =
{
	name = "l4d_multiple_equipment",
	file = "l4d_multiple_equipment.smx",
#if defined REQUIRE_PLUGIN
	required = 1,
#else
	required = 0,
#endif
};

#if !defined REQUIRE_PLUGIN
public void __pl_l4d_multiple_equipment_SetNTVOptional()
{
	MarkNativeAsOptional("Multi_EQ_GetPlayerSlot_BackUpWeapon");
}
#endif

/**
 * Get client's backup equipment in a player's slot.
 * 
 * @param client				Client (don't input fake client)
 * @param slot					Weapon Slot (0~4)	
 * @param strClassName   		String to store weapon classname.
 * @param strClassSize      	Size of string to store weapon classname.
 * @param strMeleeName   		String to store melee classname if weapon is melee, empty string if weapon is not melee
 * @param strMeleeSize      	Size of String to store melee classname.
 * 
 * @return		    			The entity index of weapon, 0 if not exist or invalid
 */
native int Multi_EQ_GetPlayerSlot_BackUpWeapon(int client, int slot, char[] strClassName, int strClassSize, char[] strMeleeName, int strMeleeSize);

/**
* @brief Called when save second equipment on map transition (Post)
*
* @param client    the client who made it to saferoom.
*
* @noreturn
*/
forward void Multi_EQ_OnEquipmentSave(int client);

/**
* @brief Called when restore and give second equipment to a player (Post)
*
* @param client    the client who is given to.
*
* @noreturn
*/
forward void Multi_EQ_OnEquipmentRestore(int client);