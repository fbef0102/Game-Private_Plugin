/*
 * ============================================================================
 *
 *  File:			unscramble.inc
 *  Language:       SourcePawn
 *  Description:	r2comp_unscramble plugin natives & forwards API
 *  Version:        1.0
 *
 *  Copyright (C) 2020 raziEiL [disawar1] <mr.raz4291@gmail.com>
 *  Copyright (C) 2023 HarryPotter
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * ============================================================================
 */

#if defined _r2comp_unscramble_included
 #endinput
#endif
#define _unscramble_included

/**
 * @brief Called whenever unscramble process is completed.
 *
 * @noreturn
 */
forward void R2comp_OnUnscrambleEnd();

/**
 * Force to store players team data.
 *
 * @noreturn
 */
native void R2comp_UnscrambleKeep();

/**
 * Force to start unscramble process (Puts players on the right team).
 * @note To make unscramble process works you need call R2comp_UnscrambleKeep first.
 *
 * @noreturn
 */
native void R2comp_UnscrambleStart();

/**
 * Force to abort unscramble process.
 *
 * @param fireOnUnscrambleEnd    Whether or not R2comp_OnUnscrambleEnd forward should be fired.
 *
 * @noreturn
 */
native void R2comp_AbortUnscramble(bool fireOnUnscrambleEnd = true);

/**
 * Returns whether or not unscramble process is completed.
 *
 * @return			If true then unscramble is completed, false means unscramble is processing and team changes is locked.
 */
native bool R2comp_IsUnscrambled();

public SharedPlugin __pl_r2comp_unscramble =
{
	name = "l4d_team_unscramble",
	file = "l4d_team_unscramble.smx",
#if defined REQUIRE_PLUGIN
	required = 1,
#else
	required = 0,
#endif
};

#if !defined REQUIRE_PLUGIN
public void __pl_r2comp_unscramble_SetNTVOptional()
{
	MarkNativeAsOptional("R2comp_UnscrambleStart");
	MarkNativeAsOptional("R2comp_UnscrambleKeep");
	MarkNativeAsOptional("R2comp_IsUnscrambled");
	MarkNativeAsOptional("R2comp_AbortUnscramble");
}
#endif