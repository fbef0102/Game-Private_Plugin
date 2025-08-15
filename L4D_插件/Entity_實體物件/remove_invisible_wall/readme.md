# Description | 內容
Remove all invisible wall on the map

> __Note__ <br/>
This plugin is private, Please contact [me](/#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](/#私人插件列表-private-plugins-list)

* Apply to | 適用於
	```
	L4D1 
	L4D2
	```

* <details><summary>How does it work?</summary>

	* Remove invisible wall entity only
		1. ```env_physics_blocker```
		2. ```env_player_blocker```
		3. ```func_playerinfected_clip```
		4. ```func_playerghostinfected_clip```
	* 🟥 Map brush still can not be removed
</details>

* Require | 必要安裝
<br/>None

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/remove_invisible_wall.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		remove_invisible_wall_enable "1"

		// Auto remove all invisible wall after map finished loading
		remove_invisible_wall_auto "1"
		```
</details>

* <details><summary>Command | 命令</summary>
	
	* **Remove Invisible Wall**
		```php
		sm_rmwall
		```
</details>

* Q&A
	* <details><summary><b>How to check invisible wall is entity?</b></summary>

		* Install [Dev Cmds](https://forums.alliedmods.net/showthread.php?t=187566) -> change map -> aim the invisible wall -> type ```!ent```
		* If something display in chatbox, then the invisible wall is entity, it can be removed.
		<br/>![remove_invisible_wall_1](image/remove_invisible_wall_1.jpg)
	</details>

	* <details><summary><b>How to check invisible wall is brush?</b></summary>

		* Change map -> server console ```sv_cheats 1``` -> server console ```r_drawclipbrushes 2``` to draw all map brushes
		* 🟥 If wall is colored, then the invisible wall is brush, it can not be removed.
		<br/>![remove_invisible_wall_2](image/remove_invisible_wall_2.jpg)
		* Pink: Block survivor, Red: Block Survivor + Infected, Purple: Block Infected
	</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.1 (2024-7-15)
		* Update Cvars

	* v1.0 (2023-6-15)
		* Initial Release
</details>

- - - -
# 中文說明
移除地圖上所有的空氣牆

* 原理
	* 任一玩家輸入```!rmwall```，移除地圖上的所有空氣牆
	* 只移除以下的空氣牆實體
		1. ```env_physics_blocker```
		2. ```env_player_blocker```
		3. ```func_playerinfected_clip```
		4. ```func_playerghostinfected_clip```
	* 🟥 地圖編譯時內嵌好的空氣牆依然不能被移除

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/remove_invisible_wall.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		remove_invisible_wall_enable "1"

		// 地圖載入完成後自動移除地圖上的所有空氣牆
		remove_invisible_wall_auto "1"
		```
</details>

* <details><summary>命令中文介紹 (點我展開)</summary>
	
	* **移除地圖上的所有空氣牆**
		```php
		sm_rmwall
		```
</details>


* Q&A問題
	* <details><summary><b>如何判斷空氣牆為實體?</b></summary>

		* 安裝 [Dev Cmds](https://forums.alliedmods.net/showthread.php?t=187566) -> 更換地圖 -> 準心指向空氣牆 -> 輸入 ```!ent```
		* 如果有東西跑出來在聊天框，那此空氣牆為實體，可以移除
		<br/>![remove_invisible_wall_1](image/remove_invisible_wall_1.jpg)
	</details>

	* <details><summary><b>如何判斷空氣牆為內嵌?</b></summary>

		* 更換地圖 -> 控制台輸入 ```sv_cheats 1``` -> 控制台輸入 ```r_drawclipbrushes 2``` 繪畫出地圖所有內嵌的空氣牆
		* 🟥 如果被染成顏色，那此空氣牆為地圖內嵌，不可以移除
		<br/>![remove_invisible_wall_2](image/remove_invisible_wall_2.jpg)
		* 粉色: 阻擋倖存者，紅色: 阻擋倖存者+特感，紫色: 阻擋特感
	</details>