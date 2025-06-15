# Description | 內容
Allow refuelling of a chainsaw with ammo piles

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Apply to | 適用於
	```
	L4D2
	```

* Image | 圖示
    <br/>![l4d2_chainsaw_ammo_1](image/l4d2_chainsaw_ammo_1.gif)

* Require | 必要安裝
    1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)

* <details><summary>ConVar | 指令</summary>

    * cfg/sourcemod/l4d_infinite_clip.cfg
        ```php
        // 0=Plugin off, 1=Plugin on.
        l4d2_chainsaw_ammo_enable "1"

        // If 1, Remove a chainsaw if it empty
        l4d2_chainsaw_ammo_remove "0"

        // If 1, Enable dropping a chainsaw with Reload button
        l4d2_chainsaw_ammo_drop "0"

        // How message displays. (0: Disable, 1:In chat, 2: In Hint Box, 3: In center text)
        l4d2_chainsaw_ammo_announce_type "1"
        ```
</details>

* <details><summary>Changelog | 版本日誌</summary>

    * v1.0 (2024-4-28)
        * Initial Release
</details>

- - - -
# 中文說明
電鋸可以用彈藥堆填充油量

* 原理
    * 從子彈堆拾取子彈時可以順便填充電鋸油量

* <details><summary>指令中文介紹 (點我展開)</summary>

    * cfg/sourcemod/l4d_infinite_clip.cfg
        ```php
        // 0=關閉插件, 1=啟動插件
        l4d2_chainsaw_ammo_enable "1"

        // 為1時，如果電鋸沒油了，會消失 (0=不消失)
        l4d2_chainsaw_ammo_remove "0"

        // 為1時，按下Ｒ鍵可以丟下電鋸 (0=關閉)
        l4d2_chainsaw_ammo_drop "0"

        // 填充電鋸的訊息該如何顯示. (0: 不提示, 1: 聊天框, 2: 黑底白字框, 3: 螢幕正中間)
        l4d2_chainsaw_ammo_announce_type "1"
        ```
        ```
</details>