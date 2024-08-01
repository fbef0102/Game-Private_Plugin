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

	* Survivor bots deal more damage to common infected, special infected, tank, witch
	* Survivor bots decrease damage from common infected, special infected, tank, witch, friendly fire
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_TougherSurvivorBots.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d_TougherSurvivorBots_allow "1"

		// If 1, allow survivor bots deal more damage.
		l4d_TougherSurvivorBots_attack_bot_allow "1"

		// If 1, allow survivor real players deal more damage.
		l4d_TougherSurvivorBots_attack_player_allow "0"

		// Multiply survivor attack damage on difficulty Eazy.
		l4d_TougherSurvivorBots_attack_easy_multi "1.0"

		// Multiply survivor attack damage on difficulty Normal.
		l4d_TougherSurvivorBots_attack_normal_multi "1.25"

		// Multiply survivor attack damage on difficulty Hard.
		l4d_TougherSurvivorBots_attack_hard_multi "1.5"

		// Multiply survivor attack damage on difficulty Impossible.
		l4d_TougherSurvivorBots_attack_impossible_multi "2.0"

		// If 1, enable survivor bots being hurt more damage.
		l4d_TougherSurvivorBots_hurt_bot_enable "1"

		// If 1, enable survivor real players being hurt more damage.
		l4d_TougherSurvivorBots_hurt_player_enable "0"

		// Multiply survivor hurt damage on difficulty Eazy.
		l4d_TougherSurvivorBots_hurt_easy_multi "0.5"

		// Multiply survivor hurt damage on difficulty Normal.
		l4d_TougherSurvivorBots_hurt_normal_multi "0.5"

		// Multiply survivor hurt damage on difficulty Hard.
		l4d_TougherSurvivorBots_hurt_hard_multi "0.5"

		// Multiply survivor hurt damage on difficulty Impossible.
		l4d_TougherSurvivorBots_hurt_impossible_multi "0.5"
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

* <details><summary>Changelog | 版本日誌</summary>

	* v1.0 (2024-8-1)
		* Initial Release
</details>

- - - -
# 中文說明
增加AI Bot對特感的傷害 + 減少AI Bot受到的傷害

* 原理
	* AI Bot 開槍造成的傷害變高，容易殺死特感
	* AI Bot 受到的傷害變低，不容易死亡

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d_TougherSurvivorBots.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		l4d_TougherSurvivorBots_allow "1"

		// 為1時，AI Bot 開槍造成的傷害變高
		l4d_TougherSurvivorBots_attack_bot_allow "1"

		// 為1時，真人倖存者 開槍造成的傷害變高
		l4d_TougherSurvivorBots_attack_player_allow "0"

		// 在簡單難度下，倖存者的傷害加成倍率
		l4d_TougherSurvivorBots_attack_easy_multi "1.0"

		// 在一般難度下，倖存者的傷害加成倍率
		l4d_TougherSurvivorBots_attack_normal_multi "1.25"

		// 在進階難度下，倖存者的傷害加成倍率
		l4d_TougherSurvivorBots_attack_hard_multi "1.5"

		// 在專家難度下，倖存者的傷害加成倍率
		l4d_TougherSurvivorBots_attack_impossible_multi "2.0"

		// 為1時，AI Bot 受到的傷害變低
		l4d_TougherSurvivorBots_hurt_bot_enable "1"

		// 為1時，真人倖存者 受到的傷害變低
		l4d_TougherSurvivorBots_hurt_player_enable "0"

		// 在簡單難度下，倖存者受到的傷害倍率
		l4d_TougherSurvivorBots_hurt_easy_multi "0.5"

		// 在一般難度下，倖存者受到的傷害倍率
		l4d_TougherSurvivorBots_hurt_normal_multi "0.5"

		// 在進階難度下，倖存者受到的傷害倍率
		l4d_TougherSurvivorBots_hurt_hard_multi "0.5"

		// 在專家難度下，倖存者受到的傷害倍率
		l4d_TougherSurvivorBots_hurt_impossible_multi "0.5"
		```
</details>
