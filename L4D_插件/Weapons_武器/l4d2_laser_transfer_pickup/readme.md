# Description | 內容
Transfer your current weapon laser sight to another while picking up new gun

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Image | 圖示
	| Before (裝此插件之前) | After (裝此插件之後) |
	| -------------|:-----------------:|
	| ![l4d2_laser_transfer_pickup_1](image/l4d2_laser_transfer_pickup_1.gif)|![l4d2_laser_transfer_pickup_2](image/l4d2_laser_transfer_pickup_2.gif)|
	| ![l4d2_laser_transfer_pickup_3](image/l4d2_laser_transfer_pickup_3.gif)|![l4d2_laser_transfer_pickup_4](image/l4d2_laser_transfer_pickup_4.gif)|

* Apply to | 適用於
	```
	L4D2
	```

* <details><summary>How does it work?</summary>

	* If player has the laser sight on primary ```weapon A```
		* When player picks up the new ```weapon B``` => the laser sight would be transferred from old ```weapon A``` to new ```weapon B```
	* Also apply to AI survivor bots
</details>

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d2_laser_transfer_pickup.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d2_laser_transfer_pickup_enable "1"

		// Players with these flags have access to transfer laser sight while picking up new gun
		l4d2_laser_transfer_pickup_flags ""

		// If 1, also apply to ai survivor bots
		l4d2_laser_transfer_pickup_bot "1"
		```
</details>

* <details><summary>Command | 命令</summary>

	* **Remove laser sight**
		```php
		sm_removelaser
		```
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.0 (2024-11-30)
		* Initial Release
</details>

- - - -
# 中文說明
拿起新武器時，可以將紅外線雷射裝置拆掉並裝在新武器上

* 原理
	* 假設玩家手上的```武器A```有雷射裝置
		* 玩家拿取新```武器B```時，舊```武器A```的雷射裝置轉移到新```武器B```上
	* AI也適用

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d2_laser_transfer_pickup.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		l4d2_laser_transfer_pickup_enable "1"

		// 擁有這些權限的玩家，可以將紅外線雷射裝置拆掉並裝在新武器上 (留白 = 任何人都能, -1: 無人)
		l4d2_laser_transfer_pickup_flags ""

		// 為1時，AI倖存者也適用
		l4d2_laser_transfer_pickup_bot "1"
		```
</details>