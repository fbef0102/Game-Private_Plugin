# Description | 內容
The boomer can active super explode (AI + Human)

> __Note__ <br/>
This plugin is private, Please contact [me](/#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](/#私人插件列表-private-plugins-list)

* Apply to | 適用於
	```
	L4D1
	L4D2
	```

* [Video | 影片展示](https://youtu.be/kJ4UrYpV514)

* Image | 圖示
	* Boomer human player (真人Boomer玩家)
	<br/>![l4d_boomer_super_explode_1](image/l4d_boomer_super_explode_1.gif)
	<br/>![l4d_boomer_super_explode_2](image/l4d_boomer_super_explode_2.gif)
	* AI Boomer (AI也適用)
	<br/>![l4d_boomer_super_explode_3](image/l4d_boomer_super_explode_3.gif)

* <details><summary>How does it work?</summary>

	* Player-controlled Boomer holds crouch for 4 seconds, press jump to self explode
	* AI Boomer will super explode after vomit (see cvar below)
	* Create fire, explode particle, cause more damage to survivors nearby and shock wave
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	2. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_boomer_super_explode.cfg
		```php
		// 0=Plugin off, 1=Plugin on. Player-controlled Boomer can crouch to charge and press jump to make super explode
		l4d_boomer_super_explode_enable "1"

		// Number of seconds to charge before activating super explode
		l4d_boomer_super_explode_charge_time "4"

		// lifetime of fire dropped by boomer super explode, must less than official cvar inferno flame lifetime (0=Disable fire)
		l4d_boomer_super_explode_fire "12.0"

		// Amount of damage caused in range of boomer super explode.
		l4d_boomer_super_explode_damage "10.0"

		// Range of the boomer super explode
		l4d_boomer_super_explode_radius "300.0"

		// Crouch Speed when fully charged (0=off)
		l4d_boomer_super_explode_speed "280.0"

		// Number of seconds to wait before charge expires
		l4d_boomer_super_explode_expire "2.5"
		```
</details>

* Translation Support | 支援翻譯
	```
	translations/l4d_boomer_super_explode.phrases.txt
	```

* <details><summary>Related Plugin | 相關插件</summary>

	1. [l4d2_boomer_vomit_move](/L4D_插件/Boomer_Boomer/l4d2_boomer_vomit_move): Continue normal movement speed while Boomer vomit (AI + Human)
		> Boomer可以邊吐邊移動 (AI與真人都適用)
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.1 (2024-9-7)
		* AI Boomer will super explode after vomit

	* v1.0 (2023-12-24)
		* Initial Release
</details>

- - - -
# 中文說明
Boomer可以自爆，產生更大的傷害與衝擊波 (AI與真人都適用)

* 原理
	* Boomer 真人玩家可以蹲下，充能四秒鐘之後按下空白鍵自爆
	* AI Boomer 嘔吐三秒鐘之後自爆
		* 產生火焰與爆炸特效，對周圍造成更大的傷害與衝擊波

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d_boomer_super_explode.cfg
		```php
		// 0=關閉插件, 1=啟動插件，Boomer 真人玩家可以蹲下，充能完畢之後按下空白鍵自爆
		l4d_boomer_super_explode_enable "1"

		// 充能完畢所需時間
		l4d_boomer_super_explode_charge_time "4"

		// Boomer自爆會留下火焰, 火焰的持續時間 (0=不要留下火焰)
		l4d_boomer_super_explode_fire "12.0"

		// Boomer自爆所造成的傷害
		l4d_boomer_super_explode_damage "10.0"

		// Boomer自爆的傷害範圍
		l4d_boomer_super_explode_radius "300.0"

		// 充能完畢時蹲下速度 (0=關閉加速)
		l4d_boomer_super_explode_speed "280.0"

		// 充能太久超過2.5秒將會失效，需要重新充能
		l4d_boomer_super_explode_expire "2.5"
		```
</details>