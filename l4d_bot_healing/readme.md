# Description | 內容
Set the health value bots require before using First Aid, Pain Pills or Adrenaline. (target is self or bot or player)

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Video | 影片展示
<br/>None

* Image | 圖示
<br/>None

* Apply to | 適用於
```
L4D1
L4D2
```

* <details><summary>Changelog | 版本日誌</summary>

	* v2.2
		* Add Cvars to tell if Target is self or teammate bot or teammate real player

	* v2.1
		* [Original Post by SilverShot](https://forums.alliedmods.net/showthread.php?t=338889)
</details>

* Require | 必要安裝
	1. [Actions](https://forums.alliedmods.net/showthread.php?t=336374)

* Optional | 輔助插件
	1. [l4d_heartbeat](https://forums.alliedmods.net/showthread.php?p=2687274): Fixes survivor_max_incapacitated_count cvar increased values reverting black and white screen. Also some extra options.
		> 可用指令調整倖存者有多條生命與黑白狀態

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_bot_healing.cfg
	```php
	// 0=Ignored. 1=Only allowing healing when self is black and white
	l4d_bot_healing_die_first_self "0"

	// 0=Ignored. 1=Only allowing healing when target bot is black and white
	l4d_bot_healing_die_first_target_bot "1"

	// 0=Ignored. 1=Only allowing healing when target player is black and white
	l4d_bot_healing_die_first_target_player "1"

	// 0=Ignored. 1=Only allowing giving pills when self is black and white
	l4d_bot_healing_die_pills_self "0"

	// 0=Ignored. 1=Only allowing giving pills when target bot is black and white
	l4d_bot_healing_die_pills_target_bot "0"

	// 0=Ignored. 1=Only allowing giving pills when target player is black and white
	l4d_bot_healing_die_pills_target_player "0"

	// Allow bots to use First Aid when self health is below this value. (0=Prohibit)
	l4d_bot_healing_first_self "30.0"

	// Allow bots to use First Aid when target bot health is below this value. (0=Prohibit)
	l4d_bot_healing_first_target_bot "30.0"

	// Allow bots to use First Aid when target player health is below this value. (0=Prohibit)
	l4d_bot_healing_first_target_player "30.0"

	// Allow bots to use Pills or Adrenaline when self health is below this value. (0=Prohibit)
	l4d_bot_healing_pills_self "50.0"

	// Allow bots to use Pills or Adrenaline when target bot health is below this value. (0=Prohibit)
	l4d_bot_healing_pills_target_bot "50.0"

	// Allow bots to use Pills or Adrenaline when target player health is below this value. (0=Prohibit)
	l4d_bot_healing_pills_target_player "50.0"
	```
</details>

* <details><summary>Command | 命令</summary>

	* **Enable/Disable Bunny Hopping for client**
		```php
		sm_bhop
		```
</details>

- - - -
# 中文說明
目標生命值低於一定血量之時，Bot不會使用治療包與傳送藥丸 (目標區分為自己、隊友Bot、真人玩家)

* 原理
	* 當Bot想要對目標使用治療包或者傳送藥丸之前，先判定對方生命值是否達到要求
	* 解決傻B的Bot經常亂打包與亂吃藥丸的智商

* 功能
	1. 目標可區分為Bot自己、隊友Bot、真人玩家
	2. 可分別設置目標的血量門檻
	3. 可禁止bot不會對目標使用治療包或者傳送藥丸 (無論多少血量或黑白狀態)