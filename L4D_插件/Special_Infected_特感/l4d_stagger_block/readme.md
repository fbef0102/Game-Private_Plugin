# Description | 內容
Block Tanks/S.I/Survivors stumble by Boomer/Witch/Charger/Propane Tank/Pipebomb/survivor shove....

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Apply to | 適用於
    ```
    L4D1
    L4D2
    ```

* Image | 圖示
    | Before (裝此插件之前)  			| After (裝此插件之後) |
    | -------------|:-----------------:|
    | ![l4d_stagger_block_1](image/l4d_stagger_block_1.gif)|![l4d_stagger_block_5](image/l4d_stagger_block_5.gif)|
    | ![l4d_stagger_block_2](image/l4d_stagger_block_2.gif)|![l4d_stagger_block_5](image/l4d_stagger_block_6.gif)|
    | ![l4d_stagger_block_3](image/l4d_stagger_block_3.gif)|![l4d_stagger_block_5](image/l4d_stagger_block_7.gif)|
    | ![l4d_stagger_block_4](image/l4d_stagger_block_4.gif)|![l4d_stagger_block_5](image/l4d_stagger_block_8.gif)|
    | ![l4d_stagger_block_9](image/l4d_stagger_block_9.gif)|![l4d_stagger_block_10](image/l4d_stagger_block_10.gif)|

* <details><summary>How does it work?</summary>

    * Block Tanks + S.I + Survivors stagger by
        * Boomer explosion
        * Witch running and stagget anyone that blocks her way 
        * When a Charger impacts a wall or object after charging, but not when carrying a Survivor
        * PipeBomb、OxyTank、PropTank、FuelBarrel.... explosion
        * Grenade Launcher
        * Explosive Bullet
        * Shove by survivor m2
</details>

* Require | 必要安裝
    1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)

* <details><summary>ConVar | 指令</summary>

    * cfg/sourcemod/l4d_stagger_block.cfg
        ```php
        // 0=Plugin off, 1=Plugin on.
        l4d_stagger_block_enable "1"

        // Prevent Smoker stagger by 1=Boomer, 2=Witch, 4=Charger, 8=Grenade Launcher, 16=Explosive Bullet, 32=PipeBomb, 64=OxyTank, 128=PropTank, 256=FuelBarrel, 512=Other Object, 1024=Survivors shove. Add numbers together (2047=All, 0=Off)
        l4d_stagger_block_smoker_flag "2047"

        // Prevent Boomer stagger by 1=Boomer, 2=Witch, 4=Charger, 8=Grenade Launcher, 16=Explosive Bullet, 32=PipeBomb, 64=OxyTank, 128=PropTank, 256=FuelBarrel, 512=Other Object, 1024=Survivors shove. Add numbers together (2047=All, 0=Off)
        l4d_stagger_block_boomer_flag "2047"

        // Prevent Hunter stagger by 1=Boomer, 2=Witch, 4=Charger, 8=Grenade Launcher, 16=Explosive Bullet, 32=PipeBomb, 64=OxyTank, 128=PropTank, 256=FuelBarrel, 512=Other Object, 1024=Survivors shove. Add numbers together (2047=All, 0=Off)
        l4d_stagger_block_hunter_flag "2047"

        // Prevent Spitter stagger by 1=Boomer, 2=Witch, 4=Charger, 8=Grenade Launcher, 16=Explosive Bullet, 32=PipeBomb, 64=OxyTank, 128=PropTank, 256=FuelBarrel, 512=Other Object, 1024=Survivors shove. Add numbers together (2047=All, 0=Off)
        l4d_stagger_block_spitter_flag "2047"

        // Prevent Jockey stagger by 1=Boomer, 2=Witch, 4=Charger, 8=Grenade Launcher, 16=Explosive Bullet, 32=PipeBomb, 64=OxyTank, 128=PropTank, 256=FuelBarrel, 512=Other Object, 1024=Survivors shove. Add numbers together (2047=All, 0=Off)
        l4d_stagger_block_jockey_flag "2047"

        // Prevent Charger stagger by 1=Boomer, 2=Witch, 4=Charger, 16=Explosive Bullet, 32=PipeBomb, 64=OxyTank, 128=PropTank, 256=FuelBarrel, 512=Other Object. Add numbers together (1015=All, 0=Off)
        l4d_stagger_block_charger_flag "1015"

        // Prevent Tank stagger by 1=Boomer, 2=Witch, 4=Charger, 32=PipeBomb, 64=OxyTank, 128=PropTank, 256=FuelBarrel, 512=Other Object. Add numbers together (999=All, 0=Off)
        l4d_stagger_block_tank_flag "999"

        // Prevent Survivor stagger by 1=Boomer, 2=Witch, 4=Charger, 32=PipeBomb, 64=OxyTank, 128=PropTank, 256=FuelBarrel, 512=Other Object. Add numbers together (999=All, 0=Off)
        l4d_stagger_block_survivor_flag "999"
        ```
