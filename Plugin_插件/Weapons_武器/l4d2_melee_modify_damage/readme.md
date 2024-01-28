
# Description | 內容
Modify Chainsaw and each melee weapon damages dealt to Commons/S.I./Tank/Witch

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Video | 影片展示
<br/>None

* <details><summary>Image | 圖示</summary>

    * Before (裝此插件之前)
    <br/>![l4d2_melee_modify_damage_1](image/l4d2_melee_modify_damage_1.gif)
    <br/>![l4d2_melee_modify_damage_2](image/l4d2_melee_modify_damage_2.gif)
    * After (裝此插件之後)
    <br/>![l4d2_melee_modify_damage_3](image/l4d2_melee_modify_damage_3.gif)
    <br/>![l4d2_melee_modify_damage_4](image/l4d2_melee_modify_damage_4.gif)
</details>

* <details><summary>How does it work?</summary>

    * Modify Chainsaw damages dealt to Commons/S.I./Tank/Witch
	* Modify each melee damages dealt to Commons/S.I./Tank/Witch
        * All official melee weapon
        * Support custom melee weapon
        * A common zombie still instantly dies on a headshot by melee (No matter what damage).
    * To modify each gun weapons' damage, please check "Related Plugin" below
</details>

* Require | 必要安裝
    1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)

* <details><summary>ConVar | 指令</summary>

    * cfg/sourcemod/l4d2_melee_modify_damage.cfg
        ```php
        // 0=Plugin off, 1=Plugin on. Modify Chainsaw and each melee weapon damages dealt to Commons/S.I./Tank/Witch
        // A common zombie still instantly dies on a headshot by melee.
        l4d2_melee_modify_damage_enable "1"

        // Set wounds only when the zombie is going to die.
        l4d2_melee_modify_damage_common_wound_dead "1"
        ```
</details>

* <details><summary>Command | 命令</summary>
    
    None
</details>

* <details><summary>Data Config</summary>

    * Modify each melee damages dealt to Commons/S.I./Tank/Witch
	* data/l4d2_melee_modify_damage.cfg
		```php
        "l4d2_melee_modify_damage"
        {
            "chainsaw"	//chainsaw
            {
                "Enable"		"1"     // Enable
                "Tank"			"100"   // modify damage to Tank
                "Witch"			"-1"    // modify damage to Witch, -1=Default damage
                "Common"		"100"   // modify damage to Commons
                "Smoker"		"100"   // modify damage to Smoker
                "Boomer"		"100"   // modify damage to Boomer
                "Hunter"		"100"   // modify damage to Hunter
                "Spitter"		"100"   // modify damage to Spitter
                "Jockey"		"100"   // modify damage to Jockey
                "Charger"		"100"   // modify damage to Charger
            }

            "baseball_bat"
            {
                "Enable"		"1"     // Enable
                "Tank"			"300"   // modify damage to Tank
                "Witch"			"250"   // modify damage to Witch
                "Common"		"-1"   // modify damage to Commons, -1=Default damage
                "Smoker"		"390"   // modify damage to Smoker
                "Boomer"		"390"   // modify damage to Boomer
                "Hunter"		"390"   // modify damage to Hunter
                "Spitter"		"390"   // modify damage to Spitter
                "Jockey"		"390"   // modify damage to Jockey
                "Charger"		"390"   // modify damage to Charger

                "HeadShot_multi" // damage multiplier if headshot
                {
                    "Tank"			"2.0"
                    "Witch"			"1.0"
                    //"Common"		"1.0" //Doesn't work. A common zombie still instantly dies on a headshot by melee.
                    "Smoker"		"1.0"
                    "Boomer"		"1.0"
                    "Hunter"		"1.0"
                    "Spitter"		"1.0"
                    "Jockey"		"1.0"
                    "Charger"		"1.0"
                }
                
                "Leg_multi" // damage multiplier if leg
                {
                    "Tank"			"1.0"
                    "Witch"			"1.0"
                    "Common"		"1.0"
                    "Smoker"		"0.5"
                    "Boomer"		"0.5"
                    "Hunter"		"0.5"
                    "Spitter"		"0.5"
                    "Jockey"		"0.5"
                    "Charger"		"0.5"
                }
            }

            // Add other custom weapon if you want

            "meleejb" // custom weapon from Zengcheng map
            {
                "Enable"		"1"
                "Tank"			"300"
                "Witch"			"250"
                "Common"		"100"
                "Smoker"		"390"
                "Boomer"		"390"
                "Hunter"		"390"
                "Spitter"		"390"
                "Jockey"		"390"
                "Charger"		"390"

                "HeadShot_multi" // damage multiplier if headshot
                {
                    "Tank"			"2.0"
                    "Witch"			"1.0"
                    //"Common"		"1.0"
                    "Smoker"		"1.0"
                    "Boomer"		"1.0"
                    "Hunter"		"1.0"
                    "Spitter"		"1.0"
                    "Jockey"		"1.0"
                    "Charger"		"1.0"
                }
                
                "Leg_multi" // damage multiplier if leg
                {
                    "Tank"			"1.0"
                    "Witch"			"1.0"
                    "Common"		"1.0"
                    "Smoker"		"0.5"
                    "Boomer"		"0.5"
                    "Hunter"		"0.5"
                    "Spitter"		"0.5"
                    "Jockey"		"0.5"
                    "Charger"		"0.5"
                }
            }
        }
		```
