# Description | 內容
Adds a lot of abilities and powers to the smoker in order to spread its poison gas

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/UmWtG9x5MEM)

* Image | 圖示
	<br/>![l4d2_smoker_toxic_1](image/l4d2_smoker_toxic_1.gif)
	<br/>![l4d2_smoker_toxic_2](image/l4d2_smoker_toxic_2.gif)
	<br/>![l4d2_smoker_toxic_3](image/l4d2_smoker_toxic_3.gif)
	<br/>![l4d2_smoker_toxic_4](image/l4d2_smoker_toxic_4.gif)
	<br/>![l4d2_smoker_toxic_5](image/l4d2_smoker_toxic_5.gif)

* <details><summary>Details</summary>

	* <b>Asphyxiation ability</b> - The Smoker pulls out the oxygen from the air around it causing nearby Survivors to struggle to breathe.
	* <b>Collapsed Lung ability</b> - The Smoker's tongue causes the survivor's lungs to collapse.
	* <b>Death Cloud ability</b> - The Smoker's Cloud deals damage to Survivors and slows melee after death
	* <b>Tongue Lighting ability</b> - When you drag by smoker you damage by smoker's lightning, and the lightning can transfer between all players.
	* <b>Methane Blast</b> - When the Smoker is killed, its dead body causes an explosion.
	* <b>Methane Leak ability</b> - The Smoker lets out a Methane cloud that causes damage to anyone standing inside
	* <b>Methane Strike ability</b> - Whoever shoved smoker gets stumble.
	* <b>Moon Walk ability</b> - Smoker is able to move backwards, either dragging the survivor or stretching his tongue. (Bot apply)
	* <b>Restrained Hostage ability</b> - The Smoker will use a victim it is currently choking to shield itself from damage.
	* <b>Smoke Spawn ability</b> - When smoker spawns, create smoke particle around the body.
	* <b>Smoke Screen ability</b> - The Smokers continually pumps smoke around it's body which helps obscure his form from attacks.
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d2_smoker_toxic.cfg
		```php
		/*Asphyxiation ability*/
		// If 1, Enables Asphyxiation ability: The Smoker pulls out the oxygen from the air around it causing nearby Survivors to struggle to breathe.
		l4d2_smoker_toxic_asphyxiation_enable "1"

		// Amount of damage caused by Asphyxiation.
		l4d2_smoker_toxic_asphyxiation_damage "3"

		// Soundfile being played on each damage caused by Asphyxiation (relative to to sound/, empty=disable)
		l4d2_smoker_toxic_asphyxiation_damage_sound "player/survivor/voice/choke_5.wav"

		// Frequency in which a Survivor nearby the Smoker will be injured.
		l4d2_smoker_toxic_asphyxiation_frequency "1.0"

		// Area size around the Smoker that can cause Asphyxiation of Survivors.
		l4d2_smoker_toxic_asphyxiation_size "100.0"

		/*Collapsed Lung ability*/
		// If 1, Enables Collapsed Lung ability: The Smoker's tongue causes the survivor's lungs to collapse.
		l4d2_smoker_toxic_collapsedlung_enable "1"

		// Chance that a Survivor's lungs are collapsed. (100 = 100%)
		l4d2_smoker_toxic_collapsedlung_chance "100"

		// How much damage is inflicted by Collapsed Lung each second.
		l4d2_smoker_toxic_collapsedlung_damage "1"

		// For how many seconds does the Collapsed Lung last.
		l4d2_smoker_toxic_collapsedlung_duration "5"

		/*Death Cloud ability*/
		// If 1,Enables Death Cloud ability: The Smoker's Cloud deals damage to Survivors and slows melee after death
		l4d2_smoker_toxic_deathcloud_enable "1"

		// If 1, Enable the Death Cloud Damage Stopping Reviving
		// Minimum: "1.000000"
		l4d2_smoker_toxic_deathcloud_blocks_revive "0"

		// Amount of damage the Death Cloud deals each time
		l4d2_smoker_toxic_deathcloud_damage "2.0"

		// Soundfile being played on each damage caused by Methane cloud (relative to to sound/, empty=disable)
		l4d2_smoker_toxic_deathcloud_damage_sound "player/survivor/voice/choke_8.wav"

		// Frequency that standing in the Death Cloud will cause damage.
		l4d2_smoker_toxic_deathcloud_frequency "1.0"

		// How long the Death Cloud damage persists
		l4d2_smoker_toxic_deathcloud_life "15.0"

		// If 1, Enable the Death Cloud Melee Slow Effect, it makes the survivors become fatigued more quickly and unable to shove
		l4d2_smoker_toxic_deathcloud_meleeslow_enable "1"

		// Radius of gas Death Cloud damage
		l4d2_smoker_toxic_deathcloud_radius "200"

		// If 1, Enable the Death Cloud Damage Shake
		l4d2_smoker_toxic_deathcloud_shake_enable "1"

		/*Tongue Lighting ability*/
		// If 1, Enables Tongue Lighting ability: When you drag by smoker you damage by smoker's lightning, and the lightning can transfer between all players.
		l4d2_smoker_toxic_lighting_enable "1"

		// Chance that smoker's Tongue creates lighting. (100 = 100%)
		l4d2_smoker_toxic_lighting_chance "100"

		// Tongue Lighting Damage at first hit
		l4d2_smoker_toxic_lighting_damage_first "6.0"

		// Tongue Lighting Damage per second
		l4d2_smoker_toxic_lighting_damage_per_second "3.0"

		// If 1, player would vocalize death scream if damage by lightning
		l4d2_smoker_toxic_lighting_death_scream "1"

		// Lightning's life
		l4d2_smoker_toxic_lighting_life "6.0"

		// Lightning transfer range.
		l4d2_smoker_toxic_lighting_range "500.0"

		/*Methane Blast ability*/
		// If 1, Enables Methane Blast ability: When the Smoker is killed, its dead body causes an explosion.
		l4d2_smoker_toxic_methaneblast_enable "1"

		// If 1, Create explosive effect from Methane Blast.
		l4d2_smoker_toxic_methaneblast_explosive "1"

		// Amount of damage caused in the inner range of Methane Blast.
		l4d2_smoker_toxic_methaneblast_inner_damage "10"

		// Power behind the inner range of Methane Blast. (0=Don't send survivors flying)
		l4d2_smoker_toxic_methaneblast_inner_power "200.0"

		// Range the inner blast radius will extend from Methane Blast.
		l4d2_smoker_toxic_methaneblast_inner_range "100.0"

		// Amount of damage caused in the outer range of Methane Blast.
		l4d2_smoker_toxic_methaneblast_outer_damage "5"

		// Power behind the outer range of Methane Blast. (0=Don't send survivors flying)
		l4d2_smoker_toxic_methaneblast_outer_power "100.0"

		// Range the outer blast radius will extend from Methane Blast.
		l4d2_smoker_toxic_methaneblast_outer_range "200.0"

		/*Methane Blast ability*/
		// If 1, Enables Methane Leak ability: The Smoker lets out a Methane cloud that causes damage to anyone standing inside
		l4d2_smoker_toxic_methaneleak_enable "1"

		// Frequency that standing in the Methane cloud will cause damage.
		l4d2_smoker_toxic_methaneleak_frequency "2.0"

		// Period of time the Methane cloud persists.
		l4d2_smoker_toxic_methaneleak_life "10.0"

		// If 1, Enable the Methane cloud Shake 
		l4d2_smoker_toxic_methaneleak_shake "1"

		// Area size of the Methane cloud will cover.
		l4d2_smoker_toxic_methaneleak_size "100.0"

		/*Methane Blast ability*/
		// If 1, Enables Methane Strike ability: Whoever shoved smoker gets stumble.
		l4d2_smoker_toxic_methanestrike_enable "1"

		// If 1, Enables Moon Walk ability: Smoker is able to move backwards, either dragging the survivor or stretching his tongue.
		l4d2_smoker_toxic_moonwalk_enable "1"

		/*Moon Walk ability*/
		// If 1, Enables Moon Walk ability: Smoker is able to move backwards, either dragging the survivor or stretching his tongue.
		l4d2_smoker_toxic_moonwalk_enable "1"

		// How fast will the Smoker can move after a tongue grab and drag.
		l4d2_smoker_toxic_moonwalk_speed "250"

		/*Restrained Hostage ability*/
		// If 1, Enables Restrained Hostage ability: The Smoker will use a victim it is currently choking to shield itself from damage.
		l4d2_smoker_toxic_restrainedhostage_enable "1"

		// Damage that inflicted to the Survivor while Restrained Hostage enabled..
		// Damge = the damage smoker received / this cvar valve (0=No damage)
		l4d2_smoker_toxic_restrainedhostage_divisor "30"

		// Percent of damage the Smoker avoids using a Survivor as a Hostage.
		l4d2_smoker_toxic_restrainedhostage_percent "0.7"

		/*Smoke Spawn ability*/
		// If 1, Enables Smoke Spawn ability: When smoker spawns, create smoke particle around the body.
		l4d2_smoker_toxic_smoker_spawn_enable "1"
		
		/*Smoke Screen ability*/
		// If 1, Enables Smoke Screen ability: The Smokers continually pumps smoke around it's body which helps obscure his form from attacks.
		l4d2_smoker_toxic_smokescreen_enable "1"

		// Chance that Smoke Screen will cause an attack to miss. (8 = 8%)
		l4d2_smoker_toxic_smokescreen_chance "8"
		```
