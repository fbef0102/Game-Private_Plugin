# Description | 內容
Allows shoving to stagger or punch survivors, tank, witch, special infected, common infected and hittable

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/-i3DtKzqjso)

* <details><summary>Image | 圖示</summary>

	* Shove Power
    <br/>![l4d2_survivor_shove_power_1](image/l4d2_survivor_shove_power_1.gif)
    <br/>![l4d2_survivor_shove_power_2](image/l4d2_survivor_shove_power_2.gif)
    <br/>![l4d2_survivor_shove_power_3](image/l4d2_survivor_shove_power_3.gif)
    <br/>![l4d2_survivor_shove_power_4](image/l4d2_survivor_shove_power_4.gif)
    <br/>![l4d2_survivor_shove_power_5](image/l4d2_survivor_shove_power_5.gif)
</details>

* Apply to | 適用於
    ```
    L4D2
    ```

* <details><summary>Changelog | 版本日誌</summary>

    * 1.0h (2023-6-21)
	    * Initial Release

    * 1.15
	    * [Original Plugin By Silvers](https://forums.alliedmods.net/showthread.php?t=318694)
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)

* <details><summary>ConVar | 指令</summary>

    * cfg/sourcemod/l4d2_survivor_shove_power.cfg
        ```php
        // 0=Plugin off, 1=Plugin on.
        l4d2_survivor_shove_power_allow "1"

        // If 1, Allows shoving to stagger chargers
        l4d2_survivor_shove_power_charger_enable "1"

        // If 1, Allows shoving to punch common infected
        l4d2_survivor_shove_power_common_enable "1"

        // Player with these flag have access to the shove power (Empty=Everyone, -1=No one)
        l4d2_survivor_shove_power_flags "z"

        // If 1, Allows shoving to punch hittable car
        l4d2_survivor_shove_power_hittable_enable "1"

        // Punch hittable car force.
        l4d2_survivor_shove_power_hittable_power "800.0"

        // 1=Shove, 2=Shove+Use, 3=Shove+ hift. Which keys to use shove power.
        l4d2_survivor_shove_power_keys "1"

        // Turn on the plugin in these game modes, separate by commas (no spaces). (Empty = all).
        l4d2_survivor_shove_power_modes ""

        // Turn off the plugin in these game modes, separate by commas (no spaces). (Empty = none).
        l4d2_survivor_shove_power_modes_off ""

        // Turn on the plugin in these game modes. 0=All, 1=Coop, 2=Survival, 4=Versus, 8=Scavenge. Add numbers together.
        l4d2_survivor_shove_power_modes_tog "0"

        // which zombie class can be punched by shoving? 
        // 0=None, 1=Smoker, =Boomer, 4=Hunter, 8=Spitter, 16=Jockey, 32=Charger. Add numbers together. (63=All)
        l4d2_survivor_shove_power_si_flag "63"

        // If 1, Allows shoving to stagger tanks
        l4d2_survivor_shove_power_tank_enable "1"

        // Allows shoving to (0=Disable)
        // 1=Punch survivors, like they were hit by a Tank
        // 2=Stagger survivors
        // 3=Flings survivor, like they were hit by a Charger
        l4d2_survivor_shove_power_teammate_type "1"

        // If 1, Allows shoving to stagger witch
        l4d2_survivor_shove_power_witch_enable "1"

        ```
</details>

* <details><summary>Command | 命令</summary>
	
	* **Turn on/off shove power ability.**
		```php
		sm_sshove
		```
</details>

- - - -
# 中文說明
倖存者的拳頭可以推開Tank,、Witch、Charger、車子，還能拍飛特感、小殭屍、隊友

* 原理
    * 管理員當倖存者時，右鍵推有特殊效果
        * 推隊友時，隊友被擊飛或震退 (不會受傷)
        * 推Tank時，Tank被震退
        * 推Witch時，Witch被震退
        * 推Charger時，Charger被震退
        * 推特感時，特感被拍飛並死亡
        * 推小殭屍時，小殭屍死亡
        * 推車子時，車子被擊飛
    * 管理員輸入```!sshove```關掉右鍵推的功能

* 功能
    * 可設置普通玩家也能使用
    * 各項目開關
    * 可設置推車子的力道
