# Description | 內容
No Safe Room Medkits

> __Note__ <br/>
This plugin is private, Please contact [me](/#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](/#私人插件列表-private-plugins-list)

* Apply to | 適用於
	```
	L4D1 Versus/Coop
	L4D2 Versus/Coop
	```

* Image | 圖示
	* Replace with weapon_upgradepack_incendiary_spawn in start saferoom (起始安全室治療包取代成燃燒彈)
	<br/>![L4D_NoSafeRoomMedKits_1](image/L4D_NoSafeRoomMedKits_1.jpg)

	* Replace with weapon_gascan in end saferoom (終點安全室治療包取代成汽油桶)
	<br/>![L4D_NoSafeRoomMedKits_2](image/L4D_NoSafeRoomMedKits_2.jpg)

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/L4D_NoSafeRoomMedKits.cfg
		```php
		// Enable NoSafreRoomMedKits in end saferoom [1 = Enable, 0 = Disable]
		l4d_no_saferoom_medkits_end_enable "1"

		// Enable NoSafreRoomMedKits in start saferoom [1 = Enable, 0 = Disable]
		l4d_no_saferoom_medkits_start_enable "1"

		// Turn on the plugin in these game modes. 0=All, 1=Coop, 2=Versus. Add numbers together.
		l4d_no_saferoom_medkits_tog "0"

		// Replace Med-Kits With Either [weapon_adrenaline_spawn] Or [weapon_pain_pills_spawn] While [Empty For No Items]
		// See more: https://developer.valvesoftware.com/wiki/List_of_L4D2_Entities
		l4d_no_saferoom_medkits_change "weapon_pain_pills_spawn"
		```
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.0h (2023-6-20)
		* Require left4dhooks v1.33 or above
		* Add one Convar
		* Support ending saferoom
		* Support Coop Map Transition

	* [v1.0.2 by alasfourom](https://forums.alliedmods.net/showpost.php?p=2787349&postcount=33)
		* Added 3 Convars For Personal Use

	* v1.0.1
		* [Original plugin By Crimson_Fox](https://forums.alliedmods.net/showthread.php?t=113444)
</details>

- - - -
# 中文說明
刪除安全室的治療包並替換成別的物品

* 原理
	* 刪除起點與終點的安全室的治療包並替換成別的物品
		* 判斷距離安全門最近的治療包，第一關沒安全門就判斷距離人類起始點位置最近的治療包
		* 因此，安全門外如果有治療包靠得安全門很近也會受到影響
	* 戰役模式過關之後倖存者身上的治療包不會被取代

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/L4D_NoSafeRoomMedKits.cfg
		```php
		// 為1時，取代起始安全室內的治療包
		l4d_no_saferoom_medkits_end_enable "1"

		// 為1時，取代終點安全室內的治療包
		l4d_no_saferoom_medkits_start_enable "1"

		// 什麼模式下啟動此插件. 0=所有模式, 1=戰役, 2=對抗. 請將數字相加起來
		l4d_no_saferoom_medkits_tog "0"

		// 寫下要取代治療包的物品或武器, 譬如: weapon_adrenaline_spawn 或 weapon_pain_pills_spawn While
		// 空=移除治療包
		// 查看物品與武器列表: https://developer.valvesoftware.com/wiki/List_of_L4D2_Entities
		l4d_no_saferoom_medkits_change "weapon_pain_pills_spawn"
		```
</details>
