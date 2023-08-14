# Description | 內容
Improve Survivor Bot's behavior and IQ fix

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Video | 影片展示
<br/>None

* Image | 圖示
<br/>None

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

		// Allow to deal with the melee weapon. <0: Disable 1: Enable | def: 1>
		sb_fix_ci_melee_allow "1"

		// If "sb_fix_ci_melee_allow" is enabled, range to deal with the melee weapon. <1 ~ 500 | def: 160>
		sb_fix_ci_melee_range "160"

		// Range to shoot/search a Common Infected. <1 ~ 2000 | def: 500>
		sb_fix_ci_range "500"

		// [For debug] Print the action status. <0:Disable, 1:Enable>
		sb_fix_debug "0"

		// Disallow switching to the secondary weapon until the primary weapon is out of ammo. <0:No, 1:Yes | def: 1>
		sb_fix_dont_switch_secondary "1"

		// Enable the plugin. <0: Disable, 1: Enable>
		sb_fix_enabled "1"

		// Help a pinning survivor. <0: Disable, 1: Enable | def: 1>
		sb_fix_help_enabled "1"

		// Range to shoot/search a pinning survivor. <1 ~ 3000 | def: 1200>
		sb_fix_help_range "1200"

		// If "sb_fix_help_shove_type" is 2 or more, it is shove only while reloading. <0: No, 1: Yes | def: 0>
		sb_fix_help_shove_reloading "0"

		// Whether to help by shove. <0: Not help by shove, 1: Smoker only, 2: Smoker and Jockey, 3: Smoker, Jockey and Hunter | def: 2>
		sb_fix_help_shove_type "2"

		// Enable Incapacitated Cmd. <0: Disable, 1: Enable | def: 1>
		sb_fix_incapacitated_enabled "1"

		// Priority given to dealt a Smoker that is try to pinning self. <0: No, 1: Yes | def: 1>
		sb_fix_prioritize_ownersmoker "1"

		// Shoot a tank rock. <0: Disable, 1: Enable | def: 1>
		sb_fix_rock_enabled "1"

		// Range to shoot/search a tank rock. <1 ~ 2000 | def: 700>
		sb_fix_rock_range "700"

		// If "sb_fix_select_type" is 2, Enter the character name to improved. separate by commas (no spaces). Example: "nick,francis,bill"
		sb_fix_select_character_name ""

		// If 1, Notify Smart AI list in chatbox.
		sb_fix_select_chat "1"

		// If 1, Notify Smart AI list in hintbox.
		sb_fix_select_hint "1"

		// If "sb_fix_select_type" is 1, Enter the number of survivor bots. <0 ~ 4>
		sb_fix_select_number "1"

		// If 1, Play Sound when notify Smart AI list.
		sb_fix_select_sound "1"

		// Which survivor bots to improved. <0: All, 1: Randomly select X people when left the safe area, 2: Enter the character name of the survivor bot to improve in "sb_fix_select_character_name">
		sb_fix_select_type "0"

		// Deal with Special Infecteds. <0: Disable, 1: Enable | def: 1>
		sb_fix_si_enabled "1"

		// Ignore a Boomer near Survivors (and shove a Boomer). <0: No, 1: Yes | def: 1>
		sb_fix_si_ignore_boomer "1"

		// Range to ignore a Boomer. <1 ~ 900 | def: 200>
		sb_fix_si_ignore_boomer_range "200"

		// Range to shoot/search a Special Infected. <1 ~ 3000 | def: 500>
		sb_fix_si_range "500"

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
		sb_fix_witch_range_incapacitated "1000"

		// Range to shoot/search a Witch that killed a survivor. <0 ~ 2000 | def: 0>
		sb_fix_witch_range_killed "0"

		// [Witch] If have the shotgun, controls the attack timing. <0: Disable, 1: Enable | def: 1>
		sb_fix_witch_shotgun_control "1"

		// If a Witch is within distance of the values, stop the attack. <1 ~ 1000 | def: 300>
		sb_fix_witch_shotgun_range_max "300"

		// If a Witch is at distance of the values or more, stop the attack. <1 ~ 500 | def: 70>
		sb_fix_witch_shotgun_range_min "70"
		```
</details>

* <details><summary>Command | 命令</summary>

	* **Check smart AI bots list (Adm required: ADMFLAG_BAN)**
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

* Apply to | 適用於
	```
	L4D2
	```

* <details><summary>Related Plugin | 相關插件</summary>

	1. [l4d2_sb_fix](/Plugin_插件/Bot_IQ_200_Bot_智商加強/l4d2_sb_fix): Improve Survivor Bot's behavior and IQ fix
		> 強化AI Bot的智商與行為
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.3
		* Fix error "Exception reported: Entity -1 (-1) is invalid"
		* Convert code to latest syntax
		* Add convars.
		* Changes to fix warnings when compiling on SourceMod 1.11.
		* Bot Takes over player or spawn or die or disconnect event check
		* Add Adm Command, "sm_sblist", check smart bots list (Access: ADMFLAG_BAN)

	* v1.0
		* [By DingbatFlat](https://forums.alliedmods.net/showthread.php?t=334245)
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

* <details><summary>相關的官方指令中文介紹 (點我展開)</summary>

	* 以下指令寫入文件 cfg/server.cfg，可自行調整
		```php
		// 允許撿起近戰武器的Bot數量. 0=Bot永遠不拿近戰武器
		sm_cvar sb_max_team_melee_weapons 0
		```
</details>
