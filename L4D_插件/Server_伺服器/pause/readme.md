# Description | 內容
Provide the Command to Pause The Game

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
	<br/>![pause_1](image/pause_1.jpg)
	<br/>![pause_2](image/pause_2.jpg)

* <details><summary>How does it work?</summary>

	* Type ```!pause``` -> Pause the game
	* Type ```!ready``` to mark your team ready, ```!unready``` to mark your team unready
	* Admin types ```!fp``` to force pause the game, ```!fs``` to force unpause the game

</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	2. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)
	3. [builtinvotes](https://github.com/fbef0102/Game-Private_Plugin/releases/tag/builtinvotes)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/pause.cfg
		```php
		// Enable beep on unpause
		l4d_pause_blips "1"

		// Number of seconds to count down before the round goes live.
		l4d_pause_countdown "3"

		// Delay to apply before a pause happens.  Could be used to prevent Tactical Pauses
		l4d_pause_delay "0"

		// Require or not the pause initiator should ready before unpausing the game
		l4d_pause_initiator_ready "1"
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
		```
		or
		```php
		Press F1
		```

	* **Mark yourself as not ready if you have set yourself as ready**
		```php
		sm_unready
		sm_nr
		```
		or
		```php
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

	* **Pauses the game and only allows admins to unpause (Adm required: ADMFLAG_BAN)**
		```php
		sm_fp
		```

	* **Unpauses the game regardless of team ready status. Must be used to unpause admin pauses (Adm required: ADMFLAG_BAN)**
		```php
		sm_fs
		```
</details>

* <details><summary>API | 串接</summary>

	* [pause.inc](scripting\include\pause.inc)
		```php
		library name: pause
		```
</details>
	
* Translation Support | 支援翻譯
	```
	translations/pause.phrases.txt
	```

* <details><summary>Related Plugin | 相關插件</summary>

	1. [readyup](/L4D_插件/Server_伺服器/readyup): Ready Plugin
		* 所有玩家準備才能開始遊戲的插件
</details>

* <details><summary>Changelog | 版本日誌</summary>

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
暫停遊戲的插件

* 原理
	* 當有玩家有急事需要暫停遊戲需求時可以輸入```!pause```，遊戲就會被強制暫停
	* 雙方隊伍準備好之後，遊戲就會解除暫停
	* 沒有準備好，那遊戲就一直暫停下去
	* 戰役/寫實/生存模式也適用，倖存者隊伍準備好後，遊戲就會解除暫停

* 功能
	* 可設置解除暫停的倒數秒數
	* 管理員輸入```!fp```強制暫停，也只有管理員能輸入```!fp```解除暫停
