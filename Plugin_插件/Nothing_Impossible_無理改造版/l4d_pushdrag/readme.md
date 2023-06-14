# Description | 內容
Press Double E key to move the objects and players

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/2f0Rk4AcmFk)

* Image | 圖示
	* Wingardium Leviosa!
		> 溫咖癲啦唯啊薩
		<br/>![l4d_pushdrag_1](image/l4d_pushdrag_1.gif)
	* Grab a car
		> 車子飄浮
		<br/>![l4d_pushdrag_2](image/l4d_pushdrag_2.jpg)
	* Grab a player
		> 對玩家使用飄浮咒
		<br/>![l4d_pushdrag_3](image/l4d_pushdrag_3.jpg)

* Apply to | 適用於
	```
	L4D1
	L4D2
	```

* <details><summary>Changelog | 版本日誌</summary>

	```php
	//panxiaohai @ 2010
	//HarryPotter @ 2022-2023
	```
	* v1.2h (2023-6-14)
		* Grab a tank rock, pipe bomb projectile.
		* Player can press 'Attack2' key to release himself if grabbed by another player.
		* Trigger the alarm if grab alarm cars.
		* Tank/Witch can push away the objects which gabbed by players on the patch.

	* v1.1h
		* Drag and throw prop_fuel_barrel

	* v1.0h
		* Request by 所長
		* Remake Code
		* Add more Convars
		* Safely drag and throw objects
		* Prevent players from taking damage with the objects they grab.
		* How long can players grab a object.
		* Change player move speed when grabbing a object.
		* Block players using keys when grabbing the objects.

	* v12
		* [Original Plugin by panxiaohai](https://forums.alliedmods.net/showthread.php?t=140673)
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_pushdrag.cfg
		```php
		// Block players using keys when grabbing the objects. (0=Disable, 1=Attack, 2=Attack2, 4=Reload, 7=All, add numbers together)
		l4d_pushdrag_grab_block_key "6"

		// Grab distance within this range
		l4d_pushdrag_grab_distance "400"

		// Which key to grab the objects. (0=Use, 1=Walk, 2=Crouch, 3=Middle Mouse)
		l4d_pushdrag_grab_key "0"

		// If 1, Prevent players from taking damage with the objects they grab.
		l4d_pushdrag_grab_protect "1"

		// If 1, player can press 'Attack2' key to release himself if grabbed by another player
		l4d_pushdrag_grabbed_player_release "1"

		// How long can players grab a hittable prop
		l4d_pushdrag_hittable_duration "10.0"

		// Hold Distance when grabbing a hittable prop
		l4d_pushdrag_hittable_hold_distance "200.0"

		// Change player move speed when grabbing a hittable prop
		l4d_pushdrag_hittable_speed "100.0"

		// If 1, incapacitated survivor can grab the objects
		l4d_pushdrag_incap_grab_enable "1"

		// 0: Disable infected grab, 1: Infected grab object, 2:, Infected grab teamate 3: Infected grab all
		l4d_pushdrag_infected_grab "2"

		// How long can players grab a player
		l4d_pushdrag_player_duration "15.0"

		// Hold Distance when grabbing a player
		l4d_pushdrag_player_hold_distance "70.0"

		// Change player move speed when grabbing a player
		l4d_pushdrag_player_speed "180.0"

		// How long can players grab a moveable prop
		l4d_pushdrag_prop_duration "15.0"

		// Hold Distance when grabbing a moveable prop (including pipe bomb, fuel barrel, holiday gift...)
		l4d_pushdrag_prop_hold_distance "120.0"

		// Change player move speed when grabbing a moveable prop
		l4d_pushdrag_prop_speed "150.0"

		// How long can players grab a tank rock
		l4d_pushdrag_rock_duration "8.0"

		// Hold Distance when grabbing a tank rock
		l4d_pushdrag_rock_hold_distance "300.0"

		// Change player move speed when grabbing a tank rock
		l4d_pushdrag_rock_speed "220.0"

		// 0: Disable survivor grab, 1: Survivor grab object, 2:, Survivor grab teamate 3: Survivor grab all
		l4d_pushdrag_survivor_grab "3"

		// The velocity of the objects when players throw
		l4d_pushdrag_throw_force "2000.0"

		// How long can players grab a weapon
		l4d_pushdrag_weapon_duration "30.0"

		// Hold Distance when grabbing a weapon
		l4d_pushdrag_weapon_hold_distance "50.0"

		// Change player move speed when grabbing a weapon
		l4d_pushdrag_weapon_speed "210.0"
		```
</details>

* <details><summary>Command | 命令</summary>
	
	None
</details>

- - - -
# 中文說明
飄浮咒，溫咖癲啦唯啊薩

* 原理
	* 玩家對準物品雙擊E鍵，可以使物品飄浮在半空中
	* 按下E鍵放下物品或者左鍵拋出物品
	* 可以對車子、武器、玩家使用飄浮咒，不能對特感、殭屍、Tank、Witch使用飄浮咒
	* 特感也能使用

* 功能
	1. 可設置抓物品的範圍限制
	2. 可設置抓物品的按鍵
	3. 抓物品時不會被物品砸傷到 (譬如車子)
	4. 可設置抓各種物品的距離、移動速度、飄浮時間
	5. 可設置抓取物品時，不能使用的按鍵
	6. 可設置人類能抓取的物品限制
	7. 可設置特感能抓取的物品限制

