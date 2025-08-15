# Description | 內容
Delete weapons and items on the map and replace guns/items/melees with other guns/items/melees

> __Note__ <br/>
This plugin is private, Please contact [me](/#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](/#私人插件列表-private-plugins-list)

* Apply to | 適用於
	```
	L4D2 Any Mode
	```

* Image | 圖示
<br/>![l4d2_replace_gun_item_1](image/l4d2_replace_gun_item_1.jpg)
<br/>![l4d2_replace_gun_item_2](image/l4d2_replace_gun_item_2.jpg)

* <details><summary>How does it work?</summary>

	* Detect all weapons/items/melees and replace with other guns/items/melees on round start 0.8 sec later
	* Replace the weapon if the weapon is late spawn during the game. For example:
		* Bile jar, nightstick from uncommon infected
		* Items from Foot Locker
	* Modify [data/l4d2_replace_gun_item.cfg](data/l4d2_replace_gun_item.cfg)
		* Replace big guns with other guns
		* Replace items with other items
		* Replace melees with other guns
</details>

* Require | 必要安裝
	1. [[INC] l4d2_weapons](/L4D_插件/Require_檔案/scripting/include/l4d2_weapons.inc)
	2. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)

* <details><summary>Support | 支援插件</summary>

	1. [ItemTracking](/L4D_插件/Items_物品/ItemTracking): Control weapons and items limit on map
		* 控制地圖上的武器、物品的數量與限制
</details>

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d2_replace_gun_item.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d2_replace_gun_item_enable "1"

		// If 1, Replace the weapon if the weapon is late spawn during the game. Ex: Foot Locker, fallen survivor... (0=Don't replace)
		l4d2_replace_gun_item_late_spawn "0"

		// If 1, Replace the weapon & item if survivor carries them. (0=Don't replace)
		l4d2_replace_gun_item_player_in_use "0"

		// If 1, Replace the weapon & item if dropped from survivor. Ex: Survivor death, take new weapon... (0=Don't replace)
		l4d2_replace_gun_item_player_drop "0"

		// Replace the primary weapon
		l4d2_replace_gun_item_primary "1"

		// Replace the secondary weapon. (Not including melee)
		l4d2_replace_gun_item_secondary "1"

		// Replace the throwable weapon.
		l4d2_replace_gun_item_throwable "1"

		// Replace the heavy health item (slot 4 weapon).
		l4d2_replace_gun_item_heavy_health "1"

		// Replace the light health item (slot 5 weapon).
		l4d2_replace_gun_item_light_health "1"

		// Replace the Special Items.
		l4d2_replace_gun_item_special "1"

		// If 1, Replace the Melee weapons.
		l4d2_replace_gun_item_melee "1"

		```
</details>

* <details><summary>API | 串接</summary>

	* [l4d2_replace_gun_item.inc](scripting\include\l4d2_replace_gun_item.inc)
		```php
		library name: l4d2_replace_gun_item
		```
</details>

* <details><summary>Changelog | 版本日誌</summary>
	
	* v1.6 (2025-3-31)
	* v1.5 (2025-3-21)
		* Fixed not replace prop items (cola, gnome...)
		* Need to update l4d2_weapons.inc and recompile
		* Require left4dhooks

	* v1.4 (2025-3-4)
		* Replace the weapon & item if dropped from survivor
		* Update cvars
		
	* v1.3 (2024-11-9)
		* Update cvars

	* v1.2 (2024-9-7)
		* Replace melee weapons with other weapons/items or replace other weapons/items with melee weapons 
		* Updata data file
		* Update cvar

	* v1.1 (2023-7-1)
	    * Fixed scavenge gascan removed

	* v1.0 (2023-5-3)
	    * Initial Release
</details>

- - - -
# 中文說明
刪除地圖上的大槍、治療包、近戰、其他投擲物與物品，並替換成其他武器、物品、近戰

* 原理
	* 地圖載入後的0.8秒後
		* 將所有大槍武器刪除並替換成小槍
		* 將所有治療包與電擊器刪除並替換成藥丸
	* 遊戲中途生成或掉落的物資也能被替換，譬如
		* 墮落生還者掉落的物資
		* CEDA掉落的膽汁瓶
		* 綠色補給箱的無限物資
		* 警察掉落的警棍
	* 設定文件[data/l4d2_replace_gun_item.cfg](data/l4d2_replace_gun_item.cfg)，自行設定其他武器/物品/近戰
		* 內有中文說明，可點擊查看
</details>

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d2_replace_gun_item.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		l4d2_replace_gun_item_enable "1"

		// 1=替換遊戲中途生成或掉落的物資 (譬如管理員生成物品、墮落生還者掉落的物資、CEDA掉落的膽汁瓶、綠色補給箱的無限物資).
		// 0=不替換
		l4d2_replace_gun_item_late_spawn "0"

		// 1=替換倖存者手上的武器與物資
		// 0=不替換
		l4d2_replace_gun_item_player_in_use "0"

		// 1=替換從倖存者身上掉落的武器與物資 (譬如玩家死亡、撿起新武器)
		// 0=不替換
		l4d2_replace_gun_item_player_drop "0"

		// 為1時，偵測主武器的槍械並取代
		l4d2_replace_gun_item_primary "1"

		// 為1時，偵測副武器的槍械並取代 (不包含近戰武器)
		l4d2_replace_gun_item_secondary "1"

		// 為1時，偵測投擲物品並取代
		l4d2_replace_gun_item_throwable "1"

		// 為1時，偵測slot 4物品並取代 (醫療包、電擊器、高爆彈包、燃燒彈包).
		l4d2_replace_gun_item_heavy_health "1"

		// 為1時，偵測slot 5物品並取代 (藥丸、腎上腺素).
		l4d2_replace_gun_item_light_health "1"

		// 為1時，偵測特殊物品並取代 (雷射裝置、子彈堆、瓦斯桶、氧氣罐、汽油桶、煙火盒、精靈小矮人、可樂瓶)
		l4d2_replace_gun_item_special "1"

		// 為1時，偵測近戰武器並取代 (支援三方圖近戰)
		l4d2_replace_gun_item_melee "1"
		```
</details>