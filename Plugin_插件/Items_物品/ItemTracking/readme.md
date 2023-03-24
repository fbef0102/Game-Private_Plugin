# Description | 內容
Control items limit on map

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Video | 影片展示
<br/>None

* Image | 圖示
<br/>None

* Apply to | 適用於
```
L4D2 Coop/Versus/Realism
```

* <details><summary>Changelog | 版本日誌</summary>
	
	* v1.0h
	    * Request by Anzu
		* Individual plugin
		* More data keyvalue
		* More Cvars
		* Control items in start safe area and in end safe area & final area

	* v0.0
	    * [From confoglcompmod in SirPlease/L4D2-Competitive-Rework](https://github.com/SirPlease/L4D2-Competitive-Rework/blob/master/addons/sourcemod/scripting/confoglcompmod/ItemTracking.sp)
</details>

* Require | 必要安裝
	1. [[INC] l4d2_weapons](https://github.com/fbef0102/Game-Private_Plugin/blob/main/left4dead2/scripting/include/l4d2_weapons.inc)

* Related | 相關插件
	1. [coopbosses_ifier](https://github.com/fbef0102/Game-Private_Plugin/tree/main/coopbosses_ifier): Sets a tank and witch spawn point on every map in coop mode
		> 戰役模式下每一張地圖挑選隨機路程生成一隻Tank與一個Witch

* Data Example
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
			"ItemLimits_EndArea" // control items in end safe area & final area
			{
				"pain_pills"	"2" // Randomly remove pills until 2 pills left in end safe area & final area (-1=No Limit;0=Remove All, use cvar "pills_end_area_limit" if no keyvalue)
				"adrenaline"	"2" // Randomly Remove adrenalines until 2 adrenalines left in end safe area & final area (-1=No Limit;0=Remove All, use cvar "adrenaline_end_area_limit" if no keyvalue)
				"first_aid_kit"	"4" // Randomly Remove kits until 4 kits left in end safe area & final area (-1=No Limit;0=Remove All, use cvar "kits_end_area_limit" if no keyvalue)
				"defibrillator"	"2" // Randomly Remove defibrillators until 2 defibrillators left in end safe area & final area (-1=No Limit;0=Remove All, use cvar "defib_end_area_limit" if no keyvalue)
				"pipe_bomb"		"1" // Randomly Remove pipebombs until 1 pipe_bomb left in end safe area & final area (-1=No Limit;0=Remove All, use cvar "pipebomb_end_area_limit" if no keyvalue)
				"molotov"		"1" // Randomly Remove molotovs until 1 molotov left in end safe area & final area (-1=No Limit;0=Remove All, use cvar "molotov_end_area_limit" if no keyvalue)
				"vomitjar"		"1" // Randomly Remove vomitjars until 1 vomitjar left in end safe area & final area (-1=No Limit;0=Remove All, use cvar "vomitjar_end_area_limit" if no keyvalue)
			}
		}
	}
	```

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

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/itemtracking.cfg
		```php
		// Limits the number of adrenaline shots in end safe area & final area on each map by default. -1: no limit; >=0: limit to cvar value
		adrenaline_end_area_limit "-1"

		// Limits the number of adrenaline shots on each map by default. -1: no limit; >=0: limit to cvar value
		adrenaline_limit "-1"

		// Limits the number of adrenaline shots in start safe area on each map by default. -1: no limit; >=0: limit to cvar value
		adrenaline_start_area_limit "-1"

		// Limits the number of defibrillators in end safe area & final area on each map by default. -1: no limit; >=0: limit to cvar value
		defib_end_area_limit "-1"

		// Limits the number of defibrillators on each map by default. -1: no limit; >=0: limit to cvar value
		defib_limit "-1"

		// Limits the number of defibrillators in start safe area on each map by default. -1: no limit; >=0: limit to cvar value
		defib_start_area_limit "-1"

		// If 1, Enable the itemtracking
		itemtracking_enable "1"

		// If 1, Keep item spawns the same on both rounds (usually enable in versus)
		itemtracking_savespawns "1"

		// Limits the number of first aid kits in end safe area & final area on each map by default. -1: no limit; >=0: limit to cvar value
		kits_end_area_limit "-1"

		// Limits the number of first aid kits on each map by default. -1: no limit; >=0: limit to cvar value
		kits_limit "-1"

		// Limits the number of first aid kits in start safe area on each map by default. -1: no limit; >=0: limit to cvar value
		kits_start_area_limit "-1"

		// Limits the number of molotovs in end safe area & final area on each map by default. -1: no limit; >=0: limit to cvar value
		molotov_end_area_limit "-1"

		// Limits the number of molotovs on each map by default. -1: no limit; >=0: limit to cvar value
		molotov_limit "-1"

		// Limits the number of molotovs in start safe area on each map by default. -1: no limit; >=0: limit to cvar value
		molotov_start_area_limit "-1"

		// Limits the number of pain pills in end safe area & final area on each map by default. -1: no limit; >=0: limit to cvar value
		pills_end_area_limit "-1"

		// Limits the number of pain pills on each map by default. -1: no limit; >=0: limit to cvar value
		pills_limit "-1"

		// Limits the number of pain pills in start safe area on each map by default. -1: no limit; >=0: limit to cvar value
		pills_start_area_limit "-1"

		// Limits the number of pipe bombs in end safe area & final area on each map by default. -1: no limit; >=0: limit to cvar value
		pipebomb_end_area_limit "-1"

		// Limits the number of pipe bombs on each map by default. -1: no limit; >=0: limit to cvar value
		pipebomb_limit "-1"

		// Limits the number of pipe bombs in start safe area on each map by default. -1: no limit; >=0: limit to cvar value
		pipebomb_start_area_limit "-1"

		// Limits the number of bile bombs in end safe area & final area on each map by default. -1: no limit; >=0: limit to cvar value
		vomitjar_end_area_limit "-1"

		// Limits the number of bile bombs on each map by default. -1: no limit; >=0: limit to cvar value
		vomitjar_limit "-1"

		// Limits the number of bile bombs in start safe area on each map by default. -1: no limit; >=0: limit to cvar value
		vomitjar_start_area_limit "-1"
		```
</details>

* <details><summary>Command | 命令</summary>

	None
</details>

- - - -
# 中文說明
控制地圖上的物品數量與限制

* 原理
	* 覆蓋原本的導演生成系統，由此插件控制地圖上的物品生成數量或限制，參見下方Data設定範例
	* 目前能控制的物品有治療包、電擊器、藥丸、腎上腺素、汽油彈、土製炸彈、膽汁瓶
	* 目前能控制的區域有三種: 1. 安全區域&救援區域外 2. 起始安全區域內 3. 終點安全區域&救援區域內
	* 不影響安全區域內的物品
	* 支援所有官方地圖，三方圖請自行新增與修改

* 功能
	1. 可決定每一關的物品生成數量與限制
	2. 第二回合之後強制所有物品位置與數量要與第一關相同

* Data設定範例
	* data/mapinfo.txt
	```php
	"MapInfo"
	{
		"start_point"		"-6008.747070 7381.954590 192.909424" //起始安全區域中心點 (不要亂改)
		"end_point"		"3993.458008 -1598.952271 294.281250" //終點安全區域/救援區域中心點(不要亂改)
		"start_dist"		"100.000000" //始安全區域範圍 (不要亂改)
		"start_extra_dist"	"500.000000" //始安全區域額外範圍 (不要亂改)
		"end_dist"		"275.000000" //終點安全區域/救援區域範圍 (不要亂改)
		"c4m1_milltown_a" //地圖名
		{
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
