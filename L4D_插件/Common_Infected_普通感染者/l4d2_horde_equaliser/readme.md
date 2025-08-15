# Description | 內容
Make certain event hordes finite

> __Note__ <br/>
This plugin is private, Please contact [me](/#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](/#私人插件列表-private-plugins-list)

* Apply to | 適用於
	```
	L4D2
	```

* Image | 圖示
	<br/>![l4d2_horde_equaliser_1](image/l4d2_horde_equaliser_1.jpg)

* <details><summary>How does it work?</summary>

	* Make infinite event hordes -> finite hordes
	* To install this plugin, you must disable nature horde
	* 🟥 Please write down the following official cvars in ```cfg/server.cfg```
		```php
		// Nature horde interval (second)
		sm_cvar z_mob_spawn_min_interval_easy            9999
		sm_cvar z_mob_spawn_min_interval_normal          9999
		sm_cvar z_mob_spawn_min_interval_hard            9999
		sm_cvar z_mob_spawn_min_interval_expert          9999

		sm_cvar z_mob_spawn_max_interval_easy            9999
		sm_cvar z_mob_spawn_max_interval_normal          9999
		sm_cvar z_mob_spawn_max_interval_hard            9999
		sm_cvar z_mob_spawn_max_interval_expert          9999
		```
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

* <details><summary>Data Config</summary>
	
	* [data/l4d2_horde_equaliser.cfg](data/l4d2_horde_equaliser.cfg)
		> Manual in this file, click for more details...
</details>

* Translation Support | 支援翻譯
	```
	translations/l4d2_horde_equaliser.phrases.txt
	```

* <details><summary>Changelog | 版本日誌</summary>

	* v1.5h (2025-1-30)
		* Update data

	* v1.4h (2024-4-16)
		* Add translation

	* v1.3h (2023-9-3)
		* Fix Error and not working on local server

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

- - - -
# 中文說明
控制地圖上的無限屍潮機關，將無限屍潮改為有限的殭屍數量

* 原理
	* 當有人開啟地圖上的機關之後，將無限屍潮改為有限，殭屍清完之後便不會再有屍潮來襲
	* 可設置文件[data/mapinfo.txt](data/mapinfo.txt)調整每一關的有限屍潮數量

* 用意在哪?
	* 對抗模式下某些關卡的無限屍潮對於倖存者來說過於艱難通關

* <details><summary>注意事項</summary>

	* 要使用這個插件必須關閉遊戲導演的自然屍潮，詳見下方官方指令
	* 🟥 請務必將以下官方指令寫入文件 ```cfg/server.cfg```，不可自行調整
		```php
		// 自然屍潮間隔 (秒數)，必須關閉自然屍潮否則無效
		sm_cvar z_mob_spawn_min_interval_easy            9999 //簡單難度
		sm_cvar z_mob_spawn_min_interval_normal          9999 //一般難度 (對抗模式下為一般難度)
		sm_cvar z_mob_spawn_min_interval_hard            9999 //進階難度
		sm_cvar z_mob_spawn_min_interval_expert          9999 //專家難度
		
		sm_cvar z_mob_spawn_max_interval_easy            9999
		sm_cvar z_mob_spawn_max_interval_normal          9999
		sm_cvar z_mob_spawn_max_interval_hard            9999
		sm_cvar z_mob_spawn_max_interval_expert          9999
		```
</details>

* <details><summary>指令中文介紹</summary>

	* cfg/sourcemod/l4d2_horde_equaliser.cfg
		```php
		// 提示剩餘的屍潮數量 [1=每到1/4階段提示一次, 2=每一隻殭屍提示一次] (0=off)
		l4d2_horde_equaliser_checkpoint_announce "1"

		// 為1時，Tank存活期間，無限屍潮暫停刷殭屍
		l4d2_horde_equaliser_no_tank_horde "0"
		```
</details>

* <details><summary>文件設定範例</summary>

	* [data/l4d2_horde_equaliser.cfg](data/l4d2_horde_equaliser.cfg)
		> 內有中文說明，可點擊查看
</details>