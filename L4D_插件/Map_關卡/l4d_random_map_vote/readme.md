# Description | 內容
Vote to change map, the map is chosen randomly from data

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Apply to | 適用於
    ```
    L4D2
    ```

* [Video | 影片展示](https://youtu.be/VskIo4LnBuI)

* Image | 圖示
    <br/>![l4d_random_map_vote_1](image/l4d_random_map_vote_1.jpg)

* Require | 必要安裝
    1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
    2. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)
    3. [builtinvotes](https://github.com/fbef0102/Game-Private_Plugin/releases/tag/builtinvotes)
	4. [l4d2_fix_changelevel](https://github.com/Target5150/MoYu_Server_Stupid_Plugins/tree/master/The%20Last%20Stand/l4d2_fix_changelevel): Fix issues due to forced changelevel.
		* 修復手動更換地圖會遇到的問題
	5. [l4d2_transition_info_fix](/l4d2_transition_info_fix): Fix issues after map transitioned, transition info is still retaining when changed new map by other ways.
		* 修復中途換地圖的時候(譬如使用Changelevel指令)，會遺留上次的過關保存設定，導致滅團後倖存者被傳送到安全室之外或死4   

* <details><summary>ConVar | 指令</summary>

    * cfg/sourcemod/l4d_random_map_vote.cfg
        ```php
        // 0=Plugin off, 1=Plugin on.
        l4d_random_map_vote_enable "1"
        
        // Delay to start another random map vote after vote failed.
        l4d_random_map_vote_delay "60"
        ```
</details>

* <details><summary>Command | 命令</summary>

    * **Start a vote to change map randomly**
        ```php
        sm_random
        ```
</details>

* <details><summary>Data Config</summary>

    * [data/l4d_random_vote_map.cfg](data/l4d_random_vote_map.cfg)
    * the map is chosen randomly from the data list, modify to add or delete
        ```php 
        c5m5_bridge
        c4m1_milltown_a
        c2m1_highway
        c1m4_atrium
        ```
</details>

* <details><summary>Changelog | 版本日誌</summary>

    * v1.1 (2023-2-10)
        * Support l4d_team_unscramble

    * v1.0 (2022-11-12)
        * Initial Release
</details>

- - - -
# 中文說明
投票更換地圖，但是地圖是隨機挑選的

* 原理
    * 不知道要下一張地圖打哪一張，那就交由上天決定吧
    * 任一玩家在聊天視窗輸入!random，大部分玩家投票通過後會切換地圖
    * 地圖是隨機挑選，請查看Data設定範例
    * 不會切換到與現在相同的地圖

* <details><summary>指令中文介紹 (點我展開)</summary>

    * cfg/sourcemod/l4d_random_map_vote.cfg
        ```php
        // 0=關閉插件, 1=啟動插件.
        l4d_random_map_vote_enable "1"

        // 必須間隔60秒才能再次發起投票
        l4d_random_map_vote_delay "60"
        ```
</details>

* <details><summary>文件設定範例</summary>

    * [data/l4d_random_vote_map.cfg](data/l4d_random_vote_map.cfg)
    * 從以下列表中隨機選擇地圖，可自行填寫增加或刪除，寫入順序不影響
        ```php 
        c5m5_bridge
        c4m1_milltown_a
        c2m1_highway
        c1m4_atrium
        ```
</details>


