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

	* v1.2
	    * Fixed teleporting players in the final when using kits. Thanks to "Shadow" for reporting.

	* v1.0
	    * Original Request by 壹梦
		* Initial Release
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	2. [[INC] Multi Colors](https://forums.alliedmods.net/showthread.php?t=247770)

* Related Plugin | 相關插件
	1. [Bot Healing Values](/Plugin_插件/Bot_IQ_200_Bot智商加強/l4d_bot_healing): Set the health value bots require before using First Aid, Pain Pills or Adrenaline. (target is self or bot or player)
    > 只要生命值不低於一定血量，Bot不會使用醫療包治療對象與傳送藥丸給對象 (對象區分為自己、隊友Bot、真人玩家)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_saferom_prevent_kit.cfg
	```php
    // If 1, Prevent players from using first aid kit in the ending checkpoint area.
    l4d_saferom_prevent_kit_end "1"

    // Time between sending a warning message
    l4d_saferom_prevent_kit_messagetime "2.5"

    // If 1, Prevent players from using first aid kit in starting checkpoint area.
    l4d_saferom_prevent_kit_start "1"
	```
</details>

* <details><summary>Command | 命令</summary>
	None
</details>

- - - -
# 中文說明
在安全區域內禁止人類使用治療包

* 原理
	* 被打包的對象如果在安全區域內則無法打包
    * 設計原意是用來防止戰役模式倖存者通關的時候利用打包Bug

* 功能
	1. 可設置起始區域是否能打包
    2. 可設置終點區域是否能打包

