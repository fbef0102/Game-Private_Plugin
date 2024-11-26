# Description | 內容
When someone presses the elevator button or enters the CEDA Trailer, a timer will display how many time left. If a player is not inside the evelator/CEDA Trailer, slay him

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/B1oghdYb_gE)

* Image | 圖示
	<br/>![l4d_elevator_getin_timer_1](image/l4d_elevator_getin_timer_1.jpg)
	<br/>![l4d_elevator_getin_timer_2](image/l4d_elevator_getin_timer_2.jpg)

* Require | 必要安裝
	1. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)

* <details><summary>How does it work?</summary>

	* When someone presses the elevator button, a timer will display how many time left. If a player is not inside the evelator Trailer, slay him
	* When someone enters the CEDA Trailer, a timer will display how many time left. If a player is not inside the CEDA Trailer, slay him
	* Modify [data/l4d_elevator_info.cfg](data/l4d_elevator_info.cfg) to detect every elevator or CEDA Trailer on the map
</details>

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_elevator_getin_timer.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d_elevator_getin_timer_allow "1"

		// Changes how count down tumer hint displays. (0: Disable, 1:In chat, 2: In Hint Box, 3: In center text)
		l4d_elevator_getin_timer_announce_type "2"

		// Path to the Soundfile being played on each damaging Interval (Empty=Disable)
		l4d_elevator_getin_timer_damage_sound "player/survivor/voice/choke_5.wav"

		// If 1, Enable the Damage Shake 
		l4d_elevator_getin_timer_shake_enable "1"

		// If 1, When time is up, all survivor players are teleported into the elevator
		l4d_elevator_getin_timer_teleport_player "1"

		// If 1, When time is up, all survivor bots are teleported into the elevator
		l4d_elevator_getin_timer_teleport_bot "1"
		```
</details>

* <details><summary>Command | 命令</summary>
	
	None
</details>

* <details><summary>Data Config</summary>

	* [data/l4d_elevator_info.cfg](data/l4d_elevator_info.cfg)
		```php
		"elevator"
		{
			"c1m1_hotel"	//map name
			{
				"num"		"1"		//total numbers of evelator in this map
				"1"
				{
					"button_name"				"elevator_button" //evelator button targetname (please do not modify)
					"trigger_multiple_hammerid"		"1227567" 	//evelator trigger multiple hammerid (please do not modify)
					"get_inside_time"			"30"		//a timer will display how many time left
					"outside_damage"			"10"		//cause the damage to players outside the evelator
					"outside_damage_incap"		"100"	//cause the damage to incapacitated players outside the evelator
					"message"				"elevator"	//info everyone this is evelator
				}
			}
			"c5m2_park"
			{
				"num"		"1"
				"1"
				{
					"ceda_trailer"				"1"			// CEDA Trailer
					"door_name"				"finale_cleanse_exit_door" // CEDA Trailer Exit door targetname (please do not modify)
					"trigger_multiple_hammerid"		"456409" 		//CEDA Trailer trigger multiple hammerid (please do not modify)
					"get_inside_time"			"50"	 		//a timer will display how many time left
					"outside_damage"			"10" 			//cause the damage to players outside the CEDA Trailer
					"outside_damage_incap"		"100"			//cause the damage to incapacitated players outside the CEDA Trailer
					"message"				"CEDA Trailer" 		//info everyone this is CEDA Trailer
				}
			}
		}
		```
</details>

* Apply to | 適用於
	```
	L4D1
	L4D2
	```

* <details><summary>Related Plugin | 相關插件</summary>

	1. [l4d_rescue_vehicle_leave_timer](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4d_rescue_vehicle_leave_timer): When rescue vehicle arrived and a timer will display how many time left before vehicle leaving. If a player is not on rescue vehicle or zone, slay him
		> 救援來臨之後，未在時間內上救援飛機逃亡的玩家將處死
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.2 (2022-12-18)
		* When time is up, all survivor players are teleported into the elevator
		* When time is up, all survivor bots are teleported into the elevator

	* v1.1 (2022-11-15)
		* Cause the damage to incapacitated players outside the evelator/CEDA Trailer

	* v1.0
		* Initial Release
</details>

- - - -
# 中文說明
當有人按下電梯按鈕或是進入CEDA大拖車時，開始倒數計時，未在時間內進入電梯或CEDA大拖車的玩家將處死

* 原理
	* 第一位玩家按下電梯按鈕時，開始倒數計時
	* 第一位玩家進入CEDA大拖車（教區第二關），開始倒數計時
	* 當時間到之後，還在外面的玩家將處在中毒狀態，每秒受到傷害
	* 支援所有官方地圖 (三方圖不支援，請自行利用stripper_dump尋找地圖上的電梯或付錢)

* 用意在哪?
	* 總有傻B不進入電梯在外面閒晃，害得大家一直等待被特感打到滅團

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d_elevator_getin_timer.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		l4d_elevator_getin_timer_allow "1"

		// 倒數提示該如何顯示. (0: 不提示, 1: 聊天框, 2: 黑底白字框, 3: 螢幕正中間)
		l4d_elevator_getin_timer_announce_type "2"

		// 電梯門外，玩家中毒狀態的音效檔案，路徑相對於sound資料夾 (留白=無音效)
		l4d_elevator_getin_timer_damage_sound "player/survivor/voice/choke_5.wav"

		// 為1時，電梯門外，玩家中毒狀態時螢幕會晃動
		l4d_elevator_getin_timer_shake_enable "1"

		// 為1時，時間到之後，將所有真人倖存者傳送到電梯內
		l4d_elevator_getin_timer_teleport_player "1"

		// 為1時，時間到之後，將所有AI倖存者傳送到電梯內
		l4d_elevator_getin_timer_teleport_bot "1"
		```
</details>

* <details><summary>文件設定範例</summary>

	* 設置文件[data/l4d_elevator_info.cfg](data/l4d_elevator_info.cfg)，修改每一張地圖的電梯或CEDA大拖車
	* 支援所有官方地圖 (三方圖不支援，請自行利用stripper_dump尋找地圖上的電梯或付錢)
		```php
		"elevator"
		{
			"c1m1_hotel"	// 地圖名，必須一模一樣
			{
				"num"		"1"		// 該地圖電梯總數
				"1"
				{
					"button_name"				"elevator_button" 	// 電梯按鈕的專屬targetname (不能修改)
					"trigger_multiple_hammerid"		"1227567" 		// 電梯區域的專屬hammerid (不能修改)
					"get_inside_time"			"30"			// 倒數計時秒數
					"outside_damage"			"10"			// 每秒對電梯外的玩家造成的傷害
					"outside_damage_incap"		"100"			//每秒對電梯外的倒地或掛邊玩家造成的傷害
					"message"				"elevator"		// 通知所有人這是電梯 (可自行修改)
				}
			}
			"c5m2_park"
			{
				"num"		"1"
				"1"
				{
					"ceda_trailer"				"1"				// 這是CEDA拖車
					"door_name"				"finale_cleanse_exit_door"	// CEDA拖車末端門的專屬targetname (不能修改)
					"trigger_multiple_hammerid"		"456409" 			// CEDA拖車區域的專屬hammerid (不能修改)
					"get_inside_time"			"50"	 			// 倒數計時秒數
					"outside_damage"			"10" 				// 每秒對CEDA拖車外的玩家造成的傷害
					"outside_damage_incap"		"100"				//每秒對CEDA拖車外的倒地或掛邊玩家造成的傷害
					"message"				"CEDA Trailer" 			// 通知所有人這是CEDA拖車 (可自行修改)
				}
			}
		}
		```
</details>
