# Description | 內容
Hostages become invulnerable and never die.

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Video | 影片展示
<br/>None

* Image | 圖示
	* Players won't have hostage penalty. (打到人質也不會被扣錢)
	<br/>![css_hostage_invulnerable_1](image/css_hostage_invulnerable_1.gif)

* Apply to | 適用於
	```
	Counter-Strike: Source
	```

* Require | 必要安裝
<br/>None

* <details><summary>ConVar | 指令</summary>

    * cfg/sourcemod/css_hostage_invulnerable.cfg
        ```php
        // 0=Plugin off, 1=Plugin on.
        css_hostage_invulnerable_enable "1"

        // 0=Hostage becomes invulnerable, players won't have hostage penalty.
        // 1=Hostage becomes invulnerable, but players still have hostage penalty.
        css_hostage_invulnerable_type "0"
        ```
</details>

* <details><summary>Command | 命令</summary>
    
    None
</details>

* <details><summary>Changelog | 版本日誌</summary>

    * v1.0 (2023-3-3)
	    * Initial Release
</details>

- - - -
# 中文說明
人質不會受傷死亡

* 適用於
	```
	絕對武力：次世代
	```

* 原理
    * 人質不會受傷也不會死亡
    * 即使開槍射到人質也不會扣錢

* <details><summary>指令中文介紹 (點我展開)</summary>

    * cfg/sourcemod/css_hostage_invulnerable.cfg
        ```php
        // 0=關閉插件, 1=啟動插件
        css_hostage_invulnerable_enable "1"

        // 0=開槍射到人質也不會扣錢
        // 1=開槍射到人質會扣錢
        css_hostage_invulnerable_type "0"
        ```
</details>


