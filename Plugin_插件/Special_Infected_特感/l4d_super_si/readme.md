# Description | 內容
Make special infected become super SI (increase HP/movement/invisibility + catch fire)

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Video | 影片展示
<br/>None

* Image | 圖示
	<br/>![l4d_super_si_1](image/l4d_super_si_1.jpg)

* <details><summary>How does it work?</summary>

	* When Speical Infected or Tank spawns, they have chance to become a super SI/Tank
		* Change the body color
		* Increase Health
		* Become closer to invisible
		* Increase speed movement
		* Probalility of catch fire
	* Apply to both AI/Real infected players
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_super_si.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d_super_si_enable "1"

		// Probalility of a smoker become a super smoker [0-100]%
		l4d_super_si_chance_smoker "8"

		// Probalility of a boomer become a super boomer [0-100]%
		l4d_super_si_chance_boomer "8"

		// Probalility of a hunter become a super hunter [0-100]%
		l4d_super_si_chance_hunter "8"

		// Probalility of a spitter become a super spitter [0-100]%
		l4d_super_si_chance_spitter "8"

		// Probalility of a jockey become a super jockey [0-100]%
		l4d_super_si_chance_jockey "8"

		// Probalility of a charger become a super charger [0-100]%
		l4d_super_si_chance_charger "8"

		// Probalility of a tank become a super tank [0-100]%
		l4d_super_si_chance_tank "8"

		// The body color of the super smoker. Three values between 0-255 separated by spaces. RGB Color255 - Red Green Blue. [-1 -1 -1: Random, 255 255 255: Don't change]
		l4d_super_si_color_smoker "-1 -1 -1"

		// The body color of the super boomer. Three values between 0-255 separated by spaces. RGB Color255 - Red Green Blue. [-1 -1 -1: Random, 255 255 255: Don't change]
		l4d_super_si_color_boomer "-1 -1 -1"

		// The body color of the super hunter. Three values between 0-255 separated by spaces. RGB Color255 - Red Green Blue. [-1 -1 -1: Random, 255 255 255: Don't change]
		l4d_super_si_color_hunter "-1 -1 -1"

		// The body color of the super spitter. Three values between 0-255 separated by spaces. RGB Color255 - Red Green Blue. [-1 -1 -1: Random, 255 255 255: Don't change]
		l4d_super_si_color_spitter "-1 -1 -1"

		// The body color of the super jockey. Three values between 0-255 separated by spaces. RGB Color255 - Red Green Blue. [-1 -1 -1: Random, 255 255 255: Don't change]
		l4d_super_si_color_jockey "-1 -1 -1"

		// The body color of the super charger. Three values between 0-255 separated by spaces. RGB Color255 - Red Green Blue. [-1 -1 -1: Random, 255 255 255: Don't change]
		l4d_super_si_color_charger "-1 -1 -1"

		// The body color of the super tank. Three values between 0-255 separated by spaces. RGB Color255 - Red Green Blue. [-1 -1 -1: Random, 255 255 255: Don't change]
		l4d_super_si_color_tank "-1 -1 -1"

		// Probalility of the super smoker become invisible [0-100]%
		l4d_super_si_invisible_chance_smoker "80"

		// Probalility of the super boomer become invisible [0-100]%
		l4d_super_si_invisible_chance_boomer "80"

		// Probalility of the super hunter become invisible [0-100]%
		l4d_super_si_invisible_chance_hunter "80"

		// Probalility of the super spitter become invisible [0-100]%
		l4d_super_si_invisible_chance_spitter "80"

		// Probalility of the super jockey become invisible [0-100]%
		l4d_super_si_invisible_chance_jockey "80"

		// Probalility of the super charger become invisible [0-100]%
		l4d_super_si_invisible_chance_charger "80"

		// Probalility of the super tank become invisible [0-100]%
		l4d_super_si_invisible_chance_tank "80"

		// Modify the opacity of the super smoker to become closer to invisible (0-255)
		l4d_super_si_invisible_alpha_smoker "200"

		// Modify the opacity of the super boomer to become closer to invisible (0-255)
		l4d_super_si_invisible_alpha_boomer "200"

		// Modify the opacity of the super hunter to become closer to invisible (0-255)
		l4d_super_si_invisible_alpha_hunter "200"

		// Modify the opacity of the super spitter to become closer to invisible (0-255)
		l4d_super_si_invisible_alpha_spitter "200"

		// Modify the opacity of the super jockey to become closer to invisible (0-255)
		l4d_super_si_invisible_alpha_jockey "120"

		// Modify the opacity of the super charger to become closer to invisible (0-255)
		l4d_super_si_invisible_alpha_charger "200"

		// Modify the opacity of the super tank to become closer to invisible (0-255)
		l4d_super_si_invisible_alpha_tank "255"

		// Health multiple of the super smoker (0=Don't modify)
		l4d_super_si_hp_multi_smoker "3.0"

		// Health multiple of the super boomer (0=Don't modify)
		l4d_super_si_hp_multi_boomer "5.0"

		// Health multiple of the super hunter (0=Don't modify)
		l4d_super_si_hp_multi_hunter "4.0"

		// Health multiple of the super spitter (0=Don't modify)
		l4d_super_si_hp_multi_spitter "5.0"

		// Health multiple of the super jockey (0=Don't modify)
		l4d_super_si_hp_multi_jockey "3.0"

		// Health multiple of the super charger (0=Don't modify)
		l4d_super_si_hp_multi_charger "2.5"

		// Health multiple of the super tank (0=Don't modify)
		l4d_super_si_hp_multi_tank "1.5"

		// Speed movement multiple of the super smoker (0=Don't modify)
		l4d_super_si_movement_smoker "0"

		// Speed movement multiple of the super boomer (0=Don't modify)
		l4d_super_si_movement_boomer "0"

		// Speed movement multiple of the super hunter (0=Don't modify)
		l4d_super_si_movement_hunter "0"

		// Speed movement multiple of the super spitter (0=Don't modify)
		l4d_super_si_movement_spitter "0"

		// Speed movement multiple of the super jockey (0=Don't modify)
		l4d_super_si_movement_jockey "0"

		// Speed movement multiple of the super charger (0=Don't modify)
		l4d_super_si_movement_charger "0"

		// Speed movement multiple of the super tank (0=Don't modify)
		l4d_super_si_movement_tank "0"

		// Probalility of catch fire when the super smoker spawns [0-100]%
		l4d_super_si_fire_smoker "5"

		// Probalility of catch fire when the super boomer spawns [0-100]%
		l4d_super_si_fire_boomer "5"

		// Probalility of catch fire when the super hunter spawns [0-100]%
		l4d_super_si_fire_hunter "5"

		// Probalility of catch fire when the super spitter spawns [0-100]%
		l4d_super_si_fire_spitter "5"

		// Probalility of catch fire when the super jockey spawns [0-100]%
		l4d_super_si_fire_jockey "5"

		// Probalility of catch fire when the super charger spawns [0-100]%
		l4d_super_si_fire_charger "5"

		// Probalility of catch fire when the super tank spawns [0-100]%
		l4d_super_si_fire_tank "0"
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

	* v1.1h (2024-4-2)
		* Update cvars

	* v1.0h (2024-4-1)
		* Require lef4dhooks
		* Remake code, convert code to latest syntax
		* Fix warnings when compiling on SourceMod 1.11.
		* Optimize code and improve performance
		* Update cvars
		* Support versus mode

	* v1.0.1
		* [Original Plugin by panxiaohai](https://forums.alliedmods.net/showthread.php?t=129639)
</details>

- - - -
# 中文說明
增強特感變成超級特感 (增加血量/移動速度/透明度 + 自身著火)

* 原理
	* 當特感/Tank生成時，有機率變成超級特感
		* 改變身體顏色
		* 增加血量
		* 身體變透明
		* 增加移動速度
		* 有機率著火
	* AI特感與真人特感都適用
		
* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d_super_si.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		l4d_super_si_enable "1"

		// Smoker變成超級Smoker的機率 [0-100]%
		l4d_super_si_chance_smoker "8"

		// Boomer變成超級Boomer的機率 [0-100]%
		l4d_super_si_chance_boomer "8"

		// Hunter變成超級Hunter的機率 [0-100]%
		l4d_super_si_chance_hunter "8"

		// Spitter變成超級Spitter的機率 [0-100]%
		l4d_super_si_chance_spitter "8"

		// Jockey變成超級Jockey的機率 [0-100]%
		l4d_super_si_chance_jockey "8"

		// Charger變成超級Charger的機率 [0-100]%
		l4d_super_si_chance_charger "8"

		// Tank變成超級Tank的機率 [0-100]%
		l4d_super_si_chance_tank "8"

		// 超級Smoker的身體顏色.，填入RGB三色 (三個數值介於0~255，需要空格) [-1 -1 -1: 隨機, 255 255 255: 不改變身體顏色]
		l4d_super_si_color_smoker "-1 -1 -1"

		// 超級Boomer的身體顏色.，填入RGB三色 (三個數值介於0~255，需要空格) [-1 -1 -1: 隨機, 255 255 255: 不改變身體顏色]
		l4d_super_si_color_boomer "-1 -1 -1"

		// 超級Hunter的身體顏色.，填入RGB三色 (三個數值介於0~255，需要空格) [-1 -1 -1: 隨機, 255 255 255: 不改變身體顏色]
		l4d_super_si_color_hunter "-1 -1 -1"

		// 超級Spitter的身體顏色.，填入RGB三色 (三個數值介於0~255，需要空格) [-1 -1 -1: 隨機, 255 255 255: 不改變身體顏色]
		l4d_super_si_color_spitter "-1 -1 -1"

		// 超級Jockey的身體顏色.，填入RGB三色 (三個數值介於0~255，需要空格) [-1 -1 -1: 隨機, 255 255 255: 不改變身體顏色]
		l4d_super_si_color_jockey "-1 -1 -1"

		// 超級Charger的身體顏色.，填入RGB三色 (三個數值介於0~255，需要空格) [-1 -1 -1: 隨機, 255 255 255: 不改變身體顏色]
		l4d_super_si_color_charger "-1 -1 -1"

		// 超級Tank的身體顏色.，填入RGB三色 (三個數值介於0~255，需要空格) [-1 -1 -1: 隨機, 255 255 255: 不改變身體顏色]
		l4d_super_si_color_tank "-1 -1 -1"

		// 超級Smoker的身體變透明的機率 [0-100]%
		l4d_super_si_invisible_chance_smoker "80"

		// 超級Boomer的身體變透明的機率 [0-100]%
		l4d_super_si_invisible_chance_boomer "80"

		// 超級Hunter的身體變透明的機率 [0-100]%
		l4d_super_si_invisible_chance_hunter "80"

		// 超級Spitter的身體變透明的機率 [0-100]%
		l4d_super_si_invisible_chance_spitter "80"

		// 超級Jockey的身體變透明的機率 [0-100]%
		l4d_super_si_invisible_chance_jockey "80"

		// 超級Charger的身體變透明的機率 [0-100]%
		l4d_super_si_invisible_chance_charger "80"

		// 超級Tank的身體變透明的機率 [0-100]%
		l4d_super_si_invisible_chance_tank "80"

		// 超級Smoker的身體透明度.(0-255)
		l4d_super_si_invisible_alpha_smoker "200"

		// 超級Boomer的身體透明度.(0-255)
		l4d_super_si_invisible_alpha_boomer "200"

		// 超級Hunter的身體透明度.(0-255)
		l4d_super_si_invisible_alpha_hunter "200"

		// 超級Spitter的身體透明度.(0-255)
		l4d_super_si_invisible_alpha_spitter "200"

		// 超級Jockey的身體透明度.(0-255)
		l4d_super_si_invisible_alpha_jockey "120"

		// 超級Charger的身體透明度.(0-255)
		l4d_super_si_invisible_alpha_charger "200"

		// 超級Tank的身體透明度.(0-255)
		l4d_super_si_invisible_alpha_tank "255"

		// 超級Smoker的血量倍率 (0=不改血量)
		l4d_super_si_hp_multi_smoker "3.0"

		// 超級Boomer的血量倍率 (0=不改血量)
		l4d_super_si_hp_multi_boomer "5.0"

		// 超級Hunter的血量倍率 (0=不改血量)
		l4d_super_si_hp_multi_hunter "4.0"

		// 超級Spitter的血量倍率 (0=不改血量)
		l4d_super_si_hp_multi_spitter "5.0"

		// 超級Jockey的血量倍率 (0=不改血量)
		l4d_super_si_hp_multi_jockey "3.0"

		// 超級Charger的血量倍率 (0=不改血量)
		l4d_super_si_hp_multi_charger "2.5"

		// 超級Tank的血量倍率 (0=不改血量)
		l4d_super_si_hp_multi_tank "1.5"

		// 超級Smoker的移動速度倍率. (0=不改速度)
		l4d_super_si_movement_smoker "0"

		// 超級Boomer的移動速度倍率. (0=不改速度)
		l4d_super_si_movement_boomer "0"

		// 超級Hunter的移動速度倍率. (0=不改速度)
		l4d_super_si_movement_hunter "0"

		// 超級Spitter的移動速度倍率. (0=不改速度)
		l4d_super_si_movement_spitter "0"

		// 超級Jockey的移動速度倍率. (0=不改速度)
		l4d_super_si_movement_jockey "0"

		// 超級Charger的移動速度倍率. (0=不改速度)
		l4d_super_si_movement_charger "0"

		// 超級Tank的移動速度倍率. (0=不改速度)
		l4d_super_si_movement_tank "0"

		// 超級Smoker著火機率. [0-100]%
		l4d_super_si_fire_smoker "5"

		// 超級Boomer著火機率. [0-100]%
		l4d_super_si_fire_boomer "5"

		// 超級Hunter著火機率. [0-100]%
		l4d_super_si_fire_hunter "5"

		// 超級Spitter著火機率. [0-100]%
		l4d_super_si_fire_spitter "5"

		// 超級Jockey著火機率. [0-100]%
		l4d_super_si_fire_jockey "5"

		// 超級Charger著火機率. [0-100]%
		l4d_super_si_fire_charger "5"

		// 超級Tank著火機率. [0-100]%
		l4d_super_si_fire_tank "0"
		```
</details>
