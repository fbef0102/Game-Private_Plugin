# Description | 內容
Tank will bring lots of friends when spawns

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Apply to | 適用於
	```
	L4D1
	L4D2
	```

* Image | 圖示
	![l4d_tank_spawn_more_si_1](image/l4d_tank_spawn_more_si_1.gif)

* <details><summary>How does it work?</summary>

	* When tank spawns, spawn more tanks or witches or special infecteds on the first tank's location
	* Modify spawn probability and amount in data file: [data/l4d_tank_spawn_more_si.cfg](data/l4d_tank_spawn_more_si.cfg)
		* Manual in this file
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	2. [spawn_infected_nolimit](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/spawn_infected_nolimit)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_tank_spawn_more_si.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d_tank_spawn_more_si_enable "1"
		```
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.0 (2025-7-2)
		* Initial Release
</details>

- - - -
# 中文說明
Tank生成時有機率出現多個Tank、Witch、特感

* 原理
	* Tank生成時有機率出現多個Tank
	* Tank生成時有機率出現Witch
	* Tank生成時有機率出現其他特感
	* 修改機率與數量請查看文件: [data/l4d_tank_spawn_more_si.cfg](data/l4d_tank_spawn_more_si.cfg)
		* 內有說明書

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d_tank_spawn_more_si.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		l4d_tank_spawn_more_si_enable "1"
		```
</details>

