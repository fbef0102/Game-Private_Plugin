# Description | 內容
Allows players to get themselves unstuck from charger glitches and level clips

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/bNnXzVkRd1s)

* Image | 圖示
	<br/>![l4d_unstuck_1](image/l4d_unstuck_1.jpg)

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
    2. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_unstuck.cfg
		```php
		// If 1, Announces each round start that the !stuck command is available.
		l4d_unstuck_announce "1"

		// If 1, Infected player can use !stuck command too.
		l4d_unstuck_infected_enable "1"

		// Amount of times the client can use !stuck per round
		l4d_unstuck_teleports "10"
		```
</details>

* <details><summary>Command | 命令</summary>

	* **Unstuck yourself**
		```php
		sm_stuck
		```

	* **Admin helps player unstick (Adm required: ADMFLAG_GENERIC)**
		```php
		sm_unstick <name>
		```
</details>

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
	//CUatTHEFINISH @ 2009
	//Harry @ 2022-2023
	```
	* v1.6 (2023-4-1)
        * Replace Gamedata with left4dhooks

	* v1.5 (2023-3-8)
		* Translation Support
		* Infected can use too

	* v1.4
		* Remake code
		* More Cvars
		* Support L4D1

	* v1.0.6
		* [By CUatTHEFINISH](https://forums.alliedmods.net/showthread.php?t=110041)
</details>

- - - -
# 中文說明
玩家使用命令解除自身卡住的狀態 (譬如卡死在地形或牆壁)

* 原理
	* 卡住的時候輸入命令，玩家會自動被傳送到附近解除卡住狀態
	* 特感也能使用

* 功能
	* 可設置每回合可使用命令的次數
	* 可設置特感是否也能使用