# Description | 內容
Allow player to call menu vote to change difficult, config, and zombie mode.

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Apply to | 適用於
	```
	No More Room in Hell
	```

* Image
	<br/>![nmrih_diffmoder_1](image/nmrih_diffmoder_1.jpg)
	<br/>![nmrih_diffmoder_2](image/nmrih_diffmoder_2.jpg)

* <details><summary>How does it work?</summary>

	* Type ```!difmenu``` to open menu -> call vote to change difficult, config, and zombie mode.
        1. Show Current Settings
        2. Zombie mode
            - Runner
            - All Kid
            - Default
        3. Game Difficult
            - Classic
            - Casual
            - Nightmare
        4. Game configs
            - Realism
            - Friendly Fire
            - Hardcore
            - Infinite Stamina
            - Infinite Ammo
            - Bleeding Out
            - Infected Chance
            - Default
        5. Restart Round
</details>

* Require | 必要安裝
<br/>None

* <details><summary>ConVar | 指令</summary>

    * cfg/sourcemod/nmrih_diffmoder.cfg
        ```php
        // Enable/Disable plugin.
        nmrih_diffmoder_enable "1"

        // Players with these flags have access in this plugin. (Empty = All players have access, -1: Noboday has access)
        nmrih_diffmoder_admin_access "-1"

        // Ammo mode for all non-access players (With infinite ammo vote enable)
        // 1 - Infinite ammo, 2 - Infinite clip
        nmrih_diffmoder_infinite_ammo_all "1"

        // Ammo mode for all access players (Without infinite ammo vote enable)
        // 0 - Normal mode
        // 1 - Infinite ammo
        // 2 - Infinite clip
        nmrih_diffmoder_infinite_ammo_admin "1"
        ```
</details>

* <details><summary>Command | 命令</summary>
    
	* **Open Menu**
		```php
		sm_difmenu
		sm_difvote
		```
</details>

* Translation Support | 支援翻譯
	```
	translations/nmrih_diffmoder.phrases.txt
	```

* <details><summary>Changelog | 版本日誌</summary>

    * v1.0h (2025-2-15)
        * Remake code
        * Add infinite ammo, infinite stamina, round restart, bleeding out, infection
        * Update menu, cvars, cmds, translation

    * Original & Credit
	    * [Grey83](https://forums.alliedmods.net/showthread.php?t=261699)
	    * [mostten](https://forums.alliedmods.net/showthread.php?t=301322)
</details>

- - - -
# 中文說明
輸入 !difmenu 可以打開菜單投票切換參數, 模式, 難度

* 圖示
	<br/>![zho/nmrih_diffmoder_1](image/zho/nmrih_diffmoder_1.jpg)
	<br/>![zho/nmrih_diffmoder_2](image/zho/nmrih_diffmoder_2.jpg)

* 原理
    * 輸入 ```!difmenu``` 可以打開菜單 -> 發起投票 -> 修改參數, 模式, 難度
        1. 顯示目前設置
        2. 喪屍模式
            - 奔跑
            - 全小孩
            - 預設
        3. 遊戲難度
            - 經典
            - 休閒
            - 惡夢
        4. 遊戲參數
            - 寫實模式開關
            - 隊友友傷開關
            - 硬核生存開關
            - 無限體力開關
            - 無限子彈開關
            - 血流不止開關
            - 感染屍變開關
            - 預設遊戲參數
        5. 重啟回合

* <details><summary>指令中文介紹 (點我展開)</summary>

    * cfg/sourcemod/nmrih_diffmoder.cfg
        ```php
        // 0=關閉插件, 1=啟動插件
        nmrih_diffmoder_enable "1"

        // Players with these flags have access in this plugin. (Empty = All players have access, -1: Noboday has access)
        nmrih_diffmoder_admin_access "-1"

        // Ammo mode for all non-access players (With infinite ammo vote enable)
        // 1 - Infinite ammo, 2 - Infinite clip
        nmrih_diffmoder_infinite_ammo_all "1"

        // Ammo mode for all access players (Without infinite ammo vote enable)
        // 0 - Normal mode
        // 1 - Infinite ammo
        // 2 - Infinite clip
        nmrih_diffmoder_infinite_ammo_admin "1"
        ```
</details>

* <details><summary>命令中文介紹 (點我展開)</summary>
    
	* **打開菜單**
		```php
		sm_difmenu
		sm_difvote
		```
</details>



