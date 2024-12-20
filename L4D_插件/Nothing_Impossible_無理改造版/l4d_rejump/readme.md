# Description | 內容
Allows multi-jumping on air.

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/ADBwplbh5oQ)

* <details><summary>Image | 圖示</summary>

	<br/>![l4d_rejump_1](image/l4d_rejump_1.gif)
	<br/>![l4d_rejump_2](image/l4d_rejump_2.gif)
	<br/>![l4d_rejump_3](image/l4d_rejump_3.gif)
	<br/>![l4d_rejump_4](image/l4d_rejump_4.gif)
</details>

* <details><summary>How does it work</summary>

	* Press Space key to jump again on air
	* You can rejump if
    	* Incapped by infected on air
    	* Slide off the roof without jump
    	* Hit by Tank punch/Tank rock on air
    	* Try to prevent from fall damage
</details>

* Require | 必要安裝
<br/>None

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_rejump.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d_rejump_enabled "1"

		// The amount of vertical boost to apply to double jumps.
		l4d_rejump_boost "250.0"

		// The maximum number of re-jumps allowed while already jumping.
		l4d_rejump_max "2"

		// If 1, survivor can also use double jump.
		l4d_rejump_survivor_enable "1"

		// If 1, disable jump after survivor gets a tank punch.
		l4d_rejump_tank_punch_disble "1"

		// Disable jump if height is too low compared to previous jump for survivors. (0=Off)
		l4d_rejump_height_disble "200.0"

		// If 1, player needs to use jump key first before second jump in air.
		l4d_rejump_jumpkey_first "1"

		// (L4D2) Which zombie class can also use double jump, 0=None, 1=Smoker, =Boomer, 4=Hunter, 8=Spitter, 16=Jockey, 32=Charger, 64=Tank. Add numbers together. (127=All)
		l4d_rejump_infected_class "127"

		// (L4D1) Which zombie class can also use double jump, 0=None, 1=Smoker, 2=Boomer, 4=Hunter, 8=Tank. Add numbers together. (15=All)
		l4d_rejump_infected_class "15"

		// Players with these flags have access to use double jump. (Empty = Everyone, -1: Nobody)
		l4d_rejump_access_flag "z"
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

	1. [simple-bhop](/L4D_插件/Fun_娛樂/simple-bhop): Let users Bunny Hop with simplicity 
		> 簡單的連跳插件
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.3h (2024-9-27)
		* Remove Fall Velocity if rejump while falling, so you won't get high fall damage

	* v1.2h (2024-3-16)
		* Optimize code and improve performance

	* v1.1h (2022-12-12)
		* Add one cvar: player needs to use jump key first before second jump in air.

	* v1.0h (2022-11-26)
		* Remake code
		* More Cvars
		* Survivor + Infected
		* Disable jump after a tank punch
		* Disable jump when incapped by special infected
		* Disable jump if not jump off the ledge first
		* Detect height and disable second jump

	* v1.0.1
		* [By paegus](https://forums.alliedmods.net/showthread.php?t=99874)
</details>

- - - -
# 中文說明
成為超級瑪利歐，人類與特感能在空中使用月步，多次跳躍

* 原理
	* 在空中再按一次跳躍鍵
		* Hunter飛行時候可以再跳躍
		* Jockey在空中可以再跳躍
		* Tank可以空中跳躍

* <details><summary>注意事項</summary>

	* 人類有以下情況不能再次跳躍
    	1. 正在被特感控住
    	2. 沒有先跳躍起來在空中
    	3. 被Tank打到或石頭砸到
    	4. 嘗試從屋頂跳下去減輕摔傷
</details>

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d_rejump.cfg
		```php
		// 0=關閉插件, 1=開啟插件.
		l4d_rejump_enabled "1"

		// 空中再次跳躍向上的力道
		l4d_rejump_boost "250.0"

		// 再次跳躍的次數限制
		l4d_rejump_max "2"

		// 為1時，倖存者可以空中再次跳躍
		l4d_rejump_survivor_enable "1"

		// 為1時，被Tank打到或石頭砸到
		l4d_rejump_tank_punch_disble "1"

		// (只限人類) 比第一次跳的時候高度差超過200則禁止二次跳躍  (0=關閉這項功能)
		l4d_rejump_height_disble "200.0"

		// 為1時，必須是玩家自己使用跳躍鍵飛起來，才能在空中二次跳躍
		// 0=玩家從屋頂滑落時(未跳躍)也可以在空中二次跳躍
		l4d_rejump_jumpkey_first "1"

		// (L4D2) 哪些特感能空中二次跳躍, 0=無, 1=Smoker, =Boomer, 4=Hunter, 8=Spitter, 16=Jockey, 32=Charger, 64=Tank. 將數字相加. (127=全部)
		l4d_rejump_infected_class "127"

		// (L4D1) 哪些特感能空中二次跳躍, 0=無, 1=Smoker, 2=Boomer, 4=Hunter, 8=Tank. 將數字相加. (127=全部)
		l4d_rejump_infected_class "15"

		// 擁有這些權限的玩家，才可以空中二次跳躍 (留白 = 任何人都能, -1: 無人)
		l4d_rejump_access_flag "z"
		```
</details>

