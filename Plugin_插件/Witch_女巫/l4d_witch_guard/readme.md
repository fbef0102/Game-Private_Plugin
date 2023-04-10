# Description | 內容
Witch killer takes the witch on his back and uses it as a guard

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/_hxVZ_hFXm4)

* Image | 圖示
	* Kill a Witch and put her on your back
        > 殺死Witch獲得神奇寶貝: Witch守衛者
        <br/>![l4d_witch_guard_1](image/l4d_witch_guard_1.gif)
	* Put down a witch as guard
        > 放下Witch守衛者
        <br/>![l4d_witch_guard_2](image/l4d_witch_guard_2.gif)


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

	```php
	//panxiaohai @ 2011-2012
	//Dragokas @ 2019
	//Marttt @ 2020
	//HarryPotter @ 2022-2023
	```
	* 1.0h (2023-4-11)
		* Remove some cvars
		* Play animation and progress bar while putting down the with
		* More hints
		* Add Witch Guard color

	* v.1.4.9.8
		* [Marttt's fork](https://forums.alliedmods.net/showpost.php?p=2648766&postcount=22)

	* v1.3
		* [Dragokas's fork](https://forums.alliedmods.net/showpost.php?p=2648766&postcount=22)

	* v1.1
		* [Original Plugin by panxiaohai](https://forums.alliedmods.net/showthread.php?t=166138)
</details>

* Require | 必要安裝
	1. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)
	2. [ThirdPersonShoulder_Detect](https://forums.alliedmods.net/showthread.php?t=298649)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_witch_guard.cfg
		```php
		// The arc that the witch guard will search for targets.
		l4d_witch_guard_arc "360"

		// 0: random pose, 1: best pose, 2: specific pose (uses pose_onback cvars)
		l4d_witch_guard_bestpose_onback "0"

		// 0: random pose, 1: best pose, 2: specific pose (uses pose_down cvars)
		l4d_witch_guard_bestpose_ondown "1"

		// Allow bots to get Witch Guard. 0 = Disable, 1 = Enable.
		l4d_witch_guard_bots "0"

		// % chance to get a Witch Guard when a witch is killed.
		l4d_witch_guard_chance "25.0"

		// Witch Guard glow color, Three values between 0-255 separated by spaces. RGB Color255 - Red Green Blue.
		l4d_witch_guard_color "0 0 180"

		// attack dmage, 1.0: normal [0.1, 1.0]
		l4d_witch_guard_damage "0.5"

		// The Witch Guard will have a glow outline flashing.
		l4d_witch_guard_glowflashing "1"

		// The maximum range that a client can be away from the Witch Guard until the glow stops to outline.
		l4d_witch_guard_glowmaxrange "800"

		// The minimum range that a client can be away from the Witch Guard until the glow starts to outline.
		l4d_witch_guard_glowminrange "0"

		// The Witch Guard glow outline type. (0 = None, 1 = On Use, 2 = On Look At, 3 = Constant.
		l4d_witch_guard_glowtype "3"

		// gun count [0, 6]
		l4d_witch_guard_gun_count "3"

		// Lose witch when player dies. 0 = Disable, 1 = Enable.
		l4d_witch_guard_lose_in_death "1"

		// Criteria based on to give the Witch Guard. 0 = Last Hit, 1 = Most Damage.
		l4d_witch_guard_mode "1"

		// After put down witch, clear witch guard in seconds
		l4d_witch_guard_ondown_kill "60.0"

		// 0: off, 1-82: default witch pose while down. (l4d_witch_guard_bestpose_onback must be: 2)
		l4d_witch_guard_pose_down "3"

		// 0: off, 1-82: default witch pose while on back. (l4d_witch_guard_bestpose_onback must be: 2)
		l4d_witch_guard_pose_onback "77"

		// attack range
		l4d_witch_guard_range "500.0"

		// Enables carrying the Witch Guard across maps when reaches alive to the saferoom with it on back on coop. 0 = Disable, 1 = Enable
		l4d_witch_guard_saferoom "1"

		// Enables the Witch Guard hits and kills count as the owner.
		l4d_witch_guard_scoredamage "0"

		// 0: do not shot on back, 1: shot
		l4d_witch_guard_shotonback "0"

		// Shows a progress bar while putting the Witch Guard down (L4D2 only). 0 = Disable, 1 = Enable.
		l4d_witch_guard_showbar "1"

		// Show/Hide the sprite indicating which Witch in the ground is from the owner. 0 = Hide, 1 = Show.
		l4d_witch_guard_spriteowner "1"

		// How long does it take to put down witch guard.
		l4d_witch_guard_time "4"

		// Weapon type given to the witch. 0 = Random, 1 = Assault Rifle, 2 = Hunting Rifle, 3 = Auto Shotgun.
		l4d_witch_guard_weapon_type "0"
		```
</details>

* <details><summary>Command | 命令</summary>

	* **Toggle to see or hide your own witch.**
		```php
		sm_witchview
		```

	* **Change the owned Witch Guards pose randomly**
		```php
		sm_witchposer
		```

	* **<number> is (L4D2) 0~82 / (L4D1) 0~71, Change the owned Witch Guards pose**
		```php
		sm_witchpose2 <number>
		```
</details>

- - - -
# 中文說明
殺死Witch之後可以把她背在後面，把Witch放置下來之後她會幫忙打殭屍和特感

* 原理
	* 殺死Witch之後，有機率獲得Witch防衛者，自動放在背後
	* 按下Ctrl+E鍵四秒鐘可以放下Witch防衛者，她會自動對普通感染者或者特感開槍

* 功能
	* 可設置Witch防衛者光圈顏色、發光範圍、閃爍效果
	* 可設置Witch防衛者的槍枝數量、射擊範圍、射擊角度、存活時間
	* 可設置獲得Witch防衛者的機率
	* 可設置放置時間
	* 可設置Witch防衛者放於背後的姿勢或者放下來之後的姿勢