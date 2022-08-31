A simple anti - runner system , punish the runner by spawn SI behind her.
(離隊伍太遠的玩家，特感代替月亮懲罰你)

-----This plugin is private, Please contact me-----
-----此為私人插件, 請聯繫本人-----
(https://github.com/fbef0102/Game-Private_Plugin#%E7%A7%81%E4%BA%BA%E6%8F%92%E4%BB%B6%E5%88%97%E8%A1%A8-private-plugins-list)

-Apply to-
L4D2

-Changelog-
v1.1

-Require-
1. spawn_infected_nolimit: https://github.com/fbef0102/Game-Private_Plugin/tree/main/spawn_infected_nolimit

-ConVar-
cfg/sourcemod/l4d_together.cfg
// 0=Disable Plugin, 1=Enable Plugin
l4d_together_enable "1"

// If 1, warn and notify the loner
l4d_together_loner_punish_announce "1"

// If 1, still punish the loner if he is computer survivor bot
l4d_together_loner_punish_fakeclient "1"

// If 1, kick infected bot after bot incapacitated the loner.
l4d_together_loner_punish_infected_incap_kick "1"

// How many infected spawn every time to punish the loner
l4d_together_loner_punish_infected_number "2"

// After infected bot spawned by this plugin, kick bot after a certain time if bot doesn't pin the loner. (0:Disable)
l4d_together_loner_punish_infected_spawn_kick "8.0"

// loner punish infected class, 0=All, 1=Smoker, 2=Hunter, 4=Boomer, 8=Charger, 16=Jockey, 32=Spitter. Add numbers together.
l4d_together_loner_punish_infected_type "0"

//  punish interval max seconds
l4d_together_loner_punish_interval_max "20.0"

//  punish interval min seconds
l4d_together_loner_punish_interval_min "10.0"

// loner punish type, 0=behind, 1=360 degree, 2=above his head
l4d_together_loner_punish_type "1"

// if some one away from his teamate, he is the loner
l4d_together_loner_range "2000.0"

// Turn on the plugin in these game modes. 0=All, 1=Coop, 2=Survival, 4=Versus, 8=Scavenge. Add numbers together.
l4d_together_modes_tog "0"

// Numbers of survivor required. (must be greater than or equal to 2 unless you are idiot)
l4d_together_survivr_required "3"

