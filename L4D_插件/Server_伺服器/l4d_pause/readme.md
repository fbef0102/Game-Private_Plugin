# Description | 內容
Provides commands for players to pause the game and allows admins to force pause it

> __Note__ <br/>
This plugin is private, Please contact [me](/#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](/#私人插件列表-private-plugins-list)

* Apply to | 適用於
	```
	L4D1
	L4D2
	```

* [Video | 影片展示](https://youtu.be/ljO6RGqQguk)

* Image | 圖示
	<br/>![l4d_pause_1](image/l4d_pause_1.jpg)
	<br/>![l4d_pause_2](image/l4d_pause_2.jpg)

* <details><summary>How does it work?</summary>

	* Type ```!pause``` -> Pause the game
	* Type ```!ready``` to mark your team ready, ```!unready``` to mark your team unready
	* Admin types ```!fp``` to force pause the game, ```!fs``` to force unpause the game
		* Unpauses automatically if an admin leaves the server.
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	2. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)
	3. [builtinvotes](https://github.com/fbef0102/builtinvotes/releases)

* Directory Structure | 檔案結構
	```php
    /
    ├── plugins/
    │   └── l4d_pause.smx            # Compiled plugin | 已編譯的插件
    ├── scripting/
    │   ├── include/ 
    │   │   └── l4d_pause.inc        # API | 給會寫插件的人
    │   └── l4d_pause.sp             # Source code | 源碼
    └── translations/
        └── l4d_pause.phrases.txt    # Multi-language translation | 翻譯多國語言
    ```

* <details><summary>Related Plugin | 相關插件</summary>

	1. [readyup](/L4D_插件/Server_伺服器/readyup): Ready Plugin
		* 所有玩家準備才能開始遊戲的插件
</details>

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_pause.cfg
		```php
		// If 1, Only allow for force pause and unpause functionality
		l4d_pause_onlyforce "0"

		// Delay to apply before a pause happens.  Could be used to prevent Tactical Pauses
		l4d_pause_delay "0"

		// If 1, Require or not the pause initiator should ready before unpausing the game
		l4d_pause_initiator_ready "1"

		// Number of seconds to count down before the round goes live.
		l4d_pause_countdown "3"

		// Limits the amount of pauses a player can do in a single round. Set to 0 to disable.
		l4d_pause_limit "0"
		```
</details>

* <details><summary>Command | 命令</summary>

	* **Pauses the game**
		```php
		sm_pause
		sm_p
		```

	* **Marks your team as ready for an unpause**
		```php
		sm_unpause
		sm_up
		sm_ready
		sm_r
		Press F1
		```

	* **Mark yourself as not ready if you have set yourself as ready**
		```php
		sm_unready
		sm_nr
		Press F2
		```

	* **Toggles your team's ready status**
		```php
		sm_toggleready
		```

	* **Hides the pause panel so other menus can be seen**
		```php
		sm_show
		```

	* **Shows a hidden pause panel**
		```php
		sm_hide
		```

	* **Admins force to pauses the game or unpauses the game (Adm required: ROOT)**
		```php
		sm_forcepause
		```

	* **Unpauses the game regardless of team ready status. Must be used to unpause admin pauses (Adm required: ROOT)**
		```php
		sm_forceunpause
		sm_forcestart
		sm_fs
		```
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.2h (2026-10-11)
		* Update cvars, translations, cmds
		* Optimize code
		* F1 to mark ready, F2 to mark unready

	* v1.1h (2023-3-15)
		* Translation Support
		* F1 to ready / F2 to unready

	* v1.0h
		* Individual plugin

	* 6.7
	    * [Original Work by CanadaRox, Sir, Forgetest](https://github.com/SirPlease/L4D2-Competitive-Rework/blob/master/addons/sourcemod/scripting/pause.sp)
</details>

- - - -
# 中文說明
提供指令給玩家暫停遊戲，並且管理員能強制暫停

* 原理
	* 當有玩家有急事需要暫停遊戲需求時可以輸入```!pause```，遊戲就會被強制暫停
	* 雙方隊伍準備好之後，遊戲就會解除暫停
	* 沒有準備好，那遊戲就一直暫停下去
	* 戰役/寫實/生存模式也適用，倖存者隊伍準備好後，遊戲就會解除暫停
	* 管理員輸入```!forcepause```強制暫停，也只有管理員能輸入```!forceunpause```解除暫停
		* 管理員如果離開伺服器則自動解除暫停

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d_pause.cfg
		```php
		// 為1時，只限管理員使用強制暫停
		l4d_pause_onlyforce "0"

		// 輸入暫停指令等待數秒後才會真的暫停
		l4d_pause_delay "0"

		// 為1時，呼叫暫停的人必須準備
		l4d_pause_initiator_ready "1"

		// 解除暫停的倒數秒數
		l4d_pause_countdown "3"

		// 同一位玩家在一個回合內使用暫停的次數
		l4d_pause_limit "0"
		```
</details>

* <details><summary>Command | 命令</summary>

	* **暫停遊戲**
		```php
		sm_pause
		sm_p
		```

	* **將你的隊伍標記為準備**
		```php
		sm_unpause
		sm_up
		sm_ready
		sm_r
		按 F1
		```

	* **將你的隊伍標記為未準備**
		```php
		sm_unready
		sm_nr
		按 F2
		```

	* **將你的隊伍標記為準備或未準備**
		```php
		sm_toggleready
		```

	* **隱藏暫停介面**
		```php
		sm_show
		```

	* **顯示暫停介面**
		```php
		sm_hide
		```

	* **管理員強制暫停遊戲或強制解除暫停 (權限: ROOT)**
		```php
		sm_forcepause
		```

	* **管理員強制解除暫停 (權限: ROOT)**
		```php
		sm_forceunpause
		sm_forcestart
		sm_fs
		```
</details>
