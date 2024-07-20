# Description | 內容
Survivors can't pick up weapons and items before the start of each round 
<br/>+ 
<br/>Gives health items and throwables to survivors at the start of each round

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/1G6euowfyFI)

* Image | 圖示
	<br/>![starting_items_1](image/starting_items_1.jpg)
	<br/>![starting_items_2](image/starting_items_2.jpg)
	<br/>![starting_items_3](image/starting_items_3.jpg)

* <details><summary>How does it work?</summary>

	* Before game starts
		* Survivors can't pick up weapons and items before the start of each round
		* Can't shoot any gascan before the start of each round
	* After game starts or round is live
		* This plugin will give some items such as Defib, Pill, Adren, Pipebomb, Molotov, Bile
	* "Game starts" meaning
		* Survivors leave the saferoom
		* Survival starts
		* Scavenge starts
		* Everyone is ready (Support readyup plugin)
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	2. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)
    3. [[INC] l4d2_weapons](/left4dead2/scripting/include/l4d2_weapons.inc)
	4. Optional - [readyup](/Plugin_插件/Server_伺服器/readyup)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/starting_items.cfg
		```php
		// Changes how message displays. (0: Disable, 1:In chat, 2: In Hint Box, 3: In center text)
		starting_items_announce_type "2"

		// 0=Plugin off, 1=Plugin on.
		starting_items_enable "1"

		// Weapon flags that survivors can't pick up/ignite/shoot before leaving the saferoom or round live
		// 1: slot 1, 2: slot 2, 4: slot 3, 8: slot 4, 16: slot 5, 32: Prop items, 64: Cola, 128: Gnome
		// Add numbers together, 255=All
		starting_items_ready_disable_weapon_slot "255"

		// Item flags to give on leaving the saferoom or round live
		// 1: Kit, 2: Defib, 4: Pills, 8: Adren, 16: Pipebomb, 32: Molotov, 64: Bile
		// Add numbers together, 127=All
		starting_items_round_live_give_flags "41"
		```
</details>

* <details><summary>Command | 命令</summary>

	None
</details>

* Apply to | 適用於
	```
	L4D2 Any Mode
	```

* <details><summary>Translation Support | 支援翻譯</summary>

	```
	English
	繁體中文
	简体中文
	```
</details>

* <details><summary>Related Plugin | 相關插件</summary>

	1. [readyup](/Plugin_插件/Server_伺服器/readyup): Ready Plugin
		* 所有玩家準備才能開始遊戲的插件
</details>

* <details><summary>Changelog | 版本日誌</summary>
	
	* v1.2h (2024-2-27)
		* Fixed survivors can pick up "gnome, cola"
		* Update cvars

	* v1.1h (2023-7-12)
		* Fixed plugin is not working in coop/realism mode
	
	* v1.0h (2023-5-31)
		* Remake code, convert code to latest syntax
		* Fix warnings when compiling on SourceMod 1.11.
		* Optimize code and improve performance
		* Survivors can't pick up weapons and items before the start of each round 
		* Can't ignite gascan, firebox, prop tanks before the start of each round 
		* Translation Support

	* v2.2
		* [From SirPlease/L4D2-Competitive-Rework](https://github.com/SirPlease/L4D2-Competitive-Rework/blob/master/addons/sourcemod/scripting/starting_items.sp)
</details>

- - - -
# 中文說明
回合開始之前不得拿武器與物品 + 回合開始之後自動給予一些物資

* 原理
	* 遊戲開始之前
		* 不准撿起地圖上的武器與物品
		* 不准點燃汽油桶、瓦斯桶、煙火盒
	* 遊戲開始之後，插件會給予火瓶、腎上腺素、治療包等物品
	* 這裡指的"遊戲開始"是
		1. 戰役/對抗/寫實中離開安全室
		2. 生存模式計時開始
		3. 清道夫模式計時開始
		4. 所有人準備之前 (支援準備插件)
	* 不影響過關攜帶的武器

* <details><summary>指令中文介紹(點我展開)</summary>

	* cfg/sourcemod/starting_items.cfg
		```php
		// 訊息顯示位置. (0: 關閉, 1: 聊天窗, 2: 螢幕下方黑底白字窗, 3: 螢幕正中間)
		starting_items_announce_type "2"

		// 0=插件關閉, 1=插件開啟.
		starting_items_enable "1"

		// 遊戲開始之前不能撿起的武器或物品
		// 0: 關閉此功能, 1: 主武器, 2: 副武器, 4: 投擲物品, 8: 醫療包, 電擊器, 燃燒彈包與高爆彈包, 16: 藥丸與腎上腺素, 32: 汽油桶、煙火盒、瓦斯桶、氧氣灌, 64: 可樂瓶, 128: 精靈小矮人
		// 請將數字相加起來, 255=全部都不能撿
		starting_items_ready_disable_weapon_slot "63"

		// 遊戲開始之後，插件會給予的物資
		// 0: 關閉此功能, 1: 醫療包, 2: 電擊器, 4: 藥丸, 8: 腎上腺素, 16: 土製炸彈, 32: 火瓶, 64: 膽汁瓶
		// 請將數字相加起來, 127=全部都給
		starting_items_round_live_give_flags "41"
		```
</details>