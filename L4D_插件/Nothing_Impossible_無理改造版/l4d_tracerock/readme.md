# Description | 內容
Tank's rock will trace survivor until hit something.

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/W45JutNDX0Q)

* Image | 圖示
	<br/>![l4d_tracerock_1](image/l4d_tracerock_1.gif)

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_tracerock.cfg
		```php
		//  0=Disable, 1=Enable this plugin 
		l4d_tracerock_enable "1"

		// The chance of trace rock [0-100]%
		l4d_tracerock_chance "100"

		// Trace rock's speed
		l4d_tracerock_speed "300"

		// (L4D2) If 1, Enable trace rock glow
		l4d_tracerock_glow_enable "1"

		// (L4D2) Set trace rock's glow range
		l4d_tracerock_glow_range "1500"

		// (L4D2) Set trace rock's glow color. RGB Color255 - Red Green Blue. [-1 -1 -1: Random]
		l4d_tracerock_glow_color "-1 -1 -1"

		// (L4D2) Add a flashing effect on glowing trace rock.(0 = OFF, 1 = ON)
		l4d_tracerock_glow_flashing "1"

		// Set trace rock's self kill timer.
		l4d_tracerock_kill "30.0"

		// Trace rock update time interval.
		l4d_tracerock_time_interval "0.03"

		// Players with these flags have access to throw trace rock. (Empty = Everyone, -1: Nobody)
		l4d_tracerock_access_flag "z"

		// If 1, AI tank can throw trace rock
		l4d_tracerock_ai_tank "1"
		```
</details>

* <details><summary>Command | 命令</summary>
	
	None
</details>

* <details><summary>API | 串接</summary>

	* [l4d_tracerock.inc](scripting\include\l4d_tracerock.inc)
		```php
		library name: l4d_tracerock
		```
</details>


* Apply to | 適用於
	```
	L4D1
	L4D2
	```

* Related Plugin | 相關插件
	1. [l4d_tankhelper](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4d_tankhelper): Tanks throw special infected instead of rocks
		> Tank不扔石頭而是扔出特感

* <details><summary>Changelog | 版本日誌</summary>

	* v1.7h (2025-1-15)
		* Update cvars

	* v1.6h (2024-10-30)
		* Update cvars
		* App api

	* v1.5h (2024-4-12)
		* Update cvars

	* v1.4h
		* Use left4dhooks to optimize code

	* v1.3h
		* Remake code
		* Add Glow (L4D2 only)
		* Add rock's self kill timer

	* v1.0
		* [By Pan Xiaohai](https://forums.alliedmods.net/showthread.php?t=134537)
</details>

- - - -
# 中文說明
Tank的石頭自動追蹤倖存者

* 原理
	* Tank的石頭盡量繞開障礙物自動追向倖存者
	* 石頭在飛行過程中會轉移目標攻擊較近的倖存者
	* 石頭如果沒有砸到倖存者一直停留在空中會自動消失
	* 真人Tank玩家也適用

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d_tracerock.cfg
		```php
		//  0=關閉插件, 1=起動插件
		l4d_tracerock_enable "1"

		// Tank的石頭變成追蹤石頭的機率 [1-100]%
		l4d_tracerock_chance "100"

		// 追蹤石頭的飛行速度
		l4d_tracerock_speed "300"

		// (L4D2) 為1時，追蹤石頭有光圈
		l4d_tracerock_glow_enable "1"

		// (L4D2) 追蹤石頭的光圈發光範圍
		l4d_tracerock_glow_range "1500"

		// (L4D2) 追蹤石頭的光圈顏色，填入RGB三色 (三個數值介於0~255，需要空格) [-1 -1 -1 = 隨機顏色]
		l4d_tracerock_glow_color "-1 -1 -1"

		// (L4D2) 追蹤石頭的光圈會閃爍 (0 = 關閉, 1 = 開啟)
		l4d_tracerock_glow_flashing "1"

		// Tank丟出去的追蹤石頭，過了30秒之後沒砸中則自動銷毀
		l4d_tracerock_kill "30.0"

		// 更新追蹤石頭的時間間格 (間隔越短，越容易改變飛行軌跡精準砸中)
		l4d_tracerock_time_interval "0.03"

		// 擁有這些權限的真人玩家，才可以丟追蹤石頭 (留白 = 任何人都能, -1: 無人)
		l4d_tracerock_access_flag "z"

		// 為1時，AI Tank可以丟追蹤石頭 
		l4d_tracerock_ai_tank "1"
		```
</details>
