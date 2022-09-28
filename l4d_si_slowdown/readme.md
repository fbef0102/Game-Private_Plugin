# Description | 內容
Manages the gunfire slowdown for infected team

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Video | 影片展示
	<br/>None

* Image | 圖示
	<br/>None

* Apply to | 適用於
```
L4D1
L4D2
```

* <details><summary>Changelog | 版本日誌</summary>

	* v3.0
		* Remove water slowdown, couch speed control, only gunfire slowdown control
		* Add all weapons gunfire slowdown control including Minigun and 50cal Machine gun
		* Add AI infected and Player infected cvars
		* Modify gunfire slowdown calculation formula
		* Support L4D1

	* v2.7.1
		* [By Visor, Sir, darkid, Forgetest, A1m`, Derpduck](https://github.com/SirPlease/L4D2-Competitive-Rework/blob/master/addons/sourcemod/scripting/l4d2_slowdown_control.sp)
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	2. [l4d2util_stocks](https://github.com/fbef0102/Game-Private_Plugin/tree/main/left4dead2/scripting/include)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_si_slowdown.cfg
	```php
	// 50cal Machine gun cause this much slowdown * l4d2_slowdown_gunfire. (-1: Game default settings; 0.0: No slowdown)
	l4d2_slowdown_50cal_percent "-1.0"

	// AKs cause this much slowdown * l4d2_slowdown_gunfire. (-1: Game default settings; 0.0: No slowdown)
	l4d2_slowdown_ak_percent "0.6"

	// Auto Shotguns cause this much slowdown * l4d2_slowdown_gunfire. (-1: Game default settings; 0.0: No slowdown)
	l4d2_slowdown_auto_percent "0.6"

	// AWP cause this much slowdown * l4d2_slowdown_gunfire. (-1: Game default settings; 0.0: No slowdown)
	l4d2_slowdown_awp_percent "0.8"

	// Chrome Shotguns cause this much slowdown * l4d2_slowdown_gunfire. (-1: Game default settings; 0.0: No slowdown)
	l4d2_slowdown_chrome_percent "0.6"

	// Deagles cause this much slowdown * l4d2_slowdown_gunfire. (-1: Game default settings; 0.0: No slowdown)
	l4d2_slowdown_deagle_percent "0.3"

	// Grenade Launcher cause this much slowdown * l4d2_slowdown_gunfire. (-1: Game default settings; 0.0: No slowdown)
	l4d2_slowdown_grenade_launcher_percent "1.0"

	// Maximum slowdown from gunfire for SI Player (-1: Game default settings; 0.0: No slowdown, 0.01-1.0: 1%%-100%% slowdown)
	l4d2_slowdown_gunfire_player "0.0"

	// Maximum slowdown from gunfire for AI SI (-1: Game default settings; 0.0: No slowdown, 0.01-1.0: 1%%-100%% slowdown)
	l4d2_slowdown_gunfire_si "0.0"

	// Maximum slowdown from gunfire for the AI Tank (-1: Game default settings; 0.0: No slowdown, 0.01-1.0: 1%%-100%% slowdown)
	l4d2_slowdown_gunfire_tank "0.17"

	// Maximum slowdown from gunfire for the Tank Player (-1: Game default settings; 0.0: No slowdown, 0.01-1.0: 1%%-100%% slowdown)
	l4d2_slowdown_gunfire_tank_player "0.1"

	// M4s cause this much slowdown * l4d2_slowdown_gunfire. (-1: Game default settings; 0.0: No slowdown)
	l4d2_slowdown_m4_percent "0.6"

	// M60 cause this much slowdown * l4d2_slowdown_gunfire. (-1: Game default settings; 0.0: No slowdown)
	l4d2_slowdown_m60_percent "1.0"

	// Silenced Uzis cause this much slowdown * l4d2_slowdown_gunfire. (-1: Game default settings; 0.0: No slowdown)
	l4d2_slowdown_mac_percent "0.3"

	// Military Rifles cause this much slowdown * l4d2_slowdown_gunfire. (-1: Game default settings; 0.0: No slowdown)
	l4d2_slowdown_military_percent "0.6"

	// Minigun cause this much slowdown * l4d2_slowdown_gunfire. (-1: Game default settings; 0.0: No slowdown)
	l4d2_slowdown_minigun_percent "-1.0"

	// Pistols cause this much slowdown * l4d2_slowdown_gunfire. (-1: Game default settings; 0.0: No slowdown)
	l4d2_slowdown_pistol_percent "-1.0"

	// Pump Shotguns cause this much slowdown * l4d2_slowdown_gunfire. (-1: Game default settings; 0.0: No slowdown)
	l4d2_slowdown_pump_percent "0.6"

	// Hunting Rifles cause this much slowdown * l4d2_slowdown_gunfire. (-1: Game default settings; 0.0: No slowdown)
	l4d2_slowdown_rifle_percent "0.6"

	// Scars cause this much slowdown * l4d2_slowdown_gunfire. (-1: Game default settings; 0.0: No slowdown)
	l4d2_slowdown_scar_percent "0.6"

	// Scouts cause this much slowdown * l4d2_slowdown_gunfire. (-1: Game default settings; 0.0: No slowdown)
	l4d2_slowdown_scout_percent "0.8"

	// Unsilenced uzis cause this much slowdown * l4d2_slowdown_gunfire. (-1: Game default settings; 0.0: No slowdown)
	l4d2_slowdown_uzi_percent "0.3"
	```
</details>

* <details><summary>Command | 命令</summary>
	
	None
</details>

* <details><summary>Gunfire Slowdown Calculation Formula</summary>
	
	> Effect: Tank current speed is 210<br/>
	If AI Tank being shot by ak47 bullet, speed is 210 - 210 * 0.17 * 0.6 = 188<br/>
	If Tank Player being shot by ak47 bullet, speed is 210 - 210 * 0.1 * 0.6 = 197<br/>
	```php
	l4d2_slowdown_gunfire_tank "0.17"
	l4d2_slowdown_gunfire_tank_player "0.1"
	l4d2_slowdown_ak_percent "0.6"
	```

	> Effect: If AI Infected being shot by any weapon, game default slowdown settings<br/>
	If Infected Player being shot by any weapon, no slowdown<br/>
	```php
	l4d2_slowdown_gunfire_si "-1.0"
	l4d2_slowdown_gunfire_player "0.0"
	```
</details>

- - - -
# 中文說明
依據槍械種類修改特感隊伍的槍緩速度

* 原理
	* 遊戲中特感被倖存者射中時，特感移動速度會變慢，此插件就是修改特感被子彈射中之後的速度，俗稱"槍緩"
	* 真人特感玩家也適用
    * <details><summary>槍緩速度計算 (點我展開)</summary>

        > 效果: 假設Tank目前移動速度為210<br/>
		當AI Tank被AK47射中時，速度變成210 - 210 * 0.17 * 0.6 = 188<br/>
		當真人Tank被AK47射中時，速度變成210 - 210 * 0.1 * 0.6 = 197<br/>
        ```php
		l4d2_slowdown_gunfire_tank "0.17"
		l4d2_slowdown_gunfire_tank_player "0.1"
		l4d2_slowdown_ak_percent "0.6"
        ```

        > 效果: 當AI特感被任一槍械射中時，槍緩速度為遊戲預設計算方式<br/>
		當真人特感被任一槍械射中時，沒有槍緩減速<br/>
        ```php
		l4d2_slowdown_gunfire_si "-1.0"
		l4d2_slowdown_gunfire_player "0.0"
        ```
    </details>

* 功能
	1. 可設置沒有槍緩減速
	2. 可分別對AI特感與真人玩家設置不同的槍緩
	3. 可設置所有武器的槍緩速度包括地圖上的機槍砲塔
