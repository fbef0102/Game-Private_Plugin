# Description | 內容
Scavenge permanent set up time + restart same chapter after scavenge match finished without vote

> __Note__ <br/>
This plugin is private, Please contact [me](/#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](/#私人插件列表-private-plugins-list)

* Apply to | 適用於
	```
	L4D2 Scavenge
	```
	
* Image | 圖示
	<br/>![l4d2_scavenge_infinite_1](image/l4d2_scavenge_infinite_1.jpg)

* <details><summary>How does it work?</summary>

	* In scavenge mode, permanent set up time before round starts
	* After scavenge match finished
		* Disable Official "REMATCH" vote
		* Restart same chapter automatically
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	2. [l4d2_fix_changelevel](https://github.com/Target5150/MoYu_Server_Stupid_Plugins/tree/master/The%20Last%20Stand/l4d2_fix_changelevel): Fix issues due to forced changelevel.
		* 修復手動更換地圖會遇到的問題
	3. [l4d2_transition_info_fix](/l4d2_transition_info_fix): Fix issues after map transitioned, transition info is still retaining when changed new map by other ways.
		* 修復中途換地圖的時候(譬如使用Changelevel指令)，會遺留上次的過關保存設定，導致滅團後倖存者被傳送到安全室之外或死亡

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d2_scavenge_infinite.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d2_scavenge_infinite_enable "1"

		// After scavenge match ends, delay before force of restart same chapter. (0=Don't restart) 
		// Also disable "REMATCH" vote (0=Enable vote)
		l4d2_scavenge_infinite_finish_delay "15.0"
		```
</details>

* <details><summary>Related Official ConVar</summary>

	* write down the following cvars in cfg/server.cfg
		```php
		// Setup time before the round starts in scavenge (default: 45s)
		sm_cvar scavenge_round_setup_time 999999
		```
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.1 (2025-2-27)
		* Fixed "return to lobby" vote

	* v1.0 (2024-6-18)
		* Initial Release
</details>

- - - -
# 中文說明
準備時間改為永久 + 比賽結束後重新開始相同的章節

* 原理
	* 清道夫模式中，準備時間設置為永久
	* 比賽結束後，關閉"重新比賽"的官方投票，自動重新開始相同的章節

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d2_scavenge_infinite.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		l4d2_scavenge_infinite_enable "1"

		// 比賽結束，15秒後重新開始遊戲. (0=不重新開始) 
		// 關閉"重新比賽"的官方投票 (0=不關閉)
		l4d2_scavenge_infinite_finish_delay "15.0"
		```
</details>

* <details><summary>相關的官方指令中文介紹 (點我展開)</summary>

	* 以下指令寫入文件 cfg/server.cfg，可自行調整
		```php
		// 清道夫模式中，回合開始之前的準備時間 (預設: 45秒)
		sm_cvar scavenge_round_setup_time 999999
		```
</details>