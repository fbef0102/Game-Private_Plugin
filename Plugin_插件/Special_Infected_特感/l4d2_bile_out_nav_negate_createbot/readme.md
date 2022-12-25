# Description | 內容
If Vomit jar is thrown at the place which is out of map (NAV), negate bile effect

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/tfYESng3F3Y)

* Image | 圖示
	* display message
    > 顯示膽汁效果無效
	<br/>![l4d2_bile_out_nav_negate_createbot_1](image/l4d2_bile_out_nav_negate_createbot_1.jpg)

* Apply to | 適用於
```
L4D2
```

* <details><summary>Changelog | 版本日誌</summary>

	* v1.0
	    * Original Request by 壹梦
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	2. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)
	3. [CreateSurvivorBot](https://forums.alliedmods.net/showpost.php?p=2729883&postcount=16)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d2_bile_out_nav_negate.cfg
	```php
    // Enable/Disable the plugin.
    l4d2_bile_out_nav_negate_enable "1"
	```
</details>

* <details><summary>Command | 命令</summary>

	None
</details>

> __Warning__ <br/>
it works for 90% of all areas<br/>
Not 100% successful everywhere, few positions are still bugged

- - - -
# 中文說明
當膽汁丟到地圖之外或普通殭屍追不到的地方，膽汁效果將會無效

* 原理
    * 當膽汁瓶落地時會生出一個假Bot然後判斷假Bot可否到達膽汁瓶的位置，如果無法抵達，將刪除膽汁的效果 (膽汁的綠煙還在)

* 功能
	1. 90%大部分的地圖都能判斷成功
    2. 不是每個地方都能100%成功，受到地圖的NAV與地形影響

