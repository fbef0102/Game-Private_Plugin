# Description | 內容
Make chainsaw has knockback power when shove

> __Note__ <br/>
This plugin is private, Please contact [me](/#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](/#私人插件列表-private-plugins-list)

* Apply to | 適用於
    ```
    L4D2
    ```

* [Video | 影片展示](https://youtu.be/1UN9_FC7K44)

* Image | 圖示
    <br/>![l4d2_chainsaw_knockback_1](image/l4d2_chainsaw_knockback_1.gif)
    <br/>![l4d2_chainsaw_knockback_2](image/l4d2_chainsaw_knockback_2.gif)
    <br/>![l4d2_chainsaw_knockback_3](image/l4d2_chainsaw_knockback_3.gif)

* <details><summary>How does it work?</summary>

    * Idea comes from [Counter Strike Online Chainsaw](https://cso.fandom.com/wiki/Ripper#Advantages)
    * Hold Chainsaw and shove, it can knock back multiple targets at once in close range
        * Tank/Witch/Common Infected/Special Infected
    * Modify knockback power and damage in file: [data/l4d2_chainsaw_knockback.cfg](data/l4d2_chainsaw_knockback.cfg)
</details>

* Require | 必要安裝
    1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)

* <details><summary>ConVar | 指令</summary>

    * cfg/sourcemod/l4d2_chainsaw_knockback.cfg
        ```php
        // 0=Plugin off, 1=Plugin on.
        l4d2_chainsaw_knockback_enable "1"
        ```
</details>

* <details><summary>Related Plugin | 相關插件</summary>

    1. [l4d2_cso_knockback](/L4D_插件/Nothing_Impossible_無理改造版/l4d2_cso_knockback): Weapons and Melees now have knockback power like CSO
        * 武器與近戰都有CSO 殭屍擊退效果
</details>

* <details><summary>Changelog | 版本日誌</summary>

    * v1.0 (2025-10-8)
        * Initial Release
</details>

- - - -
# 中文說明
電鋸右鍵可大範圍擊退殭屍與特感

* 原理
    * 仿[CSO 電鋸武器](https://cso.fandom.com/wiki/Ripper#Advantages)，在這款遊戲中，電鋸擁有擊退殭屍的強力效果
    * 拿著電鋸－＞右鍵－＞可近距離擊退多個特感
        * 小殭屍/Witch會被震退
        * Tank/特感會被擊飛

* <details><summary>指令中文介紹 (點我展開)</summary>

    * cfg/sourcemod/l4d2_chainsaw_knockback.cfg
        ```php
        // 0=關閉插件, 1=啟動插件
        l4d2_chainsaw_knockback_enable "1"
        ```
</details>
