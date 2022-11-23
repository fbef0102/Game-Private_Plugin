# Description | 內容
Random weapon drops when pulled by smoker

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/FWDx7Tge86M)

* Image | 圖示
<br/>None

* Apply to | 適用於
```
L4D1
L4D2
```

* <details><summary>Changelog | 版本日誌</summary>

	* v1.0
		* Original Request by Yabi
</details>

* Require | 必要安裝
	None

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_smoker_pull_weapon_drop.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d_smoker_pull_weapon_drop_enable "1"

		// Probability to drop weapon.
		l4d_smoker_pull_weapon_drop_probability "100"

		// Drop survivor weapon when 0=Grabbed, 1=Pulled.
		l4d_smoker_pull_weapon_drop_type "0"

		// Which weapon drpps 0=Current, 1=Random slot.
		l4d_smoker_pull_weapon_drop_which "0"
		```
</details>

* <details><summary>Command | 命令</summary>
	None
</details>

- - - -
# 中文說明
被Smoker拉走的時候強制掉落手上的武器

* 原理
	* 被Smoker拖走一瞬間判定目前拿在手上的東西強制掉落

* 功能
	1. 可調整被拉一瞬間或者一秒後才掉落
	2. 可調整為身上武器或物品隨機掉落
	3. 設定掉落機率