# Description | 內容
Tank's rock will trace survivor until hit something.

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/2My1Tf1emNA)

* Image | 圖示
	* trace rock
	> 追蹤石
	<br/>![l4d_tracerock_1](image/l4d_tracerock_1.jpg)

* Apply to | 適用於
```
L4D1
L4D2
```

* <details><summary>Changelog | 版本日誌</summary>

	```php
	//Pan Xiaohai @ 2010-2011
	//Harry @ 2021-2012
	```
	* v1.3
		* Request by 壹梦
		* Remake code
		* Add Glow (L4D2 only)
		* Add rock's self kill timer

	* v1.0
		* [By Pan Xiaohai](https://forums.alliedmods.net/showthread.php?t=134537)
</details>

* Require | 必要安裝
	<br/>None

* Related Plugin | 相關插件
	1. [l4d_tankhelper](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4d_tankhelper): Tanks throw special infected instead of rocks
		> Tank不會丟出石頭而是丟出特感

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_tracerock.cfg
	```php
	// The chance of trace of rock [0-100](int)
	l4d_tracerock_chance "100"

	//  0=Disable, 1=Enable this plugin 
	l4d_tracerock_enable "1"

	// (L4D2) Set trace rock's glow color. RGB Color255 - Red Green Blue. [-1 -1 -1: Random]
	l4d_tracerock_glow_color "-1 -1 -1"

	// (L4D2) Add a flashing effect on glowing trace rock.(0 = OFF, 1 = ON)
	l4d_tracerock_glow_flashing "1"

	// (L4D2) Set trace rock's glow range
	l4d_tracerock_glow_range "1500"

	// (L4D2) Set trace rock's glow type. 0 = OFF, 1 = OnUse (doesn't works well), 2 = OnLookAt (doesn't works well), 3 = Constant (better results)
	l4d_tracerock_glow_type "3"

	// Set trace rock's self kill timer.
	l4d_tracerock_kill "30.0"

	// Trace rock's speed
	l4d_tracerock_speed "300"

	// Trace rock update time interval.
	l4d_tracerock_time_interval "0.03"
	```
</details>

* <details><summary>Command | 命令</summary>
	
	None
</details>

- - - -
# 中文說明
Tank的石頭自動追蹤倖存者

* 原理
	* Tank的石頭盡量繞開障礙物自動追向倖存者
	* 石頭在飛行過程中會轉移目標攻擊較近的倖存者
	* 石頭如果沒有砸到倖存者一直停留在空中會自動消失
	* 真人Tank玩家也適用

* 功能
	1. 可設置石頭的飛行速度
	2. 可設置石頭的光圈顏色
	3. 可設置丟出來的是追蹤石頭的機率
