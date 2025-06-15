# Description | 內容
Show tank hud for infected team and spectators

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Apply to | 適用於
	```
	L4D1 versus
	L4D2 versus
	```

* Image | 圖示
	<br/>![l4d_tankhud_1](image/l4d_tankhud_1.jpg)
	<br/>![l4d_tankhud_2](image/l4d_tankhud_2.jpg)

* <details><summary>How does it work?</summary>

	* Display tank hud when tank alive for infected team and spectator team
	* Say ```!tankhud``` to turn on/off tank hud
	* Display second tank
	* Can not display third tank
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	2. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_tankhud.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d_tankhud_enable "1"

		// If 1, display tank hud for infected team.
		l4d_tankhud_infected_enable "1"

		// If 1, display tank hud for spectators.
		l4d_tankhud_spec_enable "1"

		// If 1, display tank hud for Tank himself.
		l4d_tankhud_tank_enable "1"
		```
</details>

* <details><summary>Command | 命令</summary>

	* **Turn On/Off Tankhud**
		```php
		sm_tankhud
		```
</details>

* Translation Support | 支援翻譯
	```
	translations/l4d_tankhud.phrases.txt
	```

* <details><summary>Changelog | 版本日誌</summary>

	* v1.1h (2023-9-10)
		* Display second tank

	* v1.0h (2023-2-10)
		* Individual plugin
		* Auto generate cfg
		* Delete spechud, only tankhud left

	* v3.8.4
	    * [From SirPlease/L4D2-Competitive-Rework](https://github.com/SirPlease/L4D2-Competitive-Rework/blob/master/addons/sourcemod/scripting/spechud.sp)
</details>

- - - -
# 中文說明
為特感者隊伍與旁觀者展示Tank介面，顯示血量與控制權

* 原理
	* Tank生成的時候，左邊出現介面，顯示Tank的血量、控制權、玩家姓名、延遲值與Lerp
		* 如果有著火也會顯示剩餘多少時間能存活
		* 可以顯示第二隻Tank (無法顯示第二隻Tank的控制次數，認真你就輸了)
		* 目前無法顯示第三隻Tank，會超出介面的字數限制，認真你就輸了
	* 玩家可以在聊天視窗輸入!tankhud關閉Tank介面

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d_tankhud.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		l4d_tankhud_enable "1"

		// 為1時，特感隊伍能看到Tank介面
		l4d_tankhud_infected_enable "1"

		// 為1時，旁觀者能看到Tank介面
		l4d_tankhud_spec_enable "1"

		// 為1時，Tank本身玩家能看到Tank介面
		l4d_tankhud_tank_enable "1"
		```
</details>

* <details><summary>命令中文介紹 (點我展開)</summary>

	* **開啟或關閉Tank介面**
		```php
		sm_tankhud
		```
</details>