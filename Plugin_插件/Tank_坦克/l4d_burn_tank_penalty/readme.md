# Description | 內容
Get slowdown while burning the tank

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Video | 影片展示
<br/>None

* Image | 圖示
	<br/>None

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_burn_tank_penalty.cfg
		```php
		// Changes how message displays. (0: Disable, 1:In chat, 2: In Hint Box, 3: In center text)
		l4d_burn_tank_penalty_announce_type "1"

		// 0=Plugin off, 1=Plugin on.
		l4d_burn_tank_penalty_enable "1"

		// Time in seconds to change player speed.
		l4d_burn_tank_penalty_speed_time "10.0"

		// Change Player Speed if he burns tank.
		l4d_burn_tank_penalty_speed_value "120"
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

	* v1.0
		* Initial Release
</details>

- - - -
# 中文說明
燃燒Tank的玩家會被減速慢行

* 原理
	* Tank被玩家燃燒時，該玩家速度會變慢

* 功能
	* 可設置減緩的速度數值
	* 可設置減速的時間
