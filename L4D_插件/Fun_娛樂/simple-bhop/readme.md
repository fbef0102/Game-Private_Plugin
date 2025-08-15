# Description | 內容
Let users Bunny Hop with simplicity 

> __Note__ <br/>
This plugin is private, Please contact [me](/#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](/#私人插件列表-private-plugins-list)

* Apply to | 適用於
	```
	L4D1
	L4D2
	```

* [Video | 影片展示](https://youtu.be/lQUETO65gLk)

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	2. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)

* <details><summary>How does it work?</summary>

	* Type ```!bhop``` -> Hold Space Key -> Jump -> Have Fun
</details>

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/simple-bhop.cfg
		```php
		// Enable Simple Bunny Hop
		sm_bhop_enabled "1"

		// Disable fall damage for bhoppers
		sm_bhop_falldamage "1"

		// Enable information notification
		sm_bhop_inform "1"

		// Allow Survivors to bhop while plugin is enabled
		sm_bhop_allow_survivor "1"

		// Players with these flags have access to use command to bhop. (Empty = Everyone, -1: Nobody)
		sm_bhop_access_flag ""

		// (L4D2) Which infected class can be allowed to bhop while plugin is enabled? 1=Smoker, 2=Boomer, 4=Hunter, 8=Spitter, 16=Jockey, 32=Charger, 64=Tank (0=None, 127=All)
		sm_bhop_allow_infected_flag "127"

		// (L4D1) Which infected class can be allowed to bhop while plugin is enabled? 1=Smoker, 2=Boomer, 4=Hunter, 8=Tank (0=None, 15=All)
		sm_bhop_allow_infected_flag "15"
		```
</details>

* <details><summary>Command | 命令</summary>

	* **Enable/Disable Bunny Hopping for client**
		```php
		sm_bhop
		```
</details>

* Translation Support | 支援翻譯
	```
	translations/simple-bhop.phrases.txt
	```

* <details><summary>Related Plugin | 相關插件</summary>

	1. [l4d_rejump](/L4D_插件/Nothing_Impossible_無理改造版/l4d_rejump): Allows multi-jumping on air.
		> 超級瑪利歐，空中使用月步，多次連跳
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.6 (2025-5-9)
		* Fixed survivor can bhop while idle or replace a bot

	* v1.5 (2024-9-21)
		* Fixed client can bhop while pinned by infected or incapacitated

	* v1.4 (2023-8-15)
		* Players don't have to type !bhop every new map

	* v1.3 (2023-1-16)
		* Fixed lag when first jump

	* v1.2
		* Remake Code
		* Add more cvars

    * v1.0
	    * [By ReFlexPoison](https://forums.alliedmods.net/showthread.php?t=209853)
</details>

- - - -
# 中文說明
簡單的連跳插件

* 原理
	* 玩家輸入指令```!bhop```，按住空白建鍵就能連跳

* <details><summary>指令中文介紹 (點我展開)</summary>

    * cfg/sourcemod/simple-bhop.cfg
		```php
		// 1=啟動插件, 0=關閉插件
		sm_bhop_enabled "1"

		// 為1時，連跳過程落地不受傷
		sm_bhop_falldamage "1"

		// 為1時，聊天框顯示連跳步驟
		sm_bhop_inform "1"

		// 為1時，倖存者可以連跳
		sm_bhop_allow_survivor "1"

		// 擁有這些權限的玩家，輸入指令才能連跳 (留白 = 任何人都能, -1: 無人)
		sm_bhop_access_flag ""

		// (L4D2) 哪些特感可以連跳? 1=Smoker, 2=Boomer, 4=Hunter, 8=Spitter, 16=Jockey, 32=Charger, 64=Tank (0=無, 127=全部)
		sm_bhop_allow_infected_flag "127"

		// (L4D1) 哪些特感可以連跳? 1=Smoker, 2=Boomer, 4=Hunter, 8=Tank (0=無, 127=全部)
		sm_bhop_allow_infected_flag "15"
		```
</details>
