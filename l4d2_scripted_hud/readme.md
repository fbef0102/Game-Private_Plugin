# Description | 內容
Display text for up to 4 scripted HUD slots on the screen.

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/IDYCZaJoZ4c)

* Image | 圖示
	* image 1
	<br/>![l4d2_scripted_hud_1](image/l4d2_scripted_hud_1.jpg)

* Apply to | 適用於
```
L4D2
```

* <details><summary>Changelog | 版本日誌</summary>

	* v1.0.3
		* Kill Infected Counter Rank by Harry (HUD3_Text)

	* v1.0.2
		* [Original Post by Marttt](https://forums.alliedmods.net/showthread.php?p=2740016)
</details>

* Require | 必要安裝
<br/>None

* Important | 重要步驟
	* Ensure that you renamed the scripts\vscripts\l4d2_scripted_hud_rename.nut file to your gamemode. (<gamemode>.nut)
		* If you run a coop server. Rename it to "coop.nut"
		* If you run a versus server. Rename it to "versus.nut"
		* If you run a survival server. Rename it to "survival.nut"
		* If you run a scavenge server. Rename it as "scavenge.nut"
		* If you run some mutation gamemode. Rename it to "<mutation>.nut"
		* You can create multi .nut files
	> __Note__ (don't forget to backup your <gamemode>.nut file if you already have one, e.g. coop.nut)

* Default HUD_Text | 預設顯示內容
	* HUD1_Text: -data\l4d2_scripted_hud.cfg "HUD1" text
	* HUD2_Text: Tank Health
	* HUD3_Text: Kill Infected Counter Rank
	* HUD4_Text: Player Speaking

* Note | 注意事項
	* Load data\l4d2_scripted_hud.cfg "HUD_Texts" first. If empty, then load "l4d2_scripted_hud_hud?_text"(? is 1~4) cvar text. If both empty, then load GetHUD*_Text functions
	* The limit of each HUD text is up to 127 characters.
	* HUD Text can be moved and animated effect, please read cfg.

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d2_scripted_hud.cfg
	```php
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
	l4d2_scripted_hud_hud1_text "HUD 1 TEXT"

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
	l4d2_scripted_hud_hud1_x "0.02"

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

	// Overwrite the HUD flag.
	// For debug purposes only.
	// 0 = OFF.
	l4d2_scripted_hud_hud3_flag_debug "0"

	// Text area Height.
	l4d2_scripted_hud_hud3_height "0.026"

	// How many ranks to display Kill S.I. counter status
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

	// Overwrite the HUD flag.
	// For debug purposes only.
	// 0 = OFF.
	l4d2_scripted_hud_hud4_flag_debug "0"

	// Text area Height.
	l4d2_scripted_hud_hud4_height "0.026"

	// Which team should see the text.
	// 0 = ALL, 1 = SURVIVOR, 2 = INFECTED.
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

	// Interval in seconds to update the HUD.
	l4d2_scripted_hud_update_interval "0.1"
	```
</details>

* <details><summary>Command | 命令</summary>
	None
</details>

- - - -
# 中文說明
在玩家畫面上方四個Hud位置顯示不同的特殊文字

* 功能
	1. 可自定義文字顯示內容
	2. 可利用指令達成文字移動或閃紅色的效果，請自行閱讀文字
	3. 多達四個HUD，可個別顯示或關閉文字

* 預設的 HUD 文字-
	* HUD1: -data\l4d2_scripted_hud.cfg "HUD1" 文字，自行修改
	* HUD2: Tank 血量
	* HUD3: 擊殺特感統計排行榜
	* HUD4: 玩家語音說話

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
	* 插件先載入 data\l4d2_scripted_hud.cfg "HUD_Texts" 讀取文字. 如果空白則讀取 "l4d2_scripted_hud_hud?_text"(? is 1~4) 指令文字. 如果兩者皆空, 使用插件預設的 GetHUD*_Text 顯示文字
	* 每個Hud文字上限為127，遊戲限制不能增加，認真你就輸了
	* 每個Hud文字可有滑動特效跟閃紅光，請詳細閱讀指令
	
> __Warning__<br/>
安裝上這個插件之後，畫面會比較卡，多個Tank存活期間尤為明顯，自行斟酌安裝
