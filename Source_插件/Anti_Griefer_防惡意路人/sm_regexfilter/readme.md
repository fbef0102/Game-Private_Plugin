# Description | 內容
Filter players' dirty words on chatbox

> __Note__ <br/>
This plugin is private, Please contact [me](/#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](/#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/XQqzDsdo55o)

* Image
    * punish player who said dirty word
    <br/>![sm_regexfilter_1](image/sm_regexfilter_1.jpg)

* <details><summary>How does it work?</summary>

    * Punish player who said dirty word (Ban, Slap, Kick, ...)
    * Modify dirty word table in [configs/regexrestrict.cfg](configs/regexrestrict.cfg)
</details>

* Require | 必要安裝
    1. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)
    2. [simple_chatprocessor](https://github.com/fbef0102/Sourcemod-Plugins/tree/main/simple_chatprocessor)

* <details><summary>ConVar | 指令</summary>

    * cfg/sourcemod/sm_regexfilter.cfg
        ```php
        // If 1, REGEXFILTER Enabled
        regexfilter_enable "1"

        // If 1, Remove all whitespace
        regexfilter_remove_white_space "0"
        ```
</details>

* <details><summary>Data Config</summary>

    * [configs/regexrestrict.cfg](configs/regexrestrict.cfg)
        > Manual in this file, click for more details...
</details>

* <details><summary>Related | 相關插件</summary>

    1. [GagMuteBanEx](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/GagMuteBanEx): gag & mute & ban - Ex
        * 封鎖/禁音/禁字-強化版
    2. [savechat](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/savechat): Records player chat messages to a file
        * 紀錄玩家的聊天紀錄到文件裡
    3. [l4d_invalid_name](/L4D_插件/Anti_Griefer_防惡意路人/l4d_invalid_name): Kick player if has invalid name via Regular Expressions
        * 名字封鎖表，任何人的名字有髒話或敏感詞彙，會踢出玩家
</details>

* <details><summary>Changelog | 版本日誌</summary>

    * v1.5h (2025-1-8)
        * Fixed error

    * v1.4h (2024-9-21)
        * Fix memory leak
        * Optimize code

    * v1.3h (2024-8-3)
        * Require simple_chatprocessor 1.8h or above

    * v1.2h (2024-1-31)
        * Remake code, convert code to latest syntax
        * Updare data config

    * v1.1h (2024-1-14)
        * Support Cyrillic letters, comparison is case insensitive.

    * v1.0h (2023-10-28)
        * Optimize Code and fix memory leak

    * v1.4 (2023-5-13)
        * Optimize Code
        * Change method to detect client say, require "simple_chatprocessor"

    * v1.3
        * Remake Code
        * Add "replaceall" option
        * Fix memory leak

    * v1.2
        * [By Twilight Suzuka](https://forums.alliedmods.net/showthread.php?t=71867)
</details>

- - - -
# 中文說明
禁詞表，任何人打字說出髒話或敏感詞彙，字詞會被屏蔽、玩家禁言並處死，網路並非法外之地

* 圖示
    * 網路並非法外之地，切勿以身試法，請謹言慎行
    <br/>![zho/sm_regexfilter_1](image/zho/sm_regexfilter_1.jpg)
    <br/>![zho/sm_regexfilter_2](image/zho/sm_regexfilter_2.jpg)

* 原理
    * 只要打字說出的字詞符合禁詞表內任何一個詞彙，屏蔽敏感字詞並懲罰玩家
    * 禁詞表位於[configs/regexrestrict.cfg](configs/regexrestrict.cfg)，可自行增修
    * 英文字母與西里爾文字(俄文)也適用，自動偵測大小寫

* 用意在哪?
    * 專門對付口出惡言的玩家
    * 跟管理員吵架，只有管理員能罵人

* <details><summary>指令中文介紹 (點我展開)</summary>

    * cfg/sourcemod/sm_regexfilter.cfg
        ```php
        // 0=關閉插件, 1=啟動插件
        regexfilter_enable "1"

        // 為1時，忽略空白符號
        regexfilter_remove_white_space "0"
        ```
</details>

* <details><summary>文件設定範例</summary>

    * 禁詞表可自行增修
    * 可設置權限，管理員的言論不會受到插件的審查
    * 敏感字詞可以用其他文字和諧取代
    * [configs/regexrestrict.cfg](configs/regexrestrict.cfg)
        > 內有中文說明，可點擊查看
</details>
