# Description | 內容
Call the horde if player woke up or killed the witch

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/ga-WG2FoEPs)

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
	```

* <details><summary>Changelog | 版本日誌</summary>

	* 1.1 (2023-5-28)
		* Use ```z_spawn mob auto``` instead of L4D_ForcePanicEvent()

	* 1.0 (2023-4-11)
		* Initial Release
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
    2. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_witch_cry.cfg
		```php
		// If 1, Call the horde if player woke up the witch.
		l4d_witch_cry_alart_enable "1"

		// How many hordes to call if player woke up the witch
		l4d_witch_cry_alart_horde_mob "1"

		// Time delay to call the horde after player woke up the witch and witch is still alive. (0=Instantly call horde)
		l4d_witch_cry_alart_horde_time "3.0"

		// Changes how message displays. (0: Disable, 1:In chat, 2: In Hint Box, 3: In center text)
		l4d_witch_cry_announce_type "1"

		// If 1, Call the horde if player killed the witch.
		l4d_witch_cry_death_enable "1"

		// How many hordes to call if player killed the witch
		l4d_witch_cry_death_horde_mob "1"

		// Time delay to call the horde after player killed the witch. (0=Instantly call horde)
		l4d_witch_cry_death_horde_time "2.0"

		// 0=Plugin off, 1=Plugin on.
		l4d_witch_cry_enable "1"
		```
</details>

* <details><summary>Command | 命令</summary>

	None
</details>

- - - -
# 中文說明
驚嚇或殺死Witch會引發屍潮來臨

* 原理
	* 驚訝Witch數秒之後，如果Witch還活著會引發屍潮
	* 殺死Witch數秒之後，會引發屍潮

* 功能
	* 可設置驚訝Witch不引發屍潮
	* 可設置殺死Witch不引發屍潮
	* 可設置引發屍潮的秒數
	* 可設置屍潮的數量