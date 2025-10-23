# Description | 內容
Ghost Infected can fly or leap very high.

> __Note__ <br/>
This plugin is private, Please contact [me](/#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](/#私人插件列表-private-plugins-list)

* Apply to | 適用於
	```
	L4D1
	L4D2
	```

* [Video | 影片展示](https://youtube.com/shorts/mpXcMlBeaPM)

* Image | 圖示
	<br/>![l4d_ghost_fly_1](image/l4d_ghost_fly_1.gif)
	<br/>![l4d_ghost_fly_2](image/l4d_ghost_fly_2.gif)
	<br/>![l4d_ghost_fly_3](image/l4d_ghost_fly_3.gif)

* <details><summary>How does it work?</summary>

	* As a infected ghost you can 
		* hold RELOAD button to fly
		* or press RELOAD button to leap
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
    2. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_ghost_fly.cfg
		```php
		// 0=Plugin off, 1=Plugin on. Turn the ability for ghosts to fly or leap very high
		l4d_ghost_fly_enable "1"

		// How message displays. (0: Disable, 1:In chat, 2: In Hint Box, 3: In center text)
		l4d_ghost_fly_announce_type "2"

		// Ghost flying speed.
		l4d_ghost_fly_speed "50"

		// Ghost flying max speed.
		l4d_ghost_fly_max_speed "500"

		// If, player can not spawn while flying.
		l4d_ghost_fly_spawn_block "1"

		// Press which button to fly or pounce, 131072=Shift, 4=Ctrl, 32=Use, 8192=Reload, 524288=Middle Mouse
		// You can add numbers together, ex: 655360=Shift + Middle Mouse
		l4d_ghost_fly_buttons "8192"

		// 0=Fly, 1=Leap
		l4d_ghost_fly_type "0"

		// Multiplication speed when leap on x
		l4d_ghost_fly_leap_mult_x "3.0"

		// Multiplication speed when leap on z
		l4d_ghost_fly_leap_mult_z "3.0"

		// set how high is leap
		l4d_ghost_fly_leap_vector_y "900.0"

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

	* v1.1h (2025-10-23)
		* Add pounce leap
		* Unable to spawn when flying or jump on air
		* Update cvars, translation

	* v1.0h (2023-12-18)
		* Remake code, convert code to latest syntax
		* Fix warnings when compiling on SourceMod 1.11.
		* Optimize code and improve performance
		* Use left4dhooks
		* Translation Support

	* v1.1.1
		* [Ghost Fly By madcap](https://forums.alliedmods.net/showthread.php?t=100480)
		* [Ghost Leap by AtomicStryker](https://forums.alliedmods.net/showthread.php?t=99519)
</details>

- - - -
# 中文說明
靈魂特感可以自由飛行或跳得很高

* 原理
	* 特感玩家在靈魂狀態下可以
		* 按住 R 鍵飛行
		* 或按 R 鍵跳得很高

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d_ghost_fly.cfg
		```php
		// 0=關閉插件, 1=啟動插件，靈魂狀態下可以按住 R 鍵飛行.
		l4d_ghost_fly_enable "1"

		// 提示該如何顯示. (0: 不提示, 1: 聊天框, 2: 黑底白字框, 3: 螢幕正中間)
		l4d_ghost_fly_announce_type "2"

		// 飛行速度
		l4d_ghost_fly_speed "50"

		// 飛行最高速度
		l4d_ghost_fly_max_speed "500"

		// 為1時，飛行途中不能復活
		l4d_ghost_fly_spawn_block "1"

		// 使用哪個按鍵飛行或跳躍? 131072=Shift鍵, 4=蹲下鍵, 32=E鍵, 8192=R鍵, 524288=滾輪鍵
		// 可以數字相加, 譬如: 655360=必須同時按 "Shift鍵+滾輪鍵"
		l4d_ghost_fly_buttons "8192"

		// 0=飛行, 1=跳躍很高
		l4d_ghost_fly_type "0"

		// 跳躍的向前力道加乘
		l4d_ghost_fly_leap_mult_x "3.0"

		// 跳躍的垂直力道加乘
		l4d_ghost_fly_leap_mult_z "3.0"

		// 設置跳躍的力道
		l4d_ghost_fly_leap_vector_y "900.0"

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
