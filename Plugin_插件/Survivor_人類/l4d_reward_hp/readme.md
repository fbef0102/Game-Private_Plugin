# Description | 內容
Players get hp reward for killing S.I., Tank, Witch or helping each other

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/lCyV4nX1zko)

* Image | 圖示
	* Hp Reward for helping teammate
		> 幫助隊友獲得血量
		<br/>![l4d_reward_hp_1](image/l4d_reward_hp_1.gif)
	* Hp Reward for killing Tank
		> 擊殺Tank獲得血量
		<br/>![l4d_reward_hp_2](image/l4d_reward_hp_2.gif)

* Apply to | 適用於
	```
	L4D1
	L4D2
	```

* Translation Support | 支援翻譯
	```
	English
	繁體中文
	简体中文
	```

* <details><summary>Changelog | 版本日誌</summary>

	* v1.0
		* Initial Release
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
    2. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_reward_hp.cfg
		```php
		// Changes how message displays. (0: Disable, 1:In chat, 2: In Hint Box, 3: In center text)
		l4d_reward_hp_announce_type "1"

		// Hp reward for saving people with defibrillator.
		l4d_reward_hp_defi_save "10"

		// 0=Plugin off, 1=Plugin on.
		l4d_reward_hp_enable "1"

		// Hp reward for healing people with kit.
		l4d_reward_hp_heal_teammate "8"

		// Hp reward for killing Special Infected.
		l4d_reward_hp_kill_si "2"

		// Hp reward for killing Tank.
		l4d_reward_hp_kill_tank "10"

		// Hp reward for killing Witch (One shot).
		l4d_reward_hp_kill_witch_one_shot "10"

		// Hp reward for killing Witch (Many shots).
		l4d_reward_hp_kill_witch_shots "5"

		// Hp reward max health.
		l4d_reward_hp_max "100"

		// Hp reward for doing the rescue.
		l4d_reward_hp_rescue_teammate "5"

		// Hp reward for reviving the teammate who is hangign from ledge.
		l4d_reward_hp_revive_hang "0"

		// Hp reward for reviving the incapacitated teammate.
		l4d_reward_hp_revive_incap "5"
		```
</details>

* <details><summary>Command | 命令</summary>

	None
</details>

- - - -
# 中文說明
倖存者殺死特感或幫助隊友會獲得血量獎賞

* 原理
	* 擊殺Tank、Witch、特感會獲得血量
	* 拯救倒地的隊友、拯救掛邊的隊友、復活死去的隊友、救援房間營救倖存者、治療隊友會獲得血量
	* 黑白狀態的玩家可以獲得血量，但依然是黑白狀態
	* 倒地狀態的玩家擊殺特感也可以獲得血量，但依然是倒地狀態
	* 血量可以突破100

* 功能
	* 可設置提示顯示位置
	* 可設置獲得血量
	* 可設置獲得血量的最大生命值