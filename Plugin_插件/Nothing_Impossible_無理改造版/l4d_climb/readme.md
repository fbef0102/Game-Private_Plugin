# Description | 內容
Makes Everyone Climb On Walls.

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Video | 影片展示
  * [Demo](https://youtu.be/MPtEzoKdJXc)
  * [Bully Maguire「惡霸麥奎爾」蜘蛛人](https://www.youtube.com/shorts/qJetU6lAGzM)

* Image | 圖示
	<br/>![l4d_climb_1](image/l4d_climb_1.jpg)

* <details><summary>How does it work?</summary>

	* Press Jump+E to climb the wall
	* Support [Ready up](/Plugin_插件/Server_伺服器/readyup), climb the wall during readyup only
</details>

* Require | 必要安裝
	1. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_climb.cfg
		```php
		// Enable Mode: 0=Off,  1=Coop/Realism Only, 2=All Game Modes
		l4d_climb_enable "2"

		// Enable Mode: 0=None, 1=Both Teams, 2=Survivors Team Only, 3=Infected Team Only
		l4d_climb_team "1"

		// Limit Of Messages Shown Per Round (0=Disable Message)
		l4d_climb_msg "2"

		// Players with these flags have access to climb the wall (Empty = Everyone, -1: Nobody)
		l4d_climb_flag ""

		// Smoker Enable Mode: 0=Off, 1=On
		l4d_climb_smoker "1"

		// Boomer Enable Mode: 0=Off, 1=On
		l4d_climb_boomer "1"

		// Hunter Enable Mode: 0=Off, 1=On
		l4d_climb_hunter "1"

		// Spitter Enable Mode: 0=Off, 1=On
		l4d_climb_spitter "1"

		// Jockey Enable Mode: 0=Off, 1=On
		l4d_climb_jockey "1"

		// Charger Enable Mode: 0=Off, 1=On
		l4d_climb_charger "1"

		// Tank Enable Mode: 0=Off, 1=On
		l4d_climb_tank "1"

		// Speed Applied When Climbing
		l4d_climb_speed "80"

		// Speed x multiplier Applied For Smokers
		l4d_climb_speed_smoker_multiplier "2.1"

		// Speed x multiplier Applied For Boomers
		l4d_climb_speed_boomer_multiplier "1.8"

		// Speed x multiplier Applied For Hunters
		l4d_climb_speed_hunter_multiplier "2.4"

		// Speed x multiplier Applied For Spitters
		l4d_climb_speed_spitter_multiplier "2.0"

		// Speed x multiplier Applied For Jockeys
		l4d_climb_speed_jockey_multiplier "2.4"

		// Speed x multiplier Applied For Chargers
		l4d_climb_speed_charger_multiplier "2.5"

		// Speed x multiplier Applied For Tanks
		l4d_climb_speed_tank_multiplier "1.5"

		// Speed x multiplier Applied For Survivors
		l4d_climb_speed_survivor_multiplier "1.0"
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

* Translation Support | 支援翻譯
	```
	English
	繁體中文
	简体中文
	```

* <details><summary>Changelog | 版本日誌</summary>

	* v1.3h (2023-7-19)
      * Add a convar
		```php
		// Players with these flags have access to climb the wall (Empty = Everyone, -1: Nobody)
		l4d_climb_flag ""
		```

	* v1.2h (2023-6-30)
      * Safely create entity and Safely remove entity

	* v1.1h (2023-6-9)
      * Fixed bots stuck on wall if change team while climing

	* v1.0h
      * Translation Support
      * Modify cvars
      * Support [Ready up plugin](https://github.com/fbef0102/Game-Private_Plugin/tree/main/Plugin_%E6%8F%92%E4%BB%B6/Server_%E4%BC%BA%E6%9C%8D%E5%99%A8/readyup), allow to climb wall during ready-up

	* v1.05
      * [Shadowysn's fork](https://forums.alliedmods.net/showpost.php?p=2681114&postcount=99)

	* v1.02
      * [cravenge's fork](https://forums.alliedmods.net/showpost.php?p=2424617&postcount=92)
      * [Original Plugin by panxiaohai](https://forums.alliedmods.net/showthread.php?t=161280)
</details>

- - - -
# 中文說明
人類與特感能爬牆

* 原理
	* 跳躍到牆壁上按E鍵即可爬牆
	* Tank也可以
	* 爬空氣牆都不是問題
	* 支援[Ready up插件](/Plugin_插件/Server_伺服器/readyup)，準備期間可爬牆

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d_climb.cfg
		```php
		// 什麼模式下啟動此插件: 0=都關閉,  1=只限戰役/寫實, 2=所有模式
		l4d_climb_enable "2"

		// 誰可以爬牆: 0=沒有人, 1=特感與人類, 2=人類, 3=特感
		l4d_climb_team "1"

		// 每回合顯示的提示次數 (0=關閉提示)
		l4d_climb_msg "2"

		// 擁有這些權限的玩家可以爬牆 (留白 = 任何人都能爬牆, -1: 無人能爬牆)
		l4d_climb_flag ""

		// Smoker 能否爬牆?: 0=不可以, 1=可以
		l4d_climb_smoker "1"

		// Boomer 能否爬牆?: 0=不可以, 1=可以
		l4d_climb_boomer "1"

		// Hunter 能否爬牆?: 0=不可以, 1=可以
		l4d_climb_hunter "1"

		// Spitter 能否爬牆?: 0=不可以, 1=可以
		l4d_climb_spitter "1"

		// Jockey 能否爬牆?: 0=不可以, 1=可以
		l4d_climb_jockey "1"

		// Charger 能否爬牆?: 0=不可以, 1=可以
		l4d_climb_charger "1"

		// Tank 能否爬牆?: 0=不可以, 1=可以
		l4d_climb_tank "1"

		// 爬牆的速度
		l4d_climb_speed "80"

		// Smokers 的爬牆速度倍率
		l4d_climb_speed_smoker_multiplier "2.1"

		// Boomers 的爬牆速度倍率
		l4d_climb_speed_boomer_multiplier "1.8"

		// Hunters 的爬牆速度倍率
		l4d_climb_speed_hunter_multiplier "2.4"

		// Spitters 的爬牆速度倍率
		l4d_climb_speed_spitter_multiplier "2.0"

		// Jockeys 的爬牆速度倍率
		l4d_climb_speed_jockey_multiplier "2.4"

		// Chargers 的爬牆速度倍率
		l4d_climb_speed_charger_multiplier "2.5"

		// Tanks 的爬牆速度倍率
		l4d_climb_speed_tank_multiplier "1.5"

		// 人類 的爬牆速度倍率
		l4d_climb_speed_survivor_multiplier "1.0"
		```
</details>


