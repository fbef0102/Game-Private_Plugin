# Description | 內容
Makes the survivor bots deal more damage against SIs and be more resistant to damage.

> __Note__ <br/>
This plugin is private, Please contact [me](/#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](/#私人插件列表-private-plugins-list)

* Apply to | 適用於
	```
	L4D1
	L4D2
	```

* <details><summary>How does it work?</summary>

	* Survivor bots deal more damage to 
		* Common infected
		* Special infected
		* Tank
		* Witch
	* Survivor bots decrease damage from 
		* Common infected
		* Special infected
		* Tank
		* Witch
		* Friendly fire
		* Fall from ledge
		* Flame
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_TougherSurvivorBots.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d_TougherSurvivorBots_allow "1"
		```
</details>

* <details><summary>Data Config</summary>

	* [data/l4d_TougherSurvivorBots.cfg](data/l4d_TougherSurvivorBots.cfg)
		> Manual in this file, click for more details...
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.1 (2024-8-7)
		* Add data file
		* Update cvars

	* v1.0 (2024-8-1)
		* Initial Release
</details>

- - - -
# 中文說明
增加AI Bot對特感的傷害 + 減少AI Bot受到的傷害

* 原理
	* AI Bot 開槍造成的傷害變高，容易殺死
		* 普通殭屍
		* 特感
		* Tank
		* Witch
	* AI Bot 受到傷害變低，不容易死亡 
		* 普通感染者
		* 特感
		* Tank
		* Witch
		* 友傷
		* 墬樓傷害
		* 火焰傷害 (火焰子彈不算)

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d_TougherSurvivorBots.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		l4d_TougherSurvivorBots_allow "1"
		```
</details>

* <details><summary>文件設定範例</summary>

	* [data/l4d_TougherSurvivorBots.cfg](data/l4d_TougherSurvivorBots.cfg)
		> 內有中文說明，可點擊查看
</details>
