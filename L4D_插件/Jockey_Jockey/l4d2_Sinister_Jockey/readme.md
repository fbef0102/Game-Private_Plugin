# Description | 內容
Allows for unique Jockey abilities to empower the small tyrant.

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/2lkefzNmEsk)

* Image | 圖示
	<br/>![l4d2_Sinister_Jockey_1](image/l4d2_Sinister_Jockey_1.jpg)
	<br/>![l4d2_Sinister_Jockey_2](image/l4d2_Sinister_Jockey_2.gif)
	<br/>![l4d2_Sinister_Jockey_3](image/l4d2_Sinister_Jockey_3.gif)
	<br/>![l4d2_Sinister_Jockey_4](image/l4d2_Sinister_Jockey_4.gif)

* <details><summary>Details</summary>

	* <b>Ghost Stalker ability</b> - Allowing the Jockey to become nearly invisible.
	* <b>Gravity Pounce ability</b> - The Jockey can inflict damage based on how far he drops on a Survivor.
	* <b>Human Shield ability</b> - The Jockey can use the Survivor as a human shield while riding.
	* <b>Brutal Leap ability</b> - The Jockey can leap higher and farther
	* <b>Meteor Strike ability</b> - the high pounces by jockeys create meteor strike, inflict extra damage and send nearby survivors flying.
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	2. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d2_Sinister_Jockey.cfg
		```php
		// If 1, Enables the Ghost Stalker ability, allowing the Jockey to become nearly invisible.
		l4d2_Sinister_Jockey_ghoststalker_enable "1"

		// (Ghost Stalker) Modifies the opacity of the Jockey to become closer to invisible (0-255)
		l4d2_Sinister_Jockey_ghoststalker_visibility "100"

		// If 1, Enables the Gravity Pounce ability, the Jockey can inflict damage based on how far he drops on a Survivor.
		l4d2_Sinister_Jockey_gravitypounce_enable "1"

		// (Gravity Pounce) Maximum amount of damage the Jockey can inflict while dropping.
		l4d2_Sinister_Jockey_gravitypounce_cap "100"

		// (Gravity Pounce) Amount to multiply the damage dealt by the Jockey when dropping.
		l4d2_Sinister_Jockey_gravitypounce_multiplier "1.0"
		
		// If 1, Enables the Human Shield ability, the Jockey can use the Survivor as a human shield while riding.
		l4d2_Sinister_Jockey_humanshield_enable "1"

		// (Human Shield) Percent of damage the Jockey avoids using a Survivor as a shield.
		l4d2_Sinister_Jockey_humanshield_percent "0.7"

		// (Human Shield) Damage that inflicted to the Survivor while Human Shield ability enabled.
		// Damge = the damage jockey received / this cvar valve (0=No damage)
		l4d2_Sinister_Jockey_humanshield_divisor "30.0"

		// If 1, Enables Brutal Leap ability, the Jockey can leap higher and farther.
		l4d2_Sinister_Jockey_brutal_leap_enable "1"

		// (Brutal Leap) If 1, also apply to bots.
		l4d2_Sinister_Jockey_brutal_leap_bot "0"

		// (Brutal Leap) Jockey Leap velocity force multiply
		l4d2_Sinister_Jockey_brutal_force_multi "2.0"

		// (Brutal Leap) Jockey Leap vertical force multiply
		l4d2_Sinister_Jockey_brutal_vertical_mult "1.8"

		// If 1, Enables Meteor Strike ability, the high pounces by jockeys create meteor strike, inflict extra damage and send nearby survivors flying.
		l4d2_Sinister_Jockey_meteor_enable "1"

		// (Meteor Strike) Distance needed to trigger meteor strike.
		l4d2_Sinister_Jockey_meteor_distance "1000.0"

		// (Meteor Strike) Range.
		l4d2_Sinister_Jockey_meteor_range "200.0"

		// (Meteor Strike) Damage caused.
		l4d2_Sinister_Jockey_meteor_damage "8.0"

		// (Meteor Strike) How much force is applied to the survivor.
		l4d2_Sinister_Jockey_meteor_power "300.0"

		// (Meteor Strike) Vertical force multiplier.
		l4d2_Sinister_Jockey_meteor_vertical_mult "1.5"
		```
