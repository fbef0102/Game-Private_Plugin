# Description | 內容
Block Player from using Kit in Saferoom

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Video | 影片展示
<br/>None

* Image
	<br/>![l4d_saferoom_prevent_kit_1](image/l4d_saferoom_prevent_kit_1.jpg)

* <details><summary>How does it work?</summary>

	* You can't use first aid kits in start safe room and end safe room
	* You can't use first aid kits after you reach 90% of map completion
	* You can't use first aid kits if health >= 90 outside the safe area
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	2. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_saferoom_prevent_kit.cfg
		```php
		// In starting checkpoint area, 1=Prevent players from picking up first aid kit, 2=Prevent players from using first aid kit. Add numbers together
		l4d_saferoom_prevent_kit_start_area "2"

		// If 1, Prevent players from picking up and using first aid kit in starting checkpoint area until time passed after round starts. (0=Always prevent)
		l4d_saferoom_prevent_kit_start_time "60.0"

		// In ending checkpoint area, 1=Prevent players from picking up first aid kit, 2=Prevent players from using first aid kit. Add numbers together
		l4d_saferoom_prevent_kit_end_area "3"

		// Prevent players from using first aid kit after survivor has reach progress >= this value in flow percent on Non-Final Map (0=0ff)
		l4d_saferoom_prevent_kit_survivor_proress "90"

		// Prevent players from using first aid kit if health >= this value in starting checkpoint area (0=0ff)
		l4d_saferoom_prevent_kit_heal_shield_start "80"

		// Prevent players from using first aid kit if health >= this value in ending checkpoint area (0=0ff)
		l4d_saferoom_prevent_kit_heal_shield_end "80"

		// Prevent players from using first aid kit if health >= this value outside the safe area (0=0ff)
		l4d_saferoom_prevent_kit_heal_shield_out "90"

		// Time between sending a warning message (0=Disable message)
		l4d_saferoom_prevent_kit_messagetime "2.5"
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
	
	1. [Bot Healing Values](/Plugin_插件/Bot_IQ_200_Bot智商加強/l4d_bot_healing): Set the health value bots require before using First Aid, Pain Pills or Adrenaline. (target is self or bot or player)
		> 只要生命值不低於一定血量，Bot不會使用醫療包治療對象與傳送藥丸給對象 (對象區分為自己、隊友Bot、真人玩家)
</details>

* <details><summary>Translation Support | 支援翻譯</summary>

	```
	English
	繁體中文
	简体中文
	```
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.8 (2024-9-17)
		* Update cvars
		* Add translation file

	* v1.7 (2023-6-20)
		* Require left4dhooks v1.33 or above

	* v1.6 (2023-5-27)
		* Fixed Error after v1.5

	* v1.5 (2023-4-26)
	* v1.4 (2023-4-3)
		* Add a cvar

	* v1.3 (2023-3-13)
		* Fixed teleporting players in the some trash custom map when using kits. Thanks to "梓" for reporting.

	* v1.2
		* Fixed teleporting players in the final when using kits. Thanks to "Shadow" for reporting.

	* v1.0
		* Initial Release
</details>

- - - -
# 中文說明
在安全區域內禁止人類使用治療包

* 圖示
	<br/>![zho/l4d_saferoom_prevent_kit_1](image/zho/l4d_saferoom_prevent_kit_1.jpg)

* 原理
	* 自己治療自己的時候，如果
		* 自己在安全區域內則無法打包
		* 自己在地圖90%路程過後則無法打包
		* 自己的血量高於80則無法打包
	* 自己治療別人的時候，如果
		* 被治療的對象在安全區域內則無法打包
		* 被治療的對象如果在地圖90%路程過後則無法打包
		* 被治療的對象血量高於80則無法打包

* 用在意哪?
	* 防止戰役模式倖存者通關的時候利用打包Bug
	* 愚蠢的新人一直拿治療包只治療自己
	* 拿包跑出去，補完再進來

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d_saferoom_prevent_kit.cfg
		```php
		// 1=在起始安全區域內不能撿起治療包 (第一關不受影響)
		// 2=在起始安全區域內禁止使用治療包 
		// 將數字相加起來
		l4d_saferoom_prevent_kit_start_area "2"

		// 回合開始60秒內無法在起始安全室內使用與撿起治療包 (0=永遠禁止)
		l4d_saferoom_prevent_kit_start_time "60.0"

		// 1=在終點安全區域內不能撿起治療包
		// 2=在終點安全區域內禁止使用治療包
		// 將數字相加起來
		l4d_saferoom_prevent_kit_end_area "3"

		// 當倖存者達到90%路程之後，無法使用手上的治療包 (最終關除外，0=關閉這項功能)
		l4d_saferoom_prevent_kit_survivor_proress "90"

		// 在起點安全區域內，如果玩家的血量大於或等於此數值之時，無法使用治療包 (0=關閉這項功能)
		l4d_saferoom_prevent_kit_heal_shield_start "80"

		// 在終點安全區域內，當倖存者血量大於或等於此數值之時，無法使用治療包 (0=關閉這項功能)
		l4d_saferoom_prevent_kit_heal_shield_end "80"

		// 在安全區域外路程上，當倖存者血量大於或等於此數值之時，無法使用治療包 (0=關閉這項功能)
		l4d_saferoom_prevent_kit_heal_shield_out "90"

		// 提示顯示的時間間隔 (0=關閉提示)
		l4d_saferoom_prevent_kit_messagetime "2.5"
		```
</details>

