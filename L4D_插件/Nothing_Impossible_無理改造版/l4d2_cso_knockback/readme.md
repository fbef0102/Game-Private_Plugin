# Description | 內容
Weapons and Melees now have knockback power like CSO

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/gtJMe7gCnEk)

* Image | 圖示
	* Idea comes from [Counter Strike Online Knockback](https://zombieescape.fandom.com/wiki/Knockback)
	<br/>![l4d2_cso_knockback_1](image/l4d2_cso_knockback_1.gif)
	<br/>![l4d2_cso_knockback_2](image/l4d2_cso_knockback_2.gif)
	<br/>![l4d2_cso_knockback_3](image/l4d2_cso_knockback_3.gif)
	<br/>![l4d2_cso_knockback_4](image/l4d2_cso_knockback_4.gif)

* <details><summary>How does it work?</summary>

	* When special infected get shot, they are being pushed back and can't move forward
	* Allow Knockback while special infected using their ability, Witch does not apply
		* Tank throwing
		* Hunter pouncing
		* Smoker pulling and dragging
		* Jockey leaping
		* Charger charging
		* Boomer vomiting
		* Spitter spitting
	* KnockBack Power
		* More Damage ＝＞ More KnockBack
		* Closer Distance ＝＞ More KnockBack
		* HeadShot ＝＞ More KnockBack
	* Weapons, Melees, grenades now have knockback power
	* Use data [data/l4d2_cso_knockback.cfg](data/l4d2_cso_knockback.cfg) to control knockback power
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	2. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)
	3. [Actions](https://forums.alliedmods.net/showthread.php?t=336374)

* <details><summary>ConVar | 指令</summary>

	* cfg\sourcemod\l4d2_cso_knockback.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d2_cso_knockback_enable "1"
		```
</details>

* <details><summary>Command | 命令</summary>

	None
</details>

* <details><summary>Data Config</summary>

	* [data/l4d2_cso_knockback.cfg](data/l4d2_cso_knockback.cfg)
		> Manual in this file, click for more details...
</details>

* Apply to | 適用於
	```
	L4D2
	```

* <details><summary>Related Plugin | 相關插件</summary>

	1. [l4d_cso_zombie_Regeneration](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4d_cso_zombie_Regeneration): The zombies have grown stronger, now they are able to heal their injuries by standing still without receiving any damage.
		* 殭屍變得更強大，他們只要站著不動便可以自癒傷勢　(仿CSO惡靈降世 殭屍技能)

	2. [weapon_csgo_reload](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4d2_weapon_csgo_reload): Weapon Quickswitch Reloading in L4D1+2
		* 將武器改成現代遊戲的裝子彈機制 (仿CS:GO切槍裝彈設定)

	3. [l4d2_supply_woodbox](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4d2_supply_woodbox): Supply boxes are dropped randomly in the map every certain seconds to provide support for the fight against the zombies.
		* 地圖上隨機出現補給箱，提供人類強力支援 (仿CSO惡靈降世 補給箱)

	4. [l4d_si_slowdown_gunfire](/L4D_插件/Special_Infected_特感/l4d_si_slowdown_gunfire): Manages the gunfire slowdown for infected team (Also apply to AI)
		* 依據槍械種類修改特感的槍緩速度 (AI特感也適用)
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.0 (2024-3-4)
		* Initial Release
</details>

- - - -
# 中文說明
武器與近戰都有CSO 殭屍擊退效果

* 原理
	* 靈感來自[CSO 殭屍模式](https://zombieescape.fandom.com/wiki/Knockback)，當特感被擊中時，特感會被擊退無法往前進
	* 特感使用能力時也可以被震退，Witch 不適用此插件
		* Tank 丟石頭時
		* Hunter 飛撲時
		* Smoker 拉人時
		* Jockey 跳躍時
		* Charger 衝刺時
		* Boomer 嘔吐時
		* Spitter 吐酸時
	* 擊退公式
		* 傷害越大 ＝＞ 擊退力越強
		* 距離越近 ＝＞ 擊退力越強
		* 射擊頭部 ＝＞ 擊退力越強
	* 武器、近戰、榴彈、瓦斯桶...，均會有擊退效果，如果要修改請參見文件[data/l4d2_cso_knockback.cfg](data/l4d2_cso_knockback.cfg)
	* 搭配槍緩插件: [l4d_si_slowdown_gunfire](/L4D_插件/Special_Infected_特感/l4d_si_slowdown_gunfire)，可以完美復刻CSO殭屍擊退效果

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg\sourcemod\l4d2_cso_knockback.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		l4d2_cso_knockback_enable "1"
		```
</details>

* <details><summary>文件設定範例</summary>

	* [data/l4d2_cso_knockback.cfg](data/l4d2_cso_knockback.cfg)
		> 內有中文說明，可點擊查看
</details>