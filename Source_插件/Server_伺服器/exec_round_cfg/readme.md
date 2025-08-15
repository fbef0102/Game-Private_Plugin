# Description | 內容
Exec cfg when new round/game starts/round end

> __Note__ <br/>
This plugin is private, Please contact [me](/#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](/#私人插件列表-private-plugins-list)

* Image | 圖示
	* For convenient to change cvars when new round/game starts/round end
	* 方便修改一些遊戲設定 (新的回合開始/遊戲開始/回合結束之時)
	<br/>![exec_round_cfg_1](image/exec_round_cfg_1.jpg)

* Apply to | 適用於
	```
	Any Source Game
	```

* <details><summary>How does it work?</summary>

	* Exec ```cfg/exec_round_cfg/round_start.cfg``` when new round starts
	* (L4D1/L4D2) Exec ```cfg/exec_round_cfg/game_start.cfg``` when game starts
		* Survivors leaving saferoom
		* Survival or Scavenge begins
	* Exec ```cfg/exec_round_cfg/round_end.cfg``` when round ends
	* For convenient to change game settigns, for example:
		* Turn on all talk when round end
		* Enable god mode and infinite ammo before game starts
</details>

* Require | 必要安裝
	1. L4D/L4D2: [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/exec_round_cfg.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		exec_round_cfg_enable "1"

		// File to execute when new round starts
		// file in cfg/exec_round_cfg folder
		exec_round_cfg_start_file "round_start.cfg"

		// Delay to execute file when new round starts
		exec_round_cfg_start_delay "1.5"

		// (L4D1/L4D2) File to execute when game starts (survivors leaving saferoom / survival or scavenge begins) 
		// file in cfg/exec_round_cfg folder
		exec_round_cfg_l4d_game_file "game_start.cfg"

		// (L4D1/L4D2) Delay to execute file when game starts(survivors leaving saferoom / survival or scavenge begins)
		exec_round_cfg_l4d_game_delay "0.1"

		// File to execute when round end
		// file in cfg/exec_round_cfg folder
		exec_round_cfg_end_file "round_end.cfg"

		// Delay to execute file when round end
		exec_round_cfg_end_delay "0.5"
		```
</details>

* <details><summary>Related | 相關插件</summary>

    1. [readyup](/L4D_插件/Server_伺服器/readyup): Ready-up plugin
        * 所有玩家準備才能開始遊戲的插件
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.0 (2024-9-７)
	    * Initial Release
</details>

- - - -
# 中文說明
新的回合開始/遊戲開始/回合結束之時，執行指定的cfg文件

* 原理
	* 當新的回合開始時，執行文件 ```cfg/exec_round_cfg/round_start.cfg```
	* (L4D1/L4D2) 當遊戲開始時，執行文件 ```cfg/exec_round_cfg/game_start.cfg``` 
		* 倖存者離開安全區域
		* 生存或清道夫模式計時開始
	* 當回合結束時，執行文件 ```cfg/exec_round_cfg/round_end.cfg```

* 用意在哪?
	* 方便修改一些遊戲設定，譬如:
		* 回合結束時打開伺服器全語音
		* 遊戲開始之前，子彈無限、不會受傷

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/exec_round_cfg.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		exec_round_cfg_enable "1"

		// 回合開始時，執行的cfg文件名稱
		// 路徑位於 cfg/exec_round_cfg
		exec_round_cfg_start_file "round_start.cfg"

		// 回合開始時延遲執行文件的時間
		exec_round_cfg_start_delay "1.5"

		// (L4D1/L4D2) 遊戲開始時，執行的cfg文件名稱 (倖存者離開安全區域 / 生存或清道夫模式計時開始)
		// 路徑位於 cfg/exec_round_cfg
		exec_round_cfg_l4d_game_file "game_start.cfg"

		// (L4D1/L4D2) 遊戲開始時延遲執行文件的時間 (倖存者離開安全區域 / 生存或清道夫模式計時開始)
		exec_round_cfg_l4d_game_delay "0.1"

		// 回合結束時，執行的cfg文件名稱
		// 路徑位於 cfg/exec_round_cfg
		exec_round_cfg_end_file "round_end.cfg"

		// 回合結束時延遲執行文件的時間
		exec_round_cfg_end_delay "0.5"
		```
</details>