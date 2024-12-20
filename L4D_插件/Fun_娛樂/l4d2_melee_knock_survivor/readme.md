# Description | 內容
Use Melees to knockback teammates

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtube.com/shorts/GnxyoVr3l4k)

* Image | 圖示
	<br/>![l4d2_melee_knock_survivor_1](image/l4d2_melee_knock_survivor_1.gif)

* <details><summary>How does it work?</summary>

	* Use melee weapons to sent teammates fly away
	* Support custom melee
	* Modify melee knockback power in file: [data/l4d2_melee_knock_survivor.cfg](data/l4d2_melee_knock_survivor.cfg)
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d2_melee_knock_survivor.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d2_melee_knock_survivor_enable "1"

		// Players with these flags have melee knock power (Empty = Everyone, -1: Nobody)
		l4d2_melee_knock_survivor_access_flag ""
		```
</details>

* <details><summary>Command | 命令</summary>

	None
</details>

* <details><summary>Data Config</summary>

	* [data/l4d2_melee_knock_survivor.cfg](data/l4d2_melee_knock_survivor.cfg)
		> Manual in this file, click for more details...
</details>

* Apply to | 適用於
	```
	L4D2
	```

* <details><summary>Changelog | 版本日誌</summary>

	* v1.0 (2024-6-13)
		* Initial Release
</details>

- - - -
# 中文說明
近戰武器可以把隊友打開

* 原理
	* 拿著近戰武器，可以打飛隊友
	* 支援自製近戰武器，可文件自行修改: [data/l4d2_melee_knock_survivor.cfg](data/l4d2_melee_knock_survivor.cfg)

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d2_melee_knock_survivor.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		l4d2_melee_knock_survivor_enable "1"

		// 擁有這些權限的玩家，才可以使用近戰武器打開隊友, !modmenu, !modset, !modcopy (留白 = 任何人都能, -1: 無人)
		l4d2_melee_knock_survivor_access_flag ""
		```
</details>

* <details><summary>文件設定範例</summary>

	* [data/l4d2_melee_knock_survivor.cfg](data/l4d2_melee_knock_survivor.cfg)
		> 內有中文說明，可點擊查看
</details>