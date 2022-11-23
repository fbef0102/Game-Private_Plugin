# Description | 內容
Type !gas to disaply who shot the last gas can.

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Video | 影片展示
<br/>None

* Image | 圖示
	* who is the culprit
	> 打爆汽油桶的兇手
	<br/>![who_shot_gas_1](image/who_shot_gas_1.jpg)
	* display the last players who shot the gas
	> 顯示最後幾位引爆汽油桶的玩家
	<br/>![who_shot_gas_2](image/who_shot_gas_2.jpg)

* Apply to | 適用於
```
L4D1
L4D2
```

* <details><summary>Changelog | 版本日誌</summary>

	* v1.0
		* Original Request by Dam Dam
</details>

* Require | 必要安裝
<br/>None

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/who_shot_gas.cfg
	```php
	// Output to the chat last X players to explodes (last hit) a gascan. (0=OFF)
	who_shot_gas_number "5"
	```
</details>

* <details><summary>Command | 命令</summary>
	
	* **Output to the chat the last player to explodes (last hit) a gascan.**
	```php
	sm_gas
	```
</details>

- - - -
# 中文說明
誰他馬打爆最後一個汽油桶

* 原理
	* 哪位傻B點燃汽油桶，適合生存模式之下找出兇手

* 功能
	1. 可設置最後顯示的玩家數量
