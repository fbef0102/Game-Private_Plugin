# Description | 內容
Adds a lot of abilities and fear to the witch to become the most dangerous infected.

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/mWu6H4FAPNI)

* Image | 圖示
	<br/>![l4d_witch_psychotic_1](image/l4d_witch_psychotic_1.gif)
	<br/>![l4d_witch_psychotic_2](image/l4d_witch_psychotic_2.gif)
	<br/>![l4d_witch_psychotic_3](image/l4d_witch_psychotic_3.gif)
	<br/>![l4d_witch_psychotic_4](image/l4d_witch_psychotic_4.gif)

* Apply to | 適用於
	```
	L4D2
	```

* <details><summary>Changelog | 版本日誌</summary>

	```php
	//Mortiegama @ 2014-2017
	//HarryPotter @ 2023
	```
	* v1.0h (2023-7-27)
		* Remake code, convert code to latest syntax
		* Fix warnings when compiling on SourceMod 1.11.
		* Optimize code and improve performance
		* Replace Gamedata with left4dhooks
		* Delete "Support Group ability"
		* Add "Fear Move ability", "Mind Control ability"
		* Attach Particle and Glow to witch when witch spawns.

	* v1.3
		* [Original Plugin by Mortiegama](https://forums.alliedmods.net/showthread.php?t=236472)
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)

