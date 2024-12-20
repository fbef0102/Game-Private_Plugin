# Description | 內容
Modify damage done to survivors from Tank, SI, Witch, Common, Fall

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/coMcm3INpuQ)

* Image | 圖示
<br/>None

* Require | 必要安裝
<br/>None

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_survivor_damage_modify.cfg
		```php
		// Enable gun damage modify plugin. [0-Disable,1-Enable]
		l4d2_survivor_damage_modify_enable "1"

		// If 1, Enable damage modify to hanging from ledge AI survivor player from Tank/Witch/S.I./common.
		l4d_survivor_damage_modify_AI_hanging_enable "1"

		// Modfiy Damage done to hanging from ledge AI survivor player from S.I. multi.
		l4d_survivor_damage_modify_AI_hanging_SI_multi "1.0"

		// Modfiy Damage done to hanging from ledge AI survivor player from Common Infected multi.
		l4d_survivor_damage_modify_AI_hanging_common_multi "1.0"

		// Modfiy Damage done to hanging from ledge AI survivor player from Tank multi.
		l4d_survivor_damage_modify_AI_hanging_tank_multi "1.0"

		// Modfiy Damage done to hanging from ledge AI survivor player from Witch multi.
		l4d_survivor_damage_modify_AI_hanging_witch_multi "1.0"

		// If 1, Enable damage modify to incapacitated AI survivor player from Tank/Witch/S.I./common.
		l4d_survivor_damage_modify_AI_incap_enable "1"

		// Modfiy Damage done to incapacitated AI survivor player from S.I. multi.
		l4d_survivor_damage_modify_AI_incap_SI_multi "1.0"

		// Modfiy Damage done to incapacitated AI survivor player from Common Infected multi.
		l4d_survivor_damage_modify_AI_incap_common_multi "1.0"

		// Modfiy Damage done to incapacitated AI survivor player from fall multi.
		l4d_survivor_damage_modify_AI_incap_fall_multi "1.0"

		// Modfiy Damage done to incapacitated AI survivor player from Tank multi.
		l4d_survivor_damage_modify_AI_incap_tank_multi "1.0"

		// Modfiy Damage done to incapacitated AI survivor player from Witch multi.
		l4d_survivor_damage_modify_AI_incap_witch_multi "1.0"

		// If 1, Enable damage modify to standing AI survivor player from Tank/Witch/S.I./common.
		l4d_survivor_damage_modify_AI_stand_enable "1"

		// Modfiy Damage done to standing AI survivor player from S.I. multi.
		l4d_survivor_damage_modify_AI_stand_SI_multi "1.0"

		// Modfiy Damage done to standing AI survivor player from Common Infected multi.
		l4d_survivor_damage_modify_AI_stand_common_multi "1.0"

		// Modfiy Damage done to standing AI survivor player from fall multi.
		l4d_survivor_damage_modify_AI_stand_fall_multi "1.0"

		// Modfiy Damage done to standing AI survivor player from Tank multi.
		l4d_survivor_damage_modify_AI_stand_tank_multi "1.0"

		// Modfiy Damage done to standing AI survivor player from Witch multi.
		l4d_survivor_damage_modify_AI_stand_witch_multi "1.0"

		// If 1, Enable damage modify to hanging from ledge human survivor player from Tank/Witch/S.I./common.
		l4d_survivor_damage_modify_human_hanging_enable "1"

		// Modfiy Damage done to hanging from ledge human survivor player from S.I. multi.
		l4d_survivor_damage_modify_human_hanging_SI_multi "1.0"

		// Modfiy Damage done to hanging from ledge human survivor player from Common Infected multi.
		l4d_survivor_damage_modify_human_hanging_common_multi "1.0"

		// Modfiy Damage done to hanging from ledge human survivor player from Tank multi.
		l4d_survivor_damage_modify_human_hanging_tank_multi "1.0"

		// Modfiy Damage done to hanging from ledge human survivor player from Witch multi.
		l4d_survivor_damage_modify_human_hanging_witch_multi "1.0"

		// If 1, Enable damage modify to incapacitated human survivor player from Tank/Witch/S.I./common.
		l4d_survivor_damage_modify_human_incap_enable "1"

		// Modfiy Damage done to incapacitated human survivor player from S.I. multi.
		l4d_survivor_damage_modify_human_incap_SI_multi "1.0"

		// Modfiy Damage done to incapacitated human survivor player from Common Infected multi.
		l4d_survivor_damage_modify_human_incap_common_multi "1.0"

		// Modfiy Damage done to incapacitated human survivor player from fall multi.
		l4d_survivor_damage_modify_human_incap_fall_multi "1.0"

		// Modfiy Damage done to incapacitated human survivor player from Tank multi.
		l4d_survivor_damage_modify_human_incap_tank_multi "1.0"

		// Modfiy Damage done to incapacitated human survivor player from Witch multi.
		l4d_survivor_damage_modify_human_incap_witch_multi "1.0"

		// If 1, Enable damage modify to standing human survivor player from Tank/Witch/S.I./common.
		l4d_survivor_damage_modify_human_stand_enable "1"

		// Modfiy Damage done to standing human survivor player from S.I. multi.
		l4d_survivor_damage_modify_human_stand_SI_multi "1.0"

		// Modfiy Damage done to standing human survivor player from Common Infected multi.
		l4d_survivor_damage_modify_human_stand_common_multi "1.0"

		// Modfiy Damage done to standing human survivor player from fall multi.
		l4d_survivor_damage_modify_human_stand_fall_multi "1.0"

		// Modfiy Damage done to standing human survivor player from Tank multi.
		l4d_survivor_damage_modify_human_stand_tank_multi "1.0"

		// Modfiy Damage done to standing human survivor player from Witch multi.
		l4d_survivor_damage_modify_human_stand_witch_multi "1.0"
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

* <details><summary>Related | 相關插件</summary>

	1. [anti-friendly_fire_RPG](/L4D_插件/Anti_Griefer_防惡意路人/anti-friendly_fire_RPG): shoot teammate = shoot yourself RPG
		> 反傷插件，但是有更多的RPG功能

	2. [l4d2_gun_damage_modify](https://github.com/fbef0102/L4D2-Plugins/tree/master/l4d2_gun_damage_modify): Modify every weapon damage done to Tank, SI, Witch, Common including melee in l4d2
		> 修改槍械傷害比和近戰武器傷害比的插件
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.0
	    * Initial Release
</details>

- - - -
# 中文說明
傷害比例調整插件，可自行調整 Tank/Witch/特感/小殭屍/跳樓 對人類造成的傷害比

* 功能
	* 可調整人類所有傷害比，也可以設置成完全不受到傷害
	* 可調整倒地受傷害比以及掛邊的受傷害比

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d_survivor_damage_modify.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		l4d2_survivor_damage_modify_enable "1"

		// 為1時，修改掛邊的Bot倖存者受到的傷害
		l4d_survivor_damage_modify_AI_hanging_enable "1"

		// 修改特感對掛邊的Bot倖存者傷害比. (0=無傷)
		l4d_survivor_damage_modify_AI_hanging_SI_multi "1.0"

		// 修改普通感染者對掛邊的Bot倖存者傷害比. (0=無傷)
		l4d_survivor_damage_modify_AI_hanging_common_multi "1.0"

		// 修改Tank對掛邊的Bot倖存者傷害比. (0=無傷)
		l4d_survivor_damage_modify_AI_hanging_tank_multi "1.0"

		// 修改Witch對掛邊的Bot倖存者傷害比. (0=無傷)
		l4d_survivor_damage_modify_AI_hanging_witch_multi "1.0"

		// 為1時，修改倒地的Bot倖存者受到的傷害
		l4d_survivor_damage_modify_AI_incap_enable "1"

		// 修改特感對倒地的Bot倖存者傷害比. (0=無傷)
		l4d_survivor_damage_modify_AI_incap_SI_multi "1.0"

		// 修改普通感染者對倒地的Bot倖存者傷害比. (0=無傷)
		l4d_survivor_damage_modify_AI_incap_common_multi "1.0"

		// 修改墬樓傷害對倒地的Bot倖存者傷害比. (0=無傷)
		l4d_survivor_damage_modify_AI_incap_fall_multi "1.0"

		// 修改Tank對倒地的Bot倖存者傷害比. (0=無傷)
		l4d_survivor_damage_modify_AI_incap_tank_multi "1.0"

		// 修改Witch對倒地的Bot倖存者傷害比. (0=無傷)
		l4d_survivor_damage_modify_AI_incap_witch_multi "1.0"

		// 為1時，修改站立的Bot倖存者受到的傷害
		l4d_survivor_damage_modify_AI_stand_enable "1"

		// 修改特感對站立的Bot倖存者傷害比. (0=無傷)
		l4d_survivor_damage_modify_AI_stand_SI_multi "1.0"

		// 修改普通感染者對站立的Bot倖存者傷害比. (0=無傷)
		l4d_survivor_damage_modify_AI_stand_common_multi "1.0"

		// 修改墬樓傷害對站立的Bot倖存者傷害比. (0=無傷)
		l4d_survivor_damage_modify_AI_stand_fall_multi "1.0"

		// 修改Tank對站立的Bot倖存者傷害比. (0=無傷)
		l4d_survivor_damage_modify_AI_stand_tank_multi "1.0"

		// 修改Witch對站立的Bot倖存者傷害比. (0=無傷)
		l4d_survivor_damage_modify_AI_stand_witch_multi "1.0"

		// 為1時，修改掛邊的真人倖存者受到的傷害
		l4d_survivor_damage_modify_human_hanging_enable "1"

		// 修改特感對掛邊的真人倖存者傷害比. (0=無傷)
		l4d_survivor_damage_modify_human_hanging_SI_multi "1.0"

		// 改普通感染者對掛邊的真人倖存者傷害比. (0=無傷)
		l4d_survivor_damage_modify_human_hanging_common_multi "1.0"

		// 修改Tank對掛邊的真人倖存者傷害比. (0=無傷)
		l4d_survivor_damage_modify_human_hanging_tank_multi "1.0"

		// 修改Witch對掛邊的真人倖存者傷害比. (0=無傷)
		l4d_survivor_damage_modify_human_hanging_witch_multi "1.0"

		// 為1時，修改倒地的真人倖存者受到的傷害
		l4d_survivor_damage_modify_human_incap_enable "1"

		// 修改特感對倒地的真人倖存者傷害比. (0=無傷)
		l4d_survivor_damage_modify_human_incap_SI_multi "1.0"

		// 修改普通感染者對倒地的真人倖存者傷害比. (0=無傷)
		l4d_survivor_damage_modify_human_incap_common_multi "1.0"

		// 修改墬樓傷害對倒地的真人倖存者傷害比. (0=無傷)
		l4d_survivor_damage_modify_human_incap_fall_multi "1.0"

		// 修改Tank對倒地的真人倖存者傷害比. (0=無傷)
		l4d_survivor_damage_modify_human_incap_tank_multi "1.0"

		// 修改Witch對倒地的真人倖存者傷害比. (0=無傷)
		l4d_survivor_damage_modify_human_incap_witch_multi "1.0"

		// 為1時，修改站立的真人倖倖存者受到的傷害
		l4d_survivor_damage_modify_human_stand_enable "1"

		// 修改特感對站立的真人倖存者傷害比. (0=無傷)
		l4d_survivor_damage_modify_human_stand_SI_multi "1.0"

		// 修改普通感染者對站立的真人倖存者傷害比. (0=無傷)
		l4d_survivor_damage_modify_human_stand_common_multi "1.0"

		// 修改墬樓傷害對站立的真人倖存者傷害比. (0=無傷)
		l4d_survivor_damage_modify_human_stand_fall_multi "1.0"

		// 修改Tank對站立的真人倖存者傷害比. (0=無傷)
		l4d_survivor_damage_modify_human_stand_tank_multi "1.0"

		// 修改Witch對站立的真人倖存者傷害比. (0=無傷)
		l4d_survivor_damage_modify_human_stand_witch_multi "1.0"
		```
</details>
