# Description | 內容
Gun weapons now have under-barrel grenade launcher attached, cost ammot to shoot grenade

> __Note__ <br/>
This plugin is private, Please contact [me](/#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](/#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/FPZqDgLavgw)

* Image | 圖示
	<br/>![l4d_attachable_grenade_launcher_1](image/l4d_attachable_grenade_launcher_1.gif)
	<br/>![l4d_attachable_grenade_launcher_2](image/l4d_attachable_grenade_launcher_2.gif)
	<br/>![l4d_attachable_grenade_launcher_3](image/l4d_attachable_grenade_launcher_3.gif)

* Apply to | 適用於
	```
	L4D2
	```

* <details><summary>How does it work?</summary>

	* Press right mouse twice to switch grenade mode
	* Press left mouse to shoot grenade (Cost the amount of ammo)
	* Pistol, magnum can shoot grenade, need to cost primary weapon's ammo
	* Use data [data/l4d_attachable_grenade_launcher.cfg](data/l4d_attachable_grenade_launcher.cfg) to control each gun's grenade damage, explode radius and launch velocity
		* Manual in this file, click for more details...
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	2. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_attachable_grenade_launcher.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d_attachable_grenade_launcher_enable "1"
		```
</details>

* Translation Support | 支援翻譯
	```
	translations/l4d_attachable_grenade_launcher.phrases.txt
	```

* <details><summary>Changelog | 版本日誌</summary>

	* v1.0 (2025-10-16)
		* Initial Release
</details>

- - - -
# 中文說明
槍械擁有附加式榴彈發射器，消耗彈藥發射榴彈

* 原理
	* 快速點擊右鍵兩次可切換榴彈模式
	* 點擊左鍵發射榴彈 (會消耗備彈)
	* 副武器手槍也有榴彈模式，消耗主武器的彈藥
	* 每種槍枝都有能發射榴彈，如果要修改榴彈傷害、發射距離、榴彈爆炸範圍請參見文件[data/l4d_attachable_grenade_launcher.cfg](data/l4d_attachable_grenade_launcher.cfg)
		* 內有中文說明，可點擊查看

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d_attachable_grenade_launcher.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		l4d_attachable_grenade_launcher_enable "1"
		```
</details>