</details>

* <details><summary>Known Conflicts</summary>
	
	If you don't use any of these plugins at all, no need to worry about conflicts.
	1. [Nerf Damage To Commons](https://forums.alliedmods.net/showthread.php?t=330085)
		* Disable nerf damage for melee weapon and Chainsaw
	2. [Common Infected Health - Damage Received](https://forums.alliedmods.net/showthread.php?t=332832)
		* Disable damage modify for melee weapon and Chainsaw
</details>

* Apply to | 適用於
    ```
    L4D2
    ```

* <details><summary>Related Plugin | 相關插件</summary>

	1. [l4d2_gun_damage_modify](https://github.com/fbef0102/L4D2-Plugins/tree/master/l4d2_gun_damage_modify): Modify every weapon damage done to Tank, SI, Witch, Common in l4d2
		> 修改每一種槍械武器對普通殭屍/Tank/Witch/特感 的傷害倍率
</details>

* <details><summary>Changelog | 版本日誌</summary>

    * v1.1 (2024-1-27)
	    * Modify melee damage multiplier by HeadShot or Leg

    * v1.0 (2024-1-25)
	    * Initial Release
</details>

- - - -
# 中文說明
修改電鋸與每一種近戰武器對 普通殭屍/Tank/Witch/特感 的傷害值

* 原理
	* 修改電鋸對 普通殭屍/Tank/Witch/特感 的傷害值
	* 修改每一種近戰武器對 普通殭屍/Tank/Witch/特感 的傷害值
        * 支援所有官方近戰武器
        * 支援三方圖的近戰武器
        * 使用近戰爆頭 普通殭屍，依然會瞬間死亡 (無論傷害高低)
    * 如要修改槍械武器的傷害值，請查看 "相關插件" 部分

* 用意在哪?
    * 官方預設中(安裝此插件之前)，近戰過於強大到可以
        * 一刀砍死特感 (無論血量多高)
        * 兩刀砍死Charger (無論血量多高)
        * 20刀砍死Tank (無論血量多高)
        * 4刀砍死Witch (無論血量多高)

* <details><summary>指令中文介紹 (點我展開)</summary>

    * cfg/sourcemod/l4d2_melee_modify_damage.cfg
        ```php
        // 0=關閉插件, 1=啟動插件.
        // 近戰爆頭 普通殭屍，依然會瞬間死亡
        l4d2_melee_modify_damage_enable "1"

        // 普通殭屍 1=確定死亡時才會有傷口, 0=每次被近戰或電鋸砍到會有傷口
        l4d2_melee_modify_damage_common_wound_dead "1"
        ```
</details>

* <details><summary>文件設定範例</summary>

    * 修改每一種近戰武器對 普通殭屍/Tank/Witch/特感 的傷害值
	* data/l4d2_melee_modify_damage.cfg
		```php
		"l4d2_melee_modify_damage"
		{
			"chainsaw"	//電鋸
            {
                "Enable"		"1"     // 1=啟用修改
                "Tank"			"100"   // 對Tank造成的傷害值
                "Witch"			"-1"    // 對Witch造成的傷害值, 寫-1=預設傷害
                "Common"		"100"   // 對普通殭屍造成的傷害值
                "Smoker"		"100"   // 對Smoker造成的傷害值
                "Boomer"		"100"   // 對Boomer造成的傷害值
                "Hunter"		"100"   // 對Hunter造成的傷害值
                "Spitter"		"100"   // 對Spitter造成的傷害值
                "Jockey"		"100"   // 對Jockey造成的傷害值
                "Charger"		"100"   // 對Charger造成的傷害值
            }

            "baseball_bat" // 球棒
            {
                "Enable"		"1"     // Enable
                "Tank"			"300"   // 對Tank造成的傷害值
                "Witch"			"250"   // 對Witch造成的傷害值
                "Common"		"-1"   // 對普通殭屍造成的傷害值, 寫-1=預設傷害
                "Smoker"		"390"   // 對Smoker造成的傷害值
                "Boomer"		"390"   // 對Boomer造成的傷害值
                "Hunter"		"390"   // 對Hunter造成的傷害值
                "Spitter"		"390"   // 對Spitter造成的傷害值
                "Jockey"		"390"   // 對Jockey造成的傷害值
                "Charger"		"390"   // 對Charger造成的傷害值

                "HeadShot_multi" // 砍到頭的傷害加成
                {
                    "Tank"			"2.0"
                    "Witch"			"1.0"
                    //"Common"		"1.0" //無作用. 近戰爆頭 普通殭屍，依然會瞬間死亡
                    "Smoker"		"1.0"
                    "Boomer"		"1.0"
                    "Hunter"		"1.0"
                    "Spitter"		"1.0"
                    "Jockey"		"1.0"
                    "Charger"		"1.0"
                }
                
                "Leg_multi" // 砍到腳的傷害加成
                {
                    "Tank"			"1.0"
                    "Witch"			"1.0"
                    "Common"		"1.0"
                    "Smoker"		"0.5"
                    "Boomer"		"0.5"
                    "Hunter"		"0.5"
                    "Spitter"		"0.5"
                    "Jockey"		"0.5"
                    "Charger"		"0.5"
                }
            }

            // 以下增加任何三方圖的近戰
            
            "meleejb" // 按摩棒，來自地圖: 廣州增城
            {
                "Enable"		"1"
                "Tank"			"300"
                "Witch"			"250"
                "Common"		"100"
                "Smoker"		"390"
                "Boomer"		"390"
                "Hunter"		"390"
                "Spitter"		"390"
                "Jockey"		"390"
                "Charger"		"390"

                "HeadShot_multi" // 砍到頭的傷害加成
                {
                    "Tank"			"2.0"
                    "Witch"			"1.0"
                    //"Common"		"1.0" //無作用
                    "Smoker"		"1.0"
                    "Boomer"		"1.0"
                    "Hunter"		"1.0"
                    "Spitter"		"1.0"
                    "Jockey"		"1.0"
                    "Charger"		"1.0"
                }
                
                "Leg_multi" // 砍到腳的傷害加成
                {
                    "Tank"			"1.0"
                    "Witch"			"1.0"
                    "Common"		"1.0"
                    "Smoker"		"0.5"
                    "Boomer"		"0.5"
                    "Hunter"		"0.5"
                    "Spitter"		"0.5"
                    "Jockey"		"0.5"
                    "Charger"		"0.5"
                }
            }
		}
		```
</details>

* <details><summary>會衝突的插件</summary>
	
	如果沒安裝以下插件就不需要擔心衝突
	1. [Nerf Damage To Commons](https://forums.alliedmods.net/showthread.php?t=330085)
		* 關閉此插件中的 "近戰與電鋸" 削弱傷害
	2. [Common Infected Health - Damage Received](https://forums.alliedmods.net/showthread.php?t=332832)
		* 關閉此插件中的 "近戰與電鋸" 對普通殭屍的傷害數值調整
</details>