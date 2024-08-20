# Description | 內容
Use cmd to play another bot charater

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/cTtf-RG79-8)

* Image | 圖示
	<br/>![l4d_play_character_cmd_1](image/l4d_play_character_cmd_1.gif)
	<br/>![l4d_play_character_cmd_2](image/l4d_play_character_cmd_2.gif)

* <details><summary>How does it work?</summary>

	* Type ```!js <character name>``` to play another character, for example: ```!js rochelle``` to play Rochelle
	* Character name list
		* r=Rochelle
		* e=Ellis
		* n=Nick
		* c=Coach
		* n=Nick
		* b=Bill
		* z=Zoey
		* f=Francis
		* l=Louis
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_play_character_cmd.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d_play_character_cmd_enable "1"

		// Players with these flags have access to use command to play another character. (Empty = Everyone, -1: Nobody)
		l4d_play_character_cmd_access_flag ""

		// If 1, disable cmd after round starts (Survivor left saferoom, Survival/Scavenge begins, round is live...)
		l4d_play_character_cmd_round_disable "0"
		```
</details>

* <details><summary>Command | 命令</summary>

	* **Play another character**
		```php
		// character name list
		// r=Rochelle, e=Ellis, n=Nick, c=Coach, b=Bill, z=Zoey, f=Francis, l=Louis
		sm_js <character name>
		```
</details>

* Apply to | 適用於
	```
	L4D1
	L4D2
	```

* <details><summary>Related Plugin | 相關插件</summary>

	1. [readyup](/Plugin_插件/Server_伺服器/readyup): Ready Plugin
		* 所有玩家準備才能開始遊戲的插件
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.0 (2024-7-21)
		* Initial Release
</details>

- - - -
# 中文說明
Bot角色遊玩

* 原理
	* 玩家輸入```!js <角色名稱>``` 切換到該角色，譬如輸入　```!js rochelle``` 切換到Rochelle角色

* 用意在哪?
	* 幫Bot拿物品或切換自己到喜歡的角色

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d_play_character_cmd.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		l4d_play_character_cmd_enable "1"

		// 擁有這些權限的玩家，才可以輸入!js (留白 = 任何人都能, -1: 無人)
		l4d_play_character_cmd_access_flag ""

		// 為1時，遊戲開始後不能輸入!js (倖存者離開安全室、生存/清道夫 計時開始, 準備階段開始...)
		l4d_play_character_cmd_round_disable "0"
		```
</details>

* <details><summary>命令中文介紹 (點我展開)</summary>

	* **輸入命令切換到另一個角色遊玩**
		```php
		// 角色名稱列表
		// r=Rochelle, e=Ellis, n=Nick, c=Coach, b=Bill, z=Zoey, f=Francis, l=Louis
		sm_js <角色名稱>
		```
</details>
