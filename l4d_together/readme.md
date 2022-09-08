# Description | 內容
A simple anti - runner system , punish the runner by spawn SI behind her.

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/v3J2hSxMZGw)

* Image | 圖示
<br/>None

* Apply to | 適用於
```
L4D1
L4D2
```

* <details><summary>Changelog | 版本日誌</summary>

	```php
	//panxiaohai @ 2009 - 2011
	//Harry @ 2021 - 2022
	```
	* v1.5
        * Remake Code
        * New infected spawn method
        * More cvars

	* v1.0.2
		* [Original Post by panxiaohai](https://forums.alliedmods.net/showthread.php?p=2740016)
</details>

* Require | 必要安裝
    1. [spawn_infected_nolimit](https://github.com/fbef0102/Game-Private_Plugin/tree/main/spawn_infected_nolimit)

* Related Plugin | 相關插件
	* [Anti Rush](https://forums.alliedmods.net/showthread.php?t=322392): Slowdown or teleport rushers and slackers back to the group. Uses flow distance for accuracy.
		> 離隊伍太遠的玩家將被傳送或是減速

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_together.cfg
	```php
    // What percentage of the ALIVE survivors the loner must away from to active loner punish.
    l4d_together_alive_survivor_percentage "50"

    // Numbers of alive survivor required to active loner punish. (must be greater than or equal to 2 unless you are idiot)
    l4d_together_alive_survivor_required "2"

    // 0=Disable Plugin, 1=Enable Plugin
    l4d_together_enable "1"

    // Changes how announce displays to the loner (0: Disable, 1:In chat; 2: In Hint Box; 3: In center text)
    l4d_together_loner_punish_announce_type "2"

    // If 1, still punish the loner if he is computer survivor bot
    l4d_together_loner_punish_fakeclient "0"

    // If 1, kick infected bot after bot incapacitated the loner.
    l4d_together_loner_punish_infected_incap_kick "1"

    // How many infected spawn every time to punish the loner
    l4d_together_loner_punish_infected_number "2"

    // After infected bot spawned by this plugin, kick bot after a certain time if bot doesn't pin the loner. (0:Disable)
    l4d_together_loner_punish_infected_spawn_kick "8.0"

    // (L4D2) loner punish infected class, 0=All, 1=Smoker, 2=Boomer, 4=Hunter, 8=Spitter, 16=Jockey, 32=Charger. Add numbers together.
    l4d_together_loner_punish_infected_type "0"

    // (L4D1) loner punish infected class, 0=All, 1=Smoker, 2=Boomer, 4=Hunter. Add numbers together.
    l4d_together_loner_punish_infected_type "0"

    //  punish interval max seconds
    l4d_together_loner_punish_interval_max "15.0"

    //  punish interval min seconds
    l4d_together_loner_punish_interval_min "5.0"

    // loner punish type, 0=behind, 1=360 degree, 2=above his head
    l4d_together_loner_punish_type "1"

    // if someone is away from survivor team, he is the loner
    l4d_together_loner_range "2000.0"

    // Turn on the plugin in these game modes. 0=All, 1=Coop, 2=Survival, 4=Versus, 8=Scavenge. Add numbers together.
    l4d_together_modes_tog "0"

    // If 1, still active loner punish if only two alive survivor left.
    l4d_together_two_alive_survivor_enable "1"
	```
</details>

* <details><summary>Command | 命令</summary>
	None
</details>

- - - -
# 中文說明
離隊伍太遠的玩家，特感代替月亮懲罰你

* 原理
    * <details><summary>以下面的指令解釋 (點我展開)</summary>

        > 效果: 假設目前有4位存活的倖存者，當有位脫隊的倖存者距離2位以上隊友超過2000公尺且長達5 ~ 15秒之間，在脫隊的倖存者周圍持續生成特感，每次兩隻
        ```php
        //　脫隊的倖存者已距離隊伍50%以上數量的隊友太遠
        l4d_together_alive_survivor_percentage "50"

        //  最大生成秒數生成特感懲罰脫隊的倖存者
        l4d_together_loner_punish_interval_max "15.0"

        //  最小生成秒數生成特感懲罰脫隊的倖存者
        l4d_together_loner_punish_interval_min "5.0"

        // 一次生成兩隻特感懲罰脫隊的倖存者
        l4d_together_loner_punish_infected_number "2"

        // 當玩家距離隊伍2000公尺範圍之後，他就是脫隊的倖存者
        l4d_together_loner_range "2000.0"
        ```
    </details>

    * 總有人不顧隊伍死活直接往前衝，或當拖油瓶遲遲不前進，這插件會在脫隊的玩家附近持續生成特感懲罰

* 功能
	1. 人類隊伍剩餘兩個人也能觸發
	2. 可調整遠離的判定範圍
	3. 可控制生成哪些特感種類
    4. 可控制一次生成特感的數量
    5. 特感生成不會受到遊戲限制影響
    6. 插件生成的特感如果沒有控到人隨即消失
