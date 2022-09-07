# Description | 內容
L4D2 Human and Zombie Shop by HarryPoter
* (Survivor) Killing zombies and infected to earn credits
* (Infected) Doing Damage to survivors to earn credits

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/OkWg2p4VgBs)

* Image | 圖示
	* survivor shop list
	> 人類商城
	<br/>![L4D2_Buy_Store_1](image/L4D2_Buy_Store_1.jpg)
	* survivor shop list
	> 所有玩家的銀行儲值
	<br/>![L4D2_Buy_Store_2](image/L4D2_Buy_Store_2.jpg)
	* display message
	> 顯示有人購物
	<br/>![L4D2_Buy_Store_3](image/L4D2_Buy_Store_3.jpg)
	* infectec shop list
	> 特感商城
	<br/>![L4D2_Buy_Store_4](image/L4D2_Buy_Store_4.jpg)
	* buy command
	> 使用命令直接購物
	<br/>![L4D2_Buy_Store_5](image/L4D2_Buy_Store_5.jpg)

* Apply to | 適用於
```
L4D2
```

* <details><summary>Changelog | 版本日誌</summary>

	* v4.7
		* Add Survivor/Infected Special items
		* Support Database

	* [4.6](https://github.com/fbef0102/L4D2-Plugins/tree/master/L4D2_Buy_Store)
		* Remke code
		* Translation Support
		* Add The last stand two melee
		* Unlock All weapons including M60, Grenade_Launcher, and CSS weapons
		* Unlock All items including cola, gnome and fireworkcrate
		* Add Infected Shop
		* You can earn credits by doing damage to survivors as an infected.
		* You can earn credits by helping each other as a survivor.
		* Save player's money with Cookies, it means that money can be saved to database across client connections, map changes and even server restarts.
		* Add short buy commands, directly buy item.
		* Repeat purchase item you bought last time.
		* Buy time cooldown, can't buy quickly.
		* No Special Item and database

	* v1.0
		* [Original Post by Explait](https://forums.alliedmods.net/showthread.php?t=322108)
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	2. [[INC] Multi Colors](https://forums.alliedmods.net/showthread.php?t=247770)
	3. To unlock all melee weapons in all campaigns, you MUST use the [Mission and Weapons - Info Editor](https://forums.alliedmods.net/showthread.php?t=310586) plugin which supersedes the extension.

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/L4D2_Buy_Store.cfg
		```php
		// If 1, use CookiesCached to save player money. Otherwise, the moeny will not be saved if player leaves the server.
		sm_shop_CookiesCached_enable "1"

		// Giving money for killing a boomer
		sm_shop_boomkilled "10"

		// Giving money for killing a charger
		sm_shop_chargerkilled "30"

		// Can not buy cola in these maps, separate by commas (no spaces). (0=All maps, Empty = none).
		sm_shop_cola_map_off "c1m2_streets"

		// Database to save money to.
		// empty = don't connect to database
		//  (MySQL & SQLite supported)
		sm_shop_database ""

		// Giving money for saving people with defibrillator
		sm_shop_defi_save "200"

		// Giving money to each alive survivor for mission accomplished award (final).
		sm_shop_final_mission_complete "3000"

		// Giving money to each infected player for wiping out survivors.
		sm_shop_final_mission_lost "300"

		// Can not buy gas can in these maps, separate by commas (no spaces). (0=All maps, Empty = none).
		sm_shop_gascan_map_off "c1m4_atrium,c6m3_port,c14m2_lighthouse"

		// Giving money for healing people with kit
		sm_shop_heal_teammate "100"

		// Giving money for saving incapacitated people. (No Hanging from legde)
		sm_shop_help_teammate_save "30"

		// Giving money for killing a hunter
		sm_shop_hunterkilled "20"

		// Cold Down Time in seconds an infected player can not buy again after player buys item. (0=off).
		sm_shop_infected_cooltime_block "30.0"

		// If 1, Enable shop for infected.
		sm_shop_infected_enable "1"

		// Giving money for incapacitating a survivor. (No Hanging from legde)
		sm_shop_infected_survivor_incap "30"

		// Giving money for killing a survivor.
		sm_shop_infected_survivor_killed "100"

		// Tank limit on the field before infected can buy a tank. (0=Can't buy Tank)
		sm_shop_infected_tank_limit "1"

		// Infected player must wait until survivors have left start safe area for at least X seconds to buy item. (0=Infected Shop available anytime)
		sm_shop_infected_wait_time "10"

		// Amount of seconds before a witch is kicked. (only remove witches bought by player in this plugin)
		sm_shop_infected_witch_lifespan "180"

		// Witch limit on the field before infected can buy a witch. (0=Can't buy Witch)
		sm_shop_infected_witch_limit "4"

		// How far away from survivors an infected can buy and spawn witch.
		sm_shop_infected_witch_spawn_safety_range "1250"

		// Giving money for killing a jockey
		sm_shop_jockeykilled "25"

		// Changes how 'You got credits by killing infected' Message displays. (0: Disable, 1:In chat, 2: In Hint Box, 3: In center text)
		sm_shop_kill_infected_announce_type "1"

		// Maximum money limit. (Money saved when map change/leaving server)
		sm_shop_max_moeny_limit "32000"

		// Numbers of real survivor and infected player require to active this plugin.
		sm_shop_player_require "4"

		// Giving money for killing a smoker
		sm_shop_smokerkilled "20"

		// How long could "Gain Adrenaline Power" state last for survivor special item.
		sm_shop_special_adrenaline_time "20"

		// How long could "Dead-Eyes" state last for survivor special item.
		sm_shop_special_dead_eyes_time "60"

		// How long could "Freeze-Infected" state last for survivor special item.
		sm_shop_special_freeze_time "20"

		// How long could "Immune Everything" last for infected special item.
		sm_shop_special_immune_everything_time "10"

		// How long could "Infinite Ammo" state last for survivor special item.
		sm_shop_special_infinite_ammo_time "20"

		// Max Air Jump Limit for survivor special item.
		sm_shop_special_max_jump_limit "3"

		// Giving money for killing a spitter
		sm_shop_spitterkilled "10"

		// Giving money to each alive survivor for mission accomplished award (non-final).
		sm_shop_stage_complete "400"

		// If 1, decrease money if survivor friendly fire each other. (1 hp = 1 dollar)
		sm_shop_survivor_TK_enable "1"

		// Cold Down Time in seconds a survivor player can not buy again after player buys item. (0=off).
		sm_shop_survivor_cooltime_block "5.0"

		// Giving one dollar money for hurting tank per X hp
		sm_shop_tank_hurt "40"

		// Giving money for killing a witch
		sm_shop_witchkilled "80"

		// Giving money for killing a zombie
		sm_shop_zombiekilled "1"
		```
</details>

* <details><summary>Command | 命令</summary>

	* **shop and buy (Short name available)**
		```php
		say "b [item_name]"
		sm_shop [item_name]
		sm_buy [item_name]
		sm_b [item_name]
		sm_money [item_name]
		sm_purchase [item_name]
		sm_market [item_name]
		sm_item [item_name]
		sm_items [item_name]
		sm_credit [item_name]
		sm_credits [item_name]
		```

		* say "!buy" or "b" to open shop menu
		* say "!buy rifle_ak47" or "b rifle_ak47" to directly buy Ak47 weapon
		* **short command list**
		> I won't add more short commands, don't ask
		```php
		Weapon
		{
			"!buy pistol" 				-> Pistol
			"!buy pistol_magnum"		-> Magnum
			"!buy pumpshotgun"			-> Pumpshotgun
			"!buy shotgun_chrome"		-> Chrome Shotgun
			"!buy smg"					-> Smg
			"!buy smg_silenced"			-> Silenced Smg
			"!buy smg_mp5"				-> MP5
			"!buy rifle"				-> Rifle
			"!buy rifle_ak47"			-> AK47
			"!buy rifle_desert"			-> Desert Rifle
			"!buy rifle_sg552"			-> SG552
			"!buy shotgun_spas"			-> Spas Shotgun
			"!buy autoshotgun"			-> Autoshotgun
			"!buy hunting_rifle"		-> Hunting Rifle
			"!buy sniper_military"		-> Military Sniper
			"!buy sniper_scout"			-> SCOUT
			"!buy sniper_awp"			-> AWP
			"!buy rifle_m60"			-> M60 Machine Gun
			"!buy grenade_launcher"		-> Grenade Launcher
		}

		Melee
		{
			"!buy chainsaw"				-> Chainsaw
			"!buy baseball_bat"			-> Baseball Bat
			"!buy cricket_bat"			-> Cricket Bat
			"!buy crowbar"				-> Crowbar
			"!buy electric_guitar"		-> Electric Guitar
			"!buy fireaxe"				-> Fire Axe
			"!buy frying_pan"			-> Frying Pan
			"!buy katana"				-> Katana
			"!buy machete"				-> Machete
			"!buy tonfa"				-> Tonfa
			"!buy golfclub"				-> Golf Club
			"!buy knife"				-> Knife
			"!buy pitchfork"			-> Pitchfork
			"!buy shovel"				-> Shovel
		}

		Medic and Throwable
		{
			"!buy health_100"			-> Health+100
			"!buy defibrillator"		-> Defibrillator
			"!buy first_aid_kit"		-> First Aid Kit
			"!buy pain_pills"			-> Pain Pill
			"!buy adrenaline"			-> Adrenaline
			"!buy pipe_bomb"			-> Pipe Bomb
			"!buy molotov"				-> Molotov
			"!buy vomitjar"				-> Vomitjar
		}

		Other
		{
			"!buy ammo"								-> Ammo
			"!buy laser_sight"						-> Laser Sight
			"!buy incendiary_ammo"					-> Incendiary Ammo
			"!buy explosive_ammo"					-> Explosive Ammo
			"!buy weapon_upgradepack_incendiary"	-> Incendiary Pack
			"!buy weapon_upgradepack_explosive"		-> Explosive Pack
			"!buy propanetank"						-> Propane Tank
			"!buy oxygentank"						-> Oxygen Tank
			"!buy fireworkcrate"					-> Firework Crate
			"!buy gascan"							-> Gascan
			"!buy cola_bottles"						-> Cola Bottles
			"!buy gnome"							-> Gnome
		}

		Survivor Special
		{
			"!buy Fire"						-> Fire Yourself
			"!buy Adrenaline_Power"			-> Gain Adrenaline Power
			"!buy Fire_Infeceted"			-> All Infected Gets On Fire
			"!buy Teleport"					-> Teleport to teammate
			"!buy Infinite_Ammo"			-> Infinite Ammo
			"!buy Dead_Eyes"				-> Dead-Eyes
			"!buy Kill_Commons"				-> Kill Commons
			"!buy Kill_Witches"				-> Kill Witches
			"!buy Jump+1"					-> Jump+1
			"!buy Heal_Survivors"			-> Heal Survivors
			"!buy No_FF"					-> No Friendly Fire
			"!buy Slay_Infected"			-> Slay Infected Attacker
			"!buy Respawn"					-> Respawn Alive
			"!buy Freeze_Infected"			-> Freeze-Infected
		}

		Infected Spawn
		{
			"!buy Suicide" 	-> Suicide
			"!buy Smoker" 	-> Smoker
			"!buy Boomer" 	-> Boomer
			"!buy Hunter" 	-> Hunter
			"!buy Spitter" 	-> Spitter
			"!buy Jockey" 	-> Jockey
			"!buy Charger" 	-> Charger
			"!buy Tank" 	-> Tank
		}

		Infected Special
		{
			"!buy Health" 	-> Full Health
			"!buy Teleport" -> Teleport to survivor
			"!buy Immune" 	-> Immune Everything
			"!buy Horde" 	-> Zombie Horde
			"!buy Witch" 	-> Witch
		}
		```
	* **repeat purchase item you bought last time**
		```php
		sm_repeatbuy
		sm_lastbuy
		```
	* **donate money to another player (Or use "Credits Transfer" in shop menu)**
		```php
		sm_pay <name> <money>
		sm_donate <name> <money>
		```
	* **See all players' or specific player's deposit**
		```php
		sm_inspectbank [name]
		sm_checkbank [name]
		sm_lookbank [name]
		sm_allbank [name]
		```
	* **Adm gives/reduces money (ADMFLAG_BAN)**
		```php
		sm_givemoney <name> <+-money>
		sm_givecredit <name> <+-money>
		```
	* **Adm removes player's all money (ADMFLAG_BAN)**
		```php
		sm_clearmoney <name>
		sm_deductmoney <name>
		```
</details>

* <details><summary>Specail Item | 特殊商品</summary>

	* **Survivor Shop**
		* Fire
		<br/>Description: Do you feel annoying that you are surrounded by common infecteds?
		No need to throw molotov or use melee, create fire around you!!

		* Fire Infeceted
		<br/>Description: Tank throws a rock on the roof and smoker uses his tongue from nowhere, buy this item to burn them all!!

		* Adrenaline_Power
		<br/>Description: Gain Adrenaline Power RIGHT NOW!! Move Faster and Save Faster

		* Teleport
		<br/>Description: Are you always alone and behind your team? Don't worry, buy this item to teleport back to your team.

		* Infinite Ammo
		<br/>Description: Just shoot the enemy and no need to reload your gun. Enjoy the fun

		* Dead Eyes
		<br/>Description: Special Infecteds always hide and seek, buy this item to see them all!!
		<br/>![Dead_Eyes](image/Dead_Eyes.jpg)
		
		* No Friendly Fire
		<br/>Description: Are you tired of stupid friendly fire ? You are gonna love this item.

		* Kill Commons
		<br/>Description: Hate zombies, hate horde? Kill them all

		* Kill Witches
		<br/>Description: No longer you hear witch crying!

		* Heal Survivors
		<br/>Description: Your teammates are all down, buy this item to bring your team back to fight again.. No Surrender !!!

		* Jump+1
		<br/>Description: Now you are super mario, jump and skip the path quickly.

		* Slay Infected Attacker
		<br/>Description: Smoker drags you, Hunter pounces you, Jockey rides on you, charger charges you, and you can't do anything. Now buy this item to slay the infected and be free again.

		* Respawn Alive
		<br/>Description: Dead person isn't a good survivor, activate spell card: Dead Reborn

		* Ice World
		<br/>Description: Freeze All Infected, they can't move and attack. The most powerful item :D
		<br/>![Ice_World](image/Ice_World.jpg)

	* **Infected Shop**
		* Full Health
		<br/>Description: You can have second chance.

		* Zombie Horde
		<br/>Description: Mob Incoming !!! Keep survivors busy.

		* Spawn Witch
		<br/>Description: Choose your location wisely and spawn a witch, survivors will feel very hard to complete the mission.
		<br/>![Spawn_Witch](image/Spawn_Witch.jpg)

		* Teleport
		<br/>Description: Do you want to attack immediately? Give survivors a surprise !

		* God Mode
		<br/>Description: Being immune every damage from survivors, they can't stumble you, they can't shove you. No one can stop you, You are THE GOD!
		<br/>![God_Mode](image/God_Mode.jpg)
</details>

* How to modify the item price | 如何設定各商品金額
	* L4D2_Buy_Store.sp line 162 ~ 268

* Database | 資料庫
	* sm_shop_CookiesCached_enable "1", this uses CookiesCached to save player money
	* if you want to cross server database, set sm_shop_database "shop" and set *sourcemod\configs\databases.cfg*
	```php
	"shop"
	{
		"driver"			"default"
		"host"				"x.x.x.x"
		"database"			"yourdatabase"
		"user"				"youruser"
		"pass"				"yourpass"
		"port"				"yourport"
	}
	```

- - - -
# 中文說明
人類與特感的購物商城 (附有特殊商品與資料庫)

* 功能
	1. (人類) 殺死特感與小殭屍獲取金額
	2. (特感) 對倖存者造成傷害獲取金額
	3. 有特殊商品
	4. 自定義各項商品的金額
	5. 自定義獲取的金額
	6. 通關與滅團都有獎勵
	7. 可設置購物冷卻時間
	8. 特感玩家能幫自己購買特感復活，亦能購買Tank與Witch

* <details><summary>命令中文介紹 (點我展開)</summary>

	* **購物商城**
		```php
		say "b [item_name]"
		sm_shop [item_name]
		sm_buy [item_name]
		sm_b [item_name]
		sm_money [item_name]
		sm_purchase [item_name]
		sm_market [item_name]
		sm_item [item_name]
		sm_items [item_name]
		sm_credit [item_name]
		sm_credits [item_name]
		```

		* 聊天視窗打 !buy 或 b 開啟商城列表
		* 聊天視窗打 !buy rifle_ak47 或 b rifle_ak47 直接購買AK47槍
		* **購物短名列表**
		> 我不會增加更多短名，不要問
		```php
		Weapon
		{
			"!buy pistol" 				-> Pistol
			"!buy pistol_magnum"		-> Magnum
			"!buy pumpshotgun"			-> Pumpshotgun
			"!buy shotgun_chrome"		-> Chrome Shotgun
			"!buy smg"					-> Smg
			"!buy smg_silenced"			-> Silenced Smg
			"!buy smg_mp5"				-> MP5
			"!buy rifle"				-> Rifle
			"!buy rifle_ak47"			-> AK47
			"!buy rifle_desert"			-> Desert Rifle
			"!buy rifle_sg552"			-> SG552
			"!buy shotgun_spas"			-> Spas Shotgun
			"!buy autoshotgun"			-> Autoshotgun
			"!buy hunting_rifle"		-> Hunting Rifle
			"!buy sniper_military"		-> Military Sniper
			"!buy sniper_scout"			-> SCOUT
			"!buy sniper_awp"			-> AWP
			"!buy rifle_m60"			-> M60 Machine Gun
			"!buy grenade_launcher"		-> Grenade Launcher
		}

		Melee
		{
			"!buy chainsaw"				-> Chainsaw
			"!buy baseball_bat"			-> Baseball Bat
			"!buy cricket_bat"			-> Cricket Bat
			"!buy crowbar"				-> Crowbar
			"!buy electric_guitar"		-> Electric Guitar
			"!buy fireaxe"				-> Fire Axe
			"!buy frying_pan"			-> Frying Pan
			"!buy katana"				-> Katana
			"!buy machete"				-> Machete
			"!buy tonfa"				-> Tonfa
			"!buy golfclub"				-> Golf Club
			"!buy knife"				-> Knife
			"!buy pitchfork"			-> Pitchfork
			"!buy shovel"				-> Shovel
		}

		Medic and Throwable
		{
			"!buy health_100"			-> Health+100
			"!buy defibrillator"		-> Defibrillator
			"!buy first_aid_kit"		-> First Aid Kit
			"!buy pain_pills"			-> Pain Pill
			"!buy adrenaline"			-> Adrenaline
			"!buy pipe_bomb"			-> Pipe Bomb
			"!buy molotov"				-> Molotov
			"!buy vomitjar"				-> Vomitjar
		}

		Other
		{
			"!buy ammo"								-> Ammo
			"!buy laser_sight"						-> Laser Sight
			"!buy incendiary_ammo"					-> Incendiary Ammo
			"!buy explosive_ammo"					-> Explosive Ammo
			"!buy weapon_upgradepack_incendiary"	-> Incendiary Pack
			"!buy weapon_upgradepack_explosive"		-> Explosive Pack
			"!buy propanetank"						-> Propane Tank
			"!buy oxygentank"						-> Oxygen Tank
			"!buy fireworkcrate"					-> Firework Crate
			"!buy gascan"							-> Gascan
			"!buy cola_bottles"						-> Cola Bottles
			"!buy gnome"							-> Gnome
		}

		Survivor Special
		{
			"!buy Fire"						-> Fire Yourself
			"!buy Adrenaline_Power"			-> Gain Adrenaline Power
			"!buy Fire_Infeceted"			-> All Infected Gets On Fire
			"!buy Teleport"					-> Teleport to teammate
			"!buy Infinite_Ammo"			-> Infinite Ammo
			"!buy Dead_Eyes"				-> Dead-Eyes
			"!buy Kill_Commons"				-> Kill Commons
			"!buy Kill_Witches"				-> Kill Witches
			"!buy Jump+1"					-> Jump+1
			"!buy Heal_Survivors"			-> Heal Survivors
			"!buy No_FF"					-> No Friendly Fire
			"!buy Slay_Infected"			-> Slay Infected Attacker
			"!buy Respawn"					-> Respawn Alive
			"!buy Freeze_Infected"			-> Freeze-Infected
		}

		Infected Spawn
		{
			"!buy Suicide" 	-> Suicide
			"!buy Smoker" 	-> Smoker
			"!buy Boomer" 	-> Boomer
			"!buy Hunter" 	-> Hunter
			"!buy Spitter" 	-> Spitter
			"!buy Jockey" 	-> Jockey
			"!buy Charger" 	-> Charger
			"!buy Tank" 	-> Tank
		}

		Infected Special
		{
			"!buy Health" 	-> Full Health
			"!buy Teleport" -> Teleport to survivor
			"!buy Immune" 	-> Immune Everything
			"!buy Horde" 	-> Zombie Horde
			"!buy Witch" 	-> Witch
		}
		```
	* **重複購買上次的商品**
		```php
		sm_repeatbuy
		sm_lastbuy
		```
	* **捐贈金額給其他人 (或在商城列表使用"金錢轉移")**
		```php
		sm_pay <name> <money>
		sm_donate <name> <money>
		```
	* **查看所有玩家的銀行儲值**
		```php
		sm_inspectbank [name]
		sm_checkbank [name]
		sm_lookbank [name]
		sm_allbank [name]
		```
	* **管理員打錢 (權限：ADMFLAG_BAN)**
		```php
		sm_givemoney <name> <+-money>
		sm_givecredit <name> <+-money>
		```
	* **管理員沒收玩家的金錢 (權限：ADMFLAG_BAN)**
		```php
		sm_clearmoney <name>
		sm_deductmoney <name>
		```
</details>

* 如何設定各商品金額
	* 源碼檔案第162到268行

* 資料庫設定
	* 使用指令 sm_shop_CookiesCached_enable "1" 能幫玩家儲值金額到本地伺服器上
	* 如果想要跨伺服器儲值金額，設定 sm_shop_database "shop"，然後設定文件 *sourcemod\configs\databases.cfg*
	```php
	"shop"
	{
		"driver"			"default"
		"host"				"x.x.x.x"
		"database"			"yourdatabase"
		"user"				"youruser"
		"pass"				"yourpass"
		"port"				"yourport"
	}
	```

* <details><summary>特殊商品中文介紹 (點我展開)</summary>

	* **人類商品**
		* 振火神通
		<br/>說明: 原地著火

		* 炎之呼吸
		<br/>說明: 所有特感著火

		* 注射興奮劑 (短暫時間)
		<br/>說明: 直接獲得腎上腺素效果

		* 飛雷神之術
		<br/>說明: 傳送到附近的隊友身上

		* 無限子彈 (短暫時間)

		* 心靈透視
		<br/>說明: 直接看到特感與小殭屍位置
		<br/>![Dead_Eyes](image/Dead_Eyes.jpg)
		
		* 不會造成與受到友傷 (當前回合)

		* 殺死所有普通殭屍

		* 殺死所有Witch

		* 團隊治癒+100

		* 超級瑪利歐 跳躍+1 (當前回合)
		<br/>說明: 空中二段跳

		* 處死攻擊你的特感

		* 魔法卡: 死者甦醒
		<br/>說明: 從死亡狀態直接復活

		* 冰凍世界 (短暫時間)
		<br/>說明: 凍結所有特感，所有特感均不能移動與攻擊
		<br/>![Ice_World](image/Ice_World.jpg)

	* **特感商品**
		* 滿血回復

		* 屍潮降臨

		* 召喚Witch (在你的位置上)
		<br/>![Spawn_Witch](image/Spawn_Witch.jpg)

		* 異時空傳送門
		<br/>說明: 直接傳送到人類身上

		* "God 上帝模式 (短暫時間)
		<br/>說明: 不會被震暈、不會被推開、不會受傷，無人能擋
		<br/>![God_Mode](image/God_Mode.jpg)
</details>




