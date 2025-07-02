# Description | 內容
Get slowdown while burning the tank

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Apply to | 適用於
	```
	L4D1
	L4D2
	```

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_burn_tank_penalty.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d_burn_tank_penalty_enable "1"

		// Changes how message displays. (0: Disable, 1:In chat, 2: In Hint Box, 3: In center text)
		l4d_burn_tank_penalty_announce_type "1"

		// Change Player Speed if he burns tank.
		l4d_burn_tank_penalty_speed_value "120"

		// Time in seconds to change player speed.
		l4d_burn_tank_penalty_speed_time "10.0"
		```
</details>

* Translation Support | 支援翻譯
	```
	translations/l4d_burn_tank_penalty.phrases.txt
	```

* <details><summary>Changelog | 版本日誌</summary>

	* v1.0
		* Initial Release
</details>

- - - -
# 中文說明
燃燒Tank的玩家會被減速慢行

* 原理
	* Tank被玩家燃燒時，該玩家速度會變慢

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d_burn_tank_penalty.cfg
		```php
        // 0=關閉插件, 1=啟動插件
		l4d_burn_tank_penalty_enable "1"

		// 提示該如何顯示. (0: 不提示, 1: 聊天框, 2: 黑底白字框, 3: 螢幕正中間)
		l4d_burn_tank_penalty_announce_type "1"

		// Tank被玩家燃燒時，該玩家速度會變慢
		l4d_burn_tank_penalty_speed_value "120"

		// 玩家速度會變慢的時間
		l4d_burn_tank_penalty_speed_time "10.0"
		```
</details>
