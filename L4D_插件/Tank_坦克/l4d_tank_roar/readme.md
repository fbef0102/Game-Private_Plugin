# Description | 內容
Tank is given a special roar ability that knockbacks survivors (Towards/Away) by RELOAD button.

> __Note__ <br/>
This plugin is private, Please contact [me](/#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](/#私人插件列表-private-plugins-list)

* Apply to | 適用於
	```
	L4D1
	L4D2
	```

* [Video | 影片展示](https://youtube.com/shorts/wPGiH0ny5is)

* Image | 圖示
	<br/>![l4d_tank_roar_1](image/l4d_tank_roar_1.gif)
	<br/>![l4d_tank_roar_2](image/l4d_tank_roar_2.gif)

* <details><summary>How does it work?</summary>

	* Tanks press RELOAD button to knock back survivors away or towards tank.
	* AI Tank can also knock back automatically.
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	2. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_tank_roar.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d_tank_roar_enable "1"

		// 0 - Roar only affect survivors on the (relatively) same plane as tank, 1 - Roar affects survivor as long as survivor is in close range from tank.
		l4d_tank_roar_dectect "0"

		// Sets how powerful the roar is.
		l4d_tank_roar_power "280"

		// Sets how near survivor must be in order to be affected by the roar.
		l4d_tank_roar_radius "280"

		// Sets the Maximum time before human tank can roar again.
		l4d_tank_roar_cooldown_max_human "9.0"

		// Sets the Minimum time before human tank can roar again.
		l4d_tank_roar_cooldown_min_human "7.5"

		// Sets how long the human tank cannot move/attack after roaring. Input 0 for no stun. Max stun time can only be as long as roar's cooldown. (0=off)
		l4d_tank_roar_stun_human "0.9"

		// If 1, AI tank can roar automatically
		l4d_tank_roar_ai_auto "1"

		// Sets the Maximum time before ai tank can roar again.
		l4d_tank_roar_cooldown_max_ai "3.0"

		// Sets the Minimum time before ai tank can roar again.
		l4d_tank_roar_cooldown_min_ai "3.0"

		// Sets how long the ai tank cannot move/attack after roaring. Input 0 for no stun. Max stun time can only be as long as roar's cooldown. (0=off)
		l4d_tank_roar_stun_ai "1.5"

		// Sets damage dealt to survivors.
		l4d_tank_roar_damage "1"

		// Sets which direction the survivor will be knockbacked. 0: Towards tank. 1: Away from tank. 
		l4d_tank_roar_direction "0"

		// How message displays. (0: Disable, 1:In chat, 2: In Hint Box, 3: In center text)
		l4d_tank_roar_hint "2"

		// Press which button to trigger the tank roar, 131072=Shift, 4=Ctrl, 32=Use, 8192=Reload, 524288=Middle Mouse
		// You can add numbers together, ex: 655360=Shift + Middle Mouse
		l4d_tank_roar_buttons "8192"

		// Rank roar ring color, Three values between 0-255 separated by spaces. RGB Color255 - Red Green Blue. (Empty=Ring Off)
		l4d_tank_roar_color "0 0 250"
		```
</details>

* Translation Support | 支援翻譯
	```
	translations/l4d_tank_roar.phrases.txt
	```

* <details><summary>Changelog | 版本日誌</summary>

	* v1.1h (2025-9-29)
		* Update cvars

	* v1.0h (2024-1-10)
		* Remake code, convert code to latest syntax
		* Fix warnings when compiling on SourceMod 1.11.
		* Optimize code and improve performance
		* Replace Gamedata with left4dhooks
		* Translation Support
		* Add Cvars
		* AI Tank now also use roar ability

	* v1.2.2
		* [Original Plugin by אKarma](https://forums.alliedmods.net/showthread.php?t=126919)
</details>

- - - -
# 中文說明
Tank可以按下R鍵震開周圍的倖存者 (遠離或朝向)

* 原理
	* Tank按下R鍵使用能力
		1. 神羅天征: 彈開周圍的倖存者
		2. 萬象天引: 吸引周圍的倖存者
	* AI Tank也適用，當AI Tank接近倖存者範圍內自動使用能力

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d_tank_spawn.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		l4d_tank_roar_enable "1"

		// 0 - 和Tank同一個高度的倖存者才會被影響, 1 - 倖存者和Tank即使不在同一個高度，只要在範圍內就會被影響.
		l4d_tank_roar_dectect "0"

		// Tank能力震開的力道
		l4d_tank_roar_power "280"

		// Tank能影響的範圍
		l4d_tank_roar_radius "280"

		// 真人Tank最長CD時間
		l4d_tank_roar_cooldown_max_human "9.0"

		// 真人Tank最短CD時間
		l4d_tank_roar_cooldown_min_human "7.5"

		// 真人Tank使用能力時不能動的時間 (0=關閉此功能)
		l4d_tank_roar_stun_human "0.9"

		// 為1時，AI Tank也適用，當AI Tank接近倖存者範圍內自動使用能力
		l4d_tank_roar_ai_auto "1"

		// AI Tank最長CD時間
		l4d_tank_roar_cooldown_max_ai "3.0"

		// AI Tank最短CD時間
		l4d_tank_roar_cooldown_min_ai "3.0"

		// AI Tank使用能力時不能動的時間 (0=關閉此功能)
		l4d_tank_roar_stun_ai "1.5"

		// 震開倖存者時，倖存者所受到的傷害值
		l4d_tank_roar_damage "1"

		// 設置Tank能力 0: 萬象天引. 1: 神羅天征. 
		l4d_tank_roar_direction "0"

		// 提示該如何顯示. (0: 不提示, 1: 聊天框, 2: 黑底白字框, 3: 螢幕正中間)
		l4d_tank_roar_hint "2"

		// Tank按下哪一個按鍵使用能力? 131072=Shift鍵, 32=E鍵, 8192=R鍵, 524288=滾輪鍵
		// 可以數字相加, 譬如: 655360=必須同時按 "Shift鍵+滾輪鍵"
		l4d_tank_roar_buttons "8192"

		// Tank使用能力產生的光圈顏色 (三色 RGB)
		// 留空=不產生光圈
		l4d_tank_roar_color "0 0 250"
		```
</details>