# Description | 內容
Press R using pick up anim when full ammo (View weapons mod)

> __Note__ <br/>
This plugin is private, Please contact [me](/#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](/#私人插件列表-private-plugins-list)

* Apply to | 適用於
    ```
    L4D2
    ```

* [Video | 影片展示](https://youtu.be/2dsUJz3gtVM)

* <details><summary>Image | 圖示</summary>

	* Press R button to view weapons pick-up animation
    <br/>![l4d_view_mods_pickup_anim_1](image/l4d_view_mods_pickup_anim_1.gif)
    <br/>![l4d_view_mods_pickup_anim_2](image/l4d_view_mods_pickup_anim_2.gif)
    <br/>![l4d_view_mods_pickup_anim_3](image/l4d_view_mods_pickup_anim_3.gif)
    <br/>![l4d_view_mods_pickup_anim_4](image/l4d_view_mods_pickup_anim_4.gif)
    <br/>![l4d_view_mods_pickup_anim_5](image/l4d_view_mods_pickup_anim_5.gif)
    <br/>![l4d_view_mods_pickup_anim_6](image/l4d_view_mods_pickup_anim_6.gif)
</details>

* <details><summary>How does it work?</summary>

    * Press R button to view weapons pick-up animation
    * Some custom weapon/item mods have changed pick-up animation, For example: [Weapon mods by Denny凯妈](https://steamcommunity.com/profiles/76561198422460647/myworkshopfiles/)
        * View hidden or secret animation
        * View weapon or item like csgo
        * If mod adds more pick-up animation, you can modify [data/l4d_view_mods_pickup_anim.cfg](data/l4d_view_mods_pickup_anim.cfg)
    * Does not work on official mods
    * 🟥 This plugins is only designed for custom weapon mods, not working on all custom mods
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)

* Directory Structure | 檔案結構
	```
	/
	├── plugins/
	│	└── l4d2_cs_kill_hud.smx            # Compiled plugin | 已編譯的插件
	├── data/
	│	└── l4d2_cs_kill_hud.cfg            # Customize pick-up animation | 新增更多檢視武器動畫
	└── scripting/
		└── l4d2_cs_kill_hud.sp             # Source code | 源碼
	```

* <details><summary>ConVar | 指令</summary>

    * cfg/sourcemod/l4d_view_mods_pickup_anim.cfg
        ```php
        // 0=Plugin off, 1=Plugin on.
        l4d_view_mods_pickup_anim_enable "1"

        // Press which button to trigger animation, 131072=Shift, 32=Use, 8192=Reload, 524288=Middle Mouse
        // You can add numbers together, ex: 139264=Shift + Reload
        l4d_view_mods_pickup_anim_buttons "8192"

        // If 1, enable debug mode (inspect animation sequences of the weapon currently in hand)
        l4d_view_mods_pickup_anim_debug "0"
        ```
</details>

* <details><summary>Command | 命令</summary>
    
    * **Trigger pick up anim animation**
        ```php
        sm_viewpickup
        ```
</details>

* <details><summary>Changelog | 版本日誌</summary>

    * v1.3 (2026-9-29)
        * Unable to view pick up anim animation when the weapon is unable to fire

    * v1.2 (2025-9-10)
        * Update cvars
        * Add cmds

    * v1.1 (2025-8-29)
	    * Add date file
        * You can add more view weapons pick-up animation in data file 

    * v1.0 (2023-9-21)
	    * Initial Release
</details>

- - - -
# 中文說明
最大彈夾容量時候按R鍵循環播放伸手動作（為mod檢視武器設計）

* 原理
    * 拿著槍枝或物品－＞按下R鍵 (彈夾必須滿膛)－＞會有伸手動作

* 用意在哪?
    * 有些自製的槍枝或物品模組，有自製的檢視武器動畫
        * 譬如: [這位作者的槍枝模組](https://steamcommunity.com/profiles/76561198422460647/myworkshopfiles/)，大部分模組有檢視武器的動畫效果
        * 可以像CSGO，檢視槍枝模型或隱藏秘密動畫
        * 若模組作者有新增更多檢視武器動畫, 需到文件自行新增動畫: [data/l4d_view_mods_pickup_anim.cfg](data/l4d_view_mods_pickup_anim.cfg)
    * 不適用官方的模組
    * 🟥 為自製的模組檢視武器設計用的插件，並不是每個槍枝模組都有特殊動畫

* <details><summary>指令中文介紹 (點我展開)</summary>

    * cfg/sourcemod/l4d_view_mods_pickup_anim.cfg
        ```php
        // 0=關閉插件, 1=啟動插件
        l4d_view_mods_pickup_anim_enable "1"

		// 使用哪個按鍵觸發伸手動作 (檢視武器動畫)? 131072=Shift鍵, 32=E鍵, 8192=裝彈鍵, 524288=滾輪鍵
		// 可以數字相加, 譬如: 139264=必須同時按 "Shift鍵 + 裝彈鍵"
        l4d_view_mods_pickup_anim_buttons "8192"

        // 為1時, 啟用debug模式 (顯示目前武器的動畫sequence)
        l4d_view_mods_pickup_anim_debug "0"
        ```
</details>

* <details><summary>命令中文介紹 (點我展開)</summary>
    
    * **觸發伸手動作 (檢視武器動畫)**
        ```php
        sm_viewpickup
        ```
</details>
