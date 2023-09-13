# Description | 內容
Control items limit on map

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Video | 影片展示
<br/>None

* Image | 圖示
<br/>None

* <details><summary>How does it work?</summary>

	* Detect all items on round start and remove items if limit reach
	* Modify ```data/mapinfo.txt``` and control items limit on the map
		* control items in start safe area
		* control items outside saferoom/final area
		* control items in end safe area & in final area
</details>

* Require | 必要安裝
	1. [[INC] l4d2_weapons](/left4dead2/scripting/include/l4d2_weapons.inc)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/itemtracking.cfg
		```php
		// If 1, Enable the itemtracking
		itemtracking_enable "1"

		// If 1, Keep item spawns the same on both rounds in versus/scavenge
		itemtracking_savespawns_VS "1"

		// If 1, Keep item spawns the same as first sound in coop/realism/survival
		itemtracking_savespawns_CP "0"

		// Limits the number of adrenaline shots in end safe area & in final area on each map by default. -1: no limit; >=0: limit to cvar value
		adrenaline_end_area_limit "-1"

		// Limits the number of adrenaline shots outside saferoom & outside final area on each map by default. -1: no limit; >=0: limit to cvar value
		adrenaline_limit "-1"

		// Limits the number of adrenaline shots in start safe area on each map by default. -1: no limit; >=0: limit to cvar value
		adrenaline_start_area_limit "-1"

		// Limits the number of defibrillators in end safe area & in final area on each map by default. -1: no limit; >=0: limit to cvar value
		defib_end_area_limit "-1"

		// Limits the number of defibrillators outside saferoom & outside final area on each map by default. -1: no limit; >=0: limit to cvar value
		defib_limit "-1"

		// Limits the number of defibrillators in start safe area on each map by default. -1: no limit; >=0: limit to cvar value
		defib_start_area_limit "-1"

		// Limits the number of first aid kits in end safe area & in final area on each map by default. -1: no limit; >=0: limit to cvar value
		kits_end_area_limit "-1"

		// Limits the number of first aid kits outside saferoom & outside final area on each map by default. -1: no limit; >=0: limit to cvar value
		kits_limit "-1"

		// Limits the number of first aid kits in start safe area on each map by default. -1: no limit; >=0: limit to cvar value
		kits_start_area_limit "-1"

		// Limits the number of molotovs in end safe area & in final area on each map by default. -1: no limit; >=0: limit to cvar value
		molotov_end_area_limit "-1"

		// Limits the number of molotovs outside saferoom & outside final area on each map by default. -1: no limit; >=0: limit to cvar value
		molotov_limit "-1"

		// Limits the number of molotovs in start safe area on each map by default. -1: no limit; >=0: limit to cvar value
		molotov_start_area_limit "-1"

		// Limits the number of pain pills in end safe area & in final area on each map by default. -1: no limit; >=0: limit to cvar value
		pills_end_area_limit "-1"

		// Limits the number of pain pills outside saferoom & outside final area on each map by default. -1: no limit; >=0: limit to cvar value
		pills_limit "-1"

		// Limits the number of pain pills in start safe area on each map by default. -1: no limit; >=0: limit to cvar value
		pills_start_area_limit "-1"

		// Limits the number of pipe bombs in end safe area & in final area on each map by default. -1: no limit; >=0: limit to cvar value
		pipebomb_end_area_limit "-1"

		// Limits the number of pipe bombs outside saferoom & outside final area on each map by default. -1: no limit; >=0: limit to cvar value
		pipebomb_limit "-1"

		// Limits the number of pipe bombs in start safe area on each map by default. -1: no limit; >=0: limit to cvar value
		pipebomb_start_area_limit "-1"

		// Limits the number of bile bombs in end safe area & in final area on each map by default. -1: no limit; >=0: limit to cvar value
		vomitjar_end_area_limit "-1"

		// Limits the number of bile bombs outside saferoom & outside final area on each map by default. -1: no limit; >=0: limit to cvar value
		vomitjar_limit "-1"

		// Limits the number of bile bombs in start safe area on each map by default. -1: no limit; >=0: limit to cvar value
		vomitjar_start_area_limit "-1"
		```
</details>

* <details><summary>Command | 命令</summary>

	None
</details>

