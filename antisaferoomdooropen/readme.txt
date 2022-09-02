Start Saferoom door anti open
(起始安全室的安全門將會鎖住直到時間結束 + 沒有安全門的關卡一旦離開安全區域會傳送回起始安全區域)

-----This plugin is private, Please contact me-----
-----此為私人插件, 請聯繫本人-----
(https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

-Apply to-
L4D1/2

-Changelog-
v2.2

-Require-
1. left4dhooks: https://forums.alliedmods.net/showthread.php?t=321696

-ConVar-
cfg/sourcemod/antisaferoomdooropen.cfg
// Allow player to leave safe area after this amount of time. (useful if map doesn't have Start saferoom door)
l4d_anti_left_start_area_time "40"

// Enable anti saferoom door close  plugin. [0-Disable,1-Enable]
l4d_anti_saferoom_door_enable "1"

// Enable anti saferoom door fade after open drop. [0-Disable,1-Enable]
l4d_anti_saferoom_door_fade "1"

// saferoom door anti open by survivor after this amount of time
l4d_anti_saferoom_door_open "40"

// If 1, Spawn player to safe area if player dies before door open
l4d_anti_saferoom_door_open_spawn_player "1"

// If 1, return player to safe area if player spawns or takes over bot before door open.
l4d_anti_saferoom_door_return_player "1"

// saferoom door auto open after this amount of time, even if survivors are still inside the safe room.
l4d_anti_saferoom_force_start_time "60"

// Turn on the plugin in these game modes. 0=All, 1=Coop, 2=Survival, 4=Versus, 8=Scavenge. Add numbers together.
l4d_anti_saferoom_modes_tog "1"

