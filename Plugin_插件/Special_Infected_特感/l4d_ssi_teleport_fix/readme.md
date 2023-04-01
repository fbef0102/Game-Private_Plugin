# Description | 內容
Teleport AI Infected player to the teammate who is much nearer to survivors.

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/_-M3zYlvYPU)

* Image | 圖示
<br/>None

* Apply to | 適用於
    ```
    L4D1
    L4D2
    ```

* <details><summary>Changelog | 版本日誌</summary>

	* v2.0 (2023-4-1)
        * Replace Gamedata with left4dhooks

	* v1.9 (2023-3-13)
        * Select special infected class to teleport
        * Each S.I. teleport range
        * Teleport method
        * Active the this plugin after survivors have reached certain distances of the map
        * Teleport Tank available

	* v1.8
        * Request by Yabi
        * Teleport infected to teammate who is near the first ahead survivor

	* v1.6
	    * Original Request by 壹梦
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
    2. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)

* Related Plugin | 相關插件
	1. [l4dinfectedbots](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4dinfectedbots): Spawns infected bots in L4D1 versus, and gives greater control of the infected bots in L4D1/L4D2 without being limited by the director.
		> 生成多特感控制插件
	2. [AI_HardSI](https://github.com/fbef0102/L4D2-Plugins/tree/master/AI_HardSI): Improves the AI behaviour of special infected
		> 增強特感攻擊行為

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_ssi_teleport_fix.cfg
        ```php
        // Active the teleport system after survivors have reached certain distances of the map [1-100]
        l4d_ssi_teleport_fix_active_flow "10"

        // Teleport boomer to tank?
        l4d_ssi_teleport_fix_boomer2tank "0"

        // Time interval to check si.
        l4d_ssi_teleport_fix_check_interval "1.0"

        // 0=Plugin off, 1=Plugin on.
        l4d_ssi_teleport_fix_enable "1"

        // Players with these flags have access to see S.I. teleport message. (Empty = Everyone, -1: Nobody)
        l4d_ssi_teleport_fix_message_access_flag ""

        // If 1, AI Boomer will be teleported.
        l4d_ssi_teleport_fix_tp1_boomer "1"

        // If 1, AI Charger will be teleported.
        l4d_ssi_teleport_fix_tp1_charger "1"

        // Cold Down Time in seconds an infected can not be teleported again.
        l4d_ssi_teleport_fix_tp1_cooltime "2.0"

        // Prevent SI from taking damage for this seconds after being teleported. (0=Disable)
        l4d_ssi_teleport_fix_tp1_god_time "0.6"

        // If 1, AI Hunter will be teleported.
        l4d_ssi_teleport_fix_tp1_hunter "1"

        // If 1, AI Jockey will be teleported.
        l4d_ssi_teleport_fix_tp1_jockey "1"

        // Limit per teleport.
        l4d_ssi_teleport_fix_tp1_limit "2"

        // AI Boomer will be teleported if distance from survivors is outside this range.
        l4d_ssi_teleport_fix_tp1_range_boomer "800"

        // AI Charger will be teleported if distance from survivors is outside this range.
        l4d_ssi_teleport_fix_tp1_range_charger "800"

        // AI Hunter will be teleported if distance from survivors is outside this range.
        l4d_ssi_teleport_fix_tp1_range_hunter "800"

        // AI Jockey will be teleported if distance from survivors is outside this range.
        l4d_ssi_teleport_fix_tp1_range_jockey "800"

        // AI Smoker will be teleported if distance from survivors is outside this range.
        l4d_ssi_teleport_fix_tp1_range_smoker "800"

        // AI Tank will be teleported if distance from survivors is outside this range.
        l4d_ssi_teleport_fix_tp1_range_spitter "800"

        // AI Smoker will be teleported if distance from survivors is outside this range.
        l4d_ssi_teleport_fix_tp1_range_tank "800"

        // If 1, AI Smoker will be teleported.
        l4d_ssi_teleport_fix_tp1_smoker "1"

        // If 1, AI Spitter will be teleported.
        l4d_ssi_teleport_fix_tp1_spitter "1"

        // If 1, AI Tank will be teleported.
        l4d_ssi_teleport_fix_tp1_tank "0"

        // Where to teleport the AI Infected. 0=Near the first ahead survivor, 1=Near the farthest behind survivor, 2=Near Random survivor
        l4d_ssi_teleport_fix_tp2_near_survivor_type "0"

        // Teleport to the Infected player whose distance from survivors is inside max range, value must less than or equal to 'ssitp_tp1_range'.
        l4d_ssi_teleport_fix_tp2_range_max "700"

        // Teleport to the Infected player whose distance from survivors is outside min range
        l4d_ssi_teleport_fix_tp2_range_min "150"

        // If 1, infected players can be teleported to the player thats about to be seen by the survivors.
        l4d_ssi_teleport_fix_tp2_visiblethreats "0"
        ```
</details>

* <details><summary>Command | 命令</summary>

	None
</details>

- - - -
# 中文說明
傳送比較遠的AI特感到靠近倖存者的特感隊友附近

* 原理
    * 比較遠的特感傳送到距離倖存者比較近的特感身上
    * 不會傳送真人特感玩家，但會把AI特感傳送到真人特感玩家

* 用意在哪?
    * 可配合多特感插件使得每一波特感的攻擊對倖存者造成巨大的壓力
    * 有效解決許多特感長期站著不動也不攻擊的智商與行為
    * 增加伺服器遊玩難度

* 功能
    * 查看下方"指令中文介紹"

* <details><summary>指令中文介紹 (點我展開)</summary>

    * 假設需要傳送 "特感A" 到 "特感B" 身上
        ```php
        // 倖存者經過地圖10%總路程才會開始傳送特感
        l4d_ssi_teleport_fix_active_flow "10"

        // 可傳送Boommer到Tank身上?
        l4d_ssi_teleport_fix_boomer2tank "0"

        // 每1.0秒檢查所有特感並傳送
        l4d_ssi_teleport_fix_check_interval "1.0"

        // 0=關閉插件, 1=開啟插件.
        l4d_ssi_teleport_fix_enable "1"

        // 擁有這些權限的玩家可以看到提示訊息 (留白=所有人都能看到, -1=沒人能看到)
        l4d_ssi_teleport_fix_message_access_flag ""

        // 為1時, 可以傳送 AI Boomer
        l4d_ssi_teleport_fix_tp1_boomer "1"

        // 為1時, 可以傳送 AI Charger
        l4d_ssi_teleport_fix_tp1_charger "1"

        // 被傳送一次後，經需要等待2.0秒後才可在被傳送一次
        l4d_ssi_teleport_fix_tp1_cooltime "2.0"

        // 被傳送後的無敵時間 (0=關閉)
        l4d_ssi_teleport_fix_tp1_god_time "0.6"

        // 為1時, 可以傳送 AI Hunter
        l4d_ssi_teleport_fix_tp1_hunter "1"

        // 為1時, 可以傳送 AI Jockey
        l4d_ssi_teleport_fix_tp1_jockey "1"

        // 一次可以傳送兩隻特感
        l4d_ssi_teleport_fix_tp1_limit "2"

        // AI Boomer 必須離倖存者800公尺外才能被傳送
        l4d_ssi_teleport_fix_tp1_range_boomer "800"

        // AI Charger 必須離倖存者800公尺外才能被傳送
        l4d_ssi_teleport_fix_tp1_range_charger "800"

        // AI Hunter 必須離倖存者800公尺外才能被傳送
        l4d_ssi_teleport_fix_tp1_range_hunter "800"

        // AI Jockey 必須離倖存者800公尺外才能被傳送
        l4d_ssi_teleport_fix_tp1_range_jockey "800"

        // AI Smoker 必須離倖存者800公尺外才能被傳送
        l4d_ssi_teleport_fix_tp1_range_smoker "800"

        // AI Tank 必須離倖存者800公尺外才能被傳送
        l4d_ssi_teleport_fix_tp1_range_spitter "800"

        // AI Smoker 必須離倖存者800公尺外才能被傳送
        l4d_ssi_teleport_fix_tp1_range_tank "800"

        // 為1時, 可以傳送 AI Smoker
        l4d_ssi_teleport_fix_tp1_smoker "1"

        // 為1時, 可以傳送 AI Spitter
        l4d_ssi_teleport_fix_tp1_spitter "1"

        // 為1時, 可以傳送 AI Tank
        l4d_ssi_teleport_fix_tp1_tank "0"

        // 傳送 "特感A" 到哪裡? 0=最前方的倖存者附近, 1=最後方的倖存者附近, 2=隨機的倖存者附近
        l4d_ssi_teleport_fix_tp2_near_survivor_type "0"

        // "特感B" 必須距離倖存者700公尺內.
        l4d_ssi_teleport_fix_tp2_range_max "700"

        // "特感B" 必須距離倖存者150公尺外
        l4d_ssi_teleport_fix_tp2_range_min "150"

        // 為1時，就算"特感B"被倖存者看到也要傳送"特感A"
        l4d_ssi_teleport_fix_tp2_visiblethreats "0"
        ```

    * 範例一: 當有AI特感Hunter距離倖存者900公尺之外，且有另一隻特感Jockey位於距離倖存者150 ~ 700 公尺之間，將Hunter傳送到Jockey身邊
        ```php
        l4d_ssi_teleport_fix_tp1_hunter "1"
        l4d_ssi_teleport_fix_tp1_range_hunter "900"
        l4d_ssi_teleport_fix_tp2_range_max "700"
        l4d_ssi_teleport_fix_tp2_range_min "150"
        ```
</details>