# Description | 內容
Allow players to change server slots by using vote. + Kick non-admin spectators

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/s_FnGt-pdO4)

* Image | 圖示
<br/>None

* Apply to | 適用於
```
L4D1
L4D2
```

* <details><summary>Changelog | 版本日誌</summary>

	* v2.3
</details>

* Require | 必要安裝
	1. You still need to use [l4dtoolz](https://github.com/Accelerator74/l4dtoolz/releases) to unlock server slots limit
	2. [[INC] Multi Colors](https://forums.alliedmods.net/showthread.php?t=247770)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_slot_vote.cfg
	```php
	// Pass vote percentage.
	sm_matchvotes_s "0.60"

	// If 1, Enabled this plugin.
	sm_slot_vote_enabled "1"

	// Maximum allowed number of server slots (this value must be equal or greater than sm_slot_vote_min).
	sm_slot_vote_max "28"

	// Minimum allowed number of server slots (this value must be equal or lesser than sm_slot_vote_max).
	sm_slot_vote_min "9"

	// Players with these flags have immune to be kicked in spectator team.
	sm_slotvote_immue_kick_flag "z"

	// If 1, players can type comamnd to votekick all non-admin spectators.
	sm_slotvote_kick_spec "1"

	// Minimum # of players in game to start the vote
	sm_slotvote_player_limit "3"
	```
</details>

* <details><summary>Command | 命令</summary>

	* **Vote to change Server Slots, Admin can change without vote (Require:Admin_Generic)**
		```php
		sm_slots <number>
		sm_maxslots <number>
		```
	* **Vote to kick all non-admin spectators, Admin can kick without vote (Require:Admin_Generic)**
		```php
		sm_nospec
		sm_nospecs
		sm_kickspec
		sm_kickspecs
		```
	* **Lock server slots Server, so nobody can change server slots (Server Console Only)**
		```php
		sm_lock_slots
		```
	* **Unlock server slots Server, so anyone can change server slots (Server Console Only)**
		```php
		sm_unlock_slots
		```
</details>

- - - -
# 中文說明
允許玩家使用命令更改伺服器人數上限 + 踢除非管理員的所有旁觀者

* 原理
	* 時常有一群傻B來伺服器掛機旁觀不知道衝三小所以才有了此插件

* 功能
	1. 玩家可投票調整伺服器的人數上限，管理員可以不用投票
	2. 投票踢出所有非管理員的旁觀者，管理員可以不用投票
	3. 至少需要一定的玩家數量才能投票