# Description | 內容
Control Dead/Spectator/Alive player's ability to spray and cool down based on config file.

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Video | 影片展示
<br/>None

* Image | 圖示
	<br/>![spray_control_cooldown_1](image/spray_control_cooldown_1.gif)

* <details><summary>How does it work?</summary>

	* Admin can have ability to spray without cool down limit
	* Dead player or spectator have ability to spray on wall
	* You can customize each player in [configs/spray_control_cooldown.cfg](configs/spray_control_cooldown.cfg)
		* Set admin, vip and normal players
		* Allow spray if dead, alive, or spectator
		* Set spray cool down
</details>

* Require | 必要安裝
	1. [simple_chatprocessor](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/simple_chatprocessor)
	2. [smlib](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/smlib-Colors)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/spray_control_cooldown.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		spray_control_cooldown_enable "1"
		```
</details>

* <details><summary>Command | 命令</summary>

	None
</details>

* Apply to | 適用於
	```
	L4D1
	L4D2
	Any source game
	```

* <details><summary>Changelog | 版本日誌</summary>

	* v1.0h (2024-12-10)
		* Remake code, convert code to latest syntax
		* Update cvars
		* Add config file to control each player's spray ability
		* Spectator can now spray

	* v1.1
		* [Original Plugin By ReFlexPoison](https://forums.alliedmods.net/showthread.php?t=221768)
</details>

- - - -
# 中文說明
根據管理員或玩家身分，禁止或允許噴漆 + 死亡玩家或旁觀者也能噴漆

* 原理
	* 管理員可以在牆壁上噴漆無冷卻時間限制
	* 死亡後或成為旁觀者可以噴漆
	* 自行在文件裡修改: [configs/spray_control_cooldown.cfg](configs/spray_control_cooldown.cfg)
		* 可以自行根據玩家身分做調整
		* 設置噴漆的冷卻時間與噴漆距離

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/spray_control_cooldown.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		spray_control_cooldown_enable "1"
		```
</details>