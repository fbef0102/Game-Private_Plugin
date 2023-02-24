# Description | 內容
Adds a host of abilities to the Spitter to add Supergirl like powers.

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/wOXLIEBrIS0)

* Image | 圖示
	* The Supergirl
		> 超能小妹妹
		<br/>![L4D2_Spitter_Supergirl_0](image/L4D2_Spitter_Supergirl_0.jpg)
	* Supergirl Gob ability: The Spitter is invulnerable for a brief period while using their ability
		> 能力: 無敵小妹 - 吐酸液的時候不受到任何傷害
		<br/>![L4D2_Spitter_Supergirl_1](image/L4D2_Spitter_Supergirl_1.gif)
	* Acidic Bile ability: Survivors that have wandered into an acid pool have a chance of being splashed with bile and attracting common infected.
		> 能力: 混合酸液 - 酸液裡含有膽汁，站上去有機會被噴中
		<br/>![L4D2_Spitter_Supergirl_2](image/L4D2_Spitter_Supergirl_2.gif)
	* Acidic Pool ability: Due to the unstable nature of the Spitter's body, periodically a pool of Spit will leak out beneath her feet.
		> 能力: 酸性點滴 - 每過一段時間Spitter身上掉落一攤酸液
		<br/>![L4D2_Spitter_Supergirl_3](image/L4D2_Spitter_Supergirl_3.gif)

* Apply to | 適用於
	```
	L4D2
	```

* <details><summary>Changelog | 版本日誌</summary>

	```php
	//Mortiegama @ 2010-2017
	//HarryPotter @ 2023
	```
	* v1.0h (2023-2-23)
		* Request by Shadow
		* Remake code, convert code to latest syntax
		* Fix warnings when compiling on SourceMod 1.11.
		* Optimize code and improve performance
		* Rename all cvars
		* Delete "Acidic Slobber ability", "Acidic Splash".

	* v1.5
		* [Original Plugin by Mortiegama](https://forums.alliedmods.net/showthread.php?t=122802)
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	2. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)

