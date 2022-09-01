Doraemon Aircannon

-----This plugin is private, Please contact me-----
-----此為私人插件, 請聯繫本人-----
(https://github.com/fbef0102/Game-Private_Plugin#%E7%A7%81%E4%BA%BA%E6%8F%92%E4%BB%B6%E5%88%97%E8%A1%A8-private-plugins-list)
-Apply to-
L4D1/2

-Changelog-
v1.0

-Require-
1. left4dhooks: https://forums.alliedmods.net/showthread.php?t=321696
2. [INC] Multi Colors: https://forums.alliedmods.net/showthread.php?t=247770

-ConVar-
cfg/sourcemod/l4d_gun_blastpushback.cfg
// 0=Plugin off, 1=Plugin on.
l4d_gun_blastpushback_allow "1"

// Changes how message displays. (0: Disable, 1:In chat, 2: In Hint Box, 3: In center text)
l4d_gun_blastpushback_announce_type "2"

// How much damage the Doraemon Aircannon does when fired.
l4d_gun_blastpushback_damage "5"

// How much damage the Doraemon Aircannon does when fired. (friendly fire)
l4d_gun_blastpushback_damage_ff "1"

// Doraemon Aircannon steam particle effect time. (0=Disable)
l4d_gun_blastpushback_effect_time "0.5"

// Turn on the plugin in these game modes, separate by commas (no spaces). (Empty = all).
l4d_gun_blastpushback_modes ""

// Turn off the plugin in these game modes, separate by commas (no spaces). (Empty = none).
l4d_gun_blastpushback_modes_off ""

// Turn on the plugin in these game modes. 0=All, 1=Coop, 2=Survival, 4=Versus, 8=Scavenge. Add numbers together.
l4d_gun_blastpushback_modes_tog "0"

// When hit by the Doraemon Aircannon, push players/infected by this much force.
l4d_gun_blastpushback_push "400"

// How long after using the Doraemon Aircannon before it can be used again.
l4d_gun_blastpushback_push_time "2.0"

// Doraemon Aircannon explosion radius override.
l4d_gun_blastpushback_radius "150"

// How far the Doraemon Aircannon can affect entities.
l4d_gun_blastpushback_range "150"

// If 1, Doraemon Aircannon can affect survivors.
l4d_gun_blastpushback_survivor "1"

// (L4D2) Empty string to allow all. Allow these weapon IDs being used in this plugin, separate by commas (no spaces). See plugin source code for more details.
l4d_gun_blastpushback_weapon "14,21,32,33"

// (L4D1) Empty string to allow all. Allow these weapon IDs being used in this plugin, separate by commas (no spaces). See plugin source code for more details.
l4d_gun_blastpushback_weapon "6,12,13"

-----中文說明書-----
多啦A夢的空氣砲

-功能-
1. 右鍵推產生一個空氣砲，特感與普通殭屍會被力道彈開

-插件原理-
拿出特定的武器，
按下右鍵推產生一個空氣砲，
在有效範圍內
擊中準心指向的目標並在目標產生一個空氣砲，
空氣砲附近的範圍內，
所有生物受到衝擊傷害，特感會被力道彈開、Witch會被震暈、普通殭屍會被震暈



