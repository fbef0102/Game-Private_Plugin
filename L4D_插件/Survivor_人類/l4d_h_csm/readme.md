# Description | 內容
Allows players to change their L4D1/2 character or model in-game!

> __Note__ <br/>
This plugin is private, Please contact [me](/#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](/#私人插件列表-private-plugins-list)

* Apply to | 適用於
	```
	L4D1
	L4D2
	```

* [Video | 影片展示](https://youtu.be/NoMHRxnKnFI)

* Image
	<br/>![l4d_h_csm_1](image/l4d_h_csm_1.jpg)
	<br/>![l4d_h_csm_2](image/l4d_h_csm_2.jpg)

* <details><summary>How does it work?</summary>

	* Type ```!csm``` to open menu -> Choose l4d1 character or l4d2 character
	* Save player character with cookie. Player will have same character if rejoin server next time.
</details>

* <details><summary>Notice</summary>

	* Either changing character or changinge model only, you could encounter bunch of bugs, such as charger stop bug, witch incorrect target bug..., read [8+_Survivors_In_Coop](/Tutorial_教學區/English/Game/L4D2/8%2B_Survivors_In_Coop#require) to install require plugins to fix.
	* If you change model only, charactor voice still not changed. To fix this problem, install [l4d2_vocalizebasedmodel](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4d2_vocalizebasedmodel)
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	2. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)
	3. [l4d2_vocalizebasedmodel](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4d2_vocalizebasedmodel)

* <details><summary>ConVar</summary>

	* cfg/sourcemod/l4d_h_csm.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d_h_csm_enable "1"

		// changes how message displays. (0: Disable, 1:In chat, 2: In Hint Box, 3: In center text)
		l4d_h_csm_type "1"

		// Players with these flags have access to open Character Select Menu (Empty = Everyone, -1: Nobody)
		l4d_h_csm_access_flag ""

		// Sets the number of times clients can change their character per round.
		l4d_h_csm_change_limit "9999"

		// If 1, close Character Select Menu after select
		l4d_h_csm_close_menu "0"

		// If 1, use CookiesCached to save player character. Player will have same character if rejoin server next time.
		l4d_h_csm_save_character_enable "1"

		// (L4D2) If 1, set thirdperson view after player selects character.
		l4d_h_csm_thirdperson_view "1"

		// If 1, when a player changes character, fixes attachments to their weapons. (Dropping the weapon for 0.1 seconds and re-equipping)
		l4d_h_csm_requip_weapons "1"

		// If 1, the following cmd is available, !c,!coach,!n,!nick,!e,!ellis,!r,!rochelle,!b,!bill,!z,!zoey,!f,!francis,!l,!louis
		l4d_h_csm_short_cmd "0"
		```
</details>

* <details><summary>Command</summary>
	
	* **Brings up a menu to select a different character**
		```php
		sm_csm
		```

	* **Brings up a menu to select a client's character (Adm required: ADMFLAG_ROOT)**
		```php
		sm_csc
		```

	* **Change character model to Coach**
		```php
		sm_c
		sm_coach
		```

	* **Change character model to Nick**
		```php
		sm_n
		sm_nick
		```

	* **Change character model to Ellis**
		```php
		sm_e
		sm_ellis
		```

	* **Change character model to Rochelle**
		```php
		sm_r
		sm_rochelle
		```

	* **Change character model to Bill**
		```php
		sm_b
		sm_bill
		```

	* **Change character model to Zoey**
		```php
		sm_z
		sm_zoey
		```

	* **Change character model to Franics**
		```php
		sm_f
		sm_francis
		```

	* **Change character model to Louis**
		```php
		sm_l
		sm_louis
		```
</details>

* <details><summary>API | 串接</summary>

	* [l4d_h_csm.inc](scripting\include\l4d_h_csm.inc)
		```php
		library name: l4d_h_csm
		```
</details>

* Translation Support | 支援翻譯
	```
	translations/l4d_h_csm.phrases.txt
	```

* <details><summary>Related Plugin | 相關插件</summary>

	1. [l4d2_vocalizebasedmodel](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4d2_vocalizebasedmodel): Survivors will vocalize based on their model
		> 依照目前模組給予相對應的角色語音
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.9h (2024-11-11)
		* Optimize code
		* Update translation

	* v1.8h (2024-9-7)
		* Fixed change wrong character by !francis cmd 

	* v1.7h (2024-4-7)
		* Update Cvars
		* Update Cmds

	* v1.6h (2024-3-15)
		* Update API
		* Update Cvars
		* Optimize code and improve performance
		* When a player changes model, fixes attachments to their weapons. (Dropping the weapon for 0.1 seconds and re-equipping)

	* v1.5h (2024-2-25)
		* Can't change character if survivor is incap, hanging or pinned by infected
		* Update Translation

	* v1.4h (2024-2-18)
		* Update Cvars

	* v1.3h (2023-12-18)
		* Require left4dhooks v1.33 or above
		* Add api

	* v1.2h (2023-1-15)
		* Support L4D1
		* Use CookiesCached to save player character. Player will have same character if rejoin server next time.

	* v1.1h (2022-11-22)
		* Change prop m_survivorCharacter when change l4d1 or l4d2 model only 
		* Save Menu Position

	* v1.0h
		* Remake code
		* Remove unuseful cvars
		* Safely change character and model
		* Add command to change model directly

	* 2.5a/b
		* [By mi123645](https://forums.alliedmods.net/showthread.php?t=107121)
</details>

- - - -
# 中文說明
允許玩家在遊戲中更換一二代角色

* 圖示
	<br/>![l4d_h_csm_1](image/chi/l4d_h_csm_1.jpg)
	<br/>![l4d_h_csm_2](image/chi/l4d_h_csm_2.jpg)

* 原理
	* 輸入```!csm```打開介面選擇一代或二代角色，
	* 有自動保存機制，玩家下次加入倖存者之後自動變成上一次選擇的角色
	* 適用於三方圖

* 注意事項
	* 無論是改變角色或是只切換模組，可能會遇到很多麻煩的bug，譬如Witch追錯人、Charger無法撞開玩家等等之類，請閱讀這篇文章[8位玩家遊玩戰役模式](/Tutorial_教學區/Chinese_繁體中文/Game/L4D2/8位玩家遊玩戰役模式)，安裝必要檔案以修正.
    * 選擇更換模組只有外觀改變，手臂、頭像、語音還是原本的角色，如果要修正語音請安裝[l4d2_vocalizebasedmodel](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4d2_vocalizebasedmodel)

* <details><summary>指令中文介紹(點我展開)</summary>

	* cfg/sourcemod/l4d_h_csm.cfg
		```php
		// 0=啟動插件, 1=關閉插件.
		l4d_h_csm_enable "1"

		// 如何顯示提示 (0: 關閉提示, 1:聊天框, 2: 螢幕下方黑底白字窗口, 3: 螢幕正中間)
		l4d_h_csm_type "1"

		// 擁有這些權限的玩家可以使用!csm命令更換角色 (留白 = 任何人都能使用, -1: 無人能使用)
		l4d_h_csm_access_flag ""

		// 每一回合限制玩家切換角色的次數
		l4d_h_csm_change_limit "9999"

		// 為1時，當選擇完畢角色之後自動關閉介面
		l4d_h_csm_close_menu "0"

		// 使用Cookies保存玩家選擇的角色，意思是說玩家下次加入倖存者之後自動變成上一次選擇的角色
		l4d_h_csm_save_character_enable "1"

		// 為1時，當選擇完畢角色之後切換短暫的第三人稱視角鏡頭
		l4d_h_csm_thirdperson_view "1"

		// 為1時，當玩家切換角色之時，修復身上持有的武器與物資模型錯亂 (重新裝備所有武器與物資)
		l4d_h_csm_requip_weapons "1"

		// 為1時，可以輸入以下指令直接切換角色
		// !c,!coach,!n,!nick,!e,!ellis,!r,!rochelle,!b,!bill,!z,!zoey,!f,!francis,!l,!louis
		l4d_h_csm_short_cmd "0"
		```
</details>

* <details><summary>命令中文介紹(點我展開)</summary>
	
	* **打開一二代角色選擇介面**
		```php
		sm_csm
		```

	* **管理員強制指定的玩家切換角色 (權限: ADMFLAG_ROOT)**
		```php
		sm_csc
		```

	* **切換角色成 Coach**
		```php
		sm_c
		sm_coach
		```

	* **切換角色成 Nick**
		```php
		sm_n
		sm_nick
		```

	* **切換角色成 Ellis**
		```php
		sm_e
		sm_ellis
		```

	* **切換角色成 Rochelle**
		```php
		sm_r
		sm_rochelle
		```

	* **切換角色成 Bill**
		```php
		sm_b
		sm_bill
		```

	* **切換角色成 Zoey**
		```php
		sm_z
		sm_zoey
		```

	* **切換角色成 Franics**
		```php
		sm_f
		sm_francis
		```

	* **切換角色成 Louis**
		```php
		sm_l
		sm_louis
		```
</details>