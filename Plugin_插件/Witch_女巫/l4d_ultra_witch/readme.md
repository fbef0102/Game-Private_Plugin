# Description | 內容
The Witch's hit deals a set amount of damage instead of instantly incapping, while also sending the survivor flying.

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/MVJp78Fmils)

* Image | 圖示
	* Send the survivor flying (抓飛倖存者)
    <br/>![l4d_ultra_witch_1](image/l4d_ultra_witch_1.gif)

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_ultra_witch.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d_ultra_witch_enable "1"

		// If 1, The Witch's hit sends survivor flying.
		l4d_ultra_witch_flying_enable "1"

		// If 1, Instantly incap survivor if witch's hit damage is greater than or equal to survivor hard health
		l4d_ultra_witch_hard_health_realism "0"

		// (L4D2) Which method to send survivor flying.
		// 0=Flings a player to the ground, like they were hit by a Charger
		// 1=Punch player, like they were hit by a Tank
		l4d_ultra_witch_flying_method "1"
		```
</details>

* <details><summary>Command | 命令</summary>

	None
</details>

* <details><summary>Related Official ConVar</summary>

	* Write down the following cvars in cfg/server.cfg
		```php
		// This command sets the amount of damage a witch attack deals (Default: 100)
		sm_cvar z_witch_damage 50
		```
</details>

* Apply to | 適用於
	```
	L4D1
	L4D2
	```

* <details><summary>Changelog | 版本日誌</summary>

	* v1.2h (2023-6-19)
		* Remove Gamedata (No need)

	* v1.1h (2023-5-10)
		* Add a convar
			```php
			// 0=Plugin off, 1=Plugin on.
			l4d_ultra_witch_enable "1"
			```

	* v1.0h (2023-2-25)
		* Remake Code
		* Individual plugin
		* Auto generate cfg
		* Add cvars

	* v1.2.2
		* [From SirPlease/L4D2-Competitive-Rewor](https://github.com/SirPlease/L4D2-Competitive-Rework/blob/master/addons/sourcemod/scripting/l4d2_ultra_witch.sp)
</details>

- - - -
# 中文說明
Witch不會一抓倒地，而是擊飛倖存者

* 原理
	* Witch不會一抓倒地或死亡而是擊飛目標倖存者

* 用意在哪?
	* 在RPG伺服器當中，倖存者的血量破百，容易殺死Witch
	* 取消秒殺或倒地，擊飛倖存者，增加遊戲樂趣

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d_ultra_witch.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		l4d_ultra_witch_enable "1"

		// 為1時，Witch的抓傷會擊飛倖存者
		l4d_ultra_witch_flying_enable "1"

		// 為1時，如果抓傷大於玩家的實血則立即倒地
		l4d_ultra_witch_hard_health_realism "0"

		// (L4D2) 選擇擊飛倖存者的方式
		// 0=撞飛倖存者, 就像被Charger撞到
		// 1=拍飛倖存者, 就像被Tank拍到
		l4d_ultra_witch_flying_method "1"
		```
</details>

* <details><summary>相關的官方指令中文介紹 (點我展開)</summary>

	* 以下指令寫入文件 cfg/server.cfg，可自行調整
		```php
		// 使用官方指令修改Witch的傷害
		// Witch攻擊一次站立的倖存者的傷害 (預設: 100)
		sm_cvar z_witch_damage 50
		```
</details>