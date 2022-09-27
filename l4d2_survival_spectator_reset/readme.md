# Description | 內容
If player is spectator when survival begins or player changes team after survival begins, he can not get the survival time record.

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

	```php
	* v1.0
		* Original Request by Dam Dam
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
	```
</details>

* <details><summary>Command | 命令</summary>
	
	None
</details>

- - - -
# 中文說明
生存模式計時開始之後，任何玩家切換到旁觀者、閒置、不在倖存者隊伍內，將無法獲得生存時間紀錄

* 原理
	* 生存計時之時，旁觀者無法獲得生存時間紀錄
	* 生存計時之後，只要倖存者玩家閒置或切換成旁觀者，無法獲得生存時間紀錄

* 功能
	1. 可設置插件開關
	2. 可設置閒置玩家能否得到時間紀錄
