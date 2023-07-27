# Description | 內容
Make certain event hordes finite

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Video | 影片展示
<br/>None

* Image | 圖示
	* display message
		> 剩餘屍潮通知
		<br/>![l4d2_horde_equaliser_1](image/l4d2_horde_equaliser_1.jpg)

* Apply to | 適用於
	```
	L4D2 Coop/Versus/Realism
	```

* <details><summary>Changelog | 版本日誌</summary>

	* v1.2h (2023-2-18)
	    * Modify cvar
			```c
			// Annnounce horde remaining at checkpoints [1=each 1/4 of total commons, 2=each common] (0=off)
			l4d2_horde_equaliser_checkpoint_announce "1"
			```

	* v1.1h
	    * Set the horde limit according to 'survivor limit'
	
	* v1.0h
		* Individual plugin
		* Auto generate cfg

	* v0.0
	    * [From SirPlease/L4D2-Competitive-Rework](https://github.com/SirPlease/L4D2-Competitive-Rework/blob/master/addons/sourcemod/scripting/l4d2_horde_equaliser.sp)
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d2_horde_equaliser.cfg
		```php
		// Annnounce horde remaining at checkpoints [1=each 1/4 of total commons, 2=each common] (0=off)
		l4d2_horde_equaliser_checkpoint_announce "1"

		// Put infinite hordes on a 'hold up' during Tank fights
		l4d2_horde_equaliser_no_tank_horde "0"
		```
</details>

* <details><summary>Command | 命令</summary>

	None
</details>

* Notice
	* To install this plugin, you must disable nature horde, see **Official ConVar** below

* Data Example
	* data/mapinfo.txt
		```php
		"MapInfo"
		{
			"c2m3_coaster" //Map Name
			{
				"horde_limit" //Set the horde limit according to 'survivor limit'
				{
					"survivor_5" 	"300" // replace infinite horde with finite event of 300 commons when survivor limit is 5
					"survivor_4"	"240" // replace infinite horde with finite event of 240 commons when survivor limit is 4
					"survivor_3"	"180"// replace infinite horde with finite event of 180 commons when survivor limit is 3
					"survivor_2"	"120"// replace infinite horde with finite event of 120 commons when survivor limit is 2
					"survivor_1"	"60"// replace infinite horde with finite event of 60 commons when survivor limit is 1
				}
			}
		}
		```

* <details><summary>Related Official ConVar</summary>

	* write down the following cvars in cfg/server.cfg
		```php
		// Nature horde interval (second)
		sm_cvar z_mob_spawn_min_interval_easy            3600
		sm_cvar z_mob_spawn_min_interval_normal          3600
		sm_cvar z_mob_spawn_min_interval_hard            3600
		sm_cvar z_mob_spawn_min_interval_expert          3600

		sm_cvar z_mob_spawn_max_interval_easy            3600
		sm_cvar z_mob_spawn_max_interval_normal          3600
		sm_cvar z_mob_spawn_max_interval_hard            3600
		sm_cvar z_mob_spawn_max_interval_expert          3600
		```
</details>

- - - -
# 中文說明
控制地圖上的無限屍潮機關，將無限屍潮改為有限的殭屍數量

* 原理
	* 當有人開啟地圖上的機關之後，將無限屍潮改為有限，殭屍清完之後便不會再有屍潮來襲
	* 必須設定data/mapinfo.txt否則無效

* 用意在哪?
	* 對抗模式下某些關卡的無限屍潮對於倖存者來說過於艱難通關

* 功能
	* 可調整每一關的有限屍潮數量
	* 根據伺服器當前的倖存者數量決定屍潮數量 (改變倖存者數量的指令為survivor_limit)
	* 可調整Tank來臨時關閉無限屍潮

* 注意事項
	* 要使用這個插件必須關閉遊戲導演的自然屍潮，詳見下方**官方指令中文介紹**

* Data設定範例
	* data/mapinfo.txt
		```php
		"MapInfo"
		{
			"c2m3_coaster"//地圖名
			{
				"horde_limit" // 根據伺服器當前的倖存者數量決定屍潮數量 (改變倖存者數量的指令為survivor_limit)
				{
					"survivor_5" 	"300" // 當五位倖存者時，將無限屍潮改為有限的300隻殭屍數量
					"survivor_4"	"240" // 當四位倖存者時，將無限屍潮改為有限的240隻殭屍數量
					"survivor_3"	"180" // 當三位倖存者時，將無限屍潮改為有限的180隻殭屍數量
					"survivor_2"	"120" // 當兩位倖存者時，將無限屍潮改為有限的120隻殭屍數量
					"survivor_1"	"60" // 當僅有一位倖存者時，將無限屍潮改為有限的60隻殭屍數量
				}
			}
		}
		```

* <details><summary>相關的官方指令中文介紹 (點我展開)</summary>

	* 以下指令寫入文件 cfg/server.cfg，不可自行調整
		```php
		// 自然屍潮間隔 (秒數)，3600秒相當於一小時，必須關閉自然屍潮否則無效
		sm_cvar z_mob_spawn_min_interval_easy            3600 //簡單難度
		sm_cvar z_mob_spawn_min_interval_normal          3600 //一般難度 (對抗模式下為一般難度)
		sm_cvar z_mob_spawn_min_interval_hard            3600 //進階難度
		sm_cvar z_mob_spawn_min_interval_expert          3600 //專家難度
		
		sm_cvar z_mob_spawn_max_interval_easy            3600
		sm_cvar z_mob_spawn_max_interval_normal          3600
		sm_cvar z_mob_spawn_max_interval_hard            3600
		sm_cvar z_mob_spawn_max_interval_expert          3600
		```
</details>
