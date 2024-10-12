# Description | 內容
Adjust common infecteds/hordes/mobs depends on 5+ survivors and map

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/isTpGqmf1qA)

* Image | 圖示
	<br/>![l4d_infected_limit_control_1](image/l4d_infected_limit_control_1.jpg)

* <details><summary>How does it work?</summary>

	* Modfiy [data/l4d_infected_limit_control.cfg](data/l4d_infected_limit_control.cfg), set common infected and horde limit depends on the numbers of survivors and map.
	* Override limit in director vscript, prevent custom map from changing common infected limit
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	2. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_infected_limit_control.cfg
		```php
		// 0=Plugin off, 1=Plugin on. (type !zminfo to see zombie count information)
		l4d_infected_limit_control_enable "1"

		// 1=Enable notify, 0=Disable notify
		l4d_infected_limit_control_hint "1"
		```
</details>

* <details><summary>Command | 命令</summary>

	* **Check Zombie count information**
		```php
		sm_zminfo
		```
</details>

* <details><summary>Data Config</summary>

	* [data/l4d_infected_limit_control.cfg](data/l4d_infected_limit_control.cfg)
		> Manual in this file, click for more details...
</details>

* <details><summary>Related Official ConVar</summary>

	* This plugin already modified the following cvars, you don't need to change.

	| ConVar/Command  					| Parameters or default value 	| Effect|
	| -------------|:-----------------:|:-------------:|
	| z_common_limit 					| 30   | How many common infecteds we can have at once.
	| z_mega_mob_size          			| 50   | Amount of zombies to spawn in Map Event horde & Alarm horde & Director Panic Event 
	| z_mob_spawn_min_size          	| 10   | Minimum amount of zombies to spawn in natural hordes & z_spawn mob & boomer hordes & bile bomb
	| z_mob_spawn_max_size          	| 30   | Maximum amount of zombies to spawn in natural hordes & z_spawn mob & boomer hordes & bile bomb
</details>

* Apply to | 適用於
	```
	L4D1
	L4D2
	```

* <details><summary>Translation Support | 支援翻譯</summary>

	```
	English
	繁體中文
	简体中文
	```
</details>

* <details><summary>Related Plugin | 相關插件</summary>

	1. [MultiSlots](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4dmultislots): Allows additional survivor players in server when 5+ player joins the server
		* 創造5位以上倖存者遊玩伺服器
	2. [l4dinfectedbots](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4dmultislots): Spawns multi infected bots in any mode + allows playable special infected in coop/survival + unlock infected slots (10 VS 10 available)
		* 多特感生成插件，倖存者人數越多，生成的特感越多，且不受遊戲特感數量限制 + 解除特感隊伍的人數限制 (可達成對抗 10 VS 10 玩法)
	3. [Common Limiter](https://forums.alliedmods.net/showthread.php?t=338337): Limit number of common infected to the z_common_limit cvar value
		* 地圖上的殭屍數量不會超過指令設定的數值 (以防止地圖腳本狂刷殭屍數量)
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.5 (2024-10-12)
		* Dynamic adjust depends on map
		* Update Data file
		* Rename plugin name: l4d2_auto_add_zombie -> l4d_infected_limit_control

	* v1.4 (2024-8-23)
		* Update cvars
		* Add Data file

	* v1.3 (2024-7-11)
		* Add dynamic adjust after final rescue starts
		* Update Cvars

	* v1.2 (2023-12-18)
		* Override Director Scripts

	* v1.1 (2023-12-7)
		* When final rescue starts, disable Dynamic Adjust and restore all official cvars to default value.
		* Prevent too many common infected and horde keep coming, cause final stage stuck

	* v1.0 (2023-11-29)
	    * Initial Release
</details>

- - - -
# 中文說明
根據玩家人數多寡與地圖，設定普通殭屍與屍潮的數量限制

* 圖示
	<br/>![zho/l4d_infected_limit_control_1](image/zho/l4d_infected_limit_control_1.jpg)

* 原理
	* 設置文件[data/l4d_infected_limit_control.cfg](data/l4d_infected_limit_control.cfg)
		* 依照倖存者的數量，設置更多的殭屍與屍潮數量
		* 依照地圖名稱，設置殭屍與屍潮數量
	* 修改的有
		* 殭屍同時存在的總數量
		* 警報車/地圖機關 殭屍數量
		* Boomer噴到/自然屍潮 殭屍數量
	* 強制覆蓋遊戲導演系統或地圖腳本，防止三方圖攥改殭屍與屍潮的數量

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d_infected_limit_control.cfg
		```php
		// 0=關閉插件, 1=啟動插件 (輸入 !zminfo 隨時查看當下的殭屍數量狀態)
		l4d_infected_limit_control_enable "1"

		// 1=啟用提示, 0=關閉提示
		l4d_infected_limit_control_hint "1"
		```
</details>

* <details><summary>命令中文介紹 (點我展開)</summary>

	* **查看目前的殭屍數量狀態**
		```php
		sm_zminfo
		```
</details>

* <details><summary>文件設定範例</summary>

	* [data/l4d_infected_limit_control.cfg](data/l4d_infected_limit_control.cfg)
		> 內有中文說明，可點擊查看
</details>

* <details><summary>相關的官方指令中文介紹 (點我展開)</summary>

	* 這個插件已經修改以下指令, 你無須更動

	| 指令  				| 預設值 	| 效果 |
	| -------------|:-----------------:|:-------------:|
	| z_common_limit 					| 30   | 地圖上殭屍同時存在的總數量
	| z_mega_mob_size          			| 50   | 警報車/地圖機關/導演屍潮 生成的殭屍數量.
	| z_mob_spawn_min_size          	| 10   | Boomer噴到/自然屍潮/膽汁瓶/z_spawn mob 最少生成的殭屍數量
	| z_mob_spawn_max_size          	| 30   | Boomer噴到/自然屍潮/膽汁瓶/z_spawn mob 最多生成的殭屍數量
</details>
