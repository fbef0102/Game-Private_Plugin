# Description | 內容
Showing the time played on record in Game Stats and country while player joins the server
(Get Game total time played even if the steam profile is publicly visible. Private, friends-only, and other privacy settings)

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Video | 影片展示
<br>None

* Image
	* Name, country, city, time played
	<br/>![css_PlayerTime_1](image/css_PlayerTime_1.jpg)

* Apply to | 適用於
	```
	CSS
	CSGO
	```

* Translation Support | 支援翻譯
	```
	English
	繁體中文
	简体中文
	```

* <details><summary>Changelog | 版本日誌</summary>

	* v1.0 (2023-3-8)
		* Initial Release
</details>

* Require | 必要安裝
	1. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)
	2. [SteamWorks](https://github.com/hexa-core-eu/SteamWorks/releases)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/css_PlayerTime.cfg
		```php
		// If 1, Announce the time played on record when player joins the server.
		css_PlayerTime_announce "1"

		// Application ID of current game. CS:S (240), CS:GO (730)
		css_PlayerTime_appid "240"

		// Ban duration (Mins) (0=Permanent)
		css_PlayerTime_block_ban_time "1440"

		// Check and unblock players with these flags. (Empty = Everyone, -1: Nobody)
		css_PlayerTime_block_immue_flag "z"

		// Any player whose total time played on record is higher this value can not join the server. (Mins) (0=off)
		css_PlayerTime_block_long "0"

		// Any player whose total time played on record is below this value can not join the server. (Mins) (0=off)
		css_PlayerTime_block_short "60"

		// Any player whose total time played on record is unknown can not join the server. (0=off)
		css_PlayerTime_block_unknown "0"

		// If 1, record to file. (Path: sourcemod/logs/PlayerTime.log)
		css_PlayerTime_log "1"
		```
</details>

* <details><summary>Command | 命令</summary>

	* **Check total time played of every player in game**
		```php
		sm_timedisplay
		```
</details>

* Important Step
	* To retrieve country and city from client, You must [install country and city database](https://github.com/fbef0102/Game-Private_Plugin/tree/main/Tutorial_%E6%95%99%E5%AD%B8%E5%8D%80/English/Server/Install_Other_File#country-and-city-database)

- - - -
# 中文說明
當玩家連線進來伺服器之後，顯示玩家的遊戲時數與地區

* 圖示
	* 名子、地區、遊戲總時數
	<br/>![zho/css_PlayerTime_1_zho](image/zho/css_PlayerTime_1_zho.jpg)

* 原理
	* 玩家進來伺服器之時，抓取他的實際遊玩時數 (與'Steam個人檔案上顯示的遊戲時數'會有所不同)
	* 即使玩家的steam個人資料設定未公開，依然可以抓取實際遊玩時數

* 功能
	* logs記錄檔
	* 遊戲時數過少的菜B八將會被踢出伺服器
	* 遊戲時數過高的大佬將會被踢出伺服器
	* 遊戲時數未知的神祕高手將會被踢出伺服器

* 必看步驟
	* 抓取玩家的地理位置，需[安裝國家與城市的資料庫](https://github.com/fbef0102/Game-Private_Plugin/tree/main/Tutorial_%E6%95%99%E5%AD%B8%E5%8D%80/Chinese_%E7%B9%81%E9%AB%94%E4%B8%AD%E6%96%87/Server/%E5%AE%89%E8%A3%9D%E5%85%B6%E4%BB%96%E6%AA%94%E6%A1%88%E6%95%99%E5%AD%B8#%E5%AE%89%E8%A3%9D%E5%9C%8B%E5%AE%B6%E8%88%87%E5%9F%8E%E5%B8%82%E7%9A%84%E8%B3%87%E6%96%99%E5%BA%AB)
