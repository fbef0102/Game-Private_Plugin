# Description | 內容
Makes the survivor bots deal more damage against SIs and be more resistant to damage.

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Video | 影片展示
<br/>None

* Image | 圖示
<br/>None

* <details><summary>How does it work?</summary>

	* Survivor bots deal more damage to 
		* Common infected
		* Special infected
		* Tank
		* Witch
	* Survivor bots decrease damage from 
		* Common infected
		* Special infected
		* Tank
		* Witch
		* Friendly fire
		* Fall from ledge
		* Flame
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_TougherSurvivorBots.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d_TougherSurvivorBots_allow "1"
		```
</details>

* <details><summary>Command | 命令</summary>

	None
</details>

* <details><summary>Data Config</summary>

	* ```data/l4d_TougherSurvivorBots.cfg```
		```php
        "l4d_TougherSurvivorBots"
        {
			// In Easy Difficulty
			"Easy"
			{
				"attack"
				{
					// 1=Apply to survivor bots, 0=Don't apply to survivor bots
					"bot_allow" "1"
					
					// 1=Apply to real survivor players, 0=Don't apply to survivor bots
					"real_allow" "0"
					
					// Multiply survivor attack damage to Tank (0.0=No Damage, -1: Don't modify)
					"tank"		"-1.0"
					
					// Multiply survivor attack damage to Witch (0.0=No Damage, -1: Don't modify)
					"witch"		"-1.0"
					
					// Multiply survivor attack damage to Common Infected (0.0=No Damage, -1: Don't modify)
					"common"	"-1.0"
					
					// Multiply survivor attack damage to Special Infected (0.0=No Damage, -1: Don't modify)
					"si"	"-1.0"
				}
				
				"victim"
				{
					// 1=Apply to survivor bots, 0=Don't apply to survivor bots
					"bot_allow" "1"
					
					// 1=Apply to real survivor players, 0=Don't apply to survivor bots
					"real_allow" "0"
					
					// Multiply survivor hurt damage from Tank (0.0=No Damage, -1: Don't modify)
					"tank"		"-1.0"
					
					// Multiply survivor hurt damage from Witch (0.0=No Damage, -1: Don't modify)
					"witch"		"-1.0"
					
					// Multiply survivor hurt damage from Common Infected (0.0=No Damage, -1: Don't modify)
					"common"	"-1.0"
					
					// Multiply survivor hurt damage from Special Infected (0.0=No Damage, -1: Don't modify)
					"si"		"-1.0"
					
					// Multiply survivor hurt damage from Friendly Fire (0.0=No Damage, -1: Don't modify)
					"ff"		"-1.0"
					
					// Multiply survivor hurt damage from fall (DMG_FALL) (0.0=No Damage, -1: Don't modify)
					"fall"		"-1.0"
					
					// Multiply survivor hurt damage from Flame (DMG_BURN) (0.0=No Damage, -1: Don't modify)
					"flame"		"-1.0"
				}
			}

			...
		}
		```
</details>

* Apply to | 適用於
	```
	L4D1
	L4D2
	```

* <details><summary>Changelog | 版本日誌</summary>

	* v1.1 (2024-8-7)
		* Add data file
		* Update cvars

	* v1.0 (2024-8-1)
		* Initial Release
</details>

- - - -
# 中文說明
增加AI Bot對特感的傷害 + 減少AI Bot受到的傷害

* 原理
	* AI Bot 開槍造成的傷害變高，容易殺死
		* 普通殭屍
		* 特感
		* Tank
		* Witch
	* AI Bot 受到傷害變低，不容易死亡 
		* 普通感染者
		* 特感
		* Tank
		* Witch
		* 友傷
		* 墬樓傷害
		* 火焰傷害 (火焰子彈不算)

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d_TougherSurvivorBots.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		l4d_TougherSurvivorBots_allow "1"
		```
</details>

* <details><summary>文件設定範例</summary>

	* ```data/l4d_TougherSurvivorBots.cfg```
		```php
        "l4d_TougherSurvivorBots"
        {
			// 簡單難度
			"Easy"
			{
				"attack"
				{
					// 1=修改AI倖存者Bot 開槍造成的傷害, 0=不修改
					"bot_allow" "1"
					
					// 1=修改真人倖存者 開槍造成的傷害, 0=不修改
					"real_allow" "0"
					
					// 修改倖存者對 Tank 傷害倍率 (0.0=無傷, -1: 不修改傷害)
					"tank"		"-1.0"
					
					// 修改倖存者對 Witch 傷害倍率 (0.0=無傷, -1: 不修改傷害)
					"witch"		"-1.0"
					
					// 修改倖存者對 普通殭屍 傷害倍率 比 (0.0=無傷, -1: 不修改傷害)
					"common"	"-1.0"
					
					// 修改倖存者對 特感 傷害倍率 比 (0.0=無傷, -1: 不修改傷害)
					"si"	"-1.0"
				}
				
				"victim"
				{
					// 1=修改AI倖存者Bot 受到的傷害, 0=不修改
					"bot_allow" "1"
					
					// 1=修改真人倖存者 受到的傷害, 0=不修改
					"real_allow" "0"
					
					// 修改倖存者受到 Tank 的傷害倍率 (0.0=無傷, -1: 不修改傷害)
					"tank"		"-1.0"
					
					// 修改倖存者受到 Witch 的傷害倍率 (0.0=無傷, -1: 不修改傷害)
					"witch"		"-1.0"
					
					// 修改倖存者受到 普通殭屍 的傷害倍率 比 (0.0=無傷, -1: 不修改傷害)
					"common"	"-1.0"
					
					// 修改倖存者受到 特感 的害倍率 比 (0.0=無傷, -1: 不修改傷害)
					"si"		"-1.0"
					
					// 修改倖存者受到 友傷 的害倍率 比 (0.0=無傷, -1: 不修改傷害)
					"ff"		"-1.0"
					
					// 修改倖存者受到 跳樓摔傷(DMG_FALL) 的害倍率 比 (0.0=無傷, -1: 不修改傷害)
					"fall"		"-1.0"
					
					// 修改倖存者受到 火焰(DMG_BURN) 的害倍率 比 (0.0=無傷, -1: 不修改傷害)
					"flame"		"-1.0"
				}
			}

			...
		}
		```
</details>
