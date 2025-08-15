# Description | 內容
Spawn multi Tanks on the map and final rescue

> __Note__ <br/>
This plugin is private, Please contact [me](/#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](/#私人插件列表-private-plugins-list)

* Apply to | 適用於
	```
	L4D1
	L4D2
	```

* Image | 圖示
	<br/>![l4d_tank_spawn_1](image/l4d_tank_spawn_1.jpg)

* <details><summary>How does it work?</summary>

	* This plugin spawns multi tanks
		1. In different percentage on first map. Random percentage each time.
		2. In different percentage on final map (Before final rescue). Random percentage each time.
		3. In different percentage on regular map. Random percentage each time.
		4. On each tank wave in final rescue
		5. When finale vehicle is ready
	* Tanks will be spawned when the furthest survivor reach a percentage of map
		* For example
			```php
			// When furthest survivor reach 79% of map completion, 2 Tanks will be spawned.
			Next Tank Spawn: 79% - Amount: 2
			```
	* Does not affect director tank
	* (Versus) Tanks will pass to players
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	2. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)
	3. [spawn_infected_nolimit](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/spawn_infected_nolimit)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_tank_spawn.cfg
		```php
		// 0=Disable, 1=Enable Plugin, Spawn numbers of Tanks depending on the map (Does not affect director spawn)
		l4d_tank_spawn_enable "1"

		// If 1, Disable director/mutation/static tank spawn
		l4d_tank_spawn_disable_director "0"

		// Set interval time check to spawn
		l4d_tank_spawn_interval "0.5"

		// Set total max numbers of Tanks to spawn on first map (0=Game deafult)
		l4d_tank_spawn_first_max "3"

		// Set total min numbers of Tanks to spawn on first map (0=Game deafult)
		l4d_tank_spawn_first_min "1"

		// Set total max numbers of Tanks to spawn on regular map (0=Game deafult)
		l4d_tank_spawn_normal_max "5"

		// Set total min numbers of Tanks to spawn on regular map (0=Game deafult)
		l4d_tank_spawn_normal_min "3"

		// Set total max numbers of Tanks to spawn on final map (0=Game deafult)
		// Before final rescue starts
		l4d_tank_spawn_final_max_before_rescue "1"

		// Set total min numbers of Tanks to spawn on final map (0=Game deafult)
		// Before final rescue starts
		l4d_tank_spawn_final_min_before_rescue "1"

		// Set max numbers of Tanks to spawn on each tank wave in final rescue (0=Game deafult)
		l4d_tank_spawn_final_max_in_rescue "2"

		// Set min numbers of Tanks to spawn on each tank wave in final rescue (0=Game deafult)
		l4d_tank_spawn_final_min_in_rescue "1"

		// Set max numbers of Tanks to spawn when finale vehicle is ready (0=Game deafult)
		l4d_tank_spawn_final_max_rescue_ready "3"

		// Set min numbers of Tanks to spawn when finale vehicle is ready (0=Game deafult)
		l4d_tank_spawn_final_min_rescue_ready "2"

		// If 1, Set multi Tanks to spawn simultaneously on first/regular/final map
		l4d_tank_spawn_simultaneous "1"

		// Set a minimum of Tanks to spawn simultaneously
		l4d_tank_spawn_min_simultaneous "1"

		// Set a maximum of Tanks to spawn simultaneously
		l4d_tank_spawn_max_simultaneous "3"

		// Set progress [5-95]% minimum of the map, where Tanks can spawn
		l4d_tank_spawn_range_min_tank "10"

		// Set progress [5-95]% maximum of the map, where Tanks can spawn
		l4d_tank_spawn_range_max_tank "90"
		```
</details>

* <details><summary>Command | 命令</summary>

	* **Display next tank spawn percent**
		```php
		sm_tank
		```
</details>

* Translation Support | 支援翻譯
	```
	translations/l4d_tank_spawn.phrases.txt
	```

* <details><summary>Related | 相關插件</summary>

	1. [l4d_current_survivor_progress](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4d_current_survivor_progress): Print survivor progress in flow percents
		> 使用指令顯示人類目前的路程
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.2h (2024-10-31)
		* Update cvars
		
	* v1.1 (2024-3-12)
		* Control max and min numbers of tanks to spawn
		* Update cvars

	* v1.0 (2023-12-5)
		* Initial Release
