# Description | 內容
Kick special infected bots if they don't attack and can't be seen by survivors within certain time

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/2lRBgSPvUUU)

* Image | 圖示
	* Message
	> 提示某個特感不積極進攻
	<br/>![l4d_kick_stuck_infected_1](image/l4d_kick_stuck_infected_1.jpg)

* Apply to | 適用於
```
L4D1
L4D2
```

* <details><summary>Changelog | 版本日誌</summary>

	* v1.0
		* Original Request by Dam Dam
</details>

* Require | 必要安裝
	1. [[INC] Multi Colors](https://forums.alliedmods.net/showthread.php?t=247770)

* Related Plugin | 相關插件
	1. [l4d_ssi_teleport_fix](https://github.com/fbef0102/Game-Private_Plugin/tree/main/l4d_ssi_teleport_fix): Teleport AI Infected player (Not Tank) to the teammate who is much nearer to survivors.
		> 傳送比較遠的AI特感到靠近倖存者的特感隊友附近

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_kick_stuck_infected.cfg
	```php
	// 0=Plugin off, 1=Plugin on.
	l4d_kick_stuck_infected_enable "1"

	// If 1, kill special infected instead of kick.
	l4d_kick_stuck_infected_kill "0"

	// Ignore special infected within this range
	l4d_kick_stuck_infected_range "600.0"

	// Amount of seconds before a special infected bot is kicked.
	l4d_kick_stuck_infected_time "40.0"

	// Changes how message displays. (0: Disable, 1:In chat, 2: In Hint Box, 3: In center text)
	l4d_kick_stuck_infected_type "1"
	```
</details>

* <details><summary>Command | 命令</summary>
	None
</details>

- - - -
# 中文說明
AI 特感一段時間內不攻擊或卡住將會被處死

* 原理
	* 當AI 特感復活時就會開始計時，在這段時間內如果不攻擊或卡在原地不動，將會被處死
	* 當AI 特感受到傷害或發動攻擊，則重新計時
	* 不影響真人特感

* 功能
	1. 可設置處死或踢出伺服器
	2. 可設置範圍內忽略特感
	3. 可設置計時時間
	4. 可設置不同位置的訊息提示
