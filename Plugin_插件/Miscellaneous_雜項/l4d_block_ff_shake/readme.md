# Description | 內容
No friendly fire, and prevent survivor vision from getting experiencing recoil and screen shaking

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

	* v1.0 (2023-4-6)
		* Initial Release
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_block_ff_shake.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d_block_ff_shake_enable "1"

		// If 1, Block shove too
		l4d_block_ff_shake_shove "1"
		```
</details>

* <details><summary>Command | 命令</summary>
	
	None
</details>

- - - -
# 中文說明
關閉友傷與右鍵推人造成隊友螢幕晃動與後座力降低

* 原理
	* 官方預設中，開槍打到對友，會使得隊友螢幕晃動且隊友的後座力會降低
	* 安裝上此插件會關閉友傷且不造成隊友任何影響

* 功能
	* 也可以設置右鍵推人不造成隊友晃動