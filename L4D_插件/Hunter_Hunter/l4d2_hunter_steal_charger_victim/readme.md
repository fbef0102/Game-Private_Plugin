# Description | 內容
The hunter can pounce on the charger's victim.

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Apply to | 適用於
	```
	L4D2
	```

* Image | 圖示
	<br/>![l4d2_hunter_steal_charger_victim_1](image/l4d2_hunter_steal_charger_victim_1.gif)
	<br/>![l4d2_hunter_steal_charger_victim_2](image/l4d2_hunter_steal_charger_victim_2.gif)
	<br/>![l4d2_hunter_steal_charger_victim_3](image/l4d2_hunter_steal_charger_victim_3.gif)

* <details><summary>How does it work?</summary>

	* Hunter can pounce the survivor whom charger is carrying with
	* Hunter can pounce the survivor whom charger is Pummeling
	* Hunter can still do high damage pounce when land on survivor
	* Also apply to AI hunter
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d2_hunter_steal_charger_victim.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d2_hunter_steal_charger_victim_enable "1"

		// If 1, Removes god frame when hunter pounce on the charger's survivor. (So damage pounce can still work on survivor)
		l4d2_hunter_steal_charger_victim_remove_godframe "1"

		// If 1, Reset Charger's ability when hunter pounce on the charger's survivor
		l4d2_hunter_steal_charger_victim_reset_ability "1"
		```
</details>

* <details><summary>Related Plugin | 相關插件</summary>

	1. [l4d2_getup_fixes](https://github.com/SirPlease/L4D2-Competitive-Rework/blob/master/addons/sourcemod/scripting/l4d2_getup_fixes.sp): Fixes all double/missing get-up cases.
		* 修復倖存者被撞又被撲的混亂動畫
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.0 (2024-8-11)
		* Initial Release
</details>

- - - -
# 中文說明
Hunter可以搶走Charger正在控的倖存者

* 原理
	* Hunter可以撲Charger正在衝撞的倖存者
	* Hunter依然會有高撲傷害
	* 也適用於AI Hunter

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d2_hunter_steal_charger_victim.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		l4d2_hunter_steal_charger_victim_enable "1"

		// 為1時，當Hunter搶走Charger正在控的倖存者時，移除受害者的無敵狀態 (高撲傷害可以成立)
		l4d2_hunter_steal_charger_victim_remove_godframe "1"

		// 為1時，當Hunter搶走Charger正在控的倖存者時，重置Charger的能力CD
		l4d2_hunter_steal_charger_victim_reset_ability "1"
		```
</details>