* <details><summary>Related Plugin | 相關插件</summary>

	1. [l4d_ultra_witch](/Plugin_插件/Witch_女巫/l4d_ultra_witch): The Witch's hit deals a set amount of damage instead of instantly incapping, while also sending the survivor flying.
		> Witch不會一抓倒地，而是擊飛倖存者
	2. [l4d_witch_cry](/Plugin_插件/Witch_女巫/l4d_witch_cry): Call the horde if player woke up or killed the witch
		> 驚嚇或殺死Witch會引發屍潮來臨
	3. [l4d_witch_guard](/Plugin_插件/Witch_女巫/l4d_witch_guard): Witch killer takes the witch on his back and uses it as a guard
		> 殺死Witch之後可以把她背在後面，把Witch放置下來之後她會幫忙打殭屍和特感
	4. [Bomber Witch by Dragokas](https://forums.alliedmods.net/showthread.php?t=339744): Witch equipped both with molotov and pipe bomb
		> Witch 手上拿著土製炸彈與燃燒瓶
</details>

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_witch_psychotic.cfg
		```php
		// If 1, Enable Assimilation Ability: When a Survivor is killed by the Witch, she will create another Witch on dead body.
		l4d_witch_psychotic_assimilation_enable "1"

		// Chance to create the witch on dead body. [1-100]
		l4d_witch_psychotic_assimilation_chance "100"

		// If 1, Enable Death Helmet Ability: Reduce damage to witch's head.
		l4d_witch_psychotic_deathhelmet_enable "1"

		// Percentage that damage to Witch's head is reduced. (0=No Dmg)
		l4d_witch_psychotic_deathhelmet_amount "0.3"

		// If 1, Enable Leeching Claw ability: When the Witch incaps a Survivor, she heals herself with some of their stolen life force.
		l4d_witch_psychotic_leechingclaw_enable "1"

		// Percentage of Max health to restore to the Witch after incaps a Survivor. [1-100]%
		l4d_witch_psychotic_leechingclaw_amount "10"

		// If 1, Enable Mood Swing ability: The Witch has a varied health.
		l4d_witch_psychotic_moodswing_enable "1"

		// Minimum HP for the Witch.
		l4d_witch_psychotic_moodswing_hp_min "1000"

		// Maximum HP for the Witch.
		l4d_witch_psychotic_moodswing_hp_max "1500"

		// If 1, Enable Fear Move ability: Set different Witch Speed each round.
		l4d_witch_psychotic_fearmove_enable "1"

		// Minimum Witch speed adjustment each round.
		l4d_witch_psychotic_fearmove_speed_min "0.8"

		// Maximum Witch speed adjustment each round.
		l4d_witch_psychotic_fearmove_speed_max "1.8"

		// If 1, Enable Nightmare Claw ability: When incapped by the Witch, the Survivor is either set to B&W or killed immediately.
		l4d_witch_psychotic_nightmareclaw_enable "1"

		// Type of Nightmare Claw: 1 = Survivor is set to B&W, 2 = Survivor is killed.
		l4d_witch_psychotic_nightmareclaw_type "1"

		// (L4D2) If 1, Enable Psychotic Charge ability: The Witch will send any Survivors flying in her path while pursuing her victim.
		l4d_witch_psychotic_psychoticcharge_enable "1"

		// (L4D2) Knock back damage the Witch causes to Survivor.
		l4d_witch_psychotic_psychoticcharge_damage "10"

		// (L4D2) Power a Survivor is hit with during Psychotic Charge.
		l4d_witch_psychotic_psychoticcharge_power "300.0"

		// If 1, Enable Shameful Cloak ability: Distraught by what she has become, the Witch will try to hide her form from the world.
		l4d_witch_psychotic_shamefulcloak_enable "1"

		// Chance the Witch will use Shameful Cloak when spawned. [1-100]
		l4d_witch_psychotic_shamefulcloak_chance "25"

		// Modifies the visibility of the Witch while using Shameful Cloak.
		l4d_witch_psychotic_shamefulcloak_visibility "100"

		// If 1, Enable Sorrowful Remorse ability: When a Witch is killed, she leaves behind a Medkit and Defib.
		l4d_witch_psychotic_sorrowfulremorse_enable "1"

		// Chance the Witch drop Medkit and Defib. [1-100]
		l4d_witch_psychotic_sorrowfulremorse_chance "90"

		// Time in seconds to remove Medkit and Defib if no one picks up after drop. (0=Off)
		l4d_witch_psychotic_sorrowfulremorse_time "100"

		// If 1, Enable Unrelenting Spirit ability: Reduce damage to witch's body.
		l4d_witch_psychotic_unrelentingspirit_enable "1"

		// Percent of damage to the Witch reduced by Unrelenting Spirit. (0=No Dmg)
		l4d_witch_psychotic_unrelentingspirit_amount "0.8"

		// If 1, Enable Mind Control ability: Anyone who near to these witches will change the screen color.
		l4d_witch_psychotic_mindcontrol_enable "1"

		// Chance the Witch has Mind Control ability. [1-100]
		l4d_witch_psychotic_mindcontrol_chance "50"

		// How far does the effect range.
		l4d_witch_psychotic_mindcontrol_glow_distance "250"

		// (L4D2) Mind Control Witch Glow Color
		l4d_witch_psychotic_mindcontrol_glow_color "100 50 100"

		// (L4D2) Mind Control Witch Glow Range. (0=Disable Glow)
		l4d_witch_psychotic_mindcontrol_glow_range "300"

		// 1=Ghost, 2=Red, 4=Lightning, 8=Yellow, 16=Infected, 32=Thirdstrike, 64=Blue, 128=Sunrise, 255=All. Effects to randomly select from. Add the numbers together.
		l4d_witch_psychotic_mindcontrol_effect "255"
		```
</details>

* <details><summary>Command | 命令</summary>

	None
</details>

* Details
	* <b>Assimilation ability</b> - When a Survivor is killed by the Witch, she will create another Witch on dead body.
	* <b>Death Helmet Ability</b> - Reduce damage to witch's head.
	* <b>Leeching Claw ability</b> - When the Witch incaps a Survivor, she heals herself with some of their stolen life force.
	* <b>Mood Swing ability</b> - The Witch has a varied health.
	* <b>Fear Move ability</b> - Set different Witch Speed each round.
	* <b>Nightmare Claw ability</b> - When incapped by the Witch, the Survivor is either set to B&W or killed immediately.
	* <b>Psychotic Charge ability</b> - The Witch will send any Survivors flying in her path while pursuing her victim.
	* <b>Shameful Cloak ability</b> - Distraught by what she has become, the Witch will try to hide her form from the world.
	* <b>Sorrowful Remorse ability</b> - When a Witch is killed, she leaves behind a Medkit and Defib.
	* <b>Unrelenting Spirit field ability</b> - Reduce damage to witch's body.
	* <b>Mind Control ability</b> - Anyone who near to these witches will change the screen color.

* <details><summary>Related Official ConVar</summary>

	* write down the following cvars in cfg/server.cfg
		```php
		// Witch chase speed (default: 300)
		sm_cvar z_witch_speed 300

		// witch alarm range (default: 100)
		sm_cvar z_witch_personal_space 400 

		// witch damage every hit on standing survivor (default: 100)
		sm_cvar z_witch_damage 100

		// witch damage every hit on down survivor (default: 30)
		sm_cvar z_witch_damage_per_kill_hit 30
		```
</details>

- - - -
# 中文說明
增強Witch，賦予多種超能力成為史上最危險的特感

* 原理
	* 能力1: <b>Assimilation</b> - Witch殺死人類後，生成另一隻Witch在倖存者屍體上。
	* 能力2: <b>Death Helmet</b> - 減少Witch頭部傷害。
	* 能力3: <b>Leeching Claw</b> - Witch將倖存者擊倒，回復百分比的血量。
	* 能力4: <b>Mood Swing</b> - 每一隻Witch會有隨機的血量。
	* 能力5: <b>Fear Movey</b> - 每回合Witch的速度會有所不同。
	* 能力6: <b>Nightmare Claw</b> - Witch如果將倖存者擊倒(倒地)，倖存者起來會是黑白狀態或者直接被殺死。
	* 能力7: <b>Psychotic Charge</b> - 擋住Witch去路的玩家會被擊飛。
	* 能力8: <b>Shameful Cloak</b> - Witch會隱形。
	* 能力9: <b>Sorrowful Remorse</b> - Witch死亡時，會掉落急救包及電擊器。
	* 能力10: <b>Unrelenting Spirit field</b> - 減少Witch身體傷害。
	* 能力11: <b>Mind Control</b> - Witch身上擁有特效，任何接近Witch的玩家，螢幕顏色會改變。

* 功能
	* 查看下方 "指令中文介紹"

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d_witch_psychotic.cfg
		```php
		// 為1時，開啟 Assimilation 能力: Witch殺死人類後，生成另一隻Witch在倖存者屍體上。
		l4d_witch_psychotic_assimilation_enable "1"

		// 生成另一隻Witch的機率. [1-100]
		l4d_witch_psychotic_assimilation_chance "100"

		// 為1時，開啟 Death Helmet 能力: 減少Witch頭部傷害。
		l4d_witch_psychotic_deathhelmet_enable "1"

		// 減少Witch頭部受到的傷害比. (0=無傷)
		l4d_witch_psychotic_deathhelmet_amount "0.3"

		// 為1時，開啟 Leeching Claw 能力: Witch將倖存者擊倒，回復百分比的血量。
		l4d_witch_psychotic_leechingclaw_enable "1"

		// 血量回復的百分比. [1-100]%
		l4d_witch_psychotic_leechingclaw_amount "10"

		// 為1時，開啟 Mood Swing 能力: 每一隻Witch會有隨機的血量。
		l4d_witch_psychotic_moodswing_enable "1"

		// Witch 隨機血量最少值
		l4d_witch_psychotic_moodswing_hp_min "1000"

		// Witch 隨機血量最大值
		l4d_witch_psychotic_moodswing_hp_max "1500"

		// 為1時，開啟 Fear Move 能力: 每回合Witch的速度會有所不同。
		l4d_witch_psychotic_fearmove_enable "1"

		// Witch 每回合隨機速度最小調整.
		l4d_witch_psychotic_fearmove_speed_min "0.8"

		// Witch 每回合隨機速度最大調整.
		l4d_witch_psychotic_fearmove_speed_max "1.8"

		// 為1時，開啟 Nightmare Claw 能力: Witch如果將倖存者擊倒(倒地)，倖存者起來會是黑白狀態或者直接被殺死。
		l4d_witch_psychotic_nightmareclaw_enable "1"

		// Witch如果將倖存者擊倒，處理方式: 1 = 將倖存者變成黑白狀態, 2 = 倖存者直接被殺死.
		l4d_witch_psychotic_nightmareclaw_type "1"

		// (L4D2) 為1時，開啟 Psychotic Charge 能力: 擋住Witch去路的玩家會被擊飛。
		l4d_witch_psychotic_psychoticcharge_enable "1"

		// (L4D2) 擊飛的傷害值.
		l4d_witch_psychotic_psychoticcharge_damage "10"

		// (L4D2) 擊飛的力道.
		l4d_witch_psychotic_psychoticcharge_power "300.0"

		// 為1時，開啟 Shameful Cloak 能力: Witch會隱形。
		l4d_witch_psychotic_shamefulcloak_enable "1"

		// 每一隻Witch隱形的機率. [1-100]
		l4d_witch_psychotic_shamefulcloak_chance "25"

		// 隱形的透明度 [0-255]
		l4d_witch_psychotic_shamefulcloak_visibility "100"

		// 為1時，開啟 Sorrowful Remorse 能力: Witch死亡時，會掉落急救包及電擊器。
		l4d_witch_psychotic_sorrowfulremorse_enable "1"

		// 掉落急救包及電擊器的機率. [1-100]
		l4d_witch_psychotic_sorrowfulremorse_chance "90"

		// 無人撿起治療包或者電擊器，100秒之後將自動移除. (0=不移除)
		l4d_witch_psychotic_sorrowfulremorse_time "100"

		// 為1時，開啟 Unrelenting Spirit 能力: 減少Witch身體傷害。
		l4d_witch_psychotic_unrelentingspirit_enable "1"

		// 減少Witch身體受到的傷害比. (0=無傷)
		l4d_witch_psychotic_unrelentingspirit_amount "0.8"

		// 為1時，開啟 Mind Control 能力: Witch身上擁有特效，任何接近Witch的玩家，螢幕顏色會改變。
		l4d_witch_psychotic_mindcontrol_enable "1"

		// 每一隻Witch有 Mind Control 能力的機率. [1-100]
		l4d_witch_psychotic_mindcontrol_chance "50"

		// 靠近此範圍內的玩家，螢幕顏色會改變。
		l4d_witch_psychotic_mindcontrol_glow_distance "250"

		// (L4D2) Mind Control Witch 光圈顏色，RGB三色
		l4d_witch_psychotic_mindcontrol_glow_color "100 50 100"

		// (L4D2) Mind Control Witch 光圈發光範圍. (0=沒有光圈)
		l4d_witch_psychotic_mindcontrol_glow_range "300"

		// 1=靈魂特感視野, 2=紅色, 4=閃電, 8=黃色, 16=特感視野, 32=黑白狀態, 64=藍色, 128=太陽, 255=全部. 螢幕顏色改變的種類，從中隨機挑選. 請將數字相加起來.
		l4d_witch_psychotic_mindcontrol_effect "255"
		```
</details>

* <details><summary>相關的官方指令中文介紹 (點我展開)</summary>

	* 以下指令寫入文件 cfg/server.cfg，可自行調整
		```php
		// Witch 追人速度 (預設: 300)
		sm_cvar z_witch_speed 300

		// witch 警戒範圍 (設置越大，越容易被驚嚇) (預設: 100)
		sm_cvar z_witch_personal_space 400 

		// witch 對站立的倖存者傷害 (預設: 100)
		sm_cvar z_witch_damage 100

		// witch 對倒地的倖存者傷害 (預設: 30)
		sm_cvar z_witch_damage_per_kill_hit 30
		```
</details>