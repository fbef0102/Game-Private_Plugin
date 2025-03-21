# Description | 內容
Control weapons and items limit on map

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
		* Find all weapons and items on the map and control limit
		* Removes weapons and items until total numbers match the limit
			* First aid kits, defibrillators, pills, adrenalines, molotovs, pipe bombs, vomitjars, prop tanks, oxy tanks, gas cans, fireworks
			* Melee weapons, chainsaws
			* Pistol, magnum pistols
			* All primary weapons
	* Modify [data/ItemTracking.cfg](data/ItemTracking.cfg) and control weapons and items limit on the map
		* Click file for more details...
	* Keep item spawns the same position number on both rounds in versus/scavenge
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	2. [[INC] l4d2_weapons](/L4D_插件/Require_檔案/scripting/include/l4d2_weapons.inc)

* <details><summary>Support | 支援插件</summary>

	1. [l4d2_replace_gun_item](/L4D_插件/Items_物品/l4d2_replace_gun_item): Delete weapons and items on the map and replace guns/items/melees with other guns/items/melees
		* 刪除地圖上的大槍、治療包、近戰、其他投擲物與物品，並替換成其他武器、物品、近戰
</details>

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

* <details><summary>Related Official ConVar</summary>

	* You can ignore the following convars.

	| ConVar/Command  				| Parameters or default value	   			| Effect|
	| -------------|:-----------------:|:-------------:|
	| director_adrenaline_density 					| 6.48 	| Adrenaline shots per 100 yards square |
	| director_ammo_density         				| 6.48  | Ammo per 100 yards square |
	| director_configurable_weapon_spawn_density    | -1.0  | Items per 100 yards square (-1 to spawn all) |
	| director_defibrillator_density         		| 6.48  | Defibrillators per 100 yards square |
	| director_gas_can_density         				| 6.48  | Gas cans per 100 yards square |
	| director_magnum_spawn_density         		| -1.0  | Magnum weapons per 100 yards square (-1 to spawn all) |
	| director_melee_weapon_density         		| 6.48  | Melee weapons per 100 yards square |
	| director_molotov_density        				| 6.48  | Molotovs per 100 yards square |
	| director_oxygen_tank_density         			| 6.48  | Oxygen tanks per 100 yards square |
	| director_pain_pill_density         			| 6.48  | Pain pills per 100 yards square |
	| director_pipe_bomb_density         			| 6.48  | Pipe bombs per 100 yards square |
	| director_pistol_density         				| 4  	| Pistols per 100 yards square |
	| director_propane_tank_density         		| 6.48  | Propane tanks per 100 yards square |
	| director_super_weapon_density         		| 6.48  | Items per 100 yards square (Grenade Launcher, M60) |
	| director_upgradepack_density         			| 6.48  | Upgrade packs per 100 yards square |
	| director_vomitjar_density         			| 6.48  | Vomitjars per 100 yards square |
	| director_scavenge_item_override         		| 0  	| Override map-specified item densities with cvar values for tuning |
	| director_finale_item_cluster_count         	| 3 	| How many clusters of items will be populated in the finale |
	| director_item_cluster_range         			| 50 	| Scavenge items of the same kind that are this close to each other are considered a single 'cluster' for population purposes |
	| director_weapon_cluster_range         		| 100 	| Scavenge weapons within this range are selected to be of the same tier, and not contain duplicate types |
</details>

* <details><summary>Related | 相關插件</summary>

	1. [coopbosses_ifier](https://github.com/fbef0102/Game-Private_Plugin/tree/main/coopbosses_ifier): Sets a tank and witch spawn point on every map in coop mode
		> 戰役模式下每一張地圖挑選隨機路程生成一隻Tank與一個Witch
</details>

* <details><summary>Changelog | 版本日誌</summary>
	
	* 1.4h (2025/3/21)
		* Add all weapons, melee and chainsaws....
		* Update data file

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
控制地圖上的武器、物品的數量與限制

* 原理
	* 地圖載入後的0.5秒後
		* 控制地圖上的武器、物品生成數量或限制
		* 此插件刪除地圖上原有的武器、物品，並非生成新物品
		* 目前能控制的物品
			* 治療包、電擊器、藥丸、腎上腺素、汽油彈、土製炸彈、膽汁瓶、瓦斯、氧氣灌、汽油桶、煙火盒
			* 近戰武器、電鋸
			* 手槍, 瑪格南手槍
			* 所有主武器
	* 設置文件[data/ItemTracking.cfg](data/ItemTracking.cfg)，控制地圖上的物品生成數量或限制
		* 內有中文說明，可點擊文件查看...
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

* <details><summary>相關的官方指令中文介紹 (點我展開)</summary>

	* 以下指令可以寫入文件 ```cfg/server.cfg```，自行調整 (也可以不用寫)

	| ConVar/Command  				| Parameters or default value	   			| Effect|
	| -------------|:-----------------:|:-------------:|
	| director_adrenaline_density 					| 6.48 	| 腎上腺素生成密度，每 100 碼平方單位生成的數量 (數字越大，地圖上該物品數量越多) |
	| director_ammo_density         				| 6.48  | 彈藥堆生成密度，每 100 碼平方單位生成的數量 (數字越大，地圖上該物品數量越多) |
	| director_configurable_weapon_spawn_density    | -1.0  | 每 100 碼平方單位生成的武器數量 (-1 = 全部生成) |
	| director_defibrillator_density         		| 6.48  | 電擊器生成密度，每 100 碼平方單位生成的數量 |
	| director_gas_can_density         				| 6.48  | 汽油桶生成密度，每 100 碼平方單位生成的數量 |
	| director_magnum_spawn_density         		| -1.0  | 瑪格南手槍生成密度，每 100 碼平方單位生成的數量 (-1 = 全部生成) |
	| director_melee_weapon_density         		| 6.48  | 近戰武器生成密度，每 100 碼平方單位生成的數量 |
	| director_molotov_density        				| 6.48  | 火瓶生成密度，每 100 碼平方單位生成的數量 |
	| director_oxygen_tank_density         			| 6.48  | 氧氣罐生成密度，每 100 碼平方單位生成的數量 |
	| director_pain_pill_density         			| 6.48  | 藥丸生成密度，每 100 碼平方單位生成的數量 |
	| director_pipe_bomb_density         			| 6.48  | 土製炸彈生成密度，每 100 碼平方單位生成的數量 |
	| director_pistol_density         				| 4  	| 手槍生成密度，每 100 碼平方單位生成的數量 |
	| director_propane_tank_density         		| 6.48  | 瓦斯桶生成密度，每 100 碼平方單位生成的數量 |
	| director_super_weapon_density         		| 6.48  | 超級武器生成密度，每 100 碼平方單位生成的數量 (榴彈發射器, M60) |
	| director_upgradepack_density         			| 6.48  | 高爆彈包與火焰彈包生成密度，每 100 碼平方單位生成的數量 |
	| director_vomitjar_density         			| 6.48  | 膽汁瓶生成密度，每 100 碼平方單位生成的數量 |
	| director_scavenge_item_override         		| 0  	| (不知道實際功能) Override map-specified item densities with cvar values for tuning |
	| director_finale_item_cluster_count         	| 3 	| (不知道實際功能) How many clusters of items will be populated in the finale |
	| director_item_cluster_range         			| 50 	| (不知道實際功能) Scavenge items of the same kind that are this close to each other are considered a single 'cluster' for population purposes |
	| director_weapon_cluster_range         		| 100 	| (不知道實際功能) Scavenge weapons within this range are selected to be of the same tier, and not contain duplicate types |
</details>