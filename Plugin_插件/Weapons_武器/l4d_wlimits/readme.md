
# Description | 內容
Restrict weapons individually or together

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Video | 影片展示
    <br/>None

* Image | 圖示
	* display message when weapon limit reached
    > 顯示武器拿取限制
	<br/>![l4d_wlimits_1](image/l4d_wlimits_1.jpg)

* Apply to | 適用於
```
L4D2
```

* [L4D1 Version | 適用於L4D1的版本](https://github.com/fbef0102/L4D1-Competitive-Plugins/tree/master/l4d_limitweapon)

* <details><summary>Changelog | 版本日誌</summary>

    * v2.1
	    * Request by 壹梦
	    * Remove some cmds

    * v2.0
	    * [By CanadaRox, Stabby, Forgetest, A1m`, robex](https://github.com/SirPlease/L4D2-Competitive-Rework/blob/master/addons/sourcemod/scripting/l4d_weapon_limits.sp)
</details>

* Require | 必要安裝
	1. [[INC] Multi Colors](https://forums.alliedmods.net/showthread.php?t=247770)
    2. [[INC] l4d2_weapons](https://github.com/fbef0102/Game-Private_Plugin/blob/main/left4dead2/scripting/include/l4d2_weapons.inc)

* <details><summary>ConVar | 指令</summary>

    * cfg/sourcemod/l4d_weapon_limits.cfg
	```php
    // Time interval bewteen weapon limit notify. (0=off)
    l4d_weapon_limits_cooltime_block "3.0"
	```
</details>

* <details><summary>Command | 命令</summary>
    
    * **Add a weapon limit**
		```php
        l4d_wlimits_add　<limit number> <give ammo if weapon limited is reached> <weapon class name>
		```
</details>

* Notice
    * open cfg/server.cfg and write down cmds. For example:
    ```php
    l4d_wlimits_add 3 1 weapon_smg weapon_smg_silenced
    l4d_wlimits_add 3 1 weapon_shotgun_chrome weapon_pumpshotgun
    l4d_wlimits_add 1 0 weapon_pistol_magnum
    l4d_wlimits_add 0 0 weapon_melee
    l4d_wlimits_add 0 1 weapon_hunting_rifle
    ```

    * All weapons class name
    ```php
    weapon_pistol
    weapon_pistol_magnum
    weapon_pumpshotgun
    weapon_shotgun_chrome
    weapon_smg
    weapon_smg_silenced
    weapon_autoshotgun
    weapon_shotgun_spas
    weapon_hunting_rifle
    weapon_sniper_military
    weapon_smg
    weapon_rifle
    weapon_rifle_desert
    weapon_rifle_ak47
    weapon_grenade_launcher
    weapon_rifle_m60
    weapon_melee
    weapon_chainsaw
    weapon_smg_mp5
    weapon_rifle_sg552
    weapon_sniper_scout
    weapon_sniper_awp
    ```

- - - -
# 中文說明
限制每個武器可以拿取的數量，超過就不能拿取

* 原理
    * 當要撿起武器時，計算隊友之中已經拿取的數量，超過便不能撿起武器 
    * 適用真人玩家與Bot

* 功能
	1. 設置每一個武器限制，也可以不設置

* <details><summary>指令中文介紹 (點我展開)</summary>

    * **Add a weapon limit**
        ```php
        l4d_wlimits_add <限制數量> <如果不能撿起限制的武器是否給彈藥> <武器名稱>
        ```
</details>


* 注意事項中文說明
    * 打開 cfg/server.cfg 文件並寫下想要限制的武器，譬如
    ```php
    l4d_wlimits_add 3 1 weapon_smg weapon_smg_silenced
    l4d_wlimits_add 3 1 weapon_shotgun_chrome weapon_pumpshotgun
    l4d_wlimits_add 1 0 weapon_pistol_magnum
    l4d_wlimits_add 0 0 weapon_melee
    l4d_wlimits_add 0 1 weapon_hunting_rifle
    ```

    * 所有武器名稱
    ```php
    手槍 => weapon_pistol
    麥格農手槍 => weapon_pistol_magnum
    木製單發散彈槍 => weapon_pumpshotgun
    鐵製單發散彈槍 => weapon_shotgun_chrome
    Uzi烏茲衝鋒槍 => weapon_smg
    消音衝鋒槍 => weapon_smg_silenced
    自動連發散彈槍 => weapon_autoshotgun
    自動連發戰鬥散彈槍=> weapon_shotgun_spas
    獵槍 => weapon_hunting_rifle
    軍用狙擊槍 => weapon_sniper_military
    Uzi烏茲衝鋒槍 => weapon_smg
    M16步槍 => weapon_rifle
    三連發步槍 => weapon_rifle_desert
    AK47 => weapon_rifle_ak47
    榴彈發射器 => weapon_grenade_launcher
    M60機關槍 => weapon_rifle_m60
    近戰武器 => weapon_melee
    電鋸 => weapon_chainsaw
    CSS-MP5衝鋒槍 => weapon_smg_mp5
    CSS-SG552步槍 => weapon_rifle_sg552
    CSS-Scout狙擊槍 => weapon_sniper_scout
    CSS-AWP狙擊槍 => weapon_sniper_awp
    ```
