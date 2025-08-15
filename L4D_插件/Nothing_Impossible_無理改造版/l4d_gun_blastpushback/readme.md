# Description | 內容
Doraemon Aircannon

> __Note__ <br/>
This plugin is private, Please contact [me](/#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](/#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/HQgxXpngBxI)

* Image | 圖示
	<br/>![l4d_gun_blastpushback_1](image/l4d_gun_blastpushback_1.gif)
	<br/>![l4d_gun_blastpushback_2](image/l4d_gun_blastpushback_2.gif)

* Apply to | 適用於
    ```
    L4D1
    L4D2
    ```

* <details><summary>How does it work?</summary>

	* Hold a weapon -> right mouse to shove -> Have air push power from muzzle
    * Push special infected, tank, witch, common infecte, and including hittable cvars
</details>


* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	2. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)

* <details><summary>ConVar | 指令</summary>

    * cfg/sourcemod/l4d_gun_blastpushback.cfg
        ```php
        // 0=Plugin off, 1=Plugin on.
        l4d_gun_blastpushback_allow "1"

        // Turn on the plugin in these game modes, separate by commas (no spaces). (Empty = all).
        l4d_gun_blastpushback_modes ""

        // Turn off the plugin in these game modes, separate by commas (no spaces). (Empty = none).
        l4d_gun_blastpushback_modes_off ""

        // Turn on the plugin in these game modes. 0=All, 1=Coop, 2=Survival, 4=Versus, 8=Scavenge. Add numbers together.
        l4d_gun_blastpushback_modes_tog "0"

        // When hit by the Doraemon Aircannon, push players/infected by this much force.
        l4d_gun_blastpushback_push "400"

        // How long after using the Doraemon Aircannon before it can be used again.
        l4d_gun_blastpushback_push_time "0.5"

        // How far the Doraemon Aircannon can affect entities.
        l4d_gun_blastpushback_range "800"

        // How much damage the Doraemon Aircannon does when fired.
        l4d_gun_blastpushback_damage "30"

        // How much damage the Doraemon Aircannon does when fired. (friendly fire)
        l4d_gun_blastpushback_damage_ff "1"

        // Doraemon Aircannon steam particle effect time. (0=Disable)
        l4d_gun_blastpushback_effect_time "0.5"

        // Doraemon Aircannon explosion radius override.
        l4d_gun_blastpushback_radius "150"

        // If 1, Doraemon Aircannon can affect survivors.
        l4d_gun_blastpushback_survivor "1"

        // Changes how message displays. (0: Disable, 1:In chat, 2: In Hint Box, 3: In center text)
        l4d_gun_blastpushback_announce_type "2"

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
        l4d_gun_blastpushback_weapon "14,21,32,33"

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
        l4d_gun_blastpushback_weapon "6,12,13"
        ```
</details>

* <details><summary>Changelog | 版本日誌</summary>

    * v1.0
	    * Initial Release
</details>

- - - -
# 中文說明
多啦A夢的空氣砲

* 功能
    * 右鍵推產生一個空氣砲，被空氣砲打中時，
      * 特感會被力道彈開
      * Witch會被震暈
      * 普通殭屍會被震暈
      * 隊友被彈開
      * 打散物件
      * 車子彈開
    * 特定的武器才能產生空氣砲

* <details><summary>指令中文介紹 (點我展開)</summary>

    * cfg/sourcemod/l4d_gun_blastpushback.cfg
        ```php
        // 0=關閉插件, 1=啟動插件
        l4d_gun_blastpushback_allow "1"

        // 什麼模式下啟動此插件, 逗號區隔 (無空白). (留白 = 所有模式)
        l4d_gun_blastpushback_modes ""

        // 什麼模式下關閉此插件, 逗號區隔 (無空白). (留白 = 無)
        l4d_gun_blastpushback_modes_off ""

        // 什麼模式下啟動此插件. 0=所有模式, 1=戰役, 2=生存, 4=對抗, 8=清道夫. 請將數字相加起來
        l4d_gun_blastpushback_modes_tog "0"

        // 空氣砲的力道
        l4d_gun_blastpushback_push "400"

        // 使用空氣砲的CD間隔
        l4d_gun_blastpushback_push_time "0.5"

        // 空氣砲有效範圍
        l4d_gun_blastpushback_range "800"

        // 空氣砲對殭屍造成的傷害
        l4d_gun_blastpushback_damage "30"

        // 空氣砲對隊友造成的傷害 (友傷)
        l4d_gun_blastpushback_damage_ff "1"

        // 空氣砲有產生蒸汽效果的時間
        l4d_gun_blastpushback_effect_time "0.5"

        // 空氣砲能影響的範圍
        l4d_gun_blastpushback_radius "150"

        // 為1時，空氣砲也會影響隊友
        l4d_gun_blastpushback_survivor "1"

        // 訊息顯示位置. (0: 關閉, 1: 聊天窗, 2: 螢幕下方黑底白字窗, 3: 螢幕正中間)
        l4d_gun_blastpushback_announce_type "2"

        // (L4D2) 空=允許全武器. 填入武器的ID，只允許這些武器可以使出空氣砲, 逗號分隔（不須空格）. 請打開源碼查看武器的ID列表
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
        l4d_gun_blastpushback_weapon "14,21,32,33"

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
        l4d_gun_blastpushback_weapon "6,12,13"
        ```

    * 範例效果:
        ```php
        // 按下右鍵，在800公尺範圍內擊中準心指向的地方，並在被擊中的地方產生空氣砲，附近150公尺周圍內產生影響
        // 特感會被力道彈開、Witch會被震暈、普通殭屍會被震暈
        l4d_gun_blastpushback_range "800"
        l4d_gun_blastpushback_radius "150"
        ```
</details>