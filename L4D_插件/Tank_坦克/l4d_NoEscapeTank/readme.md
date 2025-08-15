# Description | 內容
No Tank Spawn as the rescue vehicle is coming

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

	* cfg/sourcemod/l4d_NoEscapeTank_example.cfg
		```php
		// Removes tanks which spawn as the rescue vehicle arrives on finales.
		l4d_NoEscapeTank_enable "1"
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

* <details><summary>Changelog | 版本日誌</summary>

	* v1.0
	    * Initial Release
</details>

- - - -
# 中文說明
最後一關救援載具來臨之後不會有Tank來襲

* 原理
	* 當最後直升機、船隻、火車等救援載具來臨之後，不會有Tank來襲
	* 也適用於對抗，真人玩家不會有Tank能操控

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d_NoEscapeTank_example.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		l4d_NoEscapeTank_enable "1"
		```
</details>
