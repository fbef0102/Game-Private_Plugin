# Description | 內容
Auto save survivors if incapacitated or hanging from ledge before survival begins

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Video | 影片展示
<br/>None

* Image | 圖示
	* Auto self-revive when hanging from ledge
		> 掛邊自動起來
		<br/>![l4d_survival_auto_recover_1](image/l4d_survival_auto_recover_1.gif)
	* Auto self-revive when incapacitated
		> 倒地自動起來
		<br/>![l4d_survival_auto_recover_2](image/l4d_survival_auto_recover_2.gif)

* Apply to | 適用於
	```
	L4D1 Survival
	L4D2 Survival
	```

* <details><summary>Changelog | 版本日誌</summary>

	* v1.0
		* Request by GGM
		* Initial Release
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	2. [[INC] Multi Colors](https://forums.alliedmods.net/showthread.php?t=247770)
	3. [builtinvotes](https://github.com/L4D-Community/builtinvotes/actions)

* <details><summary>ConVar | 指令</summary>

    * cfg/sourcemod/l4d_survival_auto_recover.cfg
        ```php
		// Enable autorecover by default? [1-Enable/0-Disable]
		l4d_survival_auto_recover_default_value "1"

		// Delay to start another a autorecover vote after vote ends.
		l4d_survival_auto_recover_delay "60"

		// 0=Plugin off, 1=Plugin on.
		l4d_survival_auto_recover_enable "1"

		// If 1, players can not call autorecover vote after survival begins.
		l4d_survival_auto_recover_game_block "1"

		// Numbers of real survivor and infected player required to start a autorecover vote.
		l4d_survival_auto_recover_required "2"

		// Auto save survivors if 1: Incap, 2: Hang from ledge, 3: Both
		l4d_survival_auto_recover_save_type "3"
        ```
</details>

* <details><summary>Command | 命令</summary>

	* **Calls a vote to enable / disable autorecover**
		```php
		sm_autorecover
		```
</details>

- - - -
# 中文說明
生存模式計時開始之前，任何玩家倒地或掛邊會自動爬起來並回復所有血量

* 原理
	* 生存計時開始之前，倒地或掛邊自動救起來並回血
	* 生存計時開始之後，此插件不會有任何效果

* 功能
	* 生存計時開始前輸入```!autorecover```可開關自救回血功能
	* 可設置自救回血功能預設是開啟還是關閉
	* 可設置發起投票需要的人數
	* 可設置遊戲開始後不能發起投票
