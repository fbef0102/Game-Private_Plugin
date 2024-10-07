# Description | 內容
Enforces ConVars consistency from the data-file value

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Video | 影片展示
<br/>None

* Image | 圖示
<br/>None

* <details><summary>How does it work?</summary>

	* Write down ConVars you want to keep consistency in [data/sv_lock_cvar.cfg](data/sv_lock_cvar.cfg)
	* Check in-game ConVars that differ from the [data/sv_lock_cvar.cfg](data/sv_lock_cvar.cfg) values and fix them 
	* Why do convars value differ?
		* Player tries to hack in game (usually cheat or something)
		* Map script modified
		* Game modified
</details>

* Require | 必要安裝
<br/>None

* <details><summary>ConVar | 指令</summary>

	None
</details>

* <details><summary>Command | 命令</summary>
	
	None
</details>

* <details><summary>Data Config</summary>

	* [data/sv_lock_cvar.cfg](data/sv_lock_cvar.cfg)
</details>

* Apply to | 適用於
	```
	L4D1 
	L4D2
	Any Source Game
	```

* <details><summary>Related Plugin | 相關插件</summary>

	1. [sv_protect_cvar](/Plugin_插件/Server_伺服器/sv_protect_cvar): Protect ConVars from the data-file (should not be exposed to clients or logs), and send fake value to clients if possible
    	* 保護一些敏感的指令數值，不讓外界與客戶端查看，服務器內的客戶端可能會看到假數值
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.1 (2024-10-7)
		* Support Any Source Game

	* v1.0 (2023-12-2)
		* Initial Release
</details>

- - - -
# 中文說明
鎖住指令的值，不會被遊戲、地圖、玩家竄改

* 原理
	* 在 [data\sv_lock_cvar.cfg](data\sv_lock_cvar.cfg) 寫下你想要鎖住，不要被竄改的指令列表
	* 當遊戲中，這些指令的值被更動時，強制將指令值修改回來
	* 為何指令值會更動?
		* 玩家嘗試修改 (使用作弊方法之類)
		* 地圖腳本修改
		* 遊戲導演修改

* <details><summary>文件設定範例</summary>

	* [data/sv_lock_cvar.cfg](data/sv_lock_cvar.cfg)
</details>