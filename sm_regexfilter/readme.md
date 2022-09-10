# Description | 內容
Filter dirty words via Regular Expressions

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/K_-9qyHquP0)

* Image | 圖示
	* punish player who said dirty word
	> 屏蔽敏感字詞並懲罰玩家
	<br/>![sm_regexfilter_1](image/sm_regexfilter_1.jpg)
	* Ya?
	> 示範圖
	<br/>![sm_regexfilter_2](image/sm_regexfilter_2.jpg)

* Apply to | 適用於
```
L4D1
L4D2
```

* <details><summary>Changelog | 版本日誌</summary>

    ```php
    //Twilight Suzuka @ 2009
    //Harry @ 2022
    ```
	* v1.3
	    * Remake Code
        * Add "replaceall" option
        * Fix memory leak
    * v1.2
        * [Original Post by Twilight Suzuka](https://forums.alliedmods.net/showthread.php?t=71867)
</details>

* Require | 必要安裝
	1. [[INC] Multi Colors](https://forums.alliedmods.net/showthread.php?t=247770)

* Related | 相關插件
    1. [lfd_noTeamSay](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/lfd_noTeamSay): Redirecting all 'say_team' messages to 'say'
        * 沒有隊伍頻道，任何人打字說話一律大家都看得見
    2. [GagMuteBanEx](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/GagMuteBanEx): gag & mute & ban - Ex
        * 封鎖/禁音/禁字-強化版

* Data Example | Data設定範例
	* data/regexrestrict.cfg
	```php
    "Censor"
    {
        "Block2_English"  // Whatever name
        {
            "chatpattern"		"fuck 'CASELESS'" // dirty word you want to ban, CASELESS is flag, which means ignore Case
            "chatpattern"		"shit 'CASELESS'"
            "replace"			"****" // Replace the matches with a string
            "warn"				"Silence 5 mins, Don't say that!" // Warn the client they are violating the matching rules
            "action"			"sm_gag #%u 5;sm_slap #%u 30"  // server executes an RCON command, to see more cmds: https://wiki.alliedmods.net/Admin_commands_(sourcemod)#Basic_Commands
            "limit"				"3" // Limit the amount of times such a pattern may be spoken
            "forgive"			"4000" //Allow for forgiveness of one violation every x seconds
            "punish"			"sm_ban #%u 180" // Enforce the limit with a punishment RCON command
            "immunity"          "z" //Allow admins with specified levels to be immune
        }	
    }
	```
    > "replaceall" // Replace the whole sentance with a string

* Valid Flags | 可設置的Flag
    * CASELESS - Ignore Case.

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/sm_regexfilter.cfg
		```php
        // If 1, REGEXFILTER Enabled
        regexfilter_enable "1"

        // If 1, Remove all whitespace
        regexfilter_remove_white_space "0"
		```
</details>

* <details><summary>Command | 命令</summary>

	None
</details>

- - - -
# 中文說明
禁詞表，任何人打字說出髒話或敏感詞彙，字詞會被屏蔽、玩家禁言並處死，網路並非法外之地

* 原理
    * 專門對付口出惡言的噴子
    * 只要打字說出的字詞符合禁詞表內任何一個詞彙，字詞被遮蔽且懲罰玩家
	* 呼籲玩家網路並非法外之地，切勿以身試法，請謹言慎行

* 功能
    1. 禁詞表可自行增修
	2. 可設置權限，管理員的言論不會受到插件的審查
	3. 敏感字詞可以用其他文字和諧取代
	4. 可設置要懲罰的動作

* Data設定範例
	* data/regexrestrict.cfg
	```php
    "Censor"
    {
        "Block3_China" //敏感字詞合集名稱，可自取
        {
            "chatpattern"		"nmsl 'CASELESS'" //敏感字詞為nmsl，CASELESS是Flag，意思是忽略大小寫
            "chatpattern"		"cao 'CASELESS'"
            "replaceall"		"我是傻B！" // 取代整句話
            "warn"				"禁言五分钟! 少说脏话!" // 顯示警告
            "action"			"sm_gag #%u 5;sm_slap #%u 30" //伺服器會採取的命令動作，此處命令為禁言五分鐘且巴掌30滴傷害，想看更多命令：https://wiki.alliedmods.net/Admin_commands_(sourcemod)

            // 在4000秒內說出3次敏感字詞將會被伺服器封鎖長達180分鐘
            "limit"				"3"
            "forgive"			"4000"
            "punish"			"sm_ban #%u 180"

            //有這個權限的管理員不受到該敏感字詞合集影響
            "immunity"          "z"
        }	
    }
	```
    > "replace" "xxxx" // 把敏感字詞替代成xxxx符號 <br/>

* 可設置的Flag
    * CASELESS - 忽略大小寫字母
