# Description | 內容
If the witch incap/kill players that aren't her initial target, then make the witch proceed to chase her initial target.

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtube.com/shorts/MRTO6KnmbN4)

* Image | 圖示
	<br/>![l4d_witch_target_forever_1](image/l4d_witch_target_forever_1.gif)

* <details><summary>How does it work?</summary>

	* If Player A startles witch, player A is her initial target
		* If player B blocks her way, witch will incap/kill player B and then proceed to chase player A.
		* If player C ignites or biles her, witch will incap/kill player C and then proceed to chase player A.
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	2. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)
	3. [Actions](https://forums.alliedmods.net/showthread.php?t=336374)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_witch_target_forever.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d_witch_target_forever_enable "1"
		
		// How message displays. (0: Disable, 1:In chat, 2: In Hint Box, 3: In center text)
		l4d_witch_target_forever_announce_type "1"
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

* <details><summary>Related Plugin | 相關插件</summary>

	1. [witch_target_override](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/witch_target_override): Change target when the witch incapacitates or kills victim + witch auto follows survivors
    	> Witch會自動跟蹤你，一旦驚嚇到她，不殺死任何人絕不罷休
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.1 (2024-1-9)
		* Make the witch proceed to chase her initial target, if witch lose target somehow.

	* v1.0 (2024-1-8)
		* Initial Release
</details>

- - - -
# 中文說明
Witch因為被擋路或改變目標抓傷任何玩家之後，強制繼續追擊原始目標

* 原理
	* 假設: A玩家驚嚇了Witch，A玩家就是witch的原始目標，Witch開始追逐A玩家
		* 如果B玩家擋住Witch的路線，在Witch改變目標抓傷B玩家之後，繼續追擊A玩家
		* 如果C玩家丟火或膽汁到Witch，在Witch改變目標抓傷C玩家之後，繼續追擊A玩家

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d_witch_target_forever.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		l4d_witch_target_forever_enable "1"

		// 提示該如何顯示. (0: 不提示, 1: 聊天框, 2: 黑底白字框, 3: 螢幕正中間)
		l4d_witch_target_forever_announce_type "1"
		```
</details>
