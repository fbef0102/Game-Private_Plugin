# Description | 內容
Block Player from using Kit in Saferoom

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Video | 影片展示
<br/>None

* Image | 圖示
	* display message in starting safe area
		> 起始安全區域不能打包
		<br/>![l4d_saferom_prevent_kit_1](image/l4d_saferom_prevent_kit_1.jpg)
	* display message in ending safe area
		> 終點安全區域不能打包
		<br/>![l4d_saferom_prevent_kit_2](image/l4d_saferom_prevent_kit_2.jpg)

* Apply to | 適用於
	```
	L4D1
	L4D2
	```

* <details><summary>Changelog | 版本日誌</summary>

	* v1.6 (2023-5-27)
		* Fixed Error after v1.5

	* v1.5 (2023-4-26)
		* Add a cvar
			```php
			// Prevent players from using first aid kit after X% survivor progress in flow percent on Non-Final Map (0=0ff)
			l4d_saferom_prevent_kit_survivor_proress "90"
			```

	* v1.4 (2023-4-3)
		* Add a cvar
			```php
			// If 1, Prevent players from using first aid kit in starting checkpoint area until time passed after round starts. (0=Always prevent)
			l4d_saferom_prevent_kit_start_time "60.0"
			```

	* v1.3 (2023-3-13)
		* Fixed teleporting players in the some trash custom map when using kits. Thanks to "梓" for reporting.

	* v1.2
	    * Fixed teleporting players in the final when using kits. Thanks to "Shadow" for reporting.

	* v1.0
	    * Original Request by 壹梦
		* Initial Release
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	2. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)

* Related Plugin | 相關插件
	1. [Bot Healing Values](/Plugin_插件/Bot_IQ_200_Bot智商加強/l4d_bot_healing): Set the health value bots require before using First Aid, Pain Pills or Adrenaline. (target is self or bot or player)
    	> 只要生命值不低於一定血量，Bot不會使用醫療包治療對象與傳送藥丸給對象 (對象區分為自己、隊友Bot、真人玩家)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_saferom_prevent_kit.cfg
		```php
		// If 1, Prevent players from using first aid kit in the ending checkpoint area.
		l4d_saferom_prevent_kit_end_area "1"

		// Time between sending a warning message (0=Disable message)
		l4d_saferom_prevent_kit_messagetime "2.5"

		// If 1, Prevent players from using first aid kit in starting checkpoint area.
		l4d_saferom_prevent_kit_start_area "1"

		// If 1, Prevent players from using first aid kit in starting checkpoint area until time passed after round starts. (0=Always prevent)
		l4d_saferom_prevent_kit_start_time "60.0"

		// Prevent players from using first aid kit after X% survivor progress in flow percent on Non-Final Map (0=0ff)
		l4d_saferom_prevent_kit_survivor_proress "90"
		```
</details>

* <details><summary>Command | 命令</summary>
	
	None
</details>

- - - -
# 中文說明
在安全區域內禁止人類使用治療包

* 原理
	* 自己治療自己的時候，如果自己在安全區域內則無法打包
	* 自己治療別人的時候，被治療的對象如果在安全區域內則無法打包
	* (v1.5 新增) 自己治療自己的時候，如果自己在地圖95%路程過後則無法打包
	* (v1.5 新增) 自己治療別人的時候，被治療的對象如果在地圖95%路程過後則無法打包

* 用在意哪?
    * 防止戰役模式倖存者通關的時候利用打包Bug
	* 愚蠢的新人一直拿包治療
	* 拿包跑出去，補完再進來

* 功能
	* 可設置起始區域是否能打包
	* 可設置終點區域是否能打包
	* 可設置走到一定地圖路程過後是否能打包

