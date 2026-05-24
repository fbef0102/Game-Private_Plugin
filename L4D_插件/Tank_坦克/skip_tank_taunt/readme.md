# Description | 內容
Skip Tank Victory + Speed up Obstacle animation playback

> __Note__ <br/>
This plugin is private, Please contact [me](/#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](/#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/UYLsDKxyHs8)

* Image | 圖示
	| Before (裝此插件之前)  			| After (裝此插件之後) |
	| -------------|:-----------------:|
	| ![skip_tank_taunt_before_1](image/skip_tank_taunt_before_1.gif)|![skip_tank_taunt_after_1](image/skip_tank_taunt_after_1.gif)|
	| ![skip_tank_taunt_before_2](image/skip_tank_taunt_before_2.gif)|![skip_tank_taunt_after_2](image/skip_tank_taunt_after_2.gif)|
	| ![skip_tank_taunt_before_3](image/skip_tank_taunt_before_3.gif)|![skip_tank_taunt_after_3](image/skip_tank_taunt_after_3.gif)|

* <details><summary>How does it work?</summary>

	* (Before Plugin) 
		* AI Tank will do victory animation around 3 seconds (In coop/realism mode) when the following situations
			* After punch low-health survivors
			* After Tank Rock successfully hit survivors
		* AI Tank climb the wall or obstacle extremely slowly
		* Tank stumble(stagger) animation playback around 3 seconds
	* (After Plugin) 
		* Remove any victory animation on AI Tank
		* AI Tank can climb the wall or obstacle fast
		* Speed up stumble(stagger) animation 
		* This plugin also apply to real tank player
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/skip_tank_taunt.cfg
		```php
		// Obstacle animation playback rate (1.0=Game default playback)
		skip_tank_taunt_obstacle_animation_playbackrate "2.5"

		// Tank stumble(stagger) animation playback rate (0=No Stagger animation, 1.0=Game default playback)
		skip_tank_taunt_stumble_playbackrate "3.0"

		// If 1, Skip Tank VICTORY/RAGE_AT_ENEMY/RAGE_AT_KNOCKDOWN animation skip 
		skip_tank_taunt_victory_animation_skip "1"
		```
</details>

* Apply to | 適用於
	```
	L4D1
	L4D2
	```

* <details><summary>Similar Plugin | 相似插件</summary>

	1. [l4d_tank_speed_boost](/L4D_插件/Tank_坦克/l4d_tank_speed_boost): Increase Tank speed until hitting survivorsanimation playback version
		> Tank爬行障礙物速度與移動速度逐漸變快直到打到倖存者為止 
</details>

* <details><summary>Related Plugin | 相關插件</summary>

	1. [l4d_tankAttackOnSpawn](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4d_tankAttackOnSpawn): Forces AI tank to leave stasis and attack while spawn in coop.
		> 戰役模式之下Tank會主動前往攻擊倖存者而非待在原地等
	2. [l4d_sweep_fist_patch by Forgetest](https://github.com/Target5150/MoYu_Server_Stupid_Plugins/tree/master/The%20Last%20Stand/l4d_sweep_fist_patch): Patch memory bytes to allow multi-punch for tank in Coop Mode
		> 戰役模式之下Tank可以一拳打飛多個倖存者而非只能一個
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.0h (2024-10-7)
		* Update cvars

	* v1.0.7 (2023-2-11)
		* Add a convar ```tank_stumble_playbackrate 3.0```, "Tank stumble animation playback rate (0=off)

	* v1.0.6
		* Support L4D1

	* v1.0.5
		* [Original Plugin by sorallll](https://forums.alliedmods.net/showthread.php?t=336707)
</details>

- - - -
# 中文說明
Tank爬行障礙物速度變快 + 略過咆哮勝利動畫

* 原理
	* (裝此插件之前) 
		* AI Tank 在以下情況發生後會原地做咆哮動畫與勝利姿勢，浪費Tank大概三秒的進攻時間 (戰役/寫實模式)
			* 揮拳打到低血量的倖存者
			* Tank石頭砸中倖存者時
		* Tank被爆炸物炸到時，有三秒的後退動畫
		* AI Tank 爬行障礙物的速度非常慢
	* (裝此插件之後) 
		* 刪除任何咆哮與勝利姿勢，不浪費Tank的進攻節奏
		* AI Tank 爬行障礙物的速度變快
		* Tank被震退的動畫時間變短
		* 此插件也適用真人Tank玩家

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/skip_tank_taunt.cfg
		```php
		// 爬行障礙物的速度 (1.0=不改變)
		skip_tank_taunt_obstacle_animation_playbackrate "2.5"

		// Tank被瓦斯桶、氧氣罐、土製炸彈等震退時，動畫速度 (0=不會被震退, 1.0=不改變)
		skip_tank_taunt_stumble_playbackrate "3.0"

		// 為1時，Tank不會有咆哮與勝利的姿勢 (VICTORY/RAGE_AT_ENEMY/RAGE_AT_KNOCKDOWN)
		skip_tank_taunt_victory_animation_skip "1"
		```
</details>