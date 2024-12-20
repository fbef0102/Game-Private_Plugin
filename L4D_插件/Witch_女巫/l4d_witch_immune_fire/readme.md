# Description | 內容
Witch is immune to fire + witch won't lose target by fire

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/1Ap0O6ET3nA)

* Image | 圖示
	<br/>![l4d_witch_immune_fire_1](image/l4d_witch_immune_fire_1.gif)
	<br/>![l4d_witch_immune_fire_２](image/l4d_witch_immune_fire_2.gif)

* Require | 必要安裝
<br/>None

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_witch_immune_fire.cfg
		```php
		// If 1, witch is immune to fire from map. (For example: map flame, nature fire)
		l4d_witch_immune_fire_map "1"

		// If 1, witch is immune to fire if caused by survivor. (For example: molotov, fire bullet)
		l4d_witch_immune_fire_survivor "1"
		```
</details>

* <details><summary>Command | 命令</summary>

	None
</details>

* Apply to | 適用於
	```
	L4D1
	L4D2
	```

* <details><summary>Changelog | 版本日誌</summary>

	* v1.0 (2023-8-1)
		* Initial Release
</details>

- - - -
# 中文說明
Witch不會著火+也不會因為著火而失去目標

* 原理
	* Witch不會著火，也不會受到火焰的傷害
	* Witch不會被地圖上的火焰燒到失去目標
  
* <details><summary>指令中文介紹</summary>

	* cfg/sourcemod/l4d_witch_immune_fire.cfg
		```php
		// 為1時，Witch免疫地圖上的火焰. (譬如: 自然火、地圖產生的火焰)
		l4d_witch_immune_fire_map "1"

		// 為1時，Witch免疫人類產生的火焰. (譬如: 燃燒瓶、汽油桶、煙火盒)
		l4d_witch_immune_fire_survivor "1"
		```
</details>