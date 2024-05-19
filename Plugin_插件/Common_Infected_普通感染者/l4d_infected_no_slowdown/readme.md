# Description | 內容
Prevent survivor from slowdown by common infected

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Video | 影片展示
<br>None

* Image | 圖示
<br>None

* <details><summary>How does it work?</summary>

	* (Before this plugin) It will cause survivors slowdown when being hurt by common infected
	* (After this plugin) Remove slowdown by common infected
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_infected_no_slowdown.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d_infected_no_slowdown_enable "1"
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

	* v1.0 (2024-5-19)
		* Initial Release
</details>

- - - -
# 中文說明
被普通感染者攻擊不會减少移動速度

* 原理
	* (裝此插件之前) 被普通感染者抓傷會導致倖存者速度降低
	* (裝此插件之後) 被普通感染者抓傷不會導致倖存者速度降低

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d_infected_no_slowdown.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		l4d_infected_no_slowdown_enable "1"
		```
</details>