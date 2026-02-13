# Description | 內容
Display Welcome Message to new players (support translation)

> __Note__ <br/>
This plugin is private, Please contact [me](/#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](/#私人插件列表-private-plugins-list)

* Apply to | 適用於
	```
	Any Source Game
	```

* Image
	<br/>![server_welcome_message_1](image/server_welcome_message_1.jpg)

* <details><summary>How does it work?</summary>

	* Display welcome message when player joins server
	* (L4D1/2 only) Display message when player left saferoom
	* You can modify message in translation file: [translations/server_welcome_message.phrases.txt](translations/server_welcome_message.phrases.txt)
</details>

* Require | 必要安裝
	1. L4D1/2: [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	2. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/server_welcome_message.cfg
		```php
		// Delay to display welcome message after new player joins server
		server_welcome_message_delay "5.0"

		// If 1, display welcome message each time after changing map
		server_welcome_message_each_map "0"

		// If 1, display server hostname and ip to new player
		server_welcome_message_hostname_ip "1"

		// If 1, display player's admin/vip flag.
		server_welcome_message_vip_flag "1"

		// (L4D1/2) If 1, display message to play after player left the safe room.
		server_welcome_message_left_saferoom_l4d "1"
		```
</details>
	
* Translation Support | 支援翻譯
	```
	translations/server_welcome_message.phrases.txt
	```

* <details><summary>Changelog | 版本日誌</summary>

	* v1.3 (2026-2-13)
		* Display message when player left saferoom (L4D1/2 only)

	* v1.2 (2024-1-31)
		* Display hostname, ip, vip status

	* v1.1 (2022-12-6)
		* Display welcome message each time after changing map

	* v1.0 (2022-12-4)
		* Initial Release
</details>

- - - -
# 中文說明
玩家加入伺服器後，聊天視窗顯示歡迎訊息 (支援多國語言)

* 圖示
	<br/>![zho/server_welcome_message_1](image/zho/server_welcome_message_1.jpg)

* 原理
	* 玩家加入伺服器後，顯示歡迎訊息
	* (限L4D1/2) 玩家離開安全區域後，顯示訊息
	* 可以自行修改訊息，文件: [translations/server_welcome_message.phrases.txt](translations/server_welcome_message.phrases.txt)

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/server_welcome_message.cfg
		```php
		// 加入伺服器五秒後顯示歡迎訊息
		server_welcome_message_delay "5.0"

		// 為1時，每次換圖都要顯示歡迎訊息
		server_welcome_message_each_map "0"

		// 為1時，歡迎訊息顯示房間名稱與IP
		server_welcome_message_hostname_ip "1"

		// 為1時，對玩家顯示其VIP/ADMIN等級
		server_welcome_message_vip_flag "qr"

		// (L4D1/2) 為1時，玩家離開安全室時顯示訊息
		server_welcome_message_left_saferoom_l4d "1"
		```
</details>