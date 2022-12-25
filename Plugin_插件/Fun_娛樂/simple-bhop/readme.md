# Description | 內容
Let users Bunny Hop with simplicity 

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/lQUETO65gLk)

* Image | 圖示
<br/>None

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
	//ReFlexPoison @ 2013
	//Harry @ 2022
	```
	* v1.2
		* Remake Code
		* Add more cvars

    * v1.0
	    * [By ReFlexPoison](https://forums.alliedmods.net/showthread.php?p=1905436)
</details>

* Require | 必要安裝
	1. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)

* Related Plugin | 相關插件
	1. [l4d_rejump](https://github.com/fbef0102/Game-Private_Plugin/tree/main/l4d_rejump): Allows multi-jumping on air.
		> 超級瑪利歐，空中使用月步，多次連跳

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/simple-bhop.cfg
	```php
	// Players with these flags have access to use command to bhop. (Empty = Everyone, -1: Nobody)
	sm_bhop_access_flag ""

	// (L4D2) Which infected class can be allowed to bhop while plugin is enabled? 1=Smoker, 2=Boomer, 4=Hunter, 8=Spitter, 16=Jockey, 32=Charger, 64=Tank (0=None, 127=All)
	sm_bhop_allow_infected_flag "127"

	// (L4D1) Which infected class can be allowed to bhop while plugin is enabled? 1=Smoker, 2=Boomer, 4=Hunter, 8=Tank (0=None, 15=All)
	sm_bhop_allow_infected_flag "15"

	// Allow Survivors to bhop while plugin is enabled
	sm_bhop_allow_survivor "1"

	// Enable Simple Bunny Hop
	sm_bhop_enabled "1"

	// Disable fall damage for bhoppers
	sm_bhop_falldamage "1"

	// Enable information notification
	sm_bhop_inform "1"
	```
</details>

* <details><summary>Command | 命令</summary>

	* **Enable/Disable Bunny Hopping for client**
		```php
		sm_bhop
		```
</details>

- - - -
# 中文說明
簡單的連跳插件

* 原理
	* 玩家輸入指令!bhop，按住空白建鍵就能連跳

* 功能
	1. 只要輸入指令便可連跳
	2. 連跳過程落地不受傷
	3. 可設置特定人士才能使用
	4. 可設置人類可否連跳
	5. 可設置特定特感種類可否連跳
