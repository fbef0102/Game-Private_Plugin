# Description | 內容
Fixed the issue that witch sometimes changes target to attack special infected or other people, the witch will never change the initial target

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Video | 影片展示
<br/>None

* Image | 圖示
<br/>None

* <details><summary>How does it work?</summary>

  * Witch only chases the target who startles her at first.
  * Fixed the issue that witch sometimes changes target to attack special infected or other people.
</details>

* Require | 必要安裝
	1. [l4d_fix_target_replace](https://github.com/Target5150/MoYu_Server_Stupid_Plugins/tree/master/The%20Last%20Stand/l4d_fix_target_replace)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_witch_chase_target_lock.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d_witch_chase_target_lock_enable "1"
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

* <details><summary>Related Plugin | 相關插件</summary>

	1. [witch_target_override](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/witch_target_override): Change target when the witch incapacitates or kills victim + witch auto follows survivors
    	> Witch會自動跟蹤你，一旦驚嚇到她，不殺死任何人絕不罷休
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.0 (2023-8-1)
		* Initial Release
</details>

- - - -
# 中文說明
修復Witch轉移目標攻擊特感或其他人，不管多少人阻擋她的路，Witch永遠不會改變目標

* 原理
	* Witch只會追第一個驚嚇她的人
	* Witch在追逐的路上，不管多少隻特感或多少個倖存者阻擋她的路，Witch永遠不會改變目標
	* 修復Witch轉移目標攻擊特感或其他人
