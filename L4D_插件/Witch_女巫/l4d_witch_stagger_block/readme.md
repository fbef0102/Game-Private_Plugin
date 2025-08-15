# Description | 內容
Block Witch stumble by Weapons/Shove/Explosive Bullet/Pipebomb/....

> __Note__ <br/>
This plugin is private, Please contact [me](/#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](/#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/bysvSIHO1L4)

* <details><summary>Image | 圖示</summary>

	| Before (裝此插件之前)  			| After (裝此插件之後) |
	| -------------|:-----------------:|
	| ![l4d_witch_stagger_block_before_1](image/l4d_witch_stagger_block_before_1.gif)|![l4d_witch_stagger_block_after_1](image/l4d_witch_stagger_block_after_1.gif)|
	| ![l4d_witch_stagger_block_before_2](image/l4d_witch_stagger_block_before_2.gif)|![l4d_witch_stagger_block_after_2](image/l4d_witch_stagger_block_after_2.gif)|
	| ![l4d_witch_stagger_block_before_3](image/l4d_witch_stagger_block_before_3.gif)|![l4d_witch_stagger_block_after_3](image/l4d_witch_stagger_block_after_3.gif)|
	| ![l4d_witch_stagger_block_before_4](image/l4d_witch_stagger_block_before_4.gif)|![l4d_witch_stagger_block_after_4](image/l4d_witch_stagger_block_after_4.gif)|
</details>

* <details><summary>How does it work?</summary>

	* Block Witch stagger by
		* Survivor shove
		* Grenade Launcher
		* Boomer explosion
		* Explosive Bullet
		* PipeBomb, OxyTank, PropTank, FuelBarrel
	* Prevent sitting witch from stunned with a headshot by weapons (Sniper Rifle, AK-47, Magnum)
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	2. [Actions](https://forums.alliedmods.net/showthread.php?t=336374)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_witch_stagger_block.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d_witch_stagger_block_enable "1"

		// Prevent Witch stagger by 1=Survivor Shove, 2=Grenade Launcher, 4=Explosive Bullet, 8=PipeBomb, 16=OxyTank, 32=PropTank, 64=FuelBarrel, 128=Other Object. Add numbers together (255=All, 0=Off)
		l4d_witch_stagger_block_flag "254"

		// If 1, Prevent sitting witch from stunned with a headshot by weapons (Sniper Rifle, AK-47, Magnum)
		l4d_witch_stagger_block_headshot "1"
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

* <details><summary>Related Plugin | 相關插件</summary>

	1. [l4d_witch_behind_fix](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4d_witch_behind_fix): The witch turns back if nearby survivor scares her behind
		* 當有人在背後驚嚇Witch，Witch會秒轉身攻擊
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.0 (2023-12-05)
		* Initial Release
</details>

- - - -
# 中文說明
Witch 不會被狙擊槍/高爆子彈/土製炸彈... 震退

* 原理
	* 以下情況不會硬直震退 Witch
		1. 倖存者右鍵
		2. 榴彈 (依然會炸傷)
		3. 高爆子彈
		4. 土製炸彈、瓦斯桶、氧氣罐、燃油桶、加油站...爆炸
	* 坐立的Witch不會被以下武器暴頭擊暈
		1. 狙擊槍
		2. AK-47
		3. 麥格農手槍

* 用意在哪?
	* 不給大佬殺死Witch裝B

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d_witch_stagger_block.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		l4d_witch_stagger_block_enable "1"

		// Prevent Witch stagger by 1=Survivor Shove, 2=Grenade Launcher, 4=Explosive Bullet, 8=PipeBomb, 16=OxyTank, 32=PropTank, 64=FuelBarrel, 128=Other Object. Add numbers together (255=All, 0=Off)
		// 普通感染者 不會被以下情況硬質震退 1=倖存者右鍵, 2=榴彈, 4=高爆子彈, 8=土製炸彈, 16=氧氣罐, 32=瓦斯桶, 64=燃油桶, 128=其他物件 (0=關閉, 255=全部)
		l4d_witch_stagger_block_flag "254"

		// 為1時，坐立的Witch不會被以下武器暴頭擊暈: 狙擊槍、AK-47、麥格農手槍)
		l4d_witch_stagger_block_headshot "1"
		```
</details>