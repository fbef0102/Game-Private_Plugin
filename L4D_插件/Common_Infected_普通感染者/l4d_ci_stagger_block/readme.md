# Description | 內容
Block Common Infected stumble by Boomer/Genade Launcher/Shove....

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Apply to | 適用於
	```
	L4D1
	L4D2
	```

* Image | 圖示
	<br/>![l4d_ci_stagger_block_1](image/l4d_ci_stagger_block_1.gif)
	<br/>![l4d_ci_stagger_block_1](image/l4d_ci_stagger_block_2.gif)

* <details><summary>How does it work?</summary>

	* Block Common Infected stagger by
		* Boomer explosion
		* Grenade Launcher
		* Survivor shove
		* Common pushes each other
		* Witch pushes each other
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	2. [Actions](https://forums.alliedmods.net/showthread.php?t=336374)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_ci_stagger_block.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d_ci_stagger_block_enable "1"

		// Prevent Common Infected stagger by 1=Boomer, 2=Witch, 4=Common, 8=Grenade Launcher, 16=Survivor Shove (31=All, 0=Off)
		l4d_ci_stagger_block_flag "15"
		```
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.0 (2024-5-15)
		* Initial Release
</details>

- - - -
# 中文說明
普通感染者 不會被Boomer/榴彈/倖存者右鍵... 震退

* 原理
	* 以下情況不會硬直震退 普通感染者
		1. Boomer爆炸
		2. 榴彈 (依然會炸傷)
		3. 倖存者右鍵
		4. 普通感染者推擠
		5. Witch推擠

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d_ci_stagger_block.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		l4d_ci_stagger_block_enable "1"

		// 普通感染者 不會被以下情況硬質震退 1=Boomer爆炸, 2=Witch推擠, 4=普通感染者推擠, 8=榴彈, 16=倖存者右鍵. 數字相加 (0=關閉, 31=全部)
		l4d_ci_stagger_block_flag "15"
		```
</details>