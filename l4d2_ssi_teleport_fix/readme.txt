Teleport Infected player (Not Tank) to the teammate who is much nearer to survivors. 
(傳送比較遠的特感到靠近倖存者的特感隊友附近)

-Apply to-
L4D2

-Changelog-
v1.6

-Require-
None

-ConVar-
cfg/sourcemod/l4d2_ssi_teleport_fix.cfg
// Teleport boomer to tank?
ssitp_boomer2tank "0"

// Time interval to check si.
ssitp_check_interval "1.0"

// Cold Down Time in seconds an infected can not be teleported again.
ssitp_tp1_cooltime "2.0"

// Prevent SI from taking damage for this seconds after being teleported. (0=Disable)
ssitp_tp1_god_time "0.6"

// Limit per teleport.
ssitp_tp1_limit "2"

// Infected player will be teleported if his distance from survivors is outside this range.
ssitp_tp1_range "800"

// Teleport to the player max range, value must <= 'ssitp_tp1_range'.
ssitp_tp2_range_max "800"

// Teleport to the player min range
ssitp_tp2_range_min "150"

// If 1, infected players can be teleported to the player thats about to be seen by the survivors.
ssitp_tp2_visiblethreats "0"

