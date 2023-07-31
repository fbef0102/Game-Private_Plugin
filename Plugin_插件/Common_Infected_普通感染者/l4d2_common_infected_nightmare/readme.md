# Description | 內容
Common infected spawns with random health, speed, size, damage, armor. Make sure that hordes become your worst nightmare.

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/isTpGqmf1qA)

* Image | 圖示
	<br/>![l4d2_common_infected_nightmare_1](image/l4d2_common_infected_nightmare_1.jpeg)
	<br/>![l4d2_common_infected_nightmare_2](image/l4d2_common_infected_nightmare_2.jpg)

* Require | 必要安裝
<br>None

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d2_common_infected_nightmare.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d2_common_infected_nightmare_enable "1"

		// Chance that the common infected will be turned into nightmares. [0-100]%
		l4d2_common_infected_nightmare_chance "90"

		/*Type 1*/
		// The weight for Type 1 common spawning [0.0, 10.0] (0=Disable Type 1 Common)
		l4d2_common_infected_nightmare_type1_weight "8"

		// Type 1: Size of common.
		l4d2_common_infected_nightmare_type1_size "1.0"

		// Type 1: Multiplier for damage done by the Survivors.
		l4d2_common_infected_nightmare_type1_armor "1.8"

		// Type 1: Multiplier for damage done to the Survivors.
		l4d2_common_infected_nightmare_type1_damage "1.5"

		// Type 1: Maximum HP value for the common.
		l4d2_common_infected_nightmare_type1_hpmax "40"

		// Type 1: Minimum HP value for the common.
		l4d2_common_infected_nightmare_type1_hpmin "20"

		// Type 1: Maximum speed value for the common.
		l4d2_common_infected_nightmare_type1_speedmax "450"

		// Type 1: Minimum speed value for the common.
		l4d2_common_infected_nightmare_type1_speedmin "375"

		/*Type 2*/
		// The weight for Type 2 common spawning [0.0, 10.0] (0=Disable Type 2 Common)
		l4d2_common_infected_nightmare_type2_weight "8"

		// Type 2: Size of common.
		l4d2_common_infected_nightmare_type2_size "1.5"

		// Type 2: Multiplier for damage done by the Survivors.
		l4d2_common_infected_nightmare_type2_armor "0.7"

		// Type 2: Multiplier for damage done to the Survivors.
		l4d2_common_infected_nightmare_type2_damage "0.8"

		// Type 2: Maximum HP value for the common.
		l4d2_common_infected_nightmare_type2_hpmax "85"

		// Type 2: Minimum HP value for the common.
		l4d2_common_infected_nightmare_type2_hpmin "65"

		// Type 2: Maximum speed value for the common.
		l4d2_common_infected_nightmare_type2_speedmax "400"

		// Type 2: Minimum speed value for the common.
		l4d2_common_infected_nightmare_type2_speedmin "300"

		/*Type 3*/
		// The weight for Type 3 common spawning [0.0, 10.0] (0=Disable Type 3 Common)
		l4d2_common_infected_nightmare_type3_weight "8"

		// Type 3: Size of common.
		l4d2_common_infected_nightmare_type3_size "1.0"

		// Type 3: Multiplier for damage done by the Survivors.
		l4d2_common_infected_nightmare_type3_armor "1.1"

		// Type 3: Multiplier for damage done to the Survivors.
		l4d2_common_infected_nightmare_type3_damage "1.5"

		// Type 3: Maximum HP value for the common.
		l4d2_common_infected_nightmare_type3_hpmax "60"

		// Type 3: Minimum HP value for the common.
		l4d2_common_infected_nightmare_type3_hpmin "30"

		// Type 3: Maximum speed value for the common.
		l4d2_common_infected_nightmare_type3_speedmax "375"

		// Type 3: Minimum speed value for the common.
		l4d2_common_infected_nightmare_type3_speedmin "275"

		/*Type 4*/
		// The weight for Type 4 common spawning [0.0, 10.0] (0=Disable Type 4 Common)
		l4d2_common_infected_nightmare_type4_weight "8"

		// Type 4: Size of common.
		l4d2_common_infected_nightmare_type4_size "1.0"

		// Type 4: Multiplier for damage done by the Survivors.
		l4d2_common_infected_nightmare_type4_armor "0.5"

		// Type 4: Multiplier for damage done to the Survivors.
		l4d2_common_infected_nightmare_type4_damage "0.6"

		// Type 4: Maximum HP value for the common.
		l4d2_common_infected_nightmare_type4_hpmax "110"

		// Type 4: Minimum HP value for the common.
		l4d2_common_infected_nightmare_type4_hpmin "80"

		// Type 4: Maximum speed value for the common.
		l4d2_common_infected_nightmare_type4_speedmax "175"

		// Type 4: Minimum speed value for the common.
		l4d2_common_infected_nightmare_type4_speedmin "100"
		```
</details>

* <details><summary>Command | 命令</summary>

	None
</details>

* Apply to | 適用於
	```
	L4D2
	```

* Related Plugin | 相關插件
	1. [l4d2_spawn_uncommons](/Plugin_插件/Common_Infected_普通感染者/l4d2_spawn_uncommons): Spawn Uncommon Infected on all maps (Support The Last Stand New Model)
		> 所有地圖上可生成特殊一般感染者，有鎮暴警察、CEDA人員、小丑、泥人、工人、吉米賽車手、墮落倖存者

* <details><summary>Changelog | 版本日誌</summary>

	```php
	//Mortiegama @ 2014
	//HarryPotter @ 2023
	```
	* v1.0h (2023-7-3)
		* Remake Code
		* Convert code to latest syntax
		* Changes to fix warnings when compiling on SourceMod 1.11.
		* Add convars to control each type spawn weight.
		* Fix health and speec not working

	* v1.1
	    * [Original Plugin By Mortiegama](https://forums.alliedmods.net/showthread.php?t=239492)
</details>

- - - -
# 中文說明
改造普通感染者的血量、速度、模型尺寸、攻擊傷害、減傷比，讓普通感染成為倖存者的噩夢

* 原理
	* 共有四種類型的普通感染者可以改造，每一種類型可以利用指令分別設置
		* 最大血量與最小血量
		* 奔跑最大速度與最小速度
		* 身體模型大小
		* 攻擊倖存者的傷害加成
		* 受到倖存者減傷的減傷比
	* 即使殭屍身體模型變大，Hitbox範圍不會跟著變大
	* 不影響特殊一般感染者

* 功能
	* 查看下方"指令中文介紹"

* <details><summary>指令中文介紹(點我展開)</summary>

	* cfg/sourcemod/l4d2_common_infected_nightmare.cfg
		```php
		// 0=啟動插件, 1=關閉插件.
		l4d2_common_infected_nightmare_enable "1"

		// 每隻感染者改造成類型1~4的機率. [0-100]%
		l4d2_common_infected_nightmare_chance "90"

		/*改造類型 1*/
		// 將感染者改造成類型 1的權重 [0.0, 10.0] (0=關閉類型 1)
		l4d2_common_infected_nightmare_type1_weight "8"

		// 類型 1: 殭屍的模型大小
		l4d2_common_infected_nightmare_type1_size "1.0"

		// 類型 1: 受到倖存者減傷的減傷比例
		l4d2_common_infected_nightmare_type1_armor "1.8"

		// 類型 1: 攻擊倖存者的傷害加成比例
		l4d2_common_infected_nightmare_type1_damage "1.5"

		// 類型 1: 殭屍最大血量
		l4d2_common_infected_nightmare_type1_hpmax "40"

		// 類型 1: 殭屍最小血量
		l4d2_common_infected_nightmare_type1_hpmin "20"

		// 類型 1: 奔跑最大速度
		l4d2_common_infected_nightmare_type1_speedmax "450"

		// 類型 1: 奔跑最小速度
		l4d2_common_infected_nightmare_type1_speedmin "375"

		/*改造類型 2*/
		// 將感染者改造成類型 2的權重 [0.0, 10.0] (0=關閉類型 2)
		l4d2_common_infected_nightmare_type2_weight "8"

		// 類型 2: 殭屍的模型大小
		l4d2_common_infected_nightmare_type2_size "1.5"

		// 類型 2: 受到倖存者減傷的減傷比例
		l4d2_common_infected_nightmare_type2_armor "0.7"

		// 類型 2: 攻擊倖存者的傷害加成比例
		l4d2_common_infected_nightmare_type2_damage "0.8"

		// 類型 2: 殭屍最大血量
		l4d2_common_infected_nightmare_type2_hpmax "85"

		// 類型 2: 殭屍最小血量
		l4d2_common_infected_nightmare_type2_hpmin "65"

		// 類型 2: 奔跑最大速度
		l4d2_common_infected_nightmare_type2_speedmax "400"

		// 類型 2: 奔跑最小速度
		l4d2_common_infected_nightmare_type2_speedmin "300"

		/*改造類型 3*/
		// 將感染者改造成類型 3的權重 [0.0, 10.0] (0=關閉類型 3)
		l4d2_common_infected_nightmare_type3_weight "8"

		// 類型 3: 殭屍的模型大小
		l4d2_common_infected_nightmare_type3_size "1.0"

		// 類型 3: 受到倖存者減傷的減傷比例
		l4d2_common_infected_nightmare_type3_armor "1.1"

		// 類型 3: 攻擊倖存者的傷害加成比例
		l4d2_common_infected_nightmare_type3_damage "1.5"

		// 類型 3: 殭屍最大血量
		l4d2_common_infected_nightmare_type3_hpmax "60"

		// 類型 3: 殭屍最小血量
		l4d2_common_infected_nightmare_type3_hpmin "30"

		// 類型 3: 奔跑最大速度
		l4d2_common_infected_nightmare_type3_speedmax "375"

		// 類型 3: 奔跑最小速度
		l4d2_common_infected_nightmare_type3_speedmin "275"

		/*改造類型 4*/
		// 將感染者改造成類型 4的權重 [0.0, 10.0] (0=關閉類型 4)
		l4d2_common_infected_nightmare_type4_weight "8"
		
		// 類型 4: 殭屍的模型大小
		l4d2_common_infected_nightmare_type4_size "1.0"

		// 類型 4: 受到倖存者減傷的減傷比例
		l4d2_common_infected_nightmare_type4_armor "0.5"

		// 類型 4: 攻擊倖存者的傷害加成比例
		l4d2_common_infected_nightmare_type4_damage "0.6"

		// 類型 4: 殭屍最大血量
		l4d2_common_infected_nightmare_type4_hpmax "110"

		// 類型 4: 殭屍最小血量
		l4d2_common_infected_nightmare_type4_hpmin "80"

		// 類型 4: 奔跑最大速度
		l4d2_common_infected_nightmare_type4_speedmax "175"

		// 類型 4: 奔跑最小速度
		l4d2_common_infected_nightmare_type4_speedmin "100"
		```
</details>