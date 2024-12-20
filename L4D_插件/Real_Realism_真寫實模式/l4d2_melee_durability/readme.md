# Description | 內容
Every melee weapons have durability, once run out durability, the melee weapon will be removed

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/8jsq8NT08S8)

* Image | 圖示
    <br/>![l4d2_melee_durability_1](image/l4d2_melee_durability_1.gif)
    <br/>![l4d2_melee_durability_2](image/l4d2_melee_durability_2.gif)
    <br/>![l4d2_melee_durability_3](image/l4d2_melee_durability_3.jpg)

* <details><summary>How does it work?</summary>

    * Every melee weapons have durability
    * Cost durability when melee S.I., Witch, infected, objects.....
    * The melee weapon will be removed once run out durability, and give pistol
</details>

* Require | 必要安裝
    1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
    2. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)

* <details><summary>ConVar | 指令</summary>

    * cfg/sourcemod/l4d2_melee_durability.cfg
        ```php
        // 0=Plugin off, 1=Plugin on.
        l4d2_melee_durability_enable "1"

        // Changes how message displays. (0: Disable, 1:In chat, 2: In Hint Box, 3: In center text)
        l4d2_melee_durability_announce_type "2"

        // 0=Display durability percent number, 1=Display durability bar
        l4d2_melee_durability_show_bar "1"

        // How much durability does it cost when melee Tank. (0: No Cost)
        l4d2_melee_durability_tank_cost "200"

        // How much durability does it cost when melee Witch. (0: No Cost)
        l4d2_melee_durability_witch_cost "150"

        // How much durability does it cost when melee Common Infected. (0: No Cost)
        l4d2_melee_durability_common_cost "50"

        // How much durability does it cost when melee Survivor. (0: No Cost)
        l4d2_melee_durability_survivor_cost "10"

        // How much durability does it cost when melee Special Infected. (0: No Cost)
        l4d2_melee_durability_infected_cost "100"

        // How much durability does it cost when melee objects. (doors, boxes, items, chairs, tables, etc.)
        l4d2_melee_durability_entity_cost "5"

        // Secondary weapon given to survivor after run out of melee durability. (1: Pistol, 2: Dual Pistol, 3: Magnum)
        l4d2_melee_durability_secondary_weapon "1"

        // 0=Permanent durability, durability of Baseball Bat.
        l4d2_melee_durability_baseball_bat "2800"

        // 0=Permanent durability, durability of Cricket Bat.
        l4d2_melee_durability_cricket_bat "3000"

        // 0=Permanent durability, durability of Crowbar.
        l4d2_melee_durability_crowbar "3300"

        // 0=Permanent durability, durability of Electric Guitar.
        l4d2_melee_durability_electric_guitar "2900"

        // 0=Permanent durability, durability of Fire Axe.
        l4d2_melee_durability_fireaxe "3500"

        // 0=Permanent durability, durability of Frying Pan.
        l4d2_melee_durability_frying_pan "2500"

        // 0=Permanent durability, durability of Golf Club.
        l4d2_melee_durability_golfclub "3000"

        // 0=Permanent durability, durability of Katana.
        l4d2_melee_durability_katana "3700"

        // 0=Permanent durability, durability of Knife.
        l4d2_melee_durability_knife "3400"

        // 0=Permanent durability, durability of Machete.
        l4d2_melee_durability_machete "4000"

        // 0=Permanent durability, durability of Pitchfork.
        l4d2_melee_durability_pitchfork "3100"

        // 0=Permanent durability, durability of shovel.
        l4d2_melee_durability_shovel "2900"

        // 0=Permanent durability, durability of Tonfa.
        l4d2_melee_durability_tonfa "2600"

        // 0=Permanent durability, durability of unknown melee weapon (Custom Third Party Melee).
        l4d2_melee_durability_unknown "3000"
        ```
</details>

* <details><summary>Command | 命令</summary>
    
    None
</details>

