# Description | 內容
Improve Survivor Bot's behavior and IQ fix

> __Note__ <br/>
This plugin is private, Please contact [me](/#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](/#私人插件列表-private-plugins-list)

* Apply to | 適用於
	```
	L4D2
	```

* <details><summary>How does it work?</summary>

	* Improve bots
		* Help a pinning Survivor.
		* Attack a Common Infected.
		* Attack a Special Infected.
		* Attack a Tank.
		* Bash a flying Hunter and Jockey.
		* Shoot a tank rock.
		* Shoot a Witch (Contronls the attack timing when have a shotgun).
		* Restrict switching to the sub weapon.
		* And the action during incapacitated.

	* Select the improved bot with the following CVars.
		* If "sb_fix_select_type" is 0, improved all bots.
		* If "sb_fix_select_type" is 1, the number of bots set in "sb_fix_select_number" will be randomly select.
		* If "sb_fix_select_type" is 2, select the bot of the character entered in "sb_fix_select_character_name".
		* Bots will be improved after players have left the saferoom.
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d2_sb_fix.cfg
		```php
		// Enable the plugin. <0: Disable, 1: Enable>
		sb_fix_enabled "1"

		// If number of players in server reached this value, disable the plugin (0=off)
		sb_fix_player_disable "0"

		// Which survivor bots to improved. 
		// 0: All
		// 1: Randomly select X people when left the safe area,
		// 2: Enter the character name of the survivor bot to improve in cvar "_select_character_name"
		sb_fix_select_type "0"

		// If "sb_fix_select_type" is 1, Enter the number of survivor bots. <0 ~ 4>
		sb_fix_select_number "1"

		// If "sb_fix_select_type" is 2, Enter the character name to improved. separate by commas (no spaces). 
		// Example: "nick,francis,bill"
		sb_fix_select_character_name ""

		// If 1, Notify Smart AI list in chatbox.
		sb_fix_select_chat "1"

		// If 1, Notify Smart AI list in hintbox.
		sb_fix_select_hint "1"

		// If 1, Play Sound when notify Smart AI list.
		sb_fix_select_sound "1"

		// Bash a flying Hunter or Jockey. <0: Disable, 1: Enable | def: 1>
		sb_fix_bash_enabled "1"

		// Chance of bash a flying Hunter. (Even 100 doesn't can perfectly shove). <1 ~ 100 | def: 100>
		sb_fix_bash_hunter_chance "100"

		// Range to bash/search a flying Hunter. <1 ~ 500 | def: 145>
		sb_fix_bash_hunter_range "145"

		// Chance of bash a flying Jockey. (Even 100 doesn't can perfectly shove). <1 ~ 100 | def: 100>
		sb_fix_bash_jockey_chance "100"

		// Range to bash/search a flying Jockey. <1 ~ 500 | def: 125>
		sb_fix_bash_jockey_range "125"

		// Time interval to check Bot function. (To decrease lag)
		sb_fix_bot_interval "0.2"

		// Enable Bot unlimited ammo (backup ammo). <0:Disable, 1:Enable | def: 1>
		sb_fix_bot_unlimited_ammo "1"

		// Deal with Common Infecteds. <0: Disable, 1: Enable | def: 1>
		sb_fix_ci_enabled "1"

		// Range to shoot/search a Common Infected. <1 ~ 2000 | def: 500>
		sb_fix_ci_range "500"

		// Allow to deal with the melee weapon. <0: Disable 1: Enable | def: 1>
		sb_fix_ci_melee_allow "1"

		// If "sb_fix_ci_melee_allow" is enabled, range to deal with the melee weapon. <1 ~ 500 | def: 160>
		sb_fix_ci_melee_range "160"

		// [For debug] Print the action status. <0:Disable, 1:Enable>
		sb_fix_debug "0"

		// Disallow switching to the secondary weapon until the primary weapon is out of ammo. <0:No, 1:Yes | def: 1>
		sb_fix_dont_switch_secondary "1"

		// Help a pinning survivor. <0: Disable, 1: Enable | def: 1>
		sb_fix_help_enabled "1"

		// Range to shoot/search a pinning survivor. <1 ~ 3000 | def: 1200>
		sb_fix_help_range "1200"

		// Whether to help by shove. <0: Not help by shove, 1: Smoker only, 2: Smoker and Jockey, 3: Smoker, Jockey and Hunter | def: 2>
		sb_fix_help_shove_type "2"

		// If "sb_fix_help_shove_type" is 2 or more, it is shove only while reloading. <0: No, 1: Yes | def: 0>
		sb_fix_help_shove_reloading "0"

		// If 1, Improve bot behavior while bot is incapacitated
		sb_fix_incapacitated_enabled "1"

		// Priority given to dealt a Smoker that is try to pinning self. <0: No, 1: Yes | def: 1>
		sb_fix_prioritize_ownersmoker "1"

		// Shoot a tank rock. <0: Disable, 1: Enable | def: 1>
		sb_fix_rock_enabled "1"

		// Range to shoot/search a tank rock. <1 ~ 2000 | def: 700>
		sb_fix_rock_range "700"

		// Deal with Special Infecteds. <0: Disable, 1: Enable | def: 1>
		sb_fix_si_enabled "1"

		// Range to shoot/search a Special Infected. <1 ~ 3000 | def: 500>
		sb_fix_si_range "500"

		// Ignore a Boomer near Survivors (and shove a Boomer). <0: No, 1: Yes | def: 1>
		sb_fix_si_ignore_boomer "1"

		// Range to ignore a Boomer. <1 ~ 900 | def: 200>
		sb_fix_si_ignore_boomer_range "200"

		// When a Special Infected and a Tank is together within the specified range, which to prioritize. <0: Nearest, 1: Special Infected, 2: Tank | def: 0>
		sb_fix_si_tank_priority_type "0"

		// Deal with Tanks. <0: Disable, 1: Enable | def: 1>
		sb_fix_tank_enabled "1"

		// Range to shoot/search a Tank. <1 ~ 3000 | def: 1200>
		sb_fix_tank_range "1200"

		// Shoot a rage Witch. <0: Disable, 1: Enable | def: 1>
		sb_fix_witch_enabled "1"

		// Range to shoot/search a rage Witch. <1 ~ 2000 | def: 1500>
		sb_fix_witch_range "1500"

		// Range to shoot/search a Witch that incapacitated a survivor. <0 ~ 2000 | def: 1000>
		// 0=off
		sb_fix_witch_range_incapacitated "1000"

		// Range to shoot/search a Witch that killed a survivor. <0 ~ 2000 | def: 0>
		// 0=off
		sb_fix_witch_range_killed "0"

		// [Witch] If have the shotgun, controls the shooting timing. <0: Disable, 1: Enable | def: 1>
		sb_fix_witch_shotgun_control "1"

		// If a Witch is within distance of the values, stop the shooting. <1 ~ 1000 | def: 300>
		sb_fix_witch_shotgun_range_max "300"

		// If a Witch is at distance of the values or more, stop the shooting. <1 ~ 500 | def: 70>
		sb_fix_witch_shotgun_range_min "70"
		```
</details>

* <details><summary>Command | 命令</summary>

	* **Check smart AI bots list (Adm required: ADMFLAG_ROOT)**
		```php
		sm_sblist
		```
</details>

* <details><summary>Related Official ConVar</summary>

	* write down the following cvars in cfg/server.cfg
		```php
		// The total number of melee weapons allowed on the team. 0 = bots never use melee
		sm_cvar sb_max_team_melee_weapons 0
		```
</details>

* <details><summary>Related Plugin | 相關插件</summary>

	1. [l4d2_sb_fix](/L4D_插件/Bot_IQ_200_Bot_智商加強/l4d2_sb_fix): Improve Survivor Bot's behavior and IQ fix
		> 強化AI Bot的智商與行為
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.0h (2025-9-21)
		* Update cvars
		* Optimize code
		* Fixed bots unable to use dual pistols

	* v1.3
		* Fix error "Exception reported: Entity -1 (-1) is invalid"
		* Convert code to latest syntax
		* Add convars.
		* Changes to fix warnings when compiling on SourceMod 1.11.
		* Bot Takes over player or spawn or die or disconnect event check
		* Add Adm Command, "sm_sblist", check smart bots list (Access: ADMFLAG_BAN)

	* Credit & Original
		* By DingbatFlat: [Survivor Bot Fix / Improved](https://forums.alliedmods.net/showthread.php?t=334245)
</details>

- - - -
# 中文說明
強化AI Bot的智商與行為

* 原理
	* 強制幫AI Bot對特感開槍、拯救隊友、拿取武器與物品
	* 強化Bot
		* 快速幫助被特感抓住的玩家
		* 快速攻擊普通感染者.
		* 快速攻擊特感.
		* 快速攻擊Tank.
		* 能夠主動推飛撲過來的Hunter與Jockey.
		* 能夠主動打掉Tank扔出去的石頭.
		* 快速殺死Witch (當有散彈槍的時候).
		* 限制切換到副武器，避免Bot整場都在用手槍耍白癡.
		* 隊友倒地時的行為.
	* 遊戲開始之後，Bot才會強化並生效
		* 出安全室之後
		* 生存計時開始之後
		* 清道夫計時開始之後

* 功能
	* 根據指令設定強化指定的Bot.
		* 如果 ```sb_fix_select_type 0```，所有Bot都是強化版
		* 如果 ```sb_fix_select_type 1``` 且有設置```sb_fix_select_number x```， 則隨機挑選X位Bot為強化版
		* 如果 ```sb_fix_select_type 2``` 且有設置```sb_fix_select_character_name <Name>```， 則指定Bot角色進行強化
			* 譬如```sb_fix_select_character_name "nick,zoey"```，只強化Nick跟Zoey
		* 如果強化太多的Bot可能會導致卡頓，請留意
	* 各強化功能調整

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d2_sb_fix.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		sb_fix_enabled "1"

		// 伺服器內玩家數量已達此數值之後, 不啟用此插件功能 (0=關閉這項功能)
		sb_fix_player_disable "0"

		// 如何挑選Bot強化
		// 0: 所有Bot都是強化版
		// 1: 隨機挑選X位Bot為強化版, X是另一條指令 "_select_number" 的數值
		// 2: 指定Bot角色進行強化, 另一條指令 "_select_character_name <bot角色名稱>"
		sb_fix_select_type "0"

		// 如果 "_fix_select_type" 為1, 則隨機挑選X位Bot為強化版
		sb_fix_select_number "1"

		// 如果 "_fix_select_type" 為2, 指定Bot角色進行強化. 逗號分隔 (無空白).
		// 譬如: "nick,francis,bill", 只強化Nick、Francis、Bill角色
		sb_fix_select_character_name ""

		// 為1時，聊天框提示強化版Bot的列表
		sb_fix_select_chat "1"

		// 為1時，黑底白字框提示強化版Bot的列表
		sb_fix_select_hint "1"

		// 為1時，提示強化版Bot的列表播放音效
		sb_fix_select_sound "1"

		// 為1時，強化版Bot推開正在飛行的Hunter或是Jockey
		sb_fix_bash_enabled "1"

		// 強化版Bot推開正在飛行的Hunter的機率 [1~100]% (即使設置100%不保證每次都能推到)
		sb_fix_bash_hunter_chance "100"

		// 強化版Bot搜尋此範圍內的飛行的Hunter <1 ~ 500>
		sb_fix_bash_hunter_range "145"

		// 強化版Bot推開正在飛行的Jockey的機率 [1~100]% (即使設置100%不保證每次都能推到)
		sb_fix_bash_jockey_chance "100"

		// 強化版Bot自動搜尋此範圍內的飛行的Jockey <1 ~ 500>
		sb_fix_bash_jockey_range "125"

		// 每時間間隔更新強化版Bot的智商. (秒數越低, 越容易卡頓)
		sb_fix_bot_interval "0.2"

		// 為1時，強化版Bot的備用子彈是無限
		sb_fix_bot_unlimited_ammo "1"

		// 為1時，強化版Bot會處理普通感染者
		sb_fix_ci_enabled "1"

		// 強化版Bot自動搜尋並射擊此範圍內的普通感染者 <1 ~ 2000>
		sb_fix_ci_range "500"

		// 為1時，強化版Bot會使用近戰武器處理普通感染者
		sb_fix_ci_melee_allow "1"

		// 強化版Bot會使用近戰武器處理此範圍內的普通感染者 <1 ~ 500>
		// (指令 "_ci_melee_allow" 必須為1)
		sb_fix_ci_melee_range "160"

		// (開發者偵錯用) 為1時，打印偵錯提示
		sb_fix_debug "0"

		// 為1時，強化版Bot會一直使用主武器直到沒有子彈才切換手槍
		sb_fix_dont_switch_secondary "1"

		// 為1時，強化版Bot會優先射擊控制隊友的特感
		sb_fix_help_enabled "1"

		// 強化版Bot會優先射擊此範圍內控制隊友的特感 <1 ~ 3000>
		sb_fix_help_range "1200"

		// 強化版Bot何時才要推開控制隊友的特感. <0: 永遠不推開, 1: 只推開Smoker, 2: 只推開Smoker, Jockey, 3: 推開 Smoker, Jockey, Hunter | def: 2>
		sb_fix_help_shove_type "2"

		// (如果 指令 "_help_shove_type" 的數值是2以上) 為1時，強化版Bot只在武器填裝時才推開控制隊友的特感. 
		sb_fix_help_shove_reloading "0"

		// 為1時，強化版Bot倒地期間也會提高智商行為
		sb_fix_incapacitated_enabled "1"

		// 為1時，強化版Bot優先射擊拉走自己的Smoker
		sb_fix_prioritize_ownersmoker "1"

		// 為1時，強化版Bot會射擊Tank石頭
		sb_fix_rock_enabled "1"

		// 強化版Bot會射擊此範圍內的Tank石頭 <1 ~ 2000>
		sb_fix_rock_range "700"

		// 為1時，強化版Bot會處理特感
		sb_fix_si_enabled "1"

		// 強化版Bot自動搜尋並射擊此範圍內的特感 <1 ~ 3000>
		sb_fix_si_range "500"

		// 為1時，強化版Bot不會射擊待在隊友旁邊的Boomer (會優先推開)
		sb_fix_si_ignore_boomer "1"

		// 當Boomer與隊友在此距離範圍內，強化版Bot不會射擊 (會優先推開) <1 ~ 900>
		sb_fix_si_ignore_boomer_range "200"

		// 當Tank與特感待在一起時, 哪一個優先攻擊?
		// <0: 離強化版Bot最近的, 1: 特感, 2: Tank>
		sb_fix_si_tank_priority_type "0"

		// 為1時，強化版Bot會處理Tank
		sb_fix_tank_enabled "1"

		// 強化版Bot自動搜尋並射擊此範圍內的Tank <1 ~ 3000>
		sb_fix_tank_range "1200"

		// 為1時，強化版Bot會處理Witch
		sb_fix_witch_enabled "1"

		// 強化版Bot自動搜尋並射擊此範圍內的Witch <1 ~ 2000>
		sb_fix_witch_range "1500"

		// 強化版Bot射擊此範圍內抓倒隊友的Witch <0 ~ 2000>
		// 0=關閉這項功能
		sb_fix_witch_range_incapacitated "1000"

		// 強化版Bot射擊此範圍內殺死隊友的Witch <0 ~ 2000>
		// 0=關閉這項功能
		sb_fix_witch_range_killed "0"

		// 為1時，如果強化版Bot有散彈槍, 控制其對Witch開槍的時機
		sb_fix_witch_shotgun_control "1"

		// 強化版Bot的散彈槍, 對此區間範圍內的witch暫時不要開槍
		// (max: 最遠區間, min: 最近區間)
		sb_fix_witch_shotgun_range_max "300"
		sb_fix_witch_shotgun_range_min "70"
		```
</details>

* <details><summary>命令中文介紹 (點我展開)</summary>

	* **檢查強化版Bot列表 (Adm required: ADMFLAG_ROOT)**
		```php
		sm_sblist
		```
</details>

* <details><summary>相關的官方指令中文介紹 (點我展開)</summary>

	* 以下指令寫入文件 cfg/server.cfg，可自行調整
		```php
		// 允許撿起近戰武器的Bot數量. 0=Bot永遠不拿近戰武器
		sm_cvar sb_max_team_melee_weapons 0
		```
</details>
