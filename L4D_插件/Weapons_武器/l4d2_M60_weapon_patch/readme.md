# Description | 內容
Prevents m60 from dropping and allows use of ammo piles + reload speed + Refill Explosive/Incendiary ammo

> __Note__ <br/>
This plugin is private, Please contact [me](/#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](/#私人插件列表-private-plugins-list)

* Apply to | 適用於
    ```
    L4D2
    ```

* [Video | 影片展示](https://youtu.be/w9X7Vcw2VXQ)

* Image | 圖示
    <br/>![l4d2_M60_weapon_patch_1](image/l4d2_M60_weapon_patch_1.gif)

* Require | 必要安裝
    1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)

* <details><summary>ConVar | 指令</summary>

    * cfg/sourcemod/l4d2_M60_weapon_patch.cfg
        ```php
        // If 1, allow players to pick up ammo to resupply the M60.
        l4d2_M60_weapon_patch_resupply "1"

        // If 1, drop M60 when reaching 0 clip/ammo.
        l4d2_M60_weapon_patch_drop "0"

        // M60 Reload Speed is multiplied by this value (clamped between 0.2 and 1.0, 1.0=Off)
        l4d2_M60_weapon_patch_weaponreload_rate "1.0"

        // Refill M60 Explosive Ammo on pickup, 0=Off, 1=Cost current ammo, 2=Give extra ammo
        l4d2_M60_weapon_patch_upgrade_explosive_fix "1"

        // Refill M60 Incendiary Ammo on pickup, 0=Off, 1=Cost current ammo, 2=Give extra ammo
        l4d2_M60_weapon_patch_upgrade_incendiary_fix "1"
        ```
</details>

* <details><summary>Related Official ConVar</summary>

	* write down the following cvars in cfg/server.cfg
		```php
		// M60 reserve ammo (-2 = infinite ammo)
		sm_cvar ammo_m60_max 300
		```
</details>

* <details><summary>Related Plugin | 相關插件</summary>

	1. [l4d2_shield_equip](/L4D_插件/Nothing_Impossible_%E7%84%A1%E7%90%86%E6%94%B9%E9%80%A0%E7%89%88/l4d2_shield_equip): You can get shield by killing tank/witch or shield dropped by riot uncommon infected
		> 新武器: 防暴盾牌
</details>

* <details><summary>Changelog | 版本日誌</summary>

    * v1.1h (2025-7-3)
        * Refill Explosive/Incendiary ammo with extra ammo
        * Update cvars

    * v1.0h (2023-7-5)
	    * Add cvars
	    * Prevents m60 from dropping when 0 clip
	    * M60 Reload speed
	    * Refill Explosive/Incendiary ammo

    * v1.0.9
	    * [Originl Plugin By Lux](https://forums.alliedmods.net/showthread.php?t=323408)
</details>

- - - -
# 中文說明
改造M60 機關槍，可以拿取子彈、填充子彈、裝彈變快、升級火焰子彈與高爆子彈

* 原理
    * M60武器可以填充彈藥，也能填裝子彈
    * 升級滿發的火焰子彈與高爆子彈
    * 當M60子彈與彈藥歸0時，不會自動丟棄M60武器消失

* <details><summary>指令中文介紹 (點我展開)</summary>

    * cfg/sourcemod/l4d2_M60_weapon_patch.cfg
        ```php
        // 為1時，M60武器可以填充彈藥
        l4d2_M60_weapon_patch_resupply "1"

        // 為1時，M60武器子彈歸0時自動丟棄
        l4d2_M60_weapon_patch_drop "0"

        // M60 裝彈速度調整 (介於 0.2 ~ 1.0, 1.0=不改變)
        l4d2_M60_weapon_patch_weaponreload_rate "1.0"

        // M60武器可以裝滿高爆子彈, 0=關閉這樣項功能, 1=消耗普通彈藥, 2=不消耗普通彈藥
        l4d2_M60_weapon_patch_upgrade_explosive_fix "1"

        // M60武器可以裝滿火焰子彈, 0=關閉這樣項功能, 1=消耗普通彈藥, 2=不消耗普通彈藥
        l4d2_M60_weapon_patch_upgrade_incendiary_fix "1"
        ```
</details>

* <details><summary>相關的官方指令中文介紹 (點我展開)</summary>

	* 以下指令寫入文件 cfg/server.cfg，可自行調整
		```php
		// M60 備用子彈 (-2 = 無限的子彈)
		sm_cvar ammo_m60_max 300
		```
</details>