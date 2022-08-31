Showing the time played on record in steam profile while player joins the server

-----This plugin is private, Please contact me-----
-----此為私人插件, 請聯繫本人-----
(https://github.com/fbef0102/Game-Private_Plugin#%E7%A7%81%E4%BA%BA%E6%8F%92%E4%BB%B6%E5%88%97%E8%A1%A8-private-plugins-list)


-Apply to-
L4D1/2

-Changelog-
v1.8

-Require-
1. [INC] Multi Colors: https://forums.alliedmods.net/showthread.php?t=247770
2. REST in Pawn: https://forums.alliedmods.net/showthread.php?t=298024

-Important-
1. Install first and start Server, auto-generate cfg\sourcemod\sm_PlayerTime.cfg file
2. Close Server, Go https://steamcommunity.com/dev/apikey to register your write down your Steam Web API.
3. Modify cvar 'sm_playtime_apikey' in sm_PlayerTime.cfg file
4. Start Server 

-Note-
* Both player total time played from Steam Personal Page and from In Game Stats are different.
* If play does not set "My basic details: Public" and "Game details: Public" in "Privacy Settings", total time played is unknown.

-ConVar-
cfg/sourcemod/sm_PlayerTime.cfg
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

-Command-
**Check total time played of every player in game
	"sm_timedisplay"


-------中文說明-------
當玩家連線進來伺服器之後，顯示玩家的遊戲時數

-重要步驟-
1. 先安裝插件，開啟伺服器，會自動產生　cfg\sourcemod\sm_PlayerTime.cfg 檔案
2. 關閉伺服器，到 https://steamcommunity.com/dev/apikey 註冊您的 Steam Web API 金鑰
3. 開啟sm_PlayerTime.cfg檔案，修改指令'sm_playtime_apikey'並寫下自己的序號
4. 開啟伺服器

-注意事項-
* '從Steam頁面上抓取遊戲時數' 跟 '從遊戲統計資料抓取的遊戲時數' 會有所不同
* 如果玩家在自己的'Steam隱私設定'中沒有設置 "我的基本資料:公開" 和 "遊戲資料:公開"，那麼遊戲時數會顯示未知.
