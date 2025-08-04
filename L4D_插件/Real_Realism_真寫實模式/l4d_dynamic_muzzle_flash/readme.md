# Description | 內容
Adds dynamic muzzle flash to gunfire

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Apply to | 適用於
	```
	L4D1
	L4D2
	```

* [Video | 影片展示](https://youtu.be/wlI10amIbW4)

* Image | 圖示
	<br/>![l4d_dynamic_muzzle_flash_1](image/l4d_dynamic_muzzle_flash_1.jpg)
	<br/>![l4d_dynamic_muzzle_flash_2](image/l4d_dynamic_muzzle_flash_2.jpg)

* <details><summary>How does it work?</summary>

	* Give mzzle flash when gun fire
	* Everyone can see including teammates and spectators
</Chargedetails>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_dynamic_muzzle_flash.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d_dynamic_muzzle_flash_allow "1"

		// Turn on the plugin in these game modes, separate by commas (no spaces). (Empty = all).
		l4d_dynamic_muzzle_flash_modes ""

		// Turn off the plugin in these game modes, separate by commas (no spaces). (Empty = none).
		l4d_dynamic_muzzle_flash_modes_off ""

		// Turn on the plugin in these game modes. 0=All, 1=Coop, 2=Survival, 4=Versus, 8=Scavenge. Add numbers together.
		l4d_dynamic_muzzle_flash_modes_tog "0"

		// 0=No, 1=Allow bots to have dynamic lights.
		l4d_dynamic_muzzle_bots "0"

		// Brightness of the light. [1-255]
		l4d_dynamic_muzzle_flash_bright "255.0"

		// The light color. Three values between 0-255 separated by spaces. RGB Color255 - Red Green Blue.
		l4d_dynamic_muzzle_flash_color "250 150 30"

		// Distance the light shines before not lighting up.
		l4d_dynamic_muzzle_flash_distance "30"

		// 0=Show the dynamic light to all players. 1=Hide the dynamic light so only other players can see it. 2=Only show to the owner.
		l4d_dynamic_muzzle_flash_hide "0"

		// 0=Trace directly to where they are aiming. 1=Trace hull to detect nearby entities.
		l4d_dynamic_muzzle_flash_hull "1"

		// The light will disappear after this many seconds.
		l4d_dynamic_muzzle_flash_time "0.1"

		// 0=Off. Probability to change the brightness of the light. [1-100]
		l4d_dynamic_muzzle_flash_Chance "50"

		// The maximum brightness of the light when the brightness is changed. [1-255]
		l4d_dynamic_muzzle_flash_bright_max "200"

		// The minimum brightness of the light when the brightness is changed. [1-255]
		l4d_dynamic_muzzle_flash_bright_min "127"

		// (L4D2) Empty string to allow all. Allow these weapon IDs being used in this plugin, separate by commas (no spaces). See plugin source code for more details.
		// "weapon_pistol",						1
		// "weapon_smg",						2
		// "weapon_pumpshotgun",				3
		// "weapon_autoshotgun",				4
		// "weapon_rifle",						5
		// "weapon_hunting_rifle",				6
		// "weapon_smg_silenced",				7
		// "weapon_shotgun_chrome",				8
		// "weapon_rifle_desert",				9
		// "weapon_sniper_military",			10
		// "weapon_shotgun_spas",				11
		// "weapon_grenade_launcher",			12
		// "weapon_rifle_ak47",					13
		// "weapon_pistol_magnum",				14
		// "weapon_smg_mp5",					15
		// "weapon_rifle_sg552",				16
		// "weapon_sniper_awp",					17
		// "weapon_sniper_scout",				18
		// "weapon_rifle_m60",					19
		l4d_dynamic_muzzle_flash_weapons "1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19"

		// (L4D1) Empty string to allow all. Allow these weapon IDs being used in this plugin, separate by commas (no spaces). See plugin source code for more details.
		// weapon_pistol",						1
		// weapon_smg",							2
		// weapon_pumpshotgun",					3
		// weapon_autoshotgun",					4
		// weapon_rifle",						5
		// weapon_hunting_rifle",				6
		l4d_dynamic_muzzle_flash_weapons "1,2,3,4,5,6"
		```
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.0h (2022-11-17)
		* Remake code.
		* Add convars to allow specified weapons
		* Probability to change the brightness of the light

	* Credit
		* Original: [Fork of sereky's Dynamic Muzzle Flash](https://forums.alliedmods.net/showpost.php?p=1765869&postcount=6)
</details>

- - - -
# 中文說明
槍口增加逼真的閃光

* 原理
	* 開槍的時候，槍口產生動態光源，所以從第三者或旁觀者角度看，像是出現逼真的槍口焰

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d_dynamic_muzzle_flash.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		l4d_dynamic_muzzle_flash_allow "1"

		// 什麼模式下啟動此插件, 逗號區隔 (無空白). (留白 = 所有模式)
		l4d_dynamic_muzzle_flash_modes ""

		// 什麼模式下關閉此插件, 逗號區隔 (無空白). (留白 = 無)
		l4d_dynamic_muzzle_flash_modes_off ""

		// 什麼模式下啟動此插件. 0=所有模式, 1=戰役, 2=生存, 4=對抗, 8=清道夫. 請將數字相加起來
		l4d_dynamic_muzzle_flash_modes_tog "0"

		// 為1時，允許Bots開槍也有動態光源
		l4d_dynamic_muzzle_bots "0"

		// 動態光源的亮度 [1-255]
		l4d_dynamic_muzzle_flash_bright "255.0"

		// 動態光源的顏色，填入RGB三色 (三個數值介於0~255，需要空格)
		l4d_dynamic_muzzle_flash_color "250 150 30"

		// 動態光源的亮度範圍
		l4d_dynamic_muzzle_flash_distance "30"

		// 0=所有玩家看得到動態光源. 1=自己看不到自己開槍的動態光源，但別人都能看到. 2=只有自己能看到自己開槍的動態光源
		l4d_dynamic_muzzle_flash_hide "0"

		// 0=準心指到哪就到哪發出動態光源. 1=偵測玩家準心附近的物件給予良好的動態光源效果
		l4d_dynamic_muzzle_flash_hull "1"

		// 開槍時，動態光源只會出現0.1秒
		l4d_dynamic_muzzle_flash_time "0.1"

		// 有一定的機率隨機改變動態光源的亮度 [1-100] (0=關閉這項功能)
		l4d_dynamic_muzzle_flash_Chance "50"

		// 隨機改變動態光源的最小亮度 [1-255]
		l4d_dynamic_muzzle_flash_bright_max "200"

		// 隨機改變動態光源的最大亮度 [1-255]
		l4d_dynamic_muzzle_flash_bright_min "127"

		// (L4D2) 空=允許全武器. 填入武器的ID，只允許這些武器可以開槍發出動態光源, 逗號分隔（不須空格）. 請打開源碼查看武器的ID列表
		// "weapon_pistol",						1
		// "weapon_smg",						2
		// "weapon_pumpshotgun",				3
		// "weapon_autoshotgun",				4
		// "weapon_rifle",						5
		// "weapon_hunting_rifle",				6
		// "weapon_smg_silenced",				7
		// "weapon_shotgun_chrome",				8
		// "weapon_rifle_desert",				9
		// "weapon_sniper_military",			10
		// "weapon_shotgun_spas",				11
		// "weapon_grenade_launcher",			12
		// "weapon_rifle_ak47",					13
		// "weapon_pistol_magnum",				14
		// "weapon_smg_mp5",					15
		// "weapon_rifle_sg552",				16
		// "weapon_sniper_awp",					17
		// "weapon_sniper_scout",				18
		// "weapon_rifle_m60",					19
		l4d_dynamic_muzzle_flash_weapons "1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19"

		// (L4D1) 空=允許全武器. 填入武器的ID，只允許這些武器可以開槍發出動態光源, 逗號分隔（不須空格）. 請打開源碼查看武器的ID列表
		// weapon_pistol",						1
		// weapon_smg",							2
		// weapon_pumpshotgun",					3
		// weapon_autoshotgun",					4
		// weapon_rifle",						5
		// weapon_hunting_rifle",				6
		l4d_dynamic_muzzle_flash_weapons "1,2,3,4,5,6"
		```
</details>
