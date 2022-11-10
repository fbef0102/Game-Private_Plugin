# Description | 內容
Set survivor health when mission completes in coop mode

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/-1iLdUa1bsg)

* Image | 圖示
	<br/>None

* Apply to | 適用於
```
L4D1 Coop
L4D2 Coop
```

* <details><summary>Changelog | 版本日誌</summary>

	* v1.3
		* Original Request by 壹梦
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_full_hp_map_transition.cfg
	```php
	// 0=Plugin off, 1=Plugin on.
	l4d_full_hp_map_transition_allow "1"

	// Amount of HP a Survivor spawn with. (Def 50)
	l4d_full_hp_map_transition_hp "80"
	```
</details>

* <details><summary>Command | 命令</summary>
	
	None
</details>

- - - -
# 中文說明
戰役模式通關之時回復並設定倖存者血量

* 原理
	* 判定有哪些倖存者低於指令設定的血量
	* 判定為實血而非虛血
	* 最後一條生命黑白狀態也適用
	* 倒地玩家也適用
	* 用來解決每次玩家都要故意自殺獲得下一關復活50hp的問題
	
* 功能
	1. 可設置要回復倖存者的血量
