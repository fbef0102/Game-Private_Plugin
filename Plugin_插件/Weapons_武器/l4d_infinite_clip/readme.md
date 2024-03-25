
# Description | 內容
Weapons now have infinite clip without reload + Chainsaw now is always refilled

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Video | 影片展示
<br/>None

* <details><summary>Image | 圖示</summary>

    <br/>![l4d_infinite_clip_1](image/l4d_infinite_clip_1.gif)
    <br/>![l4d_infinite_clip_2](image/l4d_infinite_clip_2.gif)
    <br/>![l4d_infinite_clip_3](image/l4d_infinite_clip_3.gif)
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)

* <details><summary>ConVar | 指令</summary>

    * cfg/sourcemod/l4d_infinite_clip.cfg
        ```php
        // 0=Plugin off, 1=Plugin on.
        l4d_infinite_clip_enable "1"

        // Player with these flag can have infinite clip (Empty=Everyone, -1=No one)
        l4d_infinite_clip_flags ""

        // If 1, Enable infinite explosive and incendiary ammo
        l4d_infinite_clip_upgrade "0"

        // (L4D2) Empty string to allow all. Allow these weapon IDs being used in this plugin, separate by commas (no spaces). See plugin source code for more details.
        l4d_infinite_clip_weapon "1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20"
        ```
</details>

* <details><summary>Command | 命令</summary>
    
    None
</details>

* Apply to | 適用於
    ```
    L4D1
    L4D2
    ```

* <details><summary>Related Plugin | 相關插件</summary>

	1. [Reserve (Ammo) Control](https://forums.alliedmods.net/showthread.php?t=334274): Individually control weapons's reserve counts independent of the ammo_* cvars.
		* 每一種槍枝都有獨立的備用彈藥
</details>

* <details><summary>Changelog | 版本日誌</summary>

    * v1.0 (2024-3-25)
	    * Initial Release
</details>

- - - -
# 中文說明
武器可以無限射擊，不需要換彈夾 + 電鋸擁有無限油量

* 原理
    * 彈夾無限子彈，不需要換彈夾
    * 電鋸無限使用
    * 燃燒子彈與高爆子彈無限

* <details><summary>指令中文介紹 (點我展開)</summary>

    * cfg/sourcemod/l4d_infinite_clip.cfg
        ```php
        // 0=關閉插件, 1=啟動插件
        l4d_infinite_clip_enable "1"

        // 擁有這些權限的玩家，才能有無限子彈功能 (留白 = 任何人都能, -1: 無人)
        l4d_infinite_clip_flags ""

        // 為1時，燃燒子彈與高爆子彈無限
        l4d_infinite_clip_upgrade "0"

        // (L4D2) 空=允許全武器. 填入武器的ID，只允許這些武器可以使出空氣砲, 逗號分隔（不須空格）. 請打開源碼查看武器的ID列表
        l4d_infinite_clip_weapon "1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20"

        // (L4D1) 空=允許全武器. 填入武器的ID，只允許這些武器可以使出空氣砲, 逗號分隔（不須空格）. 請打開源碼查看武器的ID列表
       l4d_infinite_clip_weapon "1,2,3,4,5,6"
        ```
</details>