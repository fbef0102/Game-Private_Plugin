# Description | 內容
No Safe Room Medkits

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Video | 影片展示
<br/>None

* Image | 圖示
	* Replace with weapon_upgradepack_incendiary_spawn in start saferoom
	> 起始安全室治療包取代成燃燒彈
	<br/>![L4D_NoSafeRoomMedKits_1](image/L4D_NoSafeRoomMedKits_1.jpg)

	* Replace with weapon_gascan in end saferoom
	> 終點安全室治療包取代成汽油桶
	<br/>![L4D_NoSafeRoomMedKits_2](image/L4D_NoSafeRoomMedKits_2.jpg)

* Apply to | 適用於
```
L4D1 Versus/Coop
L4D2 Versus/Coop
```

* <details><summary>Changelog | 版本日誌</summary>

	```php
	//Crimson_Fox @ 2009 - 2010
	//alasfourom @ 2022
	//Harry @ 2022
	```
	* v1.0h (2023-6-20)
		* Require left4dhooks v1.33 or above
		* Add one Convar
		* Support ending saferoom
		* Support Coop Map Transition

	* [v1.0.2 by alasfourom](https://forums.alliedmods.net/showpost.php?p=2787349&postcount=33)
		* Added 3 Convars For Personal Use

	* v1.0.1
		* [By Crimson_Fox](https://forums.alliedmods.net/showthread.php?t=113444)
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/L4D_NoSafeRoomMedKits.cfg
	```php
	// You Can Replace Med-Kits With Either [weapon_adrenaline_spawn] Or [weapon_pain_pills_spawn] While [Empty For No Items]
	// See more: https://developer.valvesoftware.com/wiki/List_of_L4D2_Entities
	l4d_no_saferoom_medkits_change "weapon_pain_pills_spawn"

	// Enable NoSafreRoomMedKits in end saferoom [1 = Enable, 0 = Disable]
	l4d_no_saferoom_medkits_end_enable "1"

	// Enable NoSafreRoomMedKits in start saferoom [1 = Enable, 0 = Disable]
	l4d_no_saferoom_medkits_start_enable "1"

	// Turn on the plugin in these game modes. 0=All, 1=Coop, 2=Versus. Add numbers together.
	l4d_no_saferoom_medkits_tog "0"
	```
</details>

* <details><summary>Command | 命令</summary>
	None
</details>

- - - -
# 中文說明
刪除安全室的治療包並替換成別的物品

* 原理
	* 判斷距離安全門最近的治療包，第一關沒安全門就判斷距離人類起始點位置最近的治療包
	* 因此，安全門外如果有治療包靠得安全門很近也會受到影響
	* 戰役模式過關之後倖存者身上的治療包不會被取代

* 功能
	1. 可設置開關取代起始安全室內的治療包
	2. 可設置開關取代終點安全室內的治療包
	3. 可設置取代的物品，不設置就直接刪除治療包
