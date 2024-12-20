# Description | 內容
Random weapon drops when pulled by smoker

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/FWDx7Tge86M)

* Image | 圖示
	<br/>![l4d_smoker_pull_weapon_drop_1](image/l4d_smoker_pull_weapon_drop_1.gif)
	<br/>![l4d_smoker_pull_weapon_drop_2](image/l4d_smoker_pull_weapon_drop_2.gif)
	<br/>![l4d_smoker_pull_weapon_drop_3](image/l4d_smoker_pull_weapon_drop_3.gif)

* Require | 必要安裝
<br/>None

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_smoker_pull_weapon_drop.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d_smoker_pull_weapon_drop_enable "1"

		// Drop survivor weapon when 0=Grabbed, 1=Pulled.
		l4d_smoker_pull_weapon_drop_type "0"

		// Which weapon drpps 0=Current, 1=Random slot.
		l4d_smoker_pull_weapon_drop_which "0"

		// Probability to drop weapon.
		l4d_smoker_pull_weapon_drop_probability "100"
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

* <details><summary>Related Plugin | 相關插件</summary>

	1. [l4d2_smoker_toxic](/L4D_插件/Smoker_舌頭/l4d2_smoker_toxic): Adds a lot of abilities and powers to the smoker in order to spread its poison gas
		> 增強Smoker，賦予多種超能力成為毒性的化學兵器
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.0
		* Initial Release
</details>

- - - -
# 中文說明
被Smoker拉走的時候強制掉落手上的武器

* 原理
	* 被Smoker拖走一瞬間判定目前拿在手上的東西強制掉落

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d_smoker_pull_weapon_drop.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		l4d_smoker_pull_weapon_drop_enable "1"

		// 0=被舌頭抓住時掉落武器 (這時候人類還能開槍還擊), 1=被舌頭拖走時掉落武器.
		l4d_smoker_pull_weapon_drop_type "0"

		// 0=目前的武器掉落, 1=身上隨機的欄位武器或物品掉落.
		l4d_smoker_pull_weapon_drop_which "0"

		// 掉落機率 [1-100]%
		l4d_smoker_pull_weapon_drop_probability "100"
		```
</details>