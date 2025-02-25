# Description | 內容
Ready-up plugin

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Apply to | 適用於
	```
	L4D1
	L4D2
	```

* [Video | 影片展示](https://youtu.be/AOVQpSg1Kqg)

* Image | 圖示
	<br/>![readyup_1](image/readyup_1.jpg)
	<br/>![readyup_2](image/readyup_2.jpg)

* <details><summary>How does it work?</summary>

	* When new round begins, freeze all survivors, and display readyup hud
		* Survivors can not leave saferoom
		* (Versus) Infected can not spawn
	* Players have to type ```!ready``` to mark as ready
	* Once everyone is ready, the game starts
	* Type ```!hide``` or ```!show``` to close or open readyup hud
	* This Plugin work in coop/realism/survival/versus/scavenge mode
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	2. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)
	3. [builtinvotes](https://github.com/fbef0102/Game-Private_Plugin/releases/tag/builtinvotes)

* <details><summary>Support | 支援插件</summary>

	1. [l4d_start_safe_area](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4d_start_safe_area): Add Custom safe area for any map on start
		* 遊戲開局時，強制將出生點周圍區域判定為安全區，以確保玩家安全
</details>

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/readyup.cfg
		```php
		// Enable this plugin. (Values: 0 = Disabled, 1 = Manual ready, 2 = Auto start, 3 = Team ready)
		l4d_ready_enabled "1"

		// Configname to display on the ready-up panel
		l4d_ready_cfg_name "HarryPotter HAHA Mode"

		// ConVar to retrieve the server name for displaying on the ready-up panel
		l4d_ready_server_cvar "sn_main_name"

		// Maximum number of players to show on the ready-up panel.
		l4d_ready_max_players "12"

		// Prevent SI from having spawns during ready-up
		l4d_ready_disable_spawns "0"
		
		// Freeze the survivors during ready-up.  When unfrozen they are unable to leave the saferoom but can move freely inside
		l4d_ready_survivor_freeze "0"

		// Enable sound during countdown & on live
		l4d_ready_enable_sound "1"

		// The sound that plays when player marks ready or unready
		l4d_ready_notify_sound "buttons/button14.wav"

		// The sound that plays when a round goes on countdown
		l4d_ready_countdown_sound "weapons/hegrenade/beep.wav"

		// The sound that plays when a round goes live
		l4d_ready_live_sound "ui/survival_medal.wav"

		// The sound that plays when auto-start goes on countdown
		l4d_ready_autostart_sound "ui/buttonrollover.wav"

		// Enable random moustachio chuckle during countdown
		l4d_ready_chuckle "0"

		// Display secret trophy on player's head when ready (survivor only)
		l4d_ready_secret "1"

		// Number of seconds to count down before the round goes live.
		l4d_ready_delay "3"

		// (Force start) Number of seconds added to the duration of live count down.
		l4d_ready_force_extra "2"

		// (Auto start) Number of seconds to count down before auto-start kicks in.
		l4d_ready_autostart_delay "5"

		// (Auto start) Number of seconds to wait for connecting players before auto-start is forced.
		l4d_ready_autostart_wait "20"

		// (Auto start) Percent of max players (Versus/Scavenge = 8, Coop/Realism/Survival = 4) in game to allow auto-start to proceed.
		l4d_ready_autostart_min "0.25"

		// If 1, Allow game to go live when teams are not full in versus/scavenge.
		l4d_ready_unbalanced_start "0"

		// Minimum of players in each team to allow a unbalanced start in versus/scavenge.
		l4d_ready_unbalanced_min "2"
		```
</details>

* <details><summary>Command | 命令</summary>

	* **Mark yourself as ready for the round to go live**
		```php
		sm_ready
		sm_r
		```
		or
		```php
		Press F1
		```

	* **Toggle your ready status**
		```php
		sm_toggleready
		```

	* **Mark yourself as not ready if you have set yourself as ready**
		```php
		sm_unready
		sm_nr
		```
		or
		```php
		Press F2
		```

	* **Admin Forces the round to start regardless of player ready status.  Players can vote to force start**
		```php
		sm_forcestart
		sm_fs
		```

	* **Hides the ready-up panel so other menus can be seen**
		```php
		sm_hide
		```

	* **Shows a hidden ready-up panel**
		```php
		sm_show
		```

	* **Return to a valid saferoom spawn if you get stuck during an unfrozen ready-up period**
		```php
		sm_return
		```
</details>

* <details><summary>API | 串接</summary>

	* [readyup.inc](scripting/include/readyup.inc)
		```php
		library name: readyup
		```
</details>
	
* Translation Support | 支援翻譯
	```
    translations/readyup.phrases.txt
	```

* <details><summary>Changelog | 版本日誌</summary>

	* v1.4h (2024-12-25)
		* Dispaly caster if use caster_system plugin
		* Add auto start, team start
		* Update cvars
		* Update translation

	* v1.3h (2024-2-22)
		* Add API and include file
		* Update cvars

	* v1.2h (2024-1-23)
		* Remove Caster

	* v1.1h (2023-2-27)
		* Translation Support

	* v1.0h
		* Individual plugin

	* 10.2.3
	    * [Original Work by CanadaRox, Target](https://github.com/SirPlease/L4D2-Competitive-Rework/blob/master/addons/sourcemod/scripting/readyup.sp)
</details>

- - - -
# 中文說明
所有玩家準備才能開始遊戲的插件

* 原理
	* 每一回合開始之時，所有玩家會暫時不能遊玩，左方顯示準備介面
		* 倖存者無法離開安全室
		* (對抗) 特感無法復活
		* 可修改源碼自行決定Ready介面要顯示甚麼內容
	* 玩家必須輸入```!ready```表示已準備好遊玩
	* 當所有玩家準備好之後，遊戲才會開始
	* 適用於戰役/寫實/生存/對抗/清道夫模式

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/readyup.cfg
		```php
		// 0=關閉插件, 1=手動準備, 2=人數足夠則自動開始, 3=隊伍準備
		l4d_ready_enabled "1"

		// 在Ready介面上顯示的模式名稱
		l4d_ready_cfg_name "HarryPotter HAHA Mode"

		// 準備介面要顯示的房名，使用哪一種指令? (指令不存在會使用官方預設"hostname")
		l4d_ready_server_cvar "sn_main_name"

		// 在Ready介面上最多能顯示的玩家數量
		l4d_ready_max_players "12"

		// 為1時，準備期間特感無法進入靈魂狀態
		l4d_ready_disable_spawns "0"
		
		// 1=準備期間倖存者無法移動
		// 0=準備期間倖存者可以自由移動但不能出去安全室外
		l4d_ready_survivor_freeze "0"

		// 為1時，準備倒數會有音效
		l4d_ready_enable_sound "1"

		// 標記準備或未準備 - 音效檔案 (路徑相對於 sound 資料夾)
		l4d_ready_notify_sound "buttons/button14.wav"

		// 倒數 - 音效檔案 (路徑相對於 sound 資料夾)
		l4d_ready_countdown_sound "ambient/alarms/klaxon1.wav"

		// 倒數結束 - 音效檔案 (路徑相對於 sound 資料夾)
		l4d_ready_live_sound "ambient/explosions/explode_3.wav"

		// 為1時，隨機播放倒數結束的音效 (小胡子音效)
		l4d_ready_chuckle "0"

		// 玩家準備時頭上顯示秘密的獎盃圖案 (只限倖存者)
		l4d_ready_secret "1"

		// 所有玩家準備好之後倒數X秒開始
		l4d_ready_delay "3"

		// (強制開始) 額外增加的倒數開始秒數
		l4d_ready_force_extra "2"

		// (自動開始) 倒數開始的秒數.
		l4d_ready_autostart_delay "5"

		// (自動開始) 自動開始之前等待連線中的玩家的秒數.
		l4d_ready_autostart_wait "20"

		// (自動開始) 當玩家數量超過滿人(對抗/清道夫: 8人, 戰役/寫實/生存: 4人)的百分比時，自動開始.
		l4d_ready_autostart_min "0.25"

		// 為1時，雙方隊伍沒有滿人也可以開始 (對抗/清道夫)
		l4d_ready_unbalanced_start "0"

		// 為1時，雙方隊伍各自至少有X人之時，回合可以開始 (對抗/清道夫)
		l4d_ready_unbalanced_min "2"
		```
</details>

* <details><summary>命令中文介紹 (點我展開)</summary>

	* **標記你為準備**
		```php
		sm_ready
		sm_r
		```
		or
		```php
		Press F1
		```

	* **標記你為準備或未準備**
		```php
		sm_toggleready
		```
		```

	* **標記你為未準備**
		```php
		sm_unready
		sm_nr
		```
		or
		```php
		Press F2
		```

	* **管理員輸入可以強制開始遊戲 (權限: ADMFLAG_BAN)**
	* **玩家輸入可投票強制開始**
		```php
		sm_forcestart
		sm_fs
		```

	* **隱藏Ready介面 (方便玩家打開其他介面)**
		```php
		sm_hide
		```

	* **顯示Ready介面**
		```php
		sm_show
		```

	* **準備期間傳送回安全室 (以防倖存者卡住)**
		```php
		sm_return
		```
</details>
