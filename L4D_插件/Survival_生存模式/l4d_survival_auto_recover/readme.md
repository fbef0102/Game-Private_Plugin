# Description | 內容
Auto save survivors if incapacitated or hanging from ledge before survival begins

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Video | 影片展示
<br/>None

* Image | 圖示
	* Auto self-revive when hanging from ledge (掛邊自動起來)
	<br/>![l4d_survival_auto_recover_1](image/l4d_survival_auto_recover_1.gif)
	* Auto self-revive when incapacitated (倒地自動起來)
	<br/>![l4d_survival_auto_recover_2](image/l4d_survival_auto_recover_2.gif)

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	2. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)
	3. [builtinvotes](https://github.com/fbef0102/Game-Private_Plugin/releases/tag/builtinvotes)

* <details><summary>ConVar | 指令</summary>

    * cfg/sourcemod/l4d_survival_auto_recover.cfg
        ```php
		// 0=Plugin off, 1=Plugin on.
		l4d_survival_auto_recover_enable "1"

		// Delay to start another a autorecover vote after vote ends.
		l4d_survival_auto_recover_delay "60"

		// Numbers of real survivor and infected player required to start a autorecover vote.
		l4d_survival_auto_recover_required "2"

		// If 1, players can not call autorecover vote after game starts (survivors leaving saferoom / survival or scavenge begins)
		l4d_survival_auto_recover_game_block "1"

		// Enable autorecover by default in survival mode? [1-Enable/0-Disable]
		l4d_survival_auto_recover_survival_default_value "1"

		// Enable autorecover by default in non-survival mode? [1-Enable/0-Disable]
		l4d_survival_auto_recover_non-survival_default_value "0"

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

* Apply to | 適用於
	```
	L4D1
	L4D2
	```

* <details><summary>Translation Support | 支援翻譯</summary>

	```
	English
	繁體中文
	简体中文
	```
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.3 (2024-11-15)
		* Optimize code

	* v1.2 (2024-9-3)
		* Add translation file

	* v1.1 (2023-2-2)
		* Add a cvar ```l4d_survival_auto_recover_non-survival_default_value```
		* Support other game mode
		
	* v1.0
		* Initial Release
</details>

- - - -
# 中文說明
生存模式計時開始之前，任何玩家倒地或掛邊會自動爬起來並恢復所有血量

* 原理
	* 生存計時開始之前，倒地或掛邊自動救起來並回血
	* 生存計時開始之後，此插件不會有任何效果
	* 生存計時開始前輸入```!autorecover```可發起投票 "開/關 自救回血功能"
	* 其他非生存的模式也可以使用此插件，但是倖存者走出安全區域之後，此插件不會有任何效果

* <details><summary>指令中文介紹 (點我展開)</summary>

    * cfg/sourcemod/l4d_survival_auto_recover.cfg
        ```php
		// 0=關閉插件, 1=啟動插件
		l4d_survival_auto_recover_enable "1"

		// 可以發起下次投票的冷卻時間
		l4d_survival_auto_recover_delay "60"

		// 至少需要的真人倖存者/特感數量在場，才能發起投票 "開/關 自救回血功能"
		l4d_survival_auto_recover_required "2"

		// 為1時，遊戲開始後不能發起投票 (倖存者離開安全區域 / 生存或清道夫模式計時開始)
		l4d_survival_auto_recover_game_block "1"

		// 在生存模式下自動啟動此插件? [1-啟用/0-不啟用]
		l4d_survival_auto_recover_survival_default_value "1"

		// 在非生存模式下自動啟動此插件? [1-啟用/0-不啟用]
		l4d_survival_auto_recover_non-survival_default_value "0"

		// 自救回血功能適用以下情況 1: 倒地時, 2: 掛邊時, 3: 兩者皆是
		l4d_survival_auto_recover_save_type "3"
        ```
</details>

* <details><summary>命令中文介紹 (點我展開)</summary>

	* **發起投票 開/關 自救回血功能 (遊戲開始之前)**
		```php
		sm_autorecover
		```
</details>