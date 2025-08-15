# Description | 內容
Spawn Uncommon Infected on all maps (Support The Last Stand New Model)

> __Note__ <br/>
This plugin is private, Please contact [me](/#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](/#私人插件列表-private-plugins-list)

* Apply to | 適用於
	```
	L4D2
	```

* [Video | 影片展示](https://youtu.be/isTpGqmf1qA)

* Image | 圖示
	<br/>![l4d2_spawn_uncommons_1](image/l4d2_spawn_uncommons_1.jpeg)
	<br/>![l4d2_spawn_uncommons_2](image/l4d2_spawn_uncommons_2.jpg)

* <details><summary>How does it work?</summary>

	* Turn normal common infected into uncommon infected such as
		* Fallen survivor
		* Riot
		* CEDA
		* Clown
		* Mudman
		* Roadcrew
		* Jimmy
	* Support custom maps
	* Support The Last Stand New Model
</details>

* Require | 必要安裝
<br>None

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d2_spawn_uncommons.cfg
		```php
		// Do you want all uncommons randomly spawning on all maps
		l4d2_spawn_uncommons_auto_shuffle "1"

		// If l4d2_spawn_uncommons_autoshuffle is 1, X chance to turn into uncommon when common infected spawns [1~100]%
		l4d2_spawn_uncommons_auto_chance "15"

		// Binary flag of allowed autoshuffle zombies. 1 = riot, 2 = ceda, 4 = clown, 8 = mudman, 16 = roadcrew, 32 = jimmy, 64 = fallen, 127=All
		l4d2_spawn_uncommons_autotypes "127"

		// Health value the uncommons get set to. 0 = Game default health
		l4d2_spawn_uncommons_health_override "0"

		// How many riot infected allowed on the field (0= No Limit)
		// If limit reached, spawn other uncommon. (Does not affect director spawn)
		l4d2_spawn_uncommons_riot_on_the_field "2"

		// How many ceda infected allowed on the field (0= No Limit)
		// If limit reached, spawn other uncommon. (Does not affect director spawn)
		l4d2_spawn_uncommons_ceda_on_the_field "3"

		// How many clown infected allowed on the field (0= No Limit)
		// If limit reached, spawn other uncommon. (Does not affect director spawn)
		l4d2_spawn_uncommons_clown_on_the_field "2"

		// How many mudman infected allowed on the field (0= No Limit)
		// If limit reached, spawn other uncommon. (Does not affect director spawn)
		l4d2_spawn_uncommons_mudman_on_the_field "3"

		// How many roadcrew infected allowed on the field (0= No Limit)
		// If limit reached, spawn other uncommon. (Does not affect director spawn)
		l4d2_spawn_uncommons_roadcrew_on_the_field "3"

		// How many jimmy gibbs jr allowed on the field 
		// If limit reached, spawn other uncommon. (Does not affect director spawn)
		l4d2_spawn_uncommons_jimmy_on_the_field "1"

		// How many fallen survivors allowed on the field (Override official cvar: z_fallen_max_count)
		// If limit reached, spawn other uncommon. (Does not affect director spawn)
		l4d2_spawn_uncommons_fallen_on_the_field "2"

		// When a jimmy gibbs jr is killed, how long in seconds should pass before another can spawn. 
		// If time is not up yet, spawn other uncommon. (Does not affect director spawn)
		l4d2_spawn_uncommons_jimmy_suppress_time "300"

		// When a Fallen Survivor is killed, how long in seconds should pass before another can spawn. (Override official cvar: z_fallen_kill_suppress_time)
		// If time is not up yet, spawn other uncommon. (Does not affect director spawn)
		l4d2_spawn_uncommons_fallen_suppress_time "180"
		```
</details>

* <details><summary>Command | 命令</summary>

	* **Spawn uncommon infected ANYTIME. (Adm required: ADMFLAG_ROOT)**
		```php
		sm_spawnuncommon <riot|ceda|clown|mud|roadcrew|jimmy|fallen|random>
		```
</details>

* <details><summary>Related Official ConVar</summary>

	* [Unlock Fallen Survivor](https://developer.valvesoftware.com/wiki/L4D2_Director_Scripts/AllowFallenSurvivorItem)
	* This plugin already modified ```z_fallen_max_count``` and ```z_fallen_kill_suppress_time```, you don't need to change the following cvars

	| ConVar/Command  				| Parameters or default value 	| Descriptor  			| Effect|
	| -------------|:-----------------:|:-------------:|:-------------:|
	| z_fallen_kill_suppress_time 	| 300 | Seconds 		 | When a Fallen Survivor is killed, how long in seconds should pass before another can spawn. |
	| z_fallen_max_count          	| 1   | Arbitrary number | How many Fallen Survivors can be active at once. |
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.0h (2023-1-26)
		* Remake Code
		* Convert code to latest syntax
		* Changes to fix warnings when compiling on SourceMod 1.11.
		* Add convars to control each uncommon spawn time, spawn limit.
		* Unlock fallen survivor limit and time.

	* v1.0.9
	    * [Original Plugin By AtomicStryker](https://forums.alliedmods.net/showthread.php?t=109623)
</details>

- - - -
# 中文說明
所有地圖上可生成特殊一般感染者，有鎮暴警察、CEDA人員、小丑、泥人、工人、吉米賽車手、墮落倖存者

* 原理
	* 導演系統生成普通感染者的時候，將其變成特殊一般感染者
	* 不影響地圖上既有的特殊一般感染者
	* 支援三方圖

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d2_spawn_uncommons.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		l4d2_spawn_uncommons_auto_shuffle "1"

		// 普通感染變成特殊一般感染者的機率 [1~100]%
		l4d2_spawn_uncommons_auto_chance "15"

		// 可以生成的特殊一般感染者種類 1 = 鎮暴警察, 2 = CEDA人員, 4 = 小丑, 8 = 泥人, 16 = 工人, 32 = 吉米賽車手, 64 = 墮落倖存者 (請將數字相加起來，127=全部)
		l4d2_spawn_uncommons_autotypes "127"

		// 設定特殊一般感染者的血量. 0 = 遊戲預設
		l4d2_spawn_uncommons_health_override "0"

		// 場上同時存在的鎮暴警察數量 (0=無限制)
		// 如果已達限制，生成其他特殊一般感染者.
		l4d2_spawn_uncommons_riot_on_the_field "2"

		// 場上同時存在的CEDA人員數量 (0=無限制)
		// 如果已達限制，生成其他特殊一般感染者.
		l4d2_spawn_uncommons_ceda_on_the_field "3"

		// 場上同時存在的小丑數量 (0=無限制)
		// 如果已達限制，生成其他特殊一般感染者.
		l4d2_spawn_uncommons_clown_on_the_field "2"

		// 場上同時存在的泥人數量 (0=無限制)
		// 如果已達限制，生成其他特殊一般感染者.
		l4d2_spawn_uncommons_mudman_on_the_field "3"

		// 場上同時存在的工人數量 (0=無限制)
		// 如果已達限制，生成其他特殊一般感染者.
		l4d2_spawn_uncommons_roadcrew_on_the_field "3"

		// 場上同時存在的吉米賽車手數量 (0=無限制)
		// 如果已達限制，生成其他特殊一般感染者.
		l4d2_spawn_uncommons_jimmy_on_the_field "1"

		// 場上同時存在的墮落倖存者數量 (會覆蓋官方指令: z_fallen_max_count)
		// 如果已達限制，生成其他特殊一般感染者.
		l4d2_spawn_uncommons_fallen_on_the_field "2"

		// 當吉米賽車手被殺死之後，下次生成的冷卻時間
		// 冷卻時間未到將生成其他特殊一般感染者
		l4d2_spawn_uncommons_jimmy_suppress_time "300"

		// 當墮落倖存者被殺死之後，下次生成的冷卻時間 (會覆蓋官方指令:  z_fallen_kill_suppress_time)
		// 冷卻時間未到將生成其他特殊一般感染者
		l4d2_spawn_uncommons_fallen_suppress_time "180"
		```
</details>

* <details><summary>命令中文介紹 (點我展開)</summary>

	* **在準心上生成特殊一般感染者. (權限: ADMFLAG_ROOT)**
		```php
		sm_spawnuncommon <riot|ceda|clown|mud|roadcrew|jimmy|fallen|random>
		```
</details>

* <details><summary>相關的官方指令中文介紹 (點我展開)</summary>

	* [解鎖墮落生還者生成限制](https://developer.valvesoftware.com/wiki/L4D2_Director_Scripts/AllowFallenSurvivorItem)
	* 這個插件已經修改指令 ```z_fallen_max_count``` 與 ```z_fallen_kill_suppress_time```, 你無須更動以下任何指令

	| 指令  				| 預設值 	| 單位  			| 影響|
	| -------------|:-----------------:|:-------------:|:-------------:|
	| z_fallen_kill_suppress_time 	| 300  | 秒數 | 當場上的墮落生還者殺死之後，有300秒冷卻時間不會出現墮落生還者|
	| z_fallen_max_count          	| 1    | 數量 | 場上只能有一隻墮落生還者|
</details>
