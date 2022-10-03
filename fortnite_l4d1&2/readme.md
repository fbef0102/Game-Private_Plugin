
# Description | 內容
Everyone can change zoom level for snipers by command.

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/RJzJAp-aWhI)

* Image | 圖示
	* Use command to change zoom level
    > 狙擊槍改變縮放級別
	<br/>![l4d2_zoom_level_1](image/l4d2_zoom_level_1.jpg)

* Apply to | 適用於
```
L4D2
```

* <details><summary>Changelog | 版本日誌</summary>
    * v1.1
	    * Request by 壹梦
	    * Add cmd: sm_zoom

    * v0.0
	    * [By BHaType](https://forums.alliedmods.net/showthread.php?p=2719630)
</details>

* Require | 必要安裝
    <br/>None

* <details><summary>ConVar | 指令</summary>

    None
</details>

* <details><summary>Command | 命令</summary>
    
    * **Change Zoom Level**
		```php
        sm_zoom <number>
		```
</details>

- - - -
# 中文說明
玩家使用指令調整狙擊鏡的遠近範圍 (可以看得更遠)

* 原理
    * 狙擊鏡自行調整遠近範圍

* 功能
	1. 每個玩家使用命令調整自己的狙擊鏡

* <details><summary>指令中文介紹 (點我展開)</summary>

    * **狙擊槍改變縮放級別，指定數字，數字越小，看得越遠**
        ```php
        sm_zoom <數字>
        ```
</details>


This plugin is for demonstration of some animations from Fortnite in L4D1/2
(搞笑動作模組: 表情與舞蹈)

-----This plugin is private, Please contact me-----
-----此為私人插件, 請聯繫本人-----
(https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

-Apply to-
L4D1/2

-Changelog-
v1.4.4
- Remake Code
- Supprot L4D1/2
- Add more cvars

v1.4.3
Original Post by Franc1sco & foxhound27: https://forums.alliedmods.net/showpost.php?p=2712458&postcount=165

-Require 必要安裝-
None

-ConVar-
cfg\sourcemod\fortnite_emotes_extended_l4d.cfg
// admin flag for dances (empty for all players)
sm_dances_admin_flag_menu ""

// admin flag for emotes (empty for all players)
sm_emotes_admin_flag_menu ""

// Cooldown for emotes in seconds. -1 or 0 = no cooldown.
sm_emotes_cooldown "2.0"

// Hide enemy players when dancing
sm_emotes_hide_enemies "0"

// Hide weapons when dancing
sm_emotes_hide_weapons "1"

// Enable/Disable sounds for emotes.
sm_emotes_sounds "1"

// Sound volume for the emotes.
sm_emotes_soundvolume "1.0"

// Sets the playback speed of the animation. default (1.0)
sm_emotes_speed "0.80"

// Teleport back to the exact position when he started to dance. (Some maps need this for teleport triggers)
sm_emotes_teleportonend "0"

-Command-
** Emote Menu
	sm_emotes
	sm_emote
	
** Dance Menu
	sm_dances
	sm_dance
	
** Force player to play emotes (ADM required: ADMFLAG_GENERIC)
	sm_setemotes <#userid|name> [Emote ID]
	sm_setemote <#userid|name> [Emote ID]
	
** Force player to dance (ADM required: ADMFLAG_GENERIC)
	sm_setdances <#userid|name> [Emote ID]
	sm_setdance <#userid|name> [Emote ID]
	
-中文說明-
模組檔案有兩種
如果是一代伺服器會讀取
	fortnite_dances_emotes_l4d.dx90.vtx
	fortnite_dances_emotes_l4d.mdl
	fortnite_dances_emotes_l4d.vvd
	
如果是二代伺服器會讀取
	fortnite_dances_emotes_ok.dx90.vtx
	fortnite_dances_emotes_ok.mdl
	fortnite_dances_emotes_ok.vvd

請自備網空安裝模組與音樂檔案
客戶端才會下載檔案

進入遊戲後
聊天視窗輸入!emote或!dance

