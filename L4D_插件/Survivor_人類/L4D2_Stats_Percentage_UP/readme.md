# Description | 內容
Simple MVP Statistics after command or in the end of the round

> __Note__ <br/>
This plugin is private, Please contact [me](/#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](/#私人插件列表-private-plugins-list)

* Apply to | 適用於
	```
	L4D1
	L4D2
	```

* Image | 圖示
	<br/>![L4D2_Stats_Percentage_UP_1](image/L4D2_Stats_Percentage_UP_1.jpg)

* <details><summary>Detail</summary>

	* CI is the percentage of commons killed by each player from all kills by everyone.
	* SI is the percentage of specials killed by each player from all kills by everyone.
	* T is the percentage of damage to all tanks by each player from the total damage to all tanks from all players.
	* Support versus mode
	* Support damage done to multi tanks
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)

* <details><summary>Command | 命令</summary>

	* **Display Survivors Stats**
		```php
		sm_stats
		```
</details>

* <details><summary>Related Plugin | 相關插件</summary>

	1. [kills](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/kills): Show statistics of surviviors (kill S.I, C.I. and FF)on round end
		> 擊殺殭屍與特殊感染者統計
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.0h (2026-2-13)
		* Remake code
		* Support versus and damage done to multi tank

	* v1.1
	    * More accurate damage done to tank

    * v1.0
        * [By alasfourom](https://forums.alliedmods.net/showpost.php?p=2788307&postcount=2)
</details>

- - - -
# 中文說明
使用指令或回合結束的時候顯示對CI、SI、Tank的擊傷統計表

* 原理
	* 統計說明
		* CI 為 普通殭屍的擊殺百分比<br/>
		* SI 為 特感的擊殺百分比<br/>
		* T 為 所有Tank傷害的百分比
	* 適用於對抗模式
	* 可儲存對多隻Tank造成的傷害
