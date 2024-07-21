# Description | 內容
Force of difficulty change after quantity of rounds (tries) events survivors wipe out (mission lost)

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Video | 影片展示
<br/>None

* Image
	<br/>![l4d_mission_lost_change_difficulty_1](image/l4d_mission_lost_change_difficulty_1.jpg)

* <details><summary>How does it work?</summary>

	* After survivors wipe out (mission lost), change difficulty to easier, for example
		* Expert -> Hard
		* Hard -> Normal
		* Normal -> Easy
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	2. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)
	3. Optional - [l4d2_custom_difficulty](/Plugin_插件/Server_伺服器/l4d2_custom_difficulty)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_mission_lost_change_difficulty.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d_mission_lost_change_difficulty_enable "1"

		// Changes how message displays. (0: Disable, 1:In chat, 2: In Hint Box, 3: In center text)
		l4d_mission_lost_change_difficulty_announce_type "1"

		// Quantity of rounds (tries) events survivors wipe out before force of difficulty change on non-final maps in coop/realism (0=off)
		l4d_mission_lost_change_difficulty_try "2"

		// Quantity of rounds (tries) events survivors wipe out before force of difficulty change on final maps in coop/realism (0=off)
		l4d_mission_lost_change_difficulty_final "4"
		```
</details>

* <details><summary>Command | 命令</summary>

	None
</details>

* Apply to | 適用於
	```
	L4D1 Coop
	L4D2 Coop/Realism
	```

* <details><summary>Related | 相關插件</summary>

	1. [l4d2_vote_manager3](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4d2_vote_manager3): Unable to call valve vote if player does not have access
		* 沒有權限的玩家不能隨意發起官方投票
	2. [l4d2_custom_difficulty](/Plugin_插件/Server_伺服器/l4d2_custom_difficulty): Set your own custom difficulty and damage + vote to change custom difficulty
    	* 自訂遊戲難度、特感傷害、殭屍傷害、Tank傷害、Witch傷害 + 投票更換自訂的難度
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.0 (2024-7-21)
		* Initial Release
</details>

- - - -
# 中文說明
滅團N次後，自動降低難度

* 原理
	* 戰役/生存 模式下滅團超過一定次數之後，自動降低當前難度，譬如
		* 專家 -> 進階
		* 進階 -> 一般
		* 一般 -> 簡單
	
* <details><summary>指令中文介紹(點我展開)</summary>

	* cfg/sourcemod/l4d_mission_lost_change_difficulty.cfg
		```php
		// 0=插件關閉, 1=插件開啟.
		l4d_mission_lost_change_difficulty_enable "1"
		
		// 倒數提示該如何顯示. (0: 不提示, 1: 聊天框, 2: 黑底白字框, 3: 螢幕正中間)
		l4d_mission_lost_change_difficulty_announce_type "1"

		// 戰役/寫實模式下 滅團超過2次之後，降低當前難度 (0=關閉這項功能)
		l4d_mission_lost_change_difficulty_try "2"

		// 戰役/寫實模式下 最終關卡滅團超過4次之後，降低當前難度 (0=關閉這項功能)
		l4d_mission_lost_change_difficulty_final "4"
		```
</details>
