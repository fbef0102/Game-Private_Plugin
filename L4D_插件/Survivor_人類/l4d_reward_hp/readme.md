# Description | 內容
Players get hp reward for killing S.I., Tank, Witch or helping each other

> __Note__ <br/>
This plugin is private, Please contact [me](/#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](/#私人插件列表-private-plugins-list)

* Apply to | 適用於
	```
	L4D1
	L4D2
	```

* [Video | 影片展示](https://youtu.be/lCyV4nX1zko)

* Image | 圖示
	<br/>![l4d_reward_hp_1](image/l4d_reward_hp_1.gif)
	<br/>![l4d_reward_hp_2](image/l4d_reward_hp_2.gif)

* <details><summary>How does it work?</summary>

	* Hp Reward for helping teammate, reviving the teammate, and doing the rescue.
	* Hp Reward for killing Tank,Witch, and S.I.
	* Can gain over 100 hp
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
    2. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_reward_hp.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d_reward_hp_enable "1"

		// Changes how message displays. (0: Disable, 1:In chat, 2: In Hint Box, 3: In center text)
		l4d_reward_hp_announce_type "1"

		// Hp reward for healing people with kit, Hp = amount of health restored ÷ this value.
		l4d_reward_hp_heal_teammate "8"

		// Hp reward for killing Smoker.
		l4d_reward_hp_kill_smoker "2"

		// Hp reward for killing Boomer.
		l4d_reward_hp_kill_boomer "1"

		// Hp reward for killing Hunter.
		l4d_reward_hp_kill_hunter "2"

		// Hp reward for killing Spitter.
		l4d_reward_hp_kill_spitter "1"

		// Hp reward for killing Jockey.
		l4d_reward_hp_kill_jockey "2"

		// Hp reward for killing Charger.
		l4d_reward_hp_kill_charger "3"

		// Hp reward on tank death. Hp = damage to Tank ÷ this value. (0=Off)
		l4d_reward_hp_hurt_tank "600"

		// Hp reward on witch death. Hp = damage to witch ÷ this value. (0=Off)
		l4d_reward_hp_hurt_witch "250"

		// Hp reward for killing Witch (One shot).
		l4d_reward_hp_kill_witch_one_shot "10"

		// Hp reward for saving people from rescue room.
		l4d_reward_hp_rescue_teammate "5"

		// Hp reward for reviving the incapacitated teammate.
		l4d_reward_hp_revive_incap "5"

		// Hp reward for reviving the teammate who is hangign from ledge.
		l4d_reward_hp_revive_hang "0"

		// Hp reward for saving people with defibrillator.
		l4d_reward_hp_defi_save "10"

		// Hp reward max health. (can set HP >100)
		l4d_reward_hp_max "100"

		// When not black&white, 0=Add temporary health, 1=Add to main health.
		l4d_reward_hp_heal_type "1"

		// When black&white, 0=Add temporary health, 1=Add to main health.
		l4d_reward_hp_heal_type_bw "0"
		```
</details>

* Translation Support | 支援翻譯
	```
	translations/l4d_reward_hp.phrases.txt
	```

* <details><summary>Changelog | 版本日誌</summary>

	* v1.3 (2024-12-6)
		* Update cvars
		* Update translation
		* Hp reward based on dmg to tank/witch
		* Hp reward based on amount of health restored for healing people

	* v1.2 (2024-8-31)
		* Update cvars
		* Update translation
		* Hp reward for killing Smoker, Boomer, Hunter, Spitter, Jockey, Charger, Tank

	* v1.1 (2024-7-20)
		* Update cvars

	* v1.0
		* Initial Release
</details>

- - - -
# 中文說明
倖存者殺死特感或幫助隊友會獲得血量獎賞

* 原理
	* 以下情況會獲得血量
		* 擊殺Tank、Witch、特感
		* 拯救倒地的隊友、拯救掛邊的隊友、復活死去的隊友、救援房間營救倖存者、治療隊友
	* 黑白狀態的玩家可以獲得血量，但依然是黑白狀態
	* 倒地狀態的玩家擊殺特感也可以獲得血量，但依然是倒地狀態
	* 血量可以突破100

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d_reward_hp.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		l4d_reward_hp_enable "1"

		// 血量獎賞提示該如何顯示. (0: 不提示, 1: 聊天框, 2: 黑底白字框, 3: 螢幕正中間)
		l4d_reward_hp_announce_type "1"

		// 治療隊友 獲得血量 (獲得的血量 = 治療恢復的血量 / 此數值)
		l4d_reward_hp_heal_teammate "8"

		// 殺死 Smoker 獲得的血量
		l4d_reward_hp_kill_smoker "2"

		// 殺死 Boomer 獲得的血量
		l4d_reward_hp_kill_boomer "1"

		// 殺死 Hunter 獲得的血量 
		l4d_reward_hp_kill_hunter "2"

		// 殺死 Spitter 獲得的血量 
		l4d_reward_hp_kill_spitter "1"

		// 殺死 Jockey 獲得的血量 
		l4d_reward_hp_kill_jockey "2"

		// 殺死 Charger 獲得的血量 
		l4d_reward_hp_kill_charger "3"

		// 殺死Tank 獲得的血量 (獲得的血量 = 玩家對Tank的傷害 ÷ 此數值), 0=關閉
		l4d_reward_hp_hurt_tank "600"

		// 殺死Witch 獲得的血量 (不是一發死掉, 獲得的血量 = 玩家對Witch的傷害 ÷ 此數值), 0=關閉
		l4d_reward_hp_hurt_witch "250"

		// 殺死Witch 獲得的血量 (一發死)
		l4d_reward_hp_kill_witch_one_shot "10"

		// 救援房間營救倖存者 獲得的血量
		l4d_reward_hp_rescue_teammate "5"

		// 拯救倒地的隊友 獲得的血量
		l4d_reward_hp_revive_incap "5"

		// 拯救掛邊的隊友 獲得的血量
		l4d_reward_hp_revive_hang "0"

		// 電擊器復活死去的隊友 獲得的血量
		l4d_reward_hp_defi_save "10"

		// 可回復的最大血量 (可設置超過100)
		l4d_reward_hp_max "100"

		// 沒黑白時, 0=回復虛血, 1=回復實血.
		l4d_reward_hp_heal_type "1"

		// 黑白時, 0=回復虛血, 1=回復實血.
		l4d_reward_hp_heal_type_bw "0"
		```
</details>