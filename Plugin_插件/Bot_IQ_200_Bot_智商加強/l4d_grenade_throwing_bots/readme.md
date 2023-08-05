# Description | 內容
Allows Bots To Throw Grenades Themselves.

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/VzXO-AOm7YQ)

* Image | 圖示
	* Throw grenade at witch
		> 自動對Witch丟燃燒瓶
		<br/>![l4d_grenade_throwing_bots_1](image/l4d_grenade_throwing_bots_1.gif)

* Apply to | 適用於
	```
	L4D1
	L4D2
	```

* <details><summary>Changelog | 版本日誌</summary>

	```php
	//cravenge @ 2017
	//MasterMe @ 2020
	//HarryPotter @ 2022-2023
	```
	* v1.0h (2023-3-30)
		* Remake code, convert code to latest syntax
		* Fix warnings when compiling on SourceMod 1.11.
		* Optimize code and improve performance
		* Use left4dhooks
		* Add more function
			1. Bot will throw grenades when get hurt by common
			2. Bot will throw grenades when natural horde/event horde/alarm car coming
			3. Bot will throw grenades when a survivor player is covered in Boomer bile
			4. Target tank with grenades
			5. Target witch with grenades
			6. Disable grenade friendy fire from bot
			7. Time interval Bot will throw grenades again.

	* v1.9
		* [MasterMe's fork](https://forums.alliedmods.net/showpost.php?p=2722229&postcount=152)

	* v1.7
		* [Original plugin By DingbatFlat](https://forums.alliedmods.net/showthread.php?t=296150)
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)

* Related Plugin | 相關插件
	1. [Gear Transfer by Silvers](https://forums.alliedmods.net/showthread.php?t=137616): Allows items (molotov,pipebomb,vomitjar,defibrillator,first aid,explosive & incendiary rounds) to be transferred. Bots can auto give/grab items.
		> AI Bot會自己撿起地上的投擲物品與醫療物品並自動給予玩家

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_grenade_throwing_bots.cfg
		```php
		// Time interval Bot can throw grenade again.
		l4d_gtb_allow_grenade_again "5.0"

		// If 1, Allow bots to use bile.
		l4d_gtb_allowbile "1"

		// If 1, Allow bots to use molotov.
		l4d_gtb_allowmolotov "1"

		// If 1, Allow bots to use pipe.
		l4d_gtb_allowpipe "1"

		// If 1, disable grenade friendy fire from bot.
		l4d_gtb_block_damage_from_bot "1"

		// Time interval Bot will target tank with grenade again.
		l4d_gtb_targettank_again "15.0"

		// If 1, Target tank with bile, if bile grenade is allowed
		l4d_gtb_targettank_bile "1"

		// If 1, Target tank with molotov, if molotov grenade is allowed.
		l4d_gtb_targettank_molo "1"

		// Bot will target tank with grenade if tank is in this range.
		l4d_gtb_targettank_range "750.0"

		// Time interval Bot will target witch with grenade again.
		l4d_gtb_targetwitch_again "15.0"

		// If 1, Target witch with bile, if bile grenade is allowed
		l4d_gtb_targetwitch_bile "1"

		// If 1, Target witch with molotov, if molotov grenade is allowed.
		l4d_gtb_targetwitch_molo "1"

		// Bot will target witch with grenade if witch is in this range.
		l4d_gtb_targetwitch_range "750.0"

		// Time interval Bot will throw grenade again when get hurt by common.
		l4d_gtb_throw_common_again "15.0"

		// If 1, Bot will throw bile when get hurt by common, if bile grenade is allowed
		l4d_gtb_throw_common_bile "1"

		// If 1, Bot will throw Molo when get hurt by common, if molotov grenade is allowed.
		l4d_gtb_throw_common_molo "1"

		// Bot will throw grenade when get hurt by common if there are 'l4d_gtb_throw_common_number' numbers of commons are inside 'l4d_gtb_throw_common_range' ragne.
		l4d_gtb_throw_common_number "8"

		// If 1, Bot will throw pipe when get hurt by common, if pipebomb grenade is allowed.
		l4d_gtb_throw_common_pipe "1"

		// Bot will throw grenade when get hurt by common if there are 'l4d_gtb_throw_common_number' numbers of commons are inside 'l4d_gtb_throw_common_range' ragne.
		l4d_gtb_throw_common_range "150.0"

		// Time interval Bot will throw grenade again when natural horde/event horde/alarm car horde coming.
		l4d_gtb_throw_horde_again "10.0"

		// If 1, Bot will throw bile when natural horde/event horde/alarm car horde coming, if bile grenade is allowed
		l4d_gtb_throw_horde_bile "1"

		// Delay to throw grenade when natural horde/event horde/alarm car horde coming.
		l4d_gtb_throw_horde_delay "3.0"

		// If 1, Bot will throw Molo when natural horde/event horde/alarm car horde coming, if molotov grenade is allowed.
		l4d_gtb_throw_horde_molo "1"

		// If 1, Bot will throw pipe when natural horde/event horde/alarm car horde coming, if pipebomb grenade is allowed.
		l4d_gtb_throw_horde_pipe "1"

		// When natural horde/event horde/alarm car horde coming, Bot will throw grenade if any common is in this range.
		l4d_gtb_throw_horde_range "1500.0"

		// Time interval Bot will throw grenade again when a survivor player is covered in Boomer bile.
		l4d_gtb_throw_vomit_again "15.0"

		// If 1, Bot will throw bile when a survivor player is covered in Boomer bile, if bile grenade is allowed
		l4d_gtb_throw_vomit_bile "0"

		// Delay to throw grenade when a survivor player is covered in Boomer bile.
		l4d_gtb_throw_vomit_delay "5.0"

		// If 1, Bot will throw Molo when a survivor player is covered in Boomer bile, if molotov grenade is allowed.
		l4d_gtb_throw_vomit_molo "1"

		// If 1, Bot will throw pipe when a survivor player is covered in Boomer bile, if pipebomb grenade is allowed.
		l4d_gtb_throw_vomit_pipe "1"

		// When a survivor player is covered in Boomer bile, Bot will throw grenade if any common is in this range.
		l4d_gtb_throw_vomit_range "1000.0"
		```
</details>

* <details><summary>Command | 命令</summary>

	None
</details>

* When will bot throw grenades
	1. Get hurt by common
	2. Natural horde/Event horde/Alarm car horde coming
	3. A survivor player is covered in Boomer bile
	4. Tank approaching
	5. Witch nearby

- - - -
# 中文說明
AI Bot可以主動扔膽汁瓶、燃燒瓶、土製炸彈，提高智商不會亂丟

* 原理
	* Bot會在以下情況主動扔投擲物
		1. 被普通染者傷害到
		2. 自然屍潮/機關事件屍潮/警報車屍潮
		3. 有倖存者被Boomer噴到膽汁之時
		4. Tank接近中
		5. Witch在附近

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d_grenade_throwing_bots.cfg
		```php
		// Bot 五秒後才能再次扔投擲物.
		l4d_gtb_allow_grenade_again "5.0"

		// 為1時, 允許bot扔膽汁瓶
		l4d_gtb_allowbile "1"

		// 為1時, 允許bot扔燃燒瓶
		l4d_gtb_allowmolotov "1"

		// 為1時, 允許bot扔土製炸彈
		l4d_gtb_allowpipe "1"

		// 為1時, bot扔出去的投擲物不會造成友傷
		l4d_gtb_block_damage_from_bot "1"

		// Bot 15秒後才能再次對Tank扔投擲物.
		l4d_gtb_targettank_again "15.0"

		// 為1時, 允許bot對Tank扔膽汁瓶 (l4d_gtb_allowbile 要為 1)
		l4d_gtb_targettank_bile "1"

		// 為1時, 允許bot對Tank扔燃燒瓶 (l4d_gtb_allowmolotov 要為 1)
		l4d_gtb_targettank_molo "1"

		// 當Tank接近750視野範圍內bot才能扔投擲物
		l4d_gtb_targettank_range "750.0"

		// Bot 15秒後才能再次對Witch扔投擲物.
		l4d_gtb_targetwitch_again "15.0"

		// 為1時, 允許bot對Witch扔膽汁瓶 (l4d_gtb_allowbile 要為 1)
		l4d_gtb_targetwitch_bile "1"

		// 為1時, 允許bot對Witch扔燃燒瓶 (l4d_gtb_allowmolotov 要為 1)
		l4d_gtb_targetwitch_molo "1"

		// 為1時, 允許bot對Witch扔土製炸彈 (l4d_gtb_allowpipe 要為 1)
		l4d_gtb_throw_common_pipe "1"

		// 當Witch接近750視野範圍內bot才能扔投擲物
		l4d_gtb_targetwitch_range "750.0"

		// Bot 15秒後才能再次對普通感染者扔投擲物.
		l4d_gtb_throw_common_again "15.0"

		// 為1時, 當bot被普通染者傷害到則扔膽汁瓶 (l4d_gtb_allowbile 要為 1)
		l4d_gtb_throw_common_bile "1"

		// 為1時, 當bot被普通染者傷害到則扔燃燒瓶 (l4d_gtb_allowbile 要為 1)
		l4d_gtb_throw_common_molo "1"

		// 當bot的周圍150視野範圍內有8隻普通感染者以上之時，允許Bot扔投擲物
		l4d_gtb_throw_common_number "8"
		l4d_gtb_throw_common_range "150.0"

		// Bot 10秒後才能再次對 "自然屍潮/機關事件屍潮/警報車屍潮" 扔投擲物
		l4d_gtb_throw_horde_again "10.0"

		// 為1時, 允許bot對 "自然屍潮/機關事件屍潮/警報車屍潮" 扔膽汁瓶 (l4d_gtb_allowbile 要為 1)
		l4d_gtb_throw_horde_bile "1"

		// 為1時, 允許bot對 "自然屍潮/機關事件屍潮/警報車屍潮" 扔燃燒瓶 (l4d_gtb_allowmolotov 要為 1)
		l4d_gtb_throw_horde_molo "1"

		// 為1時, 允許bot對 "自然屍潮/機關事件屍潮/警報車屍潮" 扔土製炸彈 (l4d_gtb_allowpipe 要為 1)
		l4d_gtb_throw_horde_pipe "1"

		// "自然屍潮/機關事件屍潮/警報車屍潮" 來臨時三秒後，Bot才會扔投擲物
		l4d_gtb_throw_horde_delay "3.0"

		// "自然屍潮/機關事件屍潮/警報車屍潮" 來臨時，有普通感染者進入1500視野範圍之內，Bot才會扔投擲物
		l4d_gtb_throw_horde_range "1500.0"

		// Bot 15秒後才能再次對 "有倖存者被Boomer噴" 扔投擲物
		l4d_gtb_throw_vomit_again "15.0"

		// 為1時, 允許bot對 "有倖存者被Boomer噴" 扔膽汁瓶 (l4d_gtb_allowbile 要為 1)
		l4d_gtb_throw_vomit_bile "0"

		// 為1時, 允許bot對 "有倖存者被Boomer噴" 扔燃燒瓶 (l4d_gtb_allowmolotov 要為 1)
		l4d_gtb_throw_vomit_molo "1"

		// 為1時, 允許bot對 "有倖存者被Boomer噴" 扔土製炸彈 (l4d_gtb_allowpipe 要為 1)
		l4d_gtb_throw_vomit_pipe "1"

		// "倖存者被Boomer噴" 五秒後，Bot才會扔投擲物
		l4d_gtb_throw_vomit_delay "5.0"

		// "倖存者被Boomer噴" 時，有普通感染者進入1000視野範圍之內，Bot才會扔投擲物
		l4d_gtb_throw_vomit_range "1000.0"
		```
</details>
