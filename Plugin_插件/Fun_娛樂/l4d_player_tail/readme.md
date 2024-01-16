# Description | 內容
l4d player tail effect (prop_dynamic_override)

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/VC7-96qwwuo)

* <details><summary>Image | 圖示</summary>

	<br/>![l4d_player_tail_1](image/l4d_player_tail_1.jpg)
	<br/>![l4d_player_tail_2](image/l4d_player_tail_2.jpg)
	<br/>![l4d_player_tail_3](image/l4d_player_tail_3.jpg)
	<br/>![l4d_player_tail_4](image/l4d_player_tail_4.jpg)
	<br/>![l4d_player_tail_5](image/l4d_player_tail_5.jpg)
	<br/>![l4d_player_tail_6](image/l4d_player_tail_6.jpg)
</details>

* <details><summary>How does it work?</summary>

	* Type ```!tailmenu``` -> choose colors and sprite -> have fun
	* You can add Custom Colors or tail sprite in ```configs/l4d_player_tail.cfg```
</details>

* <details><summary>Important Note</summary>

	* l4d_player_tail_lifetime must greater than or equal to l4d_player_tail_changecolor_interval
	* Tail could temporarily disappear if player stop moving
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	2. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_player_tail.cfg
		```php
		// 1=Enable Tail effect for everyone default? [1-Enable/0-Disable]
		l4d_player_tail_default_value "1"

		// If 1, Enable Tail effect for Bot Infected
		l4d_player_tail_bot_infected_enable "1"

		// If 1, Enable Tail effect for Bot Survivor
		l4d_player_tail_bot_survivor_enable "1"

		// Players with these flags have access to have tail effect and use tail command. (Empty = Everyone, -1: Nobody)
		l4d_player_tail_command_access_flag ""

		// Transparency of the tail (10-255).
		l4d_player_tail_color_alpha "150"

		// The default tail color. Three values between 0-255 separated by spaces. RGB Color255 - Red Green Blue. [-1 -1 -1: Random]
		l4d_player_tail_color "-1 -1 -1"

		// How long the beam is shown. (Tail could temporarily disappear if player stop moving)
		l4d_player_tail_lifetime "5.0"

		// The width of the beam to the beginning.
		l4d_player_tail_startwidth "10.0"

		// The width of the beam when it has full expanded.
		l4d_player_tail_endwidth "1.0"

		// The default attached tail height
		l4d_player_tail_height "5.0"

		// Time interval to change tail color to random (0=Don't change color)
		l4d_player_tail_changecolor_interval "4.0"

		// If 1, setup small beam sprite in middle of tail
		l4d_player_tail_middle_beam "1"

		// Players with these flags have access to open tail menu. (Empty = Everyone, -1: Nobody)
		l4d_player_tail_menu_access_flag ""

		// Database to save personal tail settings. (MySQL & SQLite supported, Empty = Off)
		l4d_player_tail_database "tail"
		```
</details>

* <details><summary>Command | 命令</summary>

	* **Toggle the attached tailed. Usage: sm_tail [R G B|off|random|red|green|blue|purple|cyan|orange|white|pink|lime|maroon|teal|yellow|grey]**
		```php
		sm_tail
		sm_tails
		```

	* **Open tail menu**
		```php
		sm_tailmenu
		```
</details>

* <details><summary>Database</summary>

	* Choose one of the following method
		1. MySQL: Database across server, set ConVar ```l4d_player_tail_database "tail"``` and set *sourcemod\configs\databases.cfg*
			```php
			// There would a data table named "L4D_Player_Tail" in database
			"tail"
			{
				"driver"			"default"
				"host"				"x.x.x.x"
				"database"			"yourdatabase"
				"user"				"youruser"
				"pass"				"yourpass"
				"port"				"yourport"
			}
			```

		2. SQLite: Local Database, set *sourcemod\configs\databases.cfg*
			```php
			// Database in saved to ```sourcemod\data\sqlite\player_tail.sq3```
			"tail"
			{
				"driver"			"sqlite"
				"database"			"player_tail"
			}
			```
</details>

* Apply to | 適用於
	```
	L4D1
	L4D2
	```

* <details><summary>Translation Support | 支援翻譯</summary>

	```
	English
	繁體中文
	简体中文
	```
</details>

