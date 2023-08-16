# Description | 內容
Add power abilities to infected

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Video | 影片展示
<br>None

* Image | 圖示
<br>None

* <details><summary>Detail</summary>

    * Type ```!infskl```: No CD time for infected ability
    * Type ```!beinf```: Switch to infected team (works in coop/realism mode)
    * Type ```!besur``` : Switch survivor team
    * Type ```!betank``` : You become tank immediately
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	2. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)

* <details><summary>ConVar | 指令</summary>

    * cfg/sourcemod/l4d2_infected_strong_power.cfg
        ```php
        // 0=Plugin off, 1=Plugin on.
        l4d2_infected_strong_power_allow "1"

        // If 1, Enable SI Skill ability: No CD time for infected ability (!infskl command)
        l4d2_infected_strong_power_skill_enable "1"

        // Player with these flag have access to use !infskl command (Empty=Everyone, -1=No one)
        l4d2_infected_strong_power_skill_flags ""

        // If 1, player can use !beinf to infected team or !besur to survivor team
        l4d2_infected_strong_power_team_enable "1"

        // Players with these flags have access to use command to infected and survivor team. (Empty = Everyone, -1: Nobody)
        l4d2_infected_strong_power_team_flag ""

        // If 1, player can use !betank to become tank immediately
        l4d2_infected_strong_power_betank_enable "1"

        // Players with these flags have access to use command to become tank immediately (Empty = Everyone, -1: Nobody)
        l4d2_infected_strong_power_betank_flag ""
        ```
</details>

* <details><summary>Command | 命令</summary>
	
	* **Turn on/off SI Skill ability.**
		```php
		sm_infskl
		```

	* **SWitch to infected team**
		```php
		sm_beinf
		```

	* **SWitch to survivor team**
		```php
		sm_besur
		```

	* **Become Tank immediately**
		```php
		sm_betank
		```
</details>

* Apply to | 適用於
    ```
    L4D2
    ```

* <details><summary>Changelog | 版本日誌</summary>

    * 1.0h (2023-8-15)
	    * Initial Release
</details>

- - - -
# 中文說明
給真人特感玩家增加許多能力

* 原理
    * 特感玩家輸入以下命令可以
        * ```!infskl```: 特感無CD時間
        * ```!beinf```: 切換到特感隊伍 (戰役/寫實模式能適用)
        * ```!besur``` : 切換到倖存者隊伍
        * ```!betank``` : 直接變成Tank

* <details><summary>指令中文介紹 (點我展開)</summary>

    * cfg/sourcemod/l4d2_infected_strong_power.cfg
        ```php
        // 0=關閉插件, 1=啟動插件
        l4d2_infected_strong_power_allow "1"

        // 為1時，玩家可以啟用能力: 特感無CD時間 (輸入!infskl)
        l4d2_infected_strong_power_skill_enable "1"

        // 擁有這些權限的玩家，才可以輸入!infskl (留白 = 任何人都能, -1: 無人)
        l4d2_infected_strong_power_skill_flags ""

        // 為1時，玩家可以切換到特感與倖存者隊伍 (輸入!beinf與!besur)
        l4d2_infected_strong_power_team_enable "1"

        // 擁有這些權限的玩家，才可以輸入!beinf與!besur (留白 = 任何人都能, -1: 無人)
        l4d2_infected_strong_power_team_flag ""

        // 為1時，玩家可以直接變成Tank (輸入!betank)
        l4d2_infected_strong_power_betank_enable "1"

        // 擁有這些權限的玩家，才可以輸入!betank (留白 = 任何人都能, -1: 無人)
        l4d2_infected_strong_power_betank_flag ""
        ```
</details>

* <details><summary>命令中文介紹 (點我展開)</summary>
	
	* **開關特感無CD時間的能力.**
		```php
		sm_infskl
		```

	* **切換到特感隊伍 (戰役/寫實模式能適用)**
		```php
		sm_beinf
		```

	* **切換到倖存者隊伍**
		```php
		sm_besur
		```

	* **直接變成Tank**
		```php
		sm_betank
		```
</details>
