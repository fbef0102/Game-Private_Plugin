# Description | 內容
Abandon magazine when reload weapon

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
	| ![l4d_weapon_clear_reload_before_1](image/l4d_weapon_clear_reload_before_1.gif)|![l4d_weapon_clear_reload_after_1](image/l4d_weapon_clear_reload_after_1.gif)|

* <details><summary>How does it work?</summary>

	* When you reload weapon, abandon the magazine
	* For example, Reload Ak47: 30/360
		* (Original) -> 0/390 -> 40/350
		* (After) -> 0/360 -> 40/320
</details>

* Require | 必要安裝
<br/>None

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_weapon_clear_reload.cfg
		```php
		// 0=off plugin, 1=on plugin
		l4d_weapon_clear_reload_allow "1"
		```
</details>

* <details><summary>Known Conflicts</summary>
	
	If you don't use any of these plugins at all, no need to worry about conflicts.
	1. [l4d2_weapon_csgo_reload](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4d2_weapon_csgo_reload)
		* Quickswitch Reloading like CS:GO in L4D2
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.0 (2025-2-15)
		* Initial Release
</details>

- - - -
# 中文說明
武器裝彈時放棄彈夾內的所有子彈

* 原理
	* 譬如裝一個AK47武器: 30/360
		* (裝此插件之前) -> 0/390 -> 40/350
		* (裝此插件之後) -> 0/360 -> 40/320

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d_weapon_clear_reload.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		l4d_weapon_clear_reload_allow "1"
		```
</details>

* <details><summary>會衝突的插件</summary>
	
    如果沒安裝以下插件就不需要擔心衝突
	1. [l4d2_weapon_csgo_reload](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4d2_weapon_csgo_reload)
		* 將武器改成現代遊戲的裝子彈機制 (仿CS:GO切槍裝彈設定)
</details>