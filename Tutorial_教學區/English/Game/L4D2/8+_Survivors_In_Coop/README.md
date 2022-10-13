# Navigation
> 2022/10/3 updated by [Harry](https://steamcommunity.com/profiles/76561198026784913)
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
* [繁體中文](/Tutorial_教學區/Chinese_繁體中文/Game/L4D2/8位玩家遊玩戰役模式)
* This tutorial applies to L4D1 and L4D2
* [AlliedModeders Post](https://forums.alliedmods.net/showpost.php?p=2750588&postcount=4): Written by me
* Dedicated Server can unlock 8+ or more player slots
* Local listen Server only 8 players and unable to unlock 8+ or more player slots
   - Local listen Server is unstable and easily crash because Sourcemod doesn't support listen server.
* Including 5+ players fix

- - - -
## Prepare
1. [Sourcemod](https://www.sourcemod.net/downloads.php?branch=stable)
2. [Metamod](https://www.metamodsource.net/downloads.php?branch=stable)
3. [Stripper:Source](http://www.bailopan.net/stripper/snapshots/1.2/)
4. [Left 4 DHooks Direct](https://forums.alliedmods.net/showthread.php?t=321696)
5. [8 Slots Lobby Mod](https://steamcommunity.com/sharedfiles/filedetails/?id=546656726): You can have 8 slots lobby. <br/>
   - 🟥Listen server only🟥
   - 8 Slots Lobby Mod makes you unable to use ESC->Idle function，Install [AFK and Join Team Commands Improved](https://forums.alliedmods.net/showpost.php?p=2719702&postcount=32) to use command to afk.

- - - -
## Require
1. [l4dtoolz EXTENSION](https://github.com/Accelerator74/l4dtoolz/releases): Unlock server limit
   - write down cvars in cfg/server.cfg if you are dedicated servers (🟥if file doesn't exist, create it🟥)
   - write down cvars in cfg/listenserver.cfg if you are listen servers (🟥if file doesn't exist, create it🟥)
    ```php
    sv_maxplayers 8 // 8 players can join the server, set number whatever you like (range 4 to 32)
    sv_visiblemaxplayers 8 //number is same as above
    sv_force_unreserved 1 //your server will stay unreserved and allow players to connect using connect command, this command sets sv_allow_lobby_connect_only 0.
    sv_allow_lobby_connect_only 0 // 1=Only join server from lobby.
    sm_cvar precache_all_survivors 1 // Precache/Load all models of survivors to prevent crash
    sm_cvar sv_consistency 0 // the server enforces file consistency (1: Enable, 0: Disable) 
    ```
   - [My server.cfg](https://github.com/fbef0102/L4D2-Server4Dead/blob/main/Windows%20Server%20Files/left4dead2/cfg/server.cfg)

2. [l4dmultislots (Harry Version)](https://forums.alliedmods.net/showpost.php?p=2715546&postcount=249): Allows additional survivor players in coop/survival/realism when 5+ player joins the server.
   - How could I control the number of bots spawned at the start
      - cfg/sourcemod/l4dmultislots.cfg
		```php
		l4d_multislots_max_survivors "8"
		l4d_multislots_spawn_survivors_roundstart "1" 
		```

3. [Defib_Fix](https://forums.alliedmods.net/showthread.php?p=2647018): Fixes valve's defib not defibbing correct survivor, sometimes even reviving an alive player

4. <s>[Wrong Voice Owner Fix](https://forums.alliedmods.net/showthread.php?t=322826): When two or more same characters in the game only 1 become source of voices from all same characters</s> 
    - 🟦Valve already fixed🟦

5. [Survivor Identity Fix for 5+ Survivors (Shadowysn Version)](https://forums.alliedmods.net/showpost.php?p=2718792&postcount=36): Fix bug where a survivor will change identity when a player connects/disconnects if there are 5+ survivors

6. [Survivor_AFK_Fix](https://forums.alliedmods.net/showthread.php?p=2714236): Fixes survivor going AFK game function.

7. [l4dafkfix_deadbot](https://forums.alliedmods.net/showpost.php?p=2772050&postcount=54): Fixes issue when a bot die, his IDLE player become fully spectator rather than take over dead bot in 4+ survivors games.

8. [lfd_both_fixUpgradePack (Harry Version)](https://github.com/fbef0102/L4D2-Plugins/tree/master/lfd_both_fixUpgradePack): Fixes upgrade packs pickup bug when there are 5+ survivors

9. Choose one Method
   - A Method: 8+ players Bug Fixes EXTENSION ([Windows](https://forums.alliedmods.net/showpost.php?p=2721138&postcount=295), [Linux](https://forums.alliedmods.net/showpost.php?p=2752412&postcount=301))
     - Survivor finale score bug
     - Charger stop bug
     - Witch incorrect player attack

   - B Method: Left-4-fix by Lux
     - [Better_Charger_Collision+patch](https://forums.alliedmods.net/showthread.php?t=315482): Fixes charging only allowing to hit 1 of each survivor character index and allows charger smashing into the same survivor more than once, survivors no longer become a brick wall after being charger smashed once.
     - [witch_target_patch](https://github.com/LuxLuma/Left-4-fix/tree/master/left%204%20fix/witch/witch_target_patch): Fixes witch going after wrong clone survivor

10. [Real Zoey Unlock](https://forums.alliedmods.net/showthread.php?t=308483): Unlocks Zoey. No bugs. No crashes. No fakes. The Real Deal.
    - 🟥Windows servers only🟥

- - - -
## Optional
> __Note__<br/>
  You can choose not to use any of optional plugins
11. [AFK and Join Team Commands Improved Version](https://forums.alliedmods.net/showpost.php?p=2719702&postcount=32): Add more commands to let the player spectate and join team. (!afk, !survivors, !infected, etc.), but no changing team abuse.

12. [Dialogue Criteria Fix](https://forums.alliedmods.net/showthread.php?t=335875): For servers that spawn all 8 survivors if you want them to interact more in campaigns instead of being almost always mute.

13. [Real Survivor Mourn Fix](https://forums.alliedmods.net/showthread.php?t=335903): With this, L4D1 survivors should be able to mourn each other again and L4D2 survivors will be able to mourn them upon seeing their corpses. Both bug-free.

14. [Scene Adjustments/Fixes](https://forums.alliedmods.net/showthread.php?t=321127): Attempts to fix mourning/friendly fire for 5+ survivors.
    - 🟥Doesn't work in listen server🟥
   
15. [Survivor Clones Hunter Pounced Warning Fix](https://forums.alliedmods.net/showthread.php?p=2202855): This plugin Re-uses the Generic Hunter Pounced lines from C1M1 so that Nick, Ellis and Coach can warn for a Hunter Pouncing their clones on server with 8+ players where multiple survivor clones are a frequent thing.
    - 🟥Doesn't work in listen server🟥

16. [Team Kill Reactions Vocalize Fix](https://forums.alliedmods.net/showthread.php?p=2273230): There are unused lines for all 8 survivors where they react to players team killing each other, this plugin restores these reactions.
    - 🟥Doesn't work in listen server🟥
   
17. [Save Weapon Improved (Harry Version)](https://forums.alliedmods.net/showpost.php?p=2757629&postcount=113): L4D2 coop save weapon when map transition if more than 4 players.

18. [[L4D2]Character_manager](https://forums.alliedmods.net/showthread.php?t=309601): Sets bots to least used survivor character when spawned (l4d1+l4d2 survivors possible in game)
    - The Passing Fix - download <b>"Stripper_passingfix.7z"</b> (see Attached Files in [L4D2]Character_manager thread) for the passing to prevent players using L4D1 characters from being teleported/killed in this campaign.
      - Unzip all cfg files in addons\stripper\maps\ 相同資料夾
    - Remove no.5 Survivor Identity Fix for 5+ Survivors while using this plugin.

19. [AutoTakeOver 5+ Survivors Improved (Harry Version)](https://forums.alliedmods.net/showpost.php?p=2773718&postcount=16): Auto Takes Over an alive free bot UponDeath or OnBotSpawn or OnBotReplace in 5+ survivors.

20. [8 survivors in rescue vehicle](https://forums.alliedmods.net/showpost.php?p=2726779&postcount=38): Fixes Whenever more than four survivors enter a rescue vehicle, four more survivors are left behind and die.
    - Unzip all cfg files in addons\stripper\maps\

21. [Remove Lobby Reservation (SilversVersion)](https://forums.alliedmods.net/showpost.php?p=2704023&postcount=103): Once all the lobby players are connected, it will automatically remove the lobby reservation.
    - 🟥Doesn't work in listen server🟥
    
22. [Survivor Set Flow Fix](https://forums.alliedmods.net/showthread.php?t=339155): Prevents custom maps from softlocking due to a poorly made trigger flow.

23. [l4d_h_csm (Harry Version)](https://github.com/fbef0102/Game-Private_Plugin/tree/main/l4d_h_csm): Allows players to change their L4D1/2 character or model in-game!
    - typ !csm to open menu
- - - -
## Fun
1. [Survivor Respawn (Harry Version)](https://forums.alliedmods.net/showpost.php?p=2770929&postcount=18): When a Survivor dies, is hanging, or is incapped, will respawn after a period of time.

2. [M60_GrenadeLauncher_patches](https://forums.alliedmods.net/showthread.php?t=323408): Allows M60 and Grenade Launcher to function as any other weapon. Not dropping on empty and picking up ammo to refill

3. [Infected Bots Control Improved](https://forums.alliedmods.net/showpost.php?p=2699220&postcount=1369): Spawns infected bots in L4D1 versus, and gives greater control of the infected bots in L4D1/L4D2 without being limited by the director.

4. [L4D2 Survivors And Infected Shop Improved](https://forums.alliedmods.net/showpost.php?p=2731889&postcount=18): Killing zombies and infected to earn credits, use !buy to purchase weapons and items.

5. [Lockdown System Improved](https://forums.alliedmods.net/showpost.php?p=2712869&postcount=54): When someone tries to open end saferoom door, it will stay closed until a certain amount of time has passed. All the survivors need to do is to survive the incoming waves of mob and tanks.

6. [Adrenaline & Pills Powerups Improved](https://forums.alliedmods.net/showpost.php?p=2748223&postcount=15): On the use of Adrenaline & Pain Pills, various actions are performed faster (Reloading, weapon firing, and melee swinging)

7. [L4D2 gifts (Harry Version)](https://github.com/fbef0102/L4D2-Plugins/tree/master/l4d2_gifts): Drop gifts (touch gift to earn reward) when a special infected or a witch/tank killed by survivor.

8. [deathcheck (Harry Version)](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/cge_l4d2_deathcheck): Prevents mission loss(Round_End) until all human players have died.

9. [CSO SupplyBox](https://forums.alliedmods.net/showthread.php?t=335862): Supply boxes are dropped randomly in the map every certain seconds to provide support for the fight against the zombies.

10. [Back 4 Blood Item hint Improved](https://forums.alliedmods.net/showpost.php?p=2765332&postcount=29): When using 'Look' in vocalize menu, print corresponding item to chat area and make item glow or create spot marker/infeced maker like back 4 blood.

11. [Witch target override Improved](https://forums.alliedmods.net/showpost.php?p=2732048&postcount=9) : Change target when the witch incapacitates or kills victim + witchs auto follow survivors

12. [Death Soul (Harry Version)](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4d_death_soul): Soul of the dead survivor flies away to the afterlife.

13. [Graves (Harry Version)](https://forums.alliedmods.net/showpost.php?p=2771370&postcount=24): When a survivor die, on his body appear a grave.

14. [Rescue vehicle leave timer](https://forums.alliedmods.net/showpost.php?p=2725525&postcount=7): When rescue vehicle arrived and a timer will display how many time left for vehicle leaving. If a player is not on rescue vehicle or zone, slay him.

15. [L4D2-Unlimited-Map](https://github.com/fbef0102/L4D2-Unlimited-Map): Original L4D2 maps are modified in this config by Harry. Create the Unlimited Map.

- - - -
## Others
* [問題集合區 Questions](https://github.com/fbef0102/Game-Private_Plugin/tree/main/Questions_%E5%95%8F%E9%A1%8C%E5%8D%80)