* <details><summary>Similar Plugin | 相似插件</summary>

	1. [l4d_player_spritetrail](/Plugin_插件/Fun_娛樂/l4d_player_spritetrail)
		> 一樣是尾巴特效，看自己喜歡用哪一種
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.8 (2023-10-28)
		* Fix memory leak

	* v1.7 (2023-8-15)
		* Translation Support

	* v1.6 (2023-1-23)
		* Support database to save personal tail settings. (MySQL & SQLite supported)
		* Add a convar ```l4d_player_tail_database```

	* v1.5 (2023-1-22)
		* Fixed client crash: received failure code 6.
		* Fixed missing model.
		* Delete a convar ```l4d_player_tail_sprite_model```

	* v1.4 (2023-1-13)
		* Add a convar, access flags to open tail menu

	* v1.3
		* Add menu to choose color and sprite model
		* Support custom sprite model

	* v1.2
	    * Initial Release
</details>

- - - -
# 中文說明
玩家走路，會有尾巴特效 (使用物件: prop_dynamic_override)

* 原理
	* 線條色塊，逐漸變色
	* 輸入```!tail```開關尾巴特效或者```!tailmenu```打開介面選擇顏色與貼圖
	<br/>![zho/l4d_player_tail_1](image/zho/l4d_player_tail_1.jpg)
	* 會自動儲存於資料庫，下次玩家進來伺服器，顏色與貼圖保持不變
	* 尾巴過一段時間會隨機變色

* 功能
	* 可以設定文件```configs/l4d_player_tail.cfg```，自定義尾巴的顏色與圖案

* 注意事項
	* ```l4d_player_tail_lifetime``` 指令數值必須大於或等於 ```l4d_player_tail_changecolor_interval``` 指令數值
	* 如果倖存者不動，尾巴特效會短暫消失，建議```l4d_player_tail_lifetime``` 指令數值不要設置太高

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d_player_tail.cfg
		```php
		// 為1時，幫所有玩家預設打開特效尾巴
		l4d_player_tail_default_value "1"

		// 為1時，幫特感Bot打開特效尾巴
		l4d_player_tail_bot_infected_enable "1"

		// 為1時，幫倖存者Bot打開特效尾巴
		l4d_player_tail_bot_survivor_enable "1"

		// 擁有這些權限的玩家，才可以使用尾巴特效 (留白 = 任何人都能, -1: 無人)
		l4d_player_tail_command_access_flag ""

		// 尾巴顏色透明度 (10-255).
		l4d_player_tail_color_alpha "150"

		// 設置尾巴顏色，填入RGB三色 (三個數值介於0~255，需要空格) [-1 -1 -1: 隨機顏色]
		l4d_player_tail_color "-1 -1 -1"

		// 尾巴特效的時間 (如果玩家不動，尾巴特效可能會暫時消失)
		l4d_player_tail_lifetime "5.0"

		// 尾巴特效的起點寬度
		l4d_player_tail_startwidth "10.0"

		// 尾巴特效的終點寬度
		l4d_player_tail_endwidth "1.0"

		// 尾巴特效的高度
		l4d_player_tail_height "5.0"

		// 每4秒變更尾巴特效的顏色 (0=顏色不變化)
		l4d_player_tail_changecolor_interval "4.0"

		// 為1時，尾巴特效中間再增加一條線
		l4d_player_tail_middle_beam "1"

		// 擁有這些權限的玩家，才可以打開尾巴特效介面選擇顏色與貼圖 (留白 = 任何人都能, -1: 無人)
		l4d_player_tail_menu_access_flag ""

		// 資料庫的名稱. (MySQL & SQLite supported, 留白=不使用資料庫)
		l4d_player_tail_database "tail"
		```
</details>

* <details><summary>命令中文介紹 (點我展開)</summary>

	* **!tail <顏色名稱或R G B>. 顏色: red, green, blue, purple, orange, yellow, white. 或是 3 個 0-255 RGB之值. 譬如: !tail red 或是 !tail 255 0 0**
		```php
		sm_tail
		sm_tails
		sm_harrypotter
		sm_hy
		```
		
	* **打開尾巴菜單介面**
		```php
		sm_tailmenu
		```
</details>

* <details><summary>資料庫設定</summary>

	* 以下方法二選一
		1. MySQL: 支援跨伺服器，儲值玩家的尾巴特效與顏色，設定指令 ```l4d_player_tail_database "tail"```，然後設定文件 *sourcemod\configs\databases.cfg*
			```php
			// 資料庫中自動創建表格，名稱是 "L4D_Player_Tail"
			"tail"
			{
				"driver"			"default"
				"host"				"x.x.x.x"
				"database"			"yourdatabase"
				"user"				"youruser"
				"pass"				"yourpass"
				"port"				"yourport"
			}
			```

		2. SQLite: 本地資料庫，設定文件 *sourcemod\configs\databases.cfg*
			```php
			// 資料庫位於 ```sourcemod\data\sqlite\player_tail.sq3``` (自動創建)
			"tail"
			{
				"driver"			"sqlite"
				"database"			"player_tail"
			}
			```
</details>
