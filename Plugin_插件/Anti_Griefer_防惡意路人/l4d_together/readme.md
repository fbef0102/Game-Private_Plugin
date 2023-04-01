# Description | 內容
A simple anti - runner system , punish the runner by spawn SI behind her.

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/L6slnUSsTSI)

* Image | 圖示
	* Don't be a dick
        > 代替月亮來懲罰你
        <br/>![l4d_together_1](image/l4d_together_1.jpg)

* Apply to | 適用於
    ```
    L4D1
    L4D2
    ```

* <details><summary>Changelog | 版本日誌</summary>

	```php
	//panxiaohai @ 2009 - 2011
	//Harry @ 2021 - 2023
	```
	* v1.6 (2023-4-1)
        * Replace Gamedata with left4dhooks

	* v1.5
        * Remake Code
        * New infected spawn method
        * More cvars

	* v1.0.2
		* [By panxiaohai](https://forums.alliedmods.net/showthread.php?p=2740016)
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
    2. [spawn_infected_nolimit](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/spawn_infected_nolimit)

* Related Plugin | 相關插件
	1. [Anti Rush](https://forums.alliedmods.net/showthread.php?t=322392): Slowdown or teleport rushers and slackers back to the group. Uses flow distance for accuracy.
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

        // Punish interval max seconds
        l4d_together_loner_punish_interval_max "15.0"

        // Punish interval min seconds
        l4d_together_loner_punish_interval_min "5.0"

        // loner punish type, 0=behind, 1=360 degree, 2=above his head
        l4d_together_loner_punish_type "1"

        // If someone is away from survivor team, he is the loner
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

* <details><summary>ConVar Example (Click me to expend)</summary>

    > If there are 4 alive survivors, when the loner is 2000 meter far away (behind or front) from 2 survivors for at least 5 ~ 15 seconds, constantly spawn special infected around the loner.
    ```php
    // What percentage of the ALIVE survivors the loner must away from to active loner punish.
    l4d_together_alive_survivor_percentage "50"

    // punish interval max seconds
    l4d_together_loner_punish_interval_max "15.0"

    // punish interval min seconds
    l4d_together_loner_punish_interval_min "5.0"

    // How many infected spawn every time to punish the loner
    l4d_together_loner_punish_infected_number "2"

     // If someone is away from survivor team, he is the loner
    l4d_together_loner_range "2000.0"
    ```
</details>

- - - -
# 中文說明
離隊伍太遠的玩家，特感代替月亮懲罰你

* 原理
    * 總有人不顧隊伍死活直接往前衝，或當拖油瓶遲遲不前進，這插件會在脫隊的玩家附近持續生成特感懲罰

* 功能
    * 人類隊伍剩餘兩個人也能觸發
    * 可調整遠離的判定範圍
    * 可控制生成哪些特感種類
    * 可控制一次生成特感的數量
    * 特感生成不會受到遊戲限制與導演系統影響
    * 插件生成的特感如果沒有控到人隨即消失

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d_together.cfg
        ```php
        // 當玩家距離隊伍50%以上數量的隊友太遠，他就是脫隊的倖存者
        l4d_together_alive_survivor_percentage "50"

        // 至少要有兩位以上的活著的倖存者，此插件才會啟動. (此數值必須大於2)
        l4d_together_alive_survivor_required "2"

        // 0=關閉插件, 1=開啟插件
        l4d_together_enable "1"

        // 訊息如何顯示? (0: 關閉, 1: 聊天視窗; 2: 黑底提示窗; 3: 螢幕中心)
        l4d_together_loner_punish_announce_type "2"

        // 為1時，即使是AI Bot脫隊也會被懲罰
        l4d_together_loner_punish_fakeclient "0"

        // 為1時，特感抓住脫隊的倖存者直到倒地之後會自動消失
        l4d_together_loner_punish_infected_incap_kick "1"

        // 一次生成兩隻特感懲罰脫隊的倖存者
        l4d_together_loner_punish_infected_number "2"

        // 由此插件生成的特感，如果8秒內不抓住玩家則自動消失 (0: 不消失)
        l4d_together_loner_punish_infected_spawn_kick "8.0"

        // (僅限二代) 生成的特感有哪些, 0=全部, 1=Smoker, 2=Boomer, 4=Hunter, 8=Spitter, 16=Jockey, 32=Charger. 將數字加給來
        l4d_together_loner_punish_infected_type "0"

        // (僅限一代) loner punish infected class, 0=全部, 1=Smoker, 2=Boomer, 4=Hunter. 將數字加給來
        l4d_together_loner_punish_infected_type "0"

        // 最大生成秒數生成特感懲罰脫隊的倖存者
        l4d_together_loner_punish_interval_max "15.0"

        // 最小生成秒數生成特感懲罰脫隊的倖存者
        l4d_together_loner_punish_interval_min "5.0"

        // 如何在脫隊的倖存者周圍生成特感, 0=背後, 1=全方位360度生成, 2=在頭上
        l4d_together_loner_punish_type "1"

        // 當玩家距離隊伍2000公尺範圍之後，他就是脫隊的倖存者
        l4d_together_loner_range "2000.0"

        // 在以下模式開啟此插件. 0=全部, 1=戰役, 2=生存, 4=對抗, 8=清道夫. 將數字加給來
        l4d_together_modes_tog "0"

        // 為1時，即使剩下兩位活著的倖存者仍要啟動插件
        l4d_together_two_alive_survivor_enable "1"
        ```


    *  舉例1: 假設目前有4位存活的倖存者，當有位脫隊的倖存者距離2位以上隊友超過2000公尺且長達5 ~ 15秒之間，在脫隊的倖存者周圍持續生成特感，每次兩隻
        ```php
        l4d_together_alive_survivor_percentage "50"
        l4d_together_loner_range "2000.0"
        l4d_together_loner_punish_interval_max "15.0"
        l4d_together_loner_punish_interval_min "5.0"
        l4d_together_loner_punish_infected_number "2"
        ```
</details>
