# Description | 內容
Replace magnum/melee/chainsaw/dual pistol with regular pistols or magnum when incapped.

> __Note__ <br/>
This plugin is private, Please contact [me](/#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](/#私人插件列表-private-plugins-list)

* Image | 圖示
<br/>![l4d2_incap_gun_replace_1](image/l4d2_incap_gun_replace_1.gif)
<br/>![l4d2_incap_gun_replace_2](image/l4d2_incap_gun_replace_2.gif)

* Apply to | 適用於
	```
	L4D2
	```

* <details><summary>How does it work?</summary>

	* If player incaps
		* Replace magnum with regular pistols, restore magnum when get up
		* Replace melee weapons with double pistols or magnum, restore melee weapons when get up
		* Replace chainsaw with double pistols or magnum, restore chainsaw when get up
		* Replace single pistol with magnum, restore single pistol when get up
		* Replace dual pistol with magnum, restore dual pistol when get up
</details>

* Require | 必要安裝
<br/>None

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d2_incap_gun_replace.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d2_incap_gun_replace_enable "1"

		// Replace magnum with 0=Single Pistol, 1=Double Pistols, -1=Disable
		l4d2_incap_gun_replace_magnum "-1"

		// Replace melee weapons with 0=Double Pistols, 1=Magnum pistol, -1=Disable
		l4d2_incap_gun_replace_melee "1"

		// Replace chainsaw with 0=Double Pistols, 1=Magnum pistol, -1=Disable
		l4d2_incap_gun_replace_chainsaw "1"

		// Replace single pistol weapons with 0=Double Pistols, 1=Magnum pistol, -1=Disable
		l4d2_incap_gun_replace_sin_pistol "1"

		// Replace dual pistol weapons with 0=Single Pistols, 1=Magnum pistol, -1=Disable
		l4d2_incap_gun_replace_dual_pistol "1"
		```
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.1h (2025-1-14)
		* Update cvars
		* Replace chainsaw, singe pistol, dual pistol

	* v1.0h (2024-12-3)
		* Add melee weapons
		* Add cvars

	* Original
		[From SirPlease/L4D2-Competitive-Rework](https://github.com/SirPlease/L4D2-Competitive-Rework/blob/master/addons/sourcemod/scripting/l4d2_magnum_incap.sp)
</details>

- - - -
# 中文說明
倒地時如果手持近戰/電鋸/瑪格南手槍/雙手槍，改換成其他手槍

* 原理
	* 如果手持瑪格南手槍倒地，換成其他手槍
	* 如果手持近戰倒地，換成雙槍或瑪格南
	* 如果手持電鋸倒地，換成雙槍或瑪格南
	* 如果手持單把手槍或雙手槍倒地，換成瑪格南

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d2_incap_gun_replace.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		l4d2_incap_gun_replace_enable "1"

		// 瑪格南手槍換成 0=單把手槍, 1=雙槍, -1=不取代
		l4d2_incap_gun_replace_magnum "-1"

		// 近戰武器換成 0=雙槍, 1=瑪格南手槍, -1=不取代, 預設單把手槍
		l4d2_incap_gun_replace_melee "1"

		// 電鋸換成 0=雙槍, 1=瑪格南手槍, -1=不取代, 預設單把手槍
		l4d2_incap_gun_replace_chainsaw "1"

		// 單把手槍換成 0=雙槍, 1=瑪格南手槍, -1=不取代
		l4d2_incap_gun_replace_sin_pistol "1"

		// 雙手槍換成 0=單把手槍, 1=瑪格南手槍, -1=不取代
		l4d2_incap_gun_replace_dual_pistol "1"
		```
</details>