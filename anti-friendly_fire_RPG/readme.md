# Description | 內容
shoot teammate = shoot yourself RPG

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/eBcvlDVxPVk)

* Apply to | 適用於
```
L4D1
L4D2
```

* Changelog | 版本日誌
```
v1.5
```

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)

<details>
<summary>ConVar (Click to expand!) 指令 (點我展開)</summary>

* cfg/sourcemod/anti-friendly_fire_RPG.cfg
	```php
	// Changes how ff announce displays FF damage. (1:In chat; 2: In Hint Box; 3: In center text)
	l4d_rpg_ff_announce_type "2"

	// If attacker is a new player who just joins the server, time in seconds to disable ff damage from him. (0=Off)
	l4d_rpg_friendly_fire_connect_player_disable_time "30"

	// If 1, kill attacker if he reaches ff counter limit. (Default: 6)
	l4d_rpg_friendly_fire_count_limit "6"

	// If 1, kill attacker if his reaches ff damage limit. (Default: 100)
	l4d_rpg_friendly_fire_damage_limit "100"

	// Attack multiplier default for attacker. (Must be Integer)
	l4d_rpg_friendly_fire_damage_multi "1"

	// If 1, Disable ff damage to Bot.
	l4d_rpg_friendly_fire_disable_bot "0"

	// If 1, Disable ff damage to Incap player
	l4d_rpg_friendly_fire_disable_incap "1"

	// If 1, Disable ff damage with melee weapons.
	l4d_rpg_friendly_fire_disable_melee "1"

	// If 1, Enable anti-friendly_fire RPG plugin.
	l4d_rpg_friendly_fire_enable "1"

	// FF Pipe Bomb, Propane Tank, and Oxygen Tank damage to player, 1=game default behavior, 0=apply this plugin
	l4d_rpg_friendly_fire_ignore_exlode "1"

	// FF flame damage to player, 1=game default behavior, 0=apply this plugin
	l4d_rpg_friendly_fire_ignore_flame "1"

	// FF damage to GodFrame player, 1=game default behavior, 0=apply this plugin
	l4d_rpg_friendly_fire_ignore_godframe "1"

	// How much distance range between attacker and victim are immune to ff. (0=Off)
	l4d_rpg_friendly_fire_immune_range "30"

	// Protect divisor default for victim. (Must be Integer)
	l4d_rpg_friendly_fire_protect_divide "1"
	```
</details>

<details>
<summary>Command (Click to expand!) | 指令 (點我展開)</summary>
None
</details>

- - - -
# 中文說明
反傷插件，但是有更多的RPG功能

* 功能
	1. 過一段時間總計算友傷，然後反彈給攻擊者
	2. 倒地者不受到友傷
	3. 近戰武器不造成友傷
	4. 剛進來的玩家一段時間內不能造成友傷
	5. 與隊友太近不會造成友傷
	6. 超過友傷次數處死攻擊者
	7. 造成友傷過大處死攻擊者
	8. 造成友傷的次數越多次，反彈給攻擊者的傷害越大
	9. 受到友傷的次數越多次，下次承受的友傷越小
	10. 火焰跟爆炸友傷能忽略

* 原理
<br/>攻擊隊友會在攻擊者身上產生計數器加１，
當每次對隊友造成傷害時，倍數反彈給自己的傷害，而隊友受到傷害的傷害遞減減少