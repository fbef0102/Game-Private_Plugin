# Description | 內容
Sets a tank and witch spawn point based on the percentage of passing the map in coop mode

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Video | 影片展示
<br/>None

* Image | 圖示
	<br/>![coopbosses_ifier_1](image/coopbosses_ifier_1.jpg)
	<br/>![coopbosses_ifier_2](image/coopbosses_ifier_2.jpg)

* <details><summary>How does it work?</summary>

	* This plugin spawns only one tank and one witch each round in coop/realism mode
		* Boss (Tank or Witch) will be spawned when the furthest survivor reach a percentage of map
		* For example
			```php
			// When furthest survivor reach 79% of map completion, the Tank will be spawned.
			// Same algorithm for Witch.
			Tank spawn: 79%,
			Witch spawn: 70%
			```
		* Disable Tank and Witch by director
	* Does not affect boss static spawn by map, for example: C6M1/C13M2/C7M1
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	2. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)
	3. [builtinvotes](https://github.com/fbef0102/Game-Private_Plugin/releases/tag/builtinvotes)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/coopbosses_ifier.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d_coop_boss_enable "1"

		// Max fraction of map flow for tank/witch spawn location in coop
		l4d_coop_boss_flow_max "80"

		// Min fraction of map flow for tank/witch spawn location in coop
		l4d_coop_boss_flow_min "20"

		// If 1, Allow players to use !voteboss set boss spawns.
		l4d_coop_boss_vote "1"

		// How many players at least to vote Boss Spawns.
		l4d_coop_boss_vote_need_player "4"

		// Minimum flow amount witches should avoid tank spawns by, by half the value given on either side of the tank spawn
		l4d_coop_boss_avoid_tank_spawn "10"

		// If 1, Disable Tank spawn in First Map
		l4d_coop_boss_first_tank_spawn_disable "0"

		// If 1, Disable Witch spawn in First Map
		l4d_coop_boss_first_witch_spawn_disable "0"
		
		// If 1, Disable Tank spawn in Final Map
		l4d_coop_boss_final_tank_spawn_disable "1"

		// If 1, Disable Witch spawn in Final Map
		l4d_coop_boss_final_witch_spawn_disable "1"

		// Display which message? Add numbers together
		// 1=Tank has spawned, 2=Witch has spawned, 4=Tank flow percentage, 8=Witch flow percentage
		l4d_coop_boss_chat_flag "15"

		// 1=Disable director tank spawn and witch spawn, 0=Won't affect director
		l4d_coop_boss_disable_director "1"
		```
</details>

* <details><summary>Command | 命令</summary>

	* **Adm forces witch spawn percent before leaving saferoom (Adm required: ADMFLAG_BAN)**
		```php
		sm_setwitch <number>
		```

	* **Adm forces tank spawn percent before leaving saferoom (Adm required: ADMFLAG_BAN)**
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

* <details><summary>Data Config</summary>

	* [data/mapinfo.txt](data/mapinfo.txt)
		> Watch file for more details...
</details>

* Apply to | 適用於
	```
	L4D1 Coop
	L4D2 Coop/Realism
	```

* <details><summary>Related | 相關插件</summary>

	1. [readyup](/L4D_插件/Server_伺服器/readyup): Ready Plugin
		* 準備插件，讓Boss路程預先顯示在Ready Hud上面

	2. [versusbosses_ifier](/L4D_插件/Versus_對抗模式/versusbosses_ifier): Sets a tank and witch spawn point on every map in versus mode
		* 對抗模式下每一張地圖挑選隨機路程生成一隻Tank與一個Witch

	3. [l4d_current_survivor_progress](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4d_current_survivor_progress): Print survivor progress in flow percents
		* 使用指令顯示人類目前的路程

	4. [l4d_tank_spawn](/L4D_插件/Tank_坦克/l4d_tank_spawn): Spawn multi Tanks on the map and final rescue
		* 一個關卡中或救援期間生成多隻Tank，對抗模式也適用

	5. [l4d_witch_spawn](/L4D_插件/Witch_女巫/l4d_witch_spawn): Spawn lots of witches on the map
		* 遊戲開始後每隔一段時間在地圖上生成Witch
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.9h (2025-3-15)
	* v1.8h (2024-10-6)
		* Update cvars
		* Update data

	* v1.7h (2023-6-20)
		* Require left4dhooks v1.33 or above

	* v1.6h (2023-3-14)
		* Add convar to enable or disable plugin
		* Add convar to enable or disable boss spawn in first map
		
	* v1.5h (2023-2-14)
		* Fix director still spawns tank and witch if we disable boss spawn in current map

	* v1.4h (2023-2-11)
		* Fix plugin does not work if there is no any start safe area in some custom maps

	* v1.3
		* Initial Release
</details>

- - - -
# 中文說明
戰役模式下每一張地圖挑選隨機路程生成一隻Tank與一個Witch

* 原理
	* 關閉導演生成系統，由此插件決定何時生成Tank與Witch
		* 假設75%生成Tank，當人類路程走到75%路程，生成一個Tank
		* 假設70%生成Witch，當人類路程走到70%路程，生成一個Witch
			```php
			Tank spawn: 75%,
			Witch spawn: 70%
			```
		* 由插件指令決定每一關的Tank與Witch生成範圍
		* 每回合只會生成一隻Tank與Witch
	* 也適用於寫實模式
	* 不影響有固定刷Tank/Witch的地圖，譬如C6M1/C13M2/C7M1

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/coopbosses_ifier.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		l4d_coop_boss_enable "1"

		// 最遠80%生成 Tank/witch
		l4d_coop_boss_flow_max "80"

		// 最近20%生成 Tank/witch
		l4d_coop_boss_flow_min "20"

		// If 1, 允許玩家打 !voteboss 發起投票決定Tank/Witch 路程
		l4d_coop_boss_vote "1"

		// 發起!voteboss投票所需的玩家數量 
		l4d_coop_boss_vote_need_player "4"

		// Tank 附近前後5% (10除以2) 避開生成witch
		l4d_coop_boss_avoid_tank_spawn "10"

		// 如果為1，第一關預設不生成Tank
		l4d_coop_boss_first_tank_spawn_disable "0"

		// 如果為1，第一關預設不生成Witch
		l4d_coop_boss_first_witch_spawn_disable "0"

		// 如果為1，最後一關預設不生成Tank
		l4d_coop_boss_final_tank_spawn_disable "1"

		// 如果為1，最後一關預設不生成Witch
		l4d_coop_boss_final_witch_spawn_disable "1"

		// 顯示以下哪些訊息給玩家看? 請將數字相加
		// 1=Tank已復活, 2=Witch已復活, 4=Witch路程, 8=Tank路程
		l4d_coop_boss_chat_flag "15"

		// 1=關閉Tank與Witch導演生成系統, 0=不要影響導演系統
		l4d_coop_boss_disable_director "1"
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

* <details><summary>文件設定範例</summary>

	* [data/mapinfo.txt](data/mapinfo.txt)
		> 點擊文件查看更多說明...
</details>