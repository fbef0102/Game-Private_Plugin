# Description | 內容
The Charger can grab survivor and drop

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/BsXCwzToz0A)

* Image | 圖示
	* Grab a survivor with melee and able to jump (徒手抓住倖存者)
	<br/>![l4d2_charger_grab_1](image/l4d2_charger_grab_1.gif)

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d2_charger_grab.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d2_charger_grab_allow "1"

		// If 1, Bots can grab survivor.
		l4d2_charger_grab_bot_enable "1"

		// Cold Down tiem in seconds can human charger grab a survivor again.
		l4d2_charger_grab_colddown "5.0"

		// If 1, Humans can grab survivor.
		l4d2_charger_grab_human_enable "1"

		// If 1, allow human chargers to jump while grabbing a survivor.
		l4d2_charger_grab_jump "1"

		// Allow chargers to carry and drop survivors with the melee button (RMB). 0=Off. 1=Grab Incapped (Not Hanging from ledge). 2=Grab Standing. 4=Drop Incapped. 8=Drop Standing. Add numbers together.
		l4d2_charger_grab_pickup "15"

		// If 1, Allow pummel to be started while grabbing a survivor (LMB). 0=Game Behavior
		l4d2_charger_grab_pummel "1"

		// How long can human charger grab a survivor.
		l4d2_charger_grab_time "5.0"
		```
</details>

* <details><summary>Command | 命令</summary>

	None
</details>

* Apply to | 適用於
	```
	L4D2
	```

* <details><summary>Related Plugin | 相關插件</summary>

	1. [l4d2_charger_unstoppable](/Plugin_插件/Charger_Charger/l4d2_charger_unstoppable): Adds a lot of abilities and powers to the Charger to become unstoppable titan.
		> 增強Charger，賦予多種超能力成為無人能檔的雷神 (Bot 也適用)
	2. [l4d2_charger_pickup_incap](/Plugin_插件/Charger_Charger/l4d2_charger_pickup_incap): The charger is able to carry any incapacitated player and fling any incapacitated player
		> Charger可以衝撞帶走倒地的倖存者並撞倒他們 (Bot 也適用)
	3. [l4d2_release_victim](https://github.com/fbef0102/L4D2-Plugins/tree/master/l4d2_release_victim): Allow to release victim
		> 特感可以釋放被抓住的倖存者
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.3 (2023-11-15)
		* Improve code

	* v1.2 (2023-7-11)
		* Require left4dhooks v1.34 or above
		
	* v1.1 (2023-4-11)
		* Do not grab the player who is hanging from ledge.

	* v1.0 (2023-4-11)
		* Initial Release
</details>

- - - -
# 中文說明
Charger可以徒手抓住人類趴趴走

* 原理
	* 扮演Charger特感使用右鍵直接抓住倖存者趴趴走
	* 抓住期間可以
		* 空白鍵跳躍
		* 右鍵釋放，但會有冷卻時間
		* 左鍵開始捶地板
	* Bot Charger也適用，但是只能抓住一瞬間然後開始捶地板

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d2_charger_grab.cfg
  		```php
		// 0=關閉插件, 1=開啟插件
		l4d2_charger_grab_allow "1"

		// 為1時，AI Charger也能徒手抓倖存者
		l4d2_charger_grab_bot_enable "1"

		// 能夠再次徒手抓倖存者的冷卻時間
		l4d2_charger_grab_colddown "5.0"

		// 為1時，真人 Charger也能徒手抓倖存者
		l4d2_charger_grab_human_enable "1"

		// 為1時，真人 Charger抓住倖存者期間可以按下空白鍵跳躍
		l4d2_charger_grab_jump "1"

		// 允許真人Charger按下右鍵做出甚麼行為? 0=沒有行為. 1=抓住倒地的玩家(掛邊除外). 2=抓住站立的玩家. 4=釋放倒地的玩家(掛邊除外). 8=釋放站立的玩家. 把想要的行為的數字加起來
		l4d2_charger_grab_pickup "15"

		// 為1時，真人 Charger抓住倖存者期間可以按下左鍵開始捶地板 0=按下左鍵衝刺
		l4d2_charger_grab_pummel "1"

		// 允許真人 Charger徒手抓倖存者的時間，時間一到自動捶地板
		l4d2_charger_grab_time "5.0"
		```
</details>