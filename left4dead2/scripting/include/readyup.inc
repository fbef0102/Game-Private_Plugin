#if defined  _readyup_included_
        #endinput
#endif
#define _readyup_included_

/**
 * Adds the string to the bottom of the ready-up panel.
 * String must be <=65 characters including the null byte.
 * String will be entirely added or not added, no truncation.
 *
 * @param footer    String to add to the footer
 * @return          True if the string was added, false otherwise
 */
native bool EditFooterStringAtIndex(int index, const char[] footer);
native int AddStringToReadyFooter(const char[] footer);

/**
 * Whether or not the game is currently waiting for players to ready up.
 *
 * @return          True if the game is currently in the ready-up phase.
 */
native bool IsInReady();

/**
 * If this in-game and fully connected client is a caster or not
 *
 * @return          True if this is a registered caster
 */
native bool IsClientCaster(int client);

/**
 * If this Steam ID is a registered caster or not
 *
 * @param           String containing the user's auth id
 * @return          True if this is a registered caster
 */
native bool IsIDCaster(const char[] AuthID);

/**
 * Called when the live countdown ends and the round goes live
 */
forward void OnRoundIsLive();

public SharedPlugin __pl_readyup =
{
        name = "readyup",
        file = "readyup.smx",
#if defined REQUIRE_PLUGIN
        required = 1,
#else
        required = 0,
#endif
};

public void __pl_readyup_SetNTVOptional()
{
        MarkNativeAsOptional("EditFooterStringAtIndex");
        MarkNativeAsOptional("AddStringToReadyFooter");
        MarkNativeAsOptional("IsInReady");
        MarkNativeAsOptional("IsClientCaster");
        MarkNativeAsOptional("IsIDCaster");
}

// vim: ft=sourcepawn et sw=8