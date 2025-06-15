# Description | 內容
Special infected incaps survivors and die + skip getup animation (Also apply to AI)

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Apply to | 適用於
    ```
    L4D1
    L4D2
    ```

* [Video | 影片展示](https://youtu.be/ssLsbaKLLmk)

* <details><summary>Image | 圖示</summary>

    <br/>![1vSpecials_0](image/1vSpecials_0.jpg)
    <br/>![1vSpecials_1](image/1vSpecials_1.gif)
    <br/>![1vSpecials_2](image/1vSpecials_2.gif)
    <br/>![1vSpecials_3](image/1vSpecials_3.jpg)
</details>

* <details><summary>How does it work?</summary>

	* Special infected incaps survivors and die instantly
    * Set each Special infected scratch damage
    * Skip Survivor getup animation after release
    * Apply to both human and AI infected
</details>

* Require | 必要安裝
    1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
    2. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)

* <details><summary>ConVar | 指令</summary>

    * cfg/sourcemod/1vSpecials.cfg
        ```php
        // 0=Plugin off, 1=Plugin on.
        1vSpecials_enable "1"

        // Modfiy Smoker attack damage when pulling before suicides. (-1=Disable)
        1vSpecials_smoker_attack_dmg "20"

        // Modfiy Hunter attack damage when pouncing before suicides. (-1=Disable)
        1vSpecials_hunter_attack_dmg "25"

        // Modfiy Jockey attack damage when ridding before suicides. (-1=Disable)
        1vSpecials_jockey_attack_dmg "30"

        // Modfiy Charger attack damage when charging before suicides. (-1=Disable)
        1vSpecials_charger_attack_dmg "35"

        // If 1, Announce SI Health Left before SI suicides.
        1vSpecials_dmgannounce "1"

        // If 1, Skip Survivor Get Up Animation.
        1vSpecials_skip_getup "1"

        // 0=Only Kill Attacker, 1=Kill All Infected
        1vSpecials_kill_all "0"

        // If 1, this plugin only takes effect when infected attacking bot.
        1vSpecials_apply_bot_only "0"

        // If 1, this plugin removes god frame when damaged by special infected.
        1vSpecials_remove_godframe "1"

        // Delay time Charger makes damage and suicides after carry the victim (0=Game default)
        1vSpecials_charger_carry_delay "0.2"

        // Delay time Smoker makes damage and suicides after grab the victim (Useful in coop/realism, 0=Game default)
        1vSpecials_smoker_grab_delay "1.0"
        ```
</details>

* <details><summary>Related Plugin | 相關插件</summary>

    1. [l4dinfectedbots](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4dinfectedbots): Spawns multi infected bots in any mode + allows playable special infected in coop/survival + unlock infected slots (10 VS 10 available)
        * 生成多特感控制插件
    2. [AI_HardSI](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/AI_HardSI): Improves the AI behaviour of special infected
        * 增強特感攻擊行為
    3. [l4d_claw_dmg](https://github.com/Target5150/MoYu_Server_Stupid_Plugins/tree/master/The%20Last%20Stand/l4d_claw_dmg): Make claw damage follow convar *_pz_claw_dmg
        * 修改 特感 右鍵抓傷的傷害值
</details>

* <details><summary>Changelog | 版本日誌</summary>

    * v2.7 (2024-11-15)
        * Optimize code

    * v2.6 (2024-9-13)
        * Update cvars

    * v2.5 (2023-7-13)
        * Fixed Smoker does not suicide when dragging victim

    * v2.4 (2023-2-19)
        * Remake all cvars description
        * Set each Special Infected claw damage
        * Add new cvars

    * v2.3
        * Initial Release
</details>

- - - -
# 中文說明
特感控到倖存者之後造成一定傷害並處死 + 略過起身動畫 (AI特感也適用)

* 原理
    * 特感控到倖存者之後造成一定傷害並自動死亡，倖存者可以繼續前進
        * 倖存者解除特感控制後會略過起身狀態與動畫
    * 可配合多特感強化插件達成自己一人在伺服器訓練擊殺特感
    * 真人與AI特感都適用

* <details><summary>指令中文說明(點我展開)</summary>

    * cfg/sourcemod/1vSpecials.cfg
        ```php
        // 0=關閉插件, 1=啟動插件
        1vSpecials_enable "1"

        // Smoker 抓到倖存者後造成20點傷害並自殺 (-1=關閉這項功能)
        1vSpecials_smoker_attack_dmg "20"

        // Hunter 抓到倖存者後造成25點傷害並自殺 (-1=關閉這項功能)
        1vSpecials_hunter_attack_dmg "25"

        // Jockey 抓到倖存者後造成25點傷害並自殺 (-1=關閉這項功能)
        1vSpecials_jockey_attack_dmg "30"

        // Charger 抓到倖存者後造成25點傷害並自殺 (-1=關閉這項功能)
        1vSpecials_charger_attack_dmg "35"

        // 為1時，特感自殺前提示剩餘的血量
        1vSpecials_dmgannounce "1"

        // 為1時，倖存者解除特感控制後會略過起身狀態與動畫
        1vSpecials_skip_getup "1"

        // 0=只殺死攻擊倖存者的特感, 1=殺死所有特感
        1vSpecials_kill_all "0"

        // 為1時，這插件只對AI Bot的倖存者有效果
        1vSpecials_apply_bot_only "0"

        // 為1時，移除人類解除特感控制後的無敵狀態 (運作更順暢)
        1vSpecials_remove_godframe "1"

        // Charger衝刺帶走倖存者時, 多少秒數之後造成傷害並強制自殺 (0=遊戲預設)
        1vSpecials_charger_carry_delay "0.2"

        // Smoker拉走倖存者時, 多少秒數之後造成傷害並強制自殺 (適合用在 戰役/寫實模式, 0=遊戲預設)
        1vSpecials_smoker_grab_delay "1.0"
        ```
</details>