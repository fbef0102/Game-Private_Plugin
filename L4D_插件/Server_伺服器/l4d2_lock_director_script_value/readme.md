# Description | 內容
Force director script values by config instead of VPK or vscript file

> __Note__ <br/>
This plugin is private, Please contact [me](/#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](/#私人插件列表-private-plugins-list)

* Apply to | 適用於
	```
	L4D2
	```

* Image | 圖示
	<br/>![l4d2_lock_director_script_value_1](image/l4d2_lock_director_script_value_1.jpg)

* <details><summary>How does it work?</summary>

	* Force director script values by config [data/l4d2_lock_director_script_value/xxx.cfg](data/l4d2_lock_director_script_value)
	* Write down director option you want to override, It will override vscript value during the whole game
		* An easy way to change special infected limit and spawn time
	* [Valve wiki](https://developer.valvesoftware.com/wiki/Left_4_Dead_2/Scripting/Director_Scripts#DirectorOptions): To see all director options: 
	* [L4D2 Offical VScript Decompiled](https://github.com/fbef0102/Official-Vscripts-Decompiled/tree/master/update)
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d2_lock_director_script_value.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d2_lock_director_script_value_enable "1"

		// Read file for settings in data/l4d2_lock_director_script_value folder (Ex: "custom_tanks" = reads 'data/l4d2_lock_director_script_value/custom_tanks.cfg')
		// Empty=Reads data/l4d2_lock_director_script_value/xxxx.cfg (xxxx = gamemode or mutation name).
		l4d2_lock_director_script_value_read_data ""
		```
</details>

* <details><summary>Data Config</summary>

	* In [data/l4d2_lock_director_script_value](data/l4d2_lock_director_script_value) folder
		> Manual in this file, click for more details...
		* Run coop mode => plugin reads ```coop.cfg```
		* Run versus mode => plugin reads```versus.cfg```
		* Run survival  mode => plugin reads```survival .cfg```
		* Run scavenge mode => plugin reads```scavenge.cfg```
		* Run realism mode => plugin reads```realism.cfg```
		* Run mutation gamemode => plugin reads```xxxx.cfg``` (```xxxx``` = mutation name)
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.0 (2024-11-22)
		* Initial Release
</details>

- - - -
# 中文說明
使用data文件強制修改導演系統的參數，無須安裝vpk或撰寫vscript

* 原理
	* 使用data文件強制修改導演系統的參數: [data/l4d2_lock_director_script_value/xxx.cfg](data/l4d2_lock_director_script_value)
	* 寫下你想要修改的導演系統參數, 遊戲中會強制覆蓋
	* [Valve 百科](https://developer.valvesoftware.com/wiki/Left_4_Dead_2/Scripting/Director_Scripts#DirectorOptions): 查看所有導演系統的參數: 
	* [L4D2 所有官方圖與突變模式的VScript腳本](https://github.com/fbef0102/Official-Vscripts-Decompiled/tree/master/update): 

* 用意在哪?
	* 比較簡單的方式改變特感數量與生成時間
	* 強制覆蓋三方圖影響的導演系統

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d2_lock_director_script_value.cfg
		```php
		// 0=關閉插件, 1=開啓插件
		l4d2_lock_director_script_value_enable "1"

		// 此插件想要讀取的文件名稱, 位於data/l4d2_lock_director_script_value資料夾 (譬如: "custom_tanks"，此插件讀取 data/l4d2_lock_director_script_value/custom_tanks.cfg)
		// 留白=插件預設讀取data/l4d2_lock_director_script_value/xxxx.cfg (xxxx = 遊戲模式名稱或突變模式名稱).
		l4d2_lock_director_script_value_read_data ""
		```
</details>

* <details><summary>文件設定範例</summary>

	* 在 [data/l4d2_lock_director_script_value](data/l4d2_lock_director_script_value) 資料夾裡
		> 內有中文說明，可點擊查看
		* 當前模式是戰役 => 插件讀取```coop.cfg```
		* 當前模式是對抗 => 插件讀取```versus.cfg```
		* 當前模式是生存 => 插件讀取```survival.cfg```
		* 當前模式是清道夫 => 插件讀取```scavenge.cfg```
		* 當前模式是寫實 => 插件讀取```realism.cfg```
		* 其他模式 => 插件讀取```xxxx.cfg``` (```xxxx``` = 遊戲模式名稱或突變模式名稱)
</details>