</details>

* <details><summary>Command | 命令</summary>

	None
</details>

* <details><summary>Human Shield Calculation Formula</summary>
	
	> Example: Jockey gets AWP shot while riding a survivor<br/>
	AWP 1 shot damage = 90<br/>
	Jockey receive damage = 90 * 0.7 = 63<br/>
	Survivor receive damage = 63 / 30.0 = 2.1<br/>
	```php
	l4d2_Sinister_Jockey_humanshield_divisor "30.0"
	l4d2_Sinister_Jockey_humanshield_enable "1"
	l4d2_Sinister_Jockey_humanshield_percent "0.7"
	```
</details>

* <details><summary>Related Official ConVar</summary>

	* Write down the following cvars in cfg/server.cfg
		```php
		// Jockey Movement Speed (default: 250, maximum: 450)
		sm_cvar z_jockey_speed 		"250"

		// Jockey Riding Speed, speed = survivor speed * 0.8
		// default: 0.8, maximum: 1.0
		sm_cvar z_jockey_control_max "0.8"
		sm_cvar z_jockey_control_min "0.8"

		// Survivor can resist the ridding speed (0=Survivor can't control ridding speed)
		// default: 0.7, maximum: 1.0
		sm_cvar z_jockey_control_variance"0.7"
		```
</details>

* Apply to | 適用於
	```
	L4D2
	```

