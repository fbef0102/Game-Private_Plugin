# Description | 內容
Unable to call valve vote depending on gamemode and difficulty.

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/SLV-CqriK8k)

* Image | 圖示
	* display message when someone tries to vote
        > 顯示誰在嘗試投票與投票內容
        <br/>![l4d_vote_block_1](image/l4d_vote_block_1.jpg)

* Apply to | 適用於
    ```
    L4D1
    L4D2
    ```

* <details><summary>Changelog | 版本日誌</summary>

    * v1.0
	    * Original Request by in2002
</details>

* Require | 必要安裝
	1. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)

* Related Plugin | 相關插件
	1. [kickthevoter](https://github.com/fbef0102/Game-Private_Plugin/tree/main/kickthevoter): Make It So The Person Calling The Vote Gets Kicked!
		> 使用Esc->發起投票的人將會被反踢出去伺服器

* <details><summary>ConVar | 指令</summary>

    * cfg/sourcemod/l4d_vote_block.cfg
        ```php
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
        ```
</details>

* <details><summary>Command | 命令</summary>
    
    None
</details>

- - - -
# 中文說明
根據遊戲模式和難度禁止使用Esc->發起投票

* 原理
    * 討厭新手進來亂投票切換難度或地圖嗎? 那這插件適合安裝在您的伺服器上

* 功能
	1. 禁止旁觀者使用Esc->投票
	2. 每個投票選項是否允許得根據當前的難度與遊戲模式
    3. 顯示訊息誰在嘗試投票與投票內容



