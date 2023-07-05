# Description | 內容
Allows players to change their L4D1/2 character or model in-game!

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/NoMHRxnKnFI)

* Image
	* display message
	<br/>![l4d_h_csm_1](image/l4d_h_csm_1.jpg)
	* typ !csm to open menu
	<br/>![l4d_h_csm_2](image/l4d_h_csm_2.jpg)

* Apply to | 適用於
	```
	L4D1
	L4D2
	```

* Translation Support | 支援翻譯
	```
	English
	繁體中文
	简体中文
	```

* <details><summary>Changelog | 版本日誌</summary>

	```php
	//mi123645 @ 2009 - 2010
	//Harry @ 2022-2023
	```
	* v1.3h (2023-6-22)
		* Require left4dhooks v1.33 or above

	* v1.2h (2023-1-15)
		* Request by eviltechno
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
		* Request by Yabi

	* 2.5a/b
		* [By mi123645](https://forums.alliedmods.net/showthread.php?t=107121)
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	2. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)
	3. [Real Zoey Unlock](https://forums.alliedmods.net/showthread.php?t=308483): (Windows servers only) Unlocks Zoey. No bugs. No crashes. No fakes. The Real Deal.
		> 修正在二代地圖上生成Zoey角色會導致遊戲崩潰 (這崩潰只會發生在windows服，linux系統無須安裝)

* Related Plugin | 相關插件
	1. [l4d2_vocalizebasedmodel](https://github.com/fbef0102/L4D2-Plugins/tree/master/l4d2_vocalizebasedmodel): Survivors will vocalize based on their model
		> (公開) 依照目前模組給予相對應的角色語音

* <details><summary>ConVar</summary>

	* cfg/sourcemod/l4d_h_csm.cfg
		```php
		// Players with these flags have access to open Character Select Menu (Empty = Everyone, -1: Nobody)
		l4d_h_csm_access_flag ""

		// Sets the number of times clients can change their character per round.
		l4d_h_csm_change_limit "9999"

		// If 1, close Character Select Menu after select
		l4d_h_csm_close_menu "0"

		// 0=Plugin off, 1=Plugin on.
		l4d_h_csm_enable "1"

		// If 1, use CookiesCached to save player character. Player will have same character if rejoin server next time.
		l4d_h_csm_save_character_enable "1"

		// changes how message displays. (0: Disable, 1:In chat, 2: In Hint Box, 3: In center text)
		l4d_h_csm_type "1"
		```
</details>

* <details><summary>Command</summary>
	
	* **Brings up a menu to select a different character**
		```php
		sm_csm
		```

	* **Brings up a menu to select a client's character (Adm required: ADMFLAG_GENERIC)**
		```php
		sm_csc
		```
</details>

* Notice
	* Either changing character or changinge model only, you could encounter bunch of bugs, such as charger stop bug, witch incorrect target bug..., read [8+_Survivors_In_Coop](https://github.com/fbef0102/Game-Private_Plugin/tree/main/Tutorial_%E6%95%99%E5%AD%B8%E5%8D%80/English/Game/L4D2/8%2B_Survivors_In_Coop#require) to install require plugins to fix.
    * If you change model only, charactor voice still not changed. To fix this problem, install [l4d2_vocalizebasedmodel](https://github.com/fbef0102/L4D2-Plugins/tree/master/l4d2_vocalizebasedmodel)

- - - -
# 中文說明
允許玩家在遊戲中更換一二代角色

* 圖示
	<br/>![l4d_h_csm_1](image/chi/l4d_h_csm_1.jpg)
	<br/>![l4d_h_csm_2](image/chi/l4d_h_csm_2.jpg)

* 原理
	* 此為CSM插件重製版，輸入!csm打開角色選擇介面
	* 在地圖上自由切換一代或二代角色
	* 適用於三方圖

* 功能
    * 參見下方"指令中文介紹"

* 注意事項
	* 無論是改變角色或是只切換模組，可能會遇到很多麻煩的bug，譬如Witch追錯人、Charger無法撞開玩家等等之類，請閱讀這篇文章[8位玩家遊玩戰役模式](https://github.com/fbef0102/Game-Private_Plugin/tree/main/Tutorial_%E6%95%99%E5%AD%B8%E5%8D%80/Chinese_%E7%B9%81%E9%AB%94%E4%B8%AD%E6%96%87/Game/L4D2/8%E4%BD%8D%E7%8E%A9%E5%AE%B6%E9%81%8A%E7%8E%A9%E6%88%B0%E5%BD%B9%E6%A8%A1%E5%BC%8F#%E5%BF%85%E8%A6%81%E6%AA%94%E6%A1%88) 安裝必要檔案以修正.
    * 選擇更換模組只有外觀改變，手臂、頭像、語音還是原本的角色，如果要修正語音請安裝[l4d2_vocalizebasedmodel](https://github.com/fbef0102/L4D2-Plugins/tree/master/l4d2_vocalizebasedmodel)

* <details><summary>指令中文介紹(點我展開)</summary>

	* cfg/sourcemod/l4d_h_csm.cfg
		```php
		// 0=啟動插件, 1=關閉插件.
		l4d_h_csm_enable "1"

		// 擁有這些權限的玩家可以使用!csm命令更換角色 (留白 = 任何人都能使用, -1: 無人能使用)
		l4d_h_csm_access_flag ""

		// 每一回合限制玩家切換角色的次數
		l4d_h_csm_change_limit "9999"

		// 為1時，當選擇完畢角色之後自動關閉介面
		l4d_h_csm_close_menu "0"

		// 使用Cookies保存玩家選擇的角色，意思是說玩家下次加入倖存者之後自動變成上一次選擇的角色
		l4d_h_csm_save_character_enable "1"

		// 如何顯示提示 (0: 關閉提示, 1:聊天框, 2: 螢幕下方黑底白字窗口, 3: 螢幕正中間)
		l4d_h_csm_type "1"
		```
</details>

* <details><summary>命令中文介紹(點我展開)</summary>
	
	* **打開一二代角色選擇介面**
		```php
		sm_csm
		```

	* **管理員強制指定的玩家切換角色 (權限: ADMFLAG_GENERIC)**
		```php
		sm_csc
		```
</details>