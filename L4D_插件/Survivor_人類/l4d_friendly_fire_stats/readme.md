# Description | 內容
Display all friendly fire dealt and received

> __Note__ <br/>
This plugin is private, Please contact [me](/#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](/#私人插件列表-private-plugins-list)

* Apply to | 適用於
	```
	L4D1
	L4D2
	```

* Image | 圖示
	* Display friendly fire dealt and received (造成與受到的友傷)
	<br/>![l4d_friendly_fire_stats_1](image/l4d_friendly_fire_stats_1.jpg)
	* Display all friendly fire stats (所有玩家的友傷統計)
	<br/>![l4d_friendly_fire_stats_2](image/l4d_friendly_fire_stats_2.jpg)

* Require | 必要安裝
	1. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_friendly_fire_stats.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d_friendly_fire_stats_enable "1"

		// Reset All FF data when 0=Map Change, 1=Next New Round, 2=Next Game starts (survivors leaving saferoom / survival or scavenge begins).
		l4d_friendly_fire_stats_reset_when "2"
		```
</details>

* <details><summary>Command | 命令</summary>

	* **Display friendly fire dealt and received.**
		```php
		sm_ss
		```

	* **Display All friendly fire dealt stats.**
		```php
		sm_sse
		```
</details>

* <details><summary>Similar Plugin | 相似插件</summary>

	1. [l4dffannounce](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4dffannounce): Notifies selected team(s) when someone is on final strike and add glow
		> 顯示誰他馬TK我

	2. [anti-friendly_fire](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/anti-friendly_fire): shoot your teammate = shoot yourself
		> 反彈傷害

	3. [anti-friendly_fire_V2](/L4D_插件/Anti_Griefer_防惡意路人/anti-friendly_fire_V2): shoot teammate = shoot yourself V2
		> 隊友開槍射你會反彈傷害，第二版本
		
	4. [anti-friendly_fire_RPG](/L4D_插件/Anti_Griefer_防惡意路人/anti-friendly_fire_RPG): shoot teammate = shoot yourself RPG
		> 隊友開槍射你會反彈傷害，RPG版本
</details>

* Translation Support | 支援翻譯
	```
	translations/l4d_friendly_fire_stats.phrases.txt
	```

* <details><summary>Changelog | 版本日誌</summary>

	* v1.2 (2024-9-3)
		* Add translation file

	* v1.1 (2022-12-8)
		* New Cvar, Reset All FF data when next game starts

	* v1.0 (2022-12-6)
		* Initial Release
</details>

- - - -
# 中文說明
顯示造成與受到的友傷以及兇手，有友傷統計

* 原理
	* 輸入```!ss```查看受到與造成的友傷統計
	* 輸入```!sse```查看所有人的友傷統計

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d_friendly_fire_stats.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		l4d_friendly_fire_stats_enable "1"

		// 何時重置友傷數據? 0=換圖時, 1=新的回合開始時, 2=下次遊戲開始之時 (離開安全室 / 生存或清道夫模式計時開始).
		l4d_friendly_fire_stats_reset_when "2"
		```
</details>

* <details><summary>命令中文介紹 (點我展開)</summary>

	* **查看受到與造成的友傷統計**
		```php
		sm_ss
		```

	* **查看所有人的友傷統計**
		```php
		sm_sse
		```
</details>