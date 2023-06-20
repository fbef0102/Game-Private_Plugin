# Description | 內容
Sets a tank and witch spawn point on every map in versus + Makes Versus Boss Spawns obey cvars

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Video | 影片展示
<br/>None

* Image | 圖示
	* display message when leaving out saferoom
		> 出門顯示Boss路程
		<br/>![versusbosses_ifier_1](image/versusbosses_ifier_1.jpg)
	* display message when this plugin spawns tank/witch
		> Boss生成時顯示訊息
		<br/>![versusbosses_ifier_2](image/versusbosses_ifier_2.jpg)

* Apply to | 適用於
	```
	L4D1 versus
	L4D2 versus
	```

* <details><summary>Changelog | 版本日誌</summary>

    * v1.5h (2023-6-20)
        * Require lef4dhooks v1.33 or above

	* v1.4h (2023-2-11)
		* Fix plugin does not work if there is no any start safe area in some custom maps
	    * Makes Versus Boss Spawns obey cvars

	* v1.3
	    * Original Request by Anzu
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	2. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)
	3. [builtinvotes](https://github.com/L4D-Community/builtinvotes/actions)
	4. [[INC] readyup](/left4dead2/scripting/include/readyup.inc)

* Optional | 輔助插件
	1. [readyup](/Plugin_插件/Server_伺服器/readyup): Ready Plugin
		> 準備插件，讓Boss路程預先顯示在Ready Hud上面

* Similar Plugin | 相似插件
	1. [coopbosses_ifier](/Plugin_插件/Coop_戰役模式/coopbosses_ifier): Sets a tank and witch spawn point on every map in coop mode
		> 戰役模式下每一張地圖挑選隨機路程生成一隻Tank與一個Witch

* Related | 相關插件
	1. [l4d_current_survivor_progress](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4d_current_survivor_progress): Print survivor progress in flow percents
		> 使用指令顯示人類目前的路程

* Data Example
	* data/mapinfo.txt
		```php
		"MapInfo"
		{
			"c1m2_streets"　//Map Name
			{
				"tank_map_off" "1" 		//This map is prohibited to spawn tank
				"witch_map_off" "1"	 	//This map is prohibited to spawn witch
			}
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

* <details><summary>Related Official ConVar</summary>

	* write down the following cvars in cfg/server.cfg
		```php
		// Adjust tank spawns: 100% chance on every map (0.00 ~ 1.00)
		sm_cvar versus_tank_chance_intro 		"1" //first map
		sm_cvar versus_tank_chance_finale 		"1" //regular map
		sm_cvar versus_tank_chance 				"1" //final map

		// Adjust witch spawns: 100% chance on every map (0.00 ~ 1.00)
		sm_cvar versus_witch_chance_intro 		"1" //first map
		sm_cvar versus_witch_chance_finale 		"1" //regular map
		sm_cvar versus_witch_chance 			"1" //final map

		// Adjust boss spawn completion rates: Boss have been prevented from spawning before 20% and after 85
		sm_cvar versus_boss_flow_min_intro 		"0.20" //first map
		sm_cvar versus_boss_flow_max_intro 		"0.85"
		sm_cvar versus_boss_flow_min 			"0.25" //regular map
		sm_cvar versus_boss_flow_max 			"0.85"
		sm_cvar versus_boss_flow_min_finale 	"0.20"
		sm_cvar versus_boss_flow_max_finale 	"0.85" //final map
		```
</details>

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/versusbosses_ifier.cfg
		```php
		// Minimum flow amount witches should avoid tank spawns by, by half the value given on either side of the tank spawn
		l4d_versus_boss_avoid_tank_spawn "10"

		// Enable forcing boss spawns to obey boss spawn cvars
		l4d_versus_boss_spawn_cvars "1"

		// Don't override boss spawning rules on Static Tank Spawn maps (c7m1, c13m2)
		l4d_versus_boss_spawn_except_static "1"

		// If 1, Allow for Easy Setup of the Boss Spawns (!voteboss)
		l4d_versus_boss_vote "1"

		// How many players at least to vote Boss Spawns.
		l4d_versus_boss_vote_need_player "4"
		```
</details>

* <details><summary>Command | 命令</summary>

	* **force witch spawn percent before leaving saferoom (Adm required: ADMFLAG_BAN)**
		```php
		sm_setwitch <number>
		```

	* **force tank spawn percent before leaving saferoom (Adm required: ADMFLAG_BAN)**
		```php
		sm_settank <number>
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

- - - -
# 中文說明
對抗模式下每一張地圖挑選隨機路程生成一隻Tank與一個Witch

* 原理
	* 覆蓋原本的導演生成系統，由此插件決定何時生成Tank與Witch
	* 由官方指令與data/mapinfo.txt輔助文件決定每一關的路程範圍，請查看Data設定範例與相關的官方指令中文介紹

* 功能
	* 可決定每一關是否該生成 Tank/Witch
	* 可自行調整關卡，每個章節某些路段禁止生成生成 Tank/Witch
	* 可自行調製整地圖最遠到哪與最近到哪生成 Tank/Witch

* Data設定範例
	* data/mapinfo.txt
		```php
		"MapInfo"
		{
			"c1m2_streets"　//地圖名
			{
				"tank_map_off" "1" 		//該地圖禁止生成Tank
				"witch_map_off" "1"	 	//該地圖禁止生成Witch
			}
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

* <details><summary>相關的官方指令中文介紹 (點我展開)</summary>

	* 以下指令寫入文件 cfg/server.cfg，可自行調整
		```php
		// 每張地圖100%生成Tank (0.00 ~ 1.00)
		sm_cvar versus_tank_chance_intro 		"1" //第一關
		sm_cvar versus_tank_chance_finale 		"1" //普通關卡
		sm_cvar versus_tank_chance 				"1" //最後一關

		// 每張地圖100%生成Witch (0.00 ~ 1.00)
		sm_cvar versus_witch_chance_intro 		"1" //第一關
		sm_cvar versus_witch_chance_finale 		"1" //普通關卡
		sm_cvar versus_witch_chance 			"1" //最後一關

		// 決定關卡的Boss生成路程: 25% ~ 85%
		sm_cvar versus_boss_flow_min_intro 		"0.20" //第一關
		sm_cvar versus_boss_flow_max_intro 		"0.85"
		sm_cvar versus_boss_flow_min 			"0.25" //普通關卡
		sm_cvar versus_boss_flow_max 			"0.85"
		sm_cvar versus_boss_flow_min_finale 	"0.20"
		sm_cvar versus_boss_flow_max_finale 	"0.85" //最後一關
		```
</details>

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/versusbosses_ifier.cfg
		```php
		// Tank 附近前後10% (20除以2) 避開生成witch
		l4d_versus_boss_avoid_tank_spawn "10"

		// 強制VScript並覆蓋Boss生成效果 (不要修改此指令除非你知道在幹嗎)
		l4d_versus_boss_spawn_cvars "1"

		// 如果地圖為固定生成Tank的關卡，則不修改Boss路程 (譬如c7m1, c13m2，不要修改此指令除非你知道在幹嗎)
		l4d_versus_boss_spawn_except_static "1"

		// If 1, 允許玩家打 !voteboss 發起投票決定Tank/Witch 路程
		l4d_versus_boss_vote "1"

		// 發起!voteboss投票所需的玩家數量 
		l4d_versus_boss_vote_need_player "4"
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
