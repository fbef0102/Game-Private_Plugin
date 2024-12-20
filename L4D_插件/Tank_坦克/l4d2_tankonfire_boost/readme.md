# Description | 內容
Increase the speed and power of tanks when on fire.

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Video | 影片展示
<br/>None

* Image | 圖示
	* Tank speed boost while on fire (著火時加速)
	<br/>![l4d2_tankonfire_boost_1](image/l4d2_tankonfire_boost_1.gif)
	* Fire damage the tank deals upon punching (火拳威力)
	<br/>![l4d2_tankonfire_boost_2](image/l4d2_tankonfire_boost_2.gif)

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	2. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d2_tankonfire_boost.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d2_tankonfire_boost_enable "1"

		// Multiplier for tank speed while on fire.
		l4d2_tankonfire_boost_speed_multi "1.2"

		// If 1, prints a warning to the chatbox.
		l4d2_tankonfire_boost_warning_enable "1"

		// Amount of fire damage the tank deals upon punching.
		l4d2_tankonfire_boost_damage_amount "5.0"
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

	1. [Tank Rock Ignition by Marttt](https://forums.alliedmods.net/showthread.php?t=315822): Ignites the rock thrown by the Tank when he is on fire
		> 著火時，扔出來的石頭也會著火且砸中人類會有額外傷害
</details>

* <details><summary>Changelog | 版本日誌</summary>

	```php
	//DarkNoghri @ 2010
	//HarryPotter @ 2023
	```
	* v1.0h (2023-6-6)
		* Remake code, convert code to latest syntax
		* Fix warnings when compiling on SourceMod 1.11.
		* Optimize code and improve performance
		* Use left4dhooks
		* Fixed Error

	* v1.1
		* [Original Plugin By DarkNoghri](https://forums.alliedmods.net/showthread.php?t=116014)
</details>

- - - -
# 中文說明
Tank燃燒時，速度與力量會提升

* 原理
	* Tank燃燒時，移動速度會變快
	* Tank燃燒時，提升火拳對人類造成的傷害

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d2_tankonfire_boost.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		l4d2_tankonfire_boost_enable "1"

		// Tank燃燒時，移動速度
		l4d2_tankonfire_boost_speed_multi "1.2"

		// 為1時，打開提示
		l4d2_tankonfire_boost_warning_enable "1"

		// Tank燃燒時，火拳造成的額外傷害值
		l4d2_tankonfire_boost_damage_amount "5.0"
		```
</details>
