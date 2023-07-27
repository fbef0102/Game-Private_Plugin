# Description | 內容
If player is spectator or player changes team after survival begins, he can not get the survival time record.

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Video | 影片展示
<br/>None

* Image | 圖示
<br/>None

* Apply to | 適用於
```
L4D2 Survival
```

* <details><summary>Changelog | 版本日誌</summary>

	* v1.1
		* players who were in the survivor team when survival begins will be recorded. Even if they disconnected or leave the team, as long as they return to the team before the end of the round, their time record can still be kept. (this round)

	* v1.0
		* Initial Release
</details>

* Require | 必要安裝
<br/>None

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d2_survival_spectator_reset.cfg
	```php
	// 0=Plugin off, 1=Plugin on.
	l4d2_survival_spectator_reset_enable "1"

	// If 1, idle player can not get time record after survival begins
	l4d2_survival_spectator_reset_idle "0"

	// If 1, players who were in the survivor team when survival begins will be recorded.
	// Even if they disconnected or leave the team, as long as they return to the team before the end of the round, their time record can still be kept. (this round)
	l4d2_survival_spectator_reset_save_SteamID "1"
	```
</details>

* <details><summary>Command | 命令</summary>
	
	None
</details>

- - - -
# 中文說明
生存模式計時開始之後，任何玩家切換到旁觀者、閒置、不在倖存者隊伍內，將無法獲得生存時間紀錄

* 原理
	* 在官方生存模式當中，旁觀者能獲得生存時間紀錄，很多人因此漁翁得利 (去你馬Valve)
	* 旁觀者無法獲得生存時間紀錄
	* 只要倖存者玩家閒置或切換成旁觀者，無法獲得生存時間紀錄

* 功能
	* 可設置插件開關
	* 可設置閒置玩家能否得到時間紀錄
	* 插件會紀錄玩家的Steam ID，只有生存計時開始時就在倖存者隊伍的玩家。即使斷線、離開隊伍，只要回合結束前回到隊伍，仍可獲得時間記錄(該回合)
