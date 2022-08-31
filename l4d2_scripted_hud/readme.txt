Display text for up to 4 scripted HUD slots on the screen.

-----This plugin is private, Please contact me-----
-----此為私人插件, 請聯繫本人-----
(https://github.com/fbef0102/Game-Private_Plugin#%E7%A7%81%E4%BA%BA%E6%8F%92%E4%BB%B6%E5%88%97%E8%A1%A8-private-plugins-list)


-Apply to-
L4D2

-Changelog-
v1.0.3
- Kill Infected Counter status by Harry (HUD3_Text)

v1.0.2
-Original Post by Marttt: https://forums.alliedmods.net/showthread.php?p=2740016

-Install-
Ensure that you renamed the scripts\vscripts\l4d2_scripted_hud_rename.nut file to your gamemode. (<gamemode>.nut)
	* If you run a coop server. Rename it to "coop.nut"
	* If you run a versus server. Rename it to "versus.nut"
	* If you run a survival server. Rename it to "survival.nut"
	* If you run a scavenge server. Rename it as "scavenge.nut"
	* If you run some mutation gamemode. Rename it to "<mutation>.nut"
(don't forget to backup your <gamemode>.nut file if you already have one, e.g. coop.nut)

-Note-
* The limit of each HUD text is up to 127 characters.
 
-ConVar-
cfg/sourcemod/l4d2_scripted_hud.cfg
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
l4d2_scripted_hud_hud1_blink "0"

// Makes the text blink from white to red while a tank is alive.
// 0 = OFF, 1 = ON.
l4d2_scripted_hud_hud1_blink_tank "1"

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
l4d2_scripted_hud_hud1_x_speed "0.0"

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
l4d2_scripted_hud_hud2_visible "0"

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
l4d2_scripted_hud_hud2_y "0.015"

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
l4d2_scripted_hud_hud3_team "0"

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
l4d2_scripted_hud_hud4_blink_tank "1"

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
l4d2_scripted_hud_hud4_visible "0"

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