# Description | 內容
Calls a vote to enable / disable locking teams in place once game starts (so no spectators can join in mid-game)

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/B1oghdYb_gE)

* Image | 圖示
	* Calls a vote to enable / disable locking teams
		> 投票開啟或關閉隊伍鎖住功能
		<br/>![teamlock_vote_1](image/teamlock_vote_1.jpg)
	* Display message
		> 遊戲開始後提示隊伍鎖住功能
		<br/>![teamlock_vote_2](image/teamlock_vote_2.jpg)

* Apply to | 適用於
	```
	L4D1
	L4D2
	```

* <details><summary>Changelog | 版本日誌</summary>

	* v1.0 (2022-11-27)
		* Request by GGM
		* Initial Release
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	2. [[INC] Multi Colors](https://forums.alliedmods.net/showthread.php?t=247770)
	3. [builtinvotes](https://github.com/L4D-Community/builtinvotes/actions)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/teamlock_vote.cfg
	```php
	// Enable teamlock by default? [1-Enable/0-Disable]
	teamlock_vote_default_value "0"

	// Delay to start another a teamlock vote after vote ends.
	teamlock_vote_delay "60"

	// 0=Plugin off, 1=Plugin on.
	teamlock_vote_enable "1"

	// If 1, players can not start teamlock vote after game starts/survival begins.
	teamlock_vote_game_block "1"

	// Numbers of real survivor and infected player required to start a teamlock vote.
	teamlock_vote_required "2"
	```
</details>

* <details><summary>Command | 命令</summary>
	
	* **Calls a vote to enable / disable locking teams (No one can switch team)**
	```php
	sm_teamlock
	```
</details>

- - - -
# 中文說明
遊戲開始後旁觀者或路人不能跳隊到倖存者或感染者遊玩

* 原理
	* **防止傻B路人在遊戲中途跳隊下去遊玩搗亂**
	* 遊戲開始之前任何人可以自由切換隊伍
		* 這裡指的"遊戲開始"為倖存者離開安全區域或是生存模式計時開始
	* 當遊戲開始時啟動"隊伍鎖住功能"，插件會紀錄人類玩家與特感玩家的名單，只有這些人可以自由切換隊伍，其他人跳隊會被強制旁觀
	* 回合重新開始時名單會清除重置，任何人可以自由切換隊伍
	* 插件會紀錄玩家的Steam ID，意思是說即使人類玩家與特感玩家離開伺服器重進遊戲，依然可以自由切換隊伍
	* 當伺服器內沒有任何被插件記錄的玩家時，隊伍鎖住功能關閉，任何人可以自由切換隊伍

* 功能
	1. 玩家可以投票是否開啟還是關閉隊伍鎖住功能
	2. 可設置隊伍鎖住功能預設是開啟還是關閉
	3. 可設置發起投票需要的人數
	4. 可設置遊戲開始後不能發起投票
