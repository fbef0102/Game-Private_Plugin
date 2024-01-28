# Description | 內容
Increase the speed and power of tanks when on fire.

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Video | 影片展示
<br/>None

* Image | 圖示
<br/>None

* <details><summary>How does it work?</summary>

	* Modify tank burn damage instead of die in certain seconds
	* After install this plugin, the following officla cvars are not working anymore
		```php
		tank_burn_duration            "75"       : Number of seconds a burning Tank takes to die in easy, normal, versus and survival
		tank_burn_duration_hard       "80"       : Number of seconds a burning Tank takes to die in hard
		tank_burn_duration_expert     "85"       : Number of seconds a burning Tank takes to die in expert
		```
		
</details>

* Require | 必要安裝
<br/>None

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d2_tank_fire_damage.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d2_tank_fire_damage_enable "1"

		// Burn damage amount applied to the Tank. (around every 0.18 seconds). 0= No Burn Damage.
		l4d2_tank_fire_damage_modify "2"
		```
</details>

* <details><summary>Command | 命令</summary>
	
	None
</details>

* Apply to | 適用於
	```
	L4D2
	```

* <details><summary>Changelog | 版本日誌</summary>

	* v1.0 (2024-1-28)
		* Initial Release
</details>

- - - -
# 中文說明
更改火焰對Tank造成的傷害

* 原理
	* Tank燃燒時，修改燃燒傷害

* 用意在哪?
    * 官方預設中(安裝此插件之前)，Tank是依據秒數來決定燃燒的傷害
	* 安裝此插件之後會導致以下官方指令無作用
		```php
		tank_burn_duration            "75"       : Tank燃燒75秒後死亡 (難度為簡單/一般/或模式為對抗/生存)
		tank_burn_duration_hard       "80"       : Tank燃燒80秒後死亡 (難度為進階)
		tank_burn_duration_expert     "85"       : Tank燃燒85秒後死亡 (難度為專家)
		```

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d2_tank_fire_damage.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		l4d2_tank_fire_damage_enable "1"

		// Tank的燃燒傷害值 (大約每0.18秒燒傷一次). 0=無火傷，Tank不會著火.
		l4d2_tank_fire_damage_modify "2"
		```
</details>
