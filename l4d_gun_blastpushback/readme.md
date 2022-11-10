# Description | 內容
Doraemon Aircannon

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/HQgxXpngBxI)

* Image | 圖示
	* Aircannon
	> 示範圖
	<br/>![l4d_gun_blastpushback_1](image/l4d_gun_blastpushback_1.jpg)

* Apply to | 適用於
```
L4D1
L4D2
```

* <details><summary>Changelog | 版本日誌</summary>

    * v1.0
	    * Original Request by 壹梦
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	2. [[INC] Multi Colors](https://forums.alliedmods.net/showthread.php?t=247770)

* <details><summary>ConVar | 指令</summary>

    * cfg/sourcemod/l4d_gun_blastpushback.cfg
	```php
    // 0=Plugin off, 1=Plugin on.
    l4d_gun_blastpushback_allow "1"

    // Changes how message displays. (0: Disable, 1:In chat, 2: In Hint Box, 3: In center text)
    l4d_gun_blastpushback_announce_type "2"

    // How much damage the Doraemon Aircannon does when fired.
    l4d_gun_blastpushback_damage "30"

    // How much damage the Doraemon Aircannon does when fired. (friendly fire)
    l4d_gun_blastpushback_damage_ff "1"

    // Doraemon Aircannon steam particle effect time. (0=Disable)
    l4d_gun_blastpushback_effect_time "0.5"

    // Turn on the plugin in these game modes, separate by commas (no spaces). (Empty = all).
    l4d_gun_blastpushback_modes ""

    // Turn off the plugin in these game modes, separate by commas (no spaces). (Empty = none).
    l4d_gun_blastpushback_modes_off ""

    // Turn on the plugin in these game modes. 0=All, 1=Coop, 2=Survival, 4=Versus, 8=Scavenge. Add numbers together.
    l4d_gun_blastpushback_modes_tog "0"

    // When hit by the Doraemon Aircannon, push players/infected by this much force.
    l4d_gun_blastpushback_push "400"

    // How long after using the Doraemon Aircannon before it can be used again.
    l4d_gun_blastpushback_push_time "0.5"

    // Doraemon Aircannon explosion radius override.
    l4d_gun_blastpushback_radius "150"

    // How far the Doraemon Aircannon can affect entities.
    l4d_gun_blastpushback_range "800"

    // If 1, Doraemon Aircannon can affect survivors.
    l4d_gun_blastpushback_survivor "1"

    // (L4D2) Empty string to allow all. Allow these weapon IDs being used in this plugin, separate by commas (no spaces). See plugin source code for more details.
    l4d_gun_blastpushback_weapon "14,21,32,33"

    // (L4D1) Empty string to allow all. Allow these weapon IDs being used in this plugin, separate by commas (no spaces). See plugin source code for more details.
    l4d_gun_blastpushback_weapon "6,12,13"
	```
</details>

* <details><summary>Command | 命令</summary>
    None
</details>

- - - -
# 中文說明
多啦A夢的空氣砲

* 原理
    * <details><summary>以下面的指令解釋 (點我展開)</summary>

        > 效果: 拿出近戰武器，按下右鍵推產生一個空氣砲，在800公尺範圍內擊中準心指向的目標，並在目標150公尺周圍內產生影響，所有物件受到衝擊30點傷害，特感會被力道彈開、Witch會被震暈、普通殭屍會被震暈
        ```php
        // (L4D2) Empty string to allow all. Allow these weapon IDs being used in this plugin, separate by commas (no spaces). See plugin source code for more details. 
        l4d_gun_blastpushback_weapon "21"

        // How far the Doraemon Aircannon can affect entities.
        l4d_gun_blastpushback_range "800"

        // Doraemon Aircannon explosion radius override.
        l4d_gun_blastpushback_radius "150"

        // How much damage the Doraemon Aircannon does when fired.
        l4d_gun_blastpushback_damage "30"
        ```
    </details>

* 功能
    1. 右鍵推產生一個空氣砲，特感與普通殭屍會被力道彈開
    2. 空氣砲範圍
    3. 空氣砲有效距離
    3. 特定的武器才能產生空氣砲
    4. 能影響隊友
    5. Tank與Witch可以被空氣砲震暈
    6. 空氣砲能打散物件，包括車子