* <details><summary>Data Config</summary>

	* data/mapinfo.txt
		```php
		"MapInfo"
		{
			"c4m1_milltown_a" //Map Name
			{
				"start_point"		"-6008.747070 7381.954590 192.909424" //start safe area center point (do not modify)
				"end_point"		"3993.458008 -1598.952271 294.281250" //end safe area/final area center point (do not modify)
				"start_dist"		"100.000000" //start safe area distance (do not modify)
				"start_extra_dist"	"500.000000" //start safe area distance extra (do not modify)
				"end_dist"		"275.000000" //end safe area/final area distance extra (do not modify)
				"ItemLimits_Outside" // control items outside saferoom/final area
				{
					"pain_pills"	"2" // Randomly remove pills until 2 pills left outside saferoom/final area (-1=No Limit;0=Remove All, use cvar "pills_limit" if no keyvalue)
					"adrenaline"	"2" // Randomly Remove adrenalines until 2 adrenalines left outside saferoom/final area (-1=No Limit;0=Remove All, use cvar "adrenaline_limit" if no keyvalue)
					"first_aid_kit"	"2" // Randomly Remove kits until 2 kits left outside saferoom/final area (-1=No Limit;0=Remove All, use cvar "kits_limit" if no keyvalue)
					"defibrillator"	"2" // Randomly Remove defibrillators until 2 defibrillators left outside saferoom/final area (-1=No Limit;0=Remove All, use cvar "defib_limit" if no keyvalue)
					"pipe_bomb"		"1" // Randomly Remove pipebombs until 1 pipe_bomb left outside saferoom/final area (-1=No Limit;0=Remove All, use cvar "pipebomb_limit" if no keyvalue)
					"molotov"		"1" // Randomly Remove molotovs until 1 molotov left outside saferoom/final area (-1=No Limit;0=Remove All, use cvar "molotov_limit" if no keyvalue)
					"vomitjar"		"1" // Randomly Remove vomitjars until 1 vomitjar left outside saferoom/final area (-1=No Limit;0=Remove All, use cvar "vomitjar_limit" if no keyvalue)
				}
				"ItemLimits_StartArea"	// control items in start safe area
				{
					"pain_pills"	"2" // Randomly remove pills until 2 pills left in start safe area (-1=No Limit;0=Remove All, use cvar "pills_start_area_limit" if no keyvalue)
					"adrenaline"	"2" // Randomly Remove adrenalines until 2 adrenalines left in start safe area (-1=No Limit;0=Remove All, use cvar "adrenaline_start_area_limit" if no keyvalue)
					"first_aid_kit"	"4" // Randomly Remove kits until 4 kits left in start safe area (-1=No Limit;0=Remove All, use cvar "kits_start_area_limit" if no keyvalue)
					"defibrillator"	"2" // Randomly Remove defibrillators until 2 defibrillators left in start safe area (-1=No Limit;0=Remove All, use cvar "defib_start_area_limit" if no keyvalue)
					"pipe_bomb"		"1" // Randomly Remove pipebombs until 1 pipe_bomb left in start safe area (-1=No Limit;0=Remove All, use cvar "pipebomb_start_area_limit" if no keyvalue)
					"molotov"		"1" // Randomly Remove molotovs until 1 molotov left in start safe area (-1=No Limit;0=Remove All, use cvar "molotov_start_area_limit" if no keyvalue)
					"vomitjar"		"1" // Randomly Remove vomitjars until 1 vomitjar left in start safe area (-1=No Limit;0=Remove All, use cvar "vomitjar_start_area_limit" if no keyvalue)
				}
				"ItemLimits_EndArea" // control items in end safe area & in final area
				{
					"pain_pills"	"2" // Randomly remove pills until 2 pills left in end safe area & in final area (-1=No Limit;0=Remove All, use cvar "pills_end_area_limit" if no keyvalue)
					"adrenaline"	"2" // Randomly Remove adrenalines until 2 adrenalines left in end safe area & in final area (-1=No Limit;0=Remove All, use cvar "adrenaline_end_area_limit" if no keyvalue)
					"first_aid_kit"	"4" // Randomly Remove kits until 4 kits left in end safe area & in final area (-1=No Limit;0=Remove All, use cvar "kits_end_area_limit" if no keyvalue)
					"defibrillator"	"2" // Randomly Remove defibrillators until 2 defibrillators left in end safe area & in final area (-1=No Limit;0=Remove All, use cvar "defib_end_area_limit" if no keyvalue)
					"pipe_bomb"		"1" // Randomly Remove pipebombs until 1 pipe_bomb left in end safe area & in final area (-1=No Limit;0=Remove All, use cvar "pipebomb_end_area_limit" if no keyvalue)
					"molotov"		"1" // Randomly Remove molotovs until 1 molotov left in end safe area & in final area (-1=No Limit;0=Remove All, use cvar "molotov_end_area_limit" if no keyvalue)
					"vomitjar"		"1" // Randomly Remove vomitjars until 1 vomitjar left in end safe area & in final area (-1=No Limit;0=Remove All, use cvar "vomitjar_end_area_limit" if no keyvalue)
				}
			}
		}
		```
