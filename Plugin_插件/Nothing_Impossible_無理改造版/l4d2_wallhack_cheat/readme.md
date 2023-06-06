# Description | 內容
Admins can use commands to see the infected model glows though the wall

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/2ET7gW1hPII)

* Image | 圖示
	* Wallhack
		> 真-透視
		<br/>![l4d2_wallhack_cheat_1](image/l4d2_wallhack_cheat_1.gif)

* Apply to | 適用於
	```
	L4D2 Any Mode
	```

* <details><summary>Changelog | 版本日誌</summary>

	* v1.1 (2023-5-17)
		* Optimize code and improve performance

	* v1.0
		* Initial Release
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	2. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)

* Similar Plugin | 相似插件
	1. [l4d2_scope_wallhack](/Plugin_插件/Nothing_Impossible_無理改造版/l4d2_scope_wallhack): Survivor can use sniper scopes to see the infected model glows though the wall
		> 倖存者打開狙擊鏡能透視看到特感
	2. [l4d2_glow_item_weapon_cheat](/Plugin_插件/Nothing_Impossible_無理改造版/l4d2_glow_item_weapon_cheat): Admins can use commands to see the infected model glows though the wall
		> 管理員輸入指令能透視看到武器與物資

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d2_scope_wallhack.cfg
		```php
		// Alive SI glow color, Three values between 0-255 separated by spaces. RGB Color255 - Red Green Blue.
		l4d2_wallhack_cheat_alive_color "255 0 0"

		// Ghost SI glow color, Three values between 0-255 separated by spaces. RGB Color255 - Red Green Blue.
		l4d2_wallhack_cheat_ghost_color "255 255 255"

		// Players with these flags have access to use command to toggle Speatator watching cheat. (Empty = Everyone, -1: Nobody)
		l4d2_wallhack_cheat_use_command_flag "z"

		// Witch glow color, Three values between 0-255 separated by spaces. RGB Color255 - Red Green Blue.
		l4d2_wallhack_cheat_witch_color "155 0 255"
		```
</details>

* <details><summary>Command | 命令</summary>
	
    * **Turn On watching cheat**
		```php
        sm_onwk
		```

    * **Turn Off watching cheat**
		```php
        sm_offwk
		```

</details>

- - - -
# 中文說明
管理員輸入指令能透視看到特感

* 原理
	* 管理員輸入指令!onwk能隔牆看到特感光圈
	* 也能看到靈魂特感
	* 提示只有自己會看到
	* 對抗模式中也能使用，任何模式都適用

* 功能
	* 可設置特地權限的人也能使用指令看到
	* 可設置Witch、活著特感、靈魂特感的光圈顏色
