# Description | 內容
If all survivors die, change level to the map 1 of current campaign (Restart Campaign)

* Video | 影片展示
<br/>None

* Image | 圖示
<br/>None

* Apply to | 適用於
    ```
    L4D2 Coop/Realism 
    ```

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	2. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)
	3. [l4d2_mission_manager](https://github.com/fbef0102/L4D2-Plugins/tree/master/l4d2_mission_manager)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d2_change_m1.cfg
        ```php
        // 0=Plugin off, 1=Plugin on.
        l4d2_change_m1_enable "1"

        // Quantity of rounds (tries) events survivors wipe out before force of restart campaign in coop/realism (0=Off)
        l4d2_change_m1_try "2"
        ```
</details>

* <details><summary>Command | 命令</summary>

	None
</details>

* <details><summary>Translation Support | 支援翻譯</summary>

	```
	English
	繁體中文
	简体中文
	```
</details>

* <details><summary>Changelog | 版本日誌</summary>

    * v1.1 (2024-2-20)
        * Require left4dhooks
        * Remake code, optimize and improve performance
        * Update cvars

	* v1.0 (2020-x-x)
	    * Initial Release
</details>

- - - -
# 中文說明
戰役模式下如果倖存者滅團，則直接回到地圖的第一關重新開始戰役

* 原理
	* 如果倖存者滅團超過一定次數，直接回到地圖的第一關重新開始
    * 戰役/寫實模式適用

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d2_change_m1.cfg
        ```php
        // 0=關閉插件, 1=啟動插件
        l4d2_change_m1_enable "1"

		// 戰役/寫實模式下滅團超過2次之後，自動重新開始戰役 (0=關閉這項功能)
        l4d2_change_m1_try "2"
        ```
</details>