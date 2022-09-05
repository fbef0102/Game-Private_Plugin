# Description | 內容
 Modify damage done to survivors from Tank, SI, Witch, Common

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/FX56ce89cM0)

* Image | 圖示
<br/>None

* Apply to | 適用於
```
L4D1
L4D2
```

* Changelog | 版本日誌
```
v1.0
```

* Require | 必要安裝
<br/>None

* Related | 相關插件
1. [anti-friendly_fire_RPG](https://github.com/fbef0102/Game-Private_Plugin/tree/main/anti-friendly_fire_RPG): shoot teammate = shoot yourself RPG
	* 反傷插件，但是有更多的RPG功能

2. [l4d2_gun_damage_modify](https://github.com/fbef0102/L4D2-Plugins/tree/master/l4d2_gun_damage_modify): Modify every weapon damage done to Tank, SI, Witch, Common including melee in l4d2
	* 修改槍械傷害比和近戰武器傷害比的插件

<details>
<summary>ConVar (Click to expand!) 指令 (點我展開)</summary>

* cfg/sourcemod/l4d2_survivor_damage_modify.cfg
	```php
	// Enable gun damage modify plugin. [0-Disable,1-Enable]
	l4d2_survivor_damage_modify_enable "1"

	// Modfiy Damage done to hanging from ledge AI survivor player from S.I. multi.
	l4d_survivor_damage_modify_AI_hanging_SI_multi "1.0"

	// Modfiy Damage done to hanging from ledge AI survivor player from Common Infected multi.
	l4d_survivor_damage_modify_AI_hanging_common_multi "1.0"

	// If 1, Enable damage modify to hanging from ledge AI survivor player from Tank/Witch/S.I./common.
	l4d_survivor_damage_modify_AI_hanging_enable "1"

	// Modfiy Damage done to hanging from ledge AI survivor player from Tank multi.
	l4d_survivor_damage_modify_AI_hanging_tank_multi "1.0"

	// Modfiy Damage done to hanging from ledge AI survivor player from Witch multi.
	l4d_survivor_damage_modify_AI_hanging_witch_multi "1.0"

	// Modfiy Damage done to incapacitated AI survivor player from S.I. multi.
	l4d_survivor_damage_modify_AI_incap_SI_multi "1.0"

	// Modfiy Damage done to incapacitated AI survivor player from Common Infected multi.
	l4d_survivor_damage_modify_AI_incap_common_multi "1.0"

	// If 1, Enable damage modify to incapacitated AI survivor player from Tank/Witch/S.I./common.
	l4d_survivor_damage_modify_AI_incap_enable "1"

	// Modfiy Damage done to incapacitated AI survivor player from Tank multi.
	l4d_survivor_damage_modify_AI_incap_tank_multi "1.0"

	// Modfiy Damage done to incapacitated AI survivor player from Witch multi.
	l4d_survivor_damage_modify_AI_incap_witch_multi "1.0"

	// Modfiy Damage done to standing AI survivor player from S.I. multi.
	l4d_survivor_damage_modify_AI_stand_SI_multi "1.0"

	// Modfiy Damage done to standing AI survivor player from Common Infected multi.
	l4d_survivor_damage_modify_AI_stand_common_multi "1.0"

	// If 1, Enable damage modify to standing AI survivor player from Tank/Witch/S.I./common.
	l4d_survivor_damage_modify_AI_stand_enable "1"

	// Modfiy Damage done to standing AI survivor player from Tank multi.
	l4d_survivor_damage_modify_AI_stand_tank_multi "1.0"

	// Modfiy Damage done to standing AI survivor player from Witch multi.
	l4d_survivor_damage_modify_AI_stand_witch_multi "1.0"

	// Modfiy Damage done to hanging from ledge human survivor player from S.I. multi.
	l4d_survivor_damage_modify_human_hanging_SI_multi "1.0"

	// Modfiy Damage done to hanging from ledge human survivor player from Common Infected multi.
	l4d_survivor_damage_modify_human_hanging_common_multi "1.0"

	// If 1, Enable damage modify to hanging from ledge human survivor player from Tank/Witch/S.I./common.
	l4d_survivor_damage_modify_human_hanging_enable "1"

	// Modfiy Damage done to hanging from ledge human survivor player from Tank multi.
	l4d_survivor_damage_modify_human_hanging_tank_multi "1.0"

	// Modfiy Damage done to hanging from ledge human survivor player from Witch multi.
	l4d_survivor_damage_modify_human_hanging_witch_multi "1.0"

	// Modfiy Damage done to incapacitated human survivor player from S.I. multi.
	l4d_survivor_damage_modify_human_incap_SI_multi "1.0"

	// Modfiy Damage done to incapacitated human survivor player from Common Infected multi.
	l4d_survivor_damage_modify_human_incap_common_multi "1.0"

	// If 1, Enable damage modify to incapacitated human survivor player from Tank/Witch/S.I./common.
	l4d_survivor_damage_modify_human_incap_enable "1"

	// Modfiy Damage done to incapacitated human survivor player from Tank multi.
	l4d_survivor_damage_modify_human_incap_tank_multi "1.0"

	// Modfiy Damage done to incapacitated human survivor player from Witch multi.
	l4d_survivor_damage_modify_human_incap_witch_multi "1.0"

	// Modfiy Damage done to standing human survivor player from S.I. multi.
	l4d_survivor_damage_modify_human_stand_SI_multi "1.0"

	// Modfiy Damage done to standing human survivor player from Common Infected multi.
	l4d_survivor_damage_modify_human_stand_common_multi "1.0"

	// If 1, Enable damage modify to standing human survivor player from Tank/Witch/S.I./common.
	l4d_survivor_damage_modify_human_stand_enable "1"

	// Modfiy Damage done to standing human survivor player from Tank multi.
	l4d_survivor_damage_modify_human_stand_tank_multi "1.0"

	// Modfiy Damage done to standing human survivor player from Witch multi.
	l4d_survivor_damage_modify_human_stand_witch_multi "1.0"
	```
</details>

<details>
<summary>Command (Click to expand!) | 命令 (點我展開)</summary>

<br/>None
</details>

- - - -
# 中文說明
傷害保護插件，可自行調整 Tank/Witch/特感/小殭屍 對人類造成的傷害比

* 功能
	1. 可調整所有傷害比，也可以設置成完全不受到傷害
	2. 可調整倒地受傷害比以及掛邊的受傷害比