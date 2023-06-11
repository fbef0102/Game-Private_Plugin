# Description | 內容
Puts players on the right team after map/campaign change and provides API.

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Video | 影片展示
<br/>None

* Image | 圖示
<br/>None

* Apply to | 適用於
	```
	L4D1
	L4D2
	```

* Translation Support | 支援翻譯
	```
	English
	繁體中文
	简体中文
	Russian
	```

* <details><summary>Changelog | 版本日誌</summary>

	* v1.1h (2023-2-13)
		* Support Idle player, switch idle players to survivor team next time

	* v1.0h (2023-2-10)
		* Remake code, convert code to latest syntax
		* Fix warnings when compiling on SourceMod 1.11.
		* Individual plugin
		* Delete a convar

	* v1.0
	    * [Original Plugin by raziEiL](https://github.com/raziEiL/r2comp-standalone/blob/master/sourcemod/scripting/r2comp_unscramble.sp)
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	2. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)

* <details><summary>API | 串接</summary>

	```c++
	/**
	* @brief Called whenever unscramble process is completed.
	*
	* @noreturn
	*/
	forward void R2comp_OnUnscrambleEnd()

	/**
	* Force to store players team data.
	*
	* @noreturn
	*/
	native void R2comp_UnscrambleKeep()

	/**
	* Force to start unscramble process (Puts players on the right team).
	* @note To make unscramble process works you need call R2comp_UnscrambleKeep first.
	*
	* @noreturn
	*/
	native void R2comp_UnscrambleStart()

	/**
	* Force to abort unscramble process.
	*
	* @param fireOnUnscrambleEnd    Whether or not R2comp_OnUnscrambleEnd forward should be fired.
	*
	* @noreturn
	*/
	native void R2comp_AbortUnscramble(bool fireOnUnscrambleEnd = true)

	/**
	* Returns whether or not unscramble process is completed.
	*
	* @return			If true then unscramble is completed, false means unscramble is processing and team changes is locked.
	*/
	native bool R2comp_IsUnscrambled()
	```
</details>

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_team_unscramble.cfg
		```php
		// 0=Off, 1=Enables unscramble feature (Puts players on the right team after map/campaign change).
		rotoblin_allow_unscramble "1"

		// Maximum attempts to try to move player to the team he were.
		rotoblin_unscramble_attempts "3"

		// 0=Off, 1=Prints a notification to chat when unscramble is completed (lets spectators know when they can join a team).
		rotoblin_unscramble_notify "1"

		// 0=Off, 1=Prevents calling votes until unscramble completes.
		rotoblin_unscramble_novotes "1"

		// Unscramble max processing time after map changed. When the time expires the teams changes will be unlocked.
		rotoblin_unscramble_time "45"
		```
</details>

* <details><summary>Command | 命令</summary>

	* **Force to store players team data. (Adm required: ADMFLAG_ROOT)**
		```php
		sm_keepteams
		```

	* **Force to puts players on the right team. (Adm required: ADMFLAG_ROOT)**
		```php
		sm_unscramble_start
		```

	* **Aborts unscramble process. (Adm required: ADMFLAG_ROOT)**
		```php
		sm_unscramble_abort
		```
</details>

- - - -
# 中文說明
換圖或者換關卡之後，將玩家還原到上次所在的隊伍

* 原理
	* 利用官方投票換關卡或者重新關卡時，這個插件會紀錄所有在場的玩家和所在的隊伍(不論是特感/人類/旁觀隊伍，並在更換完成地圖後還原
	* 建議等真的需要再來使用

* 功能
	* 提供很多API串接，給其他插件使用
