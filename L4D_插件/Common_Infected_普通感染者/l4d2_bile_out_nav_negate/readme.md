# Description | 內容
If vomit jar is thrown at the place which is out of map (NAV), negate bile effect

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Apply to | 適用於
	```
	L4D2
	```
* Image | 圖示
	| Before (裝此插件之前)  			| After (裝此插件之後) |
	| -------------|:-----------------:|
	| ![l4d2_bile_out_nav_negate_before_1](image/l4d2_bile_out_nav_negate_before_1.gif)|![l4d2_bile_out_nav_negate_after_1](image/l4d2_bile_out_nav_negate_after_1.gif)|

* <details><summary>How does it work?</summary>

	* If vomit jar is thrown at the place which is out of map, remove the bile jar and it's effect
		* Unreachable NAV
		* Unreachable place
	* 🟥 Can't guarantee it 100% works on all maps
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	2. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d2_bile_out_nav_negate.cfg
		```php
		// Enable/Disable the plugin.
		// 0 = Disable, 1 = Enable.
		l4d2_bile_out_nav_negate_enable "1"

		// If 1, remove bilejar projectile if owner(the player who throws) left the game
		l4d2_bile_out_nav_negate_left_remove "1"

		// Radius to check for nav areas where bilejar landed
		l4d2_bile_out_nav_negate_radius "50.0"
		```
</details>

* <details><summary>Related Plugin | 相關插件</summary>

	1. [l4d2_vomitjar_out_of_nav_ignore](https://forums.alliedmods.net/showthread.php?t=342858): Makes infected ignore info_goal_infected_chase out of nav
		* 一樣的效果但不同的檢測方法，比較耗費伺服器的CPU
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.0 (2025-8-4)
		* Initial Release
</details>

- - - -
# 中文說明
如果丟膽汁瓶到地圖外面，則無效膽汁效果

* 原理
	* 玩家丟的膽汁瓶如果落在地圖外面，則無效膽汁效果
		1. 無法達到的區域 (被空氣牆擋住之類...)
		2. 沒有合法的NAV (地圖之外)
	* 🟥 無法保證100%都適用在所有地圖所有角落

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d2_bile_out_nav_negate.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		l4d2_bile_out_nav_negate_enable "1"

		// 為1時，玩家如果中途離開遊戲則移除他所丟出的膽汁瓶 (落地之前)
		l4d2_bile_out_nav_negate_left_remove "1"

		// 膽汁瓶落地附近檢查有合法的NAV地圖範圍 (數值越大或越小, 判定會越不准)
		l4d2_bile_out_nav_negate_radius "50.0"
		```
</details>