</details>

* <details><summary>Related Official ConVar</summary>

	* write down the following cvars in cfg/server.cfg
		```php
		//Item density, Items per 100 yards square
		sm_cvar director_pain_pill_density 		"6.48"
		sm_cvar director_adrenaline_density		"6.48"
		sm_cvar director_defibrillator_density 	"6.48"
		sm_cvar director_molotov_density 		"6.48"
		sm_cvar director_pipe_bomb_density 		"6.48"
		sm_cvar director_vomitjar_density 		"6.48"
		```
</details>

* Apply to | 適用於
	```
	L4D2
	```

* <details><summary>Related | 相關插件</summary>

	1. [coopbosses_ifier](https://github.com/fbef0102/Game-Private_Plugin/tree/main/coopbosses_ifier): Sets a tank and witch spawn point on every map in coop mode
		> 戰役模式下每一張地圖挑選隨機路程生成一隻Tank與一個Witch
</details>

* <details><summary>Changelog | 版本日誌</summary>
	
	* v1.1h (2023-7-3)
		* Support Coop/Realism/Versus/Survival/Scavenge

	* v1.0h
		* Individual plugin
		* More data keyvalue
		* More Cvars
		* Control items in start safe area and in end safe area & in final area

	* v0.0
	    * [From confoglcompmod in SirPlease/L4D2-Competitive-Rework](https://github.com/SirPlease/L4D2-Competitive-Rework/blob/master/addons/sourcemod/scripting/confoglcompmod/ItemTracking.sp)
</details>

- - - -
# 中文說明
控制地圖上的物品數量與限制

* 原理
	* 設置文件```data/mapinfo.txt```控制地圖上的物品生成數量或限制
	* 目前能控制的物品: 治療包、電擊器、藥丸、腎上腺素、汽油彈、土製炸彈、膽汁瓶
	* 此插件刪除地圖上原有的物品，並不是自動生成物品
	* 戰役/對抗/寫實模式下控制的區域有三種
		1. 安全區域&救援區域外 
		2. 起始安全區域內 
		3. 終點安全區域&救援區域內
	* 生存/清道夫模式下控制全部的區域
	* 支援所有官方地圖，三方圖請自行新增與修改

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/itemtracking.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		itemtracking_enable "1"

		// 為1時，對抗/清道夫模式第二回合，強制所有物品位置與數量要與第一回合相同
		itemtracking_savespawns_VS "1"

		// 為1時，戰役/寫實/生存模式第二.三.四......回合之後，強制所有物品位置與數量要與第一回合相同
		itemtracking_savespawns_CP "0"

		// 終點安全區域&救援區域內腎上腺素數量限制（-1=不移除;0=移除全部)
		adrenaline_end_area_limit "-1"

		// 安全區域/救援區域外腎上腺素數量限制（-1=不移除;0=移除全部)
		adrenaline_limit "-1"

		// 起始安全區域內腎上腺素數量限制（-1=不移除;0=移除全部)
		adrenaline_start_area_limit "-1"

		// 終點安全區域&救援區域內電擊器數量限制（-1=不移除;0=移除全部)
		defib_end_area_limit "-1"

		// 安全區域/救援區域外電擊器數量限制（-1=不移除;0=移除全部)
		defib_limit "-1"

		// 起始安全區域內電擊器數量限制（-1=不移除;0=移除全部)
		defib_start_area_limit "-1"

		// 終點安全區域&救援區域內治療包數量限制（-1=不移除;0=移除全部)
		kits_end_area_limit "-1"

		// 安全區域/救援區域外治療包數量限制（-1=不移除;0=移除全部)
		kits_limit "-1"

		// 起始安全區域內治療包數量限制（-1=不移除;0=移除全部)
		kits_start_area_limit "-1"

		// 終點安全區域&救援區域內汽油彈數量限制（-1=不移除;0=移除全部)
		molotov_end_area_limit "-1"

		// 安全區域/救援區域外汽油彈數量限制（-1=不移除;0=移除全部)
		molotov_limit "-1"

		// 起始安全區域內汽油彈數量限制（-1=不移除;0=移除全部)
		molotov_start_area_limit "-1"

		// 終點安全區域&救援區域內藥丸數量限制（-1=不移除;0=移除全部)
		pills_end_area_limit "-1"

		// 安全區域/救援區域外藥丸數量限制（-1=不移除;0=移除全部)
		pills_limit "-1"

		// 終點安全區域&救援區域內藥丸數量限制（-1=不移除;0=移除全部)
		pills_start_area_limit "-1"

		// 終點安全區域&救援區域內土製炸彈數量限制（-1=不移除;0=移除全部)
		pipebomb_end_area_limit "-1"

		// 安全區域/救援區域外土製炸彈數量限制（-1=不移除;0=移除全部)
		pipebomb_limit "-1"

		// 終點安全區域&救援區域內土製炸彈數量限制（-1=不移除;0=移除全部)
		pipebomb_start_area_limit "-1"

		// 終點安全區域&救援區域內膽汁瓶數量限制（-1=不移除;0=移除全部)
		vomitjar_end_area_limit "-1"

		// 安全區域/救援區域外膽汁瓶數量限制（-1=不移除;0=移除全部)
		vomitjar_limit "-1"

		// 終點安全區域&救援區域內膽汁瓶數量限制（-1=不移除;0=移除全部)
		vomitjar_start_area_limit "-1"
		```
</details>

* <details><summary>文件設定範例</summary>

	* ```data/mapinfo.txt```控制每一關的物品生成數量與限制
		```php
		"MapInfo"
		{
			"c4m1_milltown_a" //地圖名
			{
				"start_point"		"-6008.747070 7381.954590 192.909424" //起始安全區域中心點 (不要亂改)
				"end_point"		"3993.458008 -1598.952271 294.281250" //終點安全區域/救援區域中心點(不要亂改)
				"start_dist"		"100.000000" //起始安全區域範圍 (不要亂改)
				"start_extra_dist"	"500.000000" //起始安全區域額外範圍 (不要亂改)
				"end_dist"		"275.000000" //終點安全區域/救援區域範圍 (不要亂改)
				"ItemLimits_Outside" //安全區域&救援區域外
				{
					"pain_pills"    "2" //找到地圖上在安全區域/救援區域外所有藥丸，然後隨機挑選只留下兩顆藥丸，其餘的藥丸全部移除（-1=不移除;0=移除全部，如果沒有寫此行，預設使用指令pills_limit)
					"adrenaline"    "2" //找到地圖上在安全區域/救援區域外所有腎上腺素，然後隨機挑選只留下兩個腎上腺素，其餘的腎上腺素全部移除（-1=不移除;0=移除全部，如果沒有寫此行，預設使用指令adrenaline_limit)
					"first_aid_kit" "2" //找到地圖上在安全區域/救援區域外所有治療包，然後隨機挑選只留下兩個治療包，其餘的全部移除（-1=不移除;0=移除全部，如果沒有寫此行，預設使用指令kits_limit)
					"defibrillator" "2" //找到地圖上在安全區域/救援區域外所有電擊器，然後隨機挑選只留下兩個電擊器，其餘的全部移除（-1=不移除;0=移除全部，如果沒有寫此行，預設使用指令defib_limit)
					"pipe_bomb"     "1" //找到地圖上在安全區域/救援區域外所有土製炸彈，然後隨機挑選只留下1個，其餘的全部移除（-1=不移除;0=移除全部，如果沒有寫此行，預設使用指令pipebomb_limit)
					"molotov"       "1" //找到地圖上在安全區域/救援區域外所有汽油彈，然後隨機挑選只留下1瓶，其餘的全部移除（-1=不移除;0=移除全部，如果沒有寫此行，預設使用指令molotov_limit)
					"vomitjar"      "1" //找到地圖上在安全區域/救援區域外所有膽汁瓶，然後隨機挑選只留下1瓶，其餘的全部移除（-1=不移除;0=移除全部，如果沒有寫此行，預設使用指令vomitjar_limit)
				}
				"ItemLimits_StartArea" //起始安全區域內
				{
					"pain_pills"    "2" //找到地圖上在起始安全區域內所有藥丸，然後隨機挑選只留下兩顆藥丸，其餘的藥丸全部移除（-1=不移除;0=移除全部，如果沒有寫此行，預設使用指令pills_start_area_limit)
					"adrenaline"    "2" //找到地圖上在起始安全區域內所有腎上腺素，然後隨機挑選只留下兩個腎上腺素，其餘的腎上腺素全部移除（-1=不移除;0=移除全部，如果沒有寫此行，預設使用指令adrenaline_start_area_limit)
					"first_aid_kit" "4" //找到地圖上在起始安全區域內所有治療包，然後隨機挑選只留下4個治療包，其餘的全部移除（-1=不移除;0=移除全部，如果沒有寫此行，預設使用指令kits_start_area_limit)
					"defibrillator" "2" //找到地圖上在起始安全區域內所有電擊器，然後隨機挑選只留下兩個電擊器，其餘的全部移除（-1=不移除;0=移除全部，如果沒有寫此行，預設使用指令defib_start_area_limit)
					"pipe_bomb"     "1" //找到地圖上在起始安全區域內所有土製炸彈，然後隨機挑選只留下1個，其餘的全部移除（-1=不移除;0=移除全部，如果沒有寫此行，預設使用指令pipebomb_start_area_limit)
					"molotov"       "1" //找到地圖上在起始安全區域內所有汽油彈，然後隨機挑選只留下1瓶，其餘的全部移除（-1=不移除;0=移除全部，如果沒有寫此行，預設使用指令molotov_start_area_limit)
					"vomitjar"      "1" //找到地圖上在起始安全區域內所有膽汁瓶，然後隨機挑選只留下1瓶，其餘的全部移除（-1=不移除;0=移除全部，如果沒有寫此行，預設使用指令vomitjar_start_area_limit)
				}
				"ItemLimits_EndArea" //終點安全區域&救援區域內
				{
					"pain_pills"    "2" //找到地圖上在終點安全區域&救援區域內所有藥丸，然後隨機挑選只留下兩顆藥丸，其餘的藥丸全部移除（-1=不移除;0=移除全部，如果沒有寫此行，預設使用指令pills_end_area_limit)
					"adrenaline"    "2" //找到地圖上在終點安全區域&救援區域內所有腎上腺素，然後隨機挑選只留下兩個腎上腺素，其餘的腎上腺素全部移除（-1=不移除;0=移除全部，如果沒有寫此行，預設使用指令adrenaline_end_area_limit)
					"first_aid_kit" "4" //找到地圖上在終點安全區域&救援區域內所有治療包，然後隨機挑選只留下4個治療包，其餘的全部移除（-1=不移除;0=移除全部，如果沒有寫此行，預設使用指令kits_end_area_limit)
					"defibrillator" "2" //找到地圖上在終點安全區域&救援區域內所有電擊器，然後隨機挑選只留下兩個電擊器，其餘的全部移除（-1=不移除;0=移除全部，如果沒有寫此行，預設使用指令defib_end_area_limit)
					"pipe_bomb"     "1" //找到地圖上在終點安全區域&救援區域內所有土製炸彈，然後隨機挑選只留下1個，其餘的全部移除（-1=不移除;0=移除全部，如果沒有寫此行，預設使用指令pipebomb_end_area_limit)
					"molotov"       "1" //找到地圖上在終點安全區域&救援區域內所有汽油彈，然後隨機挑選只留下1瓶，其餘的全部移除（-1=不移除;0=移除全部，如果沒有寫此行，預設使用指令molotov_end_area_limit)
					"vomitjar"      "1" //找到地圖上在終點安全區域&救援區域內所有膽汁瓶，然後隨機挑選只留下1瓶，其餘的全部移除（-1=不移除;0=移除全部，如果沒有寫此行，預設使用指令vomitjar_end_area_limit)
				}
			}
		}
		```
</details>

* <details><summary>相關的官方指令中文介紹 (點我展開)</summary>

	* 以下指令寫入文件 cfg/server.cfg，可自行調整
		```php
		//物品生成密度，每 100 碼平方單位生成的數量 (數字越大，地圖上該物品數量越多)
		sm_cvar director_pain_pill_density 		"6.48"
		sm_cvar director_adrenaline_density		"6.48"
		sm_cvar director_defibrillator_density 	"6.48"
		sm_cvar director_molotov_density 		"6.48"
		sm_cvar director_pipe_bomb_density 		"6.48"
		sm_cvar director_vomitjar_density 		"6.48"
		```
</details>

* <details><summary>如何自行新增三方圖</summary>

	* data/mapinfo.txt
		```php
		"MapInfo"
		{
			"xxxxxx" //三方地圖名
			{
				"start_point"		"x y z" //想像起始安全室為立方體空間，start_point為立方體的中心點
				"end_point"			"x y z" //想像終點安全室或救援區域為立方體空間，end_point為立方體的中心點
				"start_dist"		"100" 	//起始安全室立方體的邊長 (短的一邊)，沒有寫的話預設是100
				"start_extra_dist"	"150" 	//起始安全室立方體的邊長 (長的一邊)，沒有寫的話預設是150
				"end_dist"			"200" 	//終點安全室或救援區域立方體的邊長，沒有寫的話預設是200
			}
		}
		```
</details>
