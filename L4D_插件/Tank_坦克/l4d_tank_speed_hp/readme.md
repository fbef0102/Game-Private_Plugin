# Description | 內容
Increase Tank speed bases on HP

> __Note__ <br/>
This plugin is private, Please contact [me](/#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](/#私人插件列表-private-plugins-list)

* Apply to | 適用於
	```
	L4D1
	L4D2
	```

* <details><summary>How does it work?</summary>

	* The less Tank hp => the faster Tank movement speed
	* The less Tank hp => the faster AI Tank climb over obstacle speed
	* Modify speed in data: [data/l4d_tank_speed_hp](data/l4d_tank_speed_hp.cfg)
	* Apply to Human Tank Player
</details>

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_tank_speed_hp.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d_tank_speed_hp_enable "1"
		```
</details>

* <details><summary>Related Plugin | 相關插件</summary>

	1. [skip_tank_taunt](/L4D_插件/Tank_坦克/skip_tank_taunt): Skip Tank Victory + Speed up Obstacle animation playback version
		* Tank爬行障礙物速度變快 + 略過咆哮勝利動畫
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.0 (2025-1-12)
		* Initial Release
</details>

- - - -
# 中文說明
根據Tank血量設置Tank的移動速度

* 原理
	* Tank血量越少 => Tank的移動速度越快
	* Tank血量越少 => AI Tank 爬行障礙的速度越快
	* 到文件修改速度: [data/l4d_tank_speed_hp](data/l4d_tank_speed_hp.cfg)

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d_tank_speed_hp.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		l4d_tank_speed_hp_enable "1"
		```
</details>
