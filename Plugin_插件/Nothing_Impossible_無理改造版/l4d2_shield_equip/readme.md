# Description | 內容
You can get shield by killing tank/witch or shield dropped by riot uncommon infected

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/BiTti6O-Gd8)

* <details><summary>Image | 圖示</summary>

    <br/>![l4d2_shield_equip_1](image/l4d2_shield_equip_1.jpg)
    <br/>![l4d2_shield_equip_2](image/l4d2_shield_equip_2.jpg)
    <br/>![l4d2_shield_equip_3](image/l4d2_shield_equip_3.jpg)
    <br/>![l4d2_shield_equip_4](image/l4d2_shield_equip_4.jpg)
    <br/>![l4d2_shield_equip_5](image/l4d2_shield_equip_5.gif)
    <br/>![l4d2_shield_equip_6](image/l4d2_shield_equip_6.gif)
</details>

* <details><summary>How does it work?</summary>

    * How to get a shield?
      * Kill riot uncommon infected who has shield
      * Kill tank who has shield
      * Kill witch who has shield
      * Drop shield if survivor with shield died
      * Admin types ```!shield```
      * Type ```give shield``` on game console when open ```sv_cheats 1```
    * How to drop a shield?
        * Type ```!dropshield```
    * How to use shield?
      * Switch to pistols or melee weapons, and you will have shiled on your left hand
      * Shove Melee to stagger Tank, Witch, Charger
      * Shove Melee to do huge damage to Tank, Witch, S.I, infected
    * Shield feature
      * Deduce damage from common, S.I, Tank and Witch
      * Deduce damage from friendly fire
      * When shield takes damage or melee infected, it costs shield durability.
        * Once run out of durability, shield will be removed
    * Notice
        * No need to using any mods to unlock shield
        * If player using character mods, the position of shield attachment will mess up on the body
            * Just a visual issue, the functionality won't be affected
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	2. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)
	3. [ThirdPersonShoulder_Detect](https://forums.alliedmods.net/showthread.php?t=298649)

* <details><summary>ConVar</summary>

    * cfg/sourcemod/l4d2_shield_equip.cfg
        ```php
        // 0=Plugin off, 1=Plugin on.
        l4d2_shield_equip_enable "1"

        // Chance that riot uncommon infected would bring the shield and drop shield when killed [0-100]%
        l4d2_shield_equip_riot_chance "20"

        // Chance that tank would bring the shield and drop shield when tank dies [0.0, 100.0]%
        l4d2_shield_equip_tank_chance "30"

        // Chance that shield drops when witch dies [0.0, 100.0]%
        l4d2_shield_equip_witch_chance "40"

        // If survivor has shield, chance that shield dropped when player dies [0-100]%
        l4d2_shield_equip_death_chance "100"

        // If 1, Enable shield glow when shield is on the ground
        l4d2_shield_equip_glow_enable "1"

        // Shield Glow Color, three values between 0-255 separated by spaces. RGB Color255 - Red Green Blue.
        l4d2_shield_equip_glow_color "150 150 150"

        // How near to Shield do players need to be to enable their glow. (0=Any distance)
        l4d2_shield_equip_glow_range "200"

        // Time in seconds to remove the shield on ground if no one picks up after it drops
        l4d2_shield_equip_ground_life "30"

        // Scale the shield model in riot uncommon infected. (Default: 1.2)
        l4d2_shield_equip_riot_scale "1.2"

        // Scale the shield model in survivor. (Default: 1.2)
        l4d2_shield_equip_survivor_scale "1.2"

        // Scale the shield model in tank. (Default: 1.2)
        l4d2_shield_equip_tank_scale "1.2"

        // Players with these flags have access to use !shield command to get a shield. (Empty = Everyone, -1: Nobody)
        l4d2_shield_equip_use_command_flag "z"

        // Empty string to allow all. Allow these weapon IDs being equipped with shield, separate by commas (no spaces). See plugin source code for more details.
        // 	"weapon_pistol",					1
        // 	"weapon_smg",						2
        // 	"weapon_pumpshotgun",				3
        // 	"weapon_autoshotgun",				4
        // 	"weapon_rifle",						5
        // 	"weapon_hunting_rifle",				6
        // 	"weapon_smg_silenced",				7
        // 	"weapon_shotgun_chrome",			8
        // 	"weapon_rifle_desert",				9
        // 	"weapon_sniper_military",			10
        // 	"weapon_shotgun_spas",				11
        // 	"weapon_grenade_launcher",			12
        // 	"weapon_rifle_ak47",				13
        // 	"weapon_pistol_magnum",				14
        // 	"weapon_smg_mp5",					15
        // 	"weapon_rifle_sg552",				16
        // 	"weapon_sniper_awp",				17
        // 	"weapon_sniper_scout",				18
        // 	"weapon_rifle_m60",					19
        // 	"weapon_chainsaw",					20
        // 	"weapon_melee",						21
        // 	"weapon_first_aid_kit",				22
        // 	"weapon_defibrillator",				23
        // 	"weapon_upgradepack_incendiary",	24
        // 	"weapon_upgradepack_explosive",		25
        // 	"weapon_molotov",					26
        // 	"weapon_pipe_bomb",					27
        // 	"weapon_vomitjar",					28
        // 	"weapon_pain_pills",				29
        // 	"weapon_adrenaline",				30
        // 	"weapon_gascan",					31
        // 	"weapon_propanetank",				32
        // 	"weapon_oxygentank",				33
        // 	"weapon_fireworkcrate",				34
        // 	"weapon_gnome",						35
        // 	"weapon_cola_bottles",				36
        l4d2_shield_equip_weapon "1,2,14,20,21"

        // Empty string to allow all. Allow these melee weapons being equipped with shield, separate by commas (no spaces). See plugin source code for more details.
        // (l4d2_shield_equip_weapon must contains 21)
        // fireaxe 
        // frying_pan 
        // machete
        // baseball_bat
        // crowbar
        // cricket_bat
        // tonfa
        // katana
        // electric_guitar
        // knife
        // golfclub
        // pitchfork
        // shovel
        // Add custom melee weapon name if you want
        l4d2_shield_equip_melee "fireaxe,frying_pan,machete,baseball_bat,crowbar,cricket_bat,tonfa,katana,electric_guitar,knife,golfclub,pitchfork,shovel"

        // If 1, Allow dual pistol being equipped with shield
        // (l4d2_shield_equip_weapon must contains 1)
        l4d2_shield_equip_dual_pistol "1"

        // If 1, Allows shoving to stagger chargers when survivor has shield on hand
        l4d2_shield_equip_charger_stagger "1"

        // If 1, Allows shoving to stagger tanks when survivor has shield on hand
        l4d2_shield_equip_tank_stagger "1"

        // If 1, Allows shoving to stagger witch when survivor has shield on hand
        l4d2_shield_equip_witch_stagger "1"

        // Decrease survivor's damage taken by [0.0, 100.0]% from common infected (100=No Dmg)
        l4d2_shield_equip_damage_from_ci "100.0"

        // Decrease survivor's damage taken by [0.0, 100.0]% from special infected (100=No Dmg)
        l4d2_shield_equip_damage_from_si "80.0"

        // Decrease survivor's damage taken by [0.0, 100.0]% from tank (100=No Dmg)
        l4d2_shield_equip_damage_from_tank "50.0"

        // Decrease survivor's damage taken by [0.0, 100.0]% from witch (100=No Dmg)
        l4d2_shield_equip_damage_from_witch "60.0"

        // Decrease survivor's damage taken by [0.0, 100.0]% from friendly fire (100=No Dmg)
        l4d2_shield_equip_damage_from_ff "100.0"

        // Damage to common infected by shoving when survivor has shield on hand (0=Off)
        l4d2_shield_equip_damage_to_ci "30"

        // Damage to special infected by shoving when survivor has shield on hand (0=Off)
        l4d2_shield_equip_damage_to_si "100"

        // Damage to tank by shoving when survivor has shield on hand (0=Off)
        l4d2_shield_equip_damage_to_tank "300"

        // Damage to witch by shoving when survivor has shield on hand (0=Off)
        l4d2_shield_equip_damage_to_witch "200"

        // How to show shield on first person view. 1=When Take damage, 2=When Press E button, 4=Shove, 7=All. Add numbers together (7=All, 0=Always)
        l4d2_shield_equip_show_type "5"

        // If 1, play sound when shield takes damage or melee infected
        l4d2_shield_equip_play_sound "1"

        // If 1, When shield takes damage or melee infected, it costs shield durability.
        // Once run out of durability, shield will be removed (0=Off)
        l4d2_shield_equip_cost_enable "1"

        // How shield durability message displays. (0: Disable, 1:In chat, 2: In Hint Box, 3: In center text)
        l4d2_shield_equip_cost_announce_type "2"

        // Max Durability of shield.
        l4d2_shield_equip_max_durability "3000"

        // How much shield durability does it cost when melee Tank. (0: No Cost)
        l4d2_shield_equip_tank_cost "200"

        // How much shield durability does it cost when melee Witch. (0: No Cost)
        l4d2_shield_equip_witch_cost "150"

        // How much shield durability does it cost when melee Common Infected. (0: No Cost)
        l4d2_shield_equip_common_cost "25"

        // How much shield durability does it cost when melee Special Infected. (0: No Cost)
        l4d2_shield_equip_infected_cost "100"
        ```
</details>

* <details><summary>Command</summary>
	
	* **Give/Remove a shield**
		```php
		sm_shield
		```

	* **Drop your shield**
		```php
		sm_dropshield
		```

	* **Give Player a shield (Adm Require: ADMFLAG_ROOT)**
		```php
		sm_giveshield <player>
		```
</details>

* Apply to | 適用於
    ```
    L4D2
    ```

* <details><summary>Translation Support | 支援翻譯</summary>

	```
	English
	繁體中文
	简体中文
	```
</details>

* Related Plugin | 相關插件
	1. [l4d2_spawn_uncommons](/Plugin_插件/Common_Infected_普通感染者/l4d2_spawn_uncommons): Spawn Uncommon Infected on all maps (Support The Last Stand New Model)
		> 所有地圖上可生成特殊一般感染者，有鎮暴警察、CEDA人員、小丑、泥人、工人、吉米賽車手、墮落倖存者

* <details><summary>Changelog | 版本日誌</summary>

    * v1.4h (2024-5-2)
        * Detect dual pistol pickup
        
    * v1.3h (2023-8-6)
      * Deduce damage from friendly fire
      * When shield takes damage or melee infected, it costs shield durability.
        * Once run out of durability, shield will be removed
      * Update Translation

    * v1.2h (2023-7-31)
        * Carrying the shield across maps in coop/realism

    * v1.1h (2023-7-3)
        * Hook command listener "```give shield```" to give a shield in console (need sv_cheats 1 or ~FCVAR_CHEAT bit)

    * v1.0h (2023-6-25)
		* Remake code, convert code to latest syntax
		* Fix warnings when compiling on SourceMod 1.11.
		* Optimize code and improve performance
		* Translation Support
        * Shield Damage to CI, SI, Tank and Witch by shoving
        * Attach shield model to Riot uncommon infected and drop shield when killed
        * Attach shield model to Tank and drop shield when tank dies
        * Add commands to drop the shield, adm can give a shield
        * Add Shield Glow Color on the ground
        * Allows shoving to stagger chargers, tanks, witches when survivor has shield on hand
        * Customize weapons and melee being equipped with shield.
        * Display shield model on player's back
        * Shield drops when survivor dies
        * Players can take shield to next level in coop/realism mode.

    * v1.3
	    * [Original Plugin By panxiaohai](https://forums.alliedmods.net/showthread.php?t=222674)
</details>

- - - -
# 中文說明
新武器: 防暴盾牌

* 原理
    * 盾牌為當年L4D2開發到一半放棄的近戰武器，盾牌模組還存在於原始檔案中但是無法作為一個近戰武器使用
    * 這個插件會刷盾牌模組，但並非作為一個正常的武器使用，有限制

* <details><summary>詳細功能</summary>

    * 如何獲得盾牌?
        * 有裝備盾牌的鎮暴警察感染者，死亡時掉落盾牌
        * 有裝備盾牌的Tank，死亡時掉落盾牌
        * Witch死亡時一定機率掉落盾牌
        * 管理員輸入```!shield```，直接獲得盾牌
        * 有盾牌的隊友死亡
        * 開啟```sv_cheats 1```，於遊戲控制台輸入```give shield```
    * 如何裝備盾牌?
        * 拿起近戰武器或者手槍，左手會自動拿盾牌，第一人稱視角也能看到自己的盾牌
    * 如何丟棄盾牌?
        * 輸入```!dropshield```
    * 盾牌有何用處?
        * (被動技能) 身體正面降低小僵屍、特感、Tank、Witch造成的傷害
        * (被動技能) 身體正面降低隊友造成的子彈友傷
        * (主動技能) 右鍵推可鎮暈Tank、Witch、Charger
        * (主動技能) 右鍵推可造成小僵屍、特感、Tank、Witch巨大傷害
        * (被動技能) 盾牌會有耐力值. 使用盾牌打擊特感、Tank、Witch、小殭屍或保護免傷時，會消耗耐力值
            * 當耐力值用光時，移除盾牌
    * 攜帶盾牌
      * 戰役/寫實模式下能攜帶盾牌過關到下一個關卡
      * 盾牌未使用時會顯示於後背上
</details>

* 注意事項
    * 不需要安裝任何解鎖盾牌武器的模組
    * 使用自製的角色模組會導致身上的盾牌模組位置錯亂
        * 只有觀感問題，功能不會受到任何影響

* <details><summary>指令中文介紹 (點我展開)</summary>

    * cfg/sourcemod/l4d2_shield_equip.cfg
        ```php
        // 0=插件啟動, 1=插件關閉.
        l4d2_shield_equip_enable "1"

        // 防暴警察感染者會裝備盾牌的機率 [0-100]%
        l4d2_shield_equip_riot_chance "20"

        // Tank身上會裝備盾牌的機率 [0-100]%
        l4d2_shield_equip_tank_chance "30"

        // Witch死亡時掉落盾牌的機率 [0.0, 100.0]%
        l4d2_shield_equip_witch_chance "40"

        // 如果玩家攜帶盾牌，死亡時掉落盾牌的機率 [0-100]%
        l4d2_shield_equip_death_chance "100"

        // 為1時，地上的盾牌會發光
        l4d2_shield_equip_glow_enable "1"

        // 地上的盾牌光圈顏色 (RGB)
        l4d2_shield_equip_glow_color "150 150 150"

        // 地上的盾牌光圈可見範圍 (0=無範圍限制)
        l4d2_shield_equip_glow_range "200"

        // 盾牌掉落或丟棄在地上的存留時間，如果時間到沒有人撿起則移除
        l4d2_shield_equip_ground_life "30"

        // 在防暴警察身上的盾牌尺寸，數字介於0.0~2.0之間 (預設: 1.2)
        l4d2_shield_equip_riot_scale "1.2"

        // 在倖存者身上的盾牌尺寸，數字介於0.0~2.0之間 (預設: 1.2)
        l4d2_shield_equip_survivor_scale "1.2"

        // 在Tank身上的盾牌尺寸，數字介於0.0~2.0之間 (預設: 1.2)
        l4d2_shield_equip_tank_scale "1.2"

        // 擁有這些權限的玩家可以使用!shield命令獲得盾牌 (留白 = 任何人都能使用, -1: 無人能使用)
        l4d2_shield_equip_use_command_flag "z"

        // 留白允許全部武器. 寫入武器的ID，只允許這些武器裝備盾牌 (逗號分隔，不要空格). 武器的ID列表請查看插件原始碼
        // 	"weapon_pistol",					1
        // 	"weapon_smg",						2
        // 	"weapon_pumpshotgun",				3
        // 	"weapon_autoshotgun",				4
        // 	"weapon_rifle",						5
        // 	"weapon_hunting_rifle",				6
        // 	"weapon_smg_silenced",				7
        // 	"weapon_shotgun_chrome",			8
        // 	"weapon_rifle_desert",				9
        // 	"weapon_sniper_military",			10
        // 	"weapon_shotgun_spas",				11
        // 	"weapon_grenade_launcher",			12
        // 	"weapon_rifle_ak47",				13
        // 	"weapon_pistol_magnum",				14
        // 	"weapon_smg_mp5",					15
        // 	"weapon_rifle_sg552",				16
        // 	"weapon_sniper_awp",				17
        // 	"weapon_sniper_scout",				18
        // 	"weapon_rifle_m60",					19
        // 	"weapon_chainsaw",					20
        // 	"weapon_melee",						21
        // 	"weapon_first_aid_kit",				22
        // 	"weapon_defibrillator",				23
        // 	"weapon_upgradepack_incendiary",	24
        // 	"weapon_upgradepack_explosive",		25
        // 	"weapon_molotov",					26
        // 	"weapon_pipe_bomb",					27
        // 	"weapon_vomitjar",					28
        // 	"weapon_pain_pills",				29
        // 	"weapon_adrenaline",				30
        // 	"weapon_gascan",					31
        // 	"weapon_propanetank",				32
        // 	"weapon_oxygentank",				33
        // 	"weapon_fireworkcrate",				34
        // 	"weapon_gnome",						35
        // 	"weapon_cola_bottles",				36
        l4d2_shield_equip_weapon "1,2,14,20,21"

        // 留白允許全部近戰武器. 寫入近戰武器的名稱，只允許這些近戰武器裝備盾牌 (逗號分隔，不要空格). 近戰武器的名稱列表請查看插件原始碼
        // (l4d2_shield_equip_weapon 必須寫入 14)
        // fireaxe 消防斧
        // frying_pan 平底鍋
        // machete 開山刀
        // baseball_bat 球棒
        // crowbar 鐵撬
        // cricket_bat 板球拍
        // tonfa 警棍
        // katana 武士刀
        // electric_guitar 電吉他
        // knife 小刀
        // golfclub 高爾夫球棒
        // pitchfork 草叉
        // shovel 鐵鏟
        // 可自由新增三方圖近戰
        l4d2_shield_equip_melee "fireaxe,frying_pan,machete,baseball_bat,crowbar,cricket_bat,tonfa,katana,electric_guitar,knife,golfclub,pitchfork,shovel"

        // 為1時，允許雙手槍裝備盾牌
        // (l4d2_shield_equip_weapon 必須寫入 1)
        l4d2_shield_equip_dual_pistol "1"

        // 為1時，裝備盾牌時右鍵可以推開Charger
        l4d2_shield_equip_charger_stagger "1"

        // 為1時，裝備盾牌時右鍵可以推開Tank
        l4d2_shield_equip_tank_stagger "1"

        // 為1時，裝備盾牌時右鍵可以推開Witch
        l4d2_shield_equip_witch_stagger "1"

        // 裝備盾牌的倖存者，受到小殭屍傷害的減傷比 (100=無傷)
        l4d2_shield_equip_damage_from_ci "100.0"

        // 裝備盾牌的倖存者，受到特感傷害的減傷比 (100=無傷)
        l4d2_shield_equip_damage_from_si "80.0"

        // 裝備盾牌的倖存者，受到Tank傷害的減傷比 (100=無傷)
        l4d2_shield_equip_damage_from_tank "50.0"

        // 裝備盾牌的倖存者，受到Witch傷害的減傷比 (100=無傷)
        l4d2_shield_equip_damage_from_witch "60.0"

        // 裝備盾牌的倖存者，受到對友子彈友傷的減傷比 (100=無傷)
        l4d2_shield_equip_damage_from_ff "100.0"

        // 裝備盾牌時，右鍵打擊小殭屍造成的傷害值 (0=關閉)
        l4d2_shield_equip_damage_to_ci "30"

        // 裝備盾牌時，右鍵打擊特感造成的傷害值 (0=關閉)
        l4d2_shield_equip_damage_to_si "100"

        // 裝備盾牌時，右鍵打擊Tank造成的傷害值 (0=關閉)
        l4d2_shield_equip_damage_to_tank "300"

        // 裝備盾牌時，右鍵打擊Witch造成的傷害值 (0=關閉)
        l4d2_shield_equip_damage_to_witch "200"

        // 第一人稱如何顯示盾牌? 1=受傷時, 2=按E時, 4=右鍵推，數字請相加 (7=全部，0=一直顯示)
        l4d2_shield_equip_show_type "5"

        // 為1時，使用盾牌打擊特感、Tank、Witch、小殭屍或保護免傷時，會播放音效
        l4d2_shield_equip_play_sound "1"

        // 為1時，盾牌會有耐力值. 使用盾牌打擊特感、Tank、Witch、小殭屍或保護免傷時，會消耗耐力值
        // 當耐力值用光時，移除盾牌 (0=關閉這項功能)
        l4d2_shield_equip_cost_enable "1"

        // 顯示盾牌耐久度的位置. (0: 關閉, 1: 聊天窗, 2: 螢幕下方黑底白字窗, 3: 螢幕正中間)
        l4d2_shield_equip_cost_announce_type "2"

        // 盾牌的最大耐力值
        l4d2_shield_equip_max_durability "3000"

        // 盾牌打擊Tank所消耗的耐力數值 (0: 無消耗)
        l4d2_shield_equip_tank_cost "200"

        // 盾牌打擊Witch所消耗的耐力數值 (0: 無消耗)
        l4d2_shield_equip_witch_cost "150"

        // 盾牌打擊普通感染者所消耗的耐力數值 (0: 無消耗)
        l4d2_shield_equip_common_cost "25"

        // 盾牌打擊特感所消耗的耐力數值 (0: 無消耗)
        l4d2_shield_equip_infected_cost "100"
        ```
</details>

* <details><summary>命令中文介紹 (點我展開)</summary>

	* **給予/移除盾牌**
		```php
		sm_shield
		```

	* **丟棄盾牌**
		```php
		sm_dropshield
		```

	* **管理員指定玩家獲得盾牌 (權限: ADMFLAG_ROOT)**
		```php
		sm_giveshield <玩家名稱>
		```
</details>
     
