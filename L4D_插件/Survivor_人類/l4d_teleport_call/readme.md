# Description | 內容
Teleport Call Menu, adm can teleport players to start area, end checkpoint, final rescue vehicle zone, or to admin self

> __Note__ <br/>
This plugin is private, Please contact [me](/#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](/#私人插件列表-private-plugins-list)

* Apply to | 適用於
	```
	L4D1
	L4D2
	```

* [Video | 影片展示](https://youtu.be/iux1bUZycjM)

* Image
	<br/>![l4d_teleport_call_1](image/l4d_teleport_call_1.jpg)

* <details><summary>How does it work?</summary>

	* Admin types ```!admin->Player Commands->Teleport Menu (!call)```  to open menu
	* Admin types ```!call``` to open menu
	* Teleport players to
		* Start area
		* End checkpoint
		* Final rescue vehicle zone
		* Admin self position
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	2. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_teleport_call.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d_teleport_call_enable "1"

		// Changes how message displays. (0: Disable, 1:In chat, 2: In Hint Box, 3: In center text)
		l4d_teleport_call_announce_type "1"

		// If 1, Add 'Teleport Menu' item in admin menu under 'Player commands' category (Need ADMFLAG_ROOT flag)
		l4d_teleport_call_adminmenu "1"
		```
</details>

* <details><summary>Command | 命令</summary>

	* **Teleport Call Menu (Adm required: ADMFLAG_ROOT)**
		```php
		sm_call
		```
</details>

* Translation Support | 支援翻譯
	```
	translations/l4d_teleport_call.phrases.txt
	```

* <details><summary>Similar Plugin | 相似插件</summary>

	1. [l4d_wind](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4d_wind): Create a survivor bot in game + Teleport player
		> 新增Bot + 傳送玩家到其他位置上
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.3h (2024-8-4)
		* Upate cvars
		* Add 'Teleport Menu' item in admin menu under 'Player commands' category (Need ADMFLAG_ROOT flag)

	* v1.2h (2023-12-12)
		* Update translation
		* Add new item in menu
		* Teleport player to final rescue vehicle only after vehicle is ready

	* v1.1h (2023-6-20)
		* Require left4dhooks v1.33 or above
		* Renamed "l4d_telpeort_call" to "l4d_teleport_call"

	* v1.0h (2022-11-23)
		* Initial Release
</details>

- - - -
# 中文說明
呼叫傳送功能選單，能傳送玩家到起點、終點、救援載具區域、身邊

* 圖示
	* 傳送選單
	<br/>![zho/l4d_teleport_call_1](image/zho/l4d_teleport_call_1.jpg)

* 原理
	* 管理員可以輸入 ```!admin->玩家指令->傳送功能 (指令 !call)``` -> 可以傳送玩家至指定地點
	* 管理員亦可輸入```!call```打開選單，可以傳送玩家至指定地點
		* 起點
		* 終點
		* 救援載具區域
		* 身邊位置

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d_teleport_call.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		l4d_teleport_call_enable "1"

		// 提示該如何顯示. (0: 不提示, 1: 聊天框, 2: 黑底白字框, 3: 螢幕正中間)
		l4d_teleport_call_announce_type "1"

		// 為1時，在管理員選單的 '玩家指令' 分類內增加 "傳送功能 (指令 !call)" (所需權限: ADMFLAG_ROOT)
		l4d_teleport_call_adminmenu "1"
		```
</details>

* <details><summary>命令中文介紹 (點我展開)</summary>

	* **打開傳送選單 (權限: ADMFLAG_ROOT)**
		```php
		sm_call
		```
</details>