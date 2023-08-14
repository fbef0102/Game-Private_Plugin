# Description | 內容
When the Tank dies a health field is generated in which the survivors receive health.

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/2rtUI2A5aQ4)

* Image | 圖示
	<br/>![l4d_healing_field_1](image/l4d_healing_field_1.gif)

* Require | 必要安裝
    1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)

* <details><summary>ConVar | 指令</summary>

    * cfg/sourcemod/l4d_healing_field.cfg
        ```php
        // Chance that when the Tank dies a healing field is generated. 0 = Plugin OFF
        l4d_healing_field_chance "80"

        // The default color of the healing field. Three values between 0-255 separated by spaces. RGB Color255 - Red Green Blue. [-1: Random]
        l4d_healing_field_colors "0 255 0"

        // Enables/Disables the glowing on entities. 1 = Glow ON. 0 = Glow OFF.
        l4d_healing_field_glow "1"

        // Sets the amount of health survivors receive per second.
        l4d_healing_field_health "3"

        // Max client Health limit
        l4d_healing_field_health_max "200"

        // Sets the duration time of the healing field (Seconds).
        l4d_healing_field_life "20.0"

        // Sets the max range of the healing field.
        l4d_healing_field_range "200.0"
        ```
</details>

* <details><summary>Command | 命令</summary>
    
	* **Create an entity which radiates healing for anyone in the vicinity. (Adm Required: ADMFLAG_BAN)**
		```php
		sm_healing
		```
</details>

* Apply to | 適用於
    ```
    L4D1
    L4D2
    ```

* <details><summary>Changelog | 版本日誌</summary>

    * v1.0h (2023-5-12)
	    * Optimize code and improve performance
		* Fix warnings when compiling on SourceMod 1.11.
        * Don't reset black and white state
        * Add Random colors
        * Add Max client Health limit
        * Heal incapacitated player too

    * v1.6
	    * [Original Plugin By Ernecio](https://forums.alliedmods.net/showthread.php?t=324501)
</details>

- - - -
# 中文說明
當Tank死亡時產生一個治療光圈，人類可以獲得治療回復HP

* 原理
    * Tank死亡時產生一個光圈，人類在光圈範圍內可以回復HP
        * 倒地的玩家可以回復，最多300
        * 站立沒有倒地過的玩家回復實血，可超過100
        * 站立倒地過的玩家回復虛血，可超過100

* 功能
    * 可調整光圈存活時間、顏色、範圍
    * 可設置最高回復的血量
    * 可設置一次能回復的血量值



