# Description | 內容
Fly as a ghost.

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Apply to | 適用於
	```
	L4D1
	L4D2
	```

* [Video | 影片展示](https://youtube.com/shorts/mpXcMlBeaPM)

* Image | 圖示
	<br/>![l4d_ghost_fly_1](image/l4d_ghost_fly_1.gif)
	<br/>![l4d_ghost_fly_2](image/l4d_ghost_fly_2.gif)

* <details><summary>How does it work?</summary>

	* As a ghost you can fly by holding RELOAD button.
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
    2. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_ghost_fly.cfg
		```php
		// 0=Plugin off, 1=Plugin on. Turn the ability for ghosts to fly
		l4d_ghost_fly_enable "1"

		// If, player can not spawn while flying.
		l4d_ghost_fly_spawn_block "1"

		// How message displays. (0: Disable, 1:In chat, 2: In Hint Box, 3: In center text)
		l4d_ghost_fly_announce_type "2"

		// Ghost flying speed.
		l4d_ghost_fly_speed "50"

		// Ghost flying max speed.
		l4d_ghost_fly_max_speed "500"

		// If 1, Ghost Smoker can fly.
		l4d_ghost_fly_smoker_enable "1"

		// If 1, Ghost Boomer can fly.
		l4d_ghost_fly_boomer_enable "1"

		// If 1, Ghost Hunter can fly.
		l4d_ghost_fly_hunter_enable "1"

		// If 1, Ghost Spitter can fly.
		l4d_ghost_fly_spitter_enable "1"

		// If 1, Ghost Jockey can fly.
		l4d_ghost_fly_jockey_enable "1"

		// If 1, Ghost Charger can fly.
		l4d_ghost_fly_charger_enable "1"
		```
</details>
	
* Translation Support | 支援翻譯
	```
	translations/l4d_ghost_fly.phrases.txt
	```

* <details><summary>Changelog | 版本日誌</summary>

	* v1.0h (2023-12-18)
		* Remake code, convert code to latest syntax
		* Fix warnings when compiling on SourceMod 1.11.
		* Optimize code and improve performance
		* Use left4dhooks
		* Translation Support

	* v1.1.1
		* [Original Plugin By madcap](https://forums.alliedmods.net/showthread.php?t=100480)
</details>

- - - -
# 中文說明
靈魂特感可以自由飛行

* 原理
	* 特感玩家在靈魂狀態下可以按住 R 鍵飛行.

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d_ghost_fly.cfg
		```php
		// 0=關閉插件, 1=啟動插件，靈魂狀態下可以按住 R 鍵飛行.
		l4d_ghost_fly_enable "1"

		// 為1時，飛行途中不能復活
		l4d_ghost_fly_spawn_block "1"

		// 提示該如何顯示. (0: 不提示, 1: 聊天框, 2: 黑底白字框, 3: 螢幕正中間)
		l4d_ghost_fly_announce_type "2"

		// 飛行速度
		l4d_ghost_fly_speed "50"

		// 飛行最高速度
		l4d_ghost_fly_max_speed "500"

		// 為1時，靈魂Smoker可以飛行
		l4d_ghost_fly_smoker_enable "1"

		// 為1時，靈魂Boomer可以飛行
		l4d_ghost_fly_boomer_enable "1"

		// 為1時，靈魂Hunter可以飛行
		l4d_ghost_fly_hunter_enable "1"

		// 為1時，靈魂Spitter可以飛行
		l4d_ghost_fly_spitter_enable "1"

		// 為1時，靈魂Jockey可以飛行
		l4d_ghost_fly_jockey_enable "1"

		// 為1時，靈魂Charger可以飛行
		l4d_ghost_fly_charger_enable "1"
		```
</details>
