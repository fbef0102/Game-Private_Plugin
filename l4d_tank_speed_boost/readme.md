# Description | 內容
Increase Tank speed until hitting survivors

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/Vx2SJ0JNIhA)

* Image | 圖示
	<br/>None

* Apply to | 適用於
```
L4D1
L4D2
```

* <details><summary>Changelog | 版本日誌</summary>

	```php
	* v1.5
		* Original Request by Anzu
	```
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_tank_speed_boost.cfg
	```php
	// Increase the tank animation speed each time.
	l4d_tank_animation_boost_add "0.1"

	// Maximum tank animation speed.
	l4d_tank_animation_boost_max "2.50"

	// Increase the tank movement speed each time.
	l4d_tank_speed_boost_add "0.02"

	// Time interval to increase the tank movement & animation speed. (0=off)
	l4d_tank_speed_boost_interval "2.5"

	// Maximum tank movement speed.
	l4d_tank_speed_boost_max "2.50"
	```
</details>

* <details><summary>Command | 命令</summary>
	
	None
</details>

- - - -
# 中文說明
Tank爬行障礙物速度與移動速度逐漸變快直到打到倖存者為止 

* 原理
	* Tank開始追向倖存者的時候，自身的移動速度與爬行速度逐漸變快
	* 當Tank打到倖存者之後，自身的所有速度重置
	* 真人Tank玩家不適用

* 功能
	1. 可設置每次增加的速度
	2. 可設置最大爬行與移動速度
