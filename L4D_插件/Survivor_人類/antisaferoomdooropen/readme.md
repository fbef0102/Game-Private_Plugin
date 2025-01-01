# Description | 內容
Start saferoom door locks until all connecting players are loaded or certain time pass

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/b3A14C7Qie8)

* Image
    <br/>![antisaferoomdooropen_1](image/antisaferoomdooropen_1.jpg)
    <br/>![antisaferoomdooropen_2](image/antisaferoomdooropen_2.jpg)
    <br/>![antisaferoomdooropen_3](image/antisaferoomdooropen_3.gif)

* Apply to | 適用於
    ```
    L4D1
    L4D2
    ```

* <details><summary>How does it work?</summary>

	* Lock start saferoom door until all connecting players are loaded or until time pass
    * Teleport survivor back to safe area if does not have start saferoom door
    * Saferoom door drops after door open
</details>

* Require | 必要安裝
    1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
    2. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)

* <details><summary>ConVar | 指令</summary>

    * cfg/sourcemod/antisaferoomdooropen.cfg
        ```php
        // 0=Plugin off, 1=Plugin on.
        antisaferoomdooropen_enable "1"

        // Turn on the plugin in these game modes. 0=All, 1=Coop, 2=Survival, 4=Versus, 8=Scavenge. Add numbers together.
        antisaferoomdooropen_modes_tog "0"

        // How Long plugin waits for loaders before giving up on them (0=Don't wait for loaders)
        antisaferoomdooropen_loaders_time "30"

        // How Long plugin waits before saferoom door can be opened. (Once all players are loaded)
        antisaferoomdooropen_open_time "40"

        // Saferoom door auto open after this amount of time, even if survivors are still inside the safe room. (0=off)
        antisaferoomdooropen_force_start_time "100"

        // If 1, saferoom door drops after door open
        antisaferoomdooropen_fake "1"

        // If 1, Door fades after it drops.
        antisaferoomdooropen_fade "1"

        // If 1, Players will be teleported back to saferoom if try to leave the safe area when door locks
        // Useful if map does not have start saferoom door
        antisaferoomdooropen_left_start_area_teleport "1"

        //If 1, Players won't take any damage when door locks
        antisaferoomdooropen_left_start_area_god "1"

        // If 1, Spawn player to safe area if player dies when door locks
        antisaferoomdooropen_open_spawn_player "0"

        // If 1, return player to safe area if player spawns or takes over bot when door locks.
        antisaferoomdooropen_return_player "0"

        // Changes how count down timer and hint displays.
        antisaferoomdooropen_announce_type "2"

        // (L4D2) Set A Glow For The Saferoom Doors
        antisaferoomdooropen_glow_enable "1"

        // (L4D2) Set The Glow Range For Saferoom Doors
        antisaferoomdooropen_glow_range "500"

        // (L4D2) Set Saferoom Lock Glow Color, (0-255) Separated By Spaces.
        antisaferoomdooropen_lock_glow_color "255 0 0"

        // (L4D2) Set Saferoom Unlock Glow Color, (0-255) Separated By Spaces.
        antisaferoomdooropen_unlock_glow_color "0 255 0"
        ```
</details>

* <details><summary>Command | 命令</summary>

	None
</details>

* <details><summary>Translation Support | 支援翻譯</summary>

	```
	English
	繁體中文
	简体中文
	```
</details>

* <details><summary>Related Plugin | 相關插件</summary>

    1. [lockdown_system_l4d](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/lockdown_system_l4d): Locks Saferoom Door Until Someone Opens It.
		* 終點安全門鎖住直到時間結束
	2. [l4d_start_safe_area](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4d_start_safe_area): Add Custom safe area for any map on start
		* 遊戲開局時，強制將出生點周圍區域判定為安全區，以確保玩家安全
</details>

