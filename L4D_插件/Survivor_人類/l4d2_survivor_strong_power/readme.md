# Description | 內容
Add power abilities to survivors

> __Note__ <br/>
This plugin is private, Please contact [me](/#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](/#私人插件列表-private-plugins-list)

* Apply to | 適用於
    ```
    L4D2
    ```

* <details><summary>How does it work?</summary>

    * Type ```!nofall```: you won't get fall damage 
    * Type ```!adlin```: you get adrenaline effect permanently
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
    2. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)
	
* <details><summary>ConVar | 指令</summary>

    * cfg/sourcemod/l4d2_survivor_strong_power.cfg
        ```php
        // 0=Plugin off, 1=Plugin on.
        l4d2_survivor_strong_power_allow "1"

        // If 1, Enable No Fall Damage ability: survivor won't get fall damage (!nofall command)
        l4d2_survivor_strong_power_nofall_enable "1"

        // Player with these flag have access to enable the !nofall command (Empty=Everyone, -1=No one)
        l4d2_survivor_strong_power_nofall_flags ""

        // If 1, turn on No Fall Damage ability for players by default
        l4d2_survivor_strong_power_nofall_default "0"

        // If 1, Enable Permant Adrenaline ability: survivor get adrenaline effect permanently (!adlin command)
        l4d2_survivor_strong_power_adrenaline_enable "1"

        // Player with these flag have access to enable the !adlin command (Empty=Everyone, -1=No one)
        l4d2_survivor_strong_power_adrenaline_flags ""

        // If 1, turn on Permant Adrenaline ability for players by default
        l4d2_survivor_strong_power_adrenaline_default "0"
        ```
</details>

* <details><summary>Command | 命令</summary>
	
	* **Turn on/off no fall damage power.**
		```php
		sm_nofall
		```

	* **Turn on/off permant adrenaline effect power.**
		```php
		sm_adlin
		```
</details>

* <details><summary>Changelog | 版本日誌</summary>

    * 1.0 (2023-8-16)
	    * Initial Release
</details>

- - - -
# 中文說明
給真人倖存者玩家增加許多能力

* 原理
    * 人類玩家輸入以下命令可以
        * ```!nofall``` : 從高處墬落不會摔傷
        * ```!adlin``` : 永久處於腎上腺素的狀態下
        
* <details><summary>指令中文介紹 (點我展開)</summary>

    * cfg/sourcemod/l4d2_survivor_strong_power.cfg
        ```php
        // 0=關閉插件, 1=啟動插件
        l4d2_survivor_strong_power_allow "1"

        // 為1時，啟用 No Fall Damage 能力: 人類從高處墬落不會摔傷 (輸入!nofall命令獲得此能力)
        l4d2_survivor_strong_power_nofall_enable "1"

        // 擁有這些權限的玩家，才可以輸入!nofall (留白 = 任何人都能, -1: 無人)
        l4d2_survivor_strong_power_nofall_flags ""

        // 為1時，預設幫玩家開啟 No Fall Damage 能力
        l4d2_survivor_strong_power_nofall_default "0"

        // 為1時，啟用 Permant Adrenaline 能力: 人類從高處墬落不會摔傷 (輸入!adlin命令獲得此能力)
        l4d2_survivor_strong_power_adrenaline_enable "1"

        // 擁有這些權限的玩家，才可以輸入!adlin (留白 = 任何人都能, -1: 無人)
        l4d2_survivor_strong_power_adrenaline_flags ""

        // 為1時，預設幫玩家開啟 Permant Adrenaline 能力
        l4d2_survivor_strong_power_adrenaline_default "0"
        ```
</details>
