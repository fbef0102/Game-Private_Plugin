# Description | 內容
Allows for unique Boomer abilities to spread its nauseating bile.

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/QbbMb-oOlZ4)

* Image | 圖示
	* The Unique Boomer
		> 超級肥宅
		<br/>![l4d_Nauseating_boomer_0](image/l4d_Nauseating_boomer_0.jpg)
	* Bile Blast ability
		> Bile Blast能力
		<br/>![l4d_Nauseating_boomer_1](image/l4d_Nauseating_boomer_1.gif)
	* HideHud ability
		> HideHud能力
		<br/>![l4d_Nauseating_boomer_2](image/l4d_Nauseating_boomer_2.gif)
	* Explode FlashBang ability
		> Explode FlashBang能力
		<br/>![l4d_Nauseating_boomer_3](image/l4d_Nauseating_boomer_3.gif)

* Apply to | 適用於
	```
	L4D1
	L4D2
	```

* Translation Support | 支援翻譯
	```
	English
	繁體中文
	简体中文
	Spanish
	Portuguese
	```

* <details><summary>Changelog | 版本日誌</summary>

	```php
	//Mortiegama @ 2014-2017
	//Marttt @ 2019
	//HarryPotter @ 2022-2023
	```
	* v1.1h (2023-2-14)
		* Rename some cvars
		* Correct melee damage when enable Bile Belly ability

	* v1.0h (2023-2-2)
		* Request by Shadow
		* Remake code, convert code to latest syntax
		* Fix warnings when compiling on SourceMod 1.11.
		* Optimize code and improve performance
		* Delete ability "Bile Feet", "Bile Pimple", "Bile Throw", "Explosive Diarrhea".
		* Add two abilitites
			* Vomit Recovery: Recovery Boomer vomit cd when get shoved or get hurt by survivor
			* Explode FlashBang: Flashbang effect when the boomer explodes.
		* Translation Support
		* Replace Gamedata with left4dhooks

	* v1.2a
		* [Marttt's fork](https://forums.alliedmods.net/showpost.php?p=2645757&postcount=51)

	* v1.2
		* [Original Plugin by Mortiegama](https://forums.alliedmods.net/showthread.php?t=234267)
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)

* Related Plugin | 相關插件
	1. [Vomit Screen Fade by Marttt](https://forums.alliedmods.net/showthread.php?t=334143): Adds a blind fade effect while on vomit
		> 被膽汁噴到有致盲效果
	2. [l4d2_biletheworld](https://github.com/fbef0102/L4D2-Plugins/tree/master/l4d2_biletheworld3): Vomit Jars hit Survivors, Boomer Explosions slime Infected.
		> 膽汁瓶會噴到倖存者身上，Boomer爆炸的膽汁噴到特感、Tank、Witch、普通感染者

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_Nauseating_boomer.cfg
		```php
		// If 1, Enables Bile Belly ability: It is hard to cause direct damage to the Boomer.
		l4d_Nauseating_boomer_bilebelly_enable "1"

		// Percent of damage the Boomer avoids thanks to it's belly.
		l4d_Nauseating_boomer_bilebelly_amount "0.8"

		// If 1, Enables Bile Blast ability: When the Boomer dies, the pressure releases causing a shockwave to damage and send Survivors flying.
		l4d_Nauseating_boomer_bileblast_enable "1"

		// If 1, Bile Blast power ignores wall.
		l4d_Nauseating_boomer_bileblast_ignore_wall "0"

		// (L4D2) Slay power vertical multiplier
		l4d_Nauseating_boomer_bileblast_power_vertical_multiplier "1.5"

		// Amount of damage caused in the inner range of Bile Blast.
		l4d_Nauseating_boomer_bileblast_inner_damage "15.0"

		// Power behind the inner range of Bile Blast.
		l4d_Nauseating_boomer_bileblast_inner_power "200.0"

		// Range the inner blast radius will extend from Bile Blast.)
		l4d_Nauseating_boomer_bileblast_inner_range "200.0"

		// Amount of damage caused in the outer range of Bile Blast.
		l4d_Nauseating_boomer_bileblast_outer_damage "5.0"

		// Power behind the outer range of Bile Blast.
		l4d_Nauseating_boomer_bileblast_outer_power "100.0"

		// Range the outer blast radius will extend from Bile Blast.
		l4d_Nauseating_boomer_bileblast_outer_range "300.0"

		// If 1, Enables Bile Shower ability: When the Boomer vomits on survivor, it will summon a large mob of common infected.
		l4d_Nauseating_boomer_bileshower_enable "1"

		// Number of mobs to summon.
		l4d_Nauseating_boomer_bileshower_mob "1"

		// Time in seconds to summon extra mobs.
		l4d_Nauseating_boomer_bileshower_time "5"

		// Chance that the Boomer's claws will cause a burning bile wound. (100 = 100%)
		l4d_Nauseating_boomer_bileswipe_chance "100"

		// How much damage is inflicted by Bile Swipe each second.
		l4d_Nauseating_boomer_bileswipe_damage "1"

		// For how many seconds does the Bile Swipe last.
		l4d_Nauseating_boomer_bileswipe_duration "4"

		// If 1, Enables Bile Swipe ability: The Boomer has a chance of inflicting burning bile wounds to survivors.
		l4d_Nauseating_boomer_bileswipe_enable "1"

		// Boomer flashbang screen color, three values between 0-255 separated by spaces. RGB Color255 - Red Green Blue.
		l4d_Nauseating_boomer_flashbang_color "127 235 212"

		// If 1, Enables Explode FlashBang ability: Flashbang effect when the boomer explodes.
		l4d_Nauseating_boomer_flashbang_enable "1"

		// If 1, Enables Flatulence ability: The Boomer will on occasion expel a bile gas that causes damage to anyone standing inside the cloud.
		l4d_Nauseating_boomer_flatulence_enable "1"

		// Chance that survivors affected by the Flatulence cloud will be biled. (20 = 20%)
		l4d_Nauseating_boomer_flatulence_chance "10"

		// Amount of damage caused to Survivors standing in a Flatulence cloud.
		l4d_Nauseating_boomer_flatulence_damage "4"

		// Period of time the Flatulence cloud persists.
		l4d_Nauseating_boomer_flatulence_life "13.0"

		// Frequency that survivors standing in the Flatulence cloud will cause damage.
		l4d_Nauseating_boomer_flatulence_period "2.0"

		// If 1, Enable the Flatulence cloud Shake 
		l4d_Nauseating_boomer_flatulence_shake "1"

		// Area size of the Flatulence cloud.
		l4d_Nauseating_boomer_flatulence_size "100.0"

		// Time interval the Boomer expel a bile gas again.
		l4d_Nauseating_boomer_flatulence_time "25.0"

		// How long is the HUD hidden for after vomit
		l4d_Nauseating_boomer_hidehud_duration "15.0"

		// If 1, Enables HideHud ability: When covered in bile, the Survivors entire view (HUD) is completely covered.
		l4d_Nauseating_boomer_hidehud_enable "1"

		// HUD hidden flag. (1=weapon selection, 2=flashlight, 4=all, 8=health, 16=player dead, 32=needssuit, 64=misc, 128=chat, 256=crosshair, 512=vehicle crosshair, 1024=in vehicle, add numbers together)
		l4d_Nauseating_boomer_hidehud_flag "64"

		// If 1, Recovery Boomer vomit cd when get hurt by survivor
		l4d_Nauseating_boomer_recovery_hurt_enable "0"

		// If 1, Recovery Boomer vomit cd when get shoved by survivor
		l4d_Nauseating_boomer_recovery_shoved_enable "1"
		```
</details>

* <details><summary>Command | 命令</summary>

	None
</details>

* Details
	* <b>Bile Belly ability</b> - It is hard to cause direct damage to the Boomer.
	* <b>Bile Blast ability</b> - When the Boomer dies, the pressure releases causing a shockwave to damage and send Survivors flying.
	* <b>HideHud ability</b> - When covered in bile, the Survivors entire view (HUD) is completely covered.
	* <b>Bile Shower ability</b> - When the Boomer vomits on survivor, it will summon a large mob of common infected.
	* <b>Explode FlashBang ability</b> - Flashbang effect when the boomer explodes.
	* <b>Bile Swipe ability</b> - The Boomer has a chance of inflicting burning bile wounds to survivors.
	* <b>Recovery CD ability</b> - Recovery Boomer vomit cd when get shoved or get hurt by survivor
	* <b>Flatulence ability</b> - The Boomer will on occasion expel a bile gas that causes damage to anyone standing inside the cloud.

* <details><summary>Related Official ConVar</summary>

	* write down the following cvars in cfg/server.cfg
		```php
		// Boomer Movement Speed (default: 175, maximum: 450)
		sm_cvar z_exploding_speed "175"

		// Boomer ability Movement (default: 3000)
		// set 0 to move while vomit (Only apply to player)
		sm_cvar z_vomit_fatigue "0"
		```
</details>

- - - -
# 中文說明
增強Boomer，賦予多種超能力成為超級肥宅

* 原理
	* 能力1: <b>Bile Belly</b> - 降低受到的傷害
	* 能力2: <b>Bile Blast</b> - 爆炸時造成衝擊波
	* 能力3: <b>HideHud</b> - 被膽汁噴到，玩家螢幕上的介面會被隱藏
	* 能力4: <b>Bile Shower</b> - 倖存者被膽汁噴到後，召喚比平常多的感染者大軍
	* 能力5: <b>Explode FlashBang</b> - 爆炸時附帶閃光彈的效果
	* 能力6: <b>Bile Swipe</b> - 用手抓人產生的傷害會持續一段時間
	* 能力7: <b>Recovery CD</b> - 受到倖存者的傷害或者被推時，可以再吐一次
	* 能力8: <b>Flatulence</b> - 每隔一段時間產生煙霧，玩家走進去煙霧裡會受到傷害

* 功能
	* 可設定各能力的開關
	* 可設定Bile Belly的傷害減少比
	* 可設定Bile Blast的範圍、威力與傷害值
	* 可設定HideHud要隱藏的介面選項
	* 可設定Bile Shower的感染者屍潮額外數量
	* 可設定Explode FlashBang的閃光顏色
	* 可設定Bile Swipe的傷害值與機率
	* 可設定Flatulence的煙霧產生間隔、煙霧傷害、煙霧時間


* <details><summary>相關的官方指令中文介紹 (點我展開)</summary>

	* 以下指令寫入文件 cfg/server.cfg，可自行調整
		```php
		// Boomer 移動速度 (預設: 175, 最大: 450)
		sm_cvar z_exploding_speed "175"

		// Boomer可以一邊嘔吐一邊移動 (預設: 3000)
		// 設置0可以滿速移動 (AI不適用)
		sm_cvar z_vomit_fatigue "0"
		```
</details>