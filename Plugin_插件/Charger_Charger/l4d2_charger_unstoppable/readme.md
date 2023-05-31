# Description | 內容
Adds a lot of abilities and powers to the Charger to become unstoppable titan.

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/DZEpU7tS19M)

* Image | 圖示
	* The Infected of Thunder
		> 雷神Charger
		<br/>![l4d2_charger_unstoppable_1](image/l4d2_charger_unstoppable_1.gif)
	* Inertia Vault ability
		> Inertia Vault能力
		<br/>![l4d2_charger_unstoppable_2](image/l4d2_charger_unstoppable_2.gif)
	* Electric field ability
		> Electric field能力
		<br/>![l4d2_charger_unstoppable_3](image/l4d2_charger_unstoppable_3.gif)
	* Tesla Fist ability
		> Tesla Fist能力
		<br/>![l4d2_charger_unstoppable_4](image/l4d2_charger_unstoppable_4.gif)
	* Void Chamber ability
		> Void Chamber能力
		<br/>![l4d2_charger_unstoppable_5](image/l4d2_charger_unstoppable_5.gif)

* Apply to | 適用於
	```
	L4D2
	```

* <details><summary>Changelog | 版本日誌</summary>

	```php
	//Mortiegama @ 2014-2017
	//HarryPotter @ 2023
	```
	* v1.2h (2023-5-27)
		* Add a conver. When charger spawns, create thunder particle on the right hand.

	* v1.1h (2023-5-2)
		* Attach Tesla Particle to charger when charger spawns.

	* v1.0h (2023-4-26)
		* Remake code, convert code to latest syntax
		* Fix warnings when compiling on SourceMod 1.11.
		* Optimize code and improve performance
		* Replace Gamedata with left4dhooks
		* Delete "Locomotive ability", "Meteor Fist ability"
		* Add "Tesla Fists ability", "Electric field ability"

	* v1.3
		* [Original Plugin by Mortiegama](https://forums.alliedmods.net/showthread.php?t=234314)
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)

