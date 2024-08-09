# Description | 內容
Player can take an item on the map multi times depends on 5+ survivors in server

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/sSjRpDF2DR0)

* Image | 圖示
	* Take medical items multi times (一直拿一直爽)
	<br/>![l4d_more_supply_1](image/l4d_more_supply_1.gif)

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)

* <details><summary>How does it work?</summary>

	* Modify data file to adjust _spawn items count on the map when 5+ survivors in server 
		* Kits (weapon_first_aid_kit_spawn)
		* Pills (weapon_pain_pills_spawn)
		* Adrenaline shots (weapon_adrenaline_spawn)
		* Defibrillators (weapon_defibrillator_spawn)
		* Vomitjars (weapon_vomitjar_spawn)
		* Pipe Bombs (weapon_pipe_bomb_spawn)
		* Molotovs (weapon_molotov_spawn)
</details>

* Notice
	* Only change items' count after survivor leave the saferoom 

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_more_supply.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d_more_supply_enable "1"

		// Dynamic Adjust item count depends on, 0=the number of alive survivors, 1=the number of alive + dead survivors.
		l4d_more_supply_including_dead "1"
		```
</details>

* <details><summary>Command | 命令</summary>
	
	None
</details>

* <details><summary>Data Config</summary>

	* ```data/l4d_more_supply.txt```
		```php
		"l4d_more_supply"
		{
			//weapon_first_aid_kit_spawn
			"First Aid Kits"
			{
				// example: If there are 11 survivors => First Aid Kit count: 3
				// "11"	"3"	
				"1"		"1"	
				"2"		"1"	
				"3"		"1"	
				"4"		"1"	
				"5"		"2"	
				"6"		"2"	
				"7"		"2"	
				"8"		"2"
				"9"		"3"	
				"10"	"3"	
				"11"	"3"	
				"12"	"3"	
				"13"	"3"	
				"14"	"3"	
				"15"	"4"	
				"16"	"4"	

				...
			}	

			...
		}
		```
</details>

* Apply to | 適用於
	```
	L4D1
	L4D2
	```

* <details><summary>Related Plugin | 相關插件</summary>

	1. [MultiSlots](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4dmultislots): Allows additional survivor players in server when 5+ player joins the server
		* 創造5位以上倖存者遊玩伺服器
	2. [l4dinfectedbots](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4dmultislots): Spawns multi infected bots in any mode + allows playable special infected in coop/survival + unlock infected slots (10 VS 10 available)
		* 多特感生成插件，倖存者人數越多，生成的特感越多，且不受遊戲特感數量限制 + 解除特感隊伍的人數限制 (可達成對抗 10 VS 10 玩法)
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.1 (2024-8-7)
		* Add Data file
		* Update cvars

	* v1.0 (2023-4-1)
		* Initial Release
</details>

- - - -
# 中文說明
隨著玩家人數越多，地圖上的資源可以重複拿很多次

* 原理
	* 此插件控制地圖上的物品資源，可以重複拿很多次，提升遊戲樂趣
		* 治療包 (weapon_first_aid_kit_spawn)
		* 藥丸 (weapon_pain_pills_spawn)
		* 腎上腺素 (weapon_adrenaline_spawn)
		* 電擊器 (weapon_defibrillator_spawn)
		* 膽汁瓶 (weapon_vomitjar_spawn)
		* 土製炸彈 (weapon_pipe_bomb_spawn)
		* 火瓶 (weapon_molotov_spawn)
	* 此插件不影響地圖上的物品生成機率與生成數量
	* 此插件不影響從人類身上掉落在地上的物品
	* 修改文件，當倖存者變多時，物品可以拿取的次數越多

* 注意事項
	* 倖存者離開安全區域後才會改變物品的拿取次數

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d_more_supply.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		l4d_more_supply_enable "1"

		// 根據何種方式計算倖存者人數, 0=活著的倖存者人數, 1=活著+死亡的倖存者人數
		l4d_more_supply_including_dead "1"
		```
</details>

* <details><summary>文件設定範例</summary>

	* ```data/l4d_more_supply.txt```
		```php
		"l4d_more_supply"
		{
			//治療包
			"First Aid Kits"
			{
				// 舉例: 11位倖存者時 => 地圖上的治療包可以重複拿三次
				// "11"	"3"	

				// 自行修改
				"1"		"1"	
				"2"		"1"	
				"3"		"1"	
				"4"		"1"	
				"5"		"2"	
				"6"		"2"	
				"7"		"2"	
				"8"		"2"
				"9"		"3"	
				"10"	"3"	
				"11"	"3"	
				"12"	"3"	
				"13"	"3"	
				"14"	"3"	
				"15"	"4"	
				"16"	"4"	
				
				...
			}	

			...
		}
		```
</details>