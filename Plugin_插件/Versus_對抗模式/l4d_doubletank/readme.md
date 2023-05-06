# Description | 內容
Spawn second player-controlled tank in versus mode

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Video | 影片展示
<br/>None

* Image | 圖示
<br/>None

* Apply to | 適用於
	```
	L4D1 versus
	L4D2 versus
	```

* <details><summary>Changelog | 版本日誌</summary>

	* v1.0
	    * Initial Release
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)

* Optional | 輔助插件
	1. [versusbosses_ifier](/Plugin_插件/Versus_對抗模式/versusbosses_ifier): Sets a tank and witch spawn point on every map in versus
    	> 對抗模式下每一張地圖挑選隨機路程生成一隻Tank與一個Witch

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_doubletank.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d_doubletank_enable "1"
		```
</details>

* <details><summary>Command | 命令</summary>

	None
</details>

- - - -
# 中文說明
對抗模式下生成第二隻玩家可以操控的Tank

* 原理
	* 對抗模式的AI Tank生成並交移給玩家操控時，生成第二隻AI Tank並交移給第二位特感玩家操控

* 功能
	* 設置開關
