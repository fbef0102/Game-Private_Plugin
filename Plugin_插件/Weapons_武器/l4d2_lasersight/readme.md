# Description | 內容
L4D2 Upgrade Laser Sights by using commands

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/eNFcXMafLuQ)


* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d2_lasersight.cfg
	```php
	//  How long do the commands 'cool down' (0=No cold down)
	l4d2_lasersight_delay "1.0"

	// If 1, block laser command once survivors leaving saferoom or survival begins
	l4d2_lasersight_game_block "1"

	// If 1, block laser command if there are no any upgrade_laser_sight on the map
	l4d2_lasersight_map_block "1"
	```
</details>

* <details><summary>Command | 命令</summary>
	
	* **Upgrade laser sight**
	```php
	sm_laseron
	```

	* **Remove laser sight**
	```php
	sm_laseroff
	```

	* **Toggle laser sight**
	```php
	sm_laser
	```
</details>

* Image | 圖示
<br/>None

* Apply to | 適用於
	```
	L4D1
	L4D2
	```

* <details><summary>Changelog | 版本日誌</summary>

	```php
	//AtomicStryker @ 2009-2012
	//HarryPotter @ 2022
	```
    * v1.0h (2022-11-27)
	    * Remake code
        * Add cvars amd command limit

    * v0.0
	    * [By AtomicStryker](https://forums.alliedmods.net/showthread.php?t=97946)
</details>

- - - -
# 中文說明
玩家使用指令升級紅外線雷射

* 原理
	* 拿主武器，輸入!laser，升級紅外線雷射

* 功能
	* 可設置遊戲開始後不能使用指令
		* 這裡指的"遊戲開始"為倖存者離開安全區域或是生存模式計時開始
	* 可設置當地圖上沒有紅外線雷射升級裝置時，不能使用指令
