# Description | 內容
Locks end saferoom door until all survivors get inside.

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/-UOMbCow9LI)

* Image | 圖示
	* display message
	> 顯示還需要多少倖存者才能解鎖安全門
	<br/>![anti_end_saferoomdoor_1](image/anti_end_saferoomdoor_1.jpg)

* Apply to | 適用於
```
L4D1
L4D2
```

* <details><summary>Changelog | 版本日誌</summary>

	```php
	* v1.2 (2022-11-3)
		* When first survivor uses the eEnd Saferoom door, unlock End Saferoom door after a period of time.

	* v1.1 (2022-10-30)
		* Ignore players hanging from ledge or incapacitated outside the end saferoom area

	* v1.0
		* Original Request by Alfari
	```
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	2. [[INC] Multi Colors](https://forums.alliedmods.net/showthread.php?t=247770)

* Similar Plugin | 相似插件
	1. [lockdown_system-l4d2](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/lockdown_system-l4d2): Locks Saferoom Door Until Someone Opens It.
		> 倖存者必須等待時間到並集合才能打開終點安全門，有更多功能

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/anti_end_saferoomdoor.cfg
	```php
	// Changes how message displays. (0=Off; 1=In chat; 2=In Hint Box; 3=In center text)
	anti_end_saferoomdoor_announce_type "1"

	// Ignore players hanging from ledge outside end saferoom area
	anti_end_saferoomdoor_ignore_hanging "1"

	// Ignore players incapacitated end saferoom area
	anti_end_saferoomdoor_ignore_incap "1"

	// What percentage of the ALIVE survivors must be inside the end saferoom door before close. 
	anti_end_saferoomdoor_percentage_survivors_inside_saferoom "100"

	// When first survivor uses the End Saferoom door, unlock End Saferoom door after a period of time. (0=off)
	anti_end_saferoomdoor_unlock_time "60.0"
	```
</details>

* <details><summary>Command | 命令</summary>
	
	None
</details>

- - - -
# 中文說明
所有人抵達終點安全室之前，不得關門

* 原理
	* 判定有哪些倖存者已經在終點安全區域內，未到達一定數量的時候安全門不得關閉
	* 一起死或一起通關，單獨落跑到終點安全室的玩家不能關門

* 功能
	1. 可設置多少倖存者抵達安全室才能關門
	2. 可設定如何顯示提示
	3. 可忽略安全室外掛邊或倒地的玩家
