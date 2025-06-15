# Description | 內容
Locks end saferoom door until all survivors get inside.

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Apply to | 適用於
	```
	L4D1
	L4D2
	```

* [Video | 影片展示](https://youtu.be/KGj8BYEQllw)

* Image | 圖示
	<br/>![anti_end_saferoomdoor_1](image/anti_end_saferoomdoor_1.jpg)

* <details><summary>How does it work?</summary>

	* Locks end saferoom door until all survivors get inside.
	* Unlock door after a period of time.
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	2. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/anti_end_saferoomdoor.cfg
		```php
		// Changes how message displays. (0=Off; 1=In chat; 2=In Hint Box; 3=In center text)
		anti_end_saferoomdoor_announce_type "1"

		// What percentage of the ALIVE survivors must be inside the end saferoom door before close. 
		anti_end_saferoomdoor_percentage_survivors_inside_saferoom "100"

		// If 1, Ignore players incapacitated outside end saferoom area
		anti_end_saferoomdoor_ignore_incap "1"

		// If 1, Ignore players hanging from ledge outside end saferoom area
		anti_end_saferoomdoor_ignore_hanging "1"

		// When first survivor uses the End Saferoom door, unlock End Saferoom door after a period of time. (0=off)
		anti_end_saferoomdoor_unlock_time "60.0"
		```
</details>

* Translation Support | 支援翻譯
	```
	translations/anti_end_saferoomdoor.phrases.txt
	```

* <details><summary>Similar Plugin | 相似插件</summary>

	1. [lockdown_system-l4d2](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/lockdown_system-l4d2): Locks Saferoom Door Until Someone Opens It.
		> 倖存者必須等待時間到並集合才能打開終點安全門，有更多功能
</details>

* <details><summary>Changelog | 版本日誌</summary>

    * v1.5 (2024-8-27)
		* Add gamedata

    * v1.4 (2023-6-20)
        * Require left4dhooks v1.33 or above

	* v1.3 (2023-3-30)
		* Translation Support

	* v1.2 (2022-11-3)
		* When first survivor uses the eEnd Saferoom door, unlock End Saferoom door after a period of time.

	* v1.1 (2022-10-30)
		* Ignore players hanging from ledge or incapacitated outside the end saferoom area

	* v1.0
		* Initial Release
</details>

- - - -
# 中文說明
所有人抵達終點安全室之前，不得關門

* 原理
	* 判定有哪些倖存者已經在終點安全區域內，未到達一定數量的時候安全門不得關閉
	* 或等待60秒後才可以關上大門

* 用意在哪?
	* 單獨落跑到終點安全室的玩家不能關門

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/anti_end_saferoomdoor.cfg
		```php
		// 倒數提示該如何顯示. (0: 不提示, 1: 聊天框, 2: 黑底白字框, 3: 螢幕正中間)
		anti_end_saferoomdoor_announce_type "1"

		// 多少百分比的存活倖存者人數需要抵達安全室，安全門才會解鎖 (50=需要一半人數的倖存者)
		anti_end_saferoomdoor_percentage_survivors_inside_saferoom "100"

		// 為1時，忽略安全室外面倒地的倖存者
		anti_end_saferoomdoor_ignore_incap "1"

		// 為1時，忽略安全室外面掛邊的倖存者
		anti_end_saferoomdoor_ignore_hanging "1"

		// 當第一位倖存者抵達安全室之後，等待X秒後才可以關上大門 (0=關閉這項功能)
		anti_end_saferoomdoor_unlock_time "60.0"
		```
</details>