</details>

- - - -
# 中文說明
一個關卡中或救援期間生成多隻Tank，對抗模式也適用

* 圖示
	<br/>![zho/l4d_tank_spawn_1](image/zho/l4d_tank_spawn_1.jpg)

* 原理
	* 這個插件會生成多個Tank
		1. 地圖第一關的不同路程生成tank，路程都是隨機的，每回合不一樣
		2. 地圖最後一關(救援開始之前)的不同路程生成tank，路程都是隨機的，每回合不一樣
		3. 地圖正常關卡(不是第一關也不是最後一關)的不同路程生成tank，路程都是隨機的，每回合不一樣
		4. 救援過程中每局Tank時生成更多的tank
		5. 救援載具來臨後生成更多的tank
	* 當人類達到指定路程時，生成Tank
		* 舉例
			```php
			// 當人類走到79%的地圖路程時，生成兩隻Tank
			下次Tank生成: 79% - 數量: 2
			```
	* 此插件會停止遊戲導演生成Tank
	* 不影響有固定刷Tank的地圖，譬如C13M2/C7M1
	* (對抗模式) Tank生成後會轉移給玩家操控

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d_tank_spawn.cfg
		```php
		// 0=關閉插件, 1=啟動插件, 在地圖上不同路程分別生成坦克 (不影響遊戲導演生成Tank)
		l4d_tank_spawn_enable "1"

		// 為1時，停止 遊戲導演/突變模式/地圖固定 生成Tank
		l4d_tank_spawn_disable_director "0"

		// 每0.5秒檢查一次人類路程並生成Tank
		l4d_tank_spawn_interval "0.5"

		// 地圖第一關總共會生成的最多Tank數量 (0=遊戲預設)
		l4d_tank_spawn_first_max "3"

		// 地圖第一關總共會生成的最少Tank數量 (0=遊戲預設)
		l4d_tank_spawn_first_min "1"

		// 地圖正常關卡總共會生成的最多Tank數量 (0=遊戲預設)
		// 不是第一關也不是最後一關
		l4d_tank_spawn_normal_max "5"

		// 地圖正常關卡總共會生成的最少Tank數量 (0=遊戲預設)
		// 不是第一關也不是最後一關
		l4d_tank_spawn_normal_min "3"

		// 地圖最後一關總共會生成的最多Tank數量 (在救援開始之前, 0=遊戲預設)
		l4d_tank_spawn_final_max_before_rescue "1"

		// 地圖最後一關總共會生成的最少Tank數量 (在救援開始之前, 0=遊戲預設)
		l4d_tank_spawn_final_min_before_rescue "1"

		// 救援過程中每一波Tank時所生成的最多tank數量 (0=遊戲預設)
		l4d_tank_spawn_final_max_in_rescue "2"

		// 救援過程中每一波Tank時所生成的最少tank數量 (0=遊戲預設)
		l4d_tank_spawn_final_min_in_rescue "1"

		// 救援載具來臨後所生成的最多tank數量 (0=遊戲預設)
		l4d_tank_spawn_final_max_rescue_ready "3"

		// 救援載具來臨後所生成的最少tank數量 (0=遊戲預設)
		l4d_tank_spawn_final_min_rescue_ready "2"

		// 為1時，地圖的 第一關/正常關卡/最後一關路程上 每次產生不同數量的Tank
		l4d_tank_spawn_simultaneous "1"

		// (第一關/正常關卡/最後一關救援開始之前路程上) 每次產生Tank時，所生成的最少數量
		l4d_tank_spawn_min_simultaneous "1"

		// (第一關/正常關卡/最後一關救援開始之前路程上) 每次產生Tank時，所生成的最多數量
		l4d_tank_spawn_max_simultaneous "3"

		// (第一關/正常關卡/最後一關救援開始之前路程上) 至少路程到達10%才可以生成Tank，數字請填[5~95]%
		l4d_tank_spawn_range_min_tank "10"

		// (第一關/正常關卡/最後一關救援開始之前路程上) 路程最遠90%生成Tank，數字請填[5~95]%
		l4d_tank_spawn_range_max_tank "90"
		```
</details>

* <details><summary>命令中文介紹 (點我展開)</summary>

	* **顯示下次生成Tank的路程與數量**
		```php
		sm_tank
		```
</details>