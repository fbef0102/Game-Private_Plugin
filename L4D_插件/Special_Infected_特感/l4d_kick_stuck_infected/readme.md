# Description | 內容
Kick special infected bots if they don't attack and can't be seen by survivors within certain time

> __Note__ <br/>
This plugin is private, Please contact [me](/#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](/#私人插件列表-private-plugins-list)

* Apply to | 適用於
	```
	L4D1
	L4D2
	```

* [Video | 影片展示](https://youtu.be/2lRBgSPvUUU)

* Image | 圖示
	<br/>![l4d_kick_stuck_infected_1](image/l4d_kick_stuck_infected_1.jpg)

* Require | 必要安裝
	1. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_kick_stuck_infected.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d_kick_stuck_infected_enable "1"

		// Amount of seconds before a special infected bot is kicked (Stuck timer).
		l4d_kick_stuck_infected_time "40.0"

		// If 1, kill special infected instead of kick.
		l4d_kick_stuck_infected_kill "0"

		// Changes how message displays. (0: Disable, 1:In chat, 2: In Hint Box, 3: In center text)
		l4d_kick_stuck_infected_type "1"

		// Ignore special infected within this range
		l4d_kick_stuck_infected_range "600.0"

		// If 1, Reset stuck timer if infected hurts survivor.
		l4d_kick_stuck_infected_hurt_survivor_reset "1"

		// If 1, Reset stuck timer if infected gets hurt.
		// Maximum: "1.000000"
		l4d_kick_stuck_infected_hurt_infected_reset "1"

		// If 1, Reset stuck timer if infected used special ability.
		l4d_kick_stuck_infected_use_ability_reset "1"

		// Time intervals (in sec.) infected stuck radius should be checked.
		l4d_kick_stuck_infected_move_check_interval "1.0"

		// Maximum radius where infected is considered stucked when not moving. Otherise, reset stuck timer once infected moves outside radius.
		l4d_kick_stuck_infected_move_radius_reset "30"

		// If 1, Still kick infected if being seen by survivor.
		l4d_kick_stuck_infected_be_seen_by_survivor "0"
		```
</details>

* Translation Support | 支援翻譯
	```
	translations/l4d_kick_stuck_infected.phrases.txt
	```

* <details><summary>Related Plugin | 相關插件</summary>

	1. [l4d_ssi_teleport_fix](/L4D_插件/Special_Infected_特感/l4d_ssi_teleport_fix): Teleport AI Infected player (Not Tank) to the teammate who is much nearer to survivors.
		> 傳送比較遠的AI特感到靠近倖存者的特感隊友附近
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.2 (2024-9-21)
		* Support Translation

	* v1.1
		* Kick infected if considered stucked when they are not moving.
		* Add cvars

	* v1.0
		* Initial Release
</details>

- - - -
# 中文說明
AI 特感一段時間內不攻擊或卡住將會被處死

* 原理
	* 當AI 特感復活時就會開始計時，在這段時間內如果不攻擊且原地卡住，將會被處死
	* 當AI 特感受到傷害、發動攻擊、走出原地，則重新計時
	* 不影響真人特感，Tank不算

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d_kick_stuck_infected.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		l4d_kick_stuck_infected_enable "1"

		// 設置計時時間 (時間到之後處死或踢出).
		l4d_kick_stuck_infected_time "40.0"

		// 1＝處死AI 特感，0=踢出AI 特感
		l4d_kick_stuck_infected_kill "0"

		// 提示該如何顯示. (0: 不提示, 1:I 聊天框, 2: 黑底白字框, 3: 螢幕正中間)
		l4d_kick_stuck_infected_type "1"

		// 如果特感離倖存者有600公尺內則忽略
		l4d_kick_stuck_infected_range "600.0"

		// 為1時，當特感對人類有造成傷害則重新計時
		l4d_kick_stuck_infected_hurt_survivor_reset "1"

		// 為1時，當特感受到傷害則重新計時
		// Maximum: "1.000000"
		l4d_kick_stuck_infected_hurt_infected_reset "1"

		// 為1時，當特感使用能力則重新計時
		l4d_kick_stuck_infected_use_ability_reset "1"

		// 伺服器每1.0秒檢查特感是否卡住 (0=不檢查是否卡住)
		l4d_kick_stuck_infected_move_check_interval "1.0"

		// 移動半徑，特感如果不走動超出這個半徑就視為卡在原地，走出這個半徑之後則重新計時
		l4d_kick_stuck_infected_move_radius_reset "30"

		// 為1時，就算特感在倖存者視野內照樣處死或踢出
		l4d_kick_stuck_infected_be_seen_by_survivor "0"
		```
</details>