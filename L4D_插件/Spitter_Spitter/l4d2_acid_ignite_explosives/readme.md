# Description | 內容
Make Spitter acid to be able to ignite explosives

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Image | 圖示
    <br/>![l4d2_acid_ignite_explosives_1](image/l4d2_acid_ignite_explosives_1.gif)

* Apply to | 適用於
	```
	L4D2
	```

* <details><summary>How does it work?</summary>

	* Spitter can ignite explosives with acid
	* Apply to AI/Real Spitter
</details>

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d2_acid_ignite_explosives.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d2_acid_ignite_explosives_allow "1"

		// Turn on the plugin in these game modes. 0=All, 1=Coop, 2=Survival, 4=Versus, 8=Scavenge. Add numbers together.
		l4d2_acid_ignite_explosives_modes_tog "0"

		// Allow spitter acid to ignite: 0=Off, 1=Firework, 2=OxyTank, 4=PropTank, 7=All. Add numbers together.
		l4d2_acid_ignite_explosives_prop "7"

		// Make explosives explode instead of ignite: 0=All ignite, 1=Firework, 2=OxyTank, 4=PropTank, 7=All explode. Add numbers together.
		l4d2_acid_ignite_explosives_type "0"

		// Ignite GasCans: 0=Off, 1=Red Gascan, 2=Yellow + Green Scavenge Gascan, 3=Both
		l4d2_acid_ignite_explosives_gas "3"
		```
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.0h (2025-1-30)
		* Initial Release
</details>

- - - -
# 中文說明
Spitter的酸液可以點燃汽油桶、煙火盒、瓦斯桶、氧氣罐

* 原理
	* 如上所敘
	* 適用於AI與真人Spitter

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d2_acid_ignite_explosives.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		l4d2_acid_ignite_explosives_allow "1"

		// 什麼模式下啟動此插件. 0=所有模式, 1=戰役, 2=生存, 4=對抗, 8=清道夫. 請將數字相加起來
		l4d2_acid_ignite_explosives_modes_tog "0"

		// 酸液可以點燃: 0=無, 1=煙火盒, 2=氧氣罐, 4=瓦斯桶, 7=全部. 請將數字相加
		l4d2_acid_ignite_explosives_prop "7"

		// 酸液碰到時直接爆炸而非點燃: 0=全部點燃, 1=火盒, 2=氧氣罐, 4=瓦斯桶, 7=全部爆炸. 請將數字相加
		l4d2_acid_ignite_explosives_type "0"

		// 可以點燃哪一種汽油桶: 0=關閉, 1=紅色汽油桶, 2=黃色+綠色汽油桶, 3=全部
		l4d2_acid_ignite_explosives_gas "3"
		```
</details>