l4d player tail effect (env_spritetrail)

-----This plugin is private, Please contact me-----
-----此為私人插件, 請聯繫本人-----
(https://github.com/fbef0102/Game-Private_Plugin#%E7%A7%81%E4%BA%BA%E6%8F%92%E4%BB%B6%E5%88%97%E8%A1%A8-private-plugins-list)


-效果-
色塊均勻，統一變色

-Video-
https://streamable.com/247ivq

-Apply to-
L4D1/2

-Changelog-
v1.2

-Require-
1. [L4D2] SpriteTrail Fix by 000: https://forums.alliedmods.net/showthread.php?t=339197
2. [INC] Multi Colors: https://forums.alliedmods.net/showthread.php?t=247770
3. left4dhooks: https://forums.alliedmods.net/showthread.php?t=321696

-Similar Plugin-
Choose plugin you like (一樣的尾巴特效，看自己喜歡用哪一種)
l4d_player_tail: https://github.com/fbef0102/Private-Work/tree/master/Private_Plugins/l4d_player_tail

-ConVar-
cfg/sourcemod/l4d_player_spritetrail.cfg
// Players with these flags have access to have tail effect and use command. (Empty = Everyone, -1: Nobody)
l4d_player_spritetrail_access_flag ""

// If 1, Enable Tail effect for Bot Infected
l4d_player_spritetrail_bot_infected_enable "1"

// If 1, Enable Tail effect for Bot Survivor
l4d_player_spritetrail_bot_survivor_enable "1"

// Time interval to change tail color to random (0=Don't change color)
l4d_player_spritetrail_changecolor_interval "5.0"

// The default tail color. Three values between 0-255 separated by spaces. RGB Color255 - Red Green Blue. [-1 -1 -1: Random]
l4d_player_spritetrail_color "-1 -1 -1"

// Transparency of the tail (10-255).
l4d_player_spritetrail_color_alpha "155"

// 1=Enable Tail effect for everyone default? [1-Enable/0-Disable]
l4d_player_spritetrail_default_value "1"

// The width of the beam when it has full expanded.
l4d_player_spritetrail_endwidth "3.0"

// The default attached tail height
l4d_player_spritetrail_height "10.0"

// How long the beam is shown
l4d_player_spritetrail_lifetime "4.0"

// The width of the beam to the beginning.
l4d_player_spritetrail_startwidth "15.0"

-Command-
** Toggle the attached tailed. Usage: sm_tail [R G B|off|random|red|green|blue|purple|cyan|orange|white|pink|lime|maroon|teal|yellow|grey]
** !tail <顏色名稱或R G B>. 顏色: red, green, blue, purple, orange, yellow, white. 或是 3 個 0-255 RGB之值. 譬如: !tail red 或是 !tail 255 0 0
	sm_tail
	sm_tails
	sm_harrypotter
	sm_hy




