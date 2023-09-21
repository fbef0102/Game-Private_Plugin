# Description | 內容
Call the horde if player woke up or killed the witch or witch killed player

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/ga-WG2FoEPs)

* Image | 圖示
<br/>None

* <details><summary>How does it work?</summary>

	* Call the horde if player woke up the witch.
	* Call the horde if player killed the witch.
	* Call the horde if witch killed the survivor.
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
    2. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)
	3. Optional - [Actions](https://forums.alliedmods.net/showthread.php?t=336374)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_witch_cry.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d_witch_cry_enable "1"

		// Changes how message displays. (0: Disable, 1:In chat, 2: In Hint Box, 3: In center text)
		l4d_witch_cry_announce_type "1"

		// If 1, Call the horde if player woke up the witch.
		l4d_witch_cry_alart_enable "1"

		// Chance to call the horde if player woke up the witch. [1~100]%
		l4d_witch_cry_alart_chance "100"

		// Time delay to call the horde after player woke up the witch and witch is still alive. (0=Instantly call horde)
		l4d_witch_cry_alart_horde_time "3.0"

		// How many hordes to call if player woke up the witch
		l4d_witch_cry_alart_horde_mob "1"

		// If 1, Call the horde if player killed the witch.
		l4d_witch_cry_death_enable "1"

		// Chance to call the horde if player killed the witch. [1~100]%
		l4d_witch_cry_death_chance "100"

		// Time delay to call the horde after player killed the witch. (0=Instantly call horde)
		l4d_witch_cry_death_horde_time "2.0"

		// How many hordes to call if player killed the witch
		l4d_witch_cry_death_horde_mob "1"

		// If 1, Call the horde if witch killed the survivor.
		l4d_witch_cry_kill_enable "1"

		// Chance to call the horde if witch killed the survivor. [1~100]%
		l4d_witch_cry_kill_chance "50"

		// Time delay to call the horde after witch killed the survivor. (0=Instantly call horde)
		l4d_witch_cry_kill_time "2.0"

		// How many hordes to call if witch killed the survivor
		l4d_witch_cry_kill_mob "1"
		```
</details>

* <details><summary>Command | 命令</summary>

	None
</details>

* Apply to | 適用於
	```
	L4D1
	L4D2
	```

* <details><summary>Translation Support | 支援翻譯</summary>

	```
	English
	繁體中文
	简体中文
	```
</details>

* <details><summary>Changelog | 版本日誌</summary>

    * v1.4 (2023-9-21)
      * Add Probability

    * v1.3 (2023-8-6)
      * Call the horde if witch killed the survivor.
      * Update Translation

	* 1.2 (2023-5-28)
		* Require Optional extension: Actions

	* 1.1 (2023-5-28)
		* Use ```z_spawn mob auto``` instead of L4D_ForcePanicEvent()

	* 1.0 (2023-4-11)
		* Initial Release
</details>

- - - -
# 中文說明
驚嚇或殺死Witch會引發屍潮 + Witch殺死人類也會引發屍潮

* 原理
	* 人類驚醒Witch，引發屍潮
	* 人類殺死Witch，引發屍潮
	* Witch殺死人類，引發屍潮

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d_witch_cry.cfg
		```php
		// 0=插件啟動, 1=插件關閉.
		l4d_witch_cry_enable "1"

		// 訊息顯示的位置. (0: 關閉, 1: 聊天窗, 2: 螢幕下方黑底白字窗, 3: 螢幕正中間)
		l4d_witch_cry_announce_type "1"

		// 為1時，Witch被驚醒時呼叫屍潮
		l4d_witch_cry_alart_enable "1"

		// Witch被驚醒時呼叫屍潮的機率 [1~100]%
		l4d_witch_cry_alart_chance "100"

		// 驚醒Witch 3秒後如果Witch還活著則呼叫屍潮. (0=不等秒數直接呼叫屍潮)
		l4d_witch_cry_alart_horde_time "3.0"

		// Witch被驚醒時呼叫的屍潮數量
		l4d_witch_cry_alart_horde_mob "1"

		// 為1時，Witch被殺死時呼叫屍潮
		l4d_witch_cry_death_enable "1"

		// Witch被殺死時呼叫屍潮的機率 [1~100]%
		l4d_witch_cry_death_chance "100"

		// Witch被殺死 2秒後呼叫屍潮. (0=不等秒數直接呼叫屍潮)
		l4d_witch_cry_death_horde_time "2.0"

		// Witch被殺死時呼叫的屍潮數量
		l4d_witch_cry_death_horde_mob "1"

		// 為1時，Witch殺死倖存者時呼叫屍潮
		l4d_witch_cry_kill_enable "1"

		// Witch殺死倖存者時呼叫屍潮的機率 [1~100]%
		l4d_witch_cry_kill_chance "50"

		// Witch殺死倖存者 2秒後呼叫屍潮. (0=不等秒數直接呼叫屍潮)
		l4d_witch_cry_kill_time "2.0"

		// Witch殺死倖存者時呼叫的屍潮數量
		l4d_witch_cry_kill_mob "1"
		```
</details>