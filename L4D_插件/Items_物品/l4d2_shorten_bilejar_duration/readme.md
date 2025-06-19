# Description | 內容
Shorten bile jar effect duration as soon as it shatters

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Apply to | 適用於
	```
	L4D2
	```

* Image | 圖示
	<br/>![l4d2_shorten_bilejar_duration_1](image/l4d2_shorten_bilejar_duration_1.gif)

* <details><summary>How does it work?</summary>

	* Shorten bile jar effect duration if hit on the ground
	* Can not Shorten bile jar cloud Particle Effect duration
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	2. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d2_shorten_bilejar_duration.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d2_shorten_bilejar_duration_enable "1"

		// Set bile jar effect duration on the ground (Default: 20s, Max: 20s, 0=Remove bile jar effect)
		l4d2_shorten_bilejar_duration_time "20"
		```
</details>

* <details><summary>Related Official ConVar</summary>

	* [vomitjar_projectile](https://developer.valvesoftware.com/wiki/Vomitjar_projectile)
	* You can write down the following cvars in ```cfg/server.cfg``` and modify value
		```php
		// bilejar effect duration if hits any special infected
		sm_cvar vomitjar_duration_infected_bot 		20

		// bilejar effect duration if hits any common infected
		sm_cvar vomitjar_duration_infected_pz 		20
		```
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.0 (2024-6-6)
		* Initial Release
</details>

- - - -
# 中文說明
縮短膽汁瓶破碎後的效果持續時間

* 原理
	* 人類丟膽汁瓶在地上，膽汁瓶破碎後吸引殭屍的效果持續時間 <= 此插件可縮短時間
	* 無法縮短膽汁霧氣的特效時間，認真你就輸了

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d2_shorten_bilejar_duration.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		l4d2_shorten_bilejar_duration_enable "1"

		// 丟膽汁瓶在地上，膽汁瓶破碎後吸引殭屍的效果持續時間 (預設: 20秒, 最大: 20秒, 0=破碎後直接移除效果)
		l4d2_shorten_bilejar_duration_time "20"
		```
</details>

* <details><summary>相關的官方指令中文介紹 (點我展開)</summary>

	* [膽汁瓶投擲物官方介紹](https://developer.valvesoftware.com/wiki/Vomitjar_projectile)
	* 可將以下指令寫在 ```cfg/server.cfg``` 並自行修改
		```php
		// 膽汁瓶丟在特感身上的效果時間
		sm_cvar vomitjar_duration_infected_bot 		20

		// 膽汁瓶丟在普通殭屍身上的效果時間
		sm_cvar vomitjar_duration_infected_pz 		20
		```
</details>
