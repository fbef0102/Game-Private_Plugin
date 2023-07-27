# Description | 內容
Use commands to slay bots

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Video | 影片展示
<br/>None

* Image | 圖示
	* Message
	<br/>![slay_bots_1](image/slay_bots_1.jpg)

* Apply to | 適用於
	```
	L4D1 
	L4D2
	```

* <details><summary>Changelog | 版本日誌</summary>

	* v1.0 (2022-12-21)
		* Initial Release
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	2. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/slay_bots.cfg
		```php
		// Players with these flags have access to use command to slay bots. (Empty = Everyone, -1: Nobody)
		slay_bots_access_flag "z"

		// Changes how message displays. (0: Disable, 1:In chat, 2: In Hint Box, 3: In center text)
		slay_bots_announce_type "1"

		// 0=Plugin off, 1=Plugin on.
		slay_bots_enable "1"

		// If 1, block slay command once survivors leaving saferoom or survival begins
		slay_bots_game_block "0"

		// Slay which team bots. (1=Survivor, 2=Infected, 3=Both)
		slay_bots_team_bots "3"
		```
</details>

* <details><summary>Command | 命令</summary>
	
	* **Slay all bots**
		```php
		sm_slaybots
		```

	* **Teleport all bots to your position and slay them.**
		```php
		sm_nobots
		sm_nobot
		sm_nb
		```
</details>

- - - -
# 中文說明
輸入指令一次處死多個Bots

* 原理
	* 管理員輸入指令處死所有的倖存者bot
	* 也可以處死特感bot

* 功能
	* 可設置特定權限的玩家可以使用指令
	* 可設置遊戲開始後不能使用指令
		* 離開安全室或生存模式計時開始
	* 可設置要處死哪個隊伍的bot