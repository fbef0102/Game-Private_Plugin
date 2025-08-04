# Description | 內容
Force AI Tanks in coop/realism to attack instead of waiting.

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Apply to | 適用於
    ```
    L4D1 Coop
    L4D2 Coop/Realism
    ```

* [Video | 影片展示](https://youtu.be/lbpqs5odLFU)

* <details><summary>How does it work?</summary>

	* (Before) AI Tank will stand still until survivors come over and see the tank in coop/realism mode
	* (After) AI Tank will move forward to attack survivors when spawned in coop/realism mode
	* No any damage or walkaround methods, use Patch to force AI Tank to attack
    * 🟥 Only work after survivors has left the safe zone
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
    2. [l4d_aggressive_coop_tank](https://github.com/Target5150/MoYu_Server_Stupid_Plugins/tree/master/The%20Last%20Stand/l4d_aggressive_coop_tank)

* <details><summary>ConVar | 指令</summary>

    * cfg/sourcemod/l4d_tank_force_attack_spawn.cfg
        ```php
        // 0=Plugin off, 1=Plugin on.
        l4d_tank_force_attack_spawn_enable "1"

        // Tank chases survivors in seconds after tank spawns in coop/realism mode
        l4d_tank_force_attack_spawn_seconds "3.0"
        ```
</details>

* <details><summary>Changelog | 版本日誌</summary>
    
    * v1.0h (2025-8-5)
        * Remake code, provide a better way to make tank move without teleporting, making fake damage, or walkaround methods
        * Add delay to force AI Tank to attack after tank spawned
        * Detect if survivors has left the safe room
        * Add cvars

    * Credit & Original
        * XDglory: [l4d_tankAttackOnSpawn_door](https://forums.alliedmods.net/showpost.php?p=2679726&postcount=13)
        * [AlliedModders Post](https://forums.alliedmods.net/showthread.php?t=319342):
        * Provide gamedata: [Forgetest](https://github.com/jensewe)
</details>

# 中文說明
戰役/寫實模式下，AI Tank會直接往前進並攻擊倖存者，而非待在原地等待

* 原理
	* (安裝此插件之前) 戰役/寫實模式下，AI Tank 會原地不動，等待倖存者走過來發現
	* (安裝此插件之後) 戰役/寫實模式下，AI Tank 生成後會直接往前攻擊倖存者
    * 🟥 倖存者離開安全室才生效

* <details><summary>指令中文介紹 (點我展開)</summary>

    * cfg/sourcemod/l4d_tank_force_attack_spawn.cfg
        ```php
        // 1=開啟插件. 0=關閉插件
        l4d_tank_force_attack_spawn_enable "1"

        // 戰役/寫實模式下，AI Tank生成之後必須等一段時間再往前攻擊倖存者
        l4d_tank_force_attack_spawn_seconds "3.0"
        ```
</details>