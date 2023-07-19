# Description | 內容
New Vote System (use L4D built-in votes UI)

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Video | 影片展示
<br/>None

* <details><summary>Image</summary>

	* Type !newvotes to open vote menu
	<br/>![l4d2_vote_change_1](image/l4d2_vote_change_1.jpg)
	* Menu - "Call Vote"
	<br/>![l4d2_vote_change_2](image/l4d2_vote_change_2.jpg)
	* Menu - "Change Diffciulty"
	<br/>![l4d2_vote_change_3](image/l4d2_vote_change_3.jpg)
	* Menu - "Other"
	<br/>![l4d2_vote_change_4](image/l4d2_vote_change_4.jpg)
	* Valve Map + Custom Maps (automatic parsing of custom maps vpk files - no need to add map names manually)
	<br/>![l4d2_vote_change_5](image/l4d2_vote_change_5.jpg)
	* Use L4D built-in votes UI system
	<br/>![l4d2_vote_change_6](image/l4d2_vote_change_6.jpg)
</details>

* Apply to | 適用於
	```
	L4D2
	```

* Translation Support | 支援翻譯
	```
	English
	繁體中文
	简体中文
	```

* <details><summary>Changelog | 版本日誌</summary>

	* v1.1h (2023-6-11)
		* Initial Release
</details>

* Require
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	2. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)
	3. [builtinvotes](https://github.com/L4D-Community/builtinvotes/actions)
	4. [sourcescramble](https://github.com/nosoop/SMExt-SourceScramble/releases)
	5. [l4dtoolz](/Tutorial_%E6%95%99%E5%AD%B8%E5%8D%80/English/Server/Install_Other_File#l4dtoolz)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d2_vote_change.cfg
		```php
		// Players with these flags have kick immune. (Empty = Everyone, -1: Nobody)
		l4d2_vote_change_Kick_immune_flag "z"

		// Players with these flags have ban immune. (Empty = Everyone, -1: Nobody)
		l4d2_vote_change_ban_immune_flag "z"

		// Ban how many minutes. (0 = Permanent)
		l4d2_vote_change_ban_minutes "0"

		// Delay to start another vote after vote ends.
		l4d2_vote_change_delay "60"

		// 0=Plugin off, 1=Plugin on.
		l4d2_vote_change_enable "1"

		// Numbers of real survivor and infected player required to start a autorecover vote.
		l4d2_vote_change_required "1"

		// If 1, spectator can call a vote
		l4d2_vote_change_spectator_call_vote "0"

		// If 1, spectator can participate any vote (vote yes, vote no)
		l4d2_vote_change_spectator_join_vote "1"
		```
</details>

* <details><summary>Command | 命令</summary>

	* **Open Vote Menu**
		```php
		sm_newvotes
		sm_v
		```

	* **Admin can force pass the current vote (Adm Required: ADMFLAG_BAN)**
		```php
		sm_p
		```

	* **Admin can force cancel the current vote (Adm Required: ADMFLAG_BAN)**
		```php
		sm_f
		```
</details>

- - - -
# 中文說明
新型的投票系統

* <details><summary>圖示(點我展開)</summary>

	* 輸入!newvotes打開投票菜單
	<br/>![l4d2_vote_change_1_zho](image/zho/l4d2_vote_change_1_zho.jpg)
	* 子菜單"發起投票"
	<br/>![l4d2_vote_change_2_zho](image/zho/l4d2_vote_change_2_zho.jpg)
	* 子菜單"更改難度"
	<br/>![l4d2_vote_change_3_zho](image/zho/l4d2_vote_change_3_zho.jpg)
	* 子菜單"其他"
	<br/>![l4d2_vote_change_4_zho](image/zho/l4d2_vote_change_4_zho.jpg)
	* 官方圖與三方圖可以選擇關卡 (能自動識別並新增三方圖)
	<br/>![l4d2_vote_change_5_zho](image/zho/l4d2_vote_change_5_zho.jpg)
	* 使用官方的內建投票圖形UI
	<br/>![l4d2_vote_change_6_zho](image/zho/l4d2_vote_change_6_zho.jpg)
</details>

* 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	2. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)
	3. [builtinvotes](https://github.com/L4D-Community/builtinvotes/actions)
	4. [sourcescramble](https://github.com/nosoop/SMExt-SourceScramble/releases)
	5. [l4dtoolz](/Tutorial_%E6%95%99%E5%AD%B8%E5%8D%80/Chinese_%E7%B9%81%E9%AB%94%E4%B8%AD%E6%96%87/Server/%E5%AE%89%E8%A3%9D%E5%85%B6%E4%BB%96%E6%AA%94%E6%A1%88%E6%95%99%E5%AD%B8#%E5%AE%89%E8%A3%9Dl4dtoolz)


* 原理
	* 輸入!newvotes -> 選擇項目 -> 發起投票 -> F1同意 或 F2不同意

* 功能
	* 任何人發起投票後，管理員可輸入!p一票同意；!f一票否決。

* 投票菜單表
	* 主列表：
		* 发起投票
		* 更改难度
		* 其他

	* 子菜單 "發起投票"
		* 換官方圖		(可以選擇關卡)
		* 三方圖		(能自動識別並新增三方圖，可以選擇關卡)
		* 重啟本關		(重新回合，非重新刷圖)
		* 踢出玩家		(不可踢出管理員)
		* 移動玩家到旁觀席
		* 回滿血
		* 增減旁觀		(4~30個位子)
		* 封禁玩家     	(不可封禁管理員)

	* 子菜單 "更改難度"
		* 更改難度		(簡單、一般、進階、專家)

	* 子菜單 "其他"
		* 倒地即死		(開啟、關閉)
	
* <details><summary>指令中文介紹(點我展開)</summary>

	* cfg/sourcemod/l4d2_vote_change.cfg
		```php
		// 擁有這權限的人無法被投票踢出伺服器 (留白 = 任何人無法被踢, -1: 所有人都可以被踢)
		l4d2_vote_change_Kick_immune_flag "z"

		// 擁有這權限的人無法被投票永久封禁 (留白 = 任何人無法被永久封禁, -1: 所有人都可以被永久封禁)
		l4d2_vote_change_ban_immune_flag "z"

		// 過X秒後才能再發起投票.
		l4d2_vote_change_delay "60"

		// 0=插件關閉, 1=插件開啟.
		l4d2_vote_change_enable "1"

		// 倖存者與特感隊伍總共要有X位真人玩家在場才能發起投票.
		l4d2_vote_change_required "1"

		// 如果為1, 旁觀者可以發起投票
		l4d2_vote_change_spectator_call_vote "1"

		// 如果為1, 旁觀者可以參與投票 (按F1同意, 按F2不同意)
		l4d2_vote_change_spectator_join_vote "1"
		```
</details>

* <details><summary>命令中文介紹(點我展開)</summary>

	* **打開投票菜單**
		```php
		sm_newvotes
		sm_v
		```

	* **管理員可以強制通過 (權限: ADMFLAG_BAN)**
		```php
		sm_p
		```

	* **管理員可以強制否則 (權限: ADMFLAG_BAN)**
		```php
		sm_f
		```
</details>