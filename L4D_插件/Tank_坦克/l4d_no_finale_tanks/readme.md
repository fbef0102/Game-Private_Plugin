# Description | 內容
Skip tank event during final stage

> __Note__ <br/>
This plugin is private, Please contact [me](/#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](/#私人插件列表-private-plugins-list)

* Video | 影片展示
<br>None

* Image | 圖示
<br>None

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_no_finale_tanks.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d_no_finale_tanks_enable "1"
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

	1. [l4d_NoEscapeTank](/L4D_插件/Tank_坦克/l4d_NoEscapeTank): No Tank Spawn as the rescue vehicle is coming
    	* 救援載具來臨之後不會有Tank來襲
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.0 (2024-4-7)
	    * Initial Release
</details>

- - - -
# 中文說明
最後一關救援途中不會有Tank來襲直到救援載具來臨

* 原理
	* 最後一關的救援途中，不會有Tank來襲，略過Tank局
	* 也適用於對抗，真人玩家不會有Tank能操控
	* 等救援載具來臨之後，會有Tank

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d_no_finale_tanks.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		l4d_no_finale_tanks_enable "1"
		```
</details>
