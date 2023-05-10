
# Description | 內容
Allows spectator listen others team voice and see others team chat for l4d
(```sv_alltalk 1``` support)

* Video | 影片展示
<br/>None

* Image
	* Type ```!hear``` in chatbox to enable or disable listen mode
    <br/>![l4d_versus_specListener_1](image/l4d_versus_specListener_1.jpg)

* Apply to | 適用於
    ```
    L4D1
    L4D2
    ```

* Translation Support | 支援翻譯
	```
	English
	繁體中文
	简体中文
	```

* <details><summary>Changelog | 版本日誌</summary>

	* v3.5 (2023-5-9)
        * Spectator can see survivor team chat and infected team chat
        * Support official convar ```sv_alltalk 1```
        * Translation support

	* v1.0
        * [Original Plugin by waertf](https://forums.alliedmods.net/showthread.php?t=95474)
</details>

* Require | 必要安裝
	1. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)

* Related Plugin | 相關插件
    1. [show_mic](https://github.com/fbef0102/L4D2-Plugins/tree/master/show_mic): Voice Announce in centr text + create hat to Show Who is speaking.
	    > 顯示誰在語音並且在說話的玩家頭上帶帽子

* <details><summary>ConVar | 指令</summary>

	* cfg\sourcemod\l4d_versus_specListener.cfg
        ```php
        // Players with these flags have access to use sm_hear command to enable or disable hear feature. (Empty = Everyone, -1: Nobody)
        l4d_versus_specListener_command_access_flag ""

        // If 1, Enable Hear Feature for all spectators by default [0-Disable]
        l4d_versus_specListener_default "1"

        // 0=Plugin off, 1=Plugin on.
        l4d_versus_specListener_enable "1"

        // If 1, Show Spectators Survivors and Infected Team chat?
        l4d_versus_specListener_team_chat_spec "1"
        ```
</details>

* <details><summary>Command | 命令</summary>

    * **Enable/Disable Listen Mode for personal**
        ```php
        sm_hear
        ```
</details>

- - - -
# 中文說明
旁觀者可以透過聊天視窗看到倖存者和特感的隊伍對話，亦可透過音頻聽到隊伍談話

* 圖示
	* 旁觀者可以在聊天框輸入```!hear```開啟或關閉 監聽模式
    <br/>![l4d_versus_specListener_1_zho](image/zho/l4d_versus_specListener_1_zho.jpg)

* 原理
    * 旁觀者可以在聊天框輸入```!hear```開啟或關閉 監聽模式
    * 監聽模式開啟的時候
        * 旁觀者能透過聊天視窗看到倖存者和特感的隊伍對話
        * 可透過音頻聽到倖存者和特感的隊伍MIC談話
    * 監聽模式關閉的時候 
        * 看不到倖存者和特感的隊伍對話
        * 聽不到倖存者和特感的隊伍MIC談話
    * ```sv_alltalk 1``` 開啟的時候，此插件會暫時失效
    * 可以搭配[show_mic插件](https://github.com/fbef0102/L4D2-Plugins/tree/master/show_mic)，顯示誰在語音並且在說話的玩家頭上帶帽子
    * 戰役模式也適用

* 功能
    * 預設旁觀者開關監聽模式
    * 可設置擁有特定權限的人才能開啟監聽模式