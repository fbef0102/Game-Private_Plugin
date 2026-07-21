# Description | 內容
Spawn lots of witches in different percentage on the map

> __Note__ <br/>
This plugin is private, Please contact [me](/#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](/#私人插件列表-private-plugins-list)

* Apply to | 適用於
	```
	L4D1
	L4D2
	```

* Image | 圖示
	<br/>![l4d_witch_spawn_1](image/l4d_witch_spawn_1.jpg)

* <details><summary>How does it work?</summary>

	* This plugin spawns multi witches
		1. In different percentage on first map. Random percentage each time.
		2. In different percentage on final map (Before final rescue). Random percentage each time.
		3. In different percentage on regular map. Random percentage each time.
	* Witches will be spawned when the furthest survivor reach a percentage of map
		* For example
			```php
			// When furthest survivor reach 79% of map completion, 2 Witches will be spawned.
			Next Witch Spawn: 79% - Amount: 2
			```
	* Does not affect director witch
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	2. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)
	3. [spawn_infected_nolimit](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/spawn_infected_nolimit)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_witch_spawn.cfg
		```php
		// 0=Disable, 1=Enable Plugin, Spawn numbers of Witches depending on the map (Does not affect director spawn)
		l4d_witch_spawn_enable "1"

		// (L4D2) 1=Disable director witch spawn, 2=Disable director/mutation/static/final stage witch spawn (could break the map process and game stuck), 0=Off
		// (L4D1) 1=Disable director witch spawn (and tank), 0=Off
		l4d_witch_spawn_disable_director "0"

		// Set interval time check to spawn
		l4d_witch_spawn_interval "0.5"

		// Set total max numbers of Witches to spawn on first map (0=Game deafult)
		l4d_witch_spawn_first_max "3"

		// Set total min numbers of Witches to spawn on first map (0=Game deafult)
		l4d_witch_spawn_first_min "1"

		// Set total max numbers of Witches to spawn on regular map (0=Game deafult)
		l4d_witch_spawn_normal_max "5"

		// Set total min numbers of Witches to spawn on regular map (0=Game deafult)
		l4d_witch_spawn_normal_min "3"

		// Set total max numbers of Witches to spawn on final map (0=Game deafult)
		// Before final rescue starts
		l4d_witch_spawn_final_max_before_rescue "1"

		// Set total min numbers of Witches to spawn on final map (0=Game deafult)
		// Before final rescue starts
		l4d_witch_spawn_final_min_before_rescue "1"

		// If 1, Set multi Witches to spawn simultaneously on first/regular/final map
		l4d_witch_spawn_simultaneous "1"

		// Set a minimum of Witches to spawn simultaneously
		l4d_witch_spawn_min_simultaneous "1"

		// Set a maximum of Witches to spawn simultaneously
		l4d_witch_spawn_max_simultaneous "3"

		// Set progress [5-95]% minimum of the map, where Witches can spawn
		l4d_witch_spawn_range_min_witch "10"

		// Set progress [5-95]% maximum of the map, where Witches can spawn
		l4d_witch_spawn_range_max_witch "90"

		// If 1, kill all witches when final stage starts
		l4d_witch_spawn_final_remove "1"

		// Amount of seconds before a witch is removed. (Only remove witches spawned by this plugin)
		l4d_witch_spawn_lifespan "200"
		```
</details>

* <details><summary>Command | 命令</summary>

	* **Display next witch spawn percent**
		```php
		sm_witch
		```
</details>

* Translation Support | 支援翻譯
	```
	translations/l4d_witch_spawn.phrases.txt
	```

* <details><summary>Related | 相關插件</summary>

	1. [l4d_current_survivor_progress](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4d_current_survivor_progress): Print survivor progress in flow percents
		> 使用指令顯示人類目前的路程
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.2 (2026-7-22)
		* Remake Code and change how witch spawns on the map
		* Update cvars

	* v1.1 (2026-7-12)
		* Use other way to spawn witch and bride witch since recent l4d2 update has restricted the maximum number of witch spawns
		* Require spawn_infected_nolimit by Harry

	* v1.0 (2023-12-05)
		* Initial Release
