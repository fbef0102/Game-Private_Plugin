# Description | 內容
Display Minimum SI requirement for full-team on each survival map.

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Video | 影片展示
<br/>None

* Image
	* display message when survival begins
	<br/>![l4d_survival_min_si_require_1](image/l4d_survival_min_si_require_1.jpg)

* Apply to | 適用於
	```
	L4D1 Survival
	L4D2 Survival
	```

* Translation Support | 支援翻譯
	```
	English
	繁體中文
	简体中文
	```

* <details><summary>Changelog | 版本日誌</summary>

	* v1.0
		* Request by GGM
		* Initial Release
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	2. [[INC] Multi Colors](https://forums.alliedmods.net/showthread.php?t=247770)

* <details><summary>ConVar | 指令</summary>

	None
</details>

* <details><summary>Command | 命令</summary>

	* **Minimum SI/Min requirement for full-team category on this map**
		```php
		sm_stats
		sm_sicount
		```
</details>

* Data Example
	* data/l4d_survival_min_si_require.cfg
		```php
		"l4d_survival_min_si_require"
		{
			"c1m2_streets" // map name
			{
				"SI_Requirement"	"12" // number
			}
			"c1m4_atrium"
			{
				"SI_Requirement"	"11"
			}
		}
		```

- - - -
# 中文說明
在聊天欄顯示該生存地圖的最少特感擊殺數

* 圖示
	* 提示訊息
	<br/>![l4d_survival_min_si_require_2](image/l4d_survival_min_si_require_2.jpg)

* 原理
	* 只適用於生存模式
	* 平均每分鐘，最少要擊殺多少特感，不同地圖不同要求

* Data設定範例
	* data/l4d_survival_min_si_require.cfg
		```php
		"l4d_survival_min_si_require"
		{
			"c1m2_streets" // 地圖名
			{
				"SI_Requirement"	"12" // 填寫數字
			}
			"c1m4_atrium"
			{
				"SI_Requirement"	"11"
			}
		}
		```