* <details><summary>Changelog | 版本日誌</summary>

    * v2.8 (2025-1-1)
        * Make door drop after door is fully opened

    * v2.7 (2024-12-25)
        * Update cvars

    * v2.7 (2024-11-19)
        * Waiting for connecting players
        * Update cvars
        * Update translation
        * Remake code

    * v2.6 (2024-8-27)
        * Update cvars

    * v2.5 (2023-10-31)
        * Add translation file

    * v2.4 (2023-2-13)
        * Add a cvar to display count down timer

    * v2.3
        * Initial Release
</details>

- - - -
# 中文說明
起始安全門將會鎖住直到所有玩家載入遊戲或時間到 + 沒有安全門的關卡則是傳送回起始

* 圖示
    <br/>![zho/antisaferoomdooropen_1](image/zho/antisaferoomdooropen_1.jpg)
    <br/>![zho/antisaferoomdooropen_2](image/zho/antisaferoomdooropen_2.jpg)
    <br/>![zho/antisaferoomdooropen_3](image/zho/antisaferoomdooropen_3.gif)

* 原理
	* 回合開始時，將安全室的門鎖住，任何人不得打開安全室的門
    * 當所有玩家已載入遊戲或時間到之後，大門解鎖
    * 如果關卡沒有安全室，則離開安全區域會被傳送回去
    * 大門打開後，門掉落在地上 (不能再關回去)

* 用意在哪?
    * 讓隊友等待玩家
    * 防止每次過關後有傻B不等人直接打開安全門衝出去
    * 禁止跑回起始安全室關閉大門，躲避特感追殺

* <details><summary>指令中文介紹 (點我展開)</summary>

    * cfg/sourcemod/antisaferoomdooropen.cfg
        ```php
        // 0=關閉插件, 1=啟動插件
        antisaferoomdooropen_enable "1"

        // 什麼模式下啟動此插件. 0=所有模式, 1=戰役, 2=生存, 4=對抗, 8=清道夫. 請將數字相加起來
        antisaferoomdooropen_modes_tog "0"

        // 換圖之後必須等待所有玩家載入遊戲，超過30秒後便放棄等待 (0=不等待)
        antisaferoomdooropen_loaders_time "30"

        // 40秒後解鎖安全室大門 (所有玩家已載入遊戲之後開始倒數)
        antisaferoomdooropen_open_time "40"

        // 100秒後，安全室的門強制自動打開 (0=關閉這項功能)
        antisaferoomdooropen_force_start_time "100"

        // 為1時，安全門打開後會自動掉落且不能再關回去
        antisaferoomdooropen_fake "1"

        // 為1時，安全門掉落地上後自動消失
        antisaferoomdooropen_fade "1"

        // (大門鎖住時) 為1時，倖存者離開安全區域會被傳送回起點 (0=關閉這項功能)
        // 適合關卡沒有起始安全門的時候
        antisaferoomdooropen_left_start_area_teleport "1"

        // (大門鎖住時) 為1時，倖存者們不會受到任何傷害
        antisaferoomdooropen_left_start_area_god "1"

        // (大門鎖住時) 為1時，如果玩家在安全室內死亡則會復活
        antisaferoomdooropen_open_spawn_player "0"

        // (大門鎖住時) 為1時，玩家取代Bot時會返回安全區域
        antisaferoomdooropen_return_player "0"

        // 提示該如何顯示. (0: 不提示, 1: 聊天框, 2: 黑底白字框, 3: 螢幕正中間)
        antisaferoomdooropen_countdown_announce_type "2"

        // (L4D2) 為1時，安全室的大門有光環
        antisaferoomdooropen_glow_enable "1"

        // (L4D2) 安全室的大門發光範圍
        antisaferoomdooropen_glow_range "500"

        // (L4D2) 安全室的大門鎖住時的光圈顏色，填入RGB三色 (三個數值介於0~255，需要空格)
        antisaferoomdooropen_lock_glow_color "255 0 0"

        // (L4D2) 安全室的大門解除鎖住時的光圈顏色，填入RGB三色 (三個數值介於0~255，需要空格)
        antisaferoomdooropen_unlock_glow_color "0 255 0"
        ```
</details>