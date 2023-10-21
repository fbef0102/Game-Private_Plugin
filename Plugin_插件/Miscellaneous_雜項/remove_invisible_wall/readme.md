# Description | 內容
Remove all invisible wall on the map

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Video | 影片展示
<br/>None

* Image | 圖示
<br/>None

* Notice
	* Map brush still can not be removed

* Require | 必要安裝
<br/>None

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/remove_invisible_wall.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		remove_invisible_wall_enable "1"
		```
</details>

* <details><summary>Command | 命令</summary>
	
	* **Remove Invisible Wall**
		```php
		sm_rmwall
		```
</details>

* Apply to | 適用於
	```
	L4D1 
	L4D2
	```

* <details><summary>Changelog | 版本日誌</summary>

	* v1.0 (2023-6-15)
		* Initial Release
</details>

- - - -
# 中文說明
移除地圖上所有的空氣牆

* 原理
	* 任一玩家輸入!rmwall，移除地圖上的所有空氣牆
		* 空氣牆實體為 env_physics_blocker, env_player_blocker
	* 地圖編譯時內嵌好的空氣牆依然不能被移除

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/remove_invisible_wall.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		remove_invisible_wall_enable "1"
		```
</details>

* <details><summary>命令中文介紹 (點我展開)</summary>
	
	* **移除地圖上的所有空氣牆**
		```php
		sm_rmwall
		```
</details>