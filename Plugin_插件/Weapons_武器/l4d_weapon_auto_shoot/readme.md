
# Description | 內容
Automatic shooting for pistol, sniper, hold ATTACK1 (Mouse1).

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/9mYmhI5su9I)

* Image | 圖示
    * Hold ATTACK1 (Mouse1)
    <br/>![l4d_weapon_auto_shoot_1](image/l4d_weapon_auto_shoot_1.gif)
    <br/>![l4d_weapon_auto_shoot_2](image/l4d_weapon_auto_shoot_2.gif)
    <br/>![l4d_weapon_auto_shoot_3](image/l4d_weapon_auto_shoot_3.gif)

* <details><summary>How does it work?</summary>

    * Hold ATTACK1 (Mouse1). Apply the following weapons
        ```php
        pistol
        magnum pistol
        hunting rifle
        military sniper 
        css scout
        css awp
        pump shotgun 
        shotgun chrome
        autoshotgun
        shotgun spas
        grenade launcher // if change clip
        ```
</details>

* Require | 必要安裝
    1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)

* <details><summary>ConVar | 指令</summary>

    * cfg/sourcemod/l4d_weapon_auto_shoot.cfg
        ```php
        // 0=Plugin off, 1=Plugin on.
        l4d_weapon_auto_shoot_enable "1"

        // (L4D2) [ALLOWED WEAPONS] separate by ',' (no spaces).
        // 1=Pistol, 2=Hunt Rif, 3=Magnum, 4=Mil Sniper, 5=Pump Shot, 6=Chrome Shot, 7=Autoshot, 8=SPAS, 9=Scout, 10=AWP, 11=GL
        l4d_weapon_auto_shoot_weapons "1,2,3,4,5,6,7,8"

        // (L4D1) [ALLOWED WEAPONS] separate by ',' (no spaces).
        // 1=Pistol, 2=Hunt Rif
        l4d_weapon_auto_shoot_weapons "1,2,3,4,5,6,7,8"
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

* <details><summary>Changelog | 版本日誌</summary>

    * v1.0h (2024-2-16)
        * Remake code, convert code to latest syntax
        * Fix warnings when compiling on SourceMod 1.11.
        * Optimize code and improve performance
        * Require left4dhooks
        * Fixed errors in l4d1

    * v1.1
        * [By Timocop](https://forums.alliedmods.net/showthread.php?t=212787)
</details>

- - - -
# 中文說明
按住左鍵，手槍、狙擊槍武器可以自動射擊

* 原理
    * 按住左鍵不放可以自動射擊，適用以下武器
        ```php
        手槍
        麥格農手槍
        獵槍
        軍用狙擊槍
        CSS-Scout狙擊槍 
        CSS-AWP狙擊槍
        木製單發散彈槍
        鐵製單發散彈槍
        自動連發散彈槍 
        自動連發戰鬥散彈槍
        榴彈發射器 // 如果彈夾被改變
        ```

* <details><summary>指令中文介紹 (點我展開)</summary>

    * cfg/sourcemod/l4d_weapon_auto_shoot.cfg
        ```php
        // 0=關閉插件, 1=啟動插件
        l4d_weapon_auto_shoot_enable "1"

        // (L4D2) [自動開火的武器] ';' 符號區隔 (無空白)
        // 1=手槍, 2=獵槍, 3=沙漠之鷹, 4=軍用狙擊槍, 5=木製單發散彈槍, 6=鐵製單發散彈槍, 7=自動連發散彈槍 , 8=自動連發戰鬥散彈槍, 9=Scout, 10=AWP, 11=榴彈發射器
        l4d_weapon_auto_shoot_weapons "1,2,3,4,5,6,7,8"

        // (L4D1) [自動開火的武器] ';' 符號區隔 (無空白)
        // 1=手槍, 2=獵槍
        l4d_weapon_auto_shoot_weapons "1,2"
        ```
</details>