* Related Plugin | 相關插件
	1. [l4d2_charger_grab](/Plugin_插件/Charger_Charger/l4d2_charger_grab): The Charger can grab survivor and drop
		> Charger可以徒手抓住人類趴趴走 (Bot 也適用)
	2. [l4d2_charger_pickup_incap](/Plugin_插件/Charger_Charger/l4d2_charger_pickup_incap): The charger is able to carry any incapacitated player and fling any incapacitated player
		> Charger可以衝撞帶走倒地的倖存者並撞倒他們 (Bot 也適用)
	3. [Charger power by Silvers](https://forums.alliedmods.net/showpost.php?p=2720242&postcount=76): allows charger to move objects (containers, cars, truck) by hitting them when using own ability.
		> Charger 衝刺可以撞飛車子 (Bot 也適用)
	4. [Charger Steering by Silvers](https://forums.alliedmods.net/showthread.php?p=1656847): Allows chargers to turn while charging.
		> Chargers 衝刺時會自己轉彎 (Bot 也適用)
	5. [Charger Shoved Fix by Silvers](https://forums.alliedmods.net/showthread.php?p=2681185): Prevents the Charger from slowing down when shoved while charging.
		> 修復Chargers 衝刺被倖存者推時會變慢 (這是一個官方的Bug)
	6. [Charging Charger Stagger by Marttt](https://forums.alliedmods.net/showthread.php?t=335142): Stagger clients around the charger while on charging mode
		> 衝刺期間持續震開周圍的玩家 (Bot 也適用)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d2_charger_unstoppable.cfg
		```php
		// Chance that Electric field is produced. (100 = 100%)
		l4d2_charger_unstoppable_anomaly_chance "100.0"

		// The amount of damage to deal to Survivors when being struck.
		l4d2_charger_unstoppable_anomaly_damage "5.0"

		// If 1, Enables Electric field ability: When charger dead, spawns an anomaly on charger's body that electrocutes people.
		l4d2_charger_unstoppable_anomaly_enable "1"

		// How often to damage survivors within range.
		l4d2_charger_unstoppable_anomaly_interval "1.5"

		// How close entities must be to the anomaly before being struck.
		l4d2_charger_unstoppable_anomaly_range "200.0"

		// How long can Electric field exist ?
		l4d2_charger_unstoppable_anomaly_time "10.0"

		// Chance that after a pummel ends the Survivor takes damage over time. (100 = 100%)
		l4d2_charger_unstoppable_brokenribs_chance "100"

		// How much damage is inflicted by Broken Ribs each second.
		l4d2_charger_unstoppable_brokenribs_damage "2"

		// For how many seconds should the Broken Ribs cause damage.
		l4d2_charger_unstoppable_brokenribs_duration "5"

		// If 1, Enables Broken Ribs ability: After a pummel ends, the survivor takes damage over time.
		l4d2_charger_unstoppable_brokenribs_enable "1"

		// If 1, Enables Extinguish Wind ability: The force of wind the Charger creates while charging is capable of extinguishing flames on his body.
		l4d2_charger_unstoppable_extinguishingwind_enable "1"

		// If 1, Enables God of the Thunder ability: When charger spawns, create thunder particle on the right hand.
		l4d2_charger_unstoppable_god_of_the_thunder_enable "1"

		// If 1, Enables Inertia Vault ability: While charging the Charger has the ability to leap into the air. (Human player only)
		l4d2_charger_unstoppable_inertiavault_enable "1"

		// Power behind the Charger's jump. (set at least 300 to be able to jump)
		l4d2_charger_unstoppable_inertiavault_power "300.0"

		// Maximum run speed for survivors who actives adrenaline eat while Snapped Leg
		l4d2_charger_unstoppable_snappedleg_adrenaline_speed "220"

		// Chance that after a charger collision movement speed is reduced. (100 = 100%)
		l4d2_charger_unstoppable_snappedleg_chance "100"

		// Maximum survivor Crouch speed caused by Snapped Leg
		l4d2_charger_unstoppable_snappedleg_crouch_speed "60"

		// For how many seconds will the Snapped Leg reduce movement speed.
		l4d2_charger_unstoppable_snappedleg_duration "6.0"

		// If 1, Enables Snapped Leg ability: When the Charger collides with a Survivor, it snaps their leg causing them to move slower.
		l4d2_charger_unstoppable_snappedleg_enable "1"

		// Maximum survivor Run speed caused by Snapped Leg
		l4d2_charger_unstoppable_snappedleg_run_speed "150"

		// Maximum survivor Walk speed caused by Snapped Leg
		l4d2_charger_unstoppable_snappedleg_walk_speed "75"

		// How much damage is inflicted by Stowaway for each 0.5 second carried.
		l4d2_charger_unstoppable_stowaway_damage "2.0"

		// If 1, Enables Stowaway ability: The longer the Charger carries a survivor, the more damage caused by the Charger until the charge comes to an end.
		l4d2_charger_unstoppable_stowaway_enable "1"

		// How much damage is inflicted to the Survivor being used as an Aegis.
		// Damge = the damage charger received / this cvar valve (0=No damage)
		l4d2_charger_unstoppable_survivoraegis_divisor "30.0"

		// If 1, Enables Survivor Aegis ability: While charging, the Charger will use the Survivor as an Aegis to absorb damage it would receive.
		l4d2_charger_unstoppable_survivoraegis_enable "1"

		// Percent of damage the Charger avoids using a Survivor as an Aegis.
		l4d2_charger_unstoppable_survivoraegis_percent "0.8"

		// Amount of time between Tesla Fists.
		l4d2_charger_unstoppable_tesla_cooldown "8.0"

		// If 1, Enables Tesla Fist ability: When the Charger strikes a Survivor with his fist, they are sent flying.
		l4d2_charger_unstoppable_tesla_enable "1"

		// Power behind the Charger's Tesla Fist.
		l4d2_charger_unstoppable_tesla_power "200.0"

		// Damage the force of the roar causes to nearby survivors.
		l4d2_charger_unstoppable_voidchamber_damage "10.0"

		// If 1, Enables Void Chamber ability: When starting a charge, the force is so powerful that it sucks nearby Survivors.
		l4d2_charger_unstoppable_voidchamber_enable "1"

		// Power behind the inner range of Methane Blast.
		l4d2_charger_unstoppable_voidchamber_power "150.0"

		// Area around the Tank the bellow will reach.
		l4d2_charger_unstoppable_voidchamber_range "200.0"
		```
</details>

* <details><summary>Command | 命令</summary>

	None
</details>

* Details
	* <b>Broken Ribs ability</b> - After a pummel ends, the survivor takes damage over time.
	* <b>Extinguish Wind ability</b> - The force of wind the Charger creates while charging is capable of extinguishing flames on his body.
	* <b>Inertia Vault ability</b> - While charging the Charger has the ability to leap into the air. (Human player only)
	* <b>Tesla Fist ability</b> - When the Charger strikes a Survivor with his fist, they are sent flying.
	* <b>Snapped Leg ability</b> - When the Charger collides with a Survivor, it snaps their leg causing them to move slower.
	* <b>Stowaway ability</b> - The longer the Charger carries a survivor, the more damage caused by the Charger until the charge comes to an end.
	* <b>Survivor Aegis ability</b> - While charging, the Charger will use the Survivor as an Aegis to absorb damage it would receive.
	* <b>Void Chamber</b> - When starting a charge, the force is so powerful that it sucks nearby Survivors.
	* <b>Electric field</b> - When charger dead, spawns an anomaly on charger's body that electrocutes people.
	* <b>The God of Thunder</b> - When charger spawns, create thunder particle on the right hand.

* <details><summary>Survivor Aegis Calculation Formula</summary>
	
	> Example: Charger gets AWP shot while carrying a survivor<br/>
	AWP 1 shot damage = 90<br/>
	Charger receive damage = 90 * 0.7 = 63<br/>
	Survivor receive damage = 63 / 30.0 = 2.1<br/>
	```php
	l4d2_charger_unstoppable_survivoraegis_divisor "30.0"
	l4d2_charger_unstoppable_survivoraegis_enable "1"
	l4d2_charger_unstoppable_survivoraegis_percent "0.7"
	```
</details>

* <details><summary>Related Official ConVar</summary>

	* write down the following cvars in cfg/server.cfg
		```php
		// Charger charging duration (default: 2.5)
		sm_cvar z_charge_duration   	"2.5"

		// Charger charging Speed (default: 500)
		sm_cvar z_charge_max_speed  	"500"

		// Charger Re-charge CD (default: 12)
		sm_cvar z_charge_interval  		"12"
		```
</details>

- - - -
# 中文說明
增強Charger，賦予多種超能力成為無人能檔的雷神

* 原理
	* 能力1: <b>Broken Ribs</b> - 倖存者被Charger撞完之後爬起身，會受到持續性傷害。
	* 能力2: <b>Extinguish Wind</b> - Charger 衝刺時，如果身上有著火，火焰回熄滅。
	* 能力3: <b>Inertia Vault</b> - Charger 衝刺時，可以使用空白鍵跳起來 (只限真人玩家)。
	* 能力4: <b>Snapped Leg</b> - 倖存者被Charger衝刺撞到，行走速度會變慢一段時間。
	* 能力5: <b>Stowaway</b> - 倖存者被Charger衝刺抓到帶著走時，每0.5秒受到傷害直到衝刺完畢。
	* 能力6: <b>Survivor Aegis</b> - 倖存者被Charger衝刺抓到帶著走時，他可以拿倖存者當作盾牌減少傷害，且能轉移傷害給該倖存者。
	* 能力7: <b>Void Chamber</b> - Charger開始衝刺時，產生電擊場把附近的倖存者吸過來，並且造成倖存者受傷。
	* 能力8: <b>Tesla Fist</b> - Charger右鍵抓人時，爪子擊中玩家有電擊效果，擊飛玩家。
	* 能力9: <b>Electric field</b> - 死亡時在屍體處看產生靜電場，當倖存者靠近時會遭到電擊彈飛。
	* 能力10: <b>God of the Thunder</b> - Chager身上有雷電特效

* 功能
	* 可設定各能力的開關
	* 可設定Broken Ribs的機率、傷害持續時間、傷害值
	* 可設定Inertia Vault的跳起來力道
	* 可設定Snapped Leg的機率、移動速度 (跑步、靜走、蹲下、腎上腺素狀態下的移動速度)
	* 可設定Stowaway的傷害值
	* 可設定Survivor Aegis的減傷比
	* 可設定Void Chamber的範圍與傷害值
	* 可設定Tesla Fist的傷害值、彈飛力道
	* 可設定Electric field的機率、傷害值、範圍、雷電間隔、存在時間


* <details><summary>Survivor Aegis的傷害計算 (點我展開)</summary>
	
	> 舉例: Charger 衝刺抓到倖存者並帶著走時被AWP射中一槍<br/>
	AWP 一槍傷害 = 90<br/>
	Charger 受到的傷害 = 90 * 0.7 = 63<br/>
	倖存者 受到的傷害 = 63 / 30.0 = 2.1<br/>
	```php
	l4d2_charger_unstoppable_survivoraegis_divisor "30.0"
	l4d2_charger_unstoppable_survivoraegis_percent "0.7"
	```
</details>

* <details><summary>相關的官方指令中文介紹 (點我展開)</summary>

	* 以下指令寫入文件 cfg/server.cfg，可自行調整
		```php
		// Charger衝撞時間 (預設: 2.5秒)
		sm_cvar z_charge_duration 2.5

		// Charger衝撞速度 (預設: 500)
		sm_cvar z_charge_max_speed 500

		// Charger重新衝撞的CD (預設: 12秒)
		sm_cvar z_charge_interval 12
		```
</details>