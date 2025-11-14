> 2025/10/27 update
* Reduce server crashes
* Fix serious issues with the source engine or the game itself
* Improve server stability
* Reduce vulnerability to hacking
* Please notice what games can be applied in each plugin
# List
###### Source Game
> Apply to any source-engine games
* <details><summary><b>Plugin/ConVar</b></summary>

   * [Command and ConVar - Buffer Overflow Fixer](https://forums.alliedmods.net/showthread.php?t=309656): Fixes the 'Cbuf_AddText: buffer overflow' console error on servers, which causes ConVars to use their default value.
</details>

* <details><summary><b>Game Issue</b></summary>

   * [firebulletsfix](https://github.com/fbef0102/Sourcemod-Plugins/tree/main/firebulletsfix): Fixes shooting/bullet displacement by 1 tick problems so you can accurately hit by moving.

   * [smd_spritetrail_fix](https://github.com/fbef0102/Sourcemod-Plugins/tree/main/smd_spritetrail_fix): Fixes the invisible env_spritetrail entity (source engine bug)

   * [lag_preventor_plus](https://github.com/Mineralcr/L4D2_Public_Plugins/tree/main/map_lag_preventor): Plugin to help stopping huge amounts of network data (phys_bone_follower) being sent in some custom maps
</details>

* <details><summary><b>Server Crash</b></summary>

   * [AcceptInput_crash_fix](https://github.com/fbef0102/Game-Private_Plugin/tree/main/Source_插件/Entity_實體物件/AcceptInput_crash_fix): Fixes a crash due to null/invalid activator in source engine game entities inputs
</details>

* <details><summary><b>Hacker and Cheat</b></summary>

   * [SendFileFix 3.3](https://forums.alliedmods.net/showthread.php?p=2657014)
      * Prevent clients from spamming too many files sends to the server
      * Prevent clients from requesting too many files from the server

   * [spray_exploit_fixer](https://forums.alliedmods.net/showthread.php?t=323447): Deletes bad sprays and prevents them from crashing clients.
   
   * [sv_protect_cvar](https://github.com/fbef0102/Game-Private_Plugin/tree/main/Source_插件/Server_伺服器/sv_protect_cvar): Protect and hide sensitive ConVars from the data-file (should not be exposed to clients, logs or monitoring), and send fake value to clients if possible

   * [smd_hackers_block](https://github.com/fbef0102/Sourcemod-Plugins/tree/main/smd_hackers_block): Block hackers using some exploit to crash server
      * Kick players if client's authentication failed (steam id is not valid)

   * [BlockSMPlugins](https://github.com/Bara/BlockSMPlugins/tree/master): Block SM Plugins displayed to clients
      
   * [SMAC](https://github.com/Silenci0/SMAC): sourcemod anti cheat in early 2010s
      * Probably not work on most cheating tools today, but better than nothing
      * Server would log informations in ```sourcemod/logs/smac.log``` if a player is suspicious.

   * [Little-Anti-Cheat](https://github.com/J-Tanzanite/Little-Anti-Cheat/releases): sourcemod anti cheat in 2020s
      * Probably not work on most cheating tools today, but better than nothing
      * Server would log informations in ```sourcemod/logs/lilac.log``` if a player is suspicious.

   * [familyshare_manager](https://github.com/fbef0102/Sourcemod-Plugins/tree/main/familyshare_manager): Block family share accounts which does not own the game

   * [vacbans](https://github.com/fbef0102/Sourcemod-Plugins/tree/main/vacbans): Checks for VAC, game, Steam Community, and trade bans on the accounts of connecting clients
</details>

###### L4D1/2
* <details><summary><b>Plugin/ConVar</b></summary>

   * (L4D2) [l4d2_parseline_fix](https://github.com/xiaolinRM/L4D2Plugins/tree/main/l4d2_parseline_fix): Fix non ASCII characters in cfg file that cannot be executed. + Interpret /* */ as a comment block.
</details>

* <details><summary><b>Game Issue</b></summary>

   * (L4D2) [l4d2_fix_changelevel](https://github.com/Target5150/MoYu_Server_Stupid_Plugins/tree/master/The%20Last%20Stand/l4d2_fix_changelevel): Fix issues due to forced changelevel.

   * (L4D2) [l4d2_transition_info_fix](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4d2_transition_info_fix): Fix issues after map transitioned, transition info is still retaining when changed new map by other ways.

   * (L4D2) [InputKill Kick Prevention](https://forums.alliedmods.net/showthread.php?t=332860):Stops clients from getting kicked via the Kill input
      * ```Kicked by Console : CBaseEntity::InputKill()```
   
   * (L4D2) [l4d2_script_cmd_swap](https://forums.alliedmods.net/showthread.php?t=317128): Blocks the script command and replaces with a logic_script entity to execute the code instead.
   
   * (L4D1/2) [l4d_game_files_precacher](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4d_game_files_precacher): Precaches Game Files To Prevent Crashes. + Prevents late precache of specific models

   * (L4D1/2) [l4d_late_model_precacher](https://forums.alliedmods.net/showthread.php?t=337273): Catches unprecached models and tries to precache them to prevent crashes.

   * (L4D1/2) [TickrateFixes](https://github.com/SirPlease/L4D2-Competitive-Rework/blob/master/addons/sourcemod/scripting/TickrateFixes.sp): Fixes a handful of silly Tickrate bugs
      <details><summary>Description (Click me)</summary>

         * Install only when you set server tickrate higher than 30
            * Fixed door open/close speed
            * Fixed gravity
      </details>

   * (L4D1/2) [l4d_remove_item_collision](https://forums.alliedmods.net/showthread.php?t=328327): Changes the collision from all weapons or carryables to collide only with the world and static stuff
      * Useful on servers where is possible to have many items in almost the same place (e.g. through !buy system), which can cause lag because of the number of items colliding.
   
   * (L4D1/2) [disable_cameras](https://github.com/shqke/sp_public/tree/master/disable_cameras): 修復玩家被地圖上的鏡頭卡住視角

   * (L4D1/2) [l4d_fix_deathfall_cam](https://github.com/Target5150/MoYu_Server_Stupid_Plugins/tree/master/The%20Last%20Stand/l4d_fix_deathfall_cam)
      * Fixes crash when kicking a bot during an intro sequence (when transition is controlled by point_viewcontrol_survivor from side view to first person)
      * Fixes multiple potential visual bugs on round restart, such as missing HUD and viewmodel for spectators after "finale vehicle escape" sequence team swap.

   * (L4D1/2) [remove_touch_links](https://github.com/shqke/sp_public/tree/master/remove_touch_links): Plugin that removes touch links for player on team change to prevent same player to be affected by whatever he was "touching" before team change on his old position.

   * (L4D2) [l4d2_sg552_zoom_fix](https://github.com/SirPlease/L4D2-Competitive-Rework/blob/master/addons/sourcemod/scripting/l4d2_sg552_zoom_fix.sp): Fix SG552 zoom, preventing the player's camera from getting stuck
      
   * (L4D1/2 linux) [l4d_fix_linux_surface](https://github.com/Target5150/MoYu_Server_Stupid_Plugins/tree/master/The%20Last%20Stand/l4d_fix_linux_surface): Tricky fix for surfaces with wrong attributes on linux dedicated servers.

   * (L4D2) l4d2_resolve_collision_fix: Fixes longstanding issues with low ```nb_update_frequency```
      * For example: Infected and witch stucking at corners, commons pushing themselves out of the way
      * [Windows version](https://forums.alliedmods.net/showpost.php?p=2837837&postcount=84)
      * [Linux version](https://forums.alliedmods.net/showthread.php?t=344019)
      * Write the following in ```cfg/server.cfg```
         ```c
         // Multiplier of commons collision force
         // If server tick is 30 => 0.65
         // If server tick is 60 => 0.15
         // If server tick is 100 => 0.05
         z_resolve_zombie_collision_multiplier "0.05"
         ```

   * (L4D1/2) [witch_pipebomb_exploit_fix_&_death_optmizer](https://forums.alliedmods.net/showthread.php?t=342000): Fixes exploit throwing pipebomb at witch with horde, cause with to disappear
</details>

* <details><summary><b>Server Crash</b></summary>

   * (L4D2) <s>[FollowTarget_Detour](https://forums.alliedmods.net/showpost.php?p=2725811&postcount=19): Fix Crash ```CMoveableCamera::FollowTarget```</s>
      * 🟥 Valve fixed in 2023/8/23 update

   * (L4D2) <s>[charger_nav_path_fix-l4d2](https://forums.alliedmods.net/showpost.php?p=2774066&postcount=11): Fixed a potential crash if a Charger failed to return to valid nav for an extended period of time</s>
      * 🟥 Valve fixed in 2024/4/23 update
      
   * (L4D2) [Ladder Server Crash - Patch Fix](https://forums.alliedmods.net/showthread.php?t=336298): Fixes a server crash from ```NavLadder::GetPosAtHeight```

   * (L4D2) [TriggerMoved_Detour](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/TriggerMoved_Detour): Fix Crash ```CM_TriggerWorldSpaceBounds()``` null pointer

   * (L4D2) [EnumEntity-Fix](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/EnumEntity-Fix): Fix Crash ```CTriggerTraceEnum::EnumEntity``` null pointer

   * (L4D2) [l4d2_null_cusercmd_fix](https://forums.alliedmods.net/showpost.php?p=2784704&postcount=6): Fix Crash ```CLagCompensationManager::StartLagCompensation with NULL CUser```

   * (L4D2) [code_patcher](https://github.com/SirPlease/L4D2-Competitive-Rework/blob/master/addons/sourcemod/scripting/code_patcher.sp): Fix issues with Server performance dipping severely when players were in the water and when player fire bullet
      * [Gamedata](https://github.com/SirPlease/L4D2-Competitive-Rework/blob/master/addons/sourcemod/gamedata/code_patcher.txt)

   * (L4D1/2) [cutlrbtreefix](https://github.com/fdxx/cutlrbtreefix/releases): Fix Crash ```CUtlRBTree overflow```

   * (L4D2) [SV_SolidMoved](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/SV_SolidMoved-Fix): Fixing the null pointer dereference in ```SV_SolidMoved```

   * (L4D2) [GetCollideableTriggerTestBox_Detour](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/GetCollideableTriggerTestBox_Detour): Fixing the crash with null pointer dereference in ```CM_GetCollideableTriggerTestBox```

   * (L4D2 linux) [IsReachable_Detour](https://forums.alliedmods.net/showpost.php?p=2725898&postcount=22): Fix Crash ```SurvivorBot::IsReachable``` null pointer

   * (L4D2 linux) [l4d2_chainsaw_fix](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4d2_chainsaw_fix): Fixed server crash due to chainsaw sound issue in l4d2 linux  ```CSoundPatch::ChangePitch```, ```CSoundControllerImp::SoundChangePitch```

   * (L4D2 windows) [Tier_MemScan_Detour](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/Tier_MemScan_Detour): Temp. walkaround agains wrong mem. address access in ```Tier0```, maybe some mem. scan related

   * (L4D2 windows) [Server_sub_101D7CB0_Detour](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/Server_sub_101D7CB0_Detour): Fix Crash ```server.dll + 0x1d7cbb``` null pointer

   * (L4D1 linux/windows) [Fix_CM_VCollideForModel_Detour](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/Fix_CM_VCollideForModel_Detour): Fixed server crash caused by zero pointer of model_t passed to ```CM_VCollideForModel``` function
</details>

* <details><summary><b>Hacker and Cheat</b></summary>

   * (L4D1/2) [block_packet_exploits](https://forums.alliedmods.net/showpost.php?p=2770664&postcount=17): Prevents server lag due to modified game clients abusing exploits
      
   * (L4D1/2) [SMAC](https://github.com/fbef0102/SMAC/releases): sourcemod anti cheat in early 2010s
      * Probably not work on most cheating tools today, but better than nothing
      * Server would log informations in ```sourcemod/logs/smac.log``` if a player is suspicious.

   * (L4D1/2) [Little-Anti-Cheat](https://github.com/fbef0102/Little-Anti-Cheat/releases): sourcemod anti cheat in 2020s
      * Probably not work on most cheating tools today, but better than nothing
      * Server would log informations in ```sourcemod/logs/lilac.log``` if a player is suspicious.
</details>




