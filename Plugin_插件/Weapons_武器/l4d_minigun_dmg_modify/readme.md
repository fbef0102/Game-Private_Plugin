# Description | 內容
Modify damage from heavy machine gun and minigun to SI/Witch/Tank/Common

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/eNFcXMafLuQ)

* Image | 圖示
	| Before (裝此插件之前) | After (裝此插件之後) |
	| -------------|:-----------------:|
	| ![l4d_minigun_dmg_modify_1](image/l4d_minigun_dmg_modify_1.gif)|![l4d_minigun_dmg_modify_2](image/l4d_minigun_dmg_modify_2.gif)|
	| ![l4d_minigun_dmg_modify_3](image/l4d_minigun_dmg_modify_3.gif)|![l4d_minigun_dmg_modify_4](image/l4d_minigun_dmg_modify_4.gif)|

* <details><summary>How does it work?</summary>

	* Modify damage from heavy machine gun and minigun in [data/l4d_minigun_dmg_modify.cfg](data/l4d_minigun_dmg_modify.cfg)
		* To Special Infected
		* To Witch
		* To Tank
		* To Common Infected
</details>

* Require | 必要安裝
<br/>None

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_minigun_dmg_modify.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d_minigun_dmg_modify_enable "1"
		```
</details>

* <details><summary>Command | 命令</summary>

	None
</details>

* <details><summary>Data Config</summary>
  
	* [data/l4d_minigun_dmg_modify.cfg](data/l4d_minigun_dmg_modify.cfg)
		> Manual in this file, click for more details...
</details>

* Apply to | 適用於
	```
	L4D1
	L4D2
	```

* <details><summary>Changelog | 版本日誌</summary>

	* v1.0 (2024-11-24)
		* Initial Release
</details>

- - - -
# 中文說明
修改地圖上的重機槍與加特林機槍對 Tank/特感/Witch/小殭屍 造成的傷害

* 原理
	* 修改重機槍與加特林機槍的傷害數值，使用文件: [data/l4d_minigun_dmg_modify.cfg](data/l4d_minigun_dmg_modify.cfg)
	<br/>![zho/l4d_minigun_dmg_modify_0](image/zho/l4d_minigun_dmg_modify_0.jpg)
		* 對Tank傷害
		* 對特感傷害
		* 對Witch傷害
		* 對小殭屍傷害

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d_minigun_dmg_modify.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		l4d_minigun_dmg_modify_enable "1"
		```
</details>

* <details><summary>文件設定範例</summary>
  
	* [data/l4d_minigun_dmg_modify.cfg](data/l4d_minigun_dmg_modify.cfg)
		> 內有中文說明，可點擊查看
</details>