# Description | 內容
Clear survivor/common infected/S.I./Witch ragdolls when they die.

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/QJX4RjQ50Sk)

* Image | 圖示
<br/>None

* Apply to | 適用於
	```
	L4D1
	L4D2
	```

* Related Plugin | 相關插件
	1. Silvers製作的[Dissolve Infected](https://forums.alliedmods.net/showthread.php?t=306789): Dissolves the witch, common or special infected when killed
		> 屍體溶解粒子效果

* <details><summary>Changelog | 版本日誌</summary>

	* v1.0 (2023-1-12)
	    * Original Request by JACK
		* Initial Release
</details>

* Require | 必要安裝
<br/>None

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_ragdoll_clear.cfg
		```php
		// If 1, clear common infected dead body.
		l4d_ragdoll_clear_common_infected "1"

		// 0=Plugin off, 1=Plugin on.
		l4d_ragdoll_clear_enable "1"

		// (L4D2) clear Which zombie class dead body, 0=None, 1=Smoker, =Boomer, 4=Hunter, 8=Spitter, 16=Jockey, 32=Charger, 64=Tank. Add numbers together. (127=All)
		l4d_ragdoll_clear_infected_class "127"

		// Which method to clear dead body, 0=Instantly clear dead body, 1=Fade dead body (Not works sometimes).
		l4d_ragdoll_clear_method "0"

		// If 1, clear survivor death model.
		l4d_ragdoll_clear_survivor_death_model "1"

		// If 1, clear witch dead body.
		l4d_ragdoll_clear_witch "1"
		```
</details>

* <details><summary>Command | 命令</summary>

	None
</details>

- - - -
# 中文說明
當人類、普通感染者、特感、Witch死亡時，他們的屍體立即消失並清除

* 原理
	* 當普通感染者、特感、Witch死亡時，屍體立即消失並清除
	* 當人類死亡時，屍體消逝並刪除

* 功能
	* 可設置是否刪除普通感染者的屍體
	* 可設置是否刪除Witch的屍體
	* 可設置是否刪除人類的屍體，不能用電擊器復活，請斟酌
	* 可設置刪除哪些特感種類的屍體
	* 可設置兩種方法刪除屍體

* 注意事項
	* 另一種刪除屍體的方法為指令```l4d_ragdoll_clear_method 1```，慢慢地消逝，但是偶而不會有作用
	* 如果你希望慢慢消逝地普通感染者、特感、Witch不需要指令控制分類，那推薦你使用由silvers大老製作的[l4d_ragdoll_fader](https://forums.alliedmods.net/showpost.php?p=2677866&postcount=62)

* 用意在哪?
	* 地圖乾淨俐落，不要有任何礙眼的屍體
	* 減少屍體增加伺服器與玩家畫面的流暢度
	* 有的玩家單純不想看到屍體與血腥畫面，希望屍體消失