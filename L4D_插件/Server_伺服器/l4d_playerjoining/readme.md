# Description | 內容
Informs other players when a client connects to the server and changes teams.

> __Note__ <br/>
This plugin is private, Please contact [me](/#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](/#私人插件列表-private-plugins-list)
<br/>🟥Dedicated Server Only
<br/>🟥只能安裝在Dedicated Server

* Apply to | 適用於
	```
	L4D1 Dedicated Server
	L4D2 Dedicated Server
	```

* Image
	<br/>![l4d_playerjoining_1](image/l4d_playerjoining_1.jpg)
	<br/>![l4d_playerjoining_2](image/l4d_playerjoining_2.jpg)

* <details><summary>How does it work?</summary>

	* Display the following when player joins server
		* Player name
		* Country, city (you can translate)
	* Display the following when leaves server
		* Player name
		* Reason (you can translate)
	* Display the following when player changed team
		* Player name
</details>

* Require
	1. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)
	2. To retrieve data from client, You must [install country and city database](/Tutorial_教學區/English/Server/Install_Other_File#country-and-city-database)
		* 抓取玩家的地理位置，需[安裝國家與城市的資料庫](/Tutorial_教學區/Chinese_繁體中文/Server/安裝其他檔案教學#安裝國家與城市的資料庫)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_playerjoining.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d_playerjoining_enable "1"

		// If 1, inform other players when a client changes team
		l4d_playerjoining_change_team_notify_enable "1"

		// (Display country when Dedicated Server Only) inform other players with these flags when a client connects to server. (Empty = Everyone, -1: Nobody)
		l4d_playerjoining_connnect_server_notify_access ""

		// inform other players with these flags when a client left the server. (Empty = Everyone, -1: Nobody)
		l4d_playerjoining_leave_server_notify_access ""
		```
</details>


* Translation Support | 支援翻譯
	```
	translations\l4d_playerjoining.phrases.txt
	```

* <details><summary>Similar Plugin | 相似插件</summary>
	
	1. [cannounce](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/cannounce): Replacement of default player connection message, allows for custom connection messages
		> 顯示玩家進來遊戲或離開遊戲的提示訊息 (IP、國家、Steam ID 等等)
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.3 (2025-4-26)
		* Translate Country & City

	* v1.2 (2025-3-9)
		* Translate disconnect reason

	* v1.1 (2024-8-10)
		* Update translation
		* Support local server

	* v1.0 (2022-12-1)
		* Initial Release
</details>

- - - -
# 中文說明
當玩家更換隊伍、連線、離開伺服器之時，通知所有玩家

* 圖示
	* 當玩家更換隊伍時
	<br/>![zho/l4d_playerjoining_1](image/zho/l4d_playerjoining_1.jpg)
	* 當玩家連線、離開伺服器之時
	<br/>![zho/l4d_playerjoining_2](image/zho/l4d_playerjoining_2.jpg)

* 原理
	* 玩家連線進來伺服器時顯示
		* 玩家名稱
		* 玩家的國家與城市 (自行翻譯)
	* 玩家離開伺服器時顯示
		* 玩家名稱
		* 離開原因 (自行翻譯)
	* 玩家更換隊伍時顯示
		* 玩家名稱
	* 想要新增更多提示譬如IP、伺服器人數、Steam ID，請聯繫我修改

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d_playerjoining.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		l4d_playerjoining_enable "1"

		// 為1時，打開更換隊伍提示
		l4d_playerjoining_change_team_notify_enable "1"

		// (只限定 Dedicated Server) 擁有這些權限的玩家，才可以看到有人連線進伺服器的提示 (留白 = 任何人都能看到, -1: 無人能看到)
		l4d_playerjoining_connnect_server_notify_access ""

		// 擁有這些權限的玩家，才可以看到有人離開伺服器的提示 (留白 = 任何人都能看到, -1: 無人能看到)
		l4d_playerjoining_leave_server_notify_access ""
		```
</details>


