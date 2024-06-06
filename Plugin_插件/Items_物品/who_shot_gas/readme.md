# Description | 內容
Type !gas to disaply who shot the last gas can. + Announce when gas can being shot.

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Video | 影片展示
<br/>None

* Image | 圖示
	* who is the culprit (打爆汽油桶的兇手)
	<br/>![who_shot_gas_1](image/who_shot_gas_1.jpg)
	* !shotgas: display the last players who shot the gas (指令!shotgas顯示)
	<br/>![who_shot_gas_2](image/who_shot_gas_2.jpg)
	* announce message when player destroyed the gas (即時顯示)
	<br/>![who_shot_gas_3](image/who_shot_gas_3.jpg)
	* !gas: display all players' gascan destroyed stats. (指令!gas顯示)
	<br/>![who_shot_gas_4](image/who_shot_gas_4.jpg)

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	2. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/who_shot_gas.cfg
		```php
		// Output to the chat last X players to explodes (last hit) a gascan. (0=OFF)
		who_shot_gas_number "5"

		// If 1, Ignore gas can being shot before game starts (Survival/Scavenge)
		who_shot_gas_ignore_before_game "1"

		// If 1, Ignore gas can if ignited by fire
		who_shot_gas_ignore_fire "0"

		// If 1, Ignore gas can if ignited by special infected (Ex. Spitter)
		who_shot_gas_ignore_infected "1"

		// If 1, Announce when red gas can being shot.
		who_shot_gas_announce_when_destroy_red "1"

		// (L4D2) If 1, Announce when yellow gas can (scavenge) being shot.
		who_shot_gas_announce_when_destroy_yellow "1"

		// (L4D2) If 1, Announce when green gas can (scavenge) being shot.
		who_shot_gas_announce_when_destroy_green "1"
		```
</details>

* <details><summary>Command | 命令</summary>
	
	* **Output to the chat the last player to explodes (last hit) a gascan.**
		```php
		sm_shotgas
		```

	* **Output to the chat all players' gascan destroyed stats.**
		```php
		sm_gas
		```
</details>

* Apply to | 適用於
	```
	L4D1
	L4D2
	```

* <details><summary>Translation Support | 支援翻譯</summary>

	```
	English
	繁體中文
	简体中文
	```
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.4 (2023-3-4)
		* Count red / yellow / green gascan separately

	* v1.3 (2023-3-1)
		* Add cvars
			```php
			// If 1, Ignore gas can if ignited by fire
			who_shot_gas_ignore_fire "0"

			// If 1, Ignore gas can if ignited by special infected (Ex. Spitter)
			who_shot_gas_ignore_infected "1"
			```

	* v1.2 (2023-2-28)
		* Add Commands, 
			```php
			sm_surgas, "Output to the chat the last player to explodes (last hit) a gascan. (Survival Only)"

			sm_scavgas, "Output to the chat all players' gascan destroyed stats. (L4D2 Scavenge Only)"
			```

	* v1.1 (2023-2-28)
		* Translation Support
		* Add cvars
			```php
			// If 1, Announce when gas can being shot.
			who_shot_gas_announce_when_destroy "1"

			// If 1, Ignore gas can being shot before game starts (Survival/Scavenge)
			who_shot_gas_ignore "1"
			```

	* v1.0
		* Initial Release
</details>

- - - -
# 中文說明
誰他馬打爆最後一個汽油桶

* 原理
	* 汽油桶被摧毀時，聊天窗顯示兇手
	* 生存/清道夫模式下計時開始之前，忽略被摧毀的汽油桶

* 用意在哪?
	* 哪位傻B點燃汽油桶，適合生存/清道夫模式之下找出兇手

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/who_shot_gas.cfg
		```php
		// 顯次最後五個摧毀汽油桶的兇手 (0=關閉)
		who_shot_gas_number "5"

		// 為1時，遊戲計時開始之前忽略摧毀的汽油桶 (生存/清道夫 模式)
		who_shot_gas_ignore_before_game "1"

		// 為1時，忽略被火焰摧毀的汽油桶
		who_shot_gas_ignore_fire "0"

		// 為1時，忽略被Spitter摧毀的汽油桶
		who_shot_gas_ignore_infected "1"

		// 為1時，當紅色的汽油桶被摧毀時顯示公告
		who_shot_gas_announce_when_destroy_red "1"

		// (L4D2) 為1時，當黃色的汽油桶被摧毀時顯示公告
		who_shot_gas_announce_when_destroy_yellow "1"

		// (L4D2) 為1時，當綠色的汽油桶被摧毀時顯示公告
		who_shot_gas_announce_when_destroy_green "1"
		```
</details>

* <details><summary>命令中文介紹 (點我展開)</summary>
	
	* **查看誰摧毀最後幾個汽油桶**
		```php
		sm_shotgas
		```

	* **查看玩家摧毀汽油桶的數量**
		```php
		sm_gas
		```
</details>
