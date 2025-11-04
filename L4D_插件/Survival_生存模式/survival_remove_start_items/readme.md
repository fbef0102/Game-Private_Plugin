# Description | 內容
Remove survivors' default kits/pills/dual pistol in survival/scavenge mode

> __Note__ <br/>
This plugin is private, Please contact [me](/#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](/#私人插件列表-private-plugins-list)

* Apply to | 適用於
	```
	L4D1 Survival
	L4D2 Survival/Scavenge
	```

* Image | 圖示
	* Remove survivors' default kits/pills/dual pistol (移除系統自動給予的武器，只剩下一把手槍)
	<br/>![survival_remove_start_items_1](image/survival_remove_start_items_1.jpg)

* <details><summary>How does it work?</summary>

	* In Survival/Scavenge mode, prevent the game distributing kits and pills to survivors.
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/survival_remove_start_items.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		survival_remove_start_items_enable "1"
		```
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.1 (2025-11-4)
		* Add gamedata, use dhooks to block defaut items

	* v1.0 (2023-12-14)
		* Initial Release
</details>

- - - -
# 中文說明
生存模式與清道夫模式中，移除人類身上預設的裝備: 雙手槍、治療包、藥丸

* 原理
	* 移除生存模式中系統自動給予的雙手槍、治療包、藥丸，所以玩家只會剩下一把小手槍
	* 清道夫模式也適用

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/survival_remove_start_items.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		survival_remove_start_items_enable "1"
		```
</details>