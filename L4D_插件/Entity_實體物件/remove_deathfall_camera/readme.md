# Description | 內容
Remove all death fall camera on the map (Prevent locking view)

> __Note__ <br/>
This plugin is private, Please contact [me](/#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](/#私人插件列表-private-plugins-list)

* Apply to | 適用於
	```
	L4D1 
	L4D2
	```

* Image | 圖示
	| Before (裝此插件之前)  			| After (裝此插件之後) |
	| -------------|:-----------------:|
	| ![remove_deathfall_camera_1](image/remove_deathfall_camera_1.gif)|![remove_deathfall_camera_2](image/remove_deathfall_camera_2.gif)|

* <details><summary>How does it work?</summary>

	* Remove camera entity
		1. ```point_deathfall_camera```
</details>

* Require | 必要安裝
<br/>None

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/remove_deathfall_camera.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		remove_deathfall_camera_enable "1"

		// Auto remove remove all death fall camera after map finished loading
		remove_deathfall_camera_auto "1"
		```
</details>

* <details><summary>Command | 命令</summary>
	
	* **Remove Deathfall Camera**
		```php
		sm_rmdeathcamera
		```
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.0 (2024-7-15)
		* Initial Release
</details>

- - - -
# 中文說明
移除地圖上所有高空墬落的鏡頭 (避免玩家視角被鎖住)

* 原理
	* 任一玩家輸入```!rmdeathcamera```，移除地圖上的所有高空墬落的鏡頭
		* 實體為 ```point_deathfall_camera```

* 用意在哪?
	* 適合做跳躍模式的伺服器，在地圖上的高空速跑與跳躍

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/remove_deathfall_camera.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		remove_deathfall_camera_enable "1"

		// 地圖載入完成後自動移除地圖上的所有高空墬落的鏡頭
		remove_deathfall_camera_auto "1"
		```
</details>

* <details><summary>命令中文介紹 (點我展開)</summary>
	
	* **移除地圖上的所有空氣牆**
		```php
		sm_rmdeathcamera
		```
</details>