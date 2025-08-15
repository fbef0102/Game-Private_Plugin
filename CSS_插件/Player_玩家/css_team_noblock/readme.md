# Description | 內容
Prevents collisions with teammates.

> __Note__ <br/>
This plugin is private, Please contact [me](/#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](/#私人插件列表-private-plugins-list)

* Apply to | 適用於
	```
	Counter-Strike: Source
	```

* Image | 圖示
    <br/>![css_team_noblock_1](image/css_team_noblock_1.gif)
    <br/>![css_team_noblock_2](image/css_team_noblock_2.gif)
    <br/>![css_team_noblock_3](image/css_team_noblock_3.gif)

* <details><summary>How does it work?</summary>

	* Run through teammates, only collisions with enemies
    * Grendates fly through teammates
</details>

* <details><summary>Known Issue</summary>

	1. After install plugin, the props on the map become floating and bouncing.
		> To Fix Mayhem Bug, install [Physics Mayhem Bug Fix](https://forums.alliedmods.net/showthread.php?p=2826180)
</details>

* Require | 必要安裝
    1. [Physics Mayhem Bug Fix](https://forums.alliedmods.net/showthread.php?t=348804): Fix physics mayhem/bouncing props BUG
        * 解決物體或武器下沉地圖的Bug

* <details><summary>ConVar | 指令</summary>

    * cfg/sourcemod/css_team_noblock.cfg
        ```php
        // 0=Plugin off, 1=Plugin on.
        css_team_noblock_enable "1"

        // If 1, Grenades just fly through your own teammates.
        css_team_noblock_grenade_enable "1"
        ```
</details>

* <details><summary>Changelog | 版本日誌</summary>

    * v1.3h (2024-10-23)
        * Remove CollisionHook
        * Require sm1.12 or above

    * v1.2h (2024-4-6)
        * Require CollisionHook
        * Fixed physics mayhem/bouncing props bug.

    * v1.1h (2023-3-8)
        * Grenades just fly through your own teammates.

    * v1.0h (2023-3-6)
	    * Remake code
        * Fix warnings when compiling on SourceMod 1.11.
        * Prevents grendates from stuck in teamamtes

    * v2.0 
        * [Original Plugin by tigerox](https://forums.alliedmods.net/showthread.php?t=148599)
</details>

- - - -
# 中文說明
隊友可以穿透不擋路

* 適用於
	```
	絕對武力：次世代
	```

* 原理
	* 穿透隊友不會造成擋路，只跟敵人身體有碰撞
	* 手榴彈可以穿透隊友

* <details><summary>指令中文介紹 (點我展開)</summary>

    * cfg/sourcemod/css_team_noblock.cfg
        ```php
        // 0=關閉插件, 1=啟動插件
        css_team_noblock_enable "1"

        // 為1時，手榴彈可以穿透隊友
        css_team_noblock_grenade_enable "1"
        ```
</details>

* <details><summary>已知問題</summary>

	1. 裝這插件之後，地圖經常發生物件掉落或浮空的問題
		> 修復請安裝[Physics Mayhem Bug Fix](https://forums.alliedmods.net/showthread.php?p=2826180)
</details>


