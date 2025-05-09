# Description | 內容
Change what item dropped from fallen survivor

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Apply to | 適用於
	```
	L4D2
	```

* Image | 圖示
	<br/>![l4d2_fallen_survivor_item_change_1](image/l4d2_fallen_survivor_item_change_1.gif)
	<br/>![l4d2_fallen_survivor_item_change_2](image/l4d2_fallen_survivor_item_change_2.gif)

* Require | 必要安裝
<br>None

* <details><summary>How does it work?</summary>

	* When items dropped from fallen survivors, they become other items
		* Pipebomb dropped => change into Molotov or VomitJar.
		* Molotov dropped => change into Pipebomb or VomitJar.
		* First aid kit dropped => change into defibrillator.
		* Pill dropped => change into adrenaline.
	* Can't change survivors item display he carries. Why so serious son?
</details>

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d2_fallen_survivor_item_change.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d2_fallen_survivor_item_change_enable "1"

		// Chance that pipebomb from fallen survivor become other throwable when drop.
		// Unchanged/Molotov/VomitJar, separate by commas (no spaces), the sum of 3 value must be 100
		l4d2_fallen_survivor_item_change_pipebomb "50,25,25"

		// Chance that molotov from fallen survivor become other throwable when drop.
		// Unchanged/Molotov/VomitJar, separate by commas (no spaces), the sum of 3 value must be 100
		l4d2_fallen_survivor_item_change_molotov "50,25,25"

		// Chance that first aid kit from fallen survivor become defibrillator when drop. [0~100]%
		l4d2_fallen_survivor_item_change_kit "50"

		// Chance that pill from fallen survivor become adrenaline shot when drop. [0~100]%
		l4d2_fallen_survivor_item_change_pill "50"
		```
</details>

* <details><summary>Related Plugin | 相關插件</summary>

	1. [l4d2_uncommon_adjustment](https://github.com/Target5150/MoYu_Server_Stupid_Plugins/tree/master/The%20Last%20Stand/l4d2_uncommon_adjustment): Uncommon Adjustment
		* 此插件可以控制墮落倖存者攜帶的物品 (只有治療包、藥丸、土製炸彈、火瓶)
	2. [l4d2_spawn_uncommons](/L4D_插件/Common_Infected_普通感染者/l4d2_spawn_uncommons): Spawn Uncommon Infected on all maps  (Support The Last Stand New Model)
    	* 所有地圖上可生成特殊一般感染者，有鎮暴警察、CEDA人員、小丑、泥人、工人、吉米賽車手、墮落倖存者
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.0 (2023-3-27)
		* Initial Release
</details>

- - - -
# 中文說明
改變墮落倖存者掉落的物品

* 原理
	* 官方中的墮落倖存者只能攜帶治療包、藥丸、土製炸彈、火瓶，當墮落倖存者死亡時
		* 治療包有機率變成電擊器
		* 藥丸有機率變成腎上腺素
		* 土製炸彈有機率變成火瓶或膽汁瓶
		* 火瓶有機率變成土製炸彈或膽汁瓶
	* 無法修改墮落倖存者外觀身上顯示的物資，認真你就輸了

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d2_spawn_uncommons.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		l4d2_fallen_survivor_item_change_enable "1"

		// 土製炸彈有機率變成火瓶或膽汁瓶
		// 三個數字分別代表 維持不變/火瓶/膽汁瓶 的機率, 逗號區隔 (無空白). 三個數字加起來必須等於100
		l4d2_fallen_survivor_item_change_pipebomb "50,25,25"

		// 火瓶有機率變成土製炸彈或膽汁瓶
		// 三個數字分別代表 維持不變/土製炸彈/膽汁瓶 的機率, 逗號區隔 (無空白). 三個數字加起來必須等於100
		l4d2_fallen_survivor_item_change_molotov "50,25,25"

		// 治療包有機率變成電擊器 [0~100]%
		l4d2_fallen_survivor_item_change_kit "50"

		// 藥丸有機率變成腎上腺素 [0~100]%
		l4d2_fallen_survivor_item_change_pill "50"
		```
</details>
