Allows players to get themselves unstuck from charger glitches and level clips

-Apply to-
L4D2

-Changelog-
v1.3

-Require-
1. left4dhooks: https://forums.alliedmods.net/showthread.php?t=321696

-ConVar-
cfg/sourcemod/L4D2_unstick.cfg
// If 1, Announces each round start that the !stuck command is available.
l4d2unstick_announce "1"

// Amount of times the client can use !stuck per round
l4d2unstick_teleports "2"

-Command-
**Unstuck yourself
	sm_stuck
	
**Usage: sm_unstick <name> (Adm required: ADMFLAG_GENERIC)
	sm_unstuck