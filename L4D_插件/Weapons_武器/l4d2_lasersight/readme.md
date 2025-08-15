# Description | 內容
Auto upgrade laser sights to weapons or manually upgrade by commands

> __Note__ <br/>
This plugin is private, Please contact [me](/#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](/#私人插件列表-private-plugins-list)

* Apply to | 適用於
	```
	L4D2
	```

* [Video | 影片展示](https://youtu.be/eNFcXMafLuQ)

* <details><summary>How does it work?</summary>

	* Pick up weapons -> Auto upgrade laser sights
	* Type ```!laser``` -> on/off upgrade sight
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	2. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d2_lasersight.cfg
		```php
		//  How long do the commands 'cool down' (0=No cold down)
		l4d2_lasersight_delay "1.0"

		// If 1, Auto upgrade laser sight when survivors pick up primary weapons
		l4d2_lasersight_auto "1"

		// If 1, block laser command once game starts (survivors leaving saferoom / survival or scavenge begins)
		l4d2_lasersight_game_block "0"

		// If 1, block laser command if there are no any upgrade_laser_sight on the map
		l4d2_lasersight_map_block "0"
		```
</details>

* <details><summary>Command | 命令</summary>

	* **Toggle laser sight**
		```php
		sm_laser
		```
</details>

* Translation Support | 支援翻譯
	```
	translations/l4d2_lasersight.phrases.txt
	```

* <details><summary>Changelog | 版本日誌</summary>

	* v1.2h (2024-11-4)
		* Auto upgrade laser sight when survivors pick up primary weapons
		* Update cvars
		* Update cmds

	* v1.1h (2024-9-3)
		* Add translation file

	* v1.0h (2022-11-27)
		* Remake code
		* Add cvars amd command limit

	* v0.0
		* [By AtomicStryker](https://forums.alliedmods.net/showthread.php?t=97946)
</details>

- - - -
# 中文說明
武器自動升級紅外線雷射或輸入指令升級

* 原理
	* 拿主武器，自動升級紅外線雷射
	* 或拿主武器，輸入```!laser```，開關紅外線雷射

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d2_lasersight.cfg
		```php
		// 使用!laser的冷卻時間 (0=無冷卻時間)
		l4d2_lasersight_delay "1.0"

		// 為1時，玩家撿起主武器時，自動升級紅外線雷射
		l4d2_lasersight_auto "1"

		// 為1時，遊戲開始後不能使用指令 (倖存者離開安全區域 / 生存或清道夫模式計時開始)
		l4d2_lasersight_game_block "0"

		// 為1時，地圖上沒有紅外線雷射升級裝置時，不能使用指令
		l4d2_lasersight_map_block "0"
		```
</details>

* <details><summary>命令中文介紹 (點我展開)</summary>

	* **開/關紅外線**
		```php
		sm_laser
		```
</details>
