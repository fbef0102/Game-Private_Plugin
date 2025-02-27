# Description | 內容
Player can pass slot 3~5 items(molo, pipe, vomitjar, defi, kit, explosive pack, incendiary pack, pill, adren) with +Reload button

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Apply to | 適用於
	```
	L4D1
	L4D2
	```

* Image | 圖示
	<br/>![l4d_item_passer_1](image/l4d_item_passer_1.gif)
	<br/>![l4d_item_passer_2](image/l4d_item_passer_2.gif)

* <details><summary>How does it work?</summary>

	* Switch item and hold －＞ Aim teammate－＞ Press R button －＞ Item transferred, teammate equips
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

	* cfg/sourcemod/l4d_item_passer.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d_item_passer_enable "1"

		// How message displays. (0: Disable, 1:In chat, 2: In Hint Box, 3: In center text)
		l4d_item_passer_announce_type "1"

		// How close you have to be to pass an item.
		l4d_item_passer_dist "220.0"

		// (L4D2) Which item can give. 1=Adrenaline, 2=Pain Pills, 4=Molotov, 8=Pipe Bomb, 16=Vomit Jar, 32=Kit , 64=Explosive Rounds, 128=Incendiary Rounds, 256=Defibrillator. Add numbers together (511=All, 0=Off).
		l4d_item_passer_flag "511"

		// (L4D1) Which item can give. 1=Pain Pills, 2=Molotov, 4=Pipe Bomb, 8=Kit. Add numbers together (15=All, 0=Off).
		l4d_item_passer_flag "511"

		// Which key to pass items? 1=Reload, 2=Right Mouse, 4=Use, add numbers together
		l4d_item_passer_type "1"
		```
</details>

* Translation Support | 支援翻譯
	```
	translations/l4d_item_passer.phrases.txt
	```

* <details><summary>Changelog | 版本日誌</summary>
	
	* v1.1h (2024-10-26)
		* Update cvars

	* v1.0h (2024-8-20)
		* Pass more items with +reload button
		* Add cvars
		* Individual plugin, Remove require plugins
		* Change method to give items instead of removing and creating entities

	* v1.6.2
		* [From SirPlease/L4D2-Competitive-Rework](https://github.com/SirPlease/L4D2-Competitive-Rework/blob/master/addons/sourcemod/scripting/pill_passer.sp)
</details>

- - - -
# 中文說明
用R鍵直接傳送物資給隊友 (火瓶、土製炸彈、膽汁瓶、電擊器、治療包、高爆彈包、火焰彈包、藥丸、腎上腺素)

* 原理
	* 拿著物資－＞準心對準隊友－＞按下Ｒ鍵－＞物資會直接給隊友並裝備在身上
	* 支援:
		* Slot 3 的物資: 火瓶、土製炸彈、膽汁瓶
		* Slot 4 的物資: 電擊器、治療包、高爆彈包、火焰彈包
		* Slot 5 的物資: 藥丸、腎上腺素

* <details><summary>指令中文介紹(點我展開)</summary>

	* cfg/sourcemod/l4d_item_passer.cfg
		```php
		// 0=插件關閉, 1=插件開啟.
		l4d_item_passer_enable "1"

		// 提示該如何顯示. (0: 不提示, 1: 聊天框, 2: 黑底白字框, 3: 螢幕正中間)
		l4d_item_passer_announce_type "1"

		// 距離多近才能傳送物品給隊友?
		l4d_item_passer_dist "220.0"

		// (L4D2) 那些物品可傳送? 1=腎上腺素, 2=藥丸, 4=火瓶, 8=土製炸彈, 16=膽汁瓶, 32=治療包, 64=高爆彈包, 128=火焰彈包, 256=電擊器. 請將數字相加起來 (511=全部, 0=無).
		l4d_item_passer_flag "511"

		// (L4D1) 那些物品可傳送? 1=藥丸, 2=火瓶, 4=土製炸彈, 8=治療包 (15=全部, 0=無).
		l4d_item_passer_flag "511"

		// 使用哪個按鍵傳送物資? 1=R鍵, 2=滑鼠右鍵, 4=E鍵, 請將數字相加起來
		l4d_item_passer_type "1"
		```
</details>