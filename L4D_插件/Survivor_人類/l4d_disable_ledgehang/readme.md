# Description | 內容
Disable ledge hanging by player

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Apply to | 適用於
	```
	L4D1 
	L4D2
	```

* Image | 圖示
	| Before (裝此插件之前)  			| After (裝此插件之後) |
	| -------------|:-----------------:|
	| ![l4d_disable_ledgehang_1](image/l4d_disable_ledgehang_1.gif)|![l4d_disable_ledgehang_2](image/l4d_disable_ledgehang_2.gif)|

* Require | 必要安裝
<br/>None

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_disable_ledgehang.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d_disable_ledgehang_enable "1"
		```
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.0 (2024-7-15)
		* Initial Release
</details>

- - - -
# 中文說明
倖存者不會掛邊而是直接墬落

* 原理
	* 倖存者在屋頂邊緣不會掛邊而是直接墬落

* 用意在哪?
	* 好玩刺激
	* 適合做跳躍模式的伺服器，在屋頂上速跑與跳躍

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d_disable_ledgehang.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		l4d_disable_ledgehang_enable "1"
		```
</details>