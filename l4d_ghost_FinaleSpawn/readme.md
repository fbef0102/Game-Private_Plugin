# Description | 內容
Adjust ghost infected spawn range on finales

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/fp-4wtSD3lo)
<br/>None

* Image | 圖示
<br/>None

* Apply to | 適用於
```
L4D1 Versus
L4D2 Versus
```

* <details><summary>Changelog | 版本日誌</summary>

	* v1.0h
	    * Request by Anzu
		* Individual plugin
		* Auto generate cfg

	* v0.0
	    * [From confoglcompmod in SirPlease/L4D2-Competitive-Rework](https://github.com/SirPlease/L4D2-Competitive-Rework/blob/master/addons/sourcemod/scripting/confoglcompmod/FinaleSpawn.sp)
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)

* Notice
	* Official Convar "z_finale_spawn_safety_range" can do the same thing, but it also affects common zombie spawn and tank spawn, which causes nav issue on final map such as horde unable to spawn
	* So we use this plugin to change special infected ghost SpawnFlags

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_ghost_FinaleSpawn.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d_ghost_FinaleSpawn_enable "1"

		// Ghost infected spawn range on finals
		l4d_ghost_FinaleSpawn_range "200.0"
		```
</details>

* <details><summary>Command | 命令</summary>

	None
</details>

- - - -
# 中文說明
在救援關卡調整靈魂特感的復活距離

* 原理
	* 在官方對抗模式下，救援開始後，靈魂特感的復活距離會比平常多一倍
	* 使用此插件可縮短靈魂特感的復活距離
	* 只會影響真人特感玩家，AI特感、小殭屍、Tank 生成範圍皆不會受到影響

* 功能
	1. 可調整靈魂特感的復活距離

* 注意事項
	* 官方有指令 "z_finale_spawn_safety_range" 可以達成一樣的目的，但是會連帶影響AI特感、小殭屍、Tank 生成範圍，可能造成救援卡關的問題
	* 所以這插件就誕生了
