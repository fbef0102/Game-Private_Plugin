# Description | 內容
Allows infected team players to change their class in ghost mode.

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/gIbID8wfX8k)

* Image | 圖示
	* Right Mouse to change their class
	<br/>![l4d_zcs_1.gif](image/l4d_zcs_1.gif)

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	2. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_zcs.cfg
		```php
		// Enable/Disable Zombie Character Select plugin.
		l4d_zcs_enable "1"

		// If 1, Display infected class limits panel.
		l4d_zcs_show_hud_panel "1"

		// If 1, Include fake infected bots in limits.
		l4d_zcs_count_fake_bots "1"

		// If 1, Allow infected class switch at finale stages.
		l4d_zcs_allow_finale_switch "1"

		// If 1, Allow player to select previous infected class.
		l4d_zcs_allow_last_class "0"

		// If 1, Allow player to select class even when ghost infected player is too far from survivors (is going to despawn).
		l4d_zcs_allow_cull_switch "1"

		// If 1, Allow player to select class after returning to ghost from spawn.
		l4d_zcs_allow_despawn_switch "0"

		// Players with these flags have access to change class. (Empty = Everyone, -1: Nobody)
		l4d_zcs_access_level ""

		// Key binding for infected class selection. (1=MELEE, 2=RELOAD, 3=ZOOM)
		l4d_zcs_select_key "1"

		// Time interval between Infected class switch delay in (s).
		l4d_zcs_select_delay "0.5"

		// If 1, Broadcast infected class selection key binding to players.
		l4d_zcs_notify_key "1"

		// If 1, Notify infected class selection key binding every time when ghost. (0=Notify first time ghost)
		l4d_zcs_notify_key_repeat "0"

		// If 1, Broadcast class & limit status messages to players.
		l4d_zcs_notify_class "1"

		// Time before smoker class is allowed after smoker death in (s). (-1=Use Official Cvar '_ghost_delay_max', 0=No delay, 1-60=Delay)
		l4d_zcs_cooldown_smoker "-1"

		// Time before boomer class is allowed after boomer death in (s). (-1=Use Official Cvar '_ghost_delay_max', 0=No delay, 1-60=Delay)
		l4d_zcs_cooldown_boomer "-1"

		// Time before hunter class is allowed after hunter death in (s). (-1=Use Official Cvar '_ghost_delay_max', 0=No delay, 1-60=Delay)
		l4d_zcs_cooldown_hunter "-1"

		// Time before spitter class is allowed after spitter death in (s). (-1=Use Official Cvar '_ghost_delay_max', 0=No delay, 1-60=Delay)
		l4d_zcs_cooldown_spitter "-1"

		// Time before jockey class is allowed after jockey death in (s). (-1=Use Official Cvar '_ghost_delay_max', 0=No delay, 1-60=Delay)
		l4d_zcs_cooldown_jockey "-1"

		// Time before charger class is allowed after charger death in (s). (-1=Use Official Cvar '_ghost_delay_max', 0=No delay, 1-60=Delay)
		l4d_zcs_cooldown_charger "-1"

		// How many Smokers allowed. (-1=Use Official Cvar '_versus_smoker_limit', 0=None Allowed, 1-10=Limit)
		l4d_zcs_smoker_limit "-1"

		// How many Boomers allowed. (-1=Use Official Cvar '_versus_smoker_limit', 0=None Allowed, 1-10=Limit)
		l4d_zcs_boomer_limit "-1"

		// How many Hunters allowed. (-1=Use Official Cvar '_versus_smoker_limit', 0=None Allowed, 1-10=Limit)
		l4d_zcs_hunter_limit "-1"

		// How many Spitters allowed. (-1=Use Official Cvar '_versus_smoker_limit', 0=None Allowed, 1-10=Limit)
		l4d_zcs_spitter_limit "-1"

		// How many Jockeys allowed. (-1=Use Official Cvar '_versus_smoker_limit', 0=None Allowed, 1-10=Limit)
		l4d_zcs_jockey_limit "-1"

		// How many Chargers allowed. (-1=Use Official Cvar '_versus_smoker_limit', 0=None Allowed, 1-10=Limit)
		l4d_zcs_charger_limit "-1"

		// If 1, Allow Smoker Ghost player to select class. (0=Not Allow)
		l4d_zcs_smoker_ghost_allow "1"

		// If 1, Allow Boomer Ghost player to select class. (0=Not Allow)
		l4d_zcs_boomer_ghost_allow "1"

		// If 1, Allow Hunter Ghost player to select class. (0=Not Allow)
		l4d_zcs_hunter_ghost_allow "1"

		// If 1, Allow Spitter Ghost player to select class. (0=Not Allow)
		l4d_zcs_spitter_ghost_allow "1"	

		// If 1, Allow Jockey Ghost player to select class. (0=Not Allow)
		l4d_zcs_jockey_ghost_allow "1"

		// If 1, Allow Charger Ghost player to select class. (0=Not Allow)
		l4d_zcs_charger_ghost_allow "1"

		// If 1, Determine ghost zombie class when infected player spawn as ghost state (Not despawn). (0=Spawn ghost normally via the director)
		l4d_zcs_determine_class_when_ghost "0"

		// Number of uses can ghost player select class every time? (0=No limit)
		l4d_zcs_change_class_limit "0"
		```
