# Description | 內容
Give you a legal aimbot made by sourcemod in l4d

> __Note__ <br/>
This plugin is private, Please contact [me](/#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](/#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/UvHK-LEJ9X8)

* Image | 圖示
	<br/>![l4d_aimbot_1](image/l4d_aimbot_1.gif)
	<br/>![l4d_aimbot_2](image/l4d_aimbot_2.gif)
	<br/>![l4d_aimbot_3](image/l4d_aimbot_3.gif)

* <details><summary>How does it work?</summary>

	* Admin types ```!aimbot``` to enable aimbot -> hold weapon and fire -> enjoy
		* Only you can see the message
		* Target special infecteds, common infecteds, tanks and witches
		* Melee weapons, throwable items not apply
	* 🟥 This won't get you banned or VAC, Valve can't ban you (for cheats) for anything done server side.
	* If you have smac or litte-anti-cheat installed, this plugin will turn off aimbot detection while using ```!aimbot``` command
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	2. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)

* <details><summary>ConVar | 指令</summary>

	* cfg\sourcemod\l4d_aimbot.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d_aimbot_enable "1"

		// Player with these flag have access to enable the protect power (Empty=Everyone, -1=No one)
		l4d_aimbot_flags "z"

		// If 1, off aimbot when player is coverd with bile
		l4d_aimbot_bile_block "1"
		```
</details>

* <details><summary>Command | 命令</summary>

	* **Enable/Disable AimBot**
		```php
		sm_aimbot
		```
</details>

* <details><summary>Data Config</summary>
  
	* [data/l4d_aimbot.cfg](data/l4d_aimbot.cfg)
		> Manual in this file, click for more details...
</details>

* Apply to | 適用於
	```
	L4D1
	L4D2
	```

* <details><summary>Related Plugin | 相關插件</summary>

	1. [SMAC](https://github.com/fbef0102/SMAC): smac for l4d1/2 only
	2. [Little-Anti-Cheat](https://github.com/fbef0102/Little-Anti-Cheat): a free and open source anti-cheat for source games, and runs on SourceMod.
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.0h (2024-10-10)
		* Support l4d1/2 only
		* Remake code, convert code to latest syntax
		* Add Data, adjust damage, distance and damage type
		* Play hit sound on target
		* Add explosive bullet or incendiary bullet
		* Aim and shoot commons, witches
		* Compatible with smac, lilac

	* Original
		* [Original Plugin by Franc1sco](https://forums.alliedmods.net/showthread.php?t=283342)
</details>

- - - -
# 中文說明
輸入指令開啟武器自瞄系統，合法自動瞄準殭屍射擊

* 原理
	* 管理員輸入 ```!aimbot``` -> 拿著武器左鍵開槍 -> 自瞄
		* 瞄準特感、小殭屍、Tank、Witch
		* 訊息只有你會看見
		* 近戰、投擲物品不適用
	* 🟥 此插件不會導致你被VAC, Valve 不會管伺服器端的插件程式碼
	* 如果有安裝 smac 或 litte-anti-cheat, 玩家使用 ```!aimbot``` 指令時暫時不會被 smac 與 litte-anti-cheat 檢測

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg\sourcemod\l4d_aimbot.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		l4d_aimbot_enable "1"

		// 擁有這些權限的玩家，才可以輸入 !aimbot 開啟AimBot (留白 = 任何人都能, -1: 無人)
		l4d_aimbot_flags "z"

		// 為1時，被膽汁林在身上的玩家無法使用aimbot
		l4d_aimbot_bile_block "1"
		```
</details>

* <details><summary>命令中文介紹 (點我展開)</summary>

	* **開啟/關閉 AimBot**
		```php
		sm_aimbot
		```
</details>

* <details><summary>文件設定範例</summary>
  
	* [data/l4d_aimbot.cfg](data/l4d_aimbot.cfg)
		> 內有中文說明，可點擊查看
</details>