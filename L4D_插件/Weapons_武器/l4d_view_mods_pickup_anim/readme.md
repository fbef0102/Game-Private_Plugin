# Description | 內容
Press R using pick up anim when full ammo (View weapons mod)

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

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
    * Some custom weapon/item mods have changed pick-up animation,  For example: [Weapon mods by Denny凯妈](https://steamcommunity.com/profiles/76561198422460647/myworkshopfiles/)
        * View hidden or secret animation
        * View weapon or item like csgo
    * Does not work on official mods
</details>

> __Warning__
<br/> 🟥 This plugins is only designed for custom weapon mods, not working on all custom mods

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)

* <details><summary>ConVar | 指令</summary>

    * cfg/sourcemod/l4d_view_mods_pickup_anim.cfg
        ```php
        // 0=Plugin off, 1=Plugin on.
        l4d_view_mods_pickup_anim_enable "1"
        ```
</details>

* <details><summary>Changelog | 版本日誌</summary>

    * v1.0 (2023-9-21)
	    * Initial Release
</details>

- - - -
# 中文說明
最大彈夾容量時候按R鍵循環播放伸手動作（為mod檢視武器設計）

* 原理
    * 拿著槍枝或物品－＞按下R鍵 (彈夾必須滿膛)－＞會有伸手動作

* 用意在哪?
    * 有些自製的槍枝或物品模組，將伸手動作修改成其他的動畫
        * 譬如: [這位作者的槍枝模組](https://steamcommunity.com/profiles/76561198422460647/myworkshopfiles/)，大部分模組有檢視武器的動畫效果
        * 可以像CSGO，檢視槍枝模型或隱藏秘密動畫
    * 不適用官方的模組

> __Warning__
<br/> 🟥 為自製的模組檢視武器設計用的插件，並不是每個槍枝模組都有特殊動畫
