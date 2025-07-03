# Description | 內容
Admins can use command to see the Lasertag with bullets when player shoots

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Apply to | 適用於
    ```
    L4D1
    L4D2
    ```

* [Video | 影片展示](https://youtu.be/lnb4diFSBj0)

* Image | 圖示
    <br/>![l4d_spec_lasertag_cheat_1](image/l4d_spec_lasertag_cheat_1.jpg)
    <br/>![l4d_spec_lasertag_cheat_2](image/l4d_spec_lasertag_cheat_2.gif)
    <br/>![l4d_spec_lasertag_cheat_3](image/l4d_spec_lasertag_cheat_3.gif)

* <details><summary>How does it work?</summary>

    * Admins type ```!lasercheat``` command -> watch a player in first person view -> You can see the Lasertag with bullets when player shoots
    * The player can not see any bullet lasertag himself, only spectators/observers can see
    * For people who want to watch if player using aimbot
</details>

* Require | 必要安裝
    <br>None

* <details><summary>ConVar | 指令</summary>

    * cfg/sourcemod/l4d_spec_lasertag_cheat.cfg
        ```php
        // 0=Plugin off, 1=Plugin on.
        l4d_spec_lasertag_cheat_enable "1"

        // Players with these flags have access to use command to toggle Lasertag watching cheat. (Empty = Everyone, -1: Nobody)
        l4d_spec_lasertag_cheat_command_flag "z"

        // Enable Lasertag watching cheat for spectators/observers by default? [1-Enable/0-Disable]
        l4d_spec_lasertag_cheat_default_value "0"

        // Display Lasertag when spectators/observers are 1=Free Looking, 2=Third Person Wiew, 4=First Person View, 7=All
        l4d_spec_lasertag_cheat_show_type "6"

        // If 1, Enable LaserTagging for Pistols.
        l4d_spec_lasertag_cheat_pistols "1"

        // If 1, Enable LaserTagging for Rifles.
        l4d_spec_lasertag_cheat_rifles "1"

        // If 1, Enable LaserTagging for Sniper Rifles.
        l4d_spec_lasertag_cheat_snipers "1"

        // If 1, Enable LaserTagging for SMGs.
        l4d_spec_lasertag_cheat_smgs "1"

        // If 1, Enable LaserTagging for Shotguns.
        l4d_spec_lasertag_cheat_shotguns "1"

        // If 1, Enable Lasertagging Random Color for each player.
        l4d_spec_lasertag_cheat_random "1"

        // Lasertagging Color if not random. Three values between 0-255 separated by spaces. RGB Color255 - Red Green Blue.
        l4d_spec_lasertag_cheat_rgb "0 125 255"

        // Transparency (Alpha) of Laser
        l4d_spec_lasertag_cheat_alpha "100"

        // Seconds Laser will remain
        l4d_spec_lasertag_cheat_life "1.50"

        // Width of Laser
        l4d_spec_lasertag_cheat_width "1.0"

        // The distance between Lasertag and player
        l4d_spec_lasertag_cheat_offset "10"

        // If 1, Enable lasertagging for bots.
        l4d_spec_lasertag_cheat_bots "0"
        ```
</details>

* <details><summary>Command | 命令</summary>
    
    * **Toggle Lasertag watching cheat**
        ```php
        sm_lasercheat
        ```
</details>

* <details><summary>Related Plugin | 相關插件</summary>

    1. [l4d2_spectating_cheat](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4d2_spectating_cheat): A spectator can now see the special infected model glows though the wall
        * 旁觀者可以看到特感的光圈，方便旁觀者觀賞
    2. [l4d_flashlight_speconly](https://github.com/fbef0102/Game-Private_Plugin/tree/main/L4D_插件/Spectator_%E6%97%81%E8%A7%80%E8%80%85/l4d_flashlight_speconly): Attaches an extra flashlight to spectators and dead survivors.
        * 給死亡玩家或旁觀者手電筒，照亮地圖
</details>

* <details><summary>Changelog | 版本日誌</summary>

    * v1.1 (2024-8-13)
        * Fixed (Exception reported: No TempEntity call is in progress)

    * v1.0 (2024-7-13)
        * Initial Release
</details>

- - - -
# 中文說明
管理員輸入指令能看到玩家的子彈光線軌跡

* 原理
    * 管理員輸入指令，旁觀/死亡時用第一人稱觀看別的玩家，能看到該玩家的子彈光線軌跡
    * 被監視的玩家自身看不到任何子彈光線軌跡

* 用意在哪?
    * 查看玩家的可能自瞄作弊行為

* <details><summary>指令中文介紹 (點我展開)</summary>

    * cfg/sourcemod/l4d_spec_lasertag_cheat.cfg
        ```php
        // 0=關閉插件, 1=啟動插件
        l4d_spec_lasertag_cheat_enable "1"

        // 擁有這些權限的玩家，才可以輸入命令開關 (留白 = 任何人都能, -1: 無人)
        l4d_spec_lasertag_cheat_command_flag "z"

        // 為1時，自動幫旁觀者/死亡狀態打開子彈光線軌跡
        l4d_spec_lasertag_cheat_default_value "0"

        // 旁觀者/死亡狀態 用以下方式觀看玩家時才會打開子彈光線軌跡，1=自由觀看, 2=第三人稱視角, 4=第一人稱視角, 7=全部
        l4d_spec_lasertag_cheat_show_type "6"

        // 為1時，手槍武器有子彈光線軌跡
        l4d_spec_lasertag_cheat_pistols "1"

        // 為1時，步槍武器有子彈光線軌跡
        l4d_spec_lasertag_cheat_rifles "1"

        // 為1時，狙擊槍武器有子彈光線軌跡
        l4d_spec_lasertag_cheat_snipers "1"

        // 為1時，SMG武器有子彈光線軌跡
        l4d_spec_lasertag_cheat_smgs "1"

        // 為1時，散彈槍有子彈光線軌跡
        l4d_spec_lasertag_cheat_shotguns "1"

        // 為1時，每一個玩家的子彈光線有不同的隨機顏色
        l4d_spec_lasertag_cheat_random "1"

        // 如果不是隨機顏色，請填寫子彈光線的顏色，填入RGB三色 (三個數值介於0~255，需要空格)
        l4d_spec_lasertag_cheat_rgb "0 125 255"

        // 子彈光線軌跡的透明度
        l4d_spec_lasertag_cheat_alpha "100"

        // 子彈光線軌跡的殘存時間
        l4d_spec_lasertag_cheat_life "1.50"

        // 子彈光線軌跡的寬度
        l4d_spec_lasertag_cheat_width "1.0"

        // 子彈光線與玩家的距離
        l4d_spec_lasertag_cheat_offset "10"

        // 為1時，Bot也有子彈光線軌跡
        l4d_spec_lasertag_cheat_bots "0"
        ```
</details>

* <details><summary>命令中文介紹 (點我展開)</summary>
    
    * **使用指令關閉或開啟子彈光線軌跡**
        ```php
        sm_lasercheat
        ```
</details>