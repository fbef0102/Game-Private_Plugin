# Description | 內容
Kill infected to get Exp and rank, type !rank to show rank menu

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Video | 影片展示
	<br/>None

* Image | 圖示
	* Your Rank
	> 全球菁英
	<br/>![l4d_ranking_system_1](image/l4d_ranking_system_1.jpg)
	* Name tag in chatbox 
	> 聊天視窗給予Rank稱號
	<br/>![l4d_ranking_system_2](image/l4d_ranking_system_2.jpg)
	* CSGO Rank
	> 抄襲CSGO Rank
	<br/>![l4d_ranking_system_3](image/l4d_ranking_system_3.jpg)

* Apply to | 適用於
```
L4D1
L4D2
```

* <details><summary>Changelog | 版本日誌</summary>

	* v1.0
		* Original Request by Alfari
</details>

* Require | 必要安裝
	1. [[INC] Multi Colors](https://forums.alliedmods.net/showthread.php?t=247770)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_ranking_system.cfg
	```php
	// Giving exp for killing a boomer
	l4d_ranking_system_boomk_illed "10"

	// Giving exp for killing a charger
	l4d_ranking_system_charger_killed "30"

	// Database to save ranking system. (MySQL & SQLite supported)
	l4d_ranking_system_database "rank"

	// 0=Plugin off, 1=Plugin on.
	l4d_ranking_system_allow "1"

	// Giving exp for killing a hunter
	l4d_ranking_system_hunter_killed "20"

	// Giving exp for killing a jockey
	l4d_ranking_system_jockey_killed "25"

	// Numbers of real survivor player require to active this plugin.
	l4d_ranking_system_player_require "4"

	// Giving exp for killing a smoker
	l4d_ranking_system_smoker_killed "20"

	// Giving exp for killing a spitter
	l4d_ranking_system_spitter_killed "10"

	// Giving exp for killing a tank
	l4d_ranking_system_tank_killed "200"

	// How many top rank players to display in 'Top Players' menu
	l4d_ranking_system_top_rank_numbers "10"

	// Giving exp for killing a witch
	l4d_ranking_system_witch_killed "80"

	// Giving exp for killing a zombie
	l4d_ranking_system_zombie_killed "1"
	```
</details>

* <details><summary>Command | 命令</summary>

	* **Open Rank System Menu**
		```php
		sm_rank
		sm_rankmenu
		```
</details>

* Database
	* if you want to cross server database, set l4d_ranking_system_database "rank" and set *sourcemod\configs\databases.cfg*
	```php
	"rank"
	{
		"driver"			"default"
		"host"				"x.x.x.x"
		"database"			"yourdatabase"
		"user"				"youruser"
		"pass"				"yourpass"
		"port"				"yourport"
	}
	```

- - - -
# 中文說明
殺死殭屍與特感獲得經驗值與頭銜名稱，輸入!rank顯示排行榜菜單

* 原理
	* 模仿CSO的Rank，根據玩家的經驗值獲得對應的頭銜名稱
	* 必須會設定資料庫，否則玩家的經驗值無法儲存

* 功能
	1. 輸入命令查看其他的人排行榜資料
	2. 可設置殺死不同的特感獲得不同的經驗值

* 資料庫設定
	* 跨伺服器儲值金額，設定 l4d_ranking_system_database "rank"，然後設定文件 *sourcemod\configs\databases.cfg*
	```php
	"rank"
	{
		"driver"			"default"
		"host"				"x.x.x.x"
		"database"			"yourdatabase"
		"user"				"youruser"
		"pass"				"yourpass"
		"port"				"yourport"
	}
	```
