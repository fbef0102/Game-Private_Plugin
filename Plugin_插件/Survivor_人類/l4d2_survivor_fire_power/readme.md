# Description | 內容
Adjustable each melee swing rate and each weapon fire rate.

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/cco802XNOfk)

* Image | 圖示
    <br/>![l4d2_survivor_fire_power_1](image/l4d2_survivor_fire_power_1.gif)
    <br/>![l4d2_survivor_fire_power_2](image/l4d2_survivor_fire_power_2.gif)

* <details><summary>How does it work?</summary>

	* Increase every gun weapon's fire rate
    * Increase every melee weapon's swing rate
</details>

* Require | 必要安裝
    1. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)

* <details><summary>ConVar | 指令</summary>

    * cfg/sourcemod/l4d2_survivor_fire_power.cfg
        ```php
        // 0=Plugin off, 1=Plugin on.
        l4d2_survivor_fire_power_allow "1"

        // Player with these flag have access to have the fire rate power (Empty=Everyone, -1=No one)
        l4d2_survivor_fire_power_flags "" 

        // If 1, turn on fire rate power for players by default
        l4d2_survivor_fire_power_default "1"

        // 0=Value Default, The interval for swinging Baseball Bat. (clamped between 0.2 and 1.0)
        l4d2_survivor_fire_power_baseball_bat_rate "0.75"

        // 0=Value Default, The interval for swinging Cricket Bat.(clamped between 0.2 and 1.0)
        l4d2_survivor_fire_power_cricket_bat_rate "0.8"

        // 0=Value Default, The interval for swinging Crowbar. (clamped between 0.2 and 1.0)
        l4d2_survivor_fire_power_crowbar_rate "0.8"

        // 0=Value Default, The interval for swinging Electric Guitar.(clamped between 0.2 and 1.0)
        l4d2_survivor_fire_power_electric_guitar_rate "1.0"

        // 0=Value Default, The interval for swinging Fire Axe. (clamped between 0.2 and 1.0)
        l4d2_survivor_fire_power_fireaxe_rate "1.0"

        // 0=Value Default, The interval for swinging Frying Pan. (clamped between 0.2 and 1.0)
        l4d2_survivor_fire_power_frying_pan_rate "0.75"

        // 0=Value Default, The interval for swinging Golf Club. (clamped between 0.2 and 1.0)
        l4d2_survivor_fire_power_golfclub_rate "0.75"

        // 0=Value Default, The interval for swinging Katana. (clamped between 0.2 and 1.0)
        l4d2_survivor_fire_power_katana_rate "0.8"

        // 0=Value Default, The interval for swinging Knife. (clamped between 0.2 and 1.0)
        l4d2_survivor_fire_power_knife_rate "0.8"

        // 0=Value Default, The interval for swinging Machete.(clamped between 0.2 and 1.0)
        l4d2_survivor_fire_power_machete_rate "0.8"

        // 0=Value Default, The interval for swinging Tonfa. (clamped between 0.2 and 1.0)
        l4d2_survivor_fire_power_tonfa_rate "0.75"

        // 0=Value Default, The interval for swinging Pitchfork. (clamped between 0.2 and 1.0)
        l4d2_survivor_fire_power_pitchfork_rate "0.88"

        // 0=Value Default, The interval for swinging shovel. (clamped between 0.2 and 1.0)
        l4d2_survivor_fire_power_shovel_rate "1.0"

        // 0=Value Default, Custom Third Party Melee, The interval for swinging unknown melee weapon. (clamped between 0.2 and 1.0)
        l4d2_survivor_fire_power_unknown_rate "0.0"

        // 0=Value Default, 1=Each melee rate unchanged, modify melee swinging rate multi when incapacitated. (ex. Use 'Incapped Weapons Patch by Silvers' to allow using melees while Incapped)
        l4d2_survivor_fire_power_melee_incap_multi_rate "1.0"

        // 0=Value Default, pistol fire rate. (clamped between 0.1 and 1.0)
        l4d2_survivor_fire_power_pistol_rate "0.8"

        // 0=Value Default, magnum fire rate. (clamped between 0.1 and 1.0)
        l4d2_survivor_fire_power_magnum_rate "0.8"

        // 0=Value Default, smg fire rate. (clamped between 0.1 and 1.0)
        l4d2_survivor_fire_power_smg_rate "0.8"

        // 0=Value Default, mp5 fire rate. (clamped between 0.1 and 1.0)
        l4d2_survivor_fire_power_mp5_rate "0.8"

        // 0=Value Default, silenced smg fire rate. (clamped between 0.1 and 1.0)
        l4d2_survivor_fire_power_silenced_rate "0.8"

        // 0=Value Default, pump shotgun fire rate. (clamped between 0.1 and 1.0)
        l4d2_survivor_fire_power_pumpshotgun_rate "0.8"

        // 0=Value Default, shotgun chrome fire rate. (clamped between 0.1 and 1.0)
        l4d2_survivor_fire_power_shotgun_chrome_pan_rate "0.8"

        // 0=Value Default, auto shotgun fire rate. (clamped between 0.1 and 1.0)
        l4d2_survivor_fire_power_autoshotgun_rate "0.8"

        // 0=Value Default, shotgun spas fire rate. (clamped between 0.1 and 1.0)
        l4d2_survivor_fire_power_shotgun_spas_rate "0.8"

        // 0=Value Default, m16 rifle fire rate. (clamped between 0.1 and 1.0)
        l4d2_survivor_fire_power_rifle_rate "0.8"

        // 0=Value Default, ak47 fire rate. (clamped between 0.1 and 1.0)
        l4d2_survivor_fire_power_ak47_rate "0.8"

        // 0=Value Default, sg552 fire rate. (clamped between 0.1 and 1.0)
        l4d2_survivor_fire_power_sg552_rate "0.8"

        // 0=Value Default, desert rifle fire rate. (clamped between 0.1 and 1.0)
        l4d2_survivor_fire_power_desert_rate "0.8"

        // 0=Value Default, m60 fire rate. (clamped between 0.1 and 1.0)
        l4d2_survivor_fire_power_m60_rate "0.8"

        // 0=Value Default, hunting rifle fire rate. (clamped between 0.1 and 1.0)
        l4d2_survivor_fire_power_hunting_rifle_rate "0.8"

        // 0=Value Default, military sniper rifle fire rate. (clamped between 0.1 and 1.0)
        l4d2_survivor_fire_power_military_rate "0.8"

        // 0=Value Default, scout rifle fire rate. (clamped between 0.1 and 1.0)
        l4d2_survivor_fire_power_scout_rate "0.8"

        // 0=Value Default, awp fire rate. (clamped between 0.1 and 1.0)
        l4d2_survivor_fire_power_awp_rate "0.8"

        // 0=Value Default, grenade launcher fire rate. (clamped between 0.1 and 1.0)
        l4d2_survivor_fire_power_grenade_launcher_rate "0.8"

        // 0=Value Default, 1=Each weapon fire rate unchanged, modify weapon fire rate multi when incapacitated. (ex. Use 'Incapped Weapons Patch by Silvers' to allow using weapons while Incapped)
        l4d2_survivor_fire_power_weapon_incap_multi_rate "1.0"
        ```