</details>

* <details><summary>Changelog | 版本日誌</summary>

    * v1.2 (2024-11-9)
        * Add block survivor shove 
        * Update cvars

    * v1.1 (2024-1-14)
        * Add Grenade Launcher, Explosive bullet

    * v1.0 (2024-1-13)
        * Initial Release
</details>

- - - -
# 中文說明
Tank/特感/人類 不會被Boomer/瓦斯桶/Witch/Charger/倖存者右鍵... 波及而硬直震退

* 原理
    * 以下情況不會硬直震退 Tank + 特感 + 人類
        1. Boomer爆炸
        2. Witch接觸
        3. Charger自撞到牆壁
        4. 土製炸彈、瓦斯桶、氧氣罐、燃油桶、加油站...爆炸
        5. 榴彈發射器
        6. 高爆彈
        7. 被倖存者右鍵推

* <details><summary>指令中文說明(點我展開)</summary>

    * cfg/sourcemod/l4d_stagger_block.cfg
        ```php
        // 0=關閉插件, 1=啟動插件
        l4d_stagger_block_enable "1"

        // Smoker不會被以下情況硬質震退 1=Boomer, 2=Witch, 4=Charger, 8=榴彈, 16=高爆彈, 32=土製炸彈, 64=氧氣罐, 128=瓦斯桶, 256=燃油桶, 512=其他物件, 1024=被倖存者推. 數字相加 (0=關閉, 2047=全部)
        l4d_stagger_block_smoker_flag "2047"

        // Boomer不會被以下情況硬質震退 1=Boomer, 2=Witch, 4=Charger, 8=榴彈, 16=高爆彈, 32=土製炸彈, 64=氧氣罐, 128=瓦斯桶, 256=燃油桶, 512=其他物件, 1024=被倖存者推. 數字相加 (0=關閉, 2047=全部)
        l4d_stagger_block_boomer_flag "2047"

        // Hunter不會被以下情況硬質震退 1=Boomer, 2=Witch, 4=Charger, 8=榴彈, 16=高爆彈, 32=土製炸彈, 64=氧氣罐, 128=瓦斯桶, 256=燃油桶, 512=其他物件, 1024=被倖存者推. 數字相加 (0=關閉, 2047=全部)
        l4d_stagger_block_hunter_flag "2047"

        // Spitter不會被以下情況硬質震退 1=Boomer, 2=Witch, 4=Charger, 8=榴彈, 16=高爆彈, 32=土製炸彈, 64=氧氣罐, 128=瓦斯桶, 256=燃油桶, 512=其他物件, 1024=被倖存者推. 數字相加 (0=關閉, 2047=全部)
        l4d_stagger_block_spitter_flag "2047"

        // Jockey不會被以下情況硬質震退 1=Boomer, 2=Witch, 4=Charger, 8=榴彈, 16=高爆彈, 32=土製炸彈, 64=氧氣罐, 128=瓦斯桶, 256=燃油桶, 512=其他物件, 1024=被倖存者推. 數字相加 (0=關閉, 2047=全部)
        l4d_stagger_block_jockey_flag "2047"

        // Charger不會被以下情況硬質震退 1=Boomer, 2=Witch, 4=Charger, 16=高爆彈, 32=土製炸彈, 64=氧氣罐, 128=瓦斯桶, 256=燃油桶, 512=其他物件. 數字相加 (0=關閉, 1015=全部)
        l4d_stagger_block_charger_flag "1015"

        // Tank不會被以下情況硬質震退 1=Boomer, 2=Witch, 4=Charger, 32=土製炸彈, 64=氧氣罐, 128=瓦斯桶, 256=燃油桶, 512=其他物件. 數字相加 (0=關閉, 999=全部)
        l4d_stagger_block_tank_flag "999"

        // Survivor不會被以下情況硬質震退 1=Boomer, 2=Witch, 4=Charger, 32=土製炸彈, 64=氧氣罐, 128=瓦斯桶, 256=燃油桶, 512=其他物件. 數字相加 (0=關閉, 999=全部)
        l4d_stagger_block_survivor_flag "999"
        ```
</details>