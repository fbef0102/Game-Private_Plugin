# Description | 內容
Allows infected team players to change their class in ghost mode.

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/jxYDks7ql4A)

* Image | 圖示
<br/>None

* Apply to | 適用於
```
L4D1 Versus
L4D2 Versus
```

* <details><summary>Changelog | 版本日誌</summary>

	```php
	//[X]BetaAlpha @ 2010-2011
	//Harry @ 2022
	```
	* v1.0
		* Remake Code
		* Remove Gamedata
		* Remove Unnecessary cvars
		* Add more cvars
		* Optimize Code

	* v0.9.6
		* [Original Post by [X]BetaAlpha](https://forums.alliedmods.net/showthread.php?t=121461)
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	2. [[INC] Multi Colors](https://forums.alliedmods.net/showthread.php?t=247770)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_zcs.cfg
	```php
	// Players with these flags have access to change class. (Empty = Everyone, -1: Nobody)
	zcs_access_level ""

	// If 1, Allow player to select class even when ghost infected player is too far from survivors (is going to despawn).
	zcs_allow_cull_switch "0"

	// If 1, Allow player to select class after returning to ghost from spawn.
	zcs_allow_despawn_switch "0"

	// If 1, Allow infected class switch at finale stages.
	zcs_allow_finale_switch "1"

	// If 1, Allow player to select previous infected class.
	zcs_allow_last_class "0"

	// Allow player to select class when Tank only (0=Anytime)
	zcs_allow_spawn_tank "0"

	// How many Boomers allowed. (-1=Use Server, 0=None Allowed, 1-10=Limit)
	zcs_boomer_limit "-1"

	// How many Chargers allowed. (-1=Use Server, 0=None Allowed, 1-10=Limit)
	zcs_charger_limit "-1"

	// Time before boomer class is allowed after boomer death in (s). (-1=Use Director, 0=No delay, 1-60=Delay)
	zcs_cooldown_boomer "-1"

	// Time before charger class is allowed after charger death in (s). (-1=Use Director, 0=No delay, 1-60=Delay)
	zcs_cooldown_charger "-1"

	// Time before hunter class is allowed after hunter death in (s). (-1=Use Director, 0=No delay, 1-60=Delay)
	zcs_cooldown_hunter "-1"

	// Time before jockey class is allowed after jockey death in (s). (-1=Use Director, 0=No delay, 1-60=Delay)
	zcs_cooldown_jockey "-1"

	// Time before smoker class is allowed after smoker death in (s). (-1=Use Director, 0=No delay, 1-60=Delay)
	zcs_cooldown_smoker "-1"

	// Time before spitter class is allowed after spitter death in (s). (-1=Use Director, 0=No delay, 1-60=Delay)
	zcs_cooldown_spitter "-1"

	// If 1, Include fake infected bots in limits.
	zcs_count_fake_bots "1"

	// If 1, Enable Zombie Character Select debug log.
	zcs_debug "0"

	// Enable/Disable Zombie Character Select plugin.
	zcs_enable "1"

	// (L4D2 only) Enable/Disable Valve Infected Bots.
	zcs_enable_value_bots "1"

	// How many Hunters allowed. (-1=Use Server, 0=None Allowed, 1-10=Limit)
	zcs_hunter_limit "-1"

	// How many Jockeys allowed. (-1=Use Server, 0=None Allowed, 1-10=Limit)
	zcs_jockey_limit "-1"

	// If 1, Broadcast class & limit status messages to players.
	zcs_notify_class "1"

	// If 1, Broadcast infected class selection key binding to players.
	zcs_notify_key "1"

	// If 1, Notify infected class selection key binding every time when ghost. (0=Notify first time ghost)
	zcs_notify_key_repeat "0"

	// Time interval between Infected class switch delay in (s).
	zcs_select_delay "0.5"

	// Key binding for infected class selection. (1=MELEE, 2=RELOAD, 3=ZOOM)
	zcs_select_key "1"

	// If 1, Display infected class limits panel.
	zcs_show_hud_panel "1"

	// How many Smokers allowed. (-1=Use Server, 0=None Allowed, 1-10=Limit)
	zcs_smoker_limit "-1"

	// How many Spitters allowed. (-1=Use Server, 0=None Allowed, 1-10=Limit)
	zcs_spitter_limit "-1"
	```
</details>

* <details><summary>Command | 命令</summary>
	None
</details>

- - - -
# 中文說明
特感玩家可以在靈魂狀態自行切換特感種類

* 功能
	1. 預設是滑鼠右鍵切換
	2. 重新回到靈魂狀態不得再次切換
	3. 可限制每個特感種類的數量
	4. 可限制每個特感種類的冷卻時間，譬如當真人Charger玩家死亡時，20秒內不能選擇Charger
	5. 可限制只能在Tank期間切換
