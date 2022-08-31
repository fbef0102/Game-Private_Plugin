Restrict weapons individually or together

-Apply to-
L4D2

-Changelog-
v2.1

-Require-
1. [INC] Multi Colors: https://forums.alliedmods.net/showthread.php?t=247770

-ConVar-
cfg/sourcemod/l4d_weapon_limits.cfg
// Time interval bewteen weapon limit notify. (0=off)
l4d_weapon_limits_cooltime_block "3.0"

-Command-
**Add a weapon limit (Server Command)
	l4d_wlimits_add
	
**Locks the limits to improve search speeds (Server Command)
	l4d_wlimits_lock
	
**Clears all weapon limits (limits must be locked to be cleared) (Server Command)
	l4d_wlimits_clear
	

-Notice-
server.cfg write down
l4d_wlimits_add <limit number> <give ammo if weapon limited is reached> <weapon class name>

For example:
l4d_wlimits_add 3 1 weapon_smg weapon_smg_silenced
l4d_wlimits_add 3 1 weapon_shotgun_chrome weapon_pumpshotgun
l4d_wlimits_add 1 0 weapon_pistol_magnum
l4d_wlimits_add 0 0 weapon_melee
l4d_wlimits_add 0 1 weapon_hunting_rifle

then write down one more line, otherwise plugin won't work
l4d_wlimits_lock

	
-注意事項中文說明-
server.cfg寫下
l4d_wlimits_add <限制數量> <如果不能撿起限制的武器是否給彈藥> <武器名稱>

譬如:
l4d_wlimits_add 3 1 weapon_smg weapon_smg_silenced
l4d_wlimits_add 3 1 weapon_shotgun_chrome weapon_pumpshotgun
l4d_wlimits_add 1 0 weapon_pistol_magnum
l4d_wlimits_add 0 0 weapon_melee
l4d_wlimits_add 0 1 weapon_hunting_rifle

寫完要再加一句
l4d_wlimits_lock
否則不會生效
