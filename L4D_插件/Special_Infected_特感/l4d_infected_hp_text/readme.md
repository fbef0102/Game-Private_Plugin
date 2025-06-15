# Description | 內容
Display health bar text of Special Infected to attacker

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Apply to | 適用於
	```
	L4D1
	L4D2
	```

* Image | 圖示
	<br/>![l4d_infected_hp_text_1](image/l4d_infected_hp_text_1.gif)
	<br/>![l4d_infected_hp_text_2](image/l4d_infected_hp_text_2.gif)
	<br/>![l4d_infected_hp_text_3](image/l4d_infected_hp_text_3.gif)

* <details><summary>How does it work?</summary>

	* Shows the health bar of infected on attacker's screen when injured.
	* Only the attacker can see.
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_infected_hp_text.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d_infected_hp_text_enable "1"

		// Length of health bar
		// def:100 / min:10 / max:200
		l4d_infected_hp_text_bar_length "100"

		// Symbol for health remaining
		l4d_infected_hp_text_bar_symbol "#"

		// Symbol for health lose
		l4d_infected_hp_text_damage_symbol "="

		// How health bar text displays
		// 0: In Hint Box, 1: In center text
		l4d_infected_hp_text_type "1"

		// If 1, Display health value on health bar
		l4d_infected_hp_text_number "1"

		// If 1, Show Smoker health bar
		l4d_infected_hp_text_smoker_show "1"

		// If 1, Show Boomer health bar
		l4d_infected_hp_text_boomer_show "1"

		// If 1, Show Hunter health bar
		l4d_infected_hp_text_hunter_show "1"

		// If 1, Show Spitter health bar
		l4d_infected_hp_text_spitter "1"

		// If 1, Show Jockey health bar
		l4d_infected_hp_text_jockey_show "1"

		// If 1, Show Charger health bar
		l4d_infected_hp_text_charger_show "1"

		// If 1, Show Tank health bar
		l4d_infected_hp_text_tank_show "1"

		// If 1, Show Witch health bar
		l4d_infected_hp_text_witch_show "1"
		```
</details>

* Translation Support | 支援翻譯
	```
	translations/l4d_infected_hp_text.phrases.txt
	```

* <details><summary>Related Plugin | 相關插件</summary>

	1. [l4d2_infected_hp_hint](/L4D_插件/Special_Infected_特感/l4d2_infected_hp_hint): Display corresponding health value hint of all Special Infected
		> 在特感身上顯示剩餘血量
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.1h (2024-2-21)
		* Fixed wrong witch health if infected gain some health
		* Optimize code and improve performance
		
	* v1.0h (2024-1-2)
		* Remake code, convert code to latest syntax
		* Fix warnings when compiling on SourceMod 1.11.
		* Optimize code and improve performance
		* Use left4dhooks
		* Translation Support
		* Add hp color
		* Fixed wrong witch health if other plugin adjust witch health
		* Fixed sometimes shoot common infected, witch health text appear

	* v1.2
		* [Original Plugin By nico-op](https://forums.alliedmods.net/showthread.php?t=125747)
</details>

- - - -
# 中文說明
向攻擊者顯示特感血條

* 原理
	* 射傷特感/Tank/Witch時，在攻擊者的螢幕上顯示剩餘血量
	* 只有攻擊者看得到

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d_infected_hp_text.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		l4d_infected_hp_text_enable "1"

		// 血條長度
		// 預設:100 / 最短:10 / 最長:200
		l4d_infected_hp_text_bar_length "100"

		// 特感剩下的血量符號
		l4d_infected_hp_text_bar_symbol "#"

		// 特感失去的血量符號
		l4d_infected_hp_text_damage_symbol "="

		// 血條如何顯示
		// 0: 黑底白字框 (不推薦), 1: 螢幕正中間
		l4d_infected_hp_text_type "1"

		// 為1時，血條顯示剩餘的血量數字
		l4d_infected_hp_text_number "1"

		// 為1時，顯示 Smoker 血條
		l4d_infected_hp_text_smoker_show "1"

		// 為1時，顯示 Boomer 血條
		l4d_infected_hp_text_boomer_show "1"

		// 為1時，顯示 Hunter 血條
		l4d_infected_hp_text_hunter_show "1"

		// 為1時，顯示 Spitter 血條
		l4d_infected_hp_text_spitter "1"

		// 為1時，顯示 Jockey 血條
		l4d_infected_hp_text_jockey_show "1"

		// 為1時，顯示 Charger 血條
		l4d_infected_hp_text_charger_show "1"

		// 為1時，顯示 Tank 血條
		l4d_infected_hp_text_tank_show "1"

		// 為1時，顯示 Witch 血條
		l4d_infected_hp_text_witch_show "1"
		```
</details>
