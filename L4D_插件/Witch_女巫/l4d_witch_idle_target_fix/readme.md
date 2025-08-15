# Description | 內容
Fixed that witch will lose target if player startles the witch when going idle

> __Note__ <br/>
This plugin is private, Please contact [me](/#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](/#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/8U3tFu-nHfs)

* Image | 圖示
	* Before (裝此插件之前)
	<br/>![l4d_witch_idle_target_fix_1](image/l4d_witch_idle_target_fix_1.gif)
	* After (裝此插件之後)
	<br/>![l4d_witch_idle_target_fix_2](image/l4d_witch_idle_target_fix_2.gif)

* Require | 必要安裝
	1. [l4d_fix_target_replace](https://github.com/Target5150/MoYu_Server_Stupid_Plugins/tree/master/The%20Last%20Stand/l4d_fix_target_replace)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_witch_idle_target_fix.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d_witch_idle_target_fix_enable "1"
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

	1. [Witch fixes](https://forums.alliedmods.net/showthread.php?t=315481): 4 plugins By Lux
    	* 四個修復Witch的插件可以裝
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.0 (2024-7-20)
		* Initial Release
</details>

- - - -
# 中文說明
Witch 不會因為玩家閒置而丟失目標

* 原理
	* (裝此插件之前) 玩家朝Witch丟火或膽汁＝＞投擲物落破掉之前，玩家閒置＝＞Witch丟失目標
	* (裝此插件之後) 玩家朝Witch丟火或膽汁＝＞投擲物落破掉之前，玩家閒置＝＞Witch不會丟失目標

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d_witch_idle_target_fix.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		l4d_witch_idle_target_fix_enable "1"
		```
</details>