</details>

* <details><summary>Command | 命令</summary>
	
	None
</details>

* <details><summary>API | 串接</summary>

	```c
	/**
	* @brief Called whenever infected player changed zombie class via zcs
	*
	* @param client		The client index who changed zombie class
	* @param new_zombieclass The new zombie class that client changed to
	*
	* @noreturn
	*/
	forward public void L4D2_OnClientChangeZombieClass(int client, int new_zombieclass);
	```
</details>

* Apply to | 適用於
	```
	L4D1
	L4D2
	```

* <details><summary>Changelog | 版本日誌</summary>

	```php
	//[X]BetaAlpha @ 2010-2011
	//HarryPotter @ 2022-202４
	```
	* v1.0 (2024-2-24)
		* Update cvars
		* Add translation

	* v1.1
		* Remake Code
		* Remove Gamedata
		* Remove Unnecessary cvars
		* Add more cvars
		* Optimize Code

	* v0.9.6
		* [By [X]BetaAlpha](https://forums.alliedmods.net/showthread.php?t=121461)
</details>

- - - -
# 中文說明
特感玩家可以在靈魂狀態自行切換特感種類

* 原理
	* 靈魂狀態時，使用滑鼠右鍵切換特感類型
	* 重新回到靈魂狀態不得再次切換

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d_zcs.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		l4d_zcs_enable "1"

		// 為1時，顯示當前特感數量的介面
		l4d_zcs_show_hud_panel "1"

		// 為1時，特感Bot也會被計算於限制數量之內
		l4d_zcs_count_fake_bots "1"

		// 為1時，最終救援開始之後也可以切換特感類型 (0=不准)
		l4d_zcs_allow_finale_switch "1"

		// 為1時，允許玩家切換到上次遊玩的特感類型 (0=不准)
		l4d_zcs_allow_last_class "0"

		// 為1時，當玩家離倖存者太遠時，允許玩家切換特感類型 (0=不准)
		l4d_zcs_allow_cull_switch "1"

		// 為1時，當玩家重生回靈魂狀態時，允許玩家切換特感類型 (0=不准)
		l4d_zcs_allow_despawn_switch "0"

		// 擁有這些權限的玩家，才可以切換特感類型　(留白 = 任何人都能, -1: 無人)
		l4d_zcs_access_level ""

		// 甚麼按鍵切換特感類型　(1=右鍵, 2=R鍵, 3=滑鼠滾輪鍵)
		l4d_zcs_select_key "1"

		// 切換特感類型的時間間隔 (s)
		l4d_zcs_select_delay "0.5"

		// 為1時，提示玩家使用哪種按鍵切換特感類型
		l4d_zcs_notify_key "1"

		// 為1時，每次玩家變成靈魂狀態時，提示玩家如何切換特感類型. (0=只在第一次靈魂狀態時提示)
		l4d_zcs_notify_key_repeat "0"

		// 為1時，提示特感種類與數量限制
		l4d_zcs_notify_class "1"

		// Smoker玩家死亡之後允許再次選擇Smoker的冷卻時間. (-1=使用官方指令z_ghost_delay_max設置的時間, 0=無冷卻時間, 請設置1~60秒)
		l4d_zcs_cooldown_smoker "-1"

		// Boomer玩家死亡之後允許再次選擇Boomer的冷卻時間. (-1=使用官方指令z_ghost_delay_max設置的時間, 0=無冷卻時間, 請設置1~60秒)
		l4d_zcs_cooldown_boomer "-1"

		// Hunter玩家死亡之後允許再次選擇Hunter的冷卻時間. (-1=使用官方指令z_ghost_delay_max設置的時間, 0=無冷卻時間, 請設置1~60秒)
		l4d_zcs_cooldown_hunter "-1"

		// Spitter玩家死亡之後允許再次選擇Spitter的冷卻時間. (-1=使用官方指令z_ghost_delay_max設置的時間, 0=無冷卻時間, 請設置1~60秒)
		l4d_zcs_cooldown_spitter "-1"

		// Jockey玩家死亡之後允許再次選擇Jockey的冷卻時間. (-1=使用官方指令z_ghost_delay_max設置的時間, 0=無冷卻時間, 請設置1~60秒)
		l4d_zcs_cooldown_jockey "-1"

		// Charger玩家死亡之後允許再次選擇Charger的冷卻時間. (-1=使用官方指令z_ghost_delay_max設置的時間, 0=無冷卻時間, 請設置1~60秒)
		l4d_zcs_cooldown_charger "-1"

		// Smoker的數量限制 (-1=使用官方指令z_versus_smoker_limit設置的數量, 0=不允許, 請設置1~10)
		l4d_zcs_smoker_limit "-1"

		// Boomer的數量限制 (-1=使用官方指令z_versus_boomer_limit設置的數量, 0=不允許, 請設置1~10)
		l4d_zcs_boomer_limit "-1"

		// Hunter的數量限制 (-1=使用官方指令z_versus_hunter_limit設置的數量, 0=不允許, 請設置1~10)
		l4d_zcs_hunter_limit "-1"

		// Spitter的數量限制 (-1=使用官方指令z_versus_spitter_limit設置的數量, 0=不允許, 請設置1~10)
		l4d_zcs_spitter_limit "-1"

		// Jockey的數量限制 (-1=使用官方指令z_versus_jockey_limit設置的數量, 0=不允許, 請設置1~10)
		l4d_zcs_jockey_limit "-1"

		// Charger的數量限制 (-1=使用官方指令z_versus_charger_limit設置的數量, 0=不允許, 請設置1~10)
		l4d_zcs_charger_limit "-1"

		// 為1時，允許靈魂特感Smoker切換其他特感類型 (0=不允許)
		l4d_zcs_smoker_ghost_allow "1"

		// 為1時，允許靈魂特感Boomer切換其他特感類型 (0=不允許)
		l4d_zcs_boomer_ghost_allow "1"

		// 為1時，允許靈魂特感Hunter切換其他特感類型 (0=不允許)
		l4d_zcs_hunter_ghost_allow "1"

		// 為1時，允許靈魂特感Spitter切換其他特感類型 (0=不允許)
		l4d_zcs_spitter_ghost_allow "1"	

		// 為1時，允許靈魂特感Jockey切換其他特感類型 (0=不允許)
		l4d_zcs_jockey_ghost_allow "1"

		// 為1時，允許靈魂特感Charger切換其他特感類型 (0=不允許)
		l4d_zcs_charger_ghost_allow "1"

		// 當玩家進入靈魂狀態時(非回魂狀態)，1 = 由此插件決定特感類型 (根據場上的特感數量限制決定)，0 = 交給導演系統決定
		l4d_zcs_determine_class_when_ghost "0"

		// 每次靈魂狀態時，可以切換特感類型的次數? (0=無限制次數)
		l4d_zcs_change_class_limit "0"
		```
</details>
