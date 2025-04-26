# Description | 內容
Unable to call valve vote depending on gamemode and difficulty.

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Apply to | 適用於
    ```
    L4D1
    L4D2
    ```

* [Video | 影片展示](https://youtu.be/SLV-CqriK8k)

* Image | 圖示
	<br/>![l4d_vote_block_1](image/l4d_vote_block_1.jpg)

* <details><summary>How does it work?</summary>

	* When idiot player tries to call valve vote to change difficulty or change map, block the vote and display message
    * Admin is immune of being kicked
</details>

* Require | 必要安裝
	1. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)

* <details><summary>ConVar | 指令</summary>

    * cfg/sourcemod/l4d_vote_block.cfg
        ```php
        // 0=Plugin off, 1=Plugin on.
        l4d_vote_block_allow "1"

        // If 1, allow spectator to call vote.
        l4d_vote_block_allow_spectator "0"

        // Turn on vote 'Return to Lobby' in these game modes. -1: Block All, 0=Allow All, 1=Coop/Realism, 2=Survival, 4=Versus, 8=Scavenge. Add numbers together.
        l4d_vote_block_modes_tog_returntolobby "0"

        // Turn on vote 'Return to Lobby' in these difficulty. -1: Block All, 0=Allow All, 1=Easy, 2=Normal, 4=Hard, 8=Impossible. Add numbers together. (Only check difficulty in Coop/Realism)
        l4d_vote_block_difficulty_tog_returntolobby "0"

        // Turn on vote 'Restart Game' in these game modes. -1: Block All, 0=Allow All, 1=Coop/Realism, 2=Survival, 4=Versus, 8=Scavenge. Add numbers together.
        l4d_vote_block_modes_tog_restartgame "0"

        // Turn on vote 'Restart Game' in these difficulty. -1: Block All, 0=Allow All, 1=Easy, 2=Normal, 4=Hard, 8=Impossible. Add numbers together. (Only check difficulty in Coop/Realism)
        l4d_vote_block_difficulty_tog_restartgame "0"

        // Turn on vote 'Change Difficulty' in these game modes. -1: Block All, 0=Allow All, 1=Coop/Realism, 2=Survival, 4=Versus, 8=Scavenge. Add numbers together.
        l4d_vote_block_modes_tog_changedifficulty "0"

        // Turn on vote 'Change Difficulty' in these difficulty. -1: Block All, 0=Allow All, 1=Easy, 2=Normal, 4=Hard, 8=Impossible. Add numbers together. (Only check difficulty in Coop/Realism)
        l4d_vote_block_difficulty_tog_changedifficulty "0"

        // Turn on vote 'Change Mission' in these game modes. -1: Block All, 0=Allow All, 1=Coop/Realism, 2=Survival, 4=Versus, 8=Scavenge. Add numbers together.
        l4d_vote_block_modes_tog_changemission "0"

        // Turn on vote 'Change Mission' in these difficulty. -1: Block All, 0=Allow All, 1=Easy, 2=Normal, 4=Hard, 8=Impossible. Add numbers together. (Only check difficulty in Coop/Realism)
        l4d_vote_block_difficulty_tog_changemission "0"

        // Turn on vote 'Change Chapter' in these game modes. -1: Block All, 0=Allow All, 1=Coop/Realism, 2=Survival, 4=Versus, 8=Scavenge. Add numbers together.
        l4d_vote_block_modes_tog_changechapter "0"

        // Turn on vote 'Change Chapter' in these difficulty. -1: Block All, 0=Allow All, 1=Easy, 2=Normal, 4=Hard, 8=Impossible. Add numbers together. (Only check difficulty in Coop/Realism)
        l4d_vote_block_difficulty_tog_changechapter "0"

        // Turn on vote 'Change Alltalk' in these game modes. -1: Block All, 0=Allow All, 1=Coop/Realism, 2=Survival, 4=Versus, 8=Scavenge. Add numbers together.
        l4d_vote_block_modes_tog_changealltalk "0"

        // Turn on vote 'Change Alltalk' in these difficulty. -1: Block All, 0=Allow All, 1=Easy, 2=Normal, 4=Hard, 8=Impossible. Add numbers together. (Only check difficulty in Coop/Realism)
        l4d_vote_block_difficulty_tog_changealltalk "0"

        // Turn on vote 'Kick' in these game modes. -1: Block All, 0=Allow All, 1=Coop/Realism, 2=Survival, 4=Versus, 8=Scavenge. Add numbers together.
        l4d_vote_block_modes_tog_kick "0"

        // Turn on vote 'Kick' in these difficulty. -1: Block All, 0=Allow All, 1=Easy, 2=Normal, 4=Hard, 8=Impossible. Add numbers together. (Only check difficulty in Coop/Realism)
        l4d_vote_block_difficulty_tog_kick "0"

        // Players with these flags have immune of being kicked by vote. (Empty = Everyone, -1: Nobody)
        l4d_vote_block_kick_immune_flag "z"
        ```
</details>

* <details><summary>Related Plugin | 相關插件</summary>

	1. [kickthevoter](/L4D_插件/Anti_Griefer_防惡意路人/kickthevoter): Make It So The Person Calling The Vote Gets Kicked!
		> 使用Esc->發起投票的人將會被反踢出去伺服器