* <details><summary>Related Plugin | 相關插件</summary>

	1. [Jockey jump by DieTeetasse](https://forums.alliedmods.net/showthread.php?t=122213): Adding the ability that the jockey can jump with a survivor
		> Jockey 真人玩家騎人的時候，可以按空白鍵跳高
	2. [Jockey Ride Screen Fade by Marttt](https://forums.alliedmods.net/showthread.php?t=334143): Adds a blind fade effect while on Jockey ride
		> 被Jockey騎的時候致盲
	3. [l4d2_jockey_continue_incap_ride](/L4D_插件/Jockey_Jockey/l4d2_jockey_continue_incap_ride): Allows jockeys to continue riding survivors after they would be incapacitated
		> Jockey可以繼續騎即將要倒地的倖存者
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.2h (2024-12-3)
		* Add two ability: "Brutal Leap" + "Meteor Strike"
		* Update cvars

	* v1.1h (2023-2-14)
		* Rename all cvars
		* Remake Human Shield ability and make new damage calculation formula

	* v1.0h (2023-1-31)
		* Remake code, convert code to latest syntax
		* Fix warnings when compiling on SourceMod 1.11.
		* Optimize code and improve performance
		* Delete "Bacterial Feet ability", "Marionette ability", "Rodeo Jump ability", they cause too many bugs.
		* Replace Gamedata with left4dhooks

	* v1.3
		* [Original Plugin by Mortiegama](https://forums.alliedmods.net/showthread.php?t=234267)
</details>

- - - -
# 中文說明
增強Jockey，賦予多種超能力成為小小的暴君

* 原理
	* 能力1: <b>Ghost Stalker</b> - 身體接近透明
	* 能力2: <b>Gravity Pounce</b> - 跟Hunter一樣有高撲傷害
	* 能力3: <b>Human Shield</b> - 抓住倖存者的時候使用倖存者的身體當盾牌，轉移自己受到的傷害
	* 能力4: <b>Brutal Leap</b> - Jockey 可以跳得更遠更高
	* 能力5: <b>Meteor Strike</b> - Jockey 騎到人時，如果高撲距離足夠會造成核彈衝擊波，震飛周圍玩家

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d2_Sinister_Jockey.cfg
		```php
		// 為1時, 啟用能力: Ghost Stalker - 身體接近透明
		l4d2_Sinister_Jockey_ghoststalker_enable "1"

		// (Ghost Stalker) 透明度 (0-255)
		l4d2_Sinister_Jockey_ghoststalker_visibility "100"

		// 為1時, 啟用能力: Gravity Pounce - 跟Hunter一樣有高撲傷害
		l4d2_Sinister_Jockey_gravitypounce_enable "1"

		// (Gravity Pounce) 最大高撲傷害
		l4d2_Sinister_Jockey_gravitypounce_cap "100"

		// (Gravity Pounce) 高撲傷害倍率.
		l4d2_Sinister_Jockey_gravitypounce_multiplier "1.0"
		
		// 為1時, 啟用能力: Human Shield - 抓住倖存者的時候使用倖存者的身體當盾牌，轉移自己受到的傷害
		l4d2_Sinister_Jockey_humanshield_enable "1"

		// (Human Shield) Jockey 受到的傷害 = 傷害 x 此數值 (0=無傷)
		l4d2_Sinister_Jockey_humanshield_percent "0.7"

		// (Human Shield) 倖存者受到的傷害 = Jockey 受到的傷害 / 此數值 (0=倖存者不受傷)
		l4d2_Sinister_Jockey_humanshield_divisor "30.0"

		// 為1時, 啟用能力: Brutal Leap - Jockey 可以跳得更遠更高
		l4d2_Sinister_Jockey_brutal_leap_enable "1"

		// (Brutal Leap) 為1時, AI Jockey 也可以跳得更遠更高
		l4d2_Sinister_Jockey_brutal_leap_bot "0"

		// (Brutal Leap) Jockey 跳躍的力道，數值越高，可以跳得更遠
		l4d2_Sinister_Jockey_brutal_force_multi "2.0"

		// (Brutal Leap) Jockey 跳躍的向上力道，數值越高，可以跳得更高
		l4d2_Sinister_Jockey_brutal_vertical_mult "1.8"

		// 為1時, 啟用能力: Meteor Strike - Jockey 騎到人時，如果高撲距離足夠會造成核彈衝擊波，震飛周圍玩家
		l4d2_Sinister_Jockey_meteor_enable "1"

		// (Meteor Strike) 高撲距離到此門檻才會觸發
		l4d2_Sinister_Jockey_meteor_distance "1000.0"

		// (Meteor Strike) 核彈衝擊波範圍.
		l4d2_Sinister_Jockey_meteor_range "200.0"

		// (Meteor Strike) 核彈衝擊波的傷害.
		l4d2_Sinister_Jockey_meteor_damage "8.0"

		// (Meteor Strike) 震飛周圍玩家的力道
		l4d2_Sinister_Jockey_meteor_power "300.0"

		// (Meteor Strike) 震飛周圍玩家的力道向上倍率
		l4d2_Sinister_Jockey_meteor_vertical_mult "1.5"
		```
</details>

* <details><summary>Human Shield的傷害計算 (點我展開)</summary>
	
	> 舉例: Jockey 騎倖存者的時被AWP射中一槍<br/>
	AWP 一槍傷害 = 90<br/>
	Jockey 受到的傷害 = 90 * 0.7 = 63<br/>
	倖存者 受到的傷害 = 63 / 30.0 = 2.1<br/>
	```php
	l4d2_Sinister_Jockey_humanshield_divisor "30.0"
	l4d2_Sinister_Jockey_humanshield_percent "0.7"
	```
</details>

* <details><summary>相關的官方指令中文介紹 (點我展開)</summary>

	* 以下指令寫入文件 cfg/server.cfg，可自行調整
		```php
		// Jockey 移動速度 (預設: 250, 最大: 450)
		sm_cvar z_jockey_speed "250"

		// Jockey 騎人的速度調整, 速度為人類速度210 * 0.8, 因此數值1.0的時候, 騎人速度等同於人類速度210 
		// 預設: 0.8, 最大: 1.0
		sm_cvar z_jockey_control_max "0.8"
		sm_cvar z_jockey_control_min "0.8"

		// 人類可以抵抗Jockey騎走的速度調整 (0=無法使用上下左右抵抗騎走速度)
		// 預設: 0.7, 最大: 1.0
		sm_cvar z_jockey_control_variance"0.7"
		```
</details>