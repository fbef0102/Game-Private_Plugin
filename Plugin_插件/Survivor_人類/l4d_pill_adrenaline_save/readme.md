
# Description | 內容
Player can throw adrenaline shot/pill at incapacitated teammates and help them get up immediately.

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/W5ZlPHchgkU)

* Image | 圖示
	<br/>![l4d2_pill_adrenaline_save_1](image/l4d2_pill_adrenaline_save_1.gif)
	<br/>![l4d2_pill_adrenaline_save_2](image/l4d2_pill_adrenaline_save_2.gif)

* <details><summary>How does it work?</summary>

	* Press E to save teammate immediately with an adrenaline shot
    * Press E to save teammate immediately with a pill
</details>


* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
    2. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_pill_adrenaline_save.cfg
        ```php
        // Changes how message displays. (0: Disable, 1:In chat, 2: In Hint Box, 3: In center text)
        l4d_pill_adrenaline_save_announce_type "2"

        // If 1, the player who were saved will get adrenaline shot or pill temp health buff
        l4d_pill_adrenaline_save_buff "1"

        // How close range can player throw adrenaline shot or pill at incapacitated teammates.
        l4d_pill_adrenaline_save_distance "160"

        // 0=Plugin off, 1=Plugin on.
        l4d_pill_adrenaline_save_enable "1"

        // Which item can be throwed at incapacitated teammate, 1: Adrenaline shot, 2: Pill, 3: Both
        l4d_pill_adrenaline_save_item_flag "3"

        // Save survivors if 1: Incap, 2: Hang from ledge, 3: Both
        l4d_pill_adrenaline_save_type "3"
        ```
</details>

* <details><summary>Command | 命令</summary>
    
	* **Open menu for headshot sound personally**
		```php
		sm_headshot
		```
</details>

* Apply to | 適用於
    ```
    L4D1
    L4D2
    ```

* <details><summary>Translation Support | 支援翻譯</summary>

	```
	English
	繁體中文
	简体中文
	```
</details>

* <details><summary>Changelog | 版本日誌</summary>

    * v1.0 (2023-4-1)
	    * Initial Release
</details>

- - - -
# 中文說明
玩家可以朝向倒地玩家扔手中的藥丸或腎上腺素，幫助他們快速救起

* 原理
    * 手持藥丸對著倒地的隊友按E鍵，可以消耗藥丸拯救隊友，隊友會瞬間救起來
    * 手持腎上腺素對著倒地的隊友按E鍵，可以消耗腎上腺素拯救隊友，隊友會瞬間救起來
    * 掛邊的玩家也適用
    * 被救起來的隊友可以短暫獲得Buff效果 (增加臨時生命值與速度)

* 功能
    * 可設置藥丸是否能消耗
    * 可設置腎上腺素是否能消耗
    * 可設置倒地的隊友是否適用
    * 可設置掛邊的隊友是否適用
    * 可設置能扔的距離
    * 可設置被救起的玩家是否接受buff