# Description | 內容
Admin say !restartmap to restart current level

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Video | 影片展示
<br/>None

* Image | 圖示
	* Count down message
	> 倒數計時
	<br/>![l4d_restartmap_command_1](image/l4d_restartmap_command_1.jpg)

* Apply to | 適用於
```
L4D1
L4D2
```

* <details><summary>Changelog | 版本日誌</summary>

	* v1.0
	    * Request by Yabi
</details>

* Require | 必要安裝
	1. [[INC] Multi Colors](https://forums.alliedmods.net/showthread.php?t=247770)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_restartmap_command.cfg
		```php
		// Players with these flags have access to use command to restart map. (Empty = Everyone, -1: Nobody)
		l4d_restartmap_command_access_flag "z"

		// Delay to restart map.
		l4d_restartmap_command_delay "5"

		// 0=Plugin off, 1=Plugin on.
		l4d_restartmap_command_enable "1"

		// Count down sound file (relative to to sound/, empty=disable)
		l4d_restartmap_command_soundfile "buttons/blip1.wav"

		// Changes how message displays. (0: Disable, 1:In chat, 2: In Hint Box, 3: In center text)
		l4d_restartmap_command_announce_type "1"
		```
</details>

* <details><summary>Command | 命令</summary>

	* **sm_restartmap - changelevels to the current map**
		```php
		sm_restartmap
		sm_rs
		```
</details>

- - - -
# 中文說明
管理員輸入!restartmap能重新地圖關卡

* 原理
	* 並非從第一關重新開始，也不是處死人類的回合重來，而是伺服器重新載入當前的地圖名稱
	* 輸入命令之後倒數計時
	* 通常地圖發生嚴重bug或者要求伺服器重新執行指令與插件時，房主才需要輸入指令重新當前的關卡

* 功能
	1. 可設置倒數計時音效
	2. 可設置使用命令的權限
	3. 可設定如何顯示提示
	4. 可設置倒數計時秒數

