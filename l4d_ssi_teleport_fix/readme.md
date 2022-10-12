# Description | 內容
Teleport AI Infected player (Not Tank) to the teammate who is much nearer to survivors. 

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/r2idpddeN7E)

* Image | 圖示
<br/>None

* Apply to | 適用於
```
L4D1
L4D2
```

* <details><summary>Changelog | 版本日誌</summary>

	* v1.8
        * Request by Yabi
        * Teleport infected to teammate who is near the first ahead survivor

	* v1.6
	    * Original Request by 壹梦
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)

* Related Plugin | 相關插件
	1. [l4dinfectedbots](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4dinfectedbots): Spawns infected bots in L4D1 versus, and gives greater control of the infected bots in L4D1/L4D2 without being limited by the director.
		> 生成多特感控制插件
	2. [AI_HardSI](https://github.com/fbef0102/L4D2-Plugins/tree/master/AI_HardSI): Improves the AI behaviour of special infected
		> 增強特感攻擊行為

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_ssi_teleport_fix.cfg
	```php
    // Teleport boomer to tank?
    ssitp_boomer2tank "0"

    // Time interval to check si.
    ssitp_check_interval "1.0"

    // Cold Down Time in seconds an infected can not be teleported again.
    ssitp_tp1_cooltime "2.0"

    // Prevent SI from taking damage for this seconds after being teleported. (0=Disable)
    ssitp_tp1_god_time "0.6"

    // Limit per teleport.
    ssitp_tp1_limit "2"

    // Infected player will be teleported if his distance from survivors is outside this range.
    ssitp_tp1_range "800"

    // If 1, infected players can be teleported to the player only when the player is near the first ahead survivor
    ssitp_tp2_near_ahead_survivor "0"

    // Teleport to the Infected player whose distance from survivors is inside max range, value must less than or equal to 'ssitp_tp1_range'.
    ssitp_tp2_range_max "700"

    // Teleport to the Infected player whose distance from survivors is outside min range
    ssitp_tp2_range_min "150"

    // If 1, infected players can be teleported to the player thats about to be seen by the survivors.
    ssitp_tp2_visiblethreats "0"
	```
</details>

* <details><summary>Command | 命令</summary>

	None
</details>

- - - -
# 中文說明
傳送比較遠的AI特感到靠近倖存者的特感隊友附近

* 原理
    * <details><summary>以下面的指令解釋 (點我展開)</summary>

        > 效果: 當有AI特感Hunter距離倖存者800公尺之外，且有另一隻特感Jockey位於距離倖存者150 ~ 700 公尺之間，將Hunter傳送到Jockey身邊
        ```php
        // Infected player will be teleported if his distance from survivors is outside this range.
        ssitp_tp1_range "800"

        // Teleport to the Infected player whose distance from survivors is inside max range, value must less than or equal to 'ssitp_tp1_range'.
        ssitp_tp2_range_max "700"

        // Teleport to the Infected player whose distance from survivors is outside min range
        ssitp_tp2_range_min "150"
        ```

        > 效果: 特感只傳送到距離最前方的倖存者比較近的特感
        ```php
        // If 1, infected players can be teleported to the player only when the player is near the first ahead survivor
        ssitp_tp2_near_ahead_survivor "1"
        ```
    </details>

	* 可配合多特感插件使得每一波特感的攻擊對倖存者造巨大的壓力

* 功能
	1. 可設置檢查特感的時間間隔
    2. 每次傳送特感最多的數量上限
    3. 不會傳送真人特感玩家，但會把AI特感傳送到真人特感玩家
    4. 可設置就算被人類看到也要傳送特感
    5. 可設置傳送距離
    6. 