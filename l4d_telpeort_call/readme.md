# Description | 內容
Teleport Call Menu

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/iux1bUZycjM)

* Image
	* teleport menu
	<br/>![l4d_telpeort_call_1](image/l4d_telpeort_call_1.jpg)

* Apply to | 適用於
```
L4D1
L4D2
```

* Translation Support | 支援翻譯
```
English
繁體中文
简体中文
```

* <details><summary>Changelog | 版本日誌</summary>

	* v1.0h (2022-11-23)
		* Request by Yabi
		* Initial Release
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	2. [[INC] Multi Colors](https://forums.alliedmods.net/showthread.php?t=247770)

* Similar Plugin | 相似插件
	1. [l4d_wind](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4d_wind): Create a survivor bot in game + Teleport player
		> 新增Bot + 傳送玩家到其他位置上

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_telpeort_call.cfg
	```php
	// Changes how message displays. (0: Disable, 1:In chat, 2: In Hint Box, 3: In center text)
	l4d_telpeort_call_announce_type "1"

	// 0=Plugin off, 1=Plugin on.
	l4d_telpeort_call_enable "1"
	```
</details>

* <details><summary>Command | 命令</summary>

	* **Teleport Call Menu (Adm required: ADMFLAG_ROOT)**
	```php
	sm_call
	```
</details>

- - - -
# 中文說明
呼叫傳送功能菜單，能傳送玩家到起點、終點、救援區域

* 圖示
	* 傳送菜單
	<br/>![l4d_telpeort_call_2](image/l4d_telpeort_call_2.jpg)

* 原理
	* 管理員輸入!call 可以傳送玩家到起點、終點、救援區域或身邊

* 功能
	* 可設置開關
	* 可設置不同位置的訊息提示