# Description | 內容
Play Reward Sound when headshot

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/w-6BEfBey64)

* <details><summary>Image</summary>

	* S.I. headshot text
    <br/>![l4d_headshot_reward_sound_1](image/l4d_headshot_reward_sound_1.jpg)

	* Common infected headshot text
    <br/>![l4d_headshot_reward_sound_2](image/l4d_headshot_reward_sound_2.jpg)

	* Menu select sound
    <br/>![l4d_headshot_reward_sound_3](image/l4d_headshot_reward_sound_3.jpg)
</details>

* <details><summary>How does it work?</summary>

	* Type ```!headshot``` -> select headshot sound
    * Save settings in local database, player does not have to select sound from menu every time.
</details>

* Require | 必要安裝
    1. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_headshot_reward_sound.cfg
        ```php
        // 0=Plugin off, 1=Plugin on.
        l4d_headshot_reward_sound_enable "1"

        // Changes how message displays. (0: Disable, 1:In chat, 2: In Hint Box, 3: In center text)
        l4d_headshot_reward_sound_type "3"

        // If 1, Play headshot reward sound even if S.I./C.I. is not dead
        l4d_headshot_reward_sound_non_kill "0"
        ```
</details>

* <details><summary>Command | 命令</summary>
    
	* **Open menu for headshot sound personally**
		```php
		sm_headshot
		```
</details>

* <details><summary>Data Config</summary>

	* [data/l4d_headshot_reward_sound.cfg](data/l4d_headshot_reward_sound.cfg)
		```php
        "SI"
        {
            "num"		"3" // how many names below
            "1"
            {
                "Name"		"Off" //do not modify
                "Path"		"off" //do not modify
            }
            "2"
            {
                "Name"		"Random" //do not modify
                "Path"		"random" //do not modify
            }
            "3"
            {
                "Name"		"beep07" //Name whatevert you want
                "Path"		"ui/beep07.wav" //sound path, relative to sound/
            }
        }
		```
</details>

* Apply to | 適用於
    ```
    L4D1
    L4D2
    ```

* <details><summary>Translation Support | 支援翻譯</summary>

	```
	English
	繁體中文
	简体中文
	```
</details>

* <details><summary>Changelog | 版本日誌</summary>

    * v1.4 (2024-7-21)
        * Update data
        * Update translations
        * Improve code
        * Non kill headshot sound customizable, different from headshot kill sound

    * v1.3 (2024-7-20)
        * Play headshot reward sound even if S.I./C.I. is not dead
        * Update cvars

    * v1.2 (2024-1-8)
        * Fixed Sound Error

    * v1.1 (2023-3-9)
        * Add sound select menu, player can choose S.I headshot sound and C.I. headshot sound personally
        * Add Data Config
        * Translation Support
        * Cookie Save

    * v1.0 (2022-11-27)
	    * Initial Release
</details>

- - - -
# 中文說明
特感或普通感染者爆頭的時候有獎勵提示與音效

* <details><summary>圖示</summary>

	* 特感爆頭提示
    <br/>![l4d_headshot_reward_sound_1_zho](image/zho/l4d_headshot_reward_sound_1_zho.jpg)

	* 殭屍爆頭提示
    <br/>![l4d_headshot_reward_sound_2_zho](image/zho/l4d_headshot_reward_sound_2_zho.jpg)

	* 玩家自己設置爆頭音效
    <br/>![l4d_headshot_reward_sound_3_zho](image/zho/l4d_headshot_reward_sound_3_zho.jpg)
</details>

* 原理
    * 開槍爆頭有提示與音效
    * Tank與Witch也會有
    * 玩家輸入```!headshot```可設置自己的特感爆頭音效與殭屍爆頭音效
      * 自動本地儲存玩家的設定，下一次新遊戲時不需要重新選擇

* <details><summary>指令中文介紹 (點我展開)</summary>

    * cfg/sourcemod/l4d2_survivor_shove_power.cfg
        ```php
        // 0=關閉插件, 1=啟動插件
        l4d_headshot_reward_sound_enable "1"

        // 爆頭提示該如何顯示. (0: 不提示, 1: 聊天框, 2: 黑底白字框, 3: 螢幕正中間)
        l4d_headshot_reward_sound_type "3"

        // 為1時，即使特感與普通感染者沒死，打中頭部也會有音效
        l4d_headshot_reward_sound_non_kill "0"
        ```
</details>

* <details><summary>文件設定範例</summary>

	* [data/l4d_headshot_reward_sound.cfg](data/l4d_headshot_reward_sound.cfg)
		```php
        "SI"
        {
            "num"		"3" // 以下名字數量
            "1"
            {
                "Name"		"Off" //不要修改
                "Path"		"off" //不要修改
            }
            "2"
            {
                "Name"		"Random" //不要修改
                "Path"		"random" //不要修改
            }
            "3"
            {
                "Name"		"beep07" // 名稱自取
                "Path"		"ui/beep07.wav" // 填寫音效檔案路徑，路徑相對於sound/ 資料夾
            }
        }
		```
</details>