# Description | 內容
Increase AI Tank speed until hitting survivors

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/qQEAqHX2v4I)

* Image | 圖示
	<br/>![l4d_tank_speed_boost_1](image/l4d_tank_speed_boost_1.gif)
	<br/>![l4d_tank_speed_boost_2](image/l4d_tank_speed_boost_2.gif)

* <details><summary>How does it work?</summary>

	* Increase Tank movement speed
	* Increase Tank animation speed (ex. climb the wall)
	* Reset all speed when hit survivors (Re-increase speed)
	* Does not apply to Human Tank Player
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_tank_speed_boost.cfg
		```php
		// Time interval to increase the tank movement & animation speed. (0=off)
		l4d_tank_speed_boost_interval "2.5"

		// Increase the tank movement speed each time.
		l4d_tank_speed_boost_add "0.05"

		// Maximum tank movement speed.
		l4d_tank_speed_boost_max "2.50"

		// Increase the tank animation speed each time.
		l4d_tank_animation_boost_add "0.05"

		// Maximum tank animation speed.
		l4d_tank_animation_boost_max "2.50"
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

* <details><summary>Related Plugin | 相關插件</summary>

	1. [skip_tank_taunt](https://github.com/fbef0102/Game-Private_Plugin/tree/main/skip_tank_taunt): Skip Tank Victory + Speed up Obstacle animation playback version
		* Tank爬行障礙物速度變快 + 略過咆哮勝利動畫

	2. [l4d_tankAttackOnSpawn](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4d_tankAttackOnSpawn): Forces AI tank to leave stasis and attack while spawn in coop.
		* 戰役模式之下Tank會主動前往攻擊倖存者而非待在原地等
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.6 (2024-2-12)
		* Fixed not working

	* v1.5
		* Initial Release
</details>

- - - -
# 中文說明
AI Tank爬行障礙物速度與移動速度逐漸變快直到打到倖存者為止 

* 原理
	* Tank開始追向倖存者的時候，自身的移動速度與爬行速度逐漸變快
	* 當Tank打到倖存者之後，自身的所有速度重置 (重新變快)
	* 真人Tank玩家不適用

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d_tank_speed_boost.cfg
		```php
		// 每2.5秒增加AI Tank的移動與爬行速度 (0=關閉此插件)
		l4d_tank_speed_boost_interval "2.5"

		// 每次增加的移動速度
		l4d_tank_speed_boost_add "0.05"

		// 最大移動速度
		l4d_tank_speed_boost_max "2.50"

		// 每次增加的爬行速度
		l4d_tank_animation_boost_add "0.05"

		// 最大爬行速度
		l4d_tank_animation_boost_max "2.50"
		```
</details>
