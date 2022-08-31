Make It So The Person Calling The Vote Gets Kicked!
(使用Esc->投票的人將會被反踢出去伺服器)

-----This plugin is private, Please contact me-----
-----此為私人插件, 請聯繫本人-----
(https://github.com/fbef0102/Game-Private_Plugin#%E7%A7%81%E4%BA%BA%E6%8F%92%E4%BB%B6%E5%88%97%E8%A1%A8-private-plugins-list)

-Apply to-
L4D1/2

-Changelog-
v1.1

-Require-
1. builtinvotes: https://github.com/L4D-Community/builtinvotes/actions

-ConVar-
cfg/sourcemod/kickthevoter.cfg
// Players must wait (timeout) this many seconds between votes. 0 = no limit
kick_the_voter_Delay "60"

// If 1, even if vote result fails, just kick the voter.
kick_the_voter_all_pass "1"

// How to deal with the voter? (-1: kick, 0: Permanent ban, >0: Ban mins)
kick_the_voter_ban_mins "60"

// Players with these flags can call a change all talk vote (Empty = Everyone, -1: Nobody)
kick_the_voter_changealltalk_access "z"

// Players with these flags can call a change difficulty vote (Empty = Everyone, -1: Nobody)
kick_the_voter_difficulty_access "z"

// Players with these flags can call a kick vote (Empty = Everyone, -1: Nobody)
kick_the_voter_kick_access "z"

// Players with these flags can call a change level vote (Empty = Everyone, -1: Nobody)
kick_the_voter_level_access "z"

// Players with these flags can call a return to lobby vote (Empty = Everyone, -1: Nobody)
kick_the_voter_lobby_access "z"

// Log voter to data
kick_the_voter_log "1"

// If 1, Notify Message about voter.
kick_the_voter_notify "1"

// Players with these flags can call a restart level vote (Empty = Everyone, -1: Nobody)
kick_the_voter_restart_access "z"

// If 1, Spectator can call the vote (0: Disable)
kick_the_voter_spectator_allow "0"

// Players with these flags can call return to lobby on Survival maps. (Empty = Everyone, -1: Nobody)
kick_the_voter_surv_lobby_access "z"

// Players with these flags can call switch Survival maps. (Empty = Everyone, -1: Nobody)
kick_the_voter_surv_map_access "z"

// Players with these flags can call restart Survival maps. (Empty = Everyone, -1: Nobody)
kick_the_voter_surv_restart_access "z"

