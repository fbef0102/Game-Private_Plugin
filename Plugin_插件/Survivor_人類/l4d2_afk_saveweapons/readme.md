# Description | 內容
Save Weapons/Items when going AFK

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Video | 影片展示
<br/>None

* Image | 圖示
	<br/>![l4d2_afk_saveweapons_1](image/l4d2_afk_saveweapons_1.gif)

* <details><summary>How does it work?</summary>

	* When real survivor alive players going afk or spec, save his all weapons and items
		* Bot who replaced player only have pistol and smg
		* After go back to take over survivor，restore his all weapons and items
		* Can save to next stage in coop/realism
	* Clean up backup data if
		* Survivor wipe out
		* Switch into infected team
		* Take over dead survivor
</details>

* Require | 必要安裝
<br/>None

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d2_afk_saveweapons.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d2_afk_saveweapons_enable "1"
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

	* v1.0 (2024-3-29)
	    * Initial Release
</details>

* <details><summary>Related | 相關插件</summary>

	1. [l4d2_ty_saveweapons](https://github.com/fbef0102/L4D2-Plugins/tree/master/l4d2_ty_saveweapons): L4D2 coop save weapon when map transition if more than 4 players
	    * 當伺服器有5+以上玩家遊玩戰役、寫實時，保存他們過關時的血量以及攜帶的武器、物資
</details>

- - - -
# 中文說明
當倖存者玩家閒置或旁觀時，保存攜帶的武器、物資

* 功能
	* 當活著的倖存者真人玩家閒置或旁觀時，保存身上攜帶的武器、物資
		* 此時取代玩家的Bot會只剩下一把手槍與機槍
		* 下次取代Bot倖存者遊玩時，恢復身上攜帶的武器、物資
		* 可以保存到人類過關
	* 有以下情況會清空數據
		* 人類滅團
		* 切換到特感隊伍
		* 取代死亡的倖存者

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d2_afk_saveweapons.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		l4d2_afk_saveweapons_enable "1"
		```
</details>