* Related Plugin | 相關插件
	1. [Spitter Extra Projectiles by Marttt](https://forums.alliedmods.net/showthread.php?p=2739386): Allow spitters to spit more than a single projectile at once
		> Spitter可以一次吐多個酸液

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/L4D2_Spitter_Supergirl.cfg
		```php
		// Chance that the Survivor will be biled upon when standing in spit. (100 = 100%).
		L4D2_Spitter_Supergirl_acidicbile_chance "1"

		// If 1, Enables Acidic Bile ability: Survivors that have wandered into an acid pool have a chance of being splashed with bile and attracting common infected.
		L4D2_Spitter_Supergirl_acidicbile_enable "1"

		// Period of time between Acid Pool drops.
		L4D2_Spitter_Supergirl_acidicpool_cooldown "30.0"

		// If 1, Enables Acidic Pool ability: Due to the unstable nature of the Spitter's body, periodically a pool of Spit will leak out beneath her feet.
		L4D2_Spitter_Supergirl_acidicpool_enable "1"

		// Chance that when a Spitter claws a Survivor they will take damage over time. (100 = 100%).
		L4D2_Spitter_Supergirl_acidswipe_chance "100"

		// How much damage is inflicted by Acid Swipe each second.
		L4D2_Spitter_Supergirl_acidswipe_damage "1.0"

		// For how many seconds does the Acid Swipe last.
		L4D2_Spitter_Supergirl_acidswipe_duration "8"

		// If 1, Enables Acid Swipe ability: The Spitter uses her acid coated fingers to swipe at a Survivor, causing damage over time as the wound burns.
		L4D2_Spitter_Supergirl_acidswipe_enable "1"

		// Changes how message displays. (0: Disable, 1:In chat, 2: In Hint Box, 3: In center text)
		L4D2_Spitter_Supergirl_announce_type "2"

		// How long the Spitter is invulnerable.
		L4D2_Spitter_Supergirl_god_duration "3.0"

		// If 1, Enables Super Girl Protect ability: When the Spitter is prepared to launch a spit, the Spitter is invulnerable. (God Mode)
		L4D2_Spitter_Supergirl_god_enable "1"

		// Recharge time before the Hydra Strike allows second spit.
		L4D2_Spitter_Supergirl_hydrastrike_cooldown "3.0"

		// If 1, Enables Hydra Strike ability: Allows to fire off a second spit rapidly after the Spitter uses ability.
		L4D2_Spitter_Supergirl_hydrastrike_enable "1"

		// How long the Spitter increases movement speed.
		L4D2_Spitter_Supergirl_speed_duration "3.0"

		// If 1, Enables Super Girl Speed ability: The Spitters feet increasing movement speed for a brief period while using their ability.
		L4D2_Spitter_Supergirl_speed_enable "1"

		// How fast can Spitters move while using their ability.
		L4D2_Spitter_Supergirl_speed_set "250"

		// Maximum run speed for survivors who actives adrenaline eat while Sticky Goo.
		L4D2_Spitter_Supergirl_stickygoo_adrenaline_speed "200"

		// Maximum survivor Crouch speed caused by the Sticky Goo.
		L4D2_Spitter_Supergirl_stickygoo_crouch_speed "30"

		// For how long after exiting the Sticky Goo will a Survivor be slowed.
		L4D2_Spitter_Supergirl_stickygoo_duration "3.0"

		// If 1, Enables Sticky Goo ability: Any Survivor standing inside a pool of Spit will be stuck in the goo and find it harder to move out quickly.
		L4D2_Spitter_Supergirl_stickygoo_enable "1"

		// If 1, Prevents the Survivor from jumping while standing inside a pool of Spit.
		L4D2_Spitter_Supergirl_stickygoo_jump_disable "0"

		// Maximum survivor Run speed caused by the Sticky Goo.
		L4D2_Spitter_Supergirl_stickygoo_run_speed "120"

		// Maximum survivor Walk speed caused by the Sticky Goo.
		L4D2_Spitter_Supergirl_stickygoo_walk_speed "80"
		```
</details>

* <details><summary>Command | 命令</summary>

	None
</details>

* <details><summary>Known Conflicts</summary>
	
	If you don't use any of these plugins or any of these types of plugin at all no need to worry about conflicts.
	1. [Special Infected Ability Movement by Silvers](https://forums.alliedmods.net/showthread.php?p=2590861)
		* Don't allow spitter ability movement with this plugin while using "Supergirl Speed" ability.
</details>

* <details><summary>Related Official ConVar</summary>

	* Write down the follong cvars in cfg/server.cfg
		```php
		// Spitter Movement Speed (default: 210, maximum: 450)
		sm_cvar z_spitter_speed  210
		```
</details>

- - - -
# 中文說明
增強Spitter，賦予多種超能力成為超能小妹妹

* 原理
	* 能力1: 混合酸液 - 酸液裡含有膽汁，站上去有機會被噴中
	* 能力2: 酸性點滴 - 每過一段時間Spitter身上掉落一攤酸液
	* 能力3: 腐蝕侵爪 - 用手抓人產生的傷害會持續一段時間
	* 能力4: 無敵小妹 - 吐酸液的時候不受到任何傷害
	* 能力5: 超能移動 - 吐酸液的時候增加移動速度
	* 能力6: 酸電充能 - 第一次吐酸液之後可以馬上吐第二次
	* 能力7: 酸性緩速 - 在一攤酸液裡難以移動

* 功能
	* 可設定各能力的開關
	* 可設定混合酸液的機率
	* 可設定酸性點滴的時間間隔
	* 可設定腐蝕侵爪的傷害值與機率
	* 可設定無敵小妹的無敵時間
	* 可設定超能移動的移動時間
	* 可設定酸電充能的充能時間
	* 可設定酸性緩速的移動速度 (跑步、靜走、蹲下、腎上腺素狀態下的移動速度)

* <details><summary>會衝突的插件</summary>
	
	如果沒安裝以下插件就不需要擔心衝突
	1. [Special Infected Ability Movement by Silvers](https://forums.alliedmods.net/showthread.php?p=2590861)
		* 這個插件可以讓spitter使用能力時自由移動，與"超能移動"能力會有衝突
</details>

* <details><summary>相關的官方指令中文介紹 (點我展開)</summary>

	* 以下指令寫入文件 cfg/server.cfg，可自行調整
		```php
		// Spitter 移動速度 (預設: 210, 最大: 450)
		sm_cvar z_spitter_speed  210
		```
</details>