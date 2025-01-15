# Description | 內容
Allows jump force on air.

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Image | 圖示
	<br/>![smd_air_jump_force_1](image/smd_air_jump_force_1.gif)
	<br/>![smd_air_jump_force_2](image/smd_air_jump_force_2.gif)

* Apply to | 適用於
	```
	Any source game
	```

* <details><summary>How does it work?</summary>

	* Player can jump more further and higher on air
	* Can set jump boost and forcem see cvars below
</details>

* Require | 必要安裝
	1. L4D1/2: [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/smd_set_player_name_cmd.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		smd_air_jump_force_enable "1"

		// Air Rejump velocity force multiply
		smd_air_jump_force_multi "5.0"

		// Air Rejump vertical boost
		smd_air_jump_force_boost "450.0"

		// If 1, player needs to press jump key first before second jump on air.
		smd_air_jump_force_first "1"

		// The maximum number of re-jumps allowed while already jumping. (-1=No limit)
		smd_air_jump_force_max "-1"

		// Players with these flags have access to use air rejump boost. (Empty = Everyone, -1: Nobody)
		smd_air_jump_force_access_flag ""
		```
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.0 (2025-1-15)
		* Initial Release
</details>

- - - -
# 中文說明
玩家可以在空中跳得更高更遠

* 原理
	* 玩家在空中按下空白鍵，可以跳得更高更遠

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/smd_set_player_name_cmd.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		smd_air_jump_force_enable "1"

		// 空中跳躍的力道 (數值越大->跳得越遠)
		smd_air_jump_force_multi "5.0"

		// 空中跳躍的力道 (數值越大->跳得越高)
		smd_air_jump_force_boost "450.0"

		// 1=玩家必須是自己跳躍到空中才能二段跳，如果是從屋頂邊緣自由滑落則無法使用二段跳
		// 0=只要玩家在空中都可以使用二段跳
		smd_air_jump_force_first "1"

		// 空中連跳的次數限制 (-1=無限制)
		smd_air_jump_force_max "3"

		// 擁有這些權限的玩家，才可以使用空中二段跳 (留白 = 任何人都能, -1: 無人)
		smd_air_jump_force_access_flag ""
		```
</details>