#if defined  _l4d2_replace_gun_item_included_
 #endinput
#endif
#define _l4d2_replace_gun_item_included_

/**
* Call this function to replace all weapons and all items with other weapons and items now
* 
* @param Slot_Primary			Shoud Replace Primary Weapons ?
* @param Slot_Secondary			Shoud Replace Secondary Weapons ?
* @param Slot_Throwable			Shoud Replace Throwable ?
* @param Slot_HeavyHealthItem	Shoud Replace Slot 4 Items ?
* @param Slot_LightHealthItem	Shoud Replace Slot 5 Items ?
* @param Special				Shoud Replace Special Items ?
*
* @return						None
*/
native void l4d2_RGI_ReplaceAllWeapons(bool Slot_Primary, bool Slot_Secondary, bool Slot_Throwable, bool Slot_HeavyHealthItem, bool Slot_LightHealthItem, bool Special)


public SharedPlugin __pl_l4d2_replace_gun_item =
{
	name = "l4d2_replace_gun_item",
	file = "l4d2_replace_gun_item.smx",
#if defined REQUIRE_PLUGIN
	required = 1,
#else
	required = 0,
#endif
};

#if !defined REQUIRE_PLUGIN
public void __pl_l4d2_replace_gun_item_SetNTVOptional()
{
	MarkNativeAsOptional("l4d2_RGI_ReplaceAllWeapons");
}
#endif