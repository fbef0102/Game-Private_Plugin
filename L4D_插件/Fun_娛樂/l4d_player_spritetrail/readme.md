# Description | 內容
l4d player tail effect (env_spritetrail)

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/SXZMB0t2mtc)

* <details><summary>Image | 圖示</summary>

	<br/>![l4d_player_spritetrail_1](image/l4d_player_spritetrail_1.jpg)
	<br/>![l4d_player_spritetrail_2](image/l4d_player_spritetrail_2.jpg)
	<br/>![l4d_player_spritetrail_3](image/l4d_player_spritetrail_3.jpg)
</details>

* <details><summary>How does it work?</summary>

	* Attach trail effect while playing -> have fun
	* Type ```!tail``` -> choose colors or turn off
	* Does not work on bots in l4d1
</details>

* Require | 必要安裝
	1. [SpriteTrail Fix](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4d2_spritetrail_fix)
	2. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	3. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_player_spritetrail.cfg
		```php
		// 1=Enable Tail effect for everyone default? [1-Enable/0-Disable]
		l4d_player_spritetrail_default_value "1"

		// Enable Tail effect for Survivor, 1=Bot (Does not work in l4d1), 2=Real player, 3=Both
		l4d_player_spritetrail_survivor_enable "3"

		// Enable Tail effect for Infected, 1=Bot (Does not work in l4d1), 2=Real player, 3=Both
		l4d_player_spritetrail_infected_enable "3"

		// Players with these flags have access to have tail effect and use tail command. (Empty = Everyone, -1: Nobody)
		l4d_player_spritetrail_access_flag ""

		// Transparency of the tail (10-255).
		l4d_player_spritetrail_color_alpha "155"

		// The default tail color for survivor. 
		// Three values between 0-255 separated by spaces. RGB Color255 - Red Green Blue. [-1 -1 -1: Random]
		l4d_player_spritetrail_color_sur "-1 -1 -1"

		// The default tail color for infected.
		// Three values between 0-255 separated by spaces. RGB Color255 - Red Green Blue. [-1 -1 -1: Random]
		l4d_player_spritetrail_color_inf "-1 -1 -1"

		// How long the beam is shown
		// Must be greater than or equal to _changecolor_interval
		l4d_player_spritetrail_lifetime "5.0"

		// The width of the beam to the beginning.
		l4d_player_spritetrail_startwidth "15.0"

		// The width of the beam when it has full expanded.
		l4d_player_spritetrail_endwidth "3.0"

		// The default attached tail height
		l4d_player_spritetrail_height "10.0"

		// Time interval to change tail color to random (0=Don't change color)
		l4d_player_spritetrail_changecolor_interval "0.0"
		```
</details>

* <details><summary>Command | 命令</summary>

	* **Toggle the attached tailed. Usage: sm_tail [R G B|off|random|red|green|blue|purple|cyan|orange|white|pink|lime|maroon|teal|yellow|grey]**
		```php
		sm_tail
		sm_tails
		```
</details>

* Apply to | 適用於
	```
	L4D1
	L4D2
	```

* <details><summary>Similar Plugin | 相似插件</summary>

	1. [l4d_player_tail](/L4D_插件/Fun_娛樂/l4d_player_tail)
		> 一樣是尾巴特效，看自己喜歡用哪一種
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.4 (2024-12-14)
		* Update cvars

	* v1.3 (2024-7-9)
		* entity "env_spritetrail" make bots moving so fast in l4d1
		* Update Cvars

	* v1.2
		* Initial Release
</details>

- - - -
# 中文說明
玩家走路，會有尾巴特效 (使用物件: env_spritetrail)

* 原理
	* 色塊均勻，統一變色
	* 輸入```!tail```開關尾巴特效

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d_player_spritetrail.cfg
		```php
		// 為1時，幫所有玩家預設打開特效尾巴
		l4d_player_spritetrail_default_value "1"

		// 倖存者打開特效尾巴, 1=Bot (L4D1無效), 2=真人玩家, 3=兩者都打開
		l4d_player_spritetrail_survivor_enable "3"

		// 特感打開特效尾巴, 1=Bot (L4D1無效), 2=真人玩家, 3=兩者都打開
		l4d_player_spritetrail_infected_enable "3"

		// 擁有這些權限的玩家，才可以使用尾巴特效 (留白 = 任何人都能, -1: 無人)
		l4d_player_spritetrail_access_flag ""

		// 尾巴顏色透明度 (10-255).
		l4d_player_spritetrail_color_alpha "155"

		// 設置倖存者尾巴顏色
		// 填入RGB三色 (三個數值介於0~255，需要空格) [-1 -1 -1: 隨機顏色]
		l4d_player_spritetrail_color_sur "-1 -1 -1"

		// 設置特感尾巴顏色
		// 填入RGB三色 (三個數值介於0~255，需要空格) [-1 -1 -1: 隨機顏色]
		l4d_player_spritetrail_color_inf "-1 -1 -1"

		// 尾巴特效的時間
		// 此數值必須大於或等於 "l4d_player_spritetrail_changecolor_interval" 指令數值
		l4d_player_spritetrail_lifetime "5.0"

		// 尾巴特效的起點寬度
		l4d_player_spritetrail_startwidth "15.0"

		// 尾巴特效的終點寬度
		l4d_player_spritetrail_endwidth "3.0"

		// 尾巴特效的高度
		l4d_player_spritetrail_height "10.0"

		// 每X秒變更尾巴特效的顏色 (0=顏色不變化)
		l4d_player_spritetrail_changecolor_interval "0.0"
		```
</details>

* <details><summary>命令中文介紹 (點我展開)</summary>

	* **!tail <顏色名稱或R G B>. 顏色: red, green, blue, purple, orange, yellow, white. 或是 3 個 0-255 RGB之值. 譬如: !tail red 或是 !tail 255 0 0**
		```php
		sm_tail
		sm_tails
		```
</details>
