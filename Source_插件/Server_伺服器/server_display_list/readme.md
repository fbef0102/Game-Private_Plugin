# Description | 內容
Type Command to show Server/Vpn List

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Image | 圖示
	<br/>![server_display_list_1](image/server_display_list_1.jpg)

* Apply to | 適用於
	```
	Any Source Game
	```

* <details><summary>How does it work?</summary>

	* Display vpn/server list when type ```!server```, can customize message in file: [data/server_display_list.cfg](data/server_display_list.cfg)
	* Just display message only.
</details>

* Require | 必要安裝
	1. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/server_display_list.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		server_display_list_allow "1"
		```
</details>

* <details><summary>Command | 命令</summary>

	* **Show Server/Vpn List.**
		```php
		sm_vpn
		sm_server
		```

	* **Reloads the data config.** (Admin Required: ADMFLAG_ROOT)
		```php
		sm_vpn_reload
		sm_server_reload
		```
</details>

* <details><summary>Translation Support | 支援翻譯</summary>

	```
	English
	繁體中文
	简体中文
	```
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.1 (2024-9-3)
		* Add translation file

	* v1.0
	    * Initial Release
</details>

- - - -
# 中文說明
輸入指令顯示 Server/Vpn 列表

* 原理
	* 玩家輸入```sm_server```會顯示 Server/Vpn 列表, 於文件自行設定顯示內容: [data/server_display_list.cfg](data/server_display_list.cfg)
	* 只是顯示用

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/server_display_list.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		server_display_list_allow "1"
		```
</details>

* <details><summary>命令中文介紹 (點我展開)</summary>

	* **顯示 Server/Vpn 列表**
		```php
		sm_vpn
		sm_server
		```

	* **重新加載文件. (權限: ADMFLAG_ROOT)**
		```php
		sm_vpn_reload
		sm_server_reload
		```
</details>