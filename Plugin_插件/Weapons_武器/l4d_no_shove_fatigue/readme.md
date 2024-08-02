# Description | 內容
Allow certain weapons to shove infinitely (no fatigue)

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtube.com/shorts/Zoj6_4RuaCA)
<br/>None

* Image | 圖示
    * Infinite Shoving (無限推)
    <br/>![l4d_no_shove_fatigue_1](image/l4d_no_shove_fatigue_1.gif)

* <details><summary>How does it work?</summary>

    * Take weapons that allowed in cfg, you can have infinite shoving
    * Can adjust shove speed
</details>

* Require | 必要安裝
    1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)

* <details><summary>ConVar | 指令</summary>

    * cfg/sourcemod/l4d_no_shove_fatigue.cfg
        ```php
        // 0=Plugin off, 1=Plugin on.
        l4d_no_shove_fatigue_enable "1"

        // Player with these flag does not have shove penalty (Empty=Everyone, -1=No one)
        l4d_no_shove_fatigue_flags "z"

        // Interval time between shoves. (0=Game Default: 0.7s)
        l4d_no_shove_fatigue_interval "0"

        // (L4D2) Empty string to allow all. Allow these weapon IDs being used in this plugin, separate by commas (no spaces). See plugin source code for more details.
        // "weapon_pistol",					    1
        // "weapon_smg",						2
        // "weapon_pumpshotgun",				3
        // "weapon_autoshotgun",				4
        // "weapon_rifle",						5
        // "weapon_hunting_rifle",				6
        // "weapon_smg_silenced",				7
        // "weapon_shotgun_chrome",			    8
        // "weapon_rifle_desert",				9
        // "weapon_sniper_military",			10
        // "weapon_shotgun_spas",				11
        // "weapon_grenade_launcher",			12
        // "weapon_rifle_ak47",				    13
        // "weapon_pistol_magnum",				14
        // "weapon_smg_mp5",					15
        // "weapon_rifle_sg552",				16
        // "weapon_sniper_awp",				    17
        // "weapon_sniper_scout",				18
        // "weapon_rifle_m60",					19
        // "weapon_chainsaw",					20
        // "weapon_melee",						21
        // "weapon_first_aid_kit",				22
        // "weapon_defibrillator",				23
        // "weapon_upgradepack_incendiary",	    24
        // "weapon_upgradepack_explosive",		25
        // "weapon_molotov",					26
        // "weapon_pipe_bomb",					27
        // "weapon_vomitjar",					28
        // "weapon_pain_pills",				    29
        // "weapon_adrenaline",				    30
        // "weapon_gascan",					    31
        // "weapon_propanetank",				32
        // "weapon_oxygentank",				    33
        // "weapon_fireworkcrate",				34
        // "weapon_gnome",						35
        // "weapon_cola_bottles",				36
        l4d_no_shove_fatigue_weapon "1,14,21,22,23,24,25,26,26,27,28,29,30,31,32,33,34,35,36"

        // (L4D1) Empty string to allow all. Allow these weapon IDs being used in this plugin, separate by commas (no spaces). See plugin source code for more details.
        // "weapon_pistol",					    1
        // "weapon_smg",						2
        // "weapon_pumpshotgun",				3
        // "weapon_autoshotgun",				4
        // "weapon_rifle",						5
        // "weapon_hunting_rifle",			    6
        // "weapon_first_aid_kit",			    7
        // "weapon_molotov",				    8
        // "weapon_pipe_bomb",				    9
        // "weapon_pain_pills",				    10
        // "weapon_gascan",					    11
        // "weapon_propanetank",				12
        // "weapon_oxygentank",				    13
        l4d_no_shove_fatigue_weapon "1,7,8,9,10,11,12,13"
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

* <details><summary>Changelog | 版本日誌</summary>

    * v1.0 (2024-8-2)
        * Initial Release
</details>

- - - -
# 中文說明
指定的武器可以無限次數推人，就像L4D1 (不會疲勞)

* 原理
    * 拿起武器，持續按右鍵推人，永遠不會疲勞
    * 可以調整推人速度

* <details><summary>指令中文介紹 (點我展開)</summary>

    * cfg/sourcemod/l4d_no_shove_fatigue.cfg
        ```php
        // 0=關閉插件, 1=啟動插件
        l4d_no_shove_fatigue_enable "1"

        // 擁有這些權限的玩家，才可以使用武器無限推 (留白 = 任何人都能, -1: 無人)
        l4d_no_shove_fatigue_flags "z"

        // 推人的冷卻時間 (0=預設 0.7秒)
        l4d_no_shove_fatigue_interval "0"

        // (L4D2) 空=允許全武器. 填入武器的ID，只允許這些武, 逗號分隔（不須空格）. 請打開源碼查看武器的ID列表
        // "weapon_pistol",					    1
        // "weapon_smg",						2
        // "weapon_pumpshotgun",				3
        // "weapon_autoshotgun",				4
        // "weapon_rifle",						5
        // "weapon_hunting_rifle",				6
        // "weapon_smg_silenced",				7
        // "weapon_shotgun_chrome",			    8
        // "weapon_rifle_desert",				9
        // "weapon_sniper_military",			10
        // "weapon_shotgun_spas",				11
        // "weapon_grenade_launcher",			12
        // "weapon_rifle_ak47",				    13
        // "weapon_pistol_magnum",				14
        // "weapon_smg_mp5",					15
        // "weapon_rifle_sg552",				16
        // "weapon_sniper_awp",				    17
        // "weapon_sniper_scout",				18
        // "weapon_rifle_m60",					19
        // "weapon_chainsaw",					20
        // "weapon_melee",						21
        // "weapon_first_aid_kit",				22
        // "weapon_defibrillator",				23
        // "weapon_upgradepack_incendiary",	    24
        // "weapon_upgradepack_explosive",		25
        // "weapon_molotov",					26
        // "weapon_pipe_bomb",					27
        // "weapon_vomitjar",					28
        // "weapon_pain_pills",				    29
        // "weapon_adrenaline",				    30
        // "weapon_gascan",					    31
        // "weapon_propanetank",				32
        // "weapon_oxygentank",				    33
        // "weapon_fireworkcrate",				34
        // "weapon_gnome",						35
        // "weapon_cola_bottles",				36
        l4d_no_shove_fatigue_weapon "1,14,21,22,23,24,25,26,26,27,28,29,30,31,32,33,34,35,36"

        // (L4D1) 空=允許全武器. 填入武器的ID，只允許這些武器可以使出空氣砲, 逗號分隔（不須空格）. 請打開源碼查看武器的ID列表
        // "weapon_pistol",					    1
        // "weapon_smg",						2
        // "weapon_pumpshotgun",				3
        // "weapon_autoshotgun",				4
        // "weapon_rifle",						5
        // "weapon_hunting_rifle",			    6
        // "weapon_first_aid_kit",			    7
        // "weapon_molotov",				    8
        // "weapon_pipe_bomb",				    9
        // "weapon_pain_pills",				    10
        // "weapon_gascan",					    11
        // "weapon_propanetank",				12
        // "weapon_oxygentank",				    13
        l4d_no_shove_fatigue_weapon "1,7,8,9,10,11,12,13"
        ```
</details>