# Description | 內容
Use Melees to knockback teammates

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtube.com/shorts/GnxyoVr3l4k)

* Image | 圖示
	<br/>![l4d2_melee_knock_survivor_1](image/l4d2_melee_knock_survivor_1.gif)

* <details><summary>How does it work?</summary>

	* Use melee weapons to sent teammates fly away
	* Support custom melee
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d2_melee_knock_survivor.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d2_melee_knock_survivor_enable "1"

		// Players with these flags have melee knock power (Empty = Everyone, -1: Nobody)
		l4d2_melee_knock_survivor_access_flag ""
		```
</details>

* <details><summary>Command | 命令</summary>

	None
</details>

* <details><summary>Data Config</summary>

	* ```data/l4d2_melee_knock_survivor.cfg```
		```php
		"melees"
		{
			"default" // Global melee Settings
			{
				"enable"        	"1"         // 1=Enable knockback
				"knockback"     	"300.0"     // Melee Knockback Value 
				"velocity_z"    	"280.0"     // Set higer valve => survivor boost fly by melee (0=Off, at least 251 required to push player off the ground.)
				"adrenaline_pow"  	"2.0"   	// Apply multiplier if attacker is Adrenaline Active
				"air"           	"0.6"   	// Apply multiplier if victim on air
			}
			...
		}
		```
</details>

* Apply to | 適用於
	```
	L4D2
	```

* <details><summary>Changelog | 版本日誌</summary>

	* v1.0 (2023-6-13)
		* Initial Release
</details>

- - - -
# 中文說明
近戰武器可以把隊友打開

* 原理
	* 拿著近戰武器，可以打飛隊友
	* 支援自製近戰武器

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d2_melee_knock_survivor.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		l4d2_melee_knock_survivor_enable "1"

		// 擁有這些權限的玩家，才可以使用近戰武器打開隊友, !modmenu, !modset, !modcopy (留白 = 任何人都能, -1: 無人)
		l4d2_melee_knock_survivor_access_flag ""
		```
</details>

* <details><summary>文件設定範例</summary>

	* ```data/l4d2_melee_knock_survivor.cfg```
		```php
		"melees"
		{
			"default" // 全近戰武器 預設設置
			{
			    "enable"        	"1"         // 1=開啟擊退效果
			    "knockback"     	"300.0"     // 近戰武器的擊退係數 (當"damage_multi"為0時，"knockback"為擊退數值)
			    "velocity_z"    	"280.0"     // 設置的數值愈大 => 隊友被近戰打中會飛離地面 (0=關閉, 需要251數值以上才會飛起來)
			    "adrenaline_pow"  	"2.0"       // 攻擊者如果處於腎上腺素狀態，擊退力 X 此數值
			    "air"           	"0.6"   	// 隊友在空中被打時，擊退力 X 此數值
			}
			...
		}
		```
</details>