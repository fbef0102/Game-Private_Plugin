# Description | 內容
Prevents collisions with teammates.

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Video | 影片展示
<br/>None

* Image | 圖示
	* Only collisions with enemies
        > 只跟敵人身體有碰撞
        <br/>![css_team_noblock_1](image/css_team_noblock_1.gif)
	* Run through teammates
        > 穿透隊友
        <br/>![css_team_noblock_2](image/css_team_noblock_2.gif)
	* Grendates still collide with teammates
        > 投擲物品不會穿透隊友
        <br/>![css_team_noblock_3](image/css_team_noblock_3.gif)

* Apply to | 適用於
    ```
    CSS
    ```

* <details><summary>Changelog | 版本日誌</summary>

	```php
	//tigerox @ 2011
	//HarryPotter @ 2023
	```
    * v1.0h (2023-3-6)
        * Request by Tanja
	    * Remake code
        * Fix warnings when compiling on SourceMod 1.11.
        * Prevents grendates from stuck in teamamtes

    * v2.0 
        * [Original Plugin by tigerox](https://forums.alliedmods.net/showthread.php?p=1400370?p=1400370)
</details>

* Require | 必要安裝
<br/>None

* <details><summary>ConVar | 指令</summary>

    * cfg/sourcemod/css_team_noblock.cfg
        ```php
        // 0=Plugin off, 1=Plugin on.
        css_team_noblock_enable "1"
        ```
</details>

* <details><summary>Command | 命令</summary>
    
    None
</details>

- - - -
# 中文說明
隊友可以穿透不擋路

* 原理
	* 穿透隊友不會造成擋路
    * 只跟敵人身體有碰撞
	* 投擲物品或丟棄的武器不會穿透隊友也不會造成隊友卡住

* 功能
    * 可開關