* <details><summary>API | 串接</summary>

    * [l4d2_melee_durability.inc](scripting\include\l4d2_melee_durability.inc)
        ```php
        library name: l4d2_melee_durability
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

* <details><summary>Changelog | 版本日誌</summary>

    * v1.3 (2024-7-9)
        * Add API
        * Update Cvars
        * Update Translations

    * v1.2 (2023-6-25)
        * In coop/realism mode, keep melee durability to next map.

    * v1.1 (2023-3-13)
        * Translation Support

    * v1.0 (2022-11-06)
        * Initial Release
</details>

- - - -
# 中文說明
每個近戰武器都有耐久值，揮砍殭屍會消耗耐力，當耐久值耗盡時移除近戰武器

* 原理
    * 地圖上每個近戰武器都有各自的耐久值，只要使用近戰揮砍到僵屍或者物件，將會消耗耐力
    * 耐力消耗之後，移除近戰武器，並自動給予手槍
    * 在戰役/寫實模式下，近戰武器的耐力值會持續保留到下一關

* 用意在哪?
    * 削弱遊戲的近戰武器，惡靈勢力的近戰武器非常強大
        * 被殭屍包圍可以一刀砍一圈解圍
        * 一刀砍死特感 (Charger 兩刀)
        * 四刀砍死Witch
        * 20刀砍死6000HP的Tank 
        * 一刀砍死非常難打死的吉米賽車手與墮落生還者
        * 永久使用，沒有限制與消耗體力
    * 逼迫玩家慎用近戰武器或切換其他武器，提升這款末日生存遊戲的寫實難度

* <details><summary>指令中文介紹 (點我展開)</summary>

    * cfg/sourcemod/l4d2_melee_durability.cfg
        ```php
        // 0=關閉插件, 1=開啟插件
        l4d2_melee_durability_enable "1"

        // 顯示耐久度的位置. (0: 關閉, 1: 聊天窗, 2: 螢幕下方黑底白字窗, 3: 螢幕正中間)
        l4d2_melee_durability_announce_type "2"

        // 0=用實際百分比數值顯示耐久度, 1=用圖案符號顯示耐久度
        l4d2_melee_durability_show_bar "1"

        // 揮砍Tank所消耗的耐力數值 (0: 無消耗)
        l4d2_melee_durability_tank_cost "200"

        // 揮砍Witch所消耗的耐力數值 (0: 無消耗)
        l4d2_melee_durability_witch_cost "150"

        // 揮砍普通感染者所消耗的耐力數值 (0: 無消耗)
        l4d2_melee_durability_common_cost "50"

        // 揮砍倖存者隊友所消耗的耐力數值 (0: 無消耗)
        l4d2_melee_durability_survivor_cost "10"

        // 揮砍特感所消耗的耐力數值 (0: 無消耗)
        l4d2_melee_durability_infected_cost "100"

        // 揮砍物件所消耗的耐力數值 (門, 箱子, 物品, 椅子, 桌子 等等...)
        l4d2_melee_durability_entity_cost "5"

        // 當耐力值消耗光時給予的武器. (1: 手槍, 2: 雙槍, 3: 麥格農手槍)
        l4d2_melee_durability_secondary_weapon "1"

        // 0=永久耐力, 球棒的耐力值
        l4d2_melee_durability_baseball_bat "2800"

        // 0=永久耐力, 板球拍的耐力值
        l4d2_melee_durability_cricket_bat "3000"

        // 0=永久耐力, 鐵撬的耐力值
        l4d2_melee_durability_crowbar "3300"

        // 0=永久耐力, 電吉他的耐力值
        l4d2_melee_durability_electric_guitar "2900"

        // 0=永久耐力, 斧頭的耐力值
        l4d2_melee_durability_fireaxe "3500"

        // 0=永久耐力, 平底鍋的耐力值
        l4d2_melee_durability_frying_pan "2500"

        // 0=永久耐力, 高爾夫球桿的耐力值
        l4d2_melee_durability_golfclub "3000"

        // 0=永久耐力, 武士刀的耐力值
        l4d2_melee_durability_katana "3700"

        // 0=永久耐力, 小刀的耐力值
        l4d2_melee_durability_knife "3400"

        // 0=永久耐力, 開山刀的耐力值
        l4d2_melee_durability_machete "4000"

        // 0=永久耐力, 草叉的耐力值
        l4d2_melee_durability_pitchfork "3100"

        // 0=永久耐力, 鐵鏟的耐力值
        l4d2_melee_durability_shovel "2900"

        // 0=永久耐力, 警棍的耐力值
        l4d2_melee_durability_tonfa "2600"

        // 0=永久耐力, 未知模型的近戰武器的耐力值 (三方戰役自製的近戰武器).
        l4d2_melee_durability_unknown "3000"
        ```
</details>




