#if defined  _l4d2_zombie_transform_included_
 #endinput
#endif
#define _l4d2_zombie_transform_included_

/**
 * Called when client has turned into zombie
 * 
 * @param client 			The client index.
 * @param classType 		The zombie classType. (1~8)
 * @param bAbility          True if can use infected ability, false otherwise
 */
forward void OnTurnClientIntoZombie(int client, int classType, bool bAbility);

/**
 * Called when infected has turned into survivor
 * 
 * @param client                The client index.
 * @param classType 			The zombie classType. (1~8)
 * @param bSaveAbility          True if keep infected custom ability, false otherwise
 */
forward void OnTurnZombieIntoSurvivor(int client, int classType, bool bSaveAbility);

/**
 * Called when client has turned into character
 * 
 * @param client                The client index.
 * @param sCharacterName        The Character name that client changed to: "bill", "zoey", "louis", "francis", "nick", "rochelle", "coach", "ellis"
 */
forward void OnTurnClientIntoCharacter(int client, const char[] sCharacterName);


/** Turn client into zombie
 *
 * @param client                The client index.
 * @param classType             The zombie classType. (1~8)
 * @param variantModel          The zombie variant model, (0=Random)
 *                                  Smoker: 	1=L4D2 Model, 2=L4D1 Model, 0=Random.
 *                                  Boomer: 	1=L4D2 Model, 2=L4D1 Model, 3=Female Boomer, 0=Random.
 *                                  Hunter: 	1=L4D2 Model, 2=L4D1 Model, 0=Random.
 *                                  Tank: 		1=L4D2 Model, 2=DLC Model, 3=L4D1 Model, 0=Random.
 * @param bAbility              If true, give infected custom ability
 * 
 * @return                      true if successful, false otherwise
 */
native bool Z_TurnClientIntoZombie(int client, int classType, int variantModel = 1, bool bAbility = true);

/** Turn client from infected into survivor
 *
 * @param client                The client index. Only accept not-bot infected player
 * @param bSaveAbility          If true, keep infected custom ability
 * 
 * @return                      true if successful, false otherwise
 */
native bool Z_TurnZombieIntoSurvivor(int client, bool bSaveAbility = false);

/** Turn client into character
 *
 * @param client                The client index.
 * @param sCharacterName        The Character name that client changed to: "bill", "zoey", "louis", "francis", "nick", "rochelle", "coach", "ellis"
 * 
 * @return                      true if successful, false otherwise
 */
native bool Z_TurnClientIntoCharacter(int client, const char[] sCharacterName);

public SharedPlugin __pl_l4d2_zombie_transform =
{
	name = "l4d2_zombie_transform",
	file = "l4d2_zombie_transform.smx",
#if defined REQUIRE_PLUGIN
	required = 1,
#else
	required = 0,
#endif
};

#if !defined REQUIRE_PLUGIN
public void __pl_l4d2_zombie_transform_SetNTVOptional()
{
	MarkNativeAsOptional("Z_TurnClientIntoZombie");
	MarkNativeAsOptional("Z_TurnZombieIntoSurvivor");
	MarkNativeAsOptional("Z_TurnClientIntoCharacter");
}
#endif