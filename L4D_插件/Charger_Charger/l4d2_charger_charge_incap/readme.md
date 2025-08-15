# Description | 內容
The charger is able to carry any incapacitated player and fling any incapacitated player

> __Note__ <br/>
This plugin is private, Please contact [me](/#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](/#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/2EOpXBKgnxE)

* Image | 圖示
	<br/>![l4d2_charger_charge_incap_1](image/l4d2_charger_charge_incap_1.gif)
	<br/>![l4d2_charger_charge_incap_2](image/l4d2_charger_charge_incap_2.gif)

* <details><summary>How does it work?</summary>

	* Charger can carry any incapacitated player
	* Charger can impact any incapacitated player during charging
	* By default, AI Chargers won't target incapacitated survivors
		* You install [Target Override](https://forums.alliedmods.net/showthread.php?p=2688165): Make AI Chargers target incapacitated survivors
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d2_charger_charge_incap.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d2_charger_charge_incap_enable "1"
		```
</details>

* <details><summary>Command | 命令</summary>

	None
</details>

* Apply to | 適用於
	```
	L4D2
	```

* <details><summary>Related Plugin | 相關插件</summary>

	1. [l4d2_charger_grab](/L4D_插件/Charger_Charger/l4d2_charger_grab): The Charger can grab survivor and drop
		> Charger可以徒手抓住人類趴趴走 (Bot 也適用)
	2. [l4d2_charger_unstoppable](/L4D_插件/Charger_Charger/l4d2_charger_unstoppable): Adds a lot of abilities and powers to the Charger to become unstoppable titan.
		> 增強Charger，賦予多種超能力成為無人能檔的雷神 (Bot 也適用)
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.4 (2023-12-22)
		* Improve code

	* v1.1 (2023-7-11)
		* Require left4dhooks v1.34 or above

	* v1.0
		* Initial Release
</details>

- - - -
# 中文說明
Charger可以衝撞帶走倒地的倖存者並撞倒他們

* 原理
	* 衝刺期間能夠抓起倒地玩家
	* 衝刺期間可以撞飛倒地玩家
	* AI Charger也適用，但AI Charger不會主動去撞倒地的玩家
		* 可安裝 [Target Override](https://forums.alliedmods.net/showthread.php?p=2688165): 能使AI Charger主動撞倒地的倖存者

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d2_charger_charge_incap.cfg
		```php
		// 0=關閉插件, 1=開啟插件
		l4d2_charger_charge_incap_enable "1"
		```
</details>