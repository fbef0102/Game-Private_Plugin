# Description | 內容
Display instruction hint when someone uses ammo or laser sight

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Apply to | 適用於
	```
	L4D2
	```

* Image | 圖示
	* Laser Sight (雷射裝置)
	<br/>![AnnouceLaserAmmo_1](image/AnnouceLaserAmmo_1.jpg)
	* Ammo (子彈推)
	<br/>![AnnouceLaserAmmo_2](image/AnnouceLaserAmmo_2.jpg)

* Require | 必要安裝
<br>None

* Similar Plugin | 相似插件
	1. [l4d2_item_hint](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4d2_item_hint): When using 'Look' in vocalize menu, print corresponding item to chat area and make item glow or create spot marker/infeced maker like back 4 blood.
	    > 使用語音雷達"看"可以標記任何物品、武器、地點、特感

* Note
	* Player must Enabled GAME INSTRUCTOR, in ESC -> Options -> Multiplayer, or they can't see the hint
    * DO NOT modify convar ```sv_gameinstructor_disable``` this force all clients to disable their game instructors.

* <details><summary>Changelog | 版本日誌</summary>

	* v1.0 (2022-11-29)
        * Initial Release
</details>

- - - -
# 中文說明
玩家補給子彈或雷射時顯示大大的提示給其他玩家看到

* 原理
    * 當玩家升級雷射裝置的時候，顯示大大的提示告訴隊友在哪裡
    * 當玩家補給子彈的時候，顯示大大的提示告訴隊友在哪裡

* 注意事項
	* 玩家必須啟動[遊戲指導系統](/Tutorial_教學區/Chinese_繁體中文/Game/README.md#啟動遊戲指導系統)，ESC->選項->多人連線->遊戲指導系統->已啟用，否則玩家看不見標記提示
    * 伺服器端不要修改指令 ```sv_gameinstructor_disable```，這會關閉所有玩家的遊戲指導系統