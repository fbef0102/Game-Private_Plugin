# Description | 內容
Dynamic Adjust Tank HP depends on 5+ survivors in server

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Video | 影片展示
<br/>None

* Image | 圖示
	<br/>![l4d_tankhp_dynamic_adjust_1](image/l4d_tankhp_dynamic_adjust_1.jpg)

* <details><summary>How does it work?</summary>

	* Modify data file to adjust Tank HP depends on 5+ survivors in server 
</details>

* Require | 必要安裝
	1. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_tankhp_dynamic_adjust.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d_tankhp_dynamic_adjust_enable "1"

		// 1=Enable notify, 0=Disable notify
		l4d_tankhp_dynamic_adjust_hint "1"

		// Dynamic Adjust Tank Hp depends on, 0=the number of alive survivors, 1=the number of alive + dead survivors.
		l4d_tankhp_dynamic_adjust_including_dead "1"
		```
</details>

* <details><summary>Command | 命令</summary>

	None
</details>

* <details><summary>Data Config</summary>

	* ```data/l4d_tankhp_dynamic_adjust.txt```
		```php
		"l4d_tankhp_dynamic_adjust"
		{
			// example: If there are 6 survivors => Tank health is 5000hp 
			// "6"	"5000"

			// Tank hp is affected by gamemode and difficulty eventually. For example, set Tank health 4000hp, but
			// In Easy: 4000 * 0.75 = 3000
			// In Normal: 4000 * 1.0 = 4000
			// In Advanced/Expert: 4000 * 2.0 = 8000
			// In Versus/Scavenge mode: 4000 * 1.5 = 6000

			"1"		"4000"	
			"2"		"4000"	
			"3"		"4000"	
			"4"		"4000"	
			"5"		"5000"	
			"6"		"6000"
			...
		}
		```
</details>

* <details><summary>Related Official ConVar</summary>

	* This plugin already modified the following cvars, you don't need to change.

	| ConVar/Command  					| Parameters or default value 	| Effect|
	| -------------|:-----------------:|:-------------:|
	| z_tank_health 					| 4000   | Tank Zombie max health|
</details>


* Apply to | 適用於
	```
	L4D1
	L4D2
	```

* <details><summary>Changelog | 版本日誌</summary>

	* v1.0 (2024-7-15)
		* Initial Release
</details>

- - - -
# 中文說明
隨著玩家人數越多，Tank血量越厚

* 原理
	* 修改文件，根據玩家人數設置Tank的血量

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d_tankhp_dynamic_adjust.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		l4d_tankhp_dynamic_adjust_enable "1"

		// 1=啟用提示, 0=關閉提示
		l4d_tankhp_dynamic_adjust_hint "1"

		// 根據何種方式計算倖存者人數, 0=活著的倖存者人數, 1=活著+死亡的倖存者人數
		l4d_tankhp_dynamic_adjust_including_dead "1"
		```
</details>

* <details><summary>文件設定範例</summary>

	* ```data/l4d_tankhp_dynamic_adjust.txt```
		```php
		"l4d_tankhp_dynamic_adjust"
		{
			// 舉例: 六位倖存者時 => Tank血量為5000hp
			// "6"	"5000"

			// Tank血量會依照遊戲模式與難度自動做出最終調整，譬如設置Tank血量為4000，則
			// 1.簡單難度下Tank血量最終為 4000 * 0.75 = 3000
			// 2.一般難度下Tank血量最終為 4000 * 1.0 = 4000
			// 3.進階/專家難度下Tank血量最終為 4000 * 2.0 = 8000
			// 4.對抗/清道夫模式下Tank血量最終為 4000 * 1.5 = 6000

			"1"		"4000"	
			"2"		"4000"	
			"3"		"4000"	
			"4"		"4000"	
			"5"		"5000"	
			"6"		"6000"
			...
		}
		```
</details>

* <details><summary>相關的官方指令中文介紹 (點我展開)</summary>

	* 這個插件已經修改以下指令, 你無須更動

	| 指令  				| 預設值 	| 效果 |
	| -------------|:-----------------:|:-------------:|
	| z_tank_health 					| 4000   | Tank 血量|
</details>