# Description | 內容
Special infected incaps survivors and die + set each scratch damage + skip getup animation

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/ssLsbaKLLmk)

* Image | 圖示
	* display health remaining
        > 顯示特感的剩餘血量
        <br/>![1vSpecials_1](image/1vSpecials_1.jpg)

* Apply to | 適用於
    ```
    L4D1
    L4D2
    ```

* <details><summary>Changelog | 版本日誌</summary>

    * v2.4 (2023-2-19)
        * Remake all cvars description
        * Set each Special Infected claw damage
        * Add new cvars
            ```php
            // Boomer claw Dmg. (-1=Default value dmg)
            1vSpecials_boomer_claw_dmg "-1"

            // Spitter claw Dmg. (-1=Default value dmg)
            1vSpecials_spitter_claw_dmg "-1"
            ```

	* v2.3
	    * Original Request by Anzu
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	2. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)

* Related Plugin | 相關插件
	1. [l4dinfectedbots](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4dinfectedbots): Spawns infected bots in L4D1 versus, and gives greater control of the infected bots in L4D1/L4D2 without being limited by the director.
		> 生成多特感控制插件
	2. [AI_HardSI](https://github.com/fbef0102/L4D2-Plugins/tree/master/AI_HardSI): Improves the AI behaviour of special infected
		> 增強特感攻擊行為

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/1vSpecials.cfg
        ```php
        // If 1, this plugin only takes effect when infected attacking bot.
        1vSpecials_apply_bot_only "0"

        // Boomer claw Dmg. (-1=Default value dmg)
        1vSpecials_boomer_claw_dmg "-1"

        // Modfiy Charger attack damage when charging before suicides. (-1=Disable)
        1vSpecials_charger_attack_dmg "35"

        // Charger claw Dmg. (-1=Default value dmg)
        1vSpecials_charger_claw_dmg "-1"

        // If 1, Announce SI Health Left before SI suicides.
        1vSpecials_dmgannounce "1"

        // Modfiy Hunter attack damage when pouncing before suicides. (-1=Disable)
        1vSpecials_hunter_attack_dmg "25"

        // Hunter claw Dmg. (-1=Default value dmg)
        1vSpecials_hunter_claw_dmg "-1"

        // Modfiy Jockey attack damage when riddiung before suicides. (-1=Disable)
        1vSpecials_jockey_attack_dmg "30"

        // Jockey claw Dmg. (-1=Default value dmg)
        1vSpecials_jockey_claw_dmg "-1"

        // 1=Kill All Infected, 2=Only Kill Attacker (0=Off)
        1vSpecials_kill_all "2"

        // If 1, this plugin removes god frame when capped by special infected.
        1vSpecials_remove_godframe "1"

        // If 1, Skip Survivor Get Up Animation.
        1vSpecials_skip_getup "1"

        // Modfiy Smoker attack damage when pulling before suicides. (-1=Disable)
        1vSpecials_smoker_attack_dmg "20"

        // Smoker claw Dmg. (-1=Default value dmg)
        1vSpecials_smoker_claw_dmg "-1"

        // Spitter claw Dmg. (-1=Default value dmg)
        1vSpecials_spitter_claw_dmg "-1"
        ```
</details>

* <details><summary>Command | 命令</summary>

	None
</details>

- - - -
# 中文說明
特感控到倖存者之後造成一定傷害並處死 + 設置每個特感的抓傷 + 略過起身動畫

* 原理
	* 可配合多特感強化插件達成自己一人在伺服器訓練擊殺特感

* 功能
	* 可設置每個特感的抓傷 (任意難度都適用)
	* 可略過起身動畫
	* 可設置被控之後造成固定的傷害再處死 (任意難度都適用)
	* 顯示特感剩餘血量
	* 也可適用於真人特感
	* 不會受到GodFrame影響
