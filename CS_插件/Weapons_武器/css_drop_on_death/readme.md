# Description | 內容
Drop all weapons, grenades, knife and remaining armor on death.

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/4josvz9xJso)

* Image | 圖示
	* Drop pistol, grenades, knife and remaining armor
        > 手槍、手榴彈、煙霧彈、閃光彈、刀、剩餘的防彈背心
        <br/>![css_drop_on_death_1.gif](image/css_drop_on_death_1.gif)

* Apply to | 適用於
    ```
    CSS
    ```

* <details><summary>Changelog | 版本日誌</summary>

    * v1.0h (2023-3-8)
		* Remake code, convert code to latest syntax
		* Fix warnings when compiling on SourceMod 1.11.
		* Optimize code and improve performance
        * Use EntIndexToEntRef, safely remove armor model and sprite to fix invalid entity error
        * Delete dropping ammo

    * v3.0.0
        * [Original plugin by bigbalaboom](https://forums.alliedmods.net/showthread.php?p=2031253)
</details>

* Require | 必要安裝
<br/>None

* <details><summary>ConVar | 指令</summary>

    * cfg/sourcemod/css_drop_on_death.cfg
        ```php
        // If 1, Drop all weapons and armor on death.
        css_drop_on_death_all_on_death "1"

        // Percentage of depreciation for dropped armor.
        css_drop_on_death_armor_depreciation "0.8"

        // Minimum amount of armor to enable armor drop.
        css_drop_on_death_armor_min "10"

        // Model used for dropped armor.
        css_drop_on_death_armor_model "models/props/cs_italy/orange.mdl"

        // Size of model to be scaled.
        css_drop_on_death_armor_model_resize "1.0"

        // Vertical offset of armor model.
        css_drop_on_death_armor_model_voffset "0.0"

        // If 1, Drop armor on death.
        css_drop_on_death_armor_on_death "1"

        // Sound used for picking up armor. (Empty=Disable)
        css_drop_on_death_armor_pickup_sound "items/ammopickup.wav"

        // If 1, Remove dropped armor on resapwn or disconnect.
        css_drop_on_death_armor_respawn_remove "1"

        // If 1, Enable sprite and physical model for dropped armor.
        css_drop_on_death_armor_sprite "1"

        // If 1, Drop knife on death.
        css_drop_on_death_knife_on_death "0"

        // If 1, Drop all weapons and armor if using command to suicide ("kill", "explode")
        css_drop_on_death_suicide_detect "1"
        ```
</details>

* <details><summary>Command | 命令</summary>
    
    None
</details>

- - - -
# 中文說明
死亡時掉落所有武器、刀、手榴彈與防彈背心

* 原理
    * 死亡時掉落身上所有東西
    * 掉落防彈背心時出現一顆藍色球體，其他玩家經過自動撿起防彈背心
    * 可掉落複數的手榴彈、煙霧彈、閃光彈

* 功能
    * 可設置是否掉落刀
    * 可設置是否掉落防彈背心
    * 可設置防彈背心損壞比例
    * 可設置如果玩家復活則移除前一次死亡掉落的防彈背心
    * 可設置玩家輸入kill或explode自殺指令也可以掉落身上所有東西


