# Description | 內容
Witch killer takes the witch on his back and uses it as a guard

> __Note__ <br/>
This plugin is private, Please contact [me](/#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](/#私人插件列表-private-plugins-list)

* Apply to | 適用於
	```
	L4D1
	L4D2
	```

* [Video | 影片展示](https://youtu.be/_hxVZ_hFXm4)

* Image | 圖示
	<br/>![l4d_witch_guard_1](image/l4d_witch_guard_1.gif)
	<br/>![l4d_witch_guard_2](image/l4d_witch_guard_2.gif)
	<br/>![l4d_witch_guard_3](image/l4d_witch_guard_3.gif)

* <details><summary>How does it work?</summary>

	* After kill the Witch, have change to put her on your back.
	* Hold Ctrl+E for 4 seconds to put down the witch guard
	* What can witch guard do?
		* Kill special infected near around
		* Kill common infected near around
		* Kill Tank/Witch near around
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	2. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)
	3. [ThirdPersonShoulder_Detect](https://forums.alliedmods.net/showthread.php?t=298649)

* <details><summary>ConVar</summary>

	* cfg/sourcemod/l4d_witch_guard.cfg
		```php
		// 0: random pose, 1: best pose, 2: specific pose (uses pose_onback cvars)
		l4d_witch_guard_bestpose_onback "0"

		// 0: random pose, 1: best pose, 2: specific pose (uses pose_down cvars)
		l4d_witch_guard_bestpose_ondown "1"

		// 1-82: default witch pose while on back. (l4d_witch_guard_bestpose_onback must be: 2)
		l4d_witch_guard_pose_onback "77"

		// 1-82: default witch pose while down. (l4d_witch_guard_bestpose_ondown must be: 2)
		l4d_witch_guard_pose_down "3"

		// Witch Guard attack damage modify, 1.0: normal [0.1 ~ 1.0]
		l4d_witch_guard_damage "0.5"

		// Witch Guard attack range
		l4d_witch_guard_range "500.0"

		// The Witch Guard gun count [1, 3]
		l4d_witch_guard_gun_count "3"

		// 0: do not shot on back, 1: shot
		l4d_witch_guard_shotonback "0"

		// Show/Hide the sprite indicating which Witch in the ground is from the owner. 0 = Hide, 1 = Show.
		l4d_witch_guard_spriteowner "1"

		// Lose witch when player dies. 0 = Disable, 1 = Enable.
		l4d_witch_guard_lose_in_death "1"

		// Allow bots to get Witch Guard. 0 = Disable, 1 = Enable.
		l4d_witch_guard_bots "0"

		// Weapon type given to the witch. 0 = Random, 1 = Assault Rifle, 2 = Hunting Rifle, 3 = Auto Shotgun.
		l4d_witch_guard_weapon_type "0"

		// Witch Guard glow color, Three values between 0-255 separated by spaces. RGB Color255 - Red Green Blue.
		l4d_witch_guard_color "0 0 180"

		// The Witch Guard glow outline type. (0 = None, 1 = On Use, 2 = On Look At, 3 = Constant.
		l4d_witch_guard_glowtype "3"

		// The Witch Guard will have a glow outline flashing.
		l4d_witch_guard_glowflashing "1"

		// The maximum range that a client can be away from the Witch Guard until the glow stops to outline.
		l4d_witch_guard_glowmaxrange "800"

		// Shows a progress bar while putting the Witch Guard down (L4D2 only). 0 = Disable, 1 = Enable.
		l4d_witch_guard_showbar "1"

		// Criteria based on to give the Witch Guard. 0 = Last Hit, 1 = Most Damage.
		l4d_witch_guard_mode "0"

		// Enables the Witch Guard hits and kills count as the owner.
		l4d_witch_guard_scoredamage "0"

		// % chance to get a Witch Guard when a witch is killed.
		l4d_witch_guard_chance "25.0"

		// Enables carrying the Witch Guard across maps when reaches alive to the saferoom with it on back on coop. 0 = Disable, 1 = Enable
		l4d_witch_guard_saferoom "1"

		// After put down witch, clear witch guard in seconds
		l4d_witch_guard_ondown_kill "60.0"

		// How long does it take to put down witch guard.
		l4d_witch_guard_time "4"

		// If 1, Display gun model on Witch Guard's hand and head
		l4d_witch_guard_display_gun "0"
		```
</details>

* <details><summary>Command</summary>

	* **Toggle to see or hide your own witch.**
		```php
		sm_witchview
		```
</details>

* Translation Support | 支援翻譯
	```
	translations/l4d_witch_guard.phrases.txt
	```

* <details><summary>Changelog | 版本日誌</summary>

	```php
	//panxiaohai @ 2011-2012
	//Dragokas @ 2019
	//Marttt @ 2020
	//HarryPotter @ 2022-2023
	```
	* v1.3h (2024-9-30)
		* Fixed client can't switch weapons if die while putting down the witch guard
		
	* v1.2h (2023-7-31)
		* Safely remove witch guard entity
		* Add gun model and attach to witch guard's head and hand
		* Remove some useless cvars and cmds

	* v1.1h (2023-7-31)
		* Carrying the with guard across maps in coop/realism

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

- - - -
# 中文說明
擊殺Witch之後可以把她背在後面，把Witch放置下來之後她會幫忙打殭屍和特感

* 原理
	* 擊殺Witch之後，有機率獲得Witch防衛者，自動放在背後
	* 按下Ctrl+E鍵四秒鐘可以放下Witch防衛者
	* Witch防衛者的作用
		* 自動對附近的普通感染者開槍
		* 自動對附近的特感開槍

* <details><summary>指令中文介紹 (點我展開)</summary>

		```php
		// Witch防衛者放在背後的姿勢  0: 隨機一種姿勢, 1: 最佳姿勢, 2: 指定的姿勢 (使用指令 l4d_witch_guard_pose_onback)
		l4d_witch_guard_bestpose_onback "0"

		// Witch防衛者放在地上的姿勢  0: 隨機一種姿勢, 1: 最佳姿勢, 2: 指定的姿勢 (使用指令 l4d_witch_guard_pose_down)
		l4d_witch_guard_bestpose_ondown "1"

		// 1-82: 指定Witch防衛者放在背後的姿勢 (l4d_witch_guard_bestpose_onback must be: 2)
		l4d_witch_guard_pose_onback "77"

		// 1-82: 指定Witch防衛者放在地上的姿勢 (l4d_witch_guard_bestpose_ondown must be: 2)
		l4d_witch_guard_pose_down "3"

		// Witch防衛者的攻擊傷害調整 [0.1 ~ 1.0]
		// 0.5: 傷害減半，1.0: 正常傷害
		l4d_witch_guard_damage "0.5"

		// Witch防衛者的攻擊範圍
		l4d_witch_guard_range "500.0"

		// Witch防衛者身上擁有的槍枝數量 [1 ~ 3]
		l4d_witch_guard_gun_count "3"

		// 為1時，Witch防衛者背在身上也會自動攻擊
		l4d_witch_guard_shotonback "0"

		//為1時，玩家放在地上的Witch防衛者頭上顯示三角符號
		l4d_witch_guard_spriteowner "1"

		// 為1時，玩家死亡，背上的Witch防衛者會消失
		l4d_witch_guard_lose_in_death "1"

		// 為1時，AI Bots擊殺Witch也能獲得Witch防衛者
		l4d_witch_guard_bots "0"

		// Witch防衛者可以使用哪種槍枝? 0 = 隨機, 1 = 步槍, 2 = 獵槍, 3 = 自動連發散彈槍.
		l4d_witch_guard_weapon_type "0"

		// Witch防衛者的光圈顏色，填入RGB三色 (三個數值介於0~255，需要空格)
		l4d_witch_guard_color "0 0 180"

		// Witch防衛者的光圈型態. 0 = 關閉光圈, 1 = 使用時才發光 (沒捨用), 2 = 看到時才發光 (沒捨用), 3 = 隔牆發光 (建議使用此值)
		l4d_witch_guard_glowtype "3"

		// 為1時，Witch防衛者的光圈會閃爍
		l4d_witch_guard_glowflashing "1"

		// Witch防衛者的光圈範圍
		l4d_witch_guard_glowmaxrange "800"

		// Witch防衛者的光圈範圍
		l4d_witch_guard_glowminrange "0"

		// (只限L4D2) 為1時，放下Witch防衛者時顯示進展過程
		l4d_witch_guard_showbar "1"

		// Witch被擊殺之後，誰能獲得Witch防衛者 0 = 最後一槍的兇手, 1 = 造成最多傷害的人.
		l4d_witch_guard_mode "0"

		// 為1時，Witch防衛者擊殺的特感與殭屍都算在擁有者的統計上
		l4d_witch_guard_scoredamage "0"

		// Witch被擊殺之後，獲得Witch防衛者的機率
		l4d_witch_guard_chance "25.0"

		// 為1時，可以攜帶Witch防衛者過關到下一關卡 (只限戰役/寫實)
		l4d_witch_guard_saferoom "1"

		// 玩家放在地上的Witch防衛者，60秒之後消失
		l4d_witch_guard_ondown_kill "60.0"

		// 玩家放下Witch防衛者所需的時間
		l4d_witch_guard_time "4"

		// 為1時，在Witch防衛者身上顯示擁有的槍枝模型
		l4d_witch_guard_display_gun "1"
		```
</details>

* <details><summary>命令中文介紹 (點我展開)</summary>

	* **顯示/隱藏 你背上的Witch防衛者**
		```php
		sm_witchview
		```
</details>