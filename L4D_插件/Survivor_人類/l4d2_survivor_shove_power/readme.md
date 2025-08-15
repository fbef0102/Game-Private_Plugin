# Description | 內容
Allows shoving to stagger or punch survivors, tank, witch, special infected, common infected and hittable

> __Note__ <br/>
This plugin is private, Please contact [me](/#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](/#私人插件列表-private-plugins-list)

* Apply to | 適用於
    ```
    L4D2
    ```

* [Video | 影片展示](https://youtu.be/-i3DtKzqjso)

* <details><summary>Image | 圖示</summary>

    <br/>![l4d2_survivor_shove_power_1](image/l4d2_survivor_shove_power_1.gif)
    <br/>![l4d2_survivor_shove_power_2](image/l4d2_survivor_shove_power_2.gif)
    <br/>![l4d2_survivor_shove_power_3](image/l4d2_survivor_shove_power_3.gif)
    <br/>![l4d2_survivor_shove_power_4](image/l4d2_survivor_shove_power_4.gif)
    <br/>![l4d2_survivor_shove_power_5](image/l4d2_survivor_shove_power_5.gif)
</details>

* <details><summary>How does it work?</summary>

    * Type ```!sshove``` to enable shove power ability
        * Shove back teammate (no damage)
        * Shove Tank
        * Shove Witch
        * Shove Charger, send flying
        * Shove Special Infected, send flying
        * Shove common infected, instantly kill
        * Shove car, send flying
</details>

* Require | 必要安裝
    1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
    2. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)

* <details><summary>ConVar | 指令</summary>

    * cfg/sourcemod/l4d2_survivor_shove_power.cfg
        ```php
        // 0=Plugin off, 1=Plugin on.
        l4d2_survivor_shove_power_allow "1"

        // Turn on the plugin in these game modes, separate by commas (no spaces). (Empty = all).
        l4d2_survivor_shove_power_modes ""

        // Turn off the plugin in these game modes, separate by commas (no spaces). (Empty = none).
        l4d2_survivor_shove_power_modes_off ""

        // Turn on the plugin in these game modes. 0=All, 1=Coop, 2=Survival, 4=Versus, 8=Scavenge. Add numbers together.
        l4d2_survivor_shove_power_modes_tog "0"

        // Player with these can type !sshove to enable the shove power (Empty=Everyone, -1=No one)
        l4d2_survivor_shove_power_flags ""

        // 1=Shove, 2=Shove+Use, 3=Shove+Shift. Which keys to use shove power.
        l4d2_survivor_shove_power_keys "1"

        // Allows shoving to (0=Disable)
        // 1=Punch survivors, like they were hit by a Tank
        // 2=Stagger survivors
        // 3=Flings survivor, like they were hit by a Charger
        l4d2_survivor_shove_power_teammate_type "0"

        // If 1, Allows shoving to stagger chargers
        l4d2_survivor_shove_power_charger_enable "1"

        // If 1, Allows shoving to stagger tanks
        l4d2_survivor_shove_power_tank_enable "1"

        // If 1, Allows shoving to stagger witch
        l4d2_survivor_shove_power_witch_enable "1"

        // If 1, Allows shoving to punch common infected
        l4d2_survivor_shove_power_common_enable "0"

        // If 1, Allows shoving to punch hittable car
        l4d2_survivor_shove_power_hittable_enable "1"

        // Punch hittable car force.
        l4d2_survivor_shove_power_hittable_power "800.0"

        // which zombie class can be punched by shoving? 
        // 0=None, 1=Smoker, =Boomer, 4=Hunter, 8=Spitter, 16=Jockey, 32=Charger. Add numbers together. (63=All)
        l4d2_survivor_shove_power_si_flag "63"

        // How many time each player can shove in one round (0=No limit)
        l4d2_survivor_shove_power_round_limit "5"
        ```
</details>

* <details><summary>Command | 命令</summary>
    
    * **Turn on/off shove power ability.**
        ```php
        sm_sshove
        ```
</details>

* <details><summary>Changelog | 版本日誌</summary>

    * 1.1h (2025-1-22)
        * Add round limit
        * Update cvars

    * 1.0h (2023-6-21)
        * Remake code
        * Update cvars

    * Original
        * [Original Plugin](https://forums.alliedmods.net/showthread.php?t=318694)
</details>

- - - -
# 中文說明
倖存者的拳頭可以推開Tank、Witch、Charger、車子，還能拍飛特感、小殭屍、隊友

* 原理
    * 倖存者輸入```!sshove```，右鍵推有特殊效果
        * 推隊友時，隊友被擊飛或震退 (不會受傷)
        * 推Tank時，Tank被震退
        * 推Witch時，Witch被震退
        * 推Charger時，Charger被震退
        * 推特感時，特感被拍飛並死亡
        * 推小殭屍時，小殭屍死亡
        * 推車子時，車子被擊飛

* <details><summary>指令中文介紹 (點我展開)</summary>

    * cfg/sourcemod/l4d2_survivor_shove_power.cfg
        ```php
        // 0=關閉插件, 1=啟動插件
        l4d2_survivor_shove_power_allow "1"

        // 什麼模式下啟動此插件, 逗號區隔 (無空白). (留白 = 所有模式)
        l4d2_survivor_shove_power_modes ""

        // 什麼模式下關閉此插件, 逗號區隔 (無空白). (留白 = 無)
        l4d2_survivor_shove_power_modes_off ""

        // 什麼模式下啟動此插件. 0=所有模式, 1=戰役, 2=生存, 4=對抗, 8=清道夫. 請將數字相加起來
        l4d2_survivor_shove_power_modes_tog "0"

        // 擁有這些權限的玩家，可輸入!sshove 啟用右鍵推特殊效果 (留白 = 任何人都能, -1: 無人)
        l4d2_survivor_shove_power_flags ""

        // 什麼按鍵才能使用特殊效果 1=右鍵, 2=右鍵+E, 3=右鍵+shift.
        l4d2_survivor_shove_power_keys "1"

        // 推開倖存者隊友會
        // 1=拍飛，就像被tank拍飛一樣
        // 2=震退
        // 3=撞飛，就像被Charger撞飛
        // =無效果
        l4d2_survivor_shove_power_teammate_type "1"

        // 為1時，可以右鍵推開 Charger
        l4d2_survivor_shove_power_charger_enable "1"

        // 為1時，可以右鍵推開 tanks
        l4d2_survivor_shove_power_tank_enable "1"

        // 為1時，可以右鍵推開 witch
        l4d2_survivor_shove_power_witch_enable "1"

        // 為1時，可以右鍵拍飛 小殭屍 (就像被Tank打一樣)
        l4d2_survivor_shove_power_common_enable "1"

        // 為1時，可以右鍵拍飛 車子 (就像被Tank打一樣)
        l4d2_survivor_shove_power_hittable_enable "1"

        // 鍵拍飛車子的力道.
        l4d2_survivor_shove_power_hittable_power "800.0"

        // 哪些特感會被拍飛? (就像被Tank打一樣)
        // 0=無, 1=Smoker, =Boomer, 4=Hunter, 8=Spitter, 16=Jockey, 32=Charger. 請將數字相加起來. (63=全部)
        l4d2_survivor_shove_power_si_flag "63"

        // 每個玩家一回合內可以使用右鍵特殊效果的次數，玩家使用一次效果後必須自己手動輸入!sshove
        // 0=無限制，玩家不需要重複輸入!sshove
        l4d2_survivor_shove_power_round_limit "5"  
        ```
</details>
