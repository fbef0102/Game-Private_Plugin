# Description | 內容
Spawn Tanks every amount of time passed after survivors leave the saferoom

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Video | 影片展示
<br/>None

* Image | 圖示
<br/>None

* <details><summary>How does it work?</summary>

	* This plugin spawns multi tanks every amount of time passed
		1. Spawn random numbers of tanks each time.
		2. Random time interval
		3. Disable tank spawn after final starts
	* Disable director/mutation/static tank
	* (Versus) Tanks will pass to players
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	2. [spawn_infected_nolimit](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/spawn_infected_nolimit)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_tank_timer_spawn.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d_tank_timer_spawn_enable "1"

		// If 1, Disable director/mutation/static tank spawn
		l4d_tank_timer_spawn_disable_director "1"

		// Set max interval time to spawn tank
		l4d_tank_timer_spawn_interval_max "120"

		// Set min interval time to spawn tank
		l4d_tank_timer_spawn_interval_min "60"

		// Set total max numbers of Tanks to spawn each time
		l4d_tank_timer_spawn_number_max "2"

		// Set total min numbers of Tanks to spawn each time
		l4d_tank_timer_spawn_number_min "0"

		// Max tank limit on the filed (If limit reached, don't spawn tanks)
		l4d_tank_timer_spawn_limit "2"

		// If 1, Disable tank spawn timer after final starts
		l4d_tank_timer_spawn_final_disable "1"
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

* <details><summary>Related | 相關插件</summary>

	1. [l4d_tank_spawn](/Plugin_插件/Tank_坦克/l4d_tank_spawn): Spawn multi Tanks on the map and final rescue
		* 一個關卡中或救援期間生成多隻Tank，對抗模式也適用
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.1 (2024-10-31)
		* Update cvars

	* v1.0 (2024-3-16)
		* Initial Release
</details>

- - - -
# 中文說明
地圖每過一段時間自動生成Tank，對抗模式也適用

* 原理
	* 在倖存者離開安全室之後，這個插件每過一段時間會生成多個Tank
		1. 每次數量隨機
		2. 時間間隔隨機
		3. 救援開始後不生成tank
	* 此插件會停止遊戲導演生成Tank
	* (對抗模式) Tank生成後會轉移給玩家操控

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d_tank_timer_spawn.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		l4d_tank_timer_spawn_enable "1"

		// 為1時，停止 遊戲導演/突變模式/地圖固定 生成Tank
		l4d_tank_timer_spawn_disable_director "1"

		// 生成tank的時間間隔 (最長時間)
		l4d_tank_timer_spawn_interval_max "120"

		// 生成tank的時間間隔 (最短時間)
		l4d_tank_timer_spawn_interval_min "60"

		// 每次生成tank的數量 (最多)
		l4d_tank_timer_spawn_number_max "2"

		// 每次生成tank的數量 (最少)
		l4d_tank_timer_spawn_number_min "0"

		// 場上的Tank數量上限 (已達數量時不會繼續生成tank)
		l4d_tank_timer_spawn_limit "2"

		// 為1時，救援開始後不生成tank
		l4d_tank_timer_spawn_final_disable "1"
		```
</details>