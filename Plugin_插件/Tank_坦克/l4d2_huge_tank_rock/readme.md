# Description | 內容
Make Tank Rock Huge

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Video | 影片展示
<br/>None

* Image | 圖示
	<br/>![l4d2_huge_tank_rock_1](image/l4d2_huge_tank_rock_1.gif)
	<br/>![l4d2_huge_tank_rock_2](image/l4d2_huge_tank_rock_2.gif)

* <details><summary>How does it work?</summary>

	* Make Tank Rock Huge when tank throws tank rock
	* 🟥 Hitbox of tank rock is not changed
</details>

* Require | 必要安裝
<br/>None

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d2_huge_tank_rock.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d2_huge_tank_rock_enable "1"

		// The chance that rock become huge [1-100]%
		l4d2_huge_tank_rock_chance "100.0"

		// Minium Scale the tank rock model
		l4d2_huge_tank_rock_scale_min "1.3"

		// Maximum Scale the tank rock model
		l4d2_huge_tank_rock_scale_max "2.5"
		```
</details>

* <details><summary>Command | 命令</summary>

	None
</details>


* Apply to | 適用於
	```
	L4D2
	```

* <details><summary>Changelog | 版本日誌</summary>

	* v1.0 (2024-7-13)
		* Initial Release
</details>

- - - -
# 中文說明
Tank石頭變得巨大

* 原理
	* Tank玩家丟出的石頭變得更大
	* 🟥 石頭的砸中判定不會改變

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d_huge_tank_rock.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		l4d2_tank_hittable_reset_enable "1"

		// 石頭變得巨大的機率 [1-100]%
		l4d_huge_tank_rock_chance "100.0"

		// 石頭模型大小改變的最小比例
		l4d_huge_tank_rock_scale_min "1.3"

		// 石頭模型大小改變的最大比例
		l4d_huge_tank_rock_scale_max "2.5"
		```
</details>