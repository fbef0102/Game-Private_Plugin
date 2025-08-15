# Description | 內容
Sets glows on witches everyone can see

> __Note__ <br/>
This plugin is private, Please contact [me](/#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](/#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/gmylMHJX8lc)

* Image | 圖示
	<br/>![witch_glow_1](image/witch_glow_1.gif)

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/witch_glow.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		witch_glow_enable "1"

		// Witch glow color, Three values between 0-255 separated by spaces. RGB Color255 - Red Green Blue.
		witch_glow_color "255 255 255"

		// Witch Glow max Range (0=No maximum distance)
		witch_glow_max_range "0"

		// Minimum distance that the client must be from the witch to start glowing
		witch_glow_min_range "300"

		// If 1, remove witch glow if someone startles witch
		witch_glow_kill_startle "1"

		// Which teams can see the Witch glow
		// 0 = NONE, 1 = SURVIVOR, 2 = INFECTED, 4 = SPECTATOR.
		// Add numbers greater than 0 for multiple options.
		// Example: "3", enables for SURVIVOR and INFECTED.
		witch_glow_for_team "6"
		```
</details>

* <details><summary>Command | 命令</summary>

	None
</details>

* Apply to | 適用於
	```
	L4D2
	```

* <details><summary>Related Plugin | 相關插件</summary>

	1. [l4d2_tank_glow](/L4D_插件/Tank_坦克/l4d2_tank_glow): Sets glows on tanks everyone can see
		* 在Tank身上打上光圈，所有人都可以看見Tank在哪裡
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.0 (2023-12-05)
		* Initial Release
</details>

- - - -
# 中文說明
在Witch身上打上光圈，所有人都可以看見Witch在哪裡

* 原理
	* 倖存者 + 特感隊伍 + 旁觀者會看見Witch在哪裡
	* Witch被驚嚇之後，光圈消失

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/witch_glow.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		witch_glow_enable "1"

		// Witch的光圈顏色，填入RGB三色 (三個數值介於0~255，需要空格)
		witch_glow_color "255 255 255"

		// Witch的光圈顏色最遠範圍 (0=無限制)
		witch_glow_max_range "0"

		// Witch的光圈顏色在這範圍內不會發光
		witch_glow_min_range "300"

		// 為1時，如果Witch被驚嚇則關閉光圈
		witch_glow_kill_startle "1"

		// 哪些隊伍可以看見Witch的光圈
		// 0 = 無, 1 = 倖存者, 2 = 特感隊伍, 4 = 旁觀者.
		// 請將數字相加起來
		// 舉例: "3"=倖存者+特感隊伍
		witch_glow_for_team "6"
		```
</details>