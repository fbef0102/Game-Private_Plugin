# Description | 內容
Player can use command to see the items and weapons glows though the wall

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/kmvs3S2v2LU)

* Image | 圖示
	<br/>![l4d2_glow_item_weapon_cheat_2](image/l4d2_glow_item_weapon_cheat_2.jpg)
	<br/>![l4d2_glow_item_weapon_cheat_1](image/l4d2_glow_item_weapon_cheat_1.gif)

> __Warning__
<br/>Use carefully. This plugin may spawn too many entities depending on the number of items on the map and can cause a "ED_Alloc: no free edicts" crash.

* Require | 必要安裝
	1. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)


* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d2_glow_item_weapon_cheat.cfg
		```php
		// Enable/Disable the plugin.
		l4d2_glow_item_weapon_cheat_enable "1"

		// Remove glow from health cabinet after being opened.
		l4d2_glow_item_weapon_cheat_health_cabinet "1"

		// Time interval to display the instruction message. (0=off)
		l4d2_glow_item_weapon_cheat_message_interval "0"

		// Which teams should see the message, 7=Everyone, 1=Spectator, 2=Survivors, 4=Infecteds. (add numbers together)
		l4d2_glow_item_weapon_cheat_message_team "0"

		// Algorithm value to detect the glow minimum brightness for a random color (not accurate).
		l4d2_glow_item_weapon_cheat_min_brightness "0.5"

		// Delete *_spawn entities when its count reaches 0.
		// 0 = OFF, 1 = ON.
		l4d2_glow_item_weapon_cheat_remove_spawner "1"

		// Apply glow to scavenge gascans.
		// 0 = OFF, 1 = ON.
		l4d2_glow_item_weapon_cheat_scavenge_gascan "0"

		// Players with these flags have access to use !itemglow cmd to see all glow entites. (Empty = Everyone, -1: Nobody)
		l4d2_glow_item_weapon_cheat_watch_flag "z"
		```
</details>

* <details><summary>Command | 命令</summary>

	* **Turn On/Off item glow personally**
		```php
		sm_itemglow
		```

	* **Reload the glow configs. (Adm required: ADMFLAG_ROOT)**
		```php
		sm_glowreload
		```
</details>

* <details><summary>Data Config</summary>

	* data/l4d2_glow_item_weapon_cheat.cfg
		```php
		// Attributes explained:
		//  "enable"   -> Apply plugin glow to entity. "0" = Disable, "1" = Enable.
		//  "random"   -> Apply a random glow color. "0" = OFF, "1" = ON.
		//  "color"    -> Item glow color. Use three values between 0-255 separated by spaces. "<0-255> <0-255> <0-255>", e.g: "255 255 255". Ignored when "random" is "1".
		//  "flashing" -> Add a flashing effect on glowing entities. "0" = OFF, "1" = ON.
		//  "rangemin" -> Minimum distance that the client must be from the entity to start glowing. "0" = No minimum distance.
		//  "rangemax  -> Maximum distance that the client can be away from the entity to start glowing. "0" = No maximum distance.
		//  "team"     -> Which teams should see the outline glow. "7" = Everyone, "1" = Spectator, "2" = Survivors, "4" = Infecteds. (add numbers together)
		"l4d2_glow_item_weapon_cheat"
		{
			"default"
			{
				"enable"        "1"
				"team"          "7"
				"random"        "0"
				"color"         "255 255 255"
				"flashing"      "1"
				"rangemin"      "0"
				"rangemax"      "1500"
			}
		}
		```
</details>

* Apply to | 適用於
	```
	L4D2 Coop/Versus/Realism/Scavenge
	```

* <details><summary>Changelog | 版本日誌</summary>
	
	* v1.0h (2023-6-7)
		* Add cvars, cmds, and message
		* Add "teams" in data, Which teams should see the outline glow. 
		* Create "prop_dynamic_override" glow entities and attach to items and weapons
		* Only adms can use command to see glow though the wall

	* v1.0.7
	    * [Original Plugin By Marttt](https://forums.alliedmods.net/showthread.php?t=329617)
</details>

* <details><summary>Similar Plugin | 相似插件</summary>

	1. [l4d2_scope_wallhack](/Plugin_插件/Nothing_Impossible_無理改造版/l4d2_scope_wallhack): Survivor can use sniper scopes to see the infected model glows though the wall
		> 倖存者打開狙擊鏡能透視看到特感
	2. [l4d2_wallhack_cheat](/Plugin_插件/Nothing_Impossible_無理改造版/l4d2_wallhack_cheat): Admins can use commands to see the infected model glows though the wall
		> 管理員輸入指令能透視看到特感
</details>

- - - -
# 中文說明
管理員輸入指令能透視看到武器與物資

* 原理
	* 管理員輸入指令!itemglow能隔牆看到地圖上的武器與物品
	* 從倖存者身上掉落的武器與物品也能看到
	* 提示只有自己會看到
	* 對抗模式中也能使用，任何模式都適用

* 功能
	1. 可設置提示訊息
	2. 可設置特地權限的人也能使用指令看到
	3. 編輯文件```data/l4d2_glow_item_weapon_cheat.cfg```，可自行設定光圈的顏色與發光範圍

* <details><summary>文件設定範例</summary>

	* data/l4d2_glow_item_weapon_cheat.cfg
		```php
		//  "enable"   -> 附上光圈在這個物件上 "0" = 關閉光圈, "1" = 開啟光圈.
		//  "random"   -> 光圈顏色為隨機. "0" = 不隨機, "1" = 隨機.
		//  "color"    -> 指定光圈顏色. 使用RGB "<0-255> <0-255> <0-255>", 譬如: "255 255 255". 當"random"為1時忽略此顏色
		//  "flashing" -> 光圈閃爍 "0" = 不閃爍, "1" = 閃爍.
		//  "rangemin" -> 玩家必須與物件保持一定的範圍才看得到光圈. "0" = 無需保持範圍.
		//  "rangemax  -> 玩家離物件的範圍如果超過此數值則看不到光圈 "0" = 無論距離多遠都能看到.
		//  "team"     -> 哪些隊伍能看到光圈 "7" = 任何人, "1" = 旁觀者, "2" = 倖存者, "4" = 特感. (數字相加)
		"l4d2_glow_item_weapon_cheat"
		{
			"default"
			{
				"enable"        "1"
				"team"          "7"
				"random"        "0"
				"color"         "255 255 255"
				"flashing"      "1"
				"rangemin"      "0"
				"rangemax"      "1500"
			}
		}
		```
</details>

> __Warning__ 
<br/>這插件根據地圖上的武器與物資數量會產生很多發光物件，這些物件會額外占用伺服器的空間
<br/>這可能導致伺服器崩潰並出現"ED_Alloc: no free edicts"