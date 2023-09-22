# Description | 內容
Set survivor health when mission completes in coop mode

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/-1iLdUa1bsg)

* Image | 圖示
	<br/>None

* <details><summary>How does it work?</summary>

	* When survivors have made it to saferoom
		* Any survivor who has less than 50hp will be restored to 50 permant health
		* Save any incapacitated survivor and gain 50 permant health
		* Remove black and white and gain 50 permant health
		* Dead survivor will respawn with 50hp on next level
	* Apply to coop/realism mode only
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_full_hp_map_transition.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d_full_hp_map_transition_allow "1"

		// Amount of HP an alive survivor can restore in saferoom + Dead survivor respawn with on next level. (Def 50)
		l4d_full_hp_map_transition_hp "50"
		```
</details>

* <details><summary>Command | 命令</summary>
	
	None
</details>

* Apply to | 適用於
	```
	L4D1 Coop
	L4D2 Coop/Realism
	```

* <details><summary>Changelog | 版本日誌</summary>

	* v1.3
		* Initial Release
</details>

- - - -
# 中文說明
戰役模式通關之時恢復並設定倖存者血量

* 原理
	* 當玩家過關時
		* 如過有倖存者低於50hp，將血量回復為50hp
		* 倒地玩家會救起來，並將血量回復為50hp
		* 黑白狀態也會解除，並將血量回復為50hp
		* 死亡的倖存者下一關會以50hp復活
	* 只適用於戰役和寫實模式

* 用意在哪?
	* 用來解決每次玩家都要故意自殺獲得下一關復活50hp的問題
	
* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d_full_hp_map_transition.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		l4d_full_hp_map_transition_allow "1"

		// 過關時如果低於50血量則回復到50hp (Def 50)
		// 死亡的倖存者下一關會以50hp復活
		l4d_full_hp_map_transition_hp "50"
		```
</details>
