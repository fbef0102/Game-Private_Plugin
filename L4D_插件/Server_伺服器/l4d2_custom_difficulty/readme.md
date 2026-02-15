# Description | 內容
Set your own custom difficulty and damage + vote to change custom difficulty

> __Note__ <br/>
This plugin is private, Please contact [me](/#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](/#私人插件列表-private-plugins-list)

* Apply to | 適用於
	```
	L4D1
	L4D2
	```

* Image
	* Free to modify custom difficulty and damage, image for reference only
	<br/>![l4d2_custom_difficulty_1](image/l4d2_custom_difficulty_1.jpg)
	<br/>![l4d2_custom_difficulty_2](image/l4d2_custom_difficulty_2.jpg)
	<br/>![l4d2_custom_difficulty_3](image/l4d2_custom_difficulty_3.jpg)

* <details><summary>How does it work?</summary>

	* Type ```!dvote``` -> select custom difficulty -> call vote to change -> load custom difficulty
	* Modify custom difficulty name and damage in file: [data/l4d2_custom_difficulty.cfg](addons/sourcemod/data/l4d2_custom_difficulty.cfg)
		* Manual in this file, click for more details...
	* Auto exec cfg when switching difficulties, for example:
		* impossible+ -> hard+ (exec reset.cfg -> hard+.cfg)
		* hard+ -> impossible++ (exec reset.cfg -> impossible++.cfg)
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	2. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)
	3. [builtinvotes](https://github.com/fbef0102/Game-Private_Plugin/releases/tag/builtinvotes)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d2_custom_difficulty.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d2_custom_difficulty_enable "1"

		// How many players at least to vote custom difficulty.
		l4d2_custom_difficulty_vote_need_player "4"

		// If 1, Block native difficulty vote and opens the plugin's difficulty selection menu instead
		l4d2_custom_difficulty_block_native_vote "1"
		```
</details>

* <details><summary>Command | 命令</summary>

	* **Vote To Change Custom Difficulty**
		```php
		sm_difficultyvote
		sm_dvote
		sm_vd
		sm_votedifficulty
		sm_difficulty
		sm_hard
		sm_hardcore
		```

	* **(Server Cmd) Load custom difficulty by index, starting from 1**
		```php
		z_custom_difficulty_index <number>
		```

	* **Admin can force pass the current vote (Adm Required: ADMFLAG_ROOT)**
		```php
		sm_vp
		```

	* **Admin can force cancel the current vote (Adm Required: ADMFLAG_ROOT)**
		```php
		sm_vc
		```
</details>

* <details><summary>API | 串接</summary>

	* [l4d2_custom_difficulty.inc](scripting/include/l4d2_custom_difficulty.inc)
		```php
		library name: l4d2_custom_difficulty
		```
</details>

* Translation Support | 支援翻譯
	```
	translations/l4d2_custom_difficulty.phrases.txt
	```

* <details><summary>Related | 相關插件</summary>

	1. [l4d2_vote_manager3](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4d2_vote_manager3): Unable to call valve vote if player does not have access
		* 沒有權限的玩家不能隨意發起官方投票
	2. [l4d2_vote_change](/L4D_插件/Server_伺服器/l4d2_vote_change): New Vote System (use L4D built-in votes UI)
		* 新型投票系統 (使用官方內建的投票)
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.4 (2026-2-16)
		* Fixed API variables
		* Add a listener for the native difficulty vote that intercepts the action and opens the plugin’s difficulty selection menu instead
		* Made reset.cfg execute consistently on any difficulty change
		* Always execute reset.cfg + difficulty.cfg after map change
		* Add "menu_desc" field support in data/cfg: Text Display in vote menu (via translation file) 
		* Added a few extra commands to open the menu.
		* Update cvars/data/transltion

	* v1.3 (2024-8-16)
		* Update API

	* v1.2 (2024-7-29)
		* Also apply to l4d1 

	* v1.1 (2024-7-21)
		* Update Cmds
		* Update data
		* Update API

	* v1.0 (2024-7-17)
		* Initial Release
</details>

- - - -
# 中文說明
自訂遊戲難度、特感傷害、殭屍傷害、Tank傷害、Witch傷害 + 投票更換自訂的難度

* 圖示
	* 可自行增修傷害與難度名稱，圖片僅供參考
	<br/>![zho/l4d2_custom_difficulty_1](image/zho/l4d2_custom_difficulty_1.jpg)
	<br/>![zho/l4d2_custom_difficulty_2](image/zho/l4d2_custom_difficulty_2.jpg)
	<br/>![zho/l4d2_custom_difficulty_3](image/zho/l4d2_custom_difficulty_3.jpg)

* 原理
	* 輸入```!dvote``` -> 選擇項目 -> 發起投票 -> 更換自訂的難度
	* 修改以下對倖存者的傷害
		* 特感傷害
		* 殭屍傷害
		* Tank傷害
		* Witch傷害
		* 友傷
		* 倒地/掛邊流血
	* 投票更換難度後自動執行的cfg文件，譬如
		* 專家+ -> 進階+ (先執行 reset.cfg -> 後執行 hard+.cfg)
		* 進階+ -> 專家++ (先執行 reset.cfg -> 後執行 impossible++.cfg)
	* 自由修改難度與傷害數值於文件: [data/l4d2_custom_difficulty.cfg](addons/sourcemod/data/l4d2_custom_difficulty.cfg)
		* 內有中文說明，可點擊查看
	
* <details><summary>指令中文介紹(點我展開)</summary>

	* cfg/sourcemod/l4d2_custom_difficulty.cfg
		```php
		// 0=插件關閉, 1=插件開啟.
		l4d2_custom_difficulty_enable "1"

		// 倖存者與特感隊伍總共要有X位真人玩家在場才能發起投票.
		l4d2_custom_difficulty_vote_need_player "4"

		// 為1時，禁止玩家使用官方投票更改難度並顯示此插件的投票菜單
		l4d2_custom_difficulty_block_native_vote "1"
		```
</details>

* <details><summary>命令中文介紹(點我展開)</summary>

	* **打開選單投票更換難度**
		```php
		sm_difficultyvote
		sm_dvote
		sm_vd
		sm_votedifficulty
		sm_difficulty
		sm_hard
		sm_hardcore
		```

	* **(伺服器專用) 強制載入該索引的自製難度, 索引數字從1開始**
		```php
		z_custom_difficulty_index <索引數字>
		```

	* **管理員可以強制通過 (權限: ADMFLAG_ROOT)**
		```php
		sm_vp
		```

	* **管理員可以強制否則 (權限: ADMFLAG_ROOT)**
		```php
		sm_vc
		```
</details>