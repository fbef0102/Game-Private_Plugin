# Description | 內容
Smoker can target incapacitated survivors and shoot tongue to drag + pull

> __Note__ <br/>
This plugin is private, Please contact [me](/#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](/#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtube.com/shorts/vubKbJJzlfA)

* Image | 圖示
	<br/>![l4d2_tongue_incap_1](image/l4d2_tongue_incap_1.gif)
	<br/>![l4d2_tongue_incap_2](image/l4d2_tongue_incap_2.gif)
	<br/>![l4d2_tongue_incap_3](image/l4d2_tongue_incap_3.gif)

* <details><summary>How does it work?</summary>

	* Smoker can target incapacitated/ledge hanging survivors -> shoot tongue to drag and pull
	* By default, AI Smokers won't target incapacitated/ledge hanging survivors
		* You install [Target Override](https://forums.alliedmods.net/showthread.php?p=2688165): Make AI Smokers target incapacitated/ledge hanging survivors
</details>

* Require | 必要安裝
<br/>None

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d2_tongue_incap.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d2_tongue_incap_enable "1"
		```
</details>

* <details><summary>Command | 命令</summary>
	
	None
</details>

* Apply to | 適用於
	```
	L4D2
	```

* <details><summary>Related Plugin | 相關插件</summary>

	1. [l4d2_smoker_toxic](/L4D_插件/Smoker_舌頭/l4d2_smoker_toxic): Adds a lot of abilities and powers to the smoker in order to spread its poison gas
		> 增強Smoker，賦予多種超能力成為毒性的化學兵器
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.0 (2024-4-22)
		* Initial Release
		* Credit: [Forgetest](https://github.com/jensewe)
</details>

- - - -
# 中文說明
Somker可以對倒地的倖存者吐出舌頭並拖走

* 原理
	* Smoker準心對準倒地的倖存者，可以吐舌頭拖走
	* 掛邊的倖存者也可以
	* AI Smoker也適用，AI Smoker不會主動拉倒地的倖存者
		* 可安裝 [Target Override](https://forums.alliedmods.net/showthread.php?p=2688165): 能使AI Smoker主動拉倒地的倖存者

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d2_tongue_incap.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		l4d2_tongue_incap_enable "1"
		```
</details>