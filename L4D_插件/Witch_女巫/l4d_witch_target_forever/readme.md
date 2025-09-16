# Description | 內容
If the witch incap/kill players that aren't her initial target, then make the witch proceed to chase her initial target.

> __Note__ <br/>
This plugin is private, Please contact [me](/#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](/#私人插件列表-private-plugins-list)

* Apply to | 適用於
	```
	L4D1
	L4D2
	```

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
	4. [l4d_change_witch_victim](https://github.com/Target5150/MoYu_Server_Stupid_Plugins/tree/master/The%20Last%20Stand/l4d_change_witch_victim)
    5. [l4d_fix_target_replace](https://github.com/Target5150/MoYu_Server_Stupid_Plugins/tree/master/The%20Last%20Stand/l4d_fix_target_replace)

* <details><summary>Support | 支援插件</summary>

	1. [l4d_witch_follow_kill_everyone](/L4D_%E6%8F%92%E4%BB%B6/Witch_%E5%A5%B3%E5%B7%AB/l4d_witch_follow_kill_everyone): If install both plugins, the witch's priority option is to kill her initial target first and then change target
		* 如果兩個插件同時裝, Witch會優先攻擊並殺死原始目標, 之後才會改變目標
    2. [Witch fixes](https://forums.alliedmods.net/showthread.php?t=315481): 4 witch fix plugins By Lux, no conflict with this plugin
        * 四個修復Witch的插件可以裝, 不會跟此插件有衝突
</details>

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_witch_target_forever.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d_witch_target_forever_enable "1"
		
		// How message displays. (0: Disable, 1:In chat, 2: In Hint Box, 3: In center text)
		l4d_witch_target_forever_announce_type "1"
		```
</details>

* <details><summary>API | 串接</summary>

	* [l4d_witch_target_forever.inc](scripting\include\l4d_witch_target_forever.inc)
		```php
		library name: l4d_witch_target_forever
		```
</details>

* Translation Support | 支援翻譯
	```
	translations/l4d_witch_target_forever.phrases.txt
	```

* <details><summary>Changelog | 版本日誌</summary>

	* v1.2 (2024-7-20)
		* Add API
		* Witch proceed to chase target even if target is idle
		* Fixed witch wil be killed after change target 15 seconds 

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
