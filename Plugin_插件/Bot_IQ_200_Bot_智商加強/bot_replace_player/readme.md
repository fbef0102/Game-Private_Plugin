# Description | 內容
If bot takes over the dead/incapacitated player who has disconnected, bot can repsawn and recovery HP.

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Video | 影片展示
<br/>None

* Image | 圖示
	<br/>![bot_replace_player_1](image/bot_replace_player_1.gif)
	<br/>![bot_replace_player_2](image/bot_replace_player_2.gif)

* <details><summary>How does it work?</summary>

	* When human-controlled player disconnected from server and bot takes over survivor
		1. If bot is incapacitated, give health and stand up
		2. If bot is dead, respawn and give weapons
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	2. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/bot_replace_player.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		bot_replace_player_enable "1"

		// Time in seconds to check status after bot taks over a human-controlled player. (min: 0.1s)
		bot_replace_player_timer "2.0"

		// If 1, When bot takes over the incapacitated player who has disconnected, bot will get health
		bot_replace_player_incap_recover "1"

		// If bot replaces the incapacitated player, amount of HP a bot Survivor will get (Def 80)
		bot_replace_player_incap_respawnhp "80"

		// If bot replaces the incapacitated player, amount of buffer HP a bot Survivor will get (Def 20)
		bot_replace_player_incap_respawnbuffhp "20"

		// If 1, When bot takes over the dead player who has disconnected, bot will respawn
		bot_replace_player_dead_recover "1"

		// If bot replaces the dead player, amount of HP a bot Survivor will respawn with (Def 80)
		bot_replace_player_dead_respawnhp "80"

		// If bot replaces the dead player, amount of buffer HP a bot Survivor will respawn with (Def 20)
		bot_replace_player_dead_respawnbuffhp "20"

		// (L4D2) Bot respawn, first slot weapon  (1-Autoshot, 2-SPAS, 3-M16, 4-SCAR, 5-AK47, 6-SG552, 7-Mil Sniper, 8-AWP, 9-Scout, 10=Hunt Rif, 11=M60, 12=GL, 13-SMG, 14-Sil SMG, 15=MP5, 16-Pump Shot, 17=Chrome Shot, 18=Rand T1, 19=Rand T2, 20=Rand T3, 0=off)
		bot_replace_player_dead_firstweapon "19"

		// (L4D2) Bot respawn, second slot weapon (1- Dual Pistol, 2-Magnum, 3-Chainsaw, 4=Melee weapon from map, 5=Random, 0=Only Pistol)
		bot_replace_player_dead_secondweapon "1"

		// (L4D2) Bot respawn, third slot weapon (1 - Moltov, 2 - Pipe Bomb, 3 - Bile Jar, 4=Random, 0=off)
		bot_replace_player_dead_thirdweapon "4"

		// (L4D2) Bot respawn, fourth slot weapon (1 - Medkit, 2 - Defib, 3 - Incendiary Pack, 4 - Explosive Pack, 5=Random, 0=off)
		bot_replace_player_dead_forthweapon "1"

		// (L4D2) Bot respawn, fifth slot weapon (1 - Pills, 2 - Adrenaline, 3=Random, 0=off)
		bot_replace_player_dead_fifthweapon "3"

		// (L4D1) Bot respawn, first slot weapon (1 - Autoshotgun, 2 - M16, 3 - Hunting Rifle, 4 - smg, 5 - shotgun, 6=Random T1, 7=Random T2, 0=off)
		bot_replace_player_dead_firstweapon "6"

		// (L4D1) Bot respawn, second slot weapon (1 - Dual Pistol, 0=Only Pistol)
		bot_replace_player_dead_secondweapon "1"

		// (L4D1) Bot respawn, third slot weapon (1 - Moltov, 2 - Pipe Bomb, 3=Random, 0=off)
		bot_replace_player_dead_thirdweapon "3"

		// (L4D1) Bot respawn, fourth slot weapon (1 - Medkit, 0=off)
		bot_replace_player_dead_forthweapon "1"

		// (L4D1) Bot respawn, fifth slot weapon (1 - Pills, 0=off)
		bot_replace_player_dead_fifthweapon "1"
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

* <details><summary>Translation Support | 支援翻譯</summary>

	```
	English
	繁體中文
	简体中文
	```
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.0 (2023-5-10)
		* Initial Release
</details>

- - - -
# 中文說明
AI Bot取代離開遊戲的死亡與倒地玩家時，自動復活並給予武器

