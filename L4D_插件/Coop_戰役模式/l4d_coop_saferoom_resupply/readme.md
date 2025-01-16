# Description | 內容
When survivors have made it in end saferoom, restore survivors all survivors with 100 hp + refill full ammo + give medical items

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Apply to | 適用於
	```
	L4D1 Coop
	L4D2 Coop/Realism
	```

* <details><summary>How does it work?</summary>

	* When survivors have made it to saferoom
		* Any survivor who has less than 50hp will be restored to 50 permant health
		* Save any incapacitated survivor and gain 50 permant health
		* Remove black and white and gain 50 permant health
		* Dead survivor will respawn with 50hp on next level
		* Refill survivors' weapon ammo
		* Give medical items (Med Kit or defibrillator)
	* Remove kits in start saferoom and end saferoom
	* Apply to coop/realism only
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_coop_saferoom_resupply.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d_coop_saferoom_resupply_enable "1"

		// If 1, Remove kits in start saferoom
		l4d_coop_saferoom_resupply_remove_start_kits "1"

		// If 1, Remove kits in end saferoom
		l4d_coop_saferoom_resupply_remove_end_kits "1"

		// If 1, Remove ammo pile in start saferoom
		l4d_coop_saferoom_resupply_remove_start_ammo "1"

		// If 1, Remove ammo pile in end saferoom
		l4d_coop_saferoom_resupply_remove_end_ammo "0"

		// Amount of HP a survivor can restore in saferoom (0=off)
		// Amount of HP Dead survivor respawn with on next level (0=off)
		// Can set number above 100
		l4d_coop_saferoom_resupply_hp "50"

		// If 1, refill players' weapon ammo
		l4d_coop_saferoom_resupply_ammo "1"

		// (L4D2) Give medical item to survivor player
		// 0=Off, 1=Med Kit, 2=Defibrillator, 3=Pain pill, 4=Adrenaline, 5=Random
		// (If player had item, it does nothing)
		l4d_coop_saferoom_resupply_medical "5"

		// (L4D1) Give medical item to survivor player
		// 0=Off, 1=Med Kit, 2=Pain pill, 3=Random
		// (If player had item, it does nothing)
		l4d_coop_saferoom_resupply_medical "3"

		// If 1, Set health + remove kits/ammo pile + give medical item in the first map start saferoom
		l4d_coop_saferoom_resupply_first_map "0"
		```
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.1 (2025-1-16)
		* Update cvars
		* Remove saferoom ammo

	* v1.0 (2024-4-13)
		* Initial Release
</details>

- - - -
# 中文說明
戰役模式通關之時，恢復倖存者血量 + 補充彈藥 + 補充醫療物品 

* 原理
	* 當玩家過關時
		* 如果有倖存者低於50hp，將血量回復為50hp
		* 倒地玩家會救起來，並將血量回復為50hp
		* 黑白狀態也會解除，並將血量回復為50hp
		* 死亡的倖存者下一關會以50hp復活
		* 補充倖存者的武器彈藥
		* 補充醫療物品
	* 只適用於戰役和寫實模式

* 用意在哪?
	* 解決每次玩家都要故意自殺獲得下一關復活50hp的問題
	
* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d_coop_saferoom_resupply.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		l4d_coop_saferoom_resupply_enable "1"

		// 為1時，移除起始安全室內的治療包
		l4d_coop_saferoom_resupply_remove_start_kits "1"

		// 為1時，移除終點安全室內的治療包
		l4d_coop_saferoom_resupply_remove_end_kits "1"

		// 為1時，移除起始安全室內的彈藥堆
		l4d_coop_saferoom_resupply_remove_start_ammo "1"

		// 為1時，移除終點安全室內的彈藥堆
		l4d_coop_saferoom_resupply_remove_end_ammo "0"

		// 通關時如果低於50血量則回復到50hp (0=不設置)
		// 死亡的倖存者下一關會以50hp復活 (0=不設置)
		// 數值可以設置超過100
		l4d_coop_saferoom_resupply_hp "50"

		// 為1時，通關時補充倖存者的武器彈藥
		l4d_coop_saferoom_resupply_ammo "1"

		// (L4D2) 通關時給予的治療物品
		// 0=不給, 1=治療包, 2=電擊器, 3=藥丸, 4=腎上腺素, 5=隨機
		// (如果倖存者已有物品, 則不給予)
		l4d_coop_saferoom_resupply_medical "5"

		// (L4D1) 通關時給予的治療物品
		// 0=不給, 1=治療包, 2=藥丸, 3=隨機
		// (如果倖存者已有物品, 則不給予)
		l4d_coop_saferoom_resupply_medical "3"

		// 為1時，地圖第一關，刪除起始安全室內治療物品/彈藥堆 + 設置血量
		l4d_coop_saferoom_resupply_first_map "0"
		```
</details>