</details>

* <details><summary>Command | 命令</summary>
	
	* **Turn on/off fire rate increase power.**
		```php
		sm_wpspd
		```
</details>

* Apply to | 適用於
    ```
    L4D2
    ```

* <details><summary>Changelog | 版本日誌</summary>

    * 1.0 (2023-8-16)
	    * Initial Release
</details>

- - - -
# 中文說明
倖存者的揮砍速度與射速變快

* 原理
    * 倖存者的近戰武器揮砍速度變快
    * 倖存者的槍械武器射速變快
    * 輸入```!sm_wpspd```關閉或開啟

* <details><summary>指令中文介紹 (點我展開)</summary>

    * cfg/sourcemod/l4d2_survivor_fire_power.cfg
        ```php
        // 0=關閉插件, 1=啟動插件
        l4d2_survivor_fire_power_allow "1"

        // 擁有這些權限的玩家，才可以揮砍速度變快與射速變快 (留白 = 任何人都能, -1: 無人)
        l4d2_survivor_fire_power_flags "" 

        // 為1時，預設幫玩家開啟射速變快與砍速變快的能力
        l4d2_survivor_fire_power_default "1"

        // 0=官方預設值，球棒的揮砍速度. (介於0.2~1.05 r0u )
        l4d2_survivor_fire_power_baseball_bat_rate "0.75"

        // 0=官方預設值, 板球拍的揮砍速度. (介於0.2 ~ 1.0之間)
        l4d2_survivor_fire_power_cricket_bat_rate "0.8"

        // 0=官方預設值, 鐵撬的揮砍速度. (介於0.2 ~ 1.0之間)
        l4d2_survivor_fire_power_crowbar_rate "0.8"

        // 0=官方預設值, 電吉他的揮砍速度. (介於0.2 ~ 1.0之間)
        l4d2_survivor_fire_power_electric_guitar_rate "1.0"

        // 0=官方預設值, 斧頭的揮砍速度. (介於0.2 ~ 1.0之間)
        l4d2_survivor_fire_power_fireaxe_rate "1.0"

        // 0=官方預設值, 平底鍋的揮砍速度. (介於0.2 ~ 1.0之間)
        l4d2_survivor_fire_power_frying_pan_rate "0.75"

        // 0=官方預設值, 高爾夫球棒的揮砍速度. (介於0.2 ~ 1.0之間)
        l4d2_survivor_fire_power_golfclub_rate "0.75"

        // 0=官方預設值, 武士刀的揮砍速度. (介於0.2 ~ 1.0之間)
        l4d2_survivor_fire_power_katana_rate "0.8"

        // 0=官方預設值, 小刀的揮砍速度. (介於0.2 ~ 1.0之間)
        l4d2_survivor_fire_power_knife_rate "0.8"

        // 0=官方預設值, 開山刀的揮砍速度. (介於0.2 ~ 1.0之間)
        l4d2_survivor_fire_power_machete_rate "0.8"

        // 0=官方預設值, 警棍的揮砍速度. (介於0.2 ~ 1.0之間)
        l4d2_survivor_fire_power_tonfa_rate "0.75"

        // 0=官方預設值, 草叉的揮砍速度. (介於0.2 ~ 1.0之間)
        l4d2_survivor_fire_power_pitchfork_rate "0.88"

        // 0=官方預設值, 鐵鏟的揮砍速度. (介於0.2 ~ 1.0之間)
        l4d2_survivor_fire_power_shovel_rate "1.0"

        // 0=官方預設值, 第三方近戰武器的揮砍速度. (介於0.2 ~ 1.0之間)
        l4d2_survivor_fire_power_unknown_rate "0.0"

        // 0=官方預設值, 1=揮砍速度不變, 倒地狀態使用近戰武器的揮砍速度. (有的插件可以讓倖存者在倒地狀態下使用近戰武器)
        l4d2_survivor_fire_power_melee_incap_multi_rate "1.0"

        // 0=官方預設值, 手槍射速 (介於0.1 ~ 1.0之間)
        l4d2_survivor_fire_power_pistol_rate "0.8"

        // 0=官方預設值, 沙漠之鷹射速 (介於0.1 ~ 1.0之間)
        l4d2_survivor_fire_power_magnum_rate "0.8"

        // 0=官方預設值, 機槍射速 (介於0.1 ~ 1.0之間)
        l4d2_survivor_fire_power_smg_rate "0.8"

        // 0=官方預設值, MP5衝鋒槍射速 (介於0.1 ~ 1.0之間)
        l4d2_survivor_fire_power_mp5_rate "0.8"

        // 0=官方預設值, 消音機槍射速 (介於0.1 ~ 1.0之間)
        l4d2_survivor_fire_power_silenced_rate "0.8"

        // 0=官方預設值, 木製霰彈槍射速 (介於0.1 ~ 1.0之間)
        l4d2_survivor_fire_power_pumpshotgun_rate "0.8"

        // 0=官方預設值, 鐵製霰彈槍射速 (介於0.1 ~ 1.0之間)
        l4d2_survivor_fire_power_shotgun_chrome_pan_rate "0.8"

        // 0=官方預設值, 連發霰彈槍射速 (介於0.1 ~ 1.0之間)
        l4d2_survivor_fire_power_autoshotgun_rate "0.8"

        // 0=官方預設值, 戰鬥霰彈槍射速 (介於0.1 ~ 1.0之間)
        l4d2_survivor_fire_power_shotgun_spas_rate "0.8"

        // 0=官方預設值, 步槍射速 (介於0.1 ~ 1.0之間)
        l4d2_survivor_fire_power_rifle_rate "0.8"

        // 0=官方預設值, AK47射速 (介於0.1 ~ 1.0之間)
        l4d2_survivor_fire_power_ak47_rate "0.8"

        // 0=官方預設值, SG552步槍射速 (介於0.1 ~ 1.0之間)
        l4d2_survivor_fire_power_sg552_rate "0.8"

        // 0=官方預設值, 三連發步槍射速 (介於0.1 ~ 1.0之間)
        l4d2_survivor_fire_power_desert_rate "0.8"

        // 0=官方預設值, M60機關槍射速 (介於0.1 ~ 1.0之間)
        l4d2_survivor_fire_power_m60_rate "0.8"

        // 0=官方預設值, 獵槍射速 (介於0.1 ~ 1.0之間)
        l4d2_survivor_fire_power_hunting_rifle_rate "0.8"

        // 0=官方預設值, 軍用狙擊槍射速 (介於0.1 ~ 1.0之間)
        l4d2_survivor_fire_power_military_rate "0.8"

        // 0=官方預設值, SCOUT狙擊槍射速 (介於0.1 ~ 1.0之間)
        l4d2_survivor_fire_power_scout_rate "0.8"

        // 0=官方預設值, AWP射速 (介於0.1 ~ 1.0之間)
        l4d2_survivor_fire_power_awp_rate "0.8"

        // 0=官方預設值, 榴彈發射器射速 (介於0.1 ~ 1.0之間)
        l4d2_survivor_fire_power_grenade_launcher_rate "0.8"

        // 0=官方預設值, 1=射速不變, 倒地狀態使用槍械武器的射速. (有的插件可以讓倖存者在倒地狀態下使用槍械武器)
        l4d2_survivor_fire_power_weapon_incap_multi_rate "1.0"
        ```
</details>
