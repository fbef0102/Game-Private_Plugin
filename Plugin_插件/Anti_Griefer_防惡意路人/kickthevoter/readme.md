# Description | 內容
Make It So The Person Calling The Vote Gets Kicked!

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/tc92PDgY5RA)

* Image | 圖示
	<br/>![kickthevoter_1](image/kickthevoter_1.jpg)

* <details><summary>How does it work?</summary>

	* If the player calls vote -> block the vote and start a new vote to kick this player
    * Admin can still call vote
</details>

* Require | 必要安裝
    1. [builtinvotes](https://github.com/L4D-Community/builtinvotes/actions)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/kickthevoter.cfg
        ```php
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
        ```
</details>

* <details><summary>Command | 命令</summary>
	
    None
</details>

* Apply to | 適用於
    ```
    L4D1
    L4D2
    ```

* <details><summary>Related Plugin | 相關插件</summary>

	1. [l4d_vote_block](https://github.com/fbef0102/Game-Private_Plugin/tree/main/l4d_vote_block): Unable to call valve vote depending on gamemode and difficulty.
		> 根據遊戲模式和難度禁止使用Esc->發起投票
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.1
	    * Initial Release
</details>

- - - -
# 中文說明
使用Esc->發起投票的人將會被反踢出去伺服器

* 原理
    * 如果有傻B發起投票，投票項目將變成"踢出投票者: XXXX"，即使投票不通過照樣踢出傻B
    * 管理員可以正常發起投票

* 用意在哪?
    * 懲罰玩家持續惡意投票
    * 玩家不喜歡目前難度或目前的地圖持續惡意發起投票，反踢出去玩其他房

* 功能
    * 旁觀者不能發起投票
    * 每個投票選項可設置特定人士才能發起投票
    * 寫入日誌中
    * 封鎖或是踢出發起投票者
