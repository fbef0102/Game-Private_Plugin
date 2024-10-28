# Description | 內容
Admins can use commands to see the infected model glows though the wall

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/2ET7gW1hPII)

* Image | 圖示
	<br/>![l4d2_wallhack_cheat_1](image/l4d2_wallhack_cheat_1.gif)

* <details><summary>How does it work?</summary>

	* Admin type ```!onwk```, now you can see the infected model glows though the wall, have Fun.
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	2. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)
	3. [Attachments API](https://forums.alliedmods.net/showthread.php?t=325651)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d2_scope_wallhack.cfg
		```php
		// Alive SI glow color, Three values between 0-255 separated by spaces. RGB Color255 - Red Green Blue.
		l4d2_wallhack_cheat_alive_color "255 0 0"

		// Ghost SI glow color, Three values between 0-255 separated by spaces. RGB Color255 - Red Green Blue.
		l4d2_wallhack_cheat_ghost_color "255 255 255"

		// Witch glow color, Three values between 0-255 separated by spaces. RGB Color255 - Red Green Blue.
		l4d2_wallhack_cheat_witch_color "155 0 255"

		// Players with these flags have access to use command to toggle wall hack watching cheat. (Empty = Everyone, -1: Nobody)
		l4d2_wallhack_cheat_use_command_flag "z"
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

* <details><summary>Known Conflicts</summary>
	
	If you don't use any of these plugins at all, no need to worry about conflicts.
	1. [L4D2 Ghost-Cheat Preventer](https://github.com/SirPlease/L4D2-Competitive-Rework/blob/master/addons/sourcemod/scripting/l4d2_noghostcheat.sp)
		* Survivor won't be able to see the infected glow.
</details>

* Apply to | 適用於
	```
	L4D2 Any Mode
	```

* <details><summary>Related Plugin | 相關插件</summary>

	1. [l4d2_scope_wallhack](/Plugin_插件/Nothing_Impossible_無理改造版/l4d2_scope_wallhack): Survivor can use sniper scopes to see the infected model glows though the wall
		> 倖存者打開狙擊鏡能透視看到特感
		
	2. [l4d2_glow_item_weapon_cheat](/Plugin_插件/Nothing_Impossible_無理改造版/l4d2_glow_item_weapon_cheat): Admins can use commands to see the infected model glows though the wall
		> 管理員輸入指令能透視看到武器與物資
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.3 (2024-10-26)
		* Fixed jockey glow disappear if survivor leaves the game during ridden

	* v1.2 (2023-7-17)
		* Fixed glow still appear after team change

	* v1.1 (2023-5-17)
		* Optimize code and improve performance

	* v1.0
		* Initial Release
</details>

- - - -
# 中文說明
管理員輸入指令能透視看到特感

* 原理
	* 管理員輸入指令!onwk能隔牆看到特感光圈
	* 也能看到靈魂特感
	* 提示只有自己會看到
	* 對抗模式中也能使用，任何模式都適用

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d2_scope_wallhack.cfg
		```php
		// 活著特感的光圈顏色，填入RGB三色 (三個數值介於0~255，需要空格)
		l4d2_wallhack_cheat_alive_color "255 0 0"

		// 靈魂特感的光圈顏色，填入RGB三色 (三個數值介於0~255，需要空格)
		l4d2_wallhack_cheat_ghost_color "255 255 255"

		// Witch的光圈顏色，填入RGB三色 (三個數值介於0~255，需要空格)
		l4d2_wallhack_cheat_witch_color "155 0 255"

		// 擁有這些權限的玩家才可以輸入指令開啟WallHack (Empty = 任何人都能輸入, -1: 無人能輸入)
		l4d2_wallhack_cheat_use_command_flag "z"
		```
</details>

* <details><summary>命令中文介紹 (點我展開)</summary>
	
	* **打開 watching cheat**
		```php
		sm_onwk
		```

	* **關閉 watching cheat**
		```php
		sm_offwk
		```
</details>

* <details><summary>會衝突的插件</summary>
	
	如果沒安裝以下插件就不需要擔心衝突
	1. [L4D2 Ghost-Cheat Preventer](https://github.com/SirPlease/L4D2-Competitive-Rework/blob/master/addons/sourcemod/scripting/l4d2_noghostcheat.sp)
		* 安裝這個插件會導致人類看不到特感光圈
</details>
