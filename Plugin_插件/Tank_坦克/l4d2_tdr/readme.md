# Description | 內容
Displays Damage Information on Tank Death.

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Video | 影片展示
<br/>None

* Image | 圖示
<br/>![l4d2_tdr_1](image/l4d2_tdr_1.jpg)

* Require | 必要安裝
<br/>None

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d2_tdr.cfg
		```php
		// 0 - Displays tank damage info to players privately. 1 - Displays all damage info publicly.
		l4d2_tdr_display_type "1"
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

* <details><summary>Similar Plugin | 相似插件</summary>

	1. [l4d2_assist](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4d2_assist): Show damage done to S.I. by survivors
		> 每個特感死亡時顯示對特感傷害統計表

	2. [l4d_tank_count](https://github.com/fbef0102/Game-Private_Plugin/tree/main/l4d_tank_count): Show how long is tank alive, how much damage done, and tank incap/death/punch/rock/car statistics
		> Tank死亡時顯示Tank存活多長時間、對倖存者造成的 倒地/死亡/總傷害/拳頭/石頭/車子 統計表
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.0h (2023-8-22)
		* Remake Code
	    * More accurate damage done to tank
</details>

- - - -
# 中文說明
Tank死亡時顯示對Tank造成傷害統計表

* 原理
	* 按照傷害排序
	* 精準傷害計算
	* 也適用於對抗模式