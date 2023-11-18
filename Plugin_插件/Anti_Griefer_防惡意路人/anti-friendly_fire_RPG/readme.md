# Description | 內容
shoot teammate = shoot yourself RPG

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/5edUrzY1x5c)

* Image | 圖示
<br/>None

* <details><summary>How does it work?</summary>

	* When friendly fire damage happened,
		* Add 'attack counter' to attacker, the more 'attack counter', the more damage inflicted to attacker
		* Add 'victim counter' to victim, the more 'victim counter', the more damage decrease to victim
	* Kill attacker if cause too many damage
	* Announce total ff damage and reflict to attacker after 1 second
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

		// How much distance range between attacker and victim are immune to ff. (0=Off)
		l4d_rpg_friendly_fire_immune_range "30"

		// Victim counter default for victim. (Must be Integer)
		l4d_rpg_friendly_fire_protect_divide "1"

		// Attack counter default for attacker. (Must be Integer)
		l4d_rpg_friendly_fire_damage_multi "1"

		// If 1, Disable ff damage with melee weapons.
		l4d_rpg_friendly_fire_disable_melee "1"

		// If 1, kill attacker if he reaches ff counter limit. (Default: 6)
		l4d_rpg_friendly_fire_count_limit "6"

		// If 1, kill attacker if his reaches ff damage limit. (Default: 100)
		l4d_rpg_friendly_fire_damage_limit "100"

		// If 1, Disable ff damage to Incap player
		l4d_rpg_friendly_fire_disable_incap "1"

		// If attacker is a new player who just joins the server, time in seconds to disable ff damage from him. (0=Off)
		l4d_rpg_friendly_fire_connect_player_disable_time "30"

		// FF damage to GodFrame player, 1=No Damage, 0=Cause Damage
		l4d_rpg_friendly_fire_ignore_godframe "1"

		// If 1, Disable ff damage to Bot.
		l4d_rpg_friendly_fire_disable_bot "0"

		// FF flame damage to player, 1=Don't calculate counter, 0=apply this plugin and calculate counter
		l4d_rpg_friendly_fire_ignore_flame "1"

		// FF Pipe Bomb, Propane Tank, and Oxygen Tank damage to player, 1=Don't calculate counter, 0=apply this plugin and calculate counter
		l4d_rpg_friendly_fire_ignore_exlode "1"

		// FF Grenade Launcher damage to player, 1=Don't calculate counter, 0=apply this plugin and calculate counter
		l4d_rpg_friendly_fire_ignore_GL "1"
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

* <details><summary>Similar Plugin | 相似插件</summary>

	1. [anti-friendly_fire](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/anti-friendly_fire): shoot teammate = shoot yourself simple version
		> 簡單版反傷插件
	2. [anti-friendly_fire_V2](https://github.com/fbef0102/Game-Private_Plugin/tree/main/anti-friendly_fire_V2): shoot teammate = shoot yourself V2
		> 簡單版反傷插件，第二版本
</details>

* <details><summary>Changelog | 版本日誌</summary>

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
		* 受害者身上的'victim計數器'加1，victim計數器越多，受到傷害的傷害遞減減少
	* 當攻擊者造成太多次友傷，將會處死
	* 一秒後計算總友傷，然後反彈給攻擊者
	* 🟥切勿與其他會修改友傷的插件並用

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/anti-friendly_fire_RPG.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		l4d_rpg_friendly_fire_enable "1"

		// 傷害提示該如何顯示. (0: 不提示, 1: 聊天框, 2: 黑底白字框, 3: 螢幕正中間)
		l4d_rpg_ff_announce_type "2"

		// 雙方在此範圍內不會受到傷害 (0=關閉這項功能)
		l4d_rpg_friendly_fire_immune_range "30"

		// 受害者身上的victim計數器的預設值. (必須是正整數)
		l4d_rpg_friendly_fire_protect_divide "1"

		// 攻擊者身上的attack計數器的預設值. (是正整數)
		l4d_rpg_friendly_fire_damage_multi "1"

		// 為1時，近戰武器/電鋸 不會造成友傷
		l4d_rpg_friendly_fire_disable_melee "1"

		// 為1時，當攻擊者造成6次以上的友傷時，處死攻擊者 (預設: 6)
		l4d_rpg_friendly_fire_count_limit "6"

		// 為1時，當攻擊者造成100滴以上的友傷時，處死攻擊者 (預設: 100)
		l4d_rpg_friendly_fire_damage_limit "100"

		// 為1時，倒地玩家不會受到友傷
		l4d_rpg_friendly_fire_disable_incap "1"

		// 玩家進來的30秒內不會對其他人造成友傷 (0=關閉這項功能)
		l4d_rpg_friendly_fire_connect_player_disable_time "30"

		// 如果受害者正在處於無敵狀態，1=不受友傷, 0=受到友傷
		l4d_rpg_friendly_fire_ignore_godframe "1"

		// 為1時，Bots不會受傷
		l4d_rpg_friendly_fire_disable_bot "0"

		// 火焰友傷, 1=不算入計數器, 0=算入計數器
		l4d_rpg_friendly_fire_ignore_flame "1"

		// 土製炸彈、瓦斯桶、氧氣罐友傷, 1=不算入計數器, 0=算入計數器
		l4d_rpg_friendly_fire_ignore_exlode "1"

		// 榴彈發射器友傷, 1=不算入計數器, 0=算入計數器
		l4d_rpg_friendly_fire_ignore_GL "1"
		```
</details>
