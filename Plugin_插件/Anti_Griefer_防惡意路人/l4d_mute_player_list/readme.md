# Description | 內容
Player can personally mute someone chat text and mic voice.

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/U-ncYt-JVWQ)

* Image
	<br/>![l4d_mute_player_list_1](image/l4d_mute_player_list_1.jpg)
	<br/>![l4d_mute_player_list_2](image/l4d_mute_player_list_2.jpg)

* <details><summary>How does it work?</summary>

	* Type ```!mutemenu -> Display Menu -> choose player -> mute player chat text or mte player mic voice```
		* mute player mic voice: you won't hear this player's mic voice
		* mute player chat text: you won't see this player's context in chatbox
	* Admin won't be muted
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.1 (2023-3-13)
		* Admin will not be blocked and muted by other players.

	* v1.0 (2023-3-12)
		* Initial Release
</details>

* Require | 必要安裝
	1. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)
	2. [simple-chatprocessor](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/simple-chatprocessor)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_mute_player_list.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d_mute_player_list_enable "1"

		// Changes how message displays. (0: Disable, 1:In chat, 2: In Hint Box, 3: In center text)
		l4d_mute_player_list_announce_type "1"

		// Players with these flags will not be in the mute list. (Empty = Everyone, -1: Nobody)
		l4d_mute_player_list_ignore_flag "z"
		```
</details>

* <details><summary>Command | 命令</summary>

	* **Open menu to mute other player's chat text and mic voice**
		```php
		sm_mutemenu
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

- - - -
# 中文說明
玩家可以在個人列表上封鎖其他人的語音與聊天文字

* 圖示
	<br/>![l4d_mute_player_list_1_zho](image/zho/l4d_mute_player_list_1_zho.jpg)
	<br/>![l4d_mute_player_list_2_zho](image/zho/l4d_mute_player_list_2_zho.jpg)

* 原理
	* 每一位玩家可以輸入!mutemenu，選擇其他玩家採取動作，封鎖語音或聊天文字
		* 封鎖語音: 聽不見這位玩家發出的語音 (其他人依然能聽見)
		* 封鎖聊天文字: 看不見這位玩家輸入的聊天文字 (其他人依然能看見)
	* 管理員不會被封鎖

* 用意在哪?
	* 經常有惡意路人進來播放音樂或者輸入文字打廣告，這時候管理員不一定每次都在伺服器裡面
	* 提供玩家自行選擇封鎖對方的語音或聊天文字，讓玩家開心玩遊戲

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d_mute_player_list.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		l4d_mute_player_list_enable "1"

		// 提示該如何顯示. (0: 不提示, 1: 聊天框, 2: 黑底白字框, 3: 螢幕正中間)
		l4d_mute_player_list_announce_type "1"

		// 擁有這些權限的玩家，不會被其他玩家封鎖語音或聊天文字 (留白 = 任何人都不會被封鎖, -1:任何人都可以被封鎖)
		l4d_mute_player_list_ignore_flag "z"
		```
</details>

* <details><summary>命令中文介紹 (點我展開)</summary>

	* **打開菜單，選擇其他玩家採取動作，封鎖語音或聊天文字**
		```php
		sm_mutemenu
		```
</details>