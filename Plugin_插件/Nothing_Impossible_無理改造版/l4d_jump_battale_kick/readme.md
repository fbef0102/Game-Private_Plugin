# Description | 內容
Survivor press WALK+JUMP to do the battle kick, stagger back all S.I. and Witch

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/4XczMQad3RE)

* Image | 圖示
	<br/>![l4d_jump_battale_kick_1](image/l4d_jump_battale_kick_1.gif)
	<br/>![l4d_jump_battale_kick_2](image/l4d_jump_battale_kick_2.gif)
	<br/>![l4d_jump_battale_kick_3](image/l4d_jump_battale_kick_3.gif)
	<br/>![l4d_jump_battale_kick_4](image/l4d_jump_battale_kick_4.gif)
	<br/>![l4d_jump_battale_kick_5](image/l4d_jump_battale_kick_5.gif)
	<br/>![l4d_jump_battale_kick_6](image/l4d_jump_battale_kick_6.gif)

* <details><summary>How does it work?</summary>

	* Press ```WALK(Shift)+JUMP``` to do battle kick attack
		* Stagger back special infected and cause damage, inculding tank and witch
		* Stagger back teammate and cause damage
		* Kick physical prop or hittable car
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)

* <details><summary>ConVar | 指令</summary>

	* cfg\sourcemod\l4d_jump_battale_kick.cfg
		```php
		// 0=Plugin off, 1=Plugin on (Use WALK+JUMP).
		l4d_jump_battale_kick_enable "1"

		// Player with these flag can do battle kick (Empty=Everyone, -1=No one)
		l4d_jump_battale_kick_flags ""

		// Jump kick force
		l4d_jump_battale_kick_force "400.0"

		// How long before survivor can use Jump Kick again
		l4d_jump_battale_kick_delay "3.0"

		// How long survivor can not move after Jump Kick landing
		l4d_jump_battale_kick_stun "1.0"

		// How to jump kick Smoker, 1=Stagger, 2=Fly away, 0=Off
		l4d_jump_battale_kick_kick_smoker "2"

		// How to jump kick Boomer, 1=Stagger, 2=Fly away, 0=Off
		l4d_jump_battale_kick_kick_boomer "2"

		// How to jump kick Hunter, 1=Stagger, 2=Fly away, 0=Off
		l4d_jump_battale_kick_kick_hunter "2"

		// How to jump kick Spitter, 1=Stagger, 2=Fly away, 0=Off
		l4d_jump_battale_kick_kick_spitter "2"

		// How to jump kick Jockey, 1=Stagger, 2=Fly away, 0=Off
		l4d_jump_battale_kick_kick_jockey "2"

		// How to jump kick Charger, 1=Stagger, 2=Fly away, 0=Off
		l4d_jump_battale_kick_kick_charger "1"

		// How to jump kick Tank, 1=Stagger, 2=Fly away, 0=Off
		l4d_jump_battale_kick_kick_tank "2"

		// Jump kick Special Infected force (If Fly away)
		l4d_jump_battale_kick_kick_si_force "800"

		// If 1, can jump kick witch
		l4d_jump_battale_kick_kick_witch "1"

		// If 1, can jump kick teammate
		l4d_jump_battale_kick_kick_teammate "1"

		// If 1, can jump kick physical prop or hittable car
		l4d_jump_battale_kick_kick_prop "1"

		// Damage to special special infected
		l4d_jump_battale_kick_damage_si "40.0"

		// Damage to witch
		l4d_jump_battale_kick_damage_witch "100.0"

		// Damage to common infected
		l4d_jump_battale_kick_damage_common "50.0"

		// Damage to teammate
		l4d_jump_battale_kick_damage_teammate "2.0"

		// Jump kick physical prop or hittable car force
		l4d_jump_battale_kick_kick_prop_force "1000"
		```
</details>

* <details><summary>Command | 命令</summary>

	None
</details>

* Apply to | 適用於
	```
	L4D2
	```

* <details><summary>Changelog | 版本日誌</summary>

	* v1.1h (2024-8-9)
		* Jump kick now can make SI fly away instead of stagger
		* Update cvars

	* v1.0h (2024-8-1)
		* Remake code, convert code to latest syntax
		* Fix warnings when compiling on SourceMod 1.11.
		* Optimize code and improve performance
		* Require left4dhooks
		* Add more cvars

	* v1.0h (2024-8-1)
		* [Original Plugin by panxiaohai](https://forums.alliedmods.net/showthread.php?t=200129)
</details>

- - - -
# 中文說明
人類按下 WALK+JUMP 可以使出飛踢攻擊，擊退所有特感與Ｗitch

* 原理
	* 人類按下 ```WALK(Shift)+JUMP``` 鍵可以使出飛踢攻擊
		* 擊退所有特感、Tank、Ｗitch並造成傷害
		* 震開隊友並造成傷害
		* 能夠踢走任何車子或物件

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg\sourcemod\l4d_jump_battale_kick.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		l4d_jump_battale_kick_enable "1"

		// 擁有這些權限的玩家，才可以使出飛踢攻擊 (留白 = 任何人都能, -1: 無人)
		l4d_jump_battale_kick_flags ""

		// 飛踢力道
		l4d_jump_battale_kick_force "400.0"

		// 飛踢的CD冷卻時間
		l4d_jump_battale_kick_delay "3.0"

		// 飛踢時不能移動的時間
		l4d_jump_battale_kick_stun "1.0"

		// 如何踢飛Smoker 1=震退, 2=擊飛很遠 0=關閉這項功能
		l4d_jump_battale_kick_kick_smoker "2"

		// 如何踢飛Boomer 1=震退, 2=擊飛很遠 0=關閉這項功能
		l4d_jump_battale_kick_kick_boomer "2"

		// 如何踢飛Hunter 1=震退, 2=擊飛很遠 0=關閉這項功能
		l4d_jump_battale_kick_kick_hunter "2"

		// 如何踢飛Spitter 1=震退, 2=擊飛很遠 0=關閉這項功能
		l4d_jump_battale_kick_kick_spitter "2"

		// 如何踢飛Jockey 1=震退, 2=擊飛很遠 0=關閉這項功能
		l4d_jump_battale_kick_kick_jockey "2"

		// 如何踢飛Charger 1=震退, 2=擊飛很遠 0=關閉這項功能
		l4d_jump_battale_kick_kick_charger "1"

		// 如何踢飛Tank 1=震退, 2=擊飛很遠 0=關閉這項功能
		l4d_jump_battale_kick_kick_tank "2"

		// 擊飛特感的力道 (如果是擊飛效果)
		l4d_jump_battale_kick_kick_si_force "800"

		// 為1時，可以飛踢擊退Witch
		l4d_jump_battale_kick_kick_witch "1"

		// 為1時，可以飛踢震開隊友
		l4d_jump_battale_kick_kick_teammate "1"

		// 為1時，可以飛踢踢走任何車子或物件
		l4d_jump_battale_kick_kick_prop "1"

		// 飛踢特感所造成的傷害
		l4d_jump_battale_kick_damage_si "40.0"

		// 飛踢Witch所造成的傷害
		l4d_jump_battale_kick_damage_witch "100.0"

		// 飛踢普通感染者所造成的傷害
		l4d_jump_battale_kick_damage_common "50.0"

		// 飛踢隊友所造成的傷害
		l4d_jump_battale_kick_damage_teammate "2.0"

		// 飛踢任何車子或物件的力道
		l4d_jump_battale_kick_kick_prop_force "1000"
		```
</details>