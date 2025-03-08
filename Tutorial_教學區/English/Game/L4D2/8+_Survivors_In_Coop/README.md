# Navigation
> 2025/3/8 updated by [Harry](https://steamcommunity.com/profiles/76561198026784913)
- [Navigation](#navigation)
  - [Introduction](#introduction)
  - [Prepare](#prepare)
  - [Require](#require)
  - [Optional](#optional)
  - [Fun](#fun)
  - [Others](#others)
	
- - - -
## Introduction
> What's the simplest way to install 8-survivors-coop (Including 5+ players fix)?
<br/>![l4dmultislots_1](https://github.com/fbef0102/Game-Private_Plugin/assets/12229810/796efe51-2fac-43f2-9899-fef09b52328d)
<br/>![l4dmultislots_2](https://user-images.githubusercontent.com/12229810/206860045-582a79ea-8453-45a7-b73a-4ecfd051be6b.jpg)
* [繁體中文說明請看這](/Tutorial_教學區/Chinese_繁體中文/Game/L4D2/8位玩家遊玩戰役模式)
* This tutorial applies to L4D1 and L4D2
* Dedicated Server can unlock 8+ or more player slots
* Local listen Server only 8 players and unable to unlock 8+ or more player slots
    * Local listen Server is unstable and easily crash because Sourcemod doesn't support listen server.
* Including 5+ players fix

- - - -
## Prepare
* [Sourcemod](https://wiki.alliedmods.net/Installing_sourcemod)
* [Metamod](https://wiki.alliedmods.net/Installing_Metamod:Source)
* [Stripper:Source](/Tutorial_%E6%95%99%E5%AD%B8%E5%8D%80/English/Server/Install_Other_File#stripper)
* [Left 4 DHooks Direct](https://forums.alliedmods.net/showthread.php?t=321696)
* [8 Slots Lobby Mod](https://github.com/fbef0102/Game-Private_Plugin/releases/tag/file): You can have 8 slots lobby.
    * Install in client-side folder
    * Only start game when there are 2 players above
    * This Mod makes you unable to use ESC->Idle function，Install [AFK and Join Team Commands Improved](https://forums.alliedmods.net/showpost.php?p=2719702&postcount=32) to use command to afk.

- - - -
## Require
* [l4dtoolz EXTENSION](/Tutorial_%E6%95%99%E5%AD%B8%E5%8D%80/English/Server/Install_Other_File#l4dtoolz): Unlock server limit
    * Write down the following cvars in ```cfg/server.cfg``` if dedicated server (🟥if file doesn't exist, create it🟥)
    * Write down the following cvars in ```cfg/listenserver.cfg``` if listen server (🟥if file doesn't exist, create it🟥)
        ```php
        sm_cvar precache_all_survivors 1 // 1=Precache/Load all models of survivors to prevent crash
        sm_cvar sv_consistency 0 // The server enforces file consistency (1: Enable, 0: Disable) 
        ```
    * [My server.cfg](https://github.com/fbef0102/Sourcemod-Server/blob/main/L4D2/Windows%20Server%20Files/left4dead2/cfg/server.cfg)

* [Remove Lobby Reservation (Harry Version)](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4d_unreservelobby): Remove the lobby reservation once server is full, so 9+ players can connect to server directly through IP.
     * 🟥Doesn't work in listen server🟥

* [l4dmultislots (Harry Version)](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4dmultislots): Allows additional survivor players in server when 5+ player joins the server
    * How could I control the number of bots spawned at the start
    * ```cfg/sourcemod/l4dmultislots.cfg``` (Start server and this file will be auto-generated)
		```php
		l4d_multislots_min_survivors "8"
		l4d_multislots_spawn_survivors_roundstart "1" 
		```

* [Defib_Fix](https://forums.alliedmods.net/showthread.php?t=315483): Fixes valve's defib not defibbing correct survivor, sometimes even reviving an alive player

* [Survivor Identity Fix for 5+ Survivors (Shadowysn Version)](https://forums.alliedmods.net/showpost.php?p=2718792&postcount=36): Fix bug where a survivor will change identity when a player connects/disconnects if there are 5+ survivors

* [Survivor_AFK_Fix](https://forums.alliedmods.net/showthread.php?t=326742): Fixes survivor going AFK game function.

* [l4dafkfix_deadbot](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4dafkfix_deadbot): Fixes issue when a bot die, his IDLE player become fully spectator rather than take over dead bot in 4+ survivors games.

* [lfd_both_fixUpgradePack (Harry Version)](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/lfd_both_fixUpgradePack): Fixes upgrade packs pickup bug when there are 5+ survivors

* [Better_Charger_Collision+patch](https://forums.alliedmods.net/showthread.php?t=315482): Fixes charging only allowing to hit 1 of each survivor character index and allows charger smashing into the same survivor more than once, survivors no longer become a brick wall after being charger smashed once.

* [witch_target_patch](https://github.com/LuxLuma/Left-4-fix/tree/master/left%204%20fix/witch/witch_target_patch): Fixes witch going after wrong clone survivor

* [Survivor Set Flow Fix](https://forums.alliedmods.net/showthread.php?t=339155): Prevents custom maps from softlocking due to a poorly made trigger flow.

* [l4d2_fix_changelevel](https://github.com/Target5150/MoYu_Server_Stupid_Plugins/tree/master/The%20Last%20Stand/l4d2_fix_changelevel): Fix issues due to forced changelevel.

* [l4d2_transition_info_fix](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4d2_transition_info_fix): Fix issues after map transitioned, transition info is still retaining when changed new map by other ways.

* [InputKill Kick Prevention](https://forums.alliedmods.net/showthread.php?t=332860): (L4D2) Stops clients from getting kicked via the Kill input
    * Fixed ```Kicked by Console : CBaseEntity::InputKill()```

* [Command and ConVar - Buffer Overflow Fixer](https://forums.alliedmods.net/showthread.php?t=309656): Fixes the server can not reads the plugin's cvars and cmds in cfg files

* [l4d2_maptankfix](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4d2_maptankfix): Fix issues where customized map tank does not spawn, cause the map process break 
  
* [l4d2_rescue_vehicle_multi](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4d2_rescue_vehicle_multi): Try to fix extra 5+ survivors bug after finale rescue leaving, such as: die, fall down, not count as alive, versus score bug

* (Versus) [Left4Fix](https://forums.alliedmods.net/showthread.php?t=219774): Fixed score bug and provide the following features
    * Each player earn score points
    * When both teams complete chapter with the same score Tiebreak manager will be started
    * Ghost infected can teleport to each survivor
    
* [The Passing Character Fix](https://forums.alliedmods.net/showthread.php?t=348949): Fixes the bug where players with L4D1 survivors are teleported away or kicked on The Passing map.
    * This plugin will remove l4d1 survivors npc on The Passing map

- - - -
## Optional
> __Note__<br/> Not necessary to install
* [AFK and Join Team Commands Improved Version](https://forums.alliedmods.net/showpost.php?p=2719702&postcount=32): Add more commands to let the player spectate and join team. (!afk, !survivors, !infected, etc.), but no changing team abuse.

* <s>[Dialogue Criteria Fix](https://forums.alliedmods.net/showthread.php?t=335875): For servers that spawn all 8 survivors if you want them to interact more in campaigns instead of being almost always mute.</s>
     * 🟥Broken after 2023/05 update, please wait for author to fix🟥

* <s>[Real Survivor Mourn Fix](https://forums.alliedmods.net/showthread.php?t=335903): With this, L4D1 survivors should be able to mourn each other again and L4D2 survivors will be able to mourn them upon seeing their corpses. Both bug-free.</s>
     * 🟥Broken after 2023/05 update, please wait for author to fix🟥

* [Scene Adjustments/Fixes](https://forums.alliedmods.net/showthread.php?t=321127): Attempts to fix mourning/friendly fire for 5+ survivors.
     * 🟥Doesn't work in listen server🟥
   
* [Survivor Clones Hunter Pounced Warning Fix](https://forums.alliedmods.net/showthread.php?t=248776): This plugin Re-uses the Generic Hunter Pounced lines from C1M1 so that Nick, Ellis and Coach can warn for a Hunter Pouncing their clones on server with 8+ players where multiple survivor clones are a frequent thing.
     * 🟥Doesn't work in listen server🟥

* [Team Kill Reactions Vocalize Fix](https://forums.alliedmods.net/showthread.php?t=259791): There are unused lines for all 8 survivors where they react to players team killing each other, this plugin restores these reactions.
     * 🟥Doesn't work in listen server🟥
   
* [Save Weapon Improved (Harry Version)](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4d2_ty_saveweapons): L4D2 coop save weapon when map transition if more than 4 players.

* [[L4D2]Character_manager](https://forums.alliedmods.net/showthread.php?t=309601): Sets bots to least used survivor character when spawned (l4d1+l4d2 survivors possible in game)
     * Remove **Survivor Identity Fix for 5+ Survivors** while using this plugin.

* [AutoTakeOver 5+ Survivors Improved (Harry Version)](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/_AutoTakeOver): Auto Takes Over an alive free bot UponDeath or OnBotSpawn or OnBotReplace in 5+ survivors.
   
* [l4d_h_csm (Harry Version)](/L4D_插件/Survivor_人類/l4d_h_csm): Allows players to change their L4D1/2 character or model in-game!
     * typ !csm to open menu

* [Survivor Rescue Closet](https://forums.alliedmods.net/showthread.php?t=340659): Allows a single rescue entity to rescue all eligible survivors.

* [8 Player Modified Talker](https://steamcommunity.com/sharedfiles/filedetails/?id=2462741269): Gives reactions to both l4d1 and 2 survivors

* [[L4D2] Force L4D2 survivor arms, names, icons](https://forums.alliedmods.net/showthread.php?t=345947): Force L4D2 arms, names, and icons for everyone that joins.
     * Can't guarantee that everyone will be able to get this fix

- - - -
## Fun
> __Note__<br/> Choose fun plugins you like
* [Survivor Respawn (Harry Version)](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/Survivor_Respawn): When a Survivor dies, will respawn after a period of time.

* [Infected Bots Control Improved](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4dinfectedbots): Spawns multi infected bots in any mode + allows playable special infected in coop/survival + unlock infected slots (10 VS 10 available)

* [Lockdown System Improved](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/lockdown_system_l4d): When someone tries to open end saferoom door, it will stay closed until a certain amount of time has passed. All the survivors need to do is to survive the incoming waves of mob and tanks.

* [Adrenaline & Pills Powerups Improved](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4d2_powerups_rush): On the use of Adrenaline & Pain Pills, various actions are performed faster (Reloading, weapon firing, and melee swinging)

* [L4D2 gifts (Harry Version)](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4d2_gifts): Drop gifts (touch gift to earn reward) when a special infected or a witch/tank killed by survivor.

* [deathcheck (Harry Version)](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/cge_l4d2_deathcheck): Prevents mission loss(Round_End) until all human players have died.

* [CSO SupplyBox](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4d2_supply_woodbox): Supply boxes are dropped randomly in the map every certain seconds to provide support for the fight against the zombies.

* [Back 4 Blood Item hint Improved](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4d2_item_hint): When using 'Look' in vocalize menu, print corresponding item to chat area and make item glow or create spot marker/infeced maker like back 4 blood.

* [Witch target override Improved](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/witch_target_override) : Change target when the witch incapacitates or kills victim + witch auto follows survivors

* [Death Soul (Harry Version)](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4d_death_soul): Soul of the dead survivor flies away to the afterlife.

* [Graves (Harry Version)](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4d_graves): When a survivor die, on his body appear a grave.

* [Rescue vehicle leave timer](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4d_rescue_vehicle_leave_timer): When rescue vehicle arrived and a timer will display how many time left before vehicle leaving. If a player is not on rescue vehicle or zone, slay him.

* [L4D2-Unlimited-Map](https://github.com/fbef0102/L4D2-Unlimited-Map): Original L4D2 maps are modified in this config by Harry. Create the Unlimited Map.

* [L4D2 Survivors And Infected Shop Improved](/L4D_插件/Fun_娛樂/L4D2_Buy_Store): Killing zombies and infected to earn credits, use !buy to purchase weapons and items.

* [5+ Survivors More Supply](/L4D_插件/Survivor_人類/l4d_more_supply): Player can take an item on the map multi times depends on 5+ survivors in server

* [l4d_infected_limit_control](/L4D_插件/Common_Infected_普通感染者/l4d_infected_limit_control): Adjust common infecteds/hordes/mobs depends on 5+ survivors and map

* [l4d_healing_field](/L4D_插件/Fun_娛樂/l4d_healing_field): When the Tank dies a health field is generated in which the survivors receive health.

- - - -
## Others
* [Questions](/Questions_%E5%95%8F%E9%A1%8C%E5%8D%80)

