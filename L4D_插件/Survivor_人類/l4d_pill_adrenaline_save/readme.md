# Description | 內容
Player can throw adrenaline shot/pill at incapacitated teammates and help them get up immediately.

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/W5ZlPHchgkU)

* Image | 圖示
    <br/>![l4d2_pill_adrenaline_save_1](image/l4d2_pill_adrenaline_save_1.jpg)
    <br/>![l4d2_pill_adrenaline_save_2](image/l4d2_pill_adrenaline_save_2.gif)
    <br/>![l4d2_pill_adrenaline_save_3](image/l4d2_pill_adrenaline_save_3.gif)

* <details><summary>How does it work?</summary>

    * Aim incap teammate and press E to revive immediately with an adrenaline shot or a pill
    * Aim teammate who is hanging from ledge and press E to revive immediately with an adrenaline shot or a pill
</details>

* Require | 必要安裝
    1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
    2. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)

* <details><summary>ConVar | 指令</summary>

    * cfg/sourcemod/l4d_pill_adrenaline_save.cfg
        ```php
        // 0=Plugin off, 1=Plugin on.
        l4d_pill_adrenaline_save_enable "1"

        // Changes how message displays. 0: Disable, 1:In chat, 2: In Hint Box, 4: In center text, 8: Director hint, Add numbers together
        l4d_pill_adrenaline_save_announce_flag "10"

        // How close range to notify players nearby that they can throw adrenaline shot or pill at incapacitated teammates.
        // Using director hint (0=Disable Notify)
        l4d_pill_adrenaline_save_notify_range "400.0"

        // Display director hint based on chance
        l4d_pill_adrenaline_save_director_hint_chance "100"

        // How close range can player throw adrenaline shot or pill at incapacitated teammates.
        l4d_pill_adrenaline_save_distance "160"

        // If 1, the player who were saved will get adrenaline shot or pill temp health buff
        l4d_pill_adrenaline_save_buff "1"

        // Which item can be throwed at incapacitated teammate, 1: Adrenaline shot, 2: Pill, 3: Both
        l4d_pill_adrenaline_save_item_flag "3"

        // Save survivors if 1: Incap, 2: Hang from ledge, 3: Both
        l4d_pill_adrenaline_save_type "3"
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

* <details><summary>Translation Support | 支援翻譯</summary>

    ```
    English
    繁體中文
    简体中文
    ```
</details>

* <details><summary>Changelog | 版本日誌</summary>

    * v1.1 (2024-10-7)
        * Add director hint
        * Update cvars
        * Update translation

    * v1.0 (2023-4-1)
        * Initial Release
</details>

- - - -
# 中文說明
玩家可以朝向倒地玩家扔手中的藥丸或腎上腺素，幫助他們快速救起

* 圖示
    <br/>![zho/l4d2_pill_adrenaline_save_1](image/zho/l4d2_pill_adrenaline_save_1.jpg)

* 原理
    * 手持藥丸對著倒地或掛邊的隊友按E鍵，可以消耗藥丸拯救，隊友會瞬間救起來
    * 手持腎上腺素對著倒地或掛邊的隊友按E鍵，可以消耗腎上腺素拯救，隊友會瞬間救起來
    * 被救起來的隊友可以短暫獲得Buff效果 (增加臨時生命值與速度)

* <details><summary>指令中文介紹 (點我展開)</summary>

    * cfg/sourcemod/l4d_pill_adrenaline_save.cfg
        ```php
        // 0=關閉插件, 1=啟動插件
        l4d_pill_adrenaline_save_enable "1"

        // 提示該如何顯示, 請將數字相加. (0: 不提示, 1: 聊天框, 2: 黑底白字框, 4: 螢幕正中間, 8: 導演系統提示)
        l4d_pill_adrenaline_save_announce_flag "10"

        // 當玩家靠近倒地或掛邊的隊友此範圍內時，出現導演系統提示玩家 "可以使用藥丸或腎上腺素，拯救隊友"
        // 0=不提示
        l4d_pill_adrenaline_save_notify_range "400.0"

        // 每次導演系統出現提示的機率 [1~100]
        l4d_pill_adrenaline_save_director_hint_chance "100"

        // 能拯救的距離
        l4d_pill_adrenaline_save_distance "160"

        // 為1時，被救起來的隊友可以短暫獲得Buff效果 (增加臨時生命值與速度)
        l4d_pill_adrenaline_save_buff "1"

        // 哪項物品能快速拯救隊友? 1: 腎上腺素, 2: 藥丸, 3: 兩者皆是
        l4d_pill_adrenaline_save_item_flag "3"

        // 可以快速拯救什麼狀態下的隊友? 1: 倒地, 2: 掛邊, 3: 兩者皆是
        l4d_pill_adrenaline_save_type "3"
        ```
</details>