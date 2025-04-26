# Description | 內容
Adjust ghost infected spawn range on finales

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Apply to | 適用於
	```
	L4D1 versus
	L4D2 versus
	```

* [Video | 影片展示](https://youtu.be/sXjPd-sALGs)

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)

* <details><summary>How does it work?</summary>

	* Change human special infected ghost spawn range (Does not affect special infected bots, common infected, AI Tank spawn range)
	* Official Convar "z_finale_spawn_safety_range" can do the same thing, but it also affects common zombie spawn and tank spawn, which causes nav issue on final map such as horde unable to spawn
		* So we use this plugin to change special infected ghost Spawn Range
</details>

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_ghost_FinaleSpawn.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d_ghost_FinaleSpawn_enable "1"

		// Ghost infected spawn range on finals
		l4d_ghost_FinaleSpawn_range "200.0"
		```
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.0h 
		* Individual plugin
		* Auto generate cfg

	* v0.0
	    * [From confoglcompmod in SirPlease/L4D2-Competitive-Rework](https://github.com/SirPlease/L4D2-Competitive-Rework/blob/master/addons/sourcemod/scripting/confoglcompmod/FinaleSpawn.sp)
</details>

- - - -
# 中文說明
在救援關卡調整靈魂特感的復活距離

* 原理
	* 此插件只適用真人特感玩家，AI特感、小殭屍、AI Tank 生成範圍皆不會受到影響
	* 救援開始後，此插件可縮短真人靈魂特感玩家的復活距離

* 用意在哪?
	* 官方對抗模式，救援開始後，復活距離會變成兩倍以上
	* 安裝上這個插件之後，縮短真人靈魂特感玩家的復活距離，提升遊戲難度

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_ghost_FinaleSpawn.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		l4d_ghost_FinaleSpawn_enable "1"

		// 調整靈魂特感的復活距離
		l4d_ghost_FinaleSpawn_range "200.0"
		```
</details>
