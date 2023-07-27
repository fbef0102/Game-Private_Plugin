# Description | 內容
L4D1/2 infected get speed boost while duck or climbing the ladder

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/1-6phGIURTg)

* Image | 圖示
    <br/>![l4d_infected_speed_boost_1](image/l4d_infected_speed_boost_1.gif)
    <br/>![l4d_infected_speed_boost_2](image/l4d_infected_speed_boost_2.gif)

* Apply to | 適用於
    ```
    L4D1
    L4D2
    ```

* <details><summary>Changelog | 版本日誌</summary>

  * v1.0
      * Initial Release
</details>

* Require | 必要安裝
    1. [Lagged Movement - Plugin Conflict Resolver](https://forums.alliedmods.net/showthread.php?t=340345)

* Related Plugin | 相關插件
    1. [l4d_si_slowdown](/Plugin_插件/Special_Infected_特感/l4d_si_slowdown): Manages the gunfire slowdown for infected team
        > 依據槍械種類修改特感隊伍的槍緩速度
    
    2. [l4d_rejump](/Plugin_插件/Nothing_Impossible_無理改造版/l4d_rejump): Allows multi-jumping on air.
        > 成為超級瑪利歐，人類與特感能在空中使用月步，多次跳躍

* <details><summary>ConVar | 指令</summary>

  * cfg/sourcemod/l4d_infected_speed_boost.cfg
    ```php
    // If 1, AI infected can use duck speed boost.
    l4d_infected_duck_ai "1"

    // Which zombie class can boost duck speed? 0=All, 1=Smoker, 2=Boomer, 4=Hunter, 8=Spitter, 16=Jockey, 32=Charger, 128=Tank. Add numbers together.
    l4d_infected_duck_flags "0"

    // If 1, Real infected Player can use duck speed boost.
    l4d_infected_duck_real_player "1"

    // Set infected duck speed boost multiper.
    l4d_infected_duck_speed_boost "2.5"

    // If 1, AI infected can use ladder speed boost.
    l4d_infected_ladder_ai "1"

    // Which zombie class can boost ladder speed? 0=All, 1=Smoker, 2=Boomer, 4=Hunter, 8=Spitter, 16=Jockey, 32=Charger, 128=Tank. Add numbers together.
    l4d_infected_ladder_flags "0"

    // If 1, Real infected player can use ladder speed boost.
    l4d_infected_ladder_real_player "1"

    // Set infected ladder speed boost multiper.
    l4d_infected_ladder_speed_boost "2.5"

    // 0=Plugin off, 1=Plugin on.
    l4d_infected_speed_allow "1"

    // Turn on the plugin in these game modes, separate by commas (no spaces). (Empty = all).
    l4d_infected_speed_modes ""

    // Turn off the plugin in these game modes, separate by commas (no spaces). (Empty = none).
    l4d_infected_speed_modes_off ""

    // Turn on the plugin in these game modes. 0=All, 1=Coop, 2=Survival, 4=Versus, 8=Scavenge. Add numbers together.
    l4d_infected_speed_modes_tog "0"
    ```
</details>

* <details><summary>Command | 命令</summary>

    None
</details>

- - - -
# 中文說明
特感在爬梯或蹲下期間自動加速移動

* 原理
    * 特感蹲下移動時會加速
    * 特感爬梯移動時會加速

* 功能
    * 可設置AI或真人玩家是否能加速
    * 可設置蹲下的加速倍率
    * 可設置爬梯的加速倍率
