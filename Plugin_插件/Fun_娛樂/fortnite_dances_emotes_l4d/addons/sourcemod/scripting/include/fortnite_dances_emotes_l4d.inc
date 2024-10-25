#if defined  _fortnite_dances_emotes_l4d_included_
 #endinput
#endif
#define _fortnite_dances_emotes_l4d_included_

/* Natives */

/**
 * Checks client's emote status
 *
 * @param client    Client index
 * @return          True if is danceing, false otherwise
 */
native bool fortnite_dances_emotes_l4d_IsClientEmoting(int client);

/**
 * When a client is about to do a emote
 *
 * @param client    Client index
 * 
 * @return				Plugin_Handled to block the target player from doing a emote, Plugin_Continue otherwise
 */
forward Action fortnite_dances_emotes_l4d_OnEmote_Pre(int client);

/**
 * When a client do a emote
 *
 * @param client    Client index
 */
forward void fortnite_dances_emotes_l4d_OnEmote(int client);

public SharedPlugin __pl_fortnite_dances_emotes_l4d =
{
	name = "fortnite_dances_emotes_l4d",
	file = "fortnite_dances_emotes_l4d.smx",
#if defined REQUIRE_PLUGIN
	required = 1,
#else
	required = 0,
#endif
};

#if !defined REQUIRE_PLUGIN
public void __pl_fortnite_dances_emotes_l4d_SetNTVOptional()
{
	MarkNativeAsOptional("fortnite_dances_emotes_l4d_IsClientEmoting");
}
#endif