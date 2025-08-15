# Description | 內容
Save weapons/items when survivor player going AFK or Game Crash

> __Note__ <br/>
This plugin is private, Please contact [me](/#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](/#私人插件列表-private-plugins-list)

* Apply to | 適用於
	```
	L4D2
	```

* Image | 圖示
	<br/>![l4d2_afk_saveweapons_1](image/l4d2_afk_saveweapons_1.gif)

* <details><summary>How does it work?</summary>

	* When real survivor alive player going afk or spec or leaves server or game crash, save player's all weapons and items
		* Bot who replaced player only have pistol and smg
		* After go back to take over survivor, restore his all weapons and items
		* Can save to next stage in coop/realism
		* Can save melee weapons
		* Can save health over 100hp
	* Clean up backup data if
		* Survivor wipe out
		* Switch into infected team
		* Take over dead survivor
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	2. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)
	3. [l4d_heartbeat](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4d_heartbeat)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d2_afk_saveweapons.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d2_afk_saveweapons_enable "1"

		// How message displays. (0: Disable, 1:In chat, 2: In Hint Box, 3: In center text)
		l4d2_afk_saveweapons_announce_type "1"

		// If 1, Save Weapons/Items/Health when player going afk
		l4d2_afk_saveweapons_going_afk "1"

		// Save Weapons/Items/Health when the alive survivor player 1=Left the server, 2=Game crash (3=Both, 0=Off)
		l4d2_afk_saveweapons_disconnect "2"

		// If 1, save health and restore. (can save >100 hp)
		// Not save if player is incap or hanging from ledge
		l4d2_afk_saveweapons_save_health "0"
		```
</details>

* <details><summary>Related | 相關插件</summary>

	1. [l4d2_ty_saveweapons](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4d2_ty_saveweapons): L4D2 coop save weapon when map transition if more than 4 players
		* 當伺服器有5+以上玩家遊玩戰役、寫實時，保存他們過關時的血量以及攜帶的武器、物資
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.6 (2024-10-3)
		* Require l4d_heartbeat

	* v1.5 (2024-7-30)
		* Fixed m_currentReviveCount

	* v1.4 (2024-7-20)
		* Update cvars

	* v1.3 (2024-7-7)
		* Save health
		* Update cvars

	* v1.2 (2024-5-5)
		* Update cvars

	* v1.1 (2024-4-30)
		* Save weapons/items if player crash during the game.
		* Update cvars

	* v1.0 (2024-3-29)
		* Initial Release
</details>

- - - -
# 中文說明
當倖存者玩家閒置、旁觀、崩潰、閃退時，保存攜帶的武器、物資

* 功能
	* 當活著的倖存者真人玩家閒置、旁觀、離開伺服器時，保存身上攜帶的武器、物資
		* 此時取代玩家的Bot會只剩下一把手槍與機槍
		* 下次加入Bot遊玩時，恢復上次所攜帶的武器、物資
		* 可以保存到人類過關
		* 可以保存三方圖近戰
		* 可以保存血量
	* 有以下情況會清空數據
		* 人類滅團
		* 切換隊伍當特感
		* 玩家死亡

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d2_afk_saveweapons.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		l4d2_afk_saveweapons_enable "1"

		// 武器、物資、血量恢復提示該如何顯示. (0: 不提示, 1: 聊天框, 2: 黑底白字框, 3: 螢幕正中間)
		l4d2_afk_saveweapons_announce_type "1"

		// 為1時，倖存者真人玩家閒置、旁觀時，保存身上攜帶的武器、物資、血量
		l4d2_afk_saveweapons_going_afk "1"

		// 下列何種離線情況，保存身上攜帶的武器、物資、血量。1=玩家離開伺服器時, 2=玩家遊戲崩潰或閃退時
		// 3=兩者都適用, 0=關閉此功能
		l4d2_afk_saveweapons_disconnect "2"

		// 為1時，保存血量與黑白狀態 (可保存超過100HP)
		// 倒地或掛邊狀態時不保存
		l4d2_afk_saveweapons_save_health "0"
		```
</details>