</details>

* <details><summary>Changelog | 版本日誌</summary>

    * v1.2 (2024-2-21)
        * Update cvars

    * v1.1 (2023-09-06)
        * Admin kick immune

    * v1.0
	    * Initial Release
</details>

- - - -
# 中文說明
根據遊戲模式和難度禁止使用Esc->發起投票

* 原理
    * 每個遊戲內建的投票選項是否允許，得根據當前的難度與遊戲模式
    * 顯示誰在嘗試投票與投票內容
    * 管理員不會被投票踢出去

* 用意在哪?
    * 討厭新手進來亂投票切換難度或地圖嗎? 那這插件適合安裝在您的伺服器上

* <details><summary>指令中文介紹 (點我展開)</summary>

    * cfg/sourcemod/l4d_vote_block.cfg
        ```php
        // 0=關閉插件, 1=啟動插件
        l4d_vote_block_allow "1"

        // 為1時，允許觀眾使用Esc->投票功能。
        l4d_vote_block_allow_spectator "0"

        // 在那些遊戲模式中啟用投票『返回大廳』，-1: 不允許, 0=全部、1=戰役/寫實、2=生存、4=對抗、8=清道夫，將數字相加。
        l4d_vote_block_modes_tog_returntolobby "0"

        // 在那些遊戲難度中啟用投票『返回大廳』，-1: 不允許, 0=全部、1=簡單、2=一般、4=進階、8=專家，將數字相加(僅在 戰役/寫實中檢查難度)。
        l4d_vote_block_difficulty_tog_returntolobby "0"

        // 在那些遊戲模式中啟用投票『重新開始戰役/章節』，-1: 不允許, 0=全部、1=戰役/寫實、2=生存、4=對抗、8=清道夫，將數字相加。
        l4d_vote_block_modes_tog_restartgame "0"

        // 在那些遊戲難度中啟用投票『重新開始戰役/章節』，-1: 不允許, 0=全部、1=簡單、2=一般、4=進階、8=專家，將數字相加(僅在 戰役/寫實中檢查難度)。
        l4d_vote_block_difficulty_tog_restartgame "0"

        // 在那些遊戲模式中啟用投票『變更難度』，-1: 不允許, 0=全部、1=戰役/寫實、2=生存、4=對抗、8=清道夫，將數字相加。
        l4d_vote_block_modes_tog_changedifficulty "0"

        // 在那些遊戲難度中啟用投票『變更難度』，-1: 不允許, 0=全部、1=簡單、2=一般、4=進階、8=專家，將數字相加(僅在 戰役/寫實中檢查難度)。
        l4d_vote_block_difficulty_tog_changedifficulty "0"

        // 在那些遊戲模式中啟用投票『開始新戰役』，-1: 不允許, 0=全部、1=戰役/寫實、2=生存、4=對抗、8=清道夫，將數字相加。
        l4d_vote_block_modes_tog_changemission "0"

        // 在那些遊戲難度中啟用投票『開始新戰役』，-1: 不允許, 0=全部、1=簡單、2=一般、4=進階、8=專家，將數字相加(僅在 戰役/寫實中檢查難度)。
        l4d_vote_block_difficulty_tog_changemission "0"

        // 在那些遊戲模式中啟用投票『選擇戰役章節』，-1: 不允許, 0=全部、1=戰役/寫實、2=生存、4=對抗、8=清道夫，將數字相加。
        l4d_vote_block_modes_tog_changechapter "0"

        // 在那些遊戲難度中啟用投票『選擇戰役章節』，-1: 不允許, 0=全部、1=簡單、2=一般、4=進階、8=專家，將數字相加(僅在 戰役/寫實中檢查難度)。
        l4d_vote_block_difficulty_tog_changechapter "0"

        // 在那些遊戲模式中啟用投票『更變為全體交談』，-1: 不允許, 0=全部、1=戰役/寫實、2=生存、4=對抗、8=清道夫，將數字相加。
        l4d_vote_block_modes_tog_changealltalk "0"

        // 在那些遊戲難度中啟用投票『更變為全體交談』，-1: 不允許, 0=全部、1=簡單、2=一般、4=進階、8=專家，將數字相加(僅在 戰役/寫實中檢查難度)。
        l4d_vote_block_difficulty_tog_changealltalk "0"

        // 在那些遊戲模式中啟用投票『踢掉玩家』，-1: 不允許, 0=全部、1=戰役/寫實、2=生存、4=對抗、8=清道夫，將數字相加。
        l4d_vote_block_modes_tog_kick "0"

        // 在那些遊戲難度中啟用投票『踢掉玩家』，-1: 不允許, 0=全部、1=簡單、2=一般、4=進階、8=專家，將數字相加(僅在 戰役/寫實中檢查難度)。
        l4d_vote_block_difficulty_tog_kick "0"

        // 投票『踢掉玩家』選項裡，擁有這些權限的玩家不會被踢 (留白 = 所有人都不可以被踢, -1: 任何人都可以被踢)
        l4d_vote_block_kick_immune_flag "z"
        ```
</details>



