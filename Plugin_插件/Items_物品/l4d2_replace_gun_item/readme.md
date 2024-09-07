# Description | 內容
Delete weapons and items on the map and replace guns/items/melees with other guns/items/melees

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Video | 影片展示
<br/>None

* Image | 圖示
<br/>![l4d2_replace_gun_item_1](image/l4d2_replace_gun_item_1.jpg)
<br/>![l4d2_replace_gun_item_2](image/l4d2_replace_gun_item_2.jpg)

* <details><summary>How does it work?</summary>

	* Detect all weapons/items/melees on round start and replace with other guns/items/melees or just remove
	* Modify ```data/l4d2_replace_gun_item.cfg``` 
		* Replace big guns with other guns
		* Replace items with other items
		* Replace melees with other guns
</details>

* Require | 必要安裝
	1. [[INC] l4d2_weapons](/left4dead2/scripting/include/l4d2_weapons.inc)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d2_replace_gun_item.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d2_replace_gun_item_enable "1"

		// Replace the weapon if the weapon is late spawn during the game.
		l4d2_replace_gun_item_late_spawn "0"

		// Replace the primary weapon
		l4d2_replace_gun_item_primary "1"

		// Replace the secondary weapon.
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

* <details><summary>Command | 命令</summary>

	None
</details>

* <details><summary>API | 串接</summary>

	```php
	Registers a library name: l4d2_replace_gun_item
	```
	* ```scripting\include\l4d2_replace_gun_item.inc```
</details>

* <details><summary>Data Config</summary>

	* data/l4d2_replace_gun_item.cfg
		```php
		"l4d2_replace_gun_item"
		{
			"Weapons" // Do not modify this line
			{
				"weapon_pumpshotgun"
				{
					// -1=Don't remove or replace
					"replace" "-1"
				}
				"weapon_autoshotgun"
				{
					// replace autoshotgun with pumpshotgun
					"replace" "weapon_pumpshotgun"
				}
				"weapon_sniper_awp"
				{
					// replace awp with melee: fireaxe 
					"replace" 			"weapon_melee"
					"melee_name"		"fireaxe"

					// If fireaxe failed to spawn => replace with shotgun instead
					"second_replace"	"weapon_shotgun_chrome"	
				}
			}

			"Special"
			{
				"weapon_oxygentank"
				{
					// Empty = Remove Weapon
					"replace" ""
				}
				"weapon_gascan"
				{
					// Will NOT replace scavenge gascan
					"replace" "weapon_adrenaline"
				}
			}

			"Melee"
			{
				// Default replace for melee weapons
				"default"
				{
					"replace" "-1"
				}

				// Add other custom weapon if you want
				...

			}
		}
		```
</details>

* Apply to | 適用於
	```
	L4D2 Any Mode
	```

* <details><summary>Changelog | 版本日誌</summary>
	
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
		* 地圖載入後，將所有治療包與電擊器刪除並替換成藥丸
		* 設定文件```data/l4d2_replace_gun_item.cfg```，刪除並替換成其他武器/物品/近戰
	* 遊戲中途生成或掉落的物資也能被替換，譬如
		* 墮落生還者掉落的物資
		* CEDA掉落的膽汁瓶
		* 綠色補給箱的無限物資
		* 警察掉落的警棍

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d2_replace_gun_item.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		l4d2_replace_gun_item_enable "1"

		// 為1時，替換遊戲中途生成或掉落的物資 (譬如管理員生成物品、墮落生還者掉落的物資、CEDA掉落的膽汁瓶、綠色補給箱的無限物資).
		l4d2_replace_gun_item_late_spawn "0"

		// 為1時，偵測主武器的槍械並取代
		l4d2_replace_gun_item_primary "1"

		// 為1時，偵測副武器的槍械並取代
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

* <details><summary>文件設定範例</summary>

	* data/l4d2_replace_gun_item.cfg
		```php
		"l4d2_replace_gun_item"
		{
			"Weapons" // 武器列表
			{
				"weapon_pumpshotgun"
				{
					// -1 = 單發散彈槍不刪除也不取代
					"replace" "-1"
				}
				"weapon_autoshotgun"
				{
					// 連發散彈槍刪除並替換成單發散彈槍
					"replace" "weapon_pumpshotgun"
				}
				"weapon_sniper_awp"
				{
					// AWP 替換成近戰武器: 斧頭
					"replace" 			"weapon_melee"
					"melee_name"		"fireaxe"

					// 如果要斧頭近戰無法生成，則另取代成其他武器
					"second_replace"	"weapon_shotgun_chrome"	
				}
			}

			"Special"  // 特殊物品列表
			{
				"weapon_oxygentank"
				{
					// 留白 = 移除所有瓦斯桶
					"replace" ""
				}
				"weapon_gascan"
				{
					// 不會影響黃色與綠色的汽油桶
					// 所有汽油桶替換成腎上腺素
					"replace" "weapon_adrenaline"
				}
			}

			"Melee" // 近戰武器列表
			{
				// 預設的替換
				"default"
				{
					"replace" "-1"
				}

				// 自行新增其他三方圖近戰
				...
				
			}
		}
		```
</details>