</details>

* <details><summary>Command | 命令</summary>

	None
</details>

* <details><summary>Restrained Hostage Calculation Formula</summary>
	
	> Example: Smoker gets AWP shot while pulling a survivor<br/>
	AWP 1 shot damage = 90<br/>
	Smoker receive damage = 90 * 0.7 = 63<br/>
	Survivor receive damage = 63 / 30.0 = 2.1<br/>
	```php
	l4d2_smoker_toxic_restrainedhostage_divisor "30.0"
	l4d2_smoker_toxic_restrainedhostage_percent "0.7"
	```
</details>

* <details><summary>Known Conflicts</summary>
	
	If you don't use any of these plugins at all, no need to worry about conflicts.
	1. [Special Infected Ability Movement by Silvers](https://forums.alliedmods.net/showthread.php?t=307330)
		* Don't allow smoker ability movement with this plugin while using "Moon Walk" ability.
</details>

* <details><summary>Related Official ConVar</summary>

	* write down the following cvars in cfg/server.cfg
		```php
		// Smoker move Speed (default: 210)
		sm_cvar z_gas_speed "210"

		// Smoker CD when tounge fails (in coop: 15, in versus: 3)
		sm_cvar tongue_miss_delay  	"15"

		//Smoker CD after successful tongue hit (in coop: 20, in versus: 15)
		sm_cvar tongue_hit_delay  	"20"
		```
</details>

* Apply to | 適用於
	```
	L4D2
	```

* Related Plugin | 相關插件
	1. [l4d_smoker_pull_weapon_drop](/L4D_插件/Smoker_舌頭/l4d_smoker_pull_weapon_drop): Random weapon drops when pulled by smoker
		> 被Smoker拉走的時候強制掉落手上的武器

* <details><summary>Changelog | 版本日誌</summary>

	```php
	//Mortiegama @ 2014-2017
	//HarryPotter @ 2023
	```
	* v1.0h (2023-5-31)
		* Remake code, convert code to latest syntax
		* Fix warnings when compiling on SourceMod 1.11.
		* Optimize code and improve performance
		* Replace Gamedata with left4dhooks
		* Delete "Tongue Strip", "Tongue Whip", "Void Pocket" ability
		* Add "Smoke Spawn" ability
		* Add "Tongue Lighting" ability from [Smoker's Lightning by panxiaohai](https://forums.alliedmods.net/showthread.php?t=137088)
		* Add "Death Cloud" ability from [Smoker Cloud Damage (fork) by Dragokas](https://forums.alliedmods.net/showthread.php?t=339852)

	* v1.2
		* [Original Plugin by Mortiegama](https://forums.alliedmods.net/showthread.php?t=234442)
</details>

- - - -
# 中文說明
增強Smoker，賦予多種超能力成為毒性的化學兵器

* 原理
	* 能力1: <b>Asphyxiation</b> - 當倖存者靠近 Smoker一定範圍內，持續受到傷害。
	* 能力2: <b>Collapsed Lung</b> - 被Smoker舌頭抓到並釋放後，機率性會受到持續性傷害。
	* 能力3: <b>Death Cloud</b> - Smoker 死掉後的煙霧有毒，靠近的玩家持續受到傷害且推人會疲勞。 
	* 能力4: <b>Tongue Lighting</b> - Smoker 舌頭拉到人的時候產生雷電效果一段時間，倖存者會受到傷害並且雷電會轉移至其他玩家。
	* 能力5: <b>Methane Blast</b> - Smoker死掉時會原地產生爆炸會造成倖存者受傷跟擊飛。(附帶瓦斯桶爆炸效果)
	* 能力6: <b>Methane Leak</b> - Smoker 會定時釋放有毒煙霧，倖存者站在煙霧上會受到傷害。
	* 能力7: <b>Methane Strike</b> - 當倖存者推Smoker時，自身也會被震退。
	* 能力8: <b>Moon Walk</b> - Smoker 的舌頭拉到倖存者時，能夠邊拉邊移動。
	* 能力9: <b>Restrained Hostage</b> - 當倖存者被 Smoker 的舌頭抓住時，他可以拿倖存者當作盾牌減少傷害，且能轉移傷害給該倖存者。
	* 能力10: <b>Smoke Spawn</b> - Smoker身上自帶白煙效果。
	* 能力11: <b>Smoke Screen</b> - 攻擊 Smoker 時，有機率性無法對其造成傷害 。

* 功能
	* 可設定各能力的開關
	* 可設定Asphyxiation的傷害範圍、傷害頻率、傷害值、咳嗽音效、螢幕搖晃
	* 可設定Collapsed Lung的機率、傷害頻率、傷害持續時間、傷害值
	* 可設定Death Cloud的傷害範圍、傷害頻率、傷害持續時間、傷害值、咳嗽音效、螢幕搖晃、推人疲勞
	* 可設定Tongue Lighting的機率、傷害值、雷電持續時間、雷電範圍、死亡尖叫
	* 可設定Methane Blast的爆炸範圍、傷害值、瓦斯桶爆炸效果
	* 可設定Methane Leak的機率、傷害範圍、傷害頻率、傷害值、咳嗽音效、螢幕搖晃
	* 可設定Methane Strike的機率
	* 可設定Moon Walk的速度
	* 可設定Restrained Hostage的減傷比
	* 可設定Smoke Screen的免傷機率

* <details><summary>Restrained Hostage的傷害計算 (點我展開)</summary>
	
	> 舉例: Smoker 拉走倖存者並被AWP射中一槍<br/>
	Smoker 一槍傷害 = 90<br/>
	Charger 受到的傷害 = 90 * 0.7 = 63<br/>
	倖存者 受到的傷害 = 63 / 30.0 = 2.1<br/>
	```php
	l4d2_smoker_toxic_restrainedhostage_divisor "30.0"
	l4d2_smoker_toxic_restrainedhostage_percent "0.7"
	```
</details>

* <details><summary>會衝突的插件</summary>
	
	如果沒安裝以下插件就不需要擔心衝突
	1. [Special Infected Ability Movement by Silvers](https://forums.alliedmods.net/showthread.php?t=307330)
		* 這個插件可以讓Smoker使用能力時自由移動，與"Moon Walk"能力會有衝突
</details>

* <details><summary>相關的官方指令中文介紹 (點我展開)</summary>

	* 以下指令寫入文件 cfg/server.cfg，可自行調整
		```php
		// Smoker 移動速度 (預設: 210)
		sm_cvar z_gas_speed "210"

		// Smoker 舌頭沒有拉到人，重新使用能力的CD (戰役: 15, 對抗: 6)
		sm_cvar tongue_miss_delay  	"15"

		//Smoker 舌頭成功拉到人後，重新使用能力的CD (戰役: 20, 對抗: 15)
		sm_cvar tongue_hit_delay  	"20"
		```
</details>