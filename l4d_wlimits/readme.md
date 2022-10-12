
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

- - - -
# 中文說明
限制每個武器可以拿取的數量，超過就不能拿取

* 原理
    * 當要撿起武器時，計算隊友之中已經拿取的數量，超過便不能撿起武器 

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
