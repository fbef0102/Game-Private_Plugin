# Description | 內容
Report Medkit Status when someone used Medkits

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Video | 影片展示
<br/>None

* Image
	* Display message
	<br/>![l4d_medkit_status_1](image/l4d_medkit_status_1.jpg)

* Apply to | 適用於
	```
	L4D1 
	L4D2
	```

* <details><summary>Changelog | 版本日誌</summary>

	* v1.0 (2022-12-21)
		* Request by GGM
		* Initial Release
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	2. [[INC] Multi Colors](https://forums.alliedmods.net/showthread.php?t=247770)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_saferom_prevent_kit.cfg
		```php
		// Changes how message displays. (0: Disable, 1:In chat, 2: In Hint Box, 3: In center text)
		l4d_medkit_status_announce_type "1"

		// Display message to Which player. (1=Person doing the healing, 2=Person being healed, 3=Both)
		l4d_medkit_status_display_player "3"

		// 0=Plugin off, 1=Plugin on.
		l4d_medkit_status_enable "1"

		// If 1, enable this plugin once survivors leaving saferoom or survival begins (0=Always Enable)
		l4d_medkit_status_game_start_enable "0"
		```
</details>

* <details><summary>Command | 命令</summary>
	
	None
</details>

- - - -
# 中文說明
當有人使用治療包時回報治療包使用數量與狀態

* 原理
	* 顯示目前為止使用的治療包數量以及距離上一次使用治療包的時間

* 功能
	* 可設置遊戲開始後才顯示訊息
		* 離開安全室或生存模式計時開始
	* 可設置哪位玩家能看到訊息