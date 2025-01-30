# Description | 內容
Control items limit on map

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Apply to | 適用於
	```
	L4D1
	L4D2
	```

* <details><summary>How does it work?</summary>

	* On map starts loading 0.5 second later
		* Find all items on the map and control limit
		* Removes items until total numbers match the limit
		* First aid kits、defibrillators、pills、adrenalines、molotovs、pipe bombs、vomitjars、prop tanks、oxy tanks、gas cans、fireworks
	* Modify [data/ItemTracking.cfg](data/ItemTracking.cfg) and control items limit on the map
	* Keep item spawns the same position number on both rounds in versus/scavenge
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	2. [[INC] l4d2_weapons](/L4D_插件/Require_檔案/scripting/include/l4d2_weapons.inc)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/itemtracking.cfg
		```php
		// If 1, Enable the itemtracking
		itemtracking_enable "1"

		// If 1, Keep item spawns the same on both rounds in versus/scavenge
		itemtracking_savespawns_VS "1"

		// If 1, Keep item spawns the same as first sound in coop/realism/survival
		itemtracking_savespawns_CP "0"
		```
</details>

* <details><summary>Data Config</summary>

	* [data/ItemTracking.cfg](data/ItemTracking.cfg)
		> Watch file for more details...
</details>

* <details><summary>Related Official ConVar</summary>

	* write down the following cvars in cfg/server.cfg
		```php
		// Item density, Items per 100 yards square
		// modify if you want
		sm_cvar director_pain_pill_density 		"6.48"
		sm_cvar director_adrenaline_density		"6.48"
		sm_cvar director_defibrillator_density 	"6.48"
		sm_cvar director_molotov_density 		"6.48"
		sm_cvar director_pipe_bomb_density 		"6.48"
		sm_cvar director_vomitjar_density 		"6.48"

		sm_cvar director_propane_tank_density 	"6.48"
		sm_cvar director_gas_can_density 		"6.48"
		sm_cvar director_oxygen_tank_density 	"6.48"
		```
</details>

* <details><summary>Related | 相關插件</summary>

	1. [coopbosses_ifier](https://github.com/fbef0102/Game-Private_Plugin/tree/main/coopbosses_ifier): Sets a tank and witch spawn point on every map in coop mode
		> 戰役模式下每一張地圖挑選隨機路程生成一隻Tank與一個Witch
</details>

* <details><summary>Changelog | 版本日誌</summary>
	
	* v1.3h (2024-12-7)
		* Update data
		* Remove final area
		* Support all maps
		* Remake code
		* control more items: gas cans, prop tanks, oxy tanks, firworks

	* v1.2h (2024-2-19)
		* Support second final area (ex: c2m5)
		* Update Cvars

	* v1.1h (2023-7-3)
		* Support Coop/Realism/Versus/Survival/Scavenge

	* v1.0h
		* Individual plugin
		* More data keyvalue
		* More Cvars
		* Control items in start safe area and in end safe area & in final area

	* v0.0
	    * [From SirPlease/L4D2-Competitive-Rework](https://github.com/SirPlease/L4D2-Competitive-Rework/blob/master/addons/sourcemod/scripting/confoglcompmod/ItemTracking.sp)
</details>

- - - -
# 中文說明
控制地圖上的物品數量與限制

* 原理
	* 地圖載入後的0.5秒後
		* 控制地圖上的物品生成數量或限制
		* 此插件刪除地圖上原有的物品，並非生成新物品
		* 目前能控制的物品: 治療包、電擊器、藥丸、腎上腺素、汽油彈、土製炸彈、膽汁瓶、瓦斯、氧氣灌、汽油桶、煙火盒
	* 設置文件[data/ItemTracking.cfg](data/ItemTracking.cfg)，控制地圖上的物品生成數量或限制
	* 對抗/清道夫模式的第二回合，所有物品位置與數量與第一回合相同

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/itemtracking.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		itemtracking_enable "1"

		// 為1時，對抗/清道夫模式第二回合，強制所有物品位置與數量要與第一回合相同
		itemtracking_savespawns_VS "1"

		// 為1時，戰役/寫實/生存模式第二.三.四......回合之後，強制所有物品位置與數量要與第一回合相同
		itemtracking_savespawns_CP "0"
		```
</details>

* <details><summary>文件設定範例</summary>

	* [data/ItemTracking.cfg](data/ItemTracking.cfg)，控制每一關的物品生成數量與限制
		> 點擊文件查看更多說明...
</details>

* <details><summary>相關的官方指令中文介紹 (點我展開)</summary>

	* 以下指令寫入文件 cfg/server.cfg，可自行調整
		```php
		// 物品生成密度，每 100 碼平方單位生成的數量 (數字越大，地圖上該物品數量越多)
		sm_cvar director_pain_pill_density 		"6.48" // 藥丸
		sm_cvar director_adrenaline_density		"6.48" // 腎上腺素
		sm_cvar director_defibrillator_density 	"6.48" // 電擊器
		sm_cvar director_molotov_density 		"6.48" // 汽油彈
		sm_cvar director_pipe_bomb_density 		"6.48" // 土製炸彈
		sm_cvar director_vomitjar_density 		"6.48" // 膽汁瓶

		sm_cvar director_propane_tank_density 	"6.48" // 瓦斯桶
		sm_cvar director_gas_can_density 		"6.48" // 汽油桶
		sm_cvar director_oxygen_tank_density 	"6.48" // 氧氣灌
		```
</details>