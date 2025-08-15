# Description | 內容
Set up weapon slots before survival starts

> __Note__ <br/>
This plugin is private, Please contact [me](/#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](/#私人插件列表-private-plugins-list)

* Apply to | 適用於
    ```
    L4D1 Survival
    L4D2 Survival
    ```

* [Video | 影片展示](https://youtu.be/P3Y1ExRmBIU)

* Image
    <br/>![l4d_survival_setup_1](image/l4d_survival_setup_1.jpg)
    <br/>![l4d_survival_setup_2](image/l4d_survival_setup_2.jpg)

* <details><summary>How does it work?</summary>

    * In survival mode, type ```!setup``` -> aim the weapon or item on the map -> save -> auto pickup or equip on next survival round start
    * All setup settings are saved to data file, no need to worry server restart or player disconnect
    * Can't upgrade laser if there is no laser sight on the map
    * [data/l4d_survival_setup/l4d_survival_setup_player.cfg](data/l4d_survival_setup/l4d_survival_setup_player.cfg): Save and record players' weapons and items setup
        * 🟥 Don't modify unless you know what you are doing
    * [data/l4d_survival_setup/l4d_survival_setup_map.cfg](data/l4d_survival_setup/l4d_survival_setup_map.cfg): Enable/disable or laser blocked in some maps
        * You can modify this file
</details>

* Require | 必要安裝
    1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
    2. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)
    3. [[INC] l4d2_weapons](/L4D_插件/Require_檔案/scripting/include/l4d2_weapons.inc)

* <details><summary>ConVar | 指令</summary>

    * cfg/sourcemod/l4d_survival_setup.cfg
        ```php
        // 0=Plugin off, 1=Plugin on.
        l4d_survival_setup_enable "1"

        // Changes how message displays. (0: Disable, 1:In chat, 2: In Hint Box, 3: In center text)
        l4d_survival_setup_announce_type "1"
        ```
</details>

* <details><summary>Command | 命令</summary>
    
    * **Open Setup menu for survival mod**
        ```php
        sm_setup
        ```
</details>

* Translation Support | 支援翻譯
    ```
    translations/l4d_survival_setup.phrases.txt
    ```

* <details><summary>Related Plugin | 相關插件</summary>

    1. [l4d_survival_GasConfig](/L4D_插件/Survival_生存模式/l4d_survival_GasConfig): Save and load gas configs
        > 生存模式開始之前設定汽油桶位置，下次回合開始之時汽油桶自動擺放位置
</details>

* <details><summary>Changelog | 版本日誌</summary>

    * v1.3 (2025-4-11)
        * Update data file
        * Use OnClientPostAdminCheck to get data safely
        * Optimize code to save data

    * v1.2 (2024-9-19)
        * Update Translation
        * Fixed not working on some entities

    * v1.1 (2023-2-4)
        * Translation Support
        * Disable laser if there is no any laser sight on the map

    * v1.0 (2022-11-09)
        * Initial Release
</details>

- - - -
# 中文說明
生存模式開始之前設定自己的生存開場裝備，下次回合開始之時會自動裝備所設定的武器與物品

* 圖示
    <br/>![l4d_survival_setup_3](image/l4d_survival_setup_3.jpg)
    <br/>![l4d_survival_setup_4](image/l4d_survival_setup_4.jpg)

* 原理
    * 如何使用?
        1. 輸入```!setup```打開介面 => "設定裝備"
        2. 尋找地圖上的武器或物品 => 準心指向 => 設定裝備
        3. 下次回合開始時，自動裝備，無須走過去拿取
    * 所有設定會自動保存到文件中，所以離開伺服器或伺服器重啟都還會保存玩家數據
    * 沒有紅外線升級裝置的地圖，無法設定雷射紅外線
    * [data/l4d_survival_setup/l4d_survival_setup_player.cfg](data/l4d_survival_setup/l4d_survival_setup_player.cfg): 儲存與紀錄玩家的武器與物品設定
        * 🟥 沒事別改動文件除非你知道這是在幹嗎
    * [data/l4d_survival_setup/l4d_survival_setup_map.cfg](data/l4d_survival_setup/l4d_survival_setup_map.cfg): 在某些地圖啟用/關閉插件，或是限制雷射
        * 可以改這文件

* 用意在哪?
    * 節省生存模式拿取武器或物品的時間

* <details><summary>ConVar | 指令</summary>

    * cfg/sourcemod/l4d_survival_setup.cfg
        ```php
        // 0=Plugin off, 1=Plugin on.
        l4d_survival_setup_enable "1"
        
        // Changes how message displays. (0: Disable, 1:In chat, 2: In Hint Box, 3: In center text)
        l4d_survival_setup_announce_type "1"
        ```
</details>

