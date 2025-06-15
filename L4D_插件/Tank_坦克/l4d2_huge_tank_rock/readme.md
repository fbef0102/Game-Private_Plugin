# Description | 內容
Make Tank Rock Huge and deals more damage

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Apply to | 適用於
	```
	L4D2
	```

* Image | 圖示
	<br/>![l4d2_huge_tank_rock_1](image/l4d2_huge_tank_rock_1.gif)
	<br/>![l4d2_huge_tank_rock_2](image/l4d2_huge_tank_rock_2.gif)

* <details><summary>How does it work?</summary>

	* Make Tank Rock Huge when tank throws tank rock
	* Huge Rock deals more damage to survivors, see cvars below
	* 🟥 Hitbox of tank rock is not changed, go ask valve
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)

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

		// Damage multiplier when survivor ate the huge rock (0=Don't modify damage)
		l4d2_huge_tank_rock_dmg_multi "1.5"
		```
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.1 (2024-11-27)
		* Update cvars

	* v1.0 (2024-7-13)
		* Initial Release
</details>

- - - -
# 中文說明
Tank石頭變得巨大且更多傷害

* 原理
	* Tank玩家丟出的石頭變得更大
	* 巨大的石頭造成的傷害變多 (看指令)
	* 🟥 石頭的砸中判定不會改變，去問Valve

* 用意在哪?
	* 好玩，嚇人

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d_huge_tank_rock.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		l4d2_tank_hittable_reset_enable "1"

		// 石頭變得巨大的機率 [1-100]%
		l4d2_huge_tank_rock_chance "100.0"

		// 石頭模型大小改變的最小比例
		l4d2_huge_tank_rock_scale_min "1.3"

		// 石頭模型大小改變的最大比例
		l4d2_huge_tank_rock_scale_max "2.5"

		// 巨大石頭對倖存者造成的傷害倍率 (0=不修改)
		l4d2_huge_tank_rock_dmg_multi "1.5"
		```
</details>