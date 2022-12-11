# Description | 內容
Allows multi-jumping on air.

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/ADBwplbh5oQ)

* Image | 圖示
	* Geppo 
	> 月步
	<br/>![l4d_rejump_1](image/l4d_rejump_1.jpg)

* Apply to | 適用於
```
L4D1
L4D2
```

* <details><summary>Changelog | 版本日誌</summary>

	```php
	//paegus @ 2009 - 2021
	//Harry @ 2022
	```
	* v1.1h (2022-12-12)
		* Request by R.A.
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
		* [By paegus](https://forums.alliedmods.net/showthread.php?p=895212)
</details>

* Require | 必要安裝
<br/>None

* Related Plugin | 相關插件
	1. [simple-bhop](https://github.com/fbef0102/Game-Private_Plugin/tree/main/simple-bhop): Let users Bunny Hop with simplicity 
		> 簡單的連跳插件

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_rejump.cfg
	```php
	// Players with these flags have access to use double jump. (Empty = Everyone, -1: Nobody)
	l4d_rejump_access_flag "z"

	// The amount of vertical boost to apply to double jumps.
	l4d_rejump_boost "250.0"

	// 0=Plugin off, 1=Plugin on.
	l4d_rejump_enabled "1"

	// Disable jump if height is too low compared to previous jump for survivors.
	l4d_rejump_height_disble "200.0"

	// (L4D2) Which zombie class can also use double jump, 0=None, 1=Smoker, =Boomer, 4=Hunter, 8=Spitter, 16=Jockey, 32=Charger, 64=Tank. Add numbers together. (127=All)
	l4d_rejump_infected_class "127"

	// (L4D1) Which zombie class can also use double jumpy, 0=None, 1=Smoker, 2=Boomer, 4=Hunter, 8=Tank. Add numbers together. (15=All)
	l4d_rejump_infected_class "15"

	// If 1, player needs to use jump key first before second jump in air.
	l4d_rejump_jumpkey_first "1"

	// The maximum number of re-jumps allowed while already jumping.
	l4d_rejump_max "2"

	// If 1, survivor can also use double jump.
	l4d_rejump_survivor_enable "1"

	// If 1, disable jump after survivor gets a tank punch.
	l4d_rejump_tank_punch_disble "1"
	```
</details>

* <details><summary>Command | 命令</summary>
	None
</details>

- - - -
# 中文說明
成為超級瑪利歐，人類與特感能在空中使用月步，多次跳躍

* 原理
	* 在空中再按一次跳躍鍵
	* Hunter飛行時候可以再跳躍
	* Jockey在空中可以再跳躍

* 功能
	1. 可設置空中跳躍次數
	2. 可設置人類是否能月步
	3. 可設置特定的特感種類是否能月步
	4. 設定跳躍的高度

* 注意事項
<br>人類有以下情況不能再次跳躍
	1. 正在被特感控住
	2. 沒有先跳躍起來在空中
	3. 被Tank打到或石頭砸到
	4. 嘗試從屋頂跳下去減輕摔傷

