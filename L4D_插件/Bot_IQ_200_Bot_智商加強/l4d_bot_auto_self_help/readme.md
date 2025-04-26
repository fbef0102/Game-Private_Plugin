# Description | 內容
Survivor bots auto self-revive after incap, hanging from ledge + auto self-clear if get pinned by special infected

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Apply to | 適用於
	```
	L4D1
	L4D2
	```

* Image | 圖示
	<br/>![l4d_bot_auto_self_help_1](image/l4d_bot_auto_self_help_1.gif)
	<br/>![l4d_bot_auto_self_help_2](image/l4d_bot_auto_self_help_2.gif)
	<br/>![l4d_bot_auto_self_help_3](image/l4d_bot_auto_self_help_3.gif)

* <details><summary>How does it work?</summary>

	* Survivor bots auto self-revive
		* Incap
		* Hanging from ledge
	* Survivor bots auto self-clear if get pinned by special infected
		* Smoker's tongue grabs the bot
		* Hunter pounces the bot
		* Jockey rides the bot
		* Charger carries the bot
	* Apply to real survivor player, all settings in [data/l4d_bot_auto_self_help.cfg](data/l4d_bot_auto_self_help.cfg)
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_bot_auto_self_help.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d_bot_auto_self_help_enable "1"
		```
</details>

* <details><summary>Data Config</summary>

	* [data/l4d_bot_auto_self_help.cfg](data/l4d_bot_auto_self_help.cfg)
		> Manual in this file, click for more details...
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.0 (2024-11-15)
		* Initial Release
</details>

- - - -
# 中文說明
AI bot倒地或掛邊時自動救起來 + AI bot被特感抓住時自動殺死特感

* 原理
	* AI Bot 自動救起來
		* 倒地
		* 掛邊
	* AI Bot 被特感抓住時自動殺死特感
		* 被smoker抓
		* 被Hunter抓
		* 被Jockey抓
		* 被Charger抓
	* 真人玩家也適用，可到修改文件[data/l4d_bot_auto_self_help.cfg](data/l4d_bot_auto_self_help.cfg)

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d_bot_auto_self_help.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		l4d_bot_auto_self_help_enable "1"
		```
</details>

* <details><summary>文件設定範例</summary>

	* [data/l4d_bot_auto_self_help.cfg](data/l4d_bot_auto_self_help.cfg)
		> 內有中文說明，可點擊查看
</details>
