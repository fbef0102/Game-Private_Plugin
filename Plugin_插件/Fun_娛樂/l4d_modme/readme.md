# Description | 內容
Player can become the model you point at.

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/dKdnKxFNUXk)

* Image | 圖示
	* Point an entity and type !modme in chatbox
		> 對準一個物件然後輸入!modme
		<br/>![l4d_modme_0](image/l4d_modme_0.jpg)
	* You become car
		> 你的模型變成車子
		<br/>![l4d_modme_1](image/l4d_modme_1.jpg)
	* You become firs aid kit
		> 你的模型變成治療包
		<br/>![l4d_modme_2](image/l4d_modme_2.jpg)
	* You become Tank
		> 你的模型變成Tank
		<br/>![l4d_modme_3](image/l4d_modme_3.jpg)
	* You become Common Infected
		> 你的模型變成普通感染者
		<br/>![l4d_modme_4](image/l4d_modme_4.jpg)
	* You become Witch
		> 你的模型變成Witch
		<br/>![l4d_modme_5](image/l4d_modme_5.jpg)
	* You become Boomer
		> 你的模型變成Boomer
		<br/>![l4d_modme_6](image/l4d_modme_6.jpg)

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

	* v1.0 (2023-4-8)
	    * Initial Release
</details>

* Require | 必要安裝
    1. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)
	2. [ThirdPersonShoulder_Detect](https://forums.alliedmods.net/showthread.php?t=298649)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_modme.cfg
		```php
		// Players with these flags have access to use command. (Empty = Everyone, -1: Nobody)
		l4d_modme_access_flag ""

		// 0=Plugin off, 1=Plugin on.
		l4d_modme_enable "1"
		```
</details>

* <details><summary>Command | 命令</summary>

	* **Point an entity or infected and replace your model with their model**
		```php
		sm_modme
		```
</details>

- - - -
# 中文說明
玩家外觀可以變成地圖任何一個物件模型

* 原理
	* 對準一個物件然後輸入!modme，你的模型將變成物件的模型
	* 可以複製特感、Tank、Witch、普通感染者的模型，
		* Charger與Spitter 的模型會卡住，認真你就輸了

* 功能
	* 可設置特定權限的人才能使用!modme