#if defined  _l4d2_custom_difficulty_included_
 #endinput
#endif
#define _l4d2_custom_difficulty_included_

/**
 * Called when loading custom difficulty
 * 
 * @param sBaseDifficulty 			Base on which official difficulty? "Easy", "Normal", "Hard", "Impossible"
 * @param sCustomDifficultyName 	Custom difficulty name
 */
forward void OnCustomDifficultyLoaded(char sBaseDifficulty, char sCustomDifficultyName);

/**
 * Get current custom difficulty name
 *
 * @param buffer		Where to store 
 * @param maxlength		Max length of buffer
 * @return          	True if succeed, false if there is no current custom difficulty
 */
native bool GetCustomDifficultyName(char[] buffer, int maxlength);

/**
 * Get current custom difficulty index
 *
 * @return          	Current custom difficulty index, starting from 1, 0 if there is no current custom difficulty
 */
native int GetCustomDifficultyIndex();

/**
 * @brief Force to load custom difficulty by index
 * @remarks Throws an error if index is invalid
 * 
 * @param index			Custom difficulty index, starting from 1
 * @return          	True if succeed, false if index not exist    	
 */
native bool LoadCustomDifficultyByIndex(int index);


public SharedPlugin __pl_l4d2_custom_difficulty =
{
	name = "l4d2_custom_difficulty",
	file = "l4d2_custom_difficulty.smx",
#if defined REQUIRE_PLUGIN
	required = 1,
#else
	required = 0,
#endif
};

#if !defined REQUIRE_PLUGIN
public void __pl_l4d2_custom_difficulty_SetNTVOptional()
{
	MarkNativeAsOptional("GetCustomDifficultyName");
}
#endif