# Description | 內容
Block Tanks/S.I/Survivors stumble by Boomer/Witch/Charger/Propane Tank/Pipebomb/....

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Video | 影片展示
<br/>None

* <details><summary>Image | 圖示</summary>

    * Before (裝此插件之前)
    <br/>![l4d_stagger_block_1](image/l4d_stagger_block_1.gif)
    <br/>![l4d_stagger_block_2](image/l4d_stagger_block_2.gif)

    * After (裝此插件之後)
    <br/>![l4d_stagger_block_3](image/l4d_stagger_block_3.gif)
    <br/>![l4d_stagger_block_4](image/l4d_stagger_block_4.gif)
</details>

* <details><summary>How does it work?</summary>

	* Block Tanks + S.I + Survivors stagger by
        * Boomer explosion
        * Witch running and stagget anyone that blocks her way 
        * When a Charger impacts a wall or object after charging, but not when carrying a Survivor
        * PipeBomb、OxyTank、PropTank、FuelBarrel.... explosion
</details>

* Require | 必要安裝
    1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)

* <details><summary>ConVar | 指令</summary>

    * cfg/sourcemod/l4d_stagger_block.cfg
        ```php
        // 0=Plugin off, 1=Plugin on.
        l4d_stagger_block_enable "1"

        // Prevent Smoker stagger by 1=Boomer, 2=Witch, 4=Charger, 8=PipeBomb, 16=OxyTank, 32=PropTank, 64=FuelBarrel, 128=GasPump, 256=Other Object. Add numbers together (511=All, 0=Off)
        l4d_stagger_block_smoker_flag "1"

        // Prevent Boomer stagger by 1=Boomer, 2=Witch, 4=Charger, 8=PipeBomb, 16=OxyTank, 32=PropTank, 64=FuelBarrel, 128=GasPump, 256=Other Object. Add numbers together (511=All, 0=Off)
        l4d_stagger_block_boomer_flag "1"

        // Prevent Hunter stagger by 1=Boomer, 2=Witch, 4=Charger, 8=PipeBomb, 16=OxyTank, 32=PropTank, 64=FuelBarrel, 128=GasPump, 256=Other Object. Add numbers together (511=All, 0=Off)
        l4d_stagger_block_hunter_flag "1"

        // Prevent Spitter stagger by 1=Boomer, 2=Witch, 4=Charger, 8=PipeBomb, 16=OxyTank, 32=PropTank, 64=FuelBarrel, 128=GasPump, 256=Other Object. Add numbers together (511=All, 0=Off)
        l4d_stagger_block_spitter_flag "1"

        // Prevent Jockey stagger by 1=Boomer, 2=Witch, 4=Charger, 8=PipeBomb, 16=OxyTank, 32=PropTank, 64=FuelBarrel, 128=GasPump, 256=Other Object. Add numbers together (511=All, 0=Off)
        l4d_stagger_block_jockey_flag "1"

        // Prevent Charger stagger by 1=Boomer, 2=Witch, 4=Charger, 8=PipeBomb, 16=OxyTank, 32=PropTank, 64=FuelBarrel, 128=GasPump, 256=Other Object. Add numbers together (511=All, 0=Off)
        l4d_stagger_block_charger_flag "1"

        // Prevent Tank stagger by 1=Boomer, 2=Witch, 4=Charger, 8=PipeBomb, 16=OxyTank, 32=PropTank, 64=FuelBarrel, 128=GasPump, 256=Other Object. Add numbers together (511=All, 0=Off)
        l4d_stagger_block_tank_flag "1"

        // Prevent Survivor stagger by 1=Boomer, 2=Witch, 4=Charger, 8=PipeBomb, 16=OxyTank, 32=PropTank, 64=FuelBarrel, 128=GasPump, 256=Other Object. Add numbers together (511=All, 0=Off)
        l4d_stagger_block_survivor_flag "511"
        ```
</details>

* <details><summary>Command | 命令</summary>

    None
</details>

* Apply to | 適用於
    ```
    L4D1
    L4D2
    ```

* <details><summary>Changelog | 版本日誌</summary>

    * v1.0 (2023-1-13)
        * Initial Release
</details>

- - - -
# 中文說明
Tank/特感/人類 不會被Boomer/瓦斯桶/Witch/Charger/... 波及而硬直震退

* 原理
  * 以下情況不會硬直震退 Tank + 特感 + 人類
    1. Boomer爆炸
    2. Witch接觸
    3. Charger自撞到牆壁
    4. 土製炸彈、瓦斯桶、氧氣罐、燃油桶、加油站...爆炸

* <details><summary>指令中文說明(點我展開)</summary>

    * cfg/sourcemod/l4d_stagger_block.cfg
        ```php
        // 0=關閉插件, 1=啟動插件
        l4d_stagger_block_enable "1"

        // Smoker不會被以下情況硬質震退 1=Boomer, 2=Witch, 4=Charger, 8=土製炸彈, 16=氧氣罐, 32=瓦斯桶, 64=燃油桶, 128=加油站, 256=其他物件. 數字相加 (0=關閉, 511=全部)
        l4d_stagger_block_smoker_flag "1"

        // Boomer不會被以下情況硬質震退 1=Boomer, 2=Witch, 4=Charger, 8=土製炸彈, 16=氧氣罐, 32=瓦斯桶, 64=燃油桶, 128=加油站, 256=其他物件. 數字相加 (0=關閉, 511=全部)
        l4d_stagger_block_boomer_flag "1"

        // Hunter不會被以下情況硬質震退 1=Boomer, 2=Witch, 4=Charger, 8=土製炸彈, 16=氧氣罐, 32=瓦斯桶, 64=燃油桶, 128=加油站, 256=其他物件. 數字相加 (0=關閉, 511=全部)
        l4d_stagger_block_hunter_flag "1"

        // Spitter不會被以下情況硬質震退 1=Boomer, 2=Witch, 4=Charger, 8=土製炸彈, 16=氧氣罐, 32=瓦斯桶, 64=燃油桶, 128=加油站, 256=其他物件. 數字相加 (0=關閉, 511=全部)
        l4d_stagger_block_spitter_flag "1"

        // Jockey不會被以下情況硬質震退 1=Boomer, 2=Witch, 4=Charger, 8=土製炸彈, 16=氧氣罐, 32=瓦斯桶, 64=燃油桶, 128=加油站, 256=其他物件. 數字相加 (0=關閉, 511=全部)
        l4d_stagger_block_jockey_flag "1"

        // Charger不會被以下情況硬質震退 1=Boomer, 2=Witch, 4=Charger, 8=土製炸彈, 16=氧氣罐, 32=瓦斯桶, 64=燃油桶, 128=加油站, 256=其他物件. 數字相加 (0=關閉, 511=全部)
        l4d_stagger_block_charger_flag "1"

        // Tank不會被以下情況硬質震退 1=Boomer, 2=Witch, 4=Charger, 8=土製炸彈, 16=氧氣罐, 32=瓦斯桶, 64=燃油桶, 128=加油站, 256=其他物件. 數字相加 (0=關閉, 511=全部)
        l4d_stagger_block_tank_flag "1"

        // Survivor不會被以下情況硬質震退 1=Boomer, 2=Witch, 4=Charger, 8=土製炸彈, 16=氧氣罐, 32=瓦斯桶, 64=燃油桶, 128=加油站, 256=其他物件. 數字相加 (0=關閉, 511=全部)
        l4d_stagger_block_survivor_flag "511"
        ```
        ```
</details>