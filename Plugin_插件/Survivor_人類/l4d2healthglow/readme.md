# Description | 內容
Gives the Survivors a health glow around them.

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/0MkBgAibf3U)

* Image | 圖示
	* Last life, low health, medium health, high health 
		> 黑白狀態、低生命值、中生命值、高生命值
		<br/>![l4d2healthglow_1](image/l4d2healthglow_1.jpg)

* Apply to | 適用於
	```
	L4D2
	```

* <details><summary>Changelog | 版本日誌</summary>

	```php
	//Mr. Zero @ 2011-2012
	//HarryPotter @ 2022
	```
	* v1.0h (2022-11-27)
		* Request by Yabi
		* Remake Code
		* Convert code to latest syntax
		* Add convars, users no need to recompile to change the colors of the glows
		* Changes to fix warnings when compiling on SourceMod 1.11.
		* All in one .sp file

	* v1.0.1
		* [Original Plugin by Mr. Zero](https://forums.alliedmods.net/showthread.php?t=174088)
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)

* Similar Plugin | 相似插件
	1. [LMC_Black_and_White_Notifier](https://github.com/fbef0102/L4D2-Plugins/tree/master/LMC_Black_and_White_Notifier): Notifies selected team(s) when someone is on final strike and add glow
		> 顯示誰是黑白狀態，有更多的提示與支援LMC模組

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d2healthglow.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d2healthglow_enable "1"

		// High Health Glow Color. Three values between 0-255 separated by spaces. RGB Color255 - Red Green Blue.
		l4d2healthglow_high_color "0 200 0"

		// If 1, High Health Glow Flashing
		l4d2healthglow_high_flashing "0"

		// High Health Glow Mini Range
		l4d2healthglow_high_mini_range "0"

		// High Health Glow Range
		l4d2healthglow_high_range "0"

		// Last Life Glow Color. Three values between 0-255 separated by spaces. RGB Color255 - Red Green Blue.
		l4d2healthglow_last_life_color "127 127 127"

		// If 1, Last Life Glow Flashing
		l4d2healthglow_last_life_flashing "1"

		// Last Life Glow Mini Range
		l4d2healthglow_last_life_mini_range "0"

		// Last Life Glow Range
		l4d2healthglow_last_life_range "0"

		// Low Health Glow Color. Three values between 0-255 separated by spaces. RGB Color255 - Red Green Blue.
		l4d2healthglow_low_color "200 0 0"

		// If 1, Low Health Glow Flashing
		l4d2healthglow_low_flashing "0"

		// Low health must be equal to or lower than this value
		l4d2healthglow_low_hp "24"

		// Low Health Glow Mini Range
		l4d2healthglow_low_mini_range "0"

		// Low Health Glow Range
		l4d2healthglow_low_range "0"

		// Medium Health Glow Color. Three values between 0-255 separated by spaces. RGB Color255 - Red Green Blue.
		l4d2healthglow_medium_color "200 200 0"

		// If 1, Medium Health Glow Flashing
		l4d2healthglow_medium_flashing "0"

		// Medium health must be equal to or lower than this value
		l4d2healthglow_medium_hp "39"

		// Medium Health Glow Mini Range
		l4d2healthglow_medium_mini_range "0"

		// Medium health Glow Range
		l4d2healthglow_medium_range "0"
		```
</details>

* <details><summary>Command | 命令</summary>

	None
</details>

- - - -
# 中文說明
根據玩家生命值狀態給予輪廓光圈適當的顏色

* 原理
	* 判定玩家目前的血量或是最後一條生命
	* 被特感抓住、被Boomer嘔吐、倒地、掛邊之類等等則不會顯示顏色光圈
	* 支援其他恢复玩家血量的插件

* 功能
	* 可設置不同的生命值門檻
	* 可設置不同生命值狀態下光圈的顏色、發光範圍、閃爍
	* 可設置黑白狀態下光圈的顏色、發光範圍、閃爍