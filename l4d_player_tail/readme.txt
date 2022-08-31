l4d player tail effect (prop_dynamic_override)

-----This plugin is private, Please contact me-----
(https://github.com/fbef0102/Game-Private_Plugin#%E7%A7%81%E4%BA%BA%E6%8F%92%E4%BB%B6%E5%88%97%E8%A1%A8-private-plugins-list)


-效果-
線條色塊，逐漸變色

-Apply to-
L4D1/2

-Changelog-
v1.2

-Require-
1. left4dhooks: https://forums.alliedmods.net/showthread.php?t=321696
2. [INC] Multi Colors: https://forums.alliedmods.net/showthread.php?t=247770

-Similar Plugin-
Choose plugin you like (一樣的尾巴特效，看自己喜歡用哪一種)
l4d_player_spritetrail: https://github.com/fbef0102/Private-Work/tree/master/Private_Plugins/l4d_player_spritetrail

-ConVar-
cfg/sourcemod/l4d_player_tail.cfg
// Players with these flags have access to use tail command. (Empty = Everyone, -1: Nobody)
l4d_player_tail_access_flag ""

// If 1, Enable Tail effect for Bot Infected
l4d_player_tail_bot_infected_enable "1"

// If 1, Enable Tail effect for Bot Survivor
l4d_player_tail_bot_survivor_enable "1"

// Timer interval to change tail color
l4d_player_tail_changecolor_interval "4.0"

// The default tail color. Three values between 0-255 separated by spaces. RGB Color255 - Red Green Blue. [-1 -1 -1: Random]
l4d_player_tail_color "-1 -1 -1"

// Transparency of the tail (10-255).
l4d_player_tail_color_alpha "100"

// 1=Enable Tail effect for everyone default? [1-Enable/0-Disable]
l4d_player_tail_default_value "1"

// The width of the beam when it has full expanded.
l4d_player_tail_endwidth "1.0"

// The default attached tail height
l4d_player_tail_height "5.0"

// How long the beam is shown
l4d_player_tail_lifetime "5.0"

// The width of the beam to the beginning.
l4d_player_tail_startwidth "10.0"

-Command-
** Toggle the attached tailed.
	sm_tail
	sm_tails
	sm_harrypotter
	sm_hy




