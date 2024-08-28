# Description | 內容
Set the time limit how long can tank live

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Video | 影片展示

* Image
	<br/>![l4d_tank_alive_time_limit_1](image/l4d_tank_alive_time_limit_1.jpg)

* <details><summary>How does it work?</summary>

	* When tank spawned, start the timer, how long can the tank live.
	* If tank doesn't attack survivors, will be killed by this plugin once time is up (No matter how much frustration)
		* Extend time if tank hurts survivor (punches, rocks, hittables)
	* Apply to both human and AI tank
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	2. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_tank_alive_time_limit.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d_tank_alive_time_limit_enable "1"

		// Set the timer, how long can the tanks live after spawn
		l4d_tank_alive_time_limit_time "120"

		// If 1, Also apply to AI Tanks
		l4d_tank_alive_time_limit_bot_apply "0"

		// How message displays. (0: Disable, 1:In chat, 2: In Hint Box, 3: In center text)
		l4d_tank_alive_time_limit_announce_type "2"

		// Display countdown hint text To Tank when remaining time is below this value
		l4d_tank_alive_time_limit_announce_left "30"

		// After time's up, 0=Tank Player will lost control and given to AI, 1=Tank will be killed
		l4d_tank_alive_time_limit_type "1"

		// When pass tank to another player or AI, 0=Inherit time left, 1=Reset Timer
		l4d_tank_alive_time_limit_pass_reset "0"

		// Add more time if punch survivor (0=Off)
		l4d_tank_alive_time_limit_punch_add "15"

		// Add more time if tank rocks hit survivor (0=Off)
		l4d_tank_alive_time_limit_rock_add "2"

		// Add more time if hittables hit survivor (0=Off)
		l4d_tank_alive_time_limit_hittable_add "10"
		```
</details>

* <details><summary>Command | 命令</summary>

	None
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

	* v1.0 (2024-8-28)
		* Initial Release
</details>

- - - -
# 中文說明
Tank真人玩家如果不攻擊倖存者，時間到將會被自動處死 

* 圖示
	<br/>![zho/l4d_tank_alive_time_limit_1](image/zho/l4d_tank_alive_time_limit_1.jpg)

* 原理
	* 當Tank玩家生成時，設置計時器，開始計時
	* Tank玩家如果不積極進攻，時間一到將會被處死 (無論剩餘多少控制權)
		* 攻擊倖存者可以延長時間
	* 也適用AI Tank

* 用意在哪?
	* 避免無謂的消耗戰，Tank玩家持續在遠處丟石頭與倖存者周旋，很花時間
	* 適合安裝多人對抗伺服器上，強迫Tank玩家積極進攻

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d_tank_alive_time_limit.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		l4d_tank_alive_time_limit_enable "1"

		// 當Tank玩家生成時，設置計時器，Tank能存活多久時間?
		l4d_tank_alive_time_limit_time "120"

		// 為1時，此插件也適用於AI Tank
		l4d_tank_alive_time_limit_bot_apply "0"

		// 提示該如何顯示. (0: 不提示, 1: 聊天框, 2: 黑底白字框, 3: 螢幕正中間)
		l4d_tank_alive_time_limit_announce_type "2"

		// 當剩餘時間低於此數值時，開始提示玩家
		l4d_tank_alive_time_limit_announce_left "30"

		// 當時間到之後，0=Tank玩家失去控制給AI Tank, 1=Tank被處死
		l4d_tank_alive_time_limit_type "1"

		// 當控制權轉移給其他玩家時, 0=繼承剩餘時間, 1=重新計時
		l4d_tank_alive_time_limit_pass_reset "0"

		// 用拳頭攻擊到倖存者，可延長的時間 (0=不延長)
		l4d_tank_alive_time_limit_punch_add "15"

		// 丟石頭打到倖存者，可延長的時間 (0=不延長)
		l4d_tank_alive_time_limit_rock_add "2"

		// 打飛車子擊倒倖存者，可延長的時間 (0=不延長)
		l4d_tank_alive_time_limit_hittable_add "10"
		```
</details>