Unable to call valve vote depending on gamemode and difficulty.

-----This plugin is private, Please contact me-----
-----此為私人插件, 請聯繫本人-----
(https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

-Apply to-
L4D1/2

-Changelog-
v1.0

-Require-
1. [INC] Multi Colors: https://forums.alliedmods.net/showthread.php?t=247770

-ConVar-
cfg/sourcemod/l4d_vote_block.cfg
// 0=Plugin off, 1=Plugin on.
l4d_vote_block_allow "1"

// If 1, allow spectator to call vote.
l4d_vote_block_allow_spectator "0"

// Turn on vote 'Change Alltalk' in these difficulty. 0=All, 1=Easy, 2=Normal, 4=Hard, 8=Impossible. Add numbers together. (Only check difficulty in Coop/Realism)
l4d_vote_block_difficulty_tog_changealltalk "0"

// Turn on vote 'Change Chapter' in these difficulty. 0=All, 1=Easy, 2=Normal, 4=Hard, 8=Impossible. Add numbers together. (Only check difficulty in Coop/Realism)
l4d_vote_block_difficulty_tog_changechapter "0"

// Turn on vote 'Change Difficulty' in these difficulty. 0=All, 1=Easy, 2=Normal, 4=Hard, 8=Impossible. Add numbers together. (Only check difficulty in Coop/Realism)
l4d_vote_block_difficulty_tog_changedifficulty "0"

// Turn on vote 'Change Mission' in these difficulty. 0=All, 1=Easy, 2=Normal, 4=Hard, 8=Impossible. Add numbers together. (Only check difficulty in Coop/Realism)
l4d_vote_block_difficulty_tog_changemission "0"

// Turn on vote 'Kick' in these difficulty. 0=All, 1=Easy, 2=Normal, 4=Hard, 8=Impossible. Add numbers together. (Only check difficulty in Coop/Realism)
l4d_vote_block_difficulty_tog_kick "0"

// Turn on vote 'Restar Game' in these difficulty. 0=All, 1=Easy, 2=Normal, 4=Hard, 8=Impossible. Add numbers together. (Only check difficulty in Coop/Realism)
l4d_vote_block_difficulty_tog_restartgame "0"

// Turn on vote 'Return to Lobby' in these difficulty. 0=All, 1=Easy, 2=Normal, 4=Hard, 8=Impossible. Add numbers together. (Only check difficulty in Coop/Realism)
l4d_vote_block_difficulty_tog_returntolobby "0"

// Turn on vote 'Change Alltalk' in these game modes. 0=All, 1=Coop/Realism, 2=Survival, 4=Versus, 8=Scavenge. Add numbers together.
l4d_vote_block_modes_tog_changealltalk "0"

// Turn on vote 'Change Chapter' in these game modes. 0=All, 1=Coop/Realism, 2=Survival, 4=Versus, 8=Scavenge. Add numbers together.
l4d_vote_block_modes_tog_changechapter "0"

// Turn on vote 'Change Difficulty' in these game modes. 0=All, 1=Coop/Realism, 2=Survival, 4=Versus, 8=Scavenge. Add numbers together.
l4d_vote_block_modes_tog_changedifficulty "0"

// Turn on vote 'Change Mission' in these game modes. 0=All, 1=Coop/Realism, 2=Survival, 4=Versus, 8=Scavenge. Add numbers together.
l4d_vote_block_modes_tog_changemission "0"

// Turn on vote 'Kick' in these game modes. 0=All, 1=Coop/Realism, 2=Survival, 4=Versus, 8=Scavenge. Add numbers together.
l4d_vote_block_modes_tog_kick "0"

// Turn on vote 'Restar Game' in these game modes. 0=All, 1=Coop/Realism, 2=Survival, 4=Versus, 8=Scavenge. Add numbers together.
l4d_vote_block_modes_tog_restartgame "0"

// Turn on vote 'Return to Lobby' in these game modes. 0=All, 1=Coop/Realism, 2=Survival, 4=Versus, 8=Scavenge. Add numbers together.
l4d_vote_block_modes_tog_returntolobby "0"

