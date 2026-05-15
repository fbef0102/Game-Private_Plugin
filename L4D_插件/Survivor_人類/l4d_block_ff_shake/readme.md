# Description | 內容
Prevent survivor vision from getting experiencing recoil and screen shaking when teammates or bots shoot/shove you

> __Note__ <br/>
This plugin is private, Please contact [me](/#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](/#私人插件列表-private-plugins-list)

* Apply to | 適用於
	```
	L4D1 
	L4D2
	```

* [Video | 影片展示](https://youtu.be/0OrwigCSTMY)

* Image | 圖示
	| Before (裝此插件之前) | After (裝此插件之後) |
	| -------------|:-----------------:|
	| ![l4d_block_ff_shake_1](image/l4d_block_ff_shake_1.gif)|![l4d_block_ff_shake_2](image/l4d_block_ff_shake_2.gif)|
	| ![l4d_block_ff_shake_3](image/l4d_block_ff_shake_3.gif)|![l4d_block_ff_shake_4](image/l4d_block_ff_shake_4.gif)|

* <details><summary>How does it work?</summary>

	* Before
		* When teammmates or ai bots shoot you
			* Screen shaking
			* Experiencing recoil
		* When teammmates or ai bots shoves you
			* Screen shaking
			* Experiencing recoil
	* After
		* When teammates or ai bots shoot you
			* No screen shaking
			* Not getting experiencing recoil
		* When teammates or ai bots shove you
			* No screen shaking
			* Not getting experiencing recoil
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_block_ff_shake.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d_block_ff_shake_enable "1"

		// 1=Block FF shaking, 2=Block shove shaking, 3=Both
		l4d_block_ff_shake_type "3"

		// Players with these flags have can block ff shaking. (Empty = Everyone, -1: Nobody)
		l4d_block_ff_shake_ff_flag ""

		// Players with these flags have can block shove shaking. (Empty = Everyone, -1: Nobody)
		l4d_block_ff_shake_shove_flag ""
		```
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.3 (2026-5-15)
		* Improve code
		* Use detour to remove scree shaking
		* 不會與友傷插件產生衝突
		* Won't conflict with other friend fire damage modify plugins

	* v1.2 (2024-12-23)
		* Update cvars

	* v1.1 (2024-10-8)
		* Fixed shove not working on teammate who is pinned by infected

	* v1.0 (2023-4-6)
		* Initial Release
</details>

- - - -
# 中文說明
關閉子彈打中與右鍵推人造成隊友螢幕晃動與後座力降低

* 原理
	* 裝此插件之前
		* 官方預設中，當你被隊友或Bots的子彈打中
			* 使得隊友螢幕晃動
			* 隊友的後座力會降低
		* 官方預設中，當你被隊友或Bots的右鍵推到
			* 使得隊友螢幕晃動
			* 隊友的後座力會降低
	* 裝此插件之後
		* 當你被隊友或Bots的子彈打中
			* 不會使得隊友螢幕晃動
			* 不會使得隊友的後座力降低
		* 當你被隊友或Bots的右鍵推到
			* 不會使得隊友螢幕晃動
			* 不會使得隊友的後座力降低

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d_block_ff_shake.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		l4d_block_ff_shake_enable "1"

		// 1=隊友或Bots的子彈打中不會使得螢幕晃動, 2=隊友或Bots的右鍵推到不會使得螢幕晃動, 3=兩者皆是
		l4d_block_ff_shake_type "3"

		// 擁有這些權限的玩家，被隊友的子彈打中不會螢幕晃動 (留白 = 任何人都能, -1: 無人)
		l4d_block_ff_shake_ff_flag ""

		// 擁有這些權限的玩家，被隊友的右鍵推到不會螢幕晃動 (Empty = Everyone, -1: Nobody)
		l4d_block_ff_shake_shove_flag ""
		```
</details>