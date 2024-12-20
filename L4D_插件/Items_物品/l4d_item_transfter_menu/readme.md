# Description | 內容
Press E+Right Mouse to open the menu to transfer to teammate while holding the items and throwables

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Video | 影片展示
<br>None

* Image | 圖示
	<br/>![l4d_item_transfter_menu_1](image/l4d_item_transfter_menu_1.jpg)
	<br/>![l4d_item_transfter_menu_2](image/l4d_item_transfter_menu_2.gif)

* <details><summary>How does it work?</summary>

	* Switch item and hold －＞ Press E + Right Mouse to open menu －＞ Select Teammate －＞ Transfer items or throwables to teammate no matter distance
	* Support:
		* Slot 3 items: molotovs, pipebombs, vomitjars
		* Slot 4 items: defibrillators, first aid kits, explosive packs, incendiary packs
		* Slot 5 items: pills, adrenalines
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	2. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)
    3. [[INC] l4d2_weapons](/L4D_插件/Require_檔案/scripting/include/l4d2_weapons.inc)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_item_transfter_menu.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d_item_transfter_menu_enable "1"

		// How message displays. (0: Disable, 1:In chat, 2: In Hint Box, 3: In center text)
		l4d_item_transfter_menu_announce_type "1"

		// If 1, you can transfer items to bots
		l4d_item_transfter_menu_bot "0"

		// Press which button to trigger menu while holding items & throwables
		// 131072=Shift, 32=USE, 8192=Reload, 2048=IN_ATTACK2, 0=Disable, You can add numbers together
		// 2080=USE+IN_ATTACK2
		l4d_item_transfter_menu_buittons "2080"

		// (L4D2) Which items can transfer via menu. 1=Adrenaline, 2=Pain Pills, 4=Molotov, 8=Pipe Bomb, 16=Vomit Jar, 32=Kit , 64=Explosive Rounds, 128=Incendiary Rounds, 256=Defibrillator. Add numbers together (511=All, 0=Off).
		l4d_item_transfter_menu_flag "511"

		// (L4D1) Which items can transfer via menu. 1=Pain Pills, 2=Molotov, 4=Pipe Bomb, 8=Kit. Add numbers together (15=All, 0=Off).
		l4d_item_transfter_menu_flag "511"

		// Transfer items to same player Cool Down (seconds)
		l4d_item_transfter_menu_cd "60.0"
		```
</details>

* <details><summary>Command | 命令</summary>

	None
</details>

* Apply to | 適用於
	```
	L4D1
	L4D2
	```

* <details><summary>Translation Support | 支援翻譯</summary>

	```
	English
	繁體中文
	简体中文
	```
</details>

* <details><summary>Changelog | 版本日誌</summary>
	
	* v1.0 (2024-12-3)
		* Initial Release
</details>

- - - -
# 中文說明
按E+右鍵打開菜單，傳送手上的物品給隊友 (火瓶、土製炸彈、膽汁瓶、電擊器、治療包、高爆彈包、火焰彈包、藥丸、腎上腺素)，無論距離多遠

* 原理
	* 拿著物資－＞按E+右鍵打開菜單－＞選擇隊友－＞物資會直接給隊友並裝備在身上 (無論距離多遠)
	* 支援:
		* Slot 3 的物資: 火瓶、土製炸彈、膽汁瓶
		* Slot 4 的物資: 電擊器、治療包、高爆彈包、火焰彈包
		* Slot 5 的物資: 藥丸、腎上腺素

* <details><summary>指令中文介紹(點我展開)</summary>

	* cfg/sourcemod/l4d_item_transfter_menu.cfg
		```php
		// 0=插件關閉, 1=插件開啟.
		l4d_item_transfter_menu_enable "1"

		// How message displays. (0: Disable, 1:In chat, 2: In Hint Box, 3: In center text)
		l4d_item_transfter_menu_announce_type "1"

		// 為1時，可以傳送物資給Bots
		l4d_item_transfter_menu_bot "0"

		// 按哪個按鍵打開菜單?
		// 131072=Shift鍵, 32=E鍵, 8192=R鍵, 2048=右鍵, 0=關閉, 可將數字相加
		// 2080 = E鍵+右鍵同時按
		l4d_item_transfter_menu_buittons "2080"

		// (L4D2) 那些物品可傳送? 1=腎上腺素, 2=藥丸, 4=火瓶, 8=土製炸彈, 16=膽汁瓶, 32=治療包, 64=高爆彈包, 128=火焰彈包, 256=電擊器. 請將數字相加起來 (511=全部, 0=無).
		l4d_item_transfter_menu_flag "511"

		// (L4D1) 那些物品可傳送? 1=藥丸, 2=火瓶, 4=土製炸彈, 8=治療包 (15=全部, 0=無).
		l4d_item_transfter_menu_flag "511"

		// 傳送物資給同一位玩家的CD (秒)
		l4d_item_transfter_menu_cd "60.0"
		```
</details>