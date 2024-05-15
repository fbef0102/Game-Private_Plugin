# Description | 內容
Block some useless game message

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Video | 影片展示
<br/>None

* Image | 圖示
	<br/>![l4d_block_msg_print_1](image/l4d_block_msg_print_1.jpg)

* <details><summary>How does it work?</summary>

	* Block the following game message
		* Chatbox: XXX is now idle.
		* Chatbox: Player XXX left the game
</details>

* Require | 必要安裝
<br/>None

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_block_msg_print.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d_block_msg_print_enable "1"
		```
</details>

* <details><summary>Command | 命令</summary>
	
	None
</details>

* Apply to | 適用於
	```
	L4D1 
	L4D2
	```

* <details><summary>Changelog | 版本日誌</summary>

	* v1.0 (2024-5-15)
		* Initial Release
</details>

- - - -
# 中文說明
屏蔽移除遊戲自帶的提示

* 原理
	* 移除以下提示
		1. 聊天框: 玩家 XXX 離開遊戲
		2. 聊天框: XXX 閒置中。


* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d_block_msg_print.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		l4d_block_msg_print_enable "1"
		```
</details>