# Description | 內容
shoot teammate = shoot yourself RPG

> __Note__ <br/>
This plugin is private, Please contact [me](/#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](/#私人插件列表-private-plugins-list)

* Apply to | 適用於
	```
	L4D1
	L4D2
	```

* [Video | 影片展示](https://youtu.be/5edUrzY1x5c)

* <details><summary>How does it work?</summary>

	* When friendly fire damage happened,
		* Add 'attack counter' to attacker, the more 'attack counter', the more damage inflicted to attacker
		* Add 'victim counter' to victim, the more 'victim counter', the more damage decrease to victim
		* For eaxmple: FF Damage=20，A player's attack counter=2，B player's victim counter=1
			```c
			// Player A shot at player B, First time FF
			Player A(attacker) received 20*2 = 40 dmg, attack counter+1=3
			Player B(victim) received 20/1 = 20 dmg，victim counter+1=2

			// Second time FF
			Player A(attacker) received 20*3 = 60 dmg, attack counter+1=4
			Player B(victim) received 20/2 = 10 dmg，victim counter+1=3

			// Third time FF
			Player A(attacker) received 20*4 = 80 dmg, attack counter+1=5
			Player B(victim) received 20/3 = 6 dmg，victim counter+1=4

			// And so on
			...
			```
	* Kill attacker if cause too many damage
	* Announce total ff damage and reflict to attacker after 1 second
	* To handle flame, explosive, melee damage, see [data/anti-friendly_fire_RPG.cfg](data/anti-friendly_fire_RPG.cfg)
		* Manual in this file, click for more details...
	* 🟥 Do not use with other plugin which modify friendly fire damage.
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	2. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/anti-friendly_fire_RPG.cfg
		```php
		// If 1, Enable anti-friendly_fire RPG plugin.
		l4d_rpg_friendly_fire_enable "1"

		// Changes how ff announce displays FF damage. (1:In chat; 2: In Hint Box; 3: In center text)
		l4d_rpg_ff_announce_type "2"

		// Victim counter default for victim. (0=Take Damage, No Reduced. -1:No FF Damage)
		l4d_rpg_friendly_fire_protect_divide "1.0"

		// Attack counter default for attacker. (0=No Reflect Damage)
		l4d_rpg_friendly_fire_damage_multi "1.0"

		// Victim counter added to victim each time friendly fire.
		l4d_rpg_friendly_fire_protect_add "0.25"

		// Attack counter added to attacker each time friendly fire.
		l4d_rpg_friendly_fire_damage_add "0.25"

		// If 1, kill attacker if he reaches ff counter limit. (Default: 6)
		l4d_rpg_friendly_fire_count_limit "6"

		// If 1, kill attacker if his reaches ff damage limit. (Default: 100)
		l4d_rpg_friendly_fire_damage_limit "100"

		// If attacker is a new player who just joins the server, time in seconds to disable ff damage from him. (0=Off)
		l4d_rpg_friendly_fire_connect_player_disable_time "30.0"

		// Cfg file should this plugin read for settings
		// Default: data/anti-friendly_fire_RPG.cfg
		l4d_rpg_friendly_fire_read_data "data/anti-friendly_fire_RPG.cfg"
		```
</details>

* Translation Support | 支援翻譯
	```
	translations/anti-friendly_fire_RPG.phrases.txt
	```

* <details><summary>Related Plugin | 相關插件</summary>

	1. [anti-friendly_fire](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/anti-friendly_fire): shoot teammate = shoot yourself simple version
		* 簡單版反傷插件
	2. [anti-friendly_fire_V2](/L4D_插件/Anti_Griefer_防惡意路人/anti-friendly_fire_V2): shoot teammate = shoot yourself V2
		* 簡單版反傷插件，第二版本
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v2.6 (2026-2-26)
		* Update data, add two keyvalue
		* Immune FF damage when attacker crouches
		* Immune FF damage when victim crouches

	* v2.5 (2026-2-8)
		* If the damage exceeds the victim's health, set the damage to the same value as their health.

	* v2.4 (2024-10-16)
		* Update cvars
		* Updata data

	* v2.3 (2024-9-21)
		* Add data config
		* Update cvars

	* v2.2 (2024-9-19)
		* Fixed crash
		* Update cvars
		
	* v2.1 (2024-9-18)
		* Update cvars

	* v2.0 (2024-8-7)
		* Add Gamedata
		* Optimize code and improve performance

	* v1.9 (2024-5-24)
		* Fixed god frame damage

	* v1.8 (2024-5-2)
		* Update cvars

	* v1.7 (2023-11-18)
		* Add Chainsaw damage
		* Fixed fire bullet damage
		* Add grenade launcher damage

	* v1.6 (2023-5-4)
		* Fixed Melee damage
		* Translation Support

	* v1.5
		* Initial Release
</details>

- - - -
# 中文說明
隊友開槍射你會反彈傷害，RPG版本

* 原理
	* 友傷產生時
		* 攻擊者身上的'attack計數器'加1，attack計數器越多，傷害遞增倍數反彈給自己
		* 受害者身上的'victim計數器'加1，victim計數器越多，受到的傷害遞減減少
		* 舉例，友傷=20，A玩家attack計數器=2，B玩家victim計數器=1
			```c
			// A玩家對B玩家開槍，第一次產生友傷時
			A玩家(攻擊者)受到20*2 = 40傷害，attack計數器+1=3
			B玩家(受害者)受到20/1 = 20傷害，victim計數器+1=2

			// 第二次產生友傷時
			A玩家(攻擊者)受到20*3 = 60傷害，attack計數器+1=4
			B玩家(受害者)受到20/2 = 10傷害，victim計數器+1=3

			// 第三次產生友傷時
			A玩家(攻擊者)受到20*4 = 80傷害，attack計數器+1=5
			B玩家(受害者)受到20/3 = 6傷害，victim計數器+1=4

			// 以下類推
			...
			```
	* 當攻擊者造成太多次友傷，將會處死
	* 一秒後計算總友傷，然後反彈給攻擊者
	* 控制火焰、爆炸等等傷害，詳見文件: [data/anti-friendly_fire_RPG.cfg](data/anti-friendly_fire_RPG.cfg)
		* 內有中文說明，可點擊查看
	* 🟥切勿與其他會修改友傷的插件並用

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/anti-friendly_fire_RPG.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		l4d_rpg_friendly_fire_enable "1"

		// 傷害提示該如何顯示. (0: 不提示, 1: 聊天框, 2: 黑底白字框, 3: 螢幕正中間)
		l4d_rpg_ff_announce_type "2"

		// 受害者身上的victim計數器的預設值. (0=受害者依然會受友傷，不減傷. -1=受害者不會受傷)
		l4d_rpg_friendly_fire_protect_divide "1.0"

		// 攻擊者身上的attack計數器的預設值. (0=攻擊者不會受到反彈傷害)
		l4d_rpg_friendly_fire_damage_multi "1.0"

		// 當友傷發生時，增加此數值到受害者的victim計數器.
		l4d_rpg_friendly_fire_protect_add "0.25"

		// 當友傷發生時，增加此數值到攻擊者的attack計數器.
		l4d_rpg_friendly_fire_damage_add "0.25"

		// 為1時，當攻擊者造成6次以上的友傷時，處死攻擊者 (預設: 6)
		l4d_rpg_friendly_fire_count_limit "6"

		// 為1時，當攻擊者造成100滴以上的友傷時，處死攻擊者 (預設: 100)
		l4d_rpg_friendly_fire_damage_limit "100"

		// 玩家進來的30秒內不會對其他人造成友傷 (0=關閉這項功能)
		l4d_rpg_friendly_fire_connect_player_disable_time "30.0"

		// 此插件會讀取的文件設定名稱
		// 預設: ddata/anti-friendly_fire_RPG.cfg
		l4d_rpg_friendly_fire_read_data "data/anti-friendly_fire_RPG.cfg"
		```
</details>