# Description | 內容
Press shift and swing melee to active melee shock effect, slash the C.I./S.I./witch around you

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Video | 影片展示
<br/>None

* Image | 圖示
	<br/>![l4d2_melee_shock_1](image/l4d2_melee_shock_1.gif)
	<br/>![l4d2_melee_shock_2](image/l4d2_melee_shock_2.gif)

* <details><summary>How does it work?</summary>

	* When swing the melee
		* Press shift -> Shock effect: slash the C.I./S.I./witch around you (dmg_slash)
		* Press Reload -> Burn effect: slash + burn the C.I./S.I./witch around you (dmg_slash + incendiary bullet)
	* Modify glow, range, damage in [data/l4d2_melee_shock.cfg](data/l4d2_melee_shock.cfg)
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	2. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)

* <details><summary>ConVar | 指令</summary>

	* cfg\sourcemod\l4d2_melee_shock.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d2_melee_shock_enable "1"
		```
</details>

* <details><summary>Command | 命令</summary>

	None
</details>

* Apply to | 適用於
	```
	L4D2
	```

* <details><summary>Changelog | 版本日誌</summary>

	* v1.0 (2024-11-13)	
		* Initial Release
</details>

- - - -
# 中文說明
近戰武器可以隔空砍周圍的殭屍與特感

* 原理
	* 當左鍵揮砍近戰時
		* 按住shift鍵: 隔空砍傷周圍的殭屍與特感
		* 按住R鍵: 隔空砍傷周圍的殭屍與特感並給予灼傷效果
	* 文件設置按鍵、顏色、範圍、傷害: [data/l4d2_melee_shock.cfg](data/l4d2_melee_shock.cfg)

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg\sourcemod\l4d2_melee_shock.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		l4d2_melee_shock_enable "1"
		```
</details>