
# Description | 內容
Restrict each weapon limit in CT and T team respectively

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Apply to | 適用於
	```
	Counter-Strike: Source
	```

* Image | 圖示
    * display message when you try to pick up or buy weapons (顯示武器拿取限制)
    <br/>![css_weapon_limit_1](image/css_weapon_limit_1.jpg)

* <details><summary>How does it work?</summary>

    * Restrict each weapon limit in CT and T team respectively, the player can't pick up or buy limit weapons
    * Open cfg/server.cfg and write down cmds. For example:
        ```php
        // ct = counter terrorist team
        // t = Terrorism team
        css_wlimits_add 0 ct awp
        css_wlimits_add 1 ct m249

        css_wlimits_add 2 t scout
        css_wlimits_add 0 t flashbang
        css_wlimits_add 0 t smokegrenade
        css_wlimits_add 0 t hegrenade
        ```

    * Names for all weapons alias
        ```php
        glock
        usp
        p228
        deagle 
        elite 
        fiveseven 
        m3 
        xm1014
        galil 
        ak47 
        scout 
        sg552 
        awp 
        g3sg1 
        famas 
        m4a1 
        aug 
        sg550 
        mac10 
        tmp 
        mp5navy 
        ump45 
        p90 
        m249
        flashbang 
        hegrenade 
        smokegrenade
        knife
        ```
</details>

* Require | 必要安裝
    1. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)

* <details><summary>ConVar | 指令</summary>

    * cfg/sourcemod/css_weapon_limit.cfg
        ```php
        // 0=Plugin off, 1=Plugin on.
        css_weapon_limit_enable "1"

        // Time interval bewteen weapon limit notify. (0=off)
        css_weapon_limit_cooltime_block "3.0"
        ```
</details>

* <details><summary>Command | 命令</summary>
    
    * **Add a weapon limit**
        ```php
        css_wlimits_add <limit> <CT or T> <weapon alias>
        ```
</details>

* <details><summary>Changelog | 版本日誌</summary>

    * v1.0
        * Initial Release
</details>

- - - -
# 中文說明
限制反恐小組與恐怖份子隊伍內，每一種武器可以拿取的數量，超過就不能撿起也不能購買

* 適用於
	```
	絕對武力：次世代
	```

* 原理
    * 當要撿起武器時，計算隊友之中已經拿取的數量，超過便不能撿起
    * 當要購買武器時，計算隊友之中已經拿取的數量，超過便不能購買
    * 可以限制手榴彈、煙霧彈、閃光彈、刀

* <details><summary>使用步驟</summary>

    * 打開 cfg/server.cfg 文件並寫下想要限制的武器，譬如
        ```php
        // css_wlimits_add <限制數量> <CT 或 T> <武器短名>
        // ct = 反恐小組
        // t = 恐怖份子
        css_wlimits_add 0 ct awp
        css_wlimits_add 1 ct m249

        css_wlimits_add 2 t scout
        css_wlimits_add 0 t flashbang
        css_wlimits_add 0 t smokegrenade
        css_wlimits_add 0 t hegrenade
        ```

    * 所有武器短名
        ```php
        glock
        usp
        p228
        deagle 
        elite 
        fiveseven 
        m3 
        xm1014
        galil 
        ak47 
        scout 
        sg552 
        awp 
        g3sg1 
        famas 
        m4a1 
        aug 
        sg550 
        mac10 
        tmp 
        mp5navy 
        ump45 
        p90 
        m249
        flashbang  => 閃光彈
        hegrenade  => 高爆手榴彈
        smokegrenade => 煙霧彈
        knife => 刀
        ```
</details>

* <details><summary>指令中文介紹 (點我展開)</summary>

    * cfg/sourcemod/l4d_weapon_limits.cfg
        ```php
        // 0=關閉插件, 1=啟動插件
        css_weapon_limit_enable "1"
        
        // 訊息提示的間隔. (0=不提示)
        css_weapon_limit_cooltime_block "3.0"
        ```
</details>

* <details><summary>命令中文介紹 (點我展開)</summary>

    * **Add a weapon limit**
        ```php
        css_wlimits_add <限制數量> <CT 或 T> <武器短名>
        ```
</details>
