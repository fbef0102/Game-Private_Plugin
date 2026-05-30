
# Description | 內容
Randomly turn doors into alarm doors on the maps, trigger the horde if survivors shoot or open

> __Note__ <br/>
This plugin is private, Please contact [me](/#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](/#私人插件列表-private-plugins-list)<br/>

* Apply to | 適用於
	```
	L4D1
	L4D2
	```

* [Video | 影片展示](https://youtu.be/-2LgQVz8WsI)

* Image
	<br/>![l4d_random_alarm_door_1](image/l4d_random_alarm_door_1.gif)
	<br/>![l4d_random_alarm_door_2](image/l4d_random_alarm_door_2.gif)

* <details><summary>How does it work?</summary>

	* Randomly turn doors into alarm doors on the maps
	* If survivors shoot or open/close or shove, trigger the alarm and horde
	* You can customize alarm door spawn chance, color and other settings in file [data/l4d_random_alarm_door.cfg](data/l4d_random_alarm_door.cfg)
		* Manual in this file, click for more details...
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	2. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_random_alarm_door.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d_random_alarm_door_enable "1"
		```
</details>

* Translation Support | 支援翻譯
	```
	translations/l4d_random_alarm_door.phrases.phrases.txt
	```

* <details><summary>Changelog | 版本日誌</summary>

    * v1.0 (2026-5-16)
        * Initial Release
</details>

- - - -
# 中文說明
隨機將地圖上的門變成警報門，開槍射門或是開關門將會觸發警報

* 原理
	* 隨機將地圖上的門變成警報門
	* 開槍射門或是開關門或是右鍵推門將會觸發警報，會有屍潮
	* 想改警報門的生成機率、顏色或是其他設置可以修改文件: [data/l4d_random_alarm_door.cfg](data/l4d_random_alarm_door.cfg)
		* 內有中文說明，可點擊查看

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d_random_alarm_door.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		l4d_random_alarm_door_enable "1"
		```
</details>