# Description | 內容
Drop all weapons, grenades, knife and remaining armor on death.

> __Note__ <br/>
This plugin is private, Please contact [me](/#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](/#私人插件列表-private-plugins-list)

* Apply to | 適用於
	```
	Counter-Strike: Source
	```

* [Video | 影片展示](https://youtu.be/4josvz9xJso)

* Image | 圖示
<br/>![css_drop_on_death_1.gif](image/css_drop_on_death_1.gif)

* <details><summary>How does it work?</summary>

	* Drop pistol, grenades, knife and remaining armor when player dies
</details>

* Require | 必要安裝
<br/>None

* <details><summary>ConVar | 指令</summary>

    * cfg/sourcemod/css_drop_on_death.cfg
        ```php
        // If 1, Drop all weapons and armor on death.
        css_drop_on_death_all_on_death "1"

        // If 1, Drop knife on death.
        css_drop_on_death_knife_on_death "0"

        // If 1, Drop armor on death.
        css_drop_on_death_armor_on_death "1"

        // Minimum amount of armor to enable armor drop.
        css_drop_on_death_armor_min "10"

        // Percentage of depreciation for dropped armor.
        css_drop_on_death_armor_depreciation "0.8"

        // If 1, Enable sprite and physical model for dropped armor.
        css_drop_on_death_armor_sprite "1"

        // Size of model to be scaled.
        css_drop_on_death_armor_model_resize "1.0"

        // Vertical offset of armor model.
        css_drop_on_death_armor_model_voffset "0.0"

        // Sound used for picking up armor. (Empty=Disable)
        css_drop_on_death_armor_pickup_sound "items/ammopickup.wav"

        // If 1, Remove dropped armor on resapwn or disconnect.
        css_drop_on_death_armor_respawn_remove "1"

        // If 1, Drop all weapons and armor if using command to suicide ("kill", "explode")
        css_drop_on_death_suicide_detect "1"
        ```
</details>

* <details><summary>Changelog | 版本日誌</summary>

    * v1.0h (2023-3-8)
		* Remake code, convert code to latest syntax
		* Fix warnings when compiling on SourceMod 1.11.
		* Optimize code and improve performance
        * Use EntIndexToEntRef, safely remove armor model and sprite to fix invalid entity error
        * Delete dropping ammo

    * v3.0.0
        * [Original plugin by bigbalaboom](https://forums.alliedmods.net/showthread.php?t=225785)
</details>

- - - -
# 中文說明
死亡時掉落所有武器、刀、手榴彈與防彈背心

* 適用於
	```
	絕對武力：次世代
	```

* 原理
    * 死亡時掉落身上所有東西
    * 掉落防彈背心(護甲)時出現一顆藍色球體，其他玩家經過自動撿起防彈背心
    * 可掉落複數的手榴彈、煙霧彈、閃光彈

* <details><summary>指令中文介紹 (點我展開)</summary>

    * cfg/sourcemod/css_drop_on_death.cfg
        ```php
        // 0=關閉插件, 1=啟動插件
        css_drop_on_death_all_on_death "1"

        // 為1時，死亡時也掉落刀
        css_drop_on_death_knife_on_death "0"

        // 為1時，死亡時也掉防彈背心 (護甲)
        css_drop_on_death_armor_on_death "1"

        // 死亡玩家生前的護甲至少要10以上才會掉落防彈背心
        css_drop_on_death_armor_min "10"

        // 死亡玩家生前的護甲乘以此數值，成為掉落的護甲數值
        css_drop_on_death_armor_depreciation "0.8"

        // 為1時，護甲有一顆藍色球體顯示
        css_drop_on_death_armor_sprite "1"

        // 球體大小
        css_drop_on_death_armor_model_resize "1.0"

        // 球體離地面的高度
        css_drop_on_death_armor_model_voffset "0.0"

        // 撿起死亡玩家的防彈背心音效檔案，請填入相對路徑 (路徑相對於 sound 資料夾, 空=關閉音效)
        css_drop_on_death_armor_pickup_sound "items/ammopickup.wav"

        // 為1時，死亡的玩家復活之後，移除掉落的防彈背心
        css_drop_on_death_armor_respawn_remove "1"

        // 為1時，使用指令kill,explode自殺也會掉落武器
        css_drop_on_death_suicide_detect "1"
        ```
</details>