</details>

- - - -
# 中文說明
一個關卡中每隔一段路程生成多隻Witch

* 圖示
	<br/>![zho/l4d_witch_spawn_1](image/zho/l4d_witch_spawn_1.jpg)

* 原理
	* 這個插件會生成多個Witch
		1. 地圖第一關的不同路程生成Witch，路程都是隨機的，每回合不一樣
		2. 地圖最後一關(救援開始之前)的不同路程生成Witch，路程都是隨機的，每回合不一樣
		3. 地圖正常關卡(不是第一關也不是最後一關)的不同路程生成Witch，路程都是隨機的，每回合不一樣
	* 當人類達到指定路程時，生成Witch
		* 舉例
			```php
			// 當人類走到79%的地圖路程時，生成兩隻Witch
			下次Witch生成: 79% - 數量: 2
			```
	* 此插件會停止遊戲導演生成Witch
	* 不影響有固定刷Witch的地圖

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d_witch_spawn.cfg
		```php
		// 0=關閉插件, 1=啟動插件, 在地圖上不同路程分別生成坦克 (不影響遊戲導演生成Witch)
		l4d_witch_spawn_enable "1"

		// (L4D2) 1=關閉導演系統生成Witch, 2=關閉 遊戲導演/突變模式/地圖固定/救援階段 生成Witch (可能導致遊戲卡關, 不建議使用), 0=關閉這項功能
		// (L4D1) 1=關閉導演系統生成Witch (這也會關閉導演系統生成tank), 0=關閉這項功能
		l4d_witch_spawn_disable_director "0"

		// 每0.5秒檢查一次人類路程並生成Witch
		l4d_witch_spawn_interval "0.5"

		// 地圖第一關總共會生成的最多Witch數量 (0=遊戲預設)
		l4d_witch_spawn_first_max "3"

		// 地圖第一關總共會生成的最少Witch數量 (0=遊戲預設)
		l4d_witch_spawn_first_min "1"

		// 地圖正常關卡總共會生成的最多Witch數量 (0=遊戲預設)
		// 不是第一關也不是最後一關
		l4d_witch_spawn_normal_max "5"

		// 地圖正常關卡總共會生成的最少Witch數量 (0=遊戲預設)
		// 不是第一關也不是最後一關
		l4d_witch_spawn_normal_min "3"

		// 地圖最後一關總共會生成的最多Witch數量 (在救援開始之前, 0=遊戲預設)
		l4d_witch_spawn_final_max_before_rescue "1"

		// 地圖最後一關總共會生成的最少Witch數量 (在救援開始之前, 0=遊戲預設)
		l4d_witch_spawn_final_min_before_rescue "1"

		// 為1時，地圖的 第一關/正常關卡/最後一關路程上 每次產生不同數量的Witch
		l4d_witch_spawn_simultaneous "1"

		// (第一關/正常關卡/最後一關救援開始之前路程上) 每次產生Witch時，所生成的最少數量
		l4d_witch_spawn_min_simultaneous "1"

		// (第一關/正常關卡/最後一關救援開始之前路程上) 每次產生Witch時，所生成的最多數量
		l4d_witch_spawn_max_simultaneous "3"

		// (第一關/正常關卡/最後一關救援開始之前路程上) 至少路程到達10%才可以生成Witch，數字請填[5~95]%
		l4d_witch_spawn_range_min_witch "10"

		// (第一關/正常關卡/最後一關救援開始之前路程上) 路程最遠90%生成Witch，數字請填[5~95]%
		l4d_witch_spawn_range_max_witch "90"

		// 為1時，救援開始時殺死場上所有Witch
		l4d_witch_spawn_final_remove "1"

		// 如果沒人驚嚇或靠近Witch，Witch將會在200秒之後自動消失 (只會移除此插件生成的Witch)
		l4d_witch_spawn_lifespan "200"
		```
</details>

* <details><summary>命令中文介紹 (點我展開)</summary>

	* **顯示下次生成Witch的路程與數量**
		```php
		sm_witch
		```
</details>