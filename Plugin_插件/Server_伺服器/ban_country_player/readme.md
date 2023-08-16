# Description | 內容
Whitelist or ban players from specific country or area

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Video | 影片展示
<br>None

* Image
	<br/>![ban_country_player_1](image/ban_country_player_1.jpg)

* <details><summary>How does it work?</summary>

	* Set up configs/ban_country_player.cfg.
	* When player connects to server, detect the player's area via ip, kick the player if **is in Restricted Area List**
		* immune to be kicked if steam ID is in whitelist
		* admins are immune to be kicked
</details>

* Important Step
	* To retrieve country and city from client, You must [install country and city database](/Tutorial_%E6%95%99%E5%AD%B8%E5%8D%80/English/Server/Install_Other_File#country-and-city-database)

* Require | 必要安裝
	1. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/ban_country_player.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		ban_country_player_enable "1"
		
		// If 1, Announce to entire server if the connecting player got kicked
		ban_country_player_announce "1"

		// Players with these flags will not be kikced. (Empty = Everyone, -1: Nobody)
		ban_country_player_immune_flag "z"
		```
</details>

* <details><summary>Command | 命令</summary>

	* **Reload the 'ban country player' list (Adm Require: ADMFLAG_ROOT)**
		```php
		sm_reloadlist_bca
		```

	* **View current 'ban country player' list (Adm Require: ADMFLAG_ROOT)**
		```php
		sm_displaylist_bca
		```
</details>

* <details><summary>Data Config</summary>
	
	* configs/ban_country_player.cfg
		```php
		//Restricted Area List - Do not delete this line
		Taiwan

		//Steam64 ID Whitelist - Do not delete this line
		XXXXXXXXXXXX
		```

	* [All country names](http://www.geonames.org/countries/)
	* [Steam ID finder](https://steamid.xyz/)
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

	* v1.1 (2023-8-15)
		* Improve Data Config

	* v1.0 (2023-6-14)
		* Initial Release
</details>

- - - -
# 中文說明
限制來自某些國家或地區的玩家，禁止進入伺服器

* 圖示
	<br/>![ban_country_player_1](image/zho/ban_country_player_1.jpg)

* 原理
	* 設置文件```configs/ban_country_player.cfg```，寫下限制地區列表與Steam帳號的豁免名單列表
	* 玩家連線時，從IP上提取地區位置，如果地區**在名單上**則不能加入
		* Steam帳號在豁免名單上的不會被踢
		* 有管理員權限的人不會被踢

* 必看步驟
	* 抓取玩家的地理位置，需[安裝國家與城市的資料庫](/Tutorial_%E6%95%99%E5%AD%B8%E5%8D%80/Chinese_%E7%B9%81%E9%AB%94%E4%B8%AD%E6%96%87/Server/%E5%AE%89%E8%A3%9D%E5%85%B6%E4%BB%96%E6%AA%94%E6%A1%88%E6%95%99%E5%AD%B8#%E5%AE%89%E8%A3%9D%E5%9C%8B%E5%AE%B6%E8%88%87%E5%9F%8E%E5%B8%82%E7%9A%84%E8%B3%87%E6%96%99%E5%BA%AB)

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/ban_country_player.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		ban_country_player_enable "1"

		// 為1時，顯示被踢的玩家給全伺服器
		ban_country_player_announce "1"

		// 擁有這些權限的玩家，不會被踢
		ban_country_player_immune_flag "z"
		```
</details>

* <details><summary>命令中文介紹 (點我展開)</summary>

	* **重新加載 'ban country player' 文件 (權限: ADMFLAG_ROOT)**
		```php
		sm_reloadlist_bca
		```

	* **查看 'ban country player' 名單列表 (權限: ADMFLAG_ROOT)**
		```php
		sm_displaylist_bca
		```
</details>

* <details><summary>文件設定範例</summary>
	
	* 文件位於 configs/ban_country_player.cfg
		```php
		//Restricted Area List - Do not delete this line <== 限制地區名單 - 請勿刪除此行
		Taiwan

		//Steam64 ID Whitelist - Do not delete this line <==  Steam ID 豁免名單，格式為SteamId 64 - 請勿刪除此行
		XXXXXXXXXXXX
		```

	* [所有地區的名稱](http://www.geonames.org/countries/)
	* [Steam ID 查找](https://steamid.xyz/)
</details>
