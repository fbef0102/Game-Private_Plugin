# Description | 內容
Skip Tank Victory + Speed up Obstacle animation playback

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/UYLsDKxyHs8)

* Image | 圖示
<br/>None

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/skip_tank_taunt.cfg
		```php
		// Obstacle animation playback rate (0=off)
		tank_obstacle_animation_playbackrate "2.5"

		// Tank stumble animation playback rate (0=off)
		tank_stumble_playbackrate "3.0"

		// Tank VICTORY/RAGE_AT_ENEMY/RAGE_AT_KNOCKDOWN animation skip (0=off)
		tank_victory_animation_skip "1"
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

* <details><summary>Similar Plugin | 相似插件</summary>

	1. [l4d_tank_speed_boost](https://github.com/fbef0102/Game-Private_Plugin/tree/main/l4d_tank_speed_boost): Increase Tank speed until hitting survivorsanimation playback version
		> Tank爬行障礙物速度與移動速度逐漸變快直到打到倖存者為止 
</details>

* <details><summary>Related Plugin | 相關插件</summary>

	1. [l4d_tankAttackOnSpawn](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4d_tankAttackOnSpawn): Forces AI tank to leave stasis and attack while spawn in coop.
		> 戰役模式之下Tank會主動前往攻擊倖存者而非待在原地等
	2. [l4d_sweep_fist_patch by Forgetest](https://github.com/Target5150/MoYu_Server_Stupid_Plugins/tree/master/The%20Last%20Stand/l4d_sweep_fist_patch): Patch memory bytes to allow multi-punch for tank in Coop Mode
		> 戰役模式之下Tank可以一拳打飛多個倖存者而非只能一個
</details>

* <details><summary>Changelog | 版本日誌</summary>

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
	* 戰役/寫實模式之下的Tank打中倖存者之時偶而會有咆哮與勝利姿勢，浪費Tank攻擊時間

* 功能
	* 可調整爬行速度
	* 可開關咆哮勝利動畫
	* 可調整Tank被震暈的動畫速度