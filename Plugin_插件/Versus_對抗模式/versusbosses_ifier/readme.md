# Description | 內容
Sets a tank and witch spawn point based on the percentage of passing the map in versus mode

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Video | 影片展示
<br/>None

* Image | 圖示
	<br/>![versusbosses_ifier_1](image/versusbosses_ifier_1.jpg)
	<br/>![versusbosses_ifier_2](image/versusbosses_ifier_2.jpg)

* <details><summary>How does it work?</summary>

	* Control Versus director, Boss (Tank or Witch) will be spawned when the furthest survivor reach a percentage of map
		* For example
			```php
			// When furthest survivor reach 79% of map completion, the Tank will be spawned.
			// Same algorithm for Witch.
			Tank spawn: 79%,
			Witch spawn: 70%
			```
		* Spawn only one tank and one witch each round
	* 🟥 Please write down the following official cvars in ```cfg/server.cfg```
		```php
		// Adjust tank spawns: 100% chance on every map (0.00 ~ 1.00)
		sm_cvar versus_tank_chance_intro 		"1" //first map
		sm_cvar versus_tank_chance 				"1" //regular map
		sm_cvar versus_tank_chance_finale 		"1" //final map

		// Adjust witch spawns: 100% chance on every map (0.00 ~ 1.00)
		sm_cvar versus_witch_chance_intro 		"1" //first map
		sm_cvar versus_witch_chance 			"1" //regular map
		sm_cvar versus_witch_chance_finale 		"1" //final map

		// Adjust boss spawn range percentage: Boss will only spawn between 20% ~ 85% on the map
		sm_cvar versus_boss_flow_min_intro 		"0.20" //first map
		sm_cvar versus_boss_flow_max_intro 		"0.85"

		sm_cvar versus_boss_flow_min 			"0.25" //regular map
		sm_cvar versus_boss_flow_max 			"0.85"

		sm_cvar versus_boss_flow_min_finale 	"0.20"
		sm_cvar versus_boss_flow_max_finale 	"0.85" //final map
		```
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	2. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)
	3. [builtinvotes](https://github.com/fbef0102/Game-Private_Plugin/releases/tag/builtinvotes)
	4. Optional - [readyup](/Plugin_插件/Server_伺服器/readyup)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/versusbosses_ifier.cfg
		```php
		// If 1, Allow for Easy Setup of the Boss Spawns (!voteboss)
		l4d_versus_boss_vote_enable "1"

		// How many players at least to vote Boss Spawns.
		l4d_versus_boss_vote_need_player "4"

		// 1=Enables tanks to spawn, 0=Disable All Tank Spawn
		l4d_versus_boss_tank_can_spawn "1"

		// 1=Enables witches to spawn, 0=Disable All Witch Spawn
		l4d_versus_boss_witch_can_spawn "1"

		// Minimum flow amount witches should avoid tank spawns by, by half the value given on either side of the tank spawn
		l4d_versus_boss_avoid_tank_spawn "10"

		// If 1, Forcing director script to obey boss spawn cvars
		l4d_versus_boss_spawn_cvars "1"

		// 1=Display boss percentages to entire team when using commands, 0=Display boss percentages to user only team when using commands
		l4d_versus_boss_global_percent "1"

		// If 1, Display Tank flow percentage in chat
		l4d_versus_boss_tank_percent "1"

		// If 1, Display Witch flow percentage in chat
		l4d_versus_boss_witch_percent "1"

		// If 1, Notify message when tank/witch has spawned
		l4d_versus_boss_spawn_notify "1"
		```
</details>

* <details><summary>Command | 命令</summary>

	* **force witch spawn percent before leaving saferoom (Adm required: ADMFLAG_BAN)**
		```php
		sm_setwitch <number>
		sm_fwitch <number>
		```

	* **force tank spawn percent before leaving saferoom (Adm required: ADMFLAG_BAN)**
		```php
		sm_settank <number>
		sm_ftank <number>
		```

	* **Display Spawn percent for boss**
		```php
		sm_boss
		sm_tank
		sm_witch
		sm_t
		```

	* **Let's vote to set those Boss Spawns!**
		```php
		sm_voteboss	<tank> <witch>
		sm_bossvote <tank> <witch>
		```
</details>

* <details><summary>API | 串接</summary>

	* ```scripting\include\versusbosses_ifier.inc```
		```php
		Registers a library name: versusbosses_ifier
		```
</details>

* <details><summary>Data Config</summary>

	* data/mapinfo.txt
		```php
		"MapInfo"
		{
			"c2m2_fairgrounds" //Map Name
			{
				"tank_ban_flow" //ban tank flow
				{
					"tank ban test" //Whatever name
					{
						"min"		"0" //0~20% is prohibited to spawn tank
						"max"		"20"
					}
					"tank ban test 2" //Whatever name
					{
						"min"		"50" //50~80% is prohibited to spawn tank
						"max"		"80"
					}
				}
				"witch_ban_flow" //ban witch flow
				{
					"witch ban test"　 //Whatever name
					{
						"min"		"50" //50~100% is prohibited to spawn tank
						"max"		"100"
					}
				}
			}
		}
		```

	* Available Settings
		```php
		// 1=This map is prohibited to spawn tank
		"tank_map_off" "1"

		//1=This map is prohibited to spawn witch
		"witch_map_off" "1"

		//1=This map has its own static tank spawn
		"static_tank_map" "1"

		//1=This map has its own static witch spawn
		"static_witch_map" "1"

		//1=Plugin spawns bride witch in this map
		"witch_bride_map" "1"
		```
</details>

* Apply to | 適用於
	```
	L4D1 versus
	L4D2 versus
	```

* <details><summary>Translation Support | 支援翻譯</summary>

	```
	English
	繁體中文
	简体中文
	```
</details>

* <details><summary>Related | 相關插件</summary>

	1. [readyup](/Plugin_插件/Server_伺服器/readyup): Ready Plugin
		* 準備插件，讓Boss路程預先顯示在Ready Hud上面

	2. [coopbosses_ifier](/Plugin_插件/Coop_戰役模式/coopbosses_ifier): Sets a tank and witch spawn point on every map in coop mode
		* 戰役模式下每一張地圖挑選隨機路程生成一隻Tank與一個Witch

	3. [l4d_current_survivor_progress](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4d_current_survivor_progress): Print survivor progress in flow percents
		* 使用指令顯示人類目前的路程
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.6h (2024-5-26)
		* Update API and inc
		* Support Translation 
		* Update cvars

	* v1.5h (2023-6-20)
		* Require left4dhooks v1.33 or above

	* v1.4h (2023-2-11)
		* Fix plugin does not work if there is no any start safe area in some custom maps
		* Makes Versus Boss Spawns obey cvars

	* v1.3
		* Initial Release
</details>

- - - -
# 中文說明
對抗模式下每一張地圖挑選隨機路程生成一隻Tank與一個Witch

* 原理
	* 此插件控制導演系統，決定何時生成Tank與Witch
		* 假設75%生成Tank，當人類路程走到75%路程，生成Tank
		* Witch同理
		* 由官方指令決定每一關的Tank與Witch生成範圍
		* 每回合只會生成一隻Tank與Witch
	* 🟥 請務必將以下指令寫入文件 ```cfg/server.cfg```，可自行調整
		```php
		// 每張地圖100%生成Tank (0.00 ~ 1.00)
		sm_cvar versus_tank_chance_intro 		"1" //第一關
		sm_cvar versus_tank_chance 				"1" //普通關卡
		sm_cvar versus_tank_chance_finale 		"1" //最後一關

		// 每張地圖100%生成Witch (0.00 ~ 1.00)
		sm_cvar versus_witch_chance_intro 		"1" //第一關
		sm_cvar versus_witch_chance 			"1" //普通關卡
		sm_cvar versus_witch_chance_finale 		"1" //最後一關

		// 決定關卡的Boss生成路程範圍: 25% ~ 85%
		sm_cvar versus_boss_flow_min_intro 		"0.25" //第一關
		sm_cvar versus_boss_flow_max_intro 		"0.85"

		sm_cvar versus_boss_flow_min 			"0.25" //普通關卡
		sm_cvar versus_boss_flow_max 			"0.85"

		sm_cvar versus_boss_flow_min_finale 	"0.25"
		sm_cvar versus_boss_flow_max_finale 	"0.85" //最後一關
		```

* <details><summary>文件設定範例</summary>

	* data/mapinfo.txt
		```php
		"MapInfo"
		{
			"c2m2_fairgrounds" //地圖名
			{
				"tank_ban_flow" //禁止Tank生成的路段
				{
					"tank ban test" //隨便取名
					{
						"min"		"0" //0~20%禁止生成Tank
						"max"		"20"
					}
					"tank ban test 2" //隨便取名
					{
						"min"		"50" //50~80%禁止生成Tank
						"max"		"80"
					}
				}
				"witch_ban_flow" //禁止Witch生成的路段
				{
					"witch ban test"　 //隨便取名
					{
						"min"		"50" //50~100%禁止生成Witch
						"max"		"100"
					}
				}
			}
		}
		```
	> 每一張地圖都有地形或地圖問題，<br/>
	在某些路段生成Tank/Witch會導致Tank/Witch卡住或對人類來說過於艱難生存，<br/>
	(譬如c1m1 Tank生在電梯事件之前一樓樓層無法上來，C2M3 雲霄飛車無限屍潮期間生成Tank)

	* 可用的參數
		```php
		// 1=該地圖禁止生成Tank
		"tank_map_off" "1"

		//1=該地圖禁止生成Witch
		"witch_map_off" "1"

		//1=該地圖有自己固定生成的Tank
		"static_tank_map" "1"

		//1=該地圖有自己固定生成的Witch
		"static_witch_map" "1"

		//1=插件會生成新娘模組的Witch
		"witch_bride_map" "1"
		```
</details>

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/versusbosses_ifier.cfg
		```php
		// If 1, 允許玩家打 !voteboss 發起投票決定Tank/Witch 路程
		l4d_versus_boss_vote_enable "1"

		// 發起!voteboss投票所需的玩家數量 
		l4d_versus_boss_vote_need_player "4"

		// 1=允許生成tank, 0=禁止任何tank生成
		l4d_versus_boss_tank_can_spawn "1"

		// 1=允許生成witch, 0=禁止任何witch生成
		l4d_versus_boss_witch_can_spawn "1"

		// Tank 附近前後5% (10除以2) 避開生成witch
		l4d_versus_boss_avoid_tank_spawn "10"

		// 為1時，強制VScript覆蓋Boss生成效果 (不要修改此指令除非你知道在幹嗎)
		l4d_versus_boss_spawn_cvars "1"

		// 使用指令打印該回合 Tank/Witch 路程時 1=顯示給跟你相同的隊伍所有人, 0=只顯示給自己看
		l4d_versus_boss_global_percent "1"

		// 為1時，聊天框與指令可顯示Tank路程
		l4d_versus_boss_tank_percent "1"

		// 為1時，聊天框與指令可顯示Witch路程
		l4d_versus_boss_witch_percent "1"

		// 為1時，Tank/Witch生成時提示訊息
		l4d_versus_boss_spawn_notify "1"
		```
</details>

* <details><summary>命令中文介紹 (點我展開)</summary>

	* **管理員決定 witch 路程，請在出去安全室之前決定好 (權限：ADMFLAG_BAN)**
		```php
		sm_setwitch <數字>
		```

	* **管理員決定 tank 路程，請在出去安全室之前決定好 (權限：ADMFLAG_BAN)**
		```php
		sm_settank <數字>
		```

	* **打印該回合 Tank/Witch 路程**
		```php
		sm_boss
		sm_tank
		sm_witch
		sm_t
		```
		
	* **投票決定Tank/Witch的路程 ，請在出去安全室之前決定好**
		```php
		sm_voteboss <數字> <數字>
		sm_bossvote <數字> <數字>
		```
</details>
