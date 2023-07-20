# Description | 內容
Display text for up to 5 scripted HUD slots on the screen.

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Video | 影片展示
<br/>None

* <details><summary>Image | 圖示</summary>

	* Layout 1 (Survivor)
		> 版面一 (人類方)
		<br/>![l4d2_scripted_hud_1](image/l4d2_scripted_hud_1.jpg)
	* Layout 2 (Infected)
		> 版面二 (特感方)
		<br/>![l4d2_scripted_hud_2](image/l4d2_scripted_hud_2.jpg)
	* Layout 3 (Spectator)
		> 版面三 (旁觀者)
		<br/>![l4d2_scripted_hud_3](image/l4d2_scripted_hud_3.jpg)
	* Layout 4
		> 版面四
		<br/>![l4d2_scripted_hud_4](image/l4d2_scripted_hud_4.jpg)
	* Coordinate diagram
		> HUD座標圖
		<br/>![l4d2_scripted_hud_5](image/l4d2_scripted_hud_5.jpg)
</details>

* Apply to | 適用於
	```
	L4D2
	```

* <details><summary>Changelog | 版本日誌</summary>

	* v1.0h (2023-07-19)
		* Optimize code and improve performance

	* v1.1.0 (2023-02-13)
		* Display Survivors, Infected, and Spectator MIC Speaking text separately
		* Add HUD 5 for Infected Mic Speaking
		* Add Center text for Spectator Mic Speaking

	* v1.0.5 (2022-11-27)
		* HUD3_TEXT + C.I.+S.I.+Tank+Witch kills rank
		* HUD4_TEXT + Survivor health
		* Add cvars to switch HUDX_TEXT text

	* v1.0.4 (2022-11-24)
		* Kill Infected Counter Rank (HUD3_Text)
		* Time and Survivor/Infected count (HUD1_Text)

	* v1.0.2
		* [By Marttt](https://forums.alliedmods.net/showthread.php?p=2740016)
</details>

* Require | 必要安裝
<br/>None

* Related Plugin | 相關插件
	1. [l4d2_cs_kill_hud](https://github.com/fbef0102/L4D2-Plugins/tree/master/l4d2_cs_kill_hud): HUD with cs kill info list.
		> L4D2擊殺提示改成CS遊戲的擊殺列表

* Important
	* Ensure that you renamed the scripts\vscripts\l4d2_scripted_hud_rename.nut file to your gamemode. (<gamemode>.nut)
		* If you run a coop server. Rename it to "coop.nut"
		* If you run a versus server. Rename it to "versus.nut"
		* If you run a survival server. Rename it to "survival.nut"
		* If you run a scavenge server. Rename it as "scavenge.nut"
		* If you run some mutation gamemode. Rename it to "<mutation>.nut"
		* You can create multi .nut files
	> __Note__ (don't forget to backup your <gamemode>.nut file if you already have one, e.g. coop.nut)

* <details><summary>Default HUDX_Text</summary>

	To Switch Default HUDX_Text, please modify ```l4d2_scripted_hud_hud?_display``` cvar (? is 1~5)
	* HUD1_Text: 
		1. Time and Survivor/Infected count
	* HUD2_Text: 
		1. Tank Health
	* HUD3_Text: 
		1. S.I. kills rank
		2. C.I.+S.I.+Tank+Witch kills rank
	* HUD4_Text:
		1. Survivor Mic Speaking
			* Only Survivor&Spectator team can see
		2. Survivor health
	* HUD5_Text: 
		1. Infected Mic Speaking
			* Only Enable when server does not enable alltalk
			* Only Infected team can see
	* Center_Text: 
		1. Spectator Mic Speaking
			* Only Enable when server does not enable alltalk
			* Only Spectator team can see
</details>

* Note
	* Load data\l4d2_scripted_hud.cfg "HUD_Texts" first. If empty, then load ```l4d2_scripted_hud_hud?_text``` (? is 1~5) cvar text. If both empty, then load GetHUD*_Text functions
	* The limit of each HUD text is up to 127 characters.
	* HUD Text can be moved and animated effect, please read cfg.

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d2_scripted_hud.cfg
		```php
		// Makes the center text visible.
		// 0 = OFF, 1 = ON.
		l4d2_scripted_hud_center_visible "1"

		// Enable/Disable the plugin.
		// 0 = Disable, 1 = Enable.
		l4d2_scripted_hud_enable "1"

		// Shows the text inside a black transparent background.
		// Note: the background may not draw properly when initialized as "0", start the map with "1" to render properly.
		// 0 = OFF, 1 = ON.
		l4d2_scripted_hud_hud1_background "0"

		// Makes the text play a beep sound while blinking.
		// 0 = OFF, 1 = ON. Note: the blink cvar must be "1" to play the beep sound.
		l4d2_scripted_hud_hud1_beep "0"

		// Makes the text blink from white to red.
		// 0 = OFF, 1 = ON.
		l4d2_scripted_hud_hud1_blink "1"

		// Makes the text blink from white to red while a tank is alive.
		// 0 = OFF, 1 = ON.
		l4d2_scripted_hud_hud1_blink_tank "0"

		// Overwrite the HUD flag.
		// For debug purposes only.
		// 0 = OFF.
		l4d2_scripted_hud_hud1_flag_debug "0"

		// Text area Height.
		l4d2_scripted_hud_hud1_height "0.026"

		// Which team should see the text.
		// 0 = ALL, 1 = SURVIVOR, 2 = INFECTED.
		l4d2_scripted_hud_hud1_team "0"

		// The text you want to display in the HUD.
		// Note: When cvar is empty "", plugin will use the predefined HUD text set in the code, check GetHUD*_Text functions.
		l4d2_scripted_hud_hud1_text ""

		// Aligns the text horizontally.
		// 1 = LEFT, 2 = CENTER, 3 = RIGHT.
		l4d2_scripted_hud_hud1_text_align "1"

		// Makes the text visible.
		// 0 = OFF, 1 = ON.
		l4d2_scripted_hud_hud1_visible "1"

		// Text area Width.
		l4d2_scripted_hud_hud1_width "1.5"

		// X (horizontal) position of the text.
		// Note: setting it to less than 0.0 may cut/hide the text at screen.
		l4d2_scripted_hud_hud1_x "0.0"

		// Animated X (horizontal) direction that the text will move.
		// 0 = Right to Left, 1 = Left to Right.
		l4d2_scripted_hud_hud1_x_direction "0"

		// Animated X (horizontal) maximum position that the HUD can reach.
		l4d2_scripted_hud_hud1_x_max "1.0"

		// Animated X (horizontal) minimum position that the HUD can reach.
		l4d2_scripted_hud_hud1_x_min "0.0"

		// Animated X (horizontal) movement speed of the text.
		// 0 = OFF.
		l4d2_scripted_hud_hud1_x_speed "0.002"

		// Y (vertical) position of the text.
		// Note: setting it to less than 0.0 may cut/hide the text at screen.
		l4d2_scripted_hud_hud1_y "0.015"

		// Animated Y (vertical) direction that the text will move.
		// 0 = Top to Bottom, 1 = Bottom to Top.
		l4d2_scripted_hud_hud1_y_direction "0"

		// Animated Y (vertical) maximum position that the HUD can reach.
		l4d2_scripted_hud_hud1_y_max "1.0"

		// Animated Y (vertical) minimum position that the HUD can reach.
		l4d2_scripted_hud_hud1_y_min "0.0"

		// Animated Y (vertical) movement speed of the text.
		// 0 = OFF.
		l4d2_scripted_hud_hud1_y_speed "0.0"

		// Shows the text inside a black transparent background.
		// Note: the background may not draw properly when initialized as "0", start the map with "1" to render properly.
		// 0 = OFF, 1 = ON.
		l4d2_scripted_hud_hud2_background "0"

		// Makes the text play a beep sound while blinking.
		// 0 = OFF, 1 = ON. Note: the blink cvar must be "1" to play the beep sound.
		l4d2_scripted_hud_hud2_beep "0"

		// Makes the text blink from white to red.
		// 0 = OFF, 1 = ON.
		l4d2_scripted_hud_hud2_blink "0"

		// Makes the text blink from white to red while a tank is alive.
		// 0 = OFF, 1 = ON.
		l4d2_scripted_hud_hud2_blink_tank "1"

		// Overwrite the HUD flag.
		// For debug purposes only.
		// 0 = OFF.
		l4d2_scripted_hud_hud2_flag_debug "0"

		// Text area Height.
		l4d2_scripted_hud_hud2_height "0.026"

		// Which team should see the text.
		// 0 = ALL, 1 = SURVIVOR, 2 = INFECTED.
		l4d2_scripted_hud_hud2_team "0"

		// The text you want to display in the HUD.
		// Note: When cvar is empty "", plugin will use the predefined HUD text set in the code, check GetHUD*_Text functions.
		l4d2_scripted_hud_hud2_text ""

		// Aligns the text horizontally.
		// 1 = LEFT, 2 = CENTER, 3 = RIGHT.
		l4d2_scripted_hud_hud2_text_align "1"

		// Makes the text visible.
		// 0 = OFF, 1 = ON.
		l4d2_scripted_hud_hud2_visible "1"

		// Text area Width.
		l4d2_scripted_hud_hud2_width "1.5"

		// X (horizontal) position of the text.
		// Note: setting it to less than 0.0 may cut/hide the text at screen.
		l4d2_scripted_hud_hud2_x "0.75"

		// Animated X (horizontal) direction that the text will move.
		// 0 = Left to Right, 1 = Right to Left.
		l4d2_scripted_hud_hud2_x_direction "0"

		// Animated X (horizontal) maximum position that the HUD can reach.
		l4d2_scripted_hud_hud2_x_max "1.0"

		// Animated X (horizontal) minimum position that the HUD can reach.
		l4d2_scripted_hud_hud2_x_min "0.0"

		// Animated X (horizontal) movement speed of the text.
		// 0 = OFF.
		l4d2_scripted_hud_hud2_x_speed "0.0"

		// Y (vertical) position of the text.
		// Note: setting it to less than 0.0 may cut/hide the text at screen.
		l4d2_scripted_hud_hud2_y "0.1"

		// Animated Y (vertical) direction that the text will move.
		// 0 = Top to Bottom, 1 = Bottom to Top.
		l4d2_scripted_hud_hud2_y_direction "0"

		// Animated Y (vertical) maximum position that the HUD can reach.
		l4d2_scripted_hud_hud2_y_max "1.0"

		// Animated Y (vertical) minimum position that the HUD can reach.
		l4d2_scripted_hud_hud2_y_min "0.0"

		// Animated Y (vertical) movement speed of the text.
		// 0 = OFF.
		l4d2_scripted_hud_hud2_y_speed "0.0"

		// Shows the text inside a black transparent background.
		// Note: the background may not draw properly when initialized as "0", start the map with "1" to render properly.
		// 0 = OFF, 1 = ON.
		l4d2_scripted_hud_hud3_background "0"

		// Makes the text play a beep sound while blinking.
		// 0 = OFF, 1 = ON. Note: the blink cvar must be "1" to play the beep sound.
		l4d2_scripted_hud_hud3_beep "0"

		// Makes the text blink from white to red.
		// 0 = OFF, 1 = ON.
		l4d2_scripted_hud_hud3_blink "0"

		// Makes the text blink from white to red while a tank is alive.
		// 0 = OFF, 1 = ON.
		l4d2_scripted_hud_hud3_blink_tank "0"

		// Which text to display in GetHUD3_Text by default?
		// 0=S.I. kills rank
		// 1=C.I.+S.I.+Tank+Witch kills rank
		l4d2_scripted_hud_hud3_display "1"

		// Overwrite the HUD flag.
		// For debug purposes only.
		// 0 = OFF.
		l4d2_scripted_hud_hud3_flag_debug "0"

		// Text area Height.
		l4d2_scripted_hud_hud3_height "0.026"

		// How many ranks to display Kill counter status
		l4d2_scripted_hud_hud3_number "5"

		// Which team should see the text.
		// 0 = ALL, 1 = SURVIVOR, 2 = INFECTED.
		l4d2_scripted_hud_hud3_team "1"

		// The text you want to display in the HUD.
		// Note: When cvar is empty "", plugin will use the predefined HUD text set in the code, check GetHUD*_Text functions.
		l4d2_scripted_hud_hud3_text ""

		// Aligns the text horizontally.
		// 1 = LEFT, 2 = CENTER, 3 = RIGHT.
		l4d2_scripted_hud_hud3_text_align "1"

		// Makes the text visible.
		// 0 = OFF, 1 = ON.
		l4d2_scripted_hud_hud3_visible "1"

		// Text area Width.
		l4d2_scripted_hud_hud3_width "1.5"

		// X (horizontal) position of the text.
		// Note: setting it to less than 0.0 may cut/hide the text at screen.
		l4d2_scripted_hud_hud3_x "0.02"

		// Animated X (horizontal) direction that the text will move.
		// 0 = Left to Right, 1 = Right to Left.
		l4d2_scripted_hud_hud3_x_direction "0"

		// Animated X (horizontal) maximum position that the HUD can reach.
		l4d2_scripted_hud_hud3_x_max "1.0"

		// Animated X (horizontal) minimum position that the HUD can reach.
		l4d2_scripted_hud_hud3_x_min "0.0"

		// Animated X (horizontal) movement speed of the text.
		// 0 = OFF.
		l4d2_scripted_hud_hud3_x_speed "0.0"

		// Y (vertical) position of the text.
		// Note: setting it to less than 0.0 may cut/hide the text at screen.
		l4d2_scripted_hud_hud3_y "0.15"

		// Animated Y (vertical) direction that the text will move.
		// 0 = Top to Bottom, 1 = Bottom to Top.
		l4d2_scripted_hud_hud3_y_direction "0"

		// Animated Y (vertical) maximum position that the HUD can reach.
		l4d2_scripted_hud_hud3_y_max "1.0"

		// Animated Y (vertical) minimum position that the HUD can reach.
		l4d2_scripted_hud_hud3_y_min "0.0"

		// Animated Y (vertical) movement speed of the text.
		// 0 = OFF.
		l4d2_scripted_hud_hud3_y_speed "0.0"

		// Shows the text inside a black transparent background.
		// Note: the background may not draw properly when initialized as "0", start the map with "1" to render properly.
		// 0 = OFF, 1 = ON.
		l4d2_scripted_hud_hud4_background "0"

		// Makes the text play a beep sound while blinking.
		// 0 = OFF, 1 = ON. Note: the blink cvar must be "1" to play the beep sound.
		l4d2_scripted_hud_hud4_beep "0"

		// Makes the text blink from white to red.
		// 0 = OFF, 1 = ON.
		l4d2_scripted_hud_hud4_blink "0"

		// Makes the text blink from white to red while a tank is alive.
		// 0 = OFF, 1 = ON.
		l4d2_scripted_hud_hud4_blink_tank "0"

		// Which text to display in GetHUD4_Text by default?
		// 0=Survivor Mic Speaking
		// 1=Survivor health
		l4d2_scripted_hud_hud4_display "1"

		// Overwrite the HUD flag.
		// For debug purposes only.
		// 0 = OFF.
		l4d2_scripted_hud_hud4_flag_debug "0"

		// Text area Height.
		l4d2_scripted_hud_hud4_height "0.026"

		// Which team should see the text.
		// 0 = ALL, 1 = SURVIVOR, 2 = INFECTED. (Does not work if GetHUD4_Text is Survivor Mic Speaking)
		l4d2_scripted_hud_hud4_team "0"

		// The text you want to display in the HUD.
		// Note: When cvar is empty "", plugin will use the predefined HUD text set in the code, check GetHUD*_Text functions.
		l4d2_scripted_hud_hud4_text ""

		// Aligns the text horizontally.
		// 1 = LEFT, 2 = CENTER, 3 = RIGHT.
		l4d2_scripted_hud_hud4_text_align "1"

		// Makes the text visible.
		// 0 = OFF, 1 = ON.
		l4d2_scripted_hud_hud4_visible "1"

		// Text area Width.
		l4d2_scripted_hud_hud4_width "1.5"

		// X (horizontal) position of the text.
		// Note: setting it to less than 0.0 may cut/hide the text at screen.
		l4d2_scripted_hud_hud4_x "0.75"

		// Animated X (horizontal) direction that the text will move.
		// 0 = Left to Right, 1 = Right to Left.
		l4d2_scripted_hud_hud4_x_direction "0"

		// Animated X (horizontal) maximum position that the HUD can reach.
		l4d2_scripted_hud_hud4_x_max "1.0"

		// Animated X (horizontal) minimum position that the HUD can reach.
		l4d2_scripted_hud_hud4_x_min "0.0"

		// Animated X (horizontal) movement speed of the text.
		// 0 = OFF.
		l4d2_scripted_hud_hud4_x_speed "0.0"

		// Y (vertical) position of the text.
		// Note: setting it to less than 0.0 may cut/hide the text at screen.
		l4d2_scripted_hud_hud4_y "0.35"

		// Animated Y (vertical) direction that the text will move.
		// 0 = Top to Bottom, 1 = Bottom to Top.
		l4d2_scripted_hud_hud4_y_direction "0"

		// Animated Y (vertical) maximum position that the HUD can reach.
		l4d2_scripted_hud_hud4_y_max "1.0"

		// Animated Y (vertical) minimum position that the HUD can reach.
		l4d2_scripted_hud_hud4_y_min "0.0"

		// Animated Y (vertical) movement speed of the text.
		l4d2_scripted_hud_hud4_y_speed "0.0"

		// Shows the HUD 5 text inside a black transparent background.
		// Note: the background may not draw properly when initialized as "0", start the map with "1" to render properly.
		// 0 = OFF, 1 = ON.
		l4d2_scripted_hud_hud5_background "0"

		// Makes the HUD 5 text play a beep sound while blinking.
		// 0 = OFF, 1 = ON. Note: the blink cvar must be "1" to play the beep sound.
		l4d2_scripted_hud_hud5_beep "0"

		// Makes the text blink from white to red.
		// 0 = OFF, 1 = ON.
		l4d2_scripted_hud_hud5_blink "0"

		// Makes the HUD 5 text blink from white to red while a tank is alive.
		// 0 = OFF, 1 = ON.
		l4d2_scripted_hud_hud5_blink_tank "0"

		// HUD 5 Text area Height.
		l4d2_scripted_hud_hud5_height "0.3"

		// Aligns the HUD 5 text horizontally.
		// 1 = LEFT, 2 = CENTER, 3 = RIGHT.
		l4d2_scripted_hud_hud5_text_align "1"

		// Makes the HUD 5 text visible.
		// 0 = OFF, 1 = ON.
		l4d2_scripted_hud_hud5_visible "1"

		// HUD 5 Text area Width.
		l4d2_scripted_hud_hud5_width "1.5"

		// X (horizontal) position of the HUD 5 text.
		// Note: setting it to less than 0.0 may cut/hide the text at screen.
		l4d2_scripted_hud_hud5_x "0.75"

		// Y (vertical) position of the HUD 5 text.
		// Note: setting it to less than 0.0 may cut/hide the text at screen.
		l4d2_scripted_hud_hud5_y "0.5"

		// Interval in seconds to update the HUD.
		l4d2_scripted_hud_update_interval "0.5"
		```
</details>

* <details><summary>Command | 命令</summary>
	None
</details>

- - - -
# 中文說明
在玩家畫面上方五個Hud位置顯示不同的特殊文字

* 功能
	1. 可自定義文字顯示內容
	2. 可利用指令移動HUD的位置，查看指令設置X與Y的座標
	3. 可利用指令達成文字移動或閃紅色的動畫效果，請自行閱讀指令列表
	4. 多達五個HUD，可個別顯示或關閉文字

* <details><summary>預設的 HUDX 文字 (點我展開)</summary>

	若要換預設的 HUDX 文字請修改 ```l4d2_scripted_hud_hud?_display``` 指令(?為數字1~5)
	* HUD1: 
		1. 目前遊戲時間、倖存者數量、感染者數量
	* HUD2: 
		1. Tank 血量
	* HUD3: 
		1. 特感擊殺統計排行榜
		2. 擊殺統計排行榜 (普通感染者+特感+Tank+Witch)
	* HUD4: 
		1. 倖存者語音說話
			* 只顯示給倖存者與旁觀者
		2. 倖存者血量狀態
	* HUD5: 
		1. 特感語音說話
			* 當伺服器沒有開啟全語音，才會顯示
			* 只顯示給特感
	* Center: 
		1. 旁觀者語音說話
			* 當伺服器沒有開啟全語音，才會顯示
			* 只顯示給旁觀者
</details>

* 安裝步驟
	* 確保 scripts\vscripts\l4d2_scripted_hud_rename.nut 檔名名稱更改成伺服器的遊戲模式. (<遊戲模式名稱>.nut)
	* 戰役模式. 改成名 "coop.nut"
	* 對抗模式. 改成名 "versus.nut"
	* 生存模式. 改成名 "survival.nut"
	* 清道夫模式. 改成名 "scavenge.nut"
	* 突變模式. 改成名 "<突變模式英文名>.nut"
	* 可以創建多個.nut檔案
	> __Note__ (如果已有.nut檔案，可以先備份)

* 注意事項
	* 插件先讀取 data\l4d2_scripted_hud.cfg "HUD_Texts" => "HUDX" 文字. 如果空白則讀取 ```l4d2_scripted_hud_hudX_text``` 指令文字. 如果兩者皆空, 使用插件內預設的 GetHUD?_Text 文字 (? 是 1~5)
	* 每個Hud文字上限為127，遊戲限制不能增加，認真你就輸了，再問就是Valve的鍋
	* 每個Hud文字可有滑動跟閃紅光的特效，請詳細閱讀指令