# Description | 內容
Increase AI Tank speed until hitting survivors

> __Note__ <br/>
This plugin is private, Please contact [me](/#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](/#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/qQEAqHX2v4I)

* Image | 圖示
	<br/>![l4d_tank_speed_boost_1](image/l4d_tank_speed_boost_1.gif)
	<br/>![l4d_tank_speed_boost_2](image/l4d_tank_speed_boost_2.gif)

* Apply to | 適用於
	```
	L4D1
	L4D2
	```

* <details><summary>How does it work?</summary>

	* Increase Tank movement speed
	* Increase Tank climb over the obstacle speed
	* Reset all speed when hit survivors (Re-increase speed)
	* Does not apply to Human Tank Player
</details>

* Require | 必要安裝
<br/>None

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_tank_speed_boost.cfg
		```php
		// Time interval to increase the tank movement & animation speed. (0=off)
		l4d_tank_speed_boost_interval "2.5"

		// If 1, Increase the tank movement speed each time passed
		l4d_tank_speed_boost_move_enable "1"

		// Tank movement default speed
		l4d_tank_speed_boost_move_start "1.2"

		// How much value to the tank movement speed
		l4d_tank_speed_boost_move_add "0.05"

		// Maximum tank movement speed
		l4d_tank_speed_boost_move_max "2.50"

		// If 1, Increase the tank animation speed each time passed
		l4d_tank_speed_boost_anim_enable "1"

		// Tank animation default speed
		l4d_tank_speed_boost_anim_start "2.0"

		// How much value to add to the tank animation speed
		l4d_tank_speed_boost_anim_add "0.05"

		// Maximum tank animation speed
		l4d_tank_speed_boost_anim_max "2.50"

		// Reset tank movement & animation speed when 1=Hurt survior by punch, 2=Hurt survior by rock, 3=Both
		l4d_tank_speed_boost_reset "1"
		```
</details>

* <details><summary>Command | 命令</summary>
	
	None
</details>

* <details><summary>Related Plugin | 相關插件</summary>

	1. [skip_tank_taunt](/L4D_插件/Tank_坦克/skip_tank_taunt): Skip Tank Victory + Speed up Obstacle animation playback version
		* Tank爬行障礙物速度變快 + 略過咆哮勝利動畫

	2. [l4d_tankAttackOnSpawn](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4d_tankAttackOnSpawn): Forces AI tank to leave stasis and attack while spawn in coop.
		* 戰役模式之下Tank會主動前往攻擊倖存者而非待在原地等
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.8 (2024-4-7)
	* v1.7 (2024-2-15)
		* Update cvars

	* v1.6 (2024-2-12)
		* Fixed not working

	* v1.5
		* Initial Release
</details>

- - - -
# 中文說明
AI Tank爬行障礙物速度與移動速度逐漸變快直到打到倖存者為止 

* 原理
	* Tank開始追向倖存者的時候，自身的移動速度與爬行障礙物速度逐漸變快
	* 當Tank打到倖存者之後，自身的所有速度重置 (重新變快)
	* 真人Tank玩家不適用

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d_tank_speed_boost.cfg
		```php
		// 時間間隔多少秒增加一次，AI Tank的移動與爬行障礙物速度 (0=關閉此插件)
		l4d_tank_speed_boost_interval "2.5"

		// 為1時，每過一段時間增加AI Tank的移動速度
		l4d_tank_speed_boost_move_enable "1"

		// AI Tank的預設移動速度
		l4d_tank_speed_boost_move_start "1.2"

		// 每次增加的移動速度 (0=不增加移動速度)
		l4d_tank_speed_boost_move_add "0.05"

		// 最大移動速度
		l4d_tank_speed_boost_move_max "2.50"

		// 為1時，每過一段時間增加AI Tank的爬行障礙物速度
		l4d_tank_speed_boost_anim_enable "1"

		// AI Tank的預設爬行障礙物速度
		l4d_tank_speed_boost_anim_start "2.0"

		// 每次增加的爬行障礙物速度 (0=不增加爬行障礙物速度)
		l4d_tank_speed_boost_anim_add "0.05"

		// 最大爬行障礙物速度
		l4d_tank_speed_boost_anim_max "2.50"

		// 當Tank傷害到倖存者之後，自身的所有速度重置，1=拳頭打中倖存者時, 2=石頭擊中倖存者時, 3=兩者皆是.
		l4d_tank_speed_boost_reset "1"
		```
</details>
