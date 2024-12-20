# Description | 內容
Survivors can not deadstop jockey while leaping

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Video | 影片展示
<br/>None

* Image | 圖示
<br/>None

* <details><summary>How does it work?</summary>

	* Survivors can not shove jockey while jockey is leaping on air
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	2. [l4d_fix_shove_duration](https://github.com/Target5150/MoYu_Server_Stupid_Plugins/tree/master/The%20Last%20Stand/l4d_fix_shove_duration)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d2_no_jockey_deadstop.cfg
		```php
		// Survivor can not shove jockeys while leaping [0: can shove, 1: unable to shove]
		l4d2_no_jockey_deadstop_leaping "1"

		// Survivor can not shove jockeys while not leaping [0: can shove, 1: unable to shove]
		l4d2_no_jockey_deadstop_not_leaping "0"

		// Survivor can not shove jockeys while ridding survivor victim [0: can shove, 1: unable to shove]
		l4d2_no_jockey_deadstop_victim "0"
		```
</details>

* <details><summary>Command | 命令</summary>

	None
</details>

* Apply to | 適用於
	```
	L4D2
	```

* <details><summary>Related Plugin | 相關插件</summary>

	1. [l4d2_Sinister_Jockey](/L4D_插件/Jockey_Jockey/l4d2_Sinister_Jockey): Allows for unique Jockey abilities to empower the small tyrant.
		> 增強Jockey，賦予多種超能力成為小小的暴君
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.1 (2024-2-21)
		* Optimize code and improve performance
		* To fix jockey unable to ride survivor when block shove, please install l4d_fix_shove_duration

	* v1.0 (2024-1-2)
		* Initial Release
</details>

- - - -
# 中文說明
Jockey跳躍空中時不能被推

* 原理
	* Jockey跳躍時，倖存者不能推開Jockey

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d2_no_jockey_deadstop.cfg
		```php
		// Jockey跳躍空中時不能被推 [0: 可以推, 1: 不能推]
		l4d2_no_jockey_deadstop_leaping "1"

		// Jockey在地面時不能被推 [0: 可以推, 1: 不能推]
		l4d2_no_jockey_deadstop_not_leaping "0"

		// Jockey抓住騎走人類時不能被推 [0: 可以推, 1: 不能推]
		l4d2_no_jockey_deadstop_victim "0"
		```
</details>