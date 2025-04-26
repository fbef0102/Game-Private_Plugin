# Description | 內容
Display a sourcemod panel when players press the SCORE key.

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Apply to | 適用於
	```
	L4D1
	L4D2
	```

* <details><summary>Image | 圖示</summary>

	* A = Afk (Idle Player), X = Dead, ~ = Incapacitated, + = Alive, H = Hanging from ledge, 0 = Spectator, number = HP
		> A = Afk (閒置玩家), X = 死亡, ~ = 倒地, + = 活著站立, H = 掛邊, 0 = 旁觀者, 數字為玩家的血量
		<br/>![l4d_scoreboard_panel_1](image/l4d_scoreboard_panel_1.jpg)
	* SI(+) = Alive Infected, SI(G) = Ghost Infected, number = HP
		> SI(+) = 活著的特感玩家, SI(G) = 靈魂特感玩家, 數字為玩家的血量
		<br/>![l4d_scoreboard_panel_2](image/l4d_scoreboard_panel_2.jpg)
	* Support multi players
		> 支援多人倖存者
		<br/>![l4d_scoreboard_panel_3](image/l4d_scoreboard_panel_3.jpg)
</details>

* <details><summary>How does it work?</summary>

	* Type tab Key (IN_SCORE) to show a hud for 8 seconds, it displays all players' state
	* The game default scoreboard is client side, so unfortunately can't block it.
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_scoreboard_panel.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d_scoreboard_panel_enable "1"

		// Cold down in seconds can a player press tab key to display panel again.
		l4d_scoreboard_panel_tab_cooldown "1.0"

		// Panel display time.
		l4d_scoreboard_panel_display_time "8"

		// If 1, display health on panel
		l4d_scoreboard_panel_display_health "1"

		// Symbol for survivors hanging from ledge
		l4d_scoreboard_panel_hanging_symbol "H"

		// Symbol for incapacitated survivors
		l4d_scoreboard_panel_incapacitated_symbol "~"

		// Symbol for alive survivors
		l4d_scoreboard_panel_survior_alive_symbol "+"

		// Symbol for dead survivors
		l4d_scoreboard_panel_survivor_dead_symbol "X"

		// Symbol for black and white survivors (last life)
		l4d_scoreboard_panel_survivor_bw_symbol "!!"

		// Symbol for infected players (Only display to survivor)
		l4d_scoreboard_panel_infected_team_symbol "SI"

		// Symbol for ghost infected players
		l4d_scoreboard_panel_infected_ghost_symbol "SI(G)"

		// Symbol for alive infected players
		l4d_scoreboard_panel_infected_alive_symbol "SI(+)"

		// Symbol for dead infected players
		l4d_scoreboard_panel_infected_dead_symbol "SI(-)"

		// Symbol for afk players (idle survivor)
		l4d_scoreboard_panel_afk_symbol "A"

		// Symbol for spectator players
		l4d_scoreboard_panel_spectator_team_symbol "O"
		```
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.1 (2023-1-8)
	    * Draw more details on panel

	* v1.0 (2023-1-5)
		* Initial Release
</details>

- - - -
# 中文說明
按下Tab之後出現玩家列表介面，顯示每個玩家的狀態

* 原理
	* 按下Tab之後顯示每個玩家的狀態，特感也有
	* 人類看不到特感玩家的狀態
	* 適合用於多人連線的伺服器，因為遊戲內的記分板最多只能顯示五個人類與五個特感玩家狀態

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d_scoreboard_panel.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		l4d_scoreboard_panel_enable "1"

		// 再次使用tab顯示介面的冷卻時間
		l4d_scoreboard_panel_tab_cooldown "1.0"

		// 介面顯示時間
		l4d_scoreboard_panel_display_time "8"

		// 為1時，列表上顯示血量
		l4d_scoreboard_panel_display_health "1"

		// 顯示的符號 - 人類掛邊
		l4d_scoreboard_panel_hanging_symbol "H"

		// 顯示的符號 - 人類倒地
		l4d_scoreboard_panel_incapacitated_symbol "~"

		// 顯示的符號 - 人類還活著
		l4d_scoreboard_panel_survior_alive_symbol "+"

		// 顯示的符號 - 人類已死亡
		l4d_scoreboard_panel_survivor_dead_symbol "X"

		// 顯示的符號 - 人類黑白狀態
		l4d_scoreboard_panel_survivor_bw_symbol "!!"

		// 顯示的符號 - 特感 (只顯示給人類玩家觀看)
		l4d_scoreboard_panel_infected_team_symbol "SI"

		// 顯示的符號 - 靈魂特感
		l4d_scoreboard_panel_infected_ghost_symbol "SI(G)"

		// 顯示的符號 - 非靈魂的存活特感
		l4d_scoreboard_panel_infected_alive_symbol "SI(+)"

		// 顯示的符號 - 特感已死亡
		l4d_scoreboard_panel_infected_dead_symbol "SI(-)"

		// 顯示的符號 - 閒置玩家
		l4d_scoreboard_panel_afk_symbol "A"

		// 顯示的符號 - 旁觀者
		l4d_scoreboard_panel_spectator_team_symbol "O"
		```
</details>

* 注意事項
	* 原本遊戲的記分板依然會顯示，那是客戶端的文件，伺服器無法阻擋 (認真你就輸了)
	<br/>![image](https://user-images.githubusercontent.com/12229810/210696441-02a5b27e-d540-4f0b-a760-0f60e59300d4.png)
