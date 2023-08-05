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
		<br/>![l4d_pushdrag_2](image/l4d_pushdrag_2.jpg)
		<br/>![l4d_pushdrag_3](image/l4d_pushdrag_3.jpg)

* <details><summary>How does it work?</summary>

	* Aim the car or player or item -> press double E -> use mouse to move the object on air.
	* Press E again to release the object or Left mouse to throw the object.
	* Infected can move object too.
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_pushdrag.cfg
		```php
		// 0: Disable survivor grab, 1: Survivor grab object, 2:, Survivor grab teamate 3: Survivor grab all
		l4d_pushdrag_survivor_grab "3"

		// 0: Disable infected grab, 1: Infected grab object, 2:, Infected grab teamate 3: Infected grab all
		l4d_pushdrag_infected_grab "2"

		// Grab distance within this range
		l4d_pushdrag_grab_distance "400"

		// Grab tank rock distance within this range
		l4d_pushdrag_grab_rock_distance "400"

		// Which key to grab the objects. (0=Use, 1=Walk, 2=Crouch, 3=Middle Mouse)
		l4d_pushdrag_grab_key "0"

		// Block players using keys when grabbing the objects. (0=Disable, 1=Attack, 2=Attack2, 4=Reload, 7=All, add numbers together)
		l4d_pushdrag_grab_block_key "6"

		// If 1, Prevent players from taking damage with the objects they grab.
		l4d_pushdrag_grab_protect "1"

		// The velocity of the objects when players throw
		l4d_pushdrag_throw_force "2000.0"

		// Hold Distance when grabbing a player
		l4d_pushdrag_player_hold_distance "70.0"

		// Hold Distance when grabbing a weapon
		l4d_pushdrag_weapon_hold_distance "50.0"

		// Hold Distance when grabbing a hittable prop
		l4d_pushdrag_hittable_hold_distance "200.0"

		// Hold Distance when grabbing a moveable prop (including pipe bomb, fuel barrel, holiday gift...)
		l4d_pushdrag_prop_hold_distance "120.0"

		// Hold Distance when grabbing a tank rock
		l4d_pushdrag_rock_hold_distance "300.0"

		// How long can players grab a player
		l4d_pushdrag_player_duration "15.0"

		// How long can players grab a weapon
		l4d_pushdrag_weapon_duration "30.0"

		// How long can players grab a hittable prop
		l4d_pushdrag_hittable_duration "10.0"

		// How long can players grab a moveable prop
		l4d_pushdrag_prop_duration "15.0"

		// How long can players grab a tank rock
		l4d_pushdrag_rock_duration "8.0"

		// Change player move speed when grabbing a player
		l4d_pushdrag_player_speed "180.0"

		// Change player move speed when grabbing a weapon
		l4d_pushdrag_weapon_speed "210.0"

		// Change player move speed when grabbing a hittable prop
		l4d_pushdrag_hittable_speed "100.0"

		// Change player move speed when grabbing a moveable prop
		l4d_pushdrag_prop_speed "150.0"

		// Change player move speed when grabbing a tank rock
		l4d_pushdrag_rock_speed "220.0"

		// If 1, player can press 'Attack2' key to release himself if grabbed by another player
		l4d_pushdrag_grabbed_player_release "1"

		// If 1, incapacitated survivor can grab the objects
		l4d_pushdrag_incap_grab_enable "1"

		// If 1, player can grab the incapacitated survivor
		l4d_pushdrag_grab_incap_enable "1"
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

* <details><summary>Changelog | 版本日誌</summary>

	```php
	//panxiaohai @ 2010
	//HarryPotter @ 2022-2023
	```
	* v1.3h (2023-6-16)
		* Grab tank rock distance
		* Grab the incapacitated survivor

	* v1.2h (2023-6-14)
		* Grab a tank rock, pipe bomb projectile.
		* Player can press 'Attack2' key to release himself if grabbed by another player.
		* Trigger the alarm if grab alarm cars.
		* Tank/Witch can push away the objects which gabbed by players on the patch.

	* v1.1h
		* Drag and throw prop_fuel_barrel

	* v1.0h
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

- - - -
# 中文說明
飄浮咒，溫咖癲啦唯啊薩

* 原理
	* 玩家對準物品雙擊E鍵，可以使物品飄浮在半空中
    	* 按下E鍵：放下物品
    	* 左鍵：拋出物品
	* 可以對車子、武器、玩家使用飄浮咒，不能對特感、殭屍、Tank、Witch使用飄浮咒
	* 特感也能使用

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d_pushdrag.cfg
		```php
		// 0: 禁止人類使用飄浮咒, 1: 人類可以抓取物品, 2:, 人類可以抓取隊友 3: 人類可以抓取物品與隊友
		l4d_pushdrag_survivor_grab "3"

		// 0: 禁止特感使用飄浮咒, 1: 特感可以抓取物品, 2:, 特感可以抓取隊友 3: 特感可以抓取物品與隊友
		l4d_pushdrag_infected_grab "2"

		// 可以抓400公尺範圍內的 物品
		l4d_pushdrag_grab_distance "400"

		// 可以抓400公尺範圍內 Tank丟出去的石頭
		l4d_pushdrag_grab_rock_distance "400"

		// 哪一個按鍵雙擊兩下可以使用飄浮咒. (0=E鍵, 1=Shift鍵, 2=蹲下鍵, 3=滑鼠滾輪鍵)
		l4d_pushdrag_grab_key "0"

		// 當玩家被其他人使用飄浮咒控制時，禁止使用以下按鈕. (0=關閉這項功能, 1=左鍵, 2=右鍵, 4=裝彈, 請將數字相加起來, 7=全部)
		l4d_pushdrag_grab_block_key "6"

		// 為1時，玩家再操控的車子的期間不會砸傷自己
		l4d_pushdrag_grab_protect "1"

		// 玩家把物品丟出去的力道
		l4d_pushdrag_throw_force "2000.0"

		// 抓取隊友的時候，飄浮在空中與你保持的距離
		l4d_pushdrag_player_hold_distance "70.0"

		// 抓取武器的時候，飄浮在空中與你保持的距離
		l4d_pushdrag_weapon_hold_distance "50.0"

		// 抓取車子的時候，飄浮在空中與你保持的距離
		l4d_pushdrag_hittable_hold_distance "200.0"

		// 抓取物品的時候，飄浮在空中與你保持的距離 (包含土製炸彈, 汽油桶, 禮物盒等等...)
		l4d_pushdrag_prop_hold_distance "120.0"

		// 抓取Tank丟出去的石頭時候，飄浮在空中與你保持的距離
		l4d_pushdrag_rock_hold_distance "300.0"

		// 抓取隊友，只能控制15秒
		l4d_pushdrag_player_duration "15.0"

		// 抓取武器，只能控制30秒
		l4d_pushdrag_weapon_duration "30.0"

		// 抓取車子，只能控制10秒
		l4d_pushdrag_hittable_duration "10.0"

		// 抓取物品，只能控制15秒
		l4d_pushdrag_prop_duration "15.0"

		// 抓取Tank丟出去的石頭，只能控制8秒
		l4d_pushdrag_rock_duration "8.0"

		// 抓取隊友，能移動的速度
		l4d_pushdrag_player_speed "180.0"

		// 抓取武器，能移動的速度
		l4d_pushdrag_weapon_speed "210.0"

		// 抓取車子，能移動的速度
		l4d_pushdrag_hittable_speed "100.0"

		// 抓取物品，能移動的速度
		l4d_pushdrag_prop_speed "150.0"

		// 抓取Tank丟出去的石頭，能移動的速度
		l4d_pushdrag_rock_speed "220.0"

		// 為1時，玩家被其他人使用飄浮咒控制時，可以按下 '右鍵' 釋放自己
		l4d_pushdrag_grabbed_player_release "1"

		// 為1時，倒地的玩家也能使用飄浮咒
		l4d_pushdrag_incap_grab_enable "1"

		// 為1時，可以抓取倒地的玩家
		l4d_pushdrag_grab_incap_enable "1"
		```
</details>

