# Description | 內容
Modify explosive and incendiary bullet dmg

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Apply to | 適用於
    ```
    L4D2
    ```

* Image | 圖示
    | Before (裝此插件之前)  			| After (裝此插件之後) |
    | -------------|:-----------------:|
    | ![l4d_explosive_incendiary_dmg_before_1](image/l4d_explosive_incendiary_dmg_before_1.gif)|![l4d_explosive_incendiary_dmg_after_1](image/l4d_explosive_incendiary_dmg_after_1.gif)|

* <details><summary>How does it work?</summary>

    * Modify explosive bullet dmg
        * To Self (disable stumble)
        * To Teammate (disable stumble)
        * To Special Infected
    * Modify incendiary bullet dmg
        * To Teammate 
        * To Special Infected
    * You can modify dmg in data file: [data/l4d_explosive_incendiary_dmg.cfg](data/l4d_explosive_incendiary_dmg.cfg)
</details>

* Require | 必要安裝
    1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)

* <details><summary>ConVar | 指令</summary>

    * cfg/sourcemod/l4d_explosive_incendiary_dmg.cfg
        ```php
        // 0=Plugin off, 1=Plugin on.
        l4d_explosive_incendiary_dmg_enable "1"
        ```
</details>

* <details><summary>Changelog | 版本日誌</summary>

    * v1.0 (2025-6-21)
        * Initial Release
</details>

- - - -
# 中文說明
修改高爆彈、火焰子彈對隊友與特感的傷害

* 原理
    * 修改高爆彈傷害
        * 對自己 (不會被震退)
        * 對隊友 (不會被震退)
        * 對特感
    * 修改火焰子彈傷害
        * 對隊友
        * 對特感
    * 可到文件自行修改傷害: [data/l4d_explosive_incendiary_dmg.cfg](data/l4d_explosive_incendiary_dmg.cfg)

* <details><summary>指令中文介紹 (點我展開)</summary>

    * cfg/sourcemod/l4d_explosive_incendiary_dmg.cfg
        ```php
        // 0=關閉插件, 1=啟動插件
        l4d_explosive_incendiary_dmg_enable "1"
        ```
</details>