# Description | 內容
Reset Fire Damage To SI/Tank

> __Note__ <br/>
This plugin is private, Please contact [me](/#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](/#私人插件列表-private-plugins-list)

* Apply to | 適用於
	```
	L4D2
	```

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
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d2_si_fire_damage.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d2_si_fire_damage_enable "1"

		// Burn damage amount applied to the Smoker. (around every 0.18 seconds). 
		// 0=No Burn Damage (Extinguish Fire), -1=Game Default
		l4d2_si_fire_damage_smoker_modify "2"

		// Burn damage amount applied to the Boomer. (around every 0.18 seconds). 
		// 0=No Burn Damage (Extinguish Fire), -1=Game Default
		l4d2_si_fire_damage_boomer_modify "1"

		// Burn damage amount applied to the Hunter. (around every 0.18 seconds). 
		// 0=No Burn Damage (Extinguish Fire), -1=Game Default
		l4d2_si_fire_damage_hunter_modify "2"

		// Burn damage amount applied to the Spitter. (around every 0.18 seconds). 
		// 0=No Burn Damage (Extinguish Fire), -1=Game Default
		l4d2_si_fire_damage_spitter_modify "2"

		// Burn damage amount applied to the Jockey. (around every 0.18 seconds). 
		// 0=No Burn Damage (Extinguish Fire), -1=Game Default
		l4d2_si_fire_damage_jockey_modify "5"

		// Burn damage amount applied to the Charger. (around every 0.18 seconds). 
		// 0=No Burn Damage (Extinguish Fire), -1=Game Default
		l4d2_si_fire_damage_charger_modify "8"

		// Burn damage amount applied to the Tank. (around every 0.18 seconds). 
		// 0=No Burn Damage (Extinguish Fire), -1=Game Default
		l4d2_si_fire_damage_tank_modify "10"
		```
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.1 (2024-2-7)
		* Change plugin name
		* Update Cvars
		* Apply to all SI
		* Require left4dhooks

	* v1.0 (2024-1-28)
		* Initial Release
</details>

- - - -
# 中文說明
更改火焰對Tank/特感造成的傷害

* 原理
	* Tank燃燒時，修改燃燒傷害
	* 特感燃燒時，修改燃燒傷害

* 用意在哪?
    * 官方預設中　(安裝此插件之前)
		* Tank是依據秒數來決定燃燒的傷害
		* 特感是依據血量百分比來決定燃燒的傷害，戰役模式下特感燒傷還會乘上三倍
	* 安裝此插件之後會導致以下官方指令無作用
		```php
		tank_burn_duration            "75"       : Tank燃燒75秒後死亡 (難度為簡單/一般/或模式為對抗/生存)
		tank_burn_duration_hard       "80"       : Tank燃燒80秒後死亡 (難度為進階)
		tank_burn_duration_expert     "85"       : Tank燃燒85秒後死亡 (難度為專家)
		```

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d2_si_fire_damage.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		l4d2_si_fire_damage_enable "1"

		// Smoker的燃燒傷害值 (大約每0.18秒燒傷一次). 
		// 0=無火傷，不會著火, -1=遊戲預設燒傷
		l4d2_si_fire_damage_smoker_modify "2"

		// Boomer的燃燒傷害值 (大約每0.18秒燒傷一次). 
		// 0=無火傷，不會著火, -1=遊戲預設燒傷
		l4d2_si_fire_damage_boomer_modify "1"

		// Hunter的燃燒傷害值 (大約每0.18秒燒傷一次). 
		// 0=無火傷，不會著火, -1=遊戲預設燒傷
		l4d2_si_fire_damage_hunter_modify "2"

		// Spitter的燃燒傷害值 (大約每0.18秒燒傷一次). 
		// 0=無火傷，不會著火, -1=遊戲預設燒傷
		l4d2_si_fire_damage_spitter_modify "2"

		// Jockey的燃燒傷害值 (大約每0.18秒燒傷一次). 
		// 0=無火傷，不會著火, -1=遊戲預設燒傷
		l4d2_si_fire_damage_jockey_modify "5"

		// Charger的燃燒傷害值 (大約每0.18秒燒傷一次). 
		// 0=無火傷，不會著火, -1=遊戲預設燒傷
		l4d2_si_fire_damage_charger_modify "8"

		// Tank的燃燒傷害值 (大約每0.18秒燒傷一次). 
		// 0=無火傷，不會著火, -1=遊戲預設燒傷
		l4d2_si_fire_damage_tank_modify "10"
		```
</details>
