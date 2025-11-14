# Description | 內容
Adjust common infecteds/hordes/mobs depends on 5+ survivors/map/gamemode

> __Note__ <br/>
This plugin is private, Please contact [me](/#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](/#私人插件列表-private-plugins-list)

* Apply to | 適用於
	```
	L4D1
	L4D2
	```

* Image | 圖示
	<br/>![l4d_infected_limit_control_1](image/l4d_infected_limit_control_1.jpg)

* <details><summary>How does it work?</summary>

	* Set the following depends on the numbers of survivors/map/gamemode
		* Common infected limit
		* Amount of zombies to spawn in Map Event horde/Alarm horde/Director Panic Event
		* Amount of zombies to spawn in natural hordes/z_spawn mob/boomer hordes/bile bomb
		* Time in seconds between natural horde spawns
	* Override limit in director vscript, prevent custom map from changing common infected limit
	* All settings are in [data/l4d_infected_limit_control](data/l4d_infected_limit_control) folder
		* Please Read: [data/l4d_infected_limit_control/readme_說明書.txt](data/l4d_infected_limit_control/readme_說明書.txt)
		* Run coop mode => plugin reads ```coop.cfg```
		* Run versus mode => plugin reads```versus.cfg```
		* Run survival mode => plugin reads```survival .cfg```
		* Run scavenge mode => plugin reads```scavenge.cfg```
		* Run realism mode => plugin reads```realism.cfg```
		* Run mutation gamemode => plugin reads```xxxx.cfg``` (```xxxx``` = mutation name)
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

		// How to calculate numbers of survivors, 0=Alive, 1=Dead+Alive
		l4d_infected_limit_control_calculate_sur "1"

		// Which xxxx.cfg file should this plugin read for settings in data/l4d_infected_limit_control folder (Ex: "custom_no_zombie" = reads custom_no_zombie.cfg)
		// Empty=By default, reads xxxx.cfg (xxxx = gamemode or mutation name).
		l4d_infected_limit_control_read_data ""
		```
</details>

* <details><summary>Command | 命令</summary>

	* **Check Zombie count information**
		```php
		sm_zminfo
		```
</details>

* <details><summary>Related Official ConVar</summary>

	* This plugin already modified the following cvars, you don't need to change.

	| ConVar/Command  					| Parameters or default value 	| Effect|
	| -------------|:-----------------:|:-------------:|
	| z_common_limit 					| 30   | How many common infecteds we can have at once.
	| z_mega_mob_size          			| 50   | Amount of zombies to spawn in Map Event horde & Alarm horde & Director Panic Event 
	| z_mob_spawn_min_size          	| 10   | Minimum amount of zombies to spawn in natural hordes & z_spawn mob & boomer hordes & bile bomb
	| z_mob_spawn_max_size          	| 30   | Maximum amount of zombies to spawn in natural hordes & z_spawn mob & boomer hordes & bile bomb
	| z_mob_spawn_min_interval_easy     | 120  | Minimum time in seconds between natural horde spawns on easy difficulty
	| z_mob_spawn_min_interval_normal   | 90   | Minimum time in seconds between natural horde spawns on normal difficulty
	| z_mob_spawn_min_interval_hard     | 90   | Minimum time in seconds between natural horde spawns on hard difficulty
	| z_mob_spawn_min_interval_expert   | 90   | Minimum time in seconds between natural horde spawns on impossible difficulty
	| z_mob_spawn_max_interval_easy     | 240  | Maximum time in seconds between natural horde spawns on easy difficulty
	| z_mob_spawn_max_interval_normal   | 180  | Maximum time in seconds between natural horde spawns on normal difficulty
	| z_mob_spawn_max_interval_hard     | 180  | Maximum time in seconds between natural horde spawns on hard difficulty
	| z_mob_spawn_max_interval_expert   | 180  | Maximum time in seconds between natural horde spawns on impossible difficulty
</details>

* Translation Support | 支援翻譯
	```
	translations/l4d_infected_limit_control.phrases.txt
	```

* <details><summary>Related Plugin | 相關插件</summary>

	1. [MultiSlots](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4dmultislots): Allows additional survivor players in server when 5+ player joins the server
		* 創造5位以上倖存者遊玩伺服器
	2. [l4dinfectedbots](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4dmultislots): Spawns multi infected bots in any mode + allows playable special infected in coop/survival + unlock infected slots (10 VS 10 available)
		* 多特感生成插件，倖存者人數越多，生成的特感越多，且不受遊戲特感數量限制 + 解除特感隊伍的人數限制 (可達成對抗 10 VS 10 玩法)
	3. [Common Limiter](https://forums.alliedmods.net/showthread.php?t=338337): Limit number of common infected to the z_common_limit cvar value
		* 地圖上的殭屍數量不會超過指令設定的數值 (以防止地圖腳本狂刷殭屍數量)
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.6 (2025-1-30)
		* Update data file
		* Control natural horde spawn interval

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
根據玩家人數多寡/地圖/遊戲模式，設定普通殭屍與屍潮的數量

* 圖示
	<br/>![zho/l4d_infected_limit_control_1](image/zho/l4d_infected_limit_control_1.jpg)

* 原理
	* 倖存者的數量用多，殭屍與屍潮數量越多
	* 依照地圖名稱/遊戲模式，設置不同的殭屍與屍潮數量
	* 修改的有
		* 殭屍同時存在的總數量
		* 警報車/地圖機關 殭屍數量
		* Boomer噴到/自然屍潮 殭屍數量
		* 自然屍潮 生成間隔
	* 強制覆蓋遊戲導演系統或地圖腳本，防止三方圖攥改殭屍與屍潮的數量
	* 所有功能設置都在 [data/l4d_infected_limit_control](data/l4d_infected_limit_control) 資料夾裡
		* 中文說明書: [data/l4d_infected_limit_control/readme_說明書.txt](data/l4d_infected_limit_control/readme_說明書.txt)
		* 當前模式是戰役 => 插件讀取```coop.cfg```
		* 當前模式是對抗 => 插件讀取```versus.cfg```
		* 當前模式是生存 => 插件讀取```survival.cfg```
		* 當前模式是清道夫 => 插件讀取```scavenge.cfg```
		* 當前模式是寫實 => 插件讀取```realism.cfg```
		* 其他模式 => 插件讀取```xxxx.cfg``` (```xxxx``` = 遊戲模式名稱或突變模式名稱)

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d_infected_limit_control.cfg
		```php
		// 0=關閉插件, 1=啟動插件 (輸入 !zminfo 隨時查看當下的殭屍數量狀態)
		l4d_infected_limit_control_enable "1"

		// 1=啟用提示, 0=關閉提示
		l4d_infected_limit_control_hint "1"

		// 如何計算倖存者數量, 0=只計算活著, 1=死亡+活著
		l4d_infected_limit_control_calculate_sur "1"

		// 自訂此插件位於data/l4d_infected_limit_control資料夾想要讀取的文件名稱 (譬如: "custom_no_zombie"，此插件讀取 custom_no_zombie.cfg)
		// 留白=插件預設讀取xxxx.cfg (xxxx = 遊戲模式名稱或突變模式名稱).
		l4d_infected_limit_control_read_data ""
		```
</details>

* <details><summary>命令中文介紹 (點我展開)</summary>

	* **查看目前的殭屍數量狀態**
		```php
		sm_zminfo
		```
</details>

* <details><summary>相關的官方指令中文介紹 (點我展開)</summary>

	* 這個插件已經修改以下指令, 你無須更動

	| 指令  				| 預設值 	| 效果 |
	| -------------|:-----------------:|:-------------:|
	| z_common_limit 					| 30   | 地圖上殭屍同時存在的總數量
	| z_mega_mob_size          			| 50   | 警報車/地圖機關/導演屍潮 生成的殭屍數量.
	| z_mob_spawn_min_size          	| 10   | Boomer噴到/自然屍潮/膽汁瓶/z_spawn mob 最少生成的殭屍數量
	| z_mob_spawn_max_size          	| 30   | Boomer噴到/自然屍潮/膽汁瓶/z_spawn mob 最多生成的殭屍數量
	| z_mob_spawn_min_interval_easy     | 120  | 簡單難度: 自然屍潮生成最短間隔 (秒)
	| z_mob_spawn_min_interval_normal   | 90   | 一般難度: 自然屍潮生成最短間隔 (秒)
	| z_mob_spawn_min_interval_hard     | 90   | 進階難度: 自然屍潮生成最短間隔 (秒)
	| z_mob_spawn_min_interval_expert   | 90   | 專家難度: 自然屍潮生成最短間隔 (秒)
	| z_mob_spawn_max_interval_easy     | 240  | 簡單難度: 自然屍潮生成最長間隔 (秒)
	| z_mob_spawn_max_interval_normal   | 180  | 一般難度: 自然屍潮生成最長間隔 (秒)
	| z_mob_spawn_max_interval_hard     | 180  | 進階難度: 自然屍潮生成最長間隔 (秒)
	| z_mob_spawn_max_interval_expert   | 180  | 專家難度: 自然屍潮生成最長間隔 (秒)
</details>
