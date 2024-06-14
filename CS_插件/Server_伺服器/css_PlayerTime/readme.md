# Description | 內容
Showing the time played in Game Stats and country while player joins the server
(Get Game total time played even if the steam profile is publicly visible. Private, friends-only, and other privacy settings)

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)
🟥Dedicated Server Only<br/>
🟥只能安裝在Dedicated Server

* Video | 影片展示
<br>None

* Image
	* Name, country, city, time played
	<br/>![css_PlayerTime_1](image/css_PlayerTime_1.jpg)

* <details><summary>How does it work?</summary>

	* Display Name, country, city, play time, lerp on client connection
	* Played time is from game statistics
	* Any player whose total time played is below 1 hour can not join the server.
</details>

* Important Step
	* To retrieve country and city from client, You must [install country and city database](/Tutorial_%E6%95%99%E5%AD%B8%E5%8D%80/English/Server/Install_Other_File#country-and-city-database)

* Require | 必要安裝
	1. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)
	2. [SteamWorks](https://github.com/hexa-core-eu/SteamWorks/releases/tag/v1.2.3)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/css_PlayerTime.cfg
		```php
		// Application ID of current game. CS:S (240), CS:GO (730)
		css_PlayerTime_appid "240"

		// If 1, Announce the time played when player joins the server.
		css_PlayerTime_announce "1"

		// Announce the time played 1=Every time map change, 0=Only when join server
		css_PlayerTime_map_change "0"

		// If 1, record to file. (Path: sourcemod/logs/PlayerTime.log)
		css_PlayerTime_log "1"

		// Check and unblock players with these flags. (Empty = Everyone, -1: Nobody)
		css_PlayerTime_block_immue_flag "z"

		// Ban duration (Mins) (0=Permanent)
		css_PlayerTime_block_ban_time "1440"

		// Any player whose total time played is below this value can not join the server. (Mins) (0=off)
		css_PlayerTime_block_short "60"

		// Any player whose total time played is higher this value can not join the server. (Mins) (0=off)
		css_PlayerTime_block_long "0"

		// Any player whose total time played is unknown can not join the server. (0=off)
		css_PlayerTime_block_unknown "0"
		```
</details>

* <details><summary>Command | 命令</summary>

	* **Check total time played of every player in game**
		```php
		sm_timedisplay
		```
</details>

* Apply to | 適用於
	```
	CSS
	CSGO
	```

* <details><summary>Translation Support | 支援翻譯</summary>

	```
	English
	繁體中文
	简体中文
	```
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.1 (2024-6-15)
		* Update Cvars
		* Fixed not working well in sourcemod 1.12

	* v1.0 (2023-3-8)
		* Initial Release
</details>

- - - -
# 中文說明
當玩家連線進來伺服器之後，顯示玩家的遊戲時數與地區

* 圖示
	* 名子、地區、遊戲總時數
	<br/>![zho/css_PlayerTime_1_zho](image/zho/css_PlayerTime_1_zho.jpg)

* 原理
	* 玩家進來伺服器之時，抓取他的實際遊玩時數 (與'Steam個人檔案上顯示的遊戲時數'會有所不同)
	* 即使玩家的steam個人資料設定未公開，依然可以抓取實際遊玩時數

* 必看步驟
	* 抓取玩家的地理位置，需[安裝國家與城市的資料庫](/Tutorial_%E6%95%99%E5%AD%B8%E5%8D%80/Chinese_%E7%B9%81%E9%AB%94%E4%B8%AD%E6%96%87/Server/%E5%AE%89%E8%A3%9D%E5%85%B6%E4%BB%96%E6%AA%94%E6%A1%88%E6%95%99%E5%AD%B8#%E5%AE%89%E8%A3%9D%E5%9C%8B%E5%AE%B6%E8%88%87%E5%9F%8E%E5%B8%82%E7%9A%84%E8%B3%87%E6%96%99%E5%BA%AB)

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/sm_PlayerTime.cfg
		```php
		// 遊戲專屬的ID，安裝在L4D寫500，安裝在L4D2寫550
		css_PlayerTime_appid "550"

		// 為1時，玩家連線時顯示遊戲時數
		css_PlayerTime_announce "1"

		// 何時顯示遊戲時數, 1=每次換圖時, 0=玩家第一次加入伺服器時
		css_PlayerTime_map_change "0"

		// 為1時，將玩家的遊戲時數記錄到logs裡面 (路徑為: sourcemod/logs/PlayerTime.log)
		css_PlayerTime_log "1"

		// 擁有這些權限的玩家，不會因為遊戲時數而被封鎖 (留白 = 任何人都不會被封鎖, -1: 任何人都會被封鎖)
		css_PlayerTime_block_immue_flag "z"

		// 封鎖時間 (單位: 分鐘，0=永久)
		css_PlayerTime_block_ban_time "1440"

		// 遊戲時數少於此數值的玩家將會被封鎖 (單位: 分鐘，0=關閉這項功能)
		css_PlayerTime_block_short "6000"

		// 遊戲時數大於此數值的玩家將會被封鎖 (單位: 分鐘，0=關閉這項功能)
		css_PlayerTime_block_long "0"

		// 遊戲時數未知的玩家將會被封鎖 (0=關閉這項功能)
		css_PlayerTime_block_unknown "0"
		```
</details>

* <details><summary>命令中文介紹 (點我展開)</summary>

	* **查看所有玩家的遊戲時數**
		```php
		sm_timedisplay
		```
</details>
