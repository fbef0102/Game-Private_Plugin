# Description | 內容
Restore Health when survival begins.

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Video | 影片展示
<br/>None

* Image | 圖示
	* display message when survival begins (計時開始時提示訊息)
	<br/>![survival_hp_1](image/survival_hp_1.jpg)

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	2. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/survival_hp.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		survival_hp_enable "1"

		// If 1, survivors won't take any damage before game starts
		survival_hp_god_before_game "1"
		```
</details>

* <details><summary>Command | 命令</summary>

	None
</details>

* Apply to | 適用於
	```
	L4D1 Survival
	L4D2 Survival
	```

* <details><summary>Changelog | 版本日誌</summary>

	* v1.1 (2023-3-13)
		* Survivors won't take any damage before game starts

	* v1.0
		* Initial Release
</details>

- - - -
# 中文說明
生存模式計時開始時候，恢復所有倖存者血量

* 原理
	* 確保倖存者能完整血量遊玩生存關卡
	* 生存模式計時之前，倖存者不會受到任何傷害　(依然會掛邊、墬樓死亡)

* 功能
	* 可開關倖存者無敵狀態