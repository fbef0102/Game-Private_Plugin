# Description | 內容
Admin say !restartmap to restart current map + Force of restartmap after Quantity of rounds (tries) events survivors wipe out

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Apply to | 適用於
	```
	L4D1
	L4D2
	```

* Image | 圖示
	<br/>![l4d_restartmap_command_1](image/l4d_restartmap_command_1.jpg)

* <details><summary>How does it work?</summary>

	* Admin types !restartmap -> server restarts map
	* When survivors wipe out after 3 times in coop/realism/survival -> server restarts map
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	2. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)
	3. [l4d2_fix_changelevel](https://github.com/Target5150/MoYu_Server_Stupid_Plugins/tree/master/The%20Last%20Stand/l4d2_fix_changelevel): Fix issues due to forced changelevel.
		* 修復手動更換地圖會遇到的問題
	4. [l4d2_transition_info_fix](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4d2_transition_info_fix): Fix issues after map transitioned, transition info is still retaining when changed new map by other ways.
		* 修復中途換地圖的時候(譬如使用Changelevel指令)，會遺留上次的過關保存設定，導致滅團後倖存者被傳送到安全室之外或死亡

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_restartmap_command.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d_restartmap_command_enable "1"

		// Changes how message displays. (0: Disable, 1:In chat, 2: In Hint Box, 3: In center text)
		l4d_restartmap_command_announce_type "1"

		// Delay to restart map.
		l4d_restartmap_command_delay "5"

		// Players with these flags have access to use command to restart map. (Empty = Everyone, -1: Nobody)
		l4d_restartmap_command_access_flag "z"

		// Count down sound file (relative to to sound/, empty=disable)
		l4d_restartmap_command_soundfile "buttons/blip1.wav"

		// Quantity of rounds (tries) events survivors wipe out before force of restartmap on non-final maps in coop/realism/survival (0=off)
		l4d_restartmap_command_try "0"

		// Quantity of rounds (tries) events survivors wipe out before force of restartmap on final maps in coop/realism/survival (0=off)
		l4d_restartmap_command_final "0"
		```
</details>

* <details><summary>Command | 命令</summary>

	* **sm_restartmap - changelevels to the current map**
		```php
		sm_restartmap
		sm_rs
		```
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.2 (2023-6-20)
        * Require left4dhooks v1.33 or above
		
	* v1.1 (2022-12-21)
		* Add two cvars, quantity of rounds (tries) events survivors wipe out before force of restartmap in coop/realism/survival.

	* v1.0
		* Initial Release
</details>

- - - -
# 中文說明
管理員輸入!restartmap能重新地圖關卡 + 滅團N次後重新地圖

* 原理
	* 並非從第一關重新開始，也不是處死人類的回合重來，而是伺服器重新載入當前的地圖
	* 管理員輸入指令重新當前的關卡
		* 通常地圖發生嚴重bug或者要求伺服器重新執行指令與插件時
	* 戰役/生存/寫實模式下滅團超過3次之後，自動重新載入當前的地圖
		* 改善滅團太多次在同個章節記憶體累積的狀況，主要讓伺服器刷新章節

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d_restartmap_command.cfg
		```php
		// 0=關閉插件, 1=啟動插件.
		l4d_restartmap_command_enable "1"

		// 該如何提示重新地圖的倒數計時 (0: 不提示, 1: 聊天框, 2: 黑底白字框, 3: 螢幕正中間)
		l4d_restartmap_command_announce_type "1"

		// 重新地圖的倒數計時
		l4d_restartmap_command_delay "5"

		// 擁有這些權限的管理員才能夠輸入!restartmap 重新地圖. (空=任何人都可以輸入, -1=無人有權限輸入)
		l4d_restartmap_command_access_flag "z"

		// 倒數計時的音效檔案，請填入相對路徑 (路徑相對於 sound 資料夾, 空=關閉音效)
		l4d_restartmap_command_soundfile "buttons/blip1.wav"

		// 戰役/生存/寫實模式下滅團超過3次之後，自動重新載入當前的地圖 (0=關閉這項功能)
		l4d_restartmap_command_try "0"

		// 戰役/生存/寫實模式下 最終關卡滅團超過4次之後，自動重新載入當前的地圖 (0=關閉這項功能)
		l4d_restartmap_command_final "0"
		```
</details>

