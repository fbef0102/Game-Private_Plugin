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
 * Get client's weapon classname or melee classname in a player's slot.
 * 
 * @param client	Client (don't input fake client)
 * @param slot		Weapons Slot (0~4)	
 * @param str       String to store weapon classname.
 * @param size      size of String to store.
 * 
 * @return		    True if suceed, false if not
 */
native bool Multi_EQ_GetPlayerSlot_BackUpWeapon(int client, int slot, char[] str, int size);