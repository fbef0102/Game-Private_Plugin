# Description | 內容
Type !trade to open a menu to select two players to swap, one from survivor team and another one from infected team.

> __Note__ <br/>
This plugin is private, Please contact [me](/#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](/#私人插件列表-private-plugins-list)

* Apply to | 適用於
	```
	L4D1 versus
	L4D2 versus
	```

* [Video | 影片展示](https://youtu.be/-AK10jtCpnc)

* Image | 圖示
	<br/>![l4d_trade_player_1](image/l4d_trade_player_1.jpg)

* <details><summary>How does it work?</summary>

	* Type ```!trade```
		* -> select player A (your team) -> select player B (enemy team)
		* -> Initiate a vote to swap player A with player B
</Chargedetails>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	2. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)
	3. [builtinvotes](https://github.com/fbef0102/Game-Private_Plugin/releases/tag/builtinvotes)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_trade_player.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d_trade_player_enable "1"

		// Delay to start another trade vote after trade vote ends.
		l4d_trade_player_delay "60"
		```
</details>

* <details><summary>Command | 命令</summary>

	* **Brings up a menu to select two players to swap, one from survivor team and another one from infected team.**
		```php
		sm_trade
		```
</details>

* <details><summary>Related Plugin | 相關插件</summary>

	1. [readyup](/L4D_插件/Server_伺服器/readyup): Ready Plugin
		> 準備才能開始遊戲的插件
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.1 (2022-11-04)
	    * Add vote limit per map

	* v1.0
	    * Initial Release
</details>

- - - -
# 中文說明
輸入!trade打開選單選擇雙方隊伍一位玩家，然後全體投票決定兩位玩家交換隊伍

* 原理
	* 輸入```!trade```打開選單選擇己方一位玩家，接著選擇對方一位玩家，選完之後全體玩家投票，投票通過後，兩位玩家互換陣營
	* 離開安全室之後就不能投票了
	* 覺得隊友太爛，對面隊伍太強，實力不平衡可以使用這插件

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d_trade_player.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		l4d_trade_player_enable "1"

		// 投票間隔
		l4d_trade_player_delay "60"
		```
</details>

* <details><summary>命令中文介紹 (點我展開)</summary>

	* **打開菜單選擇我方玩家與敵方玩家互換**
		```php
		sm_trade
		```
</details>