* 原理
	* 當玩家控制的倖存者離開遊戲，Bot取代之後
		1. 如果倒地，則自救並給予血量
		2. 如果死亡，則自動復活並給予武器

* 用意在哪?
	* 高難度伺服器，玩家頻繁被打並離開
	* 路人故意自殺再離開
	* 維持場上有Bot陪伴

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/bot_replace_player.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		bot_replace_player_enable "1"

		// Bot 取代玩家控制的倖存者的2.0秒之後檢查Bot狀態 (最短: 0.1秒)
		bot_replace_player_timer "2.0"

		// 為1時，當Bot取代玩家之後，如果是倒地狀態則自動救起來並給予血量
		bot_replace_player_incap_recover "1"

		// (倒地狀態) Bot自動救起來, Bot能得到的實血 (預設: 80)
		bot_replace_player_incap_respawnhp "80"

		// (倒地狀態) ot自動救起來, Bot能得到的虛血 (預設: 20)
		bot_replace_player_incap_respawnbuffhp "20"

		// 為1時，當Bot取代玩家之後，如果是死亡狀態則自動復活並給予武器
		bot_replace_player_dead_recover "1"

		// (死亡狀態) Bot自動復活, Bot能得到的實血 (預設: 80)
		bot_replace_player_dead_respawnhp "80"

		// (死亡狀態) Bot自動復活, Bot能得到的虛血 (預設: 20)
		bot_replace_player_dead_respawnbuffhp "20"

		// (L4D2) (死亡狀態) Bot自動復活, 給予的主武器 (1-Autoshot, 2-SPAS, 3-M16, 4-SCAR, 5-AK47, 6-SG552, 7-Mil Sniper, 8-AWP, 9-Scout, 10=Hunt Rif, 11=M60, 12=GL, 13-SMG, 14-Sil SMG, 15=MP5, 16-Pump Shot, 17=Chrome Shot, 18=隨機T1武器, 19=隨機T2武器, 20=隨機T3武器, 0=關閉)
		// GL = 榴彈發射器
		// 隨機T3武器 = M60機槍 或 榴彈發射器
		bot_replace_player_dead_firstweapon "19"

		// (L4D2) (死亡狀態) Bot自動復活, 給予的副武器 (1- 雙手槍, 2-沙漠之鷹, 3-電鋸, 4=任一把近戰武器, 5=隨機, 0=只有一把手槍)
		bot_replace_player_dead_secondweapon "1"

		// (L4D2) (死亡狀態) Bot自動復活, 給予的投擲物品 (1 - 火瓶, 2 - 土製炸彈, 3 - 膽汁, 4=隨機, 0=關閉)
		bot_replace_player_dead_thirdweapon "4"

		// (L4D2) (死亡狀態) Bot自動復活, 給予的醫療物品 (1 - 治療包, 2 - 電擊器, 3 - 火焰包, 4 - 高爆彈, 5=隨機, 0=關閉)
		bot_replace_player_dead_forthweapon "1"

		// (L4D2) (死亡狀態) Bot自動復活, 給予的副醫療物品 (1 - 藥丸, 2 - 腎上腺素, 3=隨機, 0=關閉)
		bot_replace_player_dead_fifthweapon "3"

		// (L4D1) (死亡狀態) Bot自動復活, 給予的主武器 (1 - Autoshotgun, 2 - M16, 3 - Hunting Rifle, 4 - smg, 5 - shotgun, 6=隨機T1武器, 7=隨機T2武器, 0=關閉)
		bot_replace_player_dead_firstweapon "6"

		// (L4D1) (死亡狀態) Bot自動復活, 給予的副武器 (1 - 雙手槍, 0=只有一把手槍)
		bot_replace_player_dead_secondweapon "1"

		// (L4D1) (死亡狀態) Bot自動復活, 給予的投擲物品 (1 - 火瓶, 2 - 土製炸彈, 3=隨機, 0=關閉)
		bot_replace_player_dead_thirdweapon "3"

		// (L4D1) (死亡狀態) Bot自動復活, 給予的醫療物品 (1 - 治療包, 0=關閉)
		bot_replace_player_dead_forthweapon "1"

		// (L4D1) (死亡狀態) Bot自動復活, 給予的副醫療物品 (1 - 藥丸, 0=關閉)
		bot_replace_player_dead_fifthweapon "1"
		```
</details>
