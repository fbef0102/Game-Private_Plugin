# Description | 內容
Showing the time played on record in steam profile while player joins the server

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Image | 圖示
	* image 1
	<br/>![sm_PlayerTime_1](image/sm_PlayerTime_1.jpg)
	* image 2
	<br/>![sm_PlayerTime_2](image/sm_PlayerTime_2.jpg)
	* image 3
	<br/>![sm_PlayerTime_3](image/sm_PlayerTime_3.jpg)

* Apply to | 適用於
```
L4D1
L4D2
```

* Changelog | 版本日誌
```
v1.8
-Remake Code
```

* Require | 必要安裝
	1. [[INC] Multi Colors](https://forums.alliedmods.net/showthread.php?t=247770)
	2. [REST in Pawn](https://forums.alliedmods.net/showthread.php?t=298024)

* Important | 重要步驟
	1. Install first and start Server, auto-generate cfg\sourcemod\sm_PlayerTime.cfg file
	2. Close Server, Go [Steam Website](https://steamcommunity.com/dev/apikey) to register your write down your Steam Web API.
	3. Modify cvar 'sm_playtime_apikey' in sm_PlayerTime.cfg file
	4. Start Server 

* Note | 注意事項
	* Both player total time played from Steam Personal Page and from In Game Stats are different.
	* If play does not set "My basic details: Public" and "Game details: Public" in "Privacy Settings", total time played is unknown.

<details>
<summary>ConVar (Click to expand!) 指令 (點我展開)</summary>

* cfg/sourcemod/sm_PlayerTime.cfg
	```php
	// If 1, Announce the time played on record when player joins the server.
	sm_playtime_announce "1"

	// Steam developer web API key. (https://steamcommunity.com/dev/apikey)
	sm_playtime_apikey "XXXXXXXXXXXXXXXXXXXX"

	// Application ID of current game. HL2:DM (320), CS:S (240), CS:GO (730), TF2 (440), L4D (500), L4D2 (550)
	sm_playtime_appid "550"

	// Ban duration (Mins) (0=Permanent)
	sm_playtime_block_ban_time "1440"

	// Check and unblock players with these flags. (Empty = Everyone, -1: Nobody)
	sm_playtime_block_immue_flag "z"

	// Any player whose total time played on record is higher this value can not join the server. (Mins) (0=off)
	sm_playtime_block_long "0"

	// Any player whose total time played on record is below this value can not join the server. (Mins) (0=off)
	sm_playtime_block_short "6000"

	// Any player whose total time played on record is unknown can not join the server. (0=off)
	sm_playtime_block_unknown "0"

	// If 1, record to file. (Path: sourcemod/logs/PlayerTime.log)
	sm_playtime_log "1"

	// Get player time played from 0: Steam Personal Page, 1: In Game Stats.
	sm_playtime_method "0"
	```
</details>

<details>
<summary>Command (Click to expand!) | 指令 (點我展開)</summary>

* <b>Check total time played of every player in game</b>
	```
	sm_timedisplay
	```
</details>

- - - -
# 中文說明
當玩家連線進來伺服器之後，顯示玩家的遊戲時數

* 功能
	1. 可顯示玩家Steam頁面上遊戲時數 或 遊戲統計資料抓取的遊戲時數
	2. 可運作其他的遊戲
	3. logs記錄檔
	4. 遊戲時數過少的菜B八將會被踢出伺服器
	5. 遊戲時數過高的大佬將會被踢出伺服器
	6. 遊戲時數未知的神祕高手將會被踢出伺服器

* 重要步驟
	1. 先安裝插件，開啟伺服器，會自動產生　cfg\sourcemod\sm_PlayerTime.cfg 檔案
	2. 關閉伺服器，到 [官網](https://steamcommunity.com/dev/apikey) 註冊您的 Steam Web API 金鑰
	3. 開啟sm_PlayerTime.cfg檔案，修改指令'sm_playtime_apikey'並寫下自己的序號
	4. 開啟伺服器

* 注意事項
	* '從Steam頁面上抓取遊戲時數' 跟 '從遊戲統計資料抓取的遊戲時數' 會有所不同
	* 如果玩家在自己的'Steam隱私設定'中沒有設置 "我的基本資料:公開" 和 "遊戲資料:公開"，那麼遊戲時數會顯示未知.
