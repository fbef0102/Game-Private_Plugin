# Description | 內容
shoot teammate = shoot yourself V2

> __Note__ <br/>
This plugin is private, Please contact [me](/#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](/#私人插件列表-private-plugins-list)

* Apply to | 適用於
	```
	L4D1
	L4D2
	```

* <details><summary>How does it work?</summary>

	* Immune every friendly fire damage or reflict to attacker, see [data/anti-friendly_fire_V2.cfg](data/anti-friendly_fire_V2.cfg)
		* Manual in this file, click for more details...
	* Announce total ff damage after 1 second
	* 🟥 Do not use with other plugin which modify friendly fire damage.
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	2. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/anti-friendly_fire_V2.cfg
		```php
		// [1=Enable, 0=Disable]
		anti-friendly_fire_V2_enable "1"

		// Changes how ff announce displays FF damage. (0: Off, 1:In chat; 2: In Hint Box; 3: In center text)
		anti-friendly_fire_V2_announce_type "1"

		// Cfg file should this plugin read for settings
		// Default: data/anti-friendly_fire_V2.cfg
		anti-friendly_fire_V2_read_data "data/anti-friendly_fire_V2.cfg"
		```
</details>

* Translation Support | 支援翻譯
	```
	translations/anti-friendly_fire_V2.phrases.txt
	```

* <details><summary>Related Plugin | 相關插件</summary>
	
	1. [anti-friendly_fire](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/anti-friendly_fire): shoot teammate = shoot yourself simple version
		* 簡單版反傷插件
	2. [anti-friendly_fire_RPG](/L4D_插件/Anti_Griefer_防惡意路人/anti-friendly_fire_RPG): shoot teammate = shoot yourself RPG
		* 反傷插件，但是有更多的功能
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v2.2 (2026-2-8)
		* If the damage exceeds the victim's health, set the damage to the same value as their health.

	* v2.1 (2025-9-2)
		* Updata data

	* v2.0 (2024-10-16)
		* Update cvars
		* Updata data

	* v1.9 (2024-9-21)
		* Add data config
		* Update cvars

	* v1.8 (2024-8-7)
		* Add Gamedata
		* Optimize code and improve performance
		* Update cvars
		
	* v1.7 (2023-11-18)
		* Add Chainsaw damage
		* Fixed fire bullet damage
		* Add grenade launcher damage

	* v1.6 (2023-5-4)
		* Fixed Melee damage

	* v1.5
		* Translation Support

	* v1.4
		* Initial Release
</details>

- - - -
# 中文說明
隊友開槍射你會反彈傷害，第二版本

* 原理
	* 控制每個友傷的種類，免疫受傷或者反彈傷害，詳見文件: [data/anti-friendly_fire_V2.cfg](data/anti-friendly_fire_V2.cfg)
		* 內有中文說明，可點擊查看
	* 插件自帶傷害提示
	* 一秒後計算總友傷，然後反彈給攻擊者
	* 🟥切勿與其他會修改友傷的插件並用

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/anti-friendly_fire_V2.cfg
		```php
		// [1=開啟插件, 0=關閉插件]
		anti-friendly_fire_V2_enable "1"

		// 如何顯示友傷提示. (0=關閉, 1:聊天視窗; 2: Hint視窗; 3: 畫面中心)
		anti-friendly_fire_V2_announce_type "1"

		// 此插件會讀取的文件設定名稱
		// 預設: data/anti-friendly_fire_V2.cfg
		anti-friendly_fire_V2_read_data "data/anti-friendly_fire_V2.cfg"
		```
</details>
