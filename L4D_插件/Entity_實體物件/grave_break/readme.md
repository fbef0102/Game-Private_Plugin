# Description | 內容
say !breakgrave to break all graves

> __Note__ <br/>
This plugin is private, Please contact [me](/#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](/#私人插件列表-private-plugins-list)

* Apply to | 適用於
	```
	L4D1 l4d_vs_smalltown03_ranchhouse、l4d_smalltown03_ranchhouse
	L4D2 C10M3
	```

* Image | 圖示
	* Break all graves (打破所有可恨的墓碑)
	<br/>![grave_break_1](image/grave_break_1.gif)

* <details><summary>How does it work?</summary>

	* Break grave entity
		1.  ```prop_physics``` + ```models/props_cemetery/grave/...```
</details>

* Require | 必要安裝
	1. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/grave_break.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		grave_break_enable "1"

		// Auto break all graves after map finished loading
		grave_break_auto "1"
		```
</details>

* <details><summary>Command | 命令</summary>
	
	* **Break all graves**
		```php
		sm_breakgrave
		```
</details>

* Translation Support | 支援翻譯
	```
	translations/grave_break.phrases.txt
	```

* <details><summary>Changelog | 版本日誌</summary>

	* v1.2 (2024-9-3)
		* Add translation file

	* v1.1 (2024-7-15)
		* Update Cvars

	* v1.0 (2022-11-27)
		* Initial Release
</details>

- - - -
# 中文說明
輸入 !breakgrave 打破地圖上所有墓碑

* 原理
	* 任一玩家輸入```!breakgrave```，打破地圖上所有墓碑
		* 實體為 ```prop_physics``` 且模型為 ```models/props_cemetery/grave/...```

* 用意在哪?
	* 把礙眼的墓碑一次打破，因為生存模式下的死亡喪鐘第三關，倖存者在教堂與墓碑附近

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/grave_break.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		grave_break_enable "1"

		// 地圖載入完成後自動打破地圖上所有墓碑
		grave_break_auto "1"
		```
</details>

* <details><summary>命令中文介紹 (點我展開)</summary>
	
	* **打破地圖上所有墓碑**
		```php
		sm_breakgrave
		```
</details>