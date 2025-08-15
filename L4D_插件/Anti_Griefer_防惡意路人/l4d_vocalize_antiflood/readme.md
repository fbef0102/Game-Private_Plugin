# Description | 內容
Stops vocalize flooding when reaching token limit

> __Note__ <br/>
This plugin is private, Please contact [me](/#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](/#私人插件列表-private-plugins-list)
<br/>🟥Dedicated Server Only
<br/>🟥只能安裝在Dedicated Server

* Apply to | 適用於
	```
	L4D1 Dedicated Server
	L4D2 Dedicated Server
	```

* [Video | 影片展示](https://youtu.be/coX2i0tun0k)

* Image | 圖示
	<br/>![l4d_vocalize_antiflood_1](image/l4d_vocalize_antiflood_1.jpg)

* <details><summary>How does it work?</summary>

	* Stops vocalize flooding in server.
	* When player's character vocalizes, add a token, there are two types of token.
		* World token: Created by the map (such as landmarks, "Down this way", "Through here") and by the game (such as team mate actions, "Let me heal you up", "Help I'm falling")
		* Player token: Player uses vocalize command (such as "Death Scream", "Hurry up")
	* Once token limit reach
		* World token limit reach: Your character can not speak, conversation trigger by map or by the game
		* Player token limit reach: Player can't use vocalize command
	* Stops vocalize when reaching token limit, token would be decreased after certain time
</details>

* Require | 必要安裝
	1. [sceneprocessor](https://forums.alliedmods.net/showpost.php?p=2766130&postcount=59)
	2. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)

* <details><summary>ConVar | 指令</summary>

	* cfg\sourcemod\l4d_vocalize_antiflood.cfg
		```php
		// Time interval to decrease a player token. (second)
		l4d_vocalize_antiflood_player_token_time "10"

		// Time interval to decrease a word token. (second)
		l4d_vocalize_antiflood_word_token_time "5"

		// Max Player Token limit. (-1 = No Limit)
		l4d_vocalize_antiflood_player_token_limit "3"

		// Max World Token limit. (-1 = No Limit)
		l4d_vocalize_antiflood_world_token_limit "-1"

		// If 1, notify antiflood message to player.
		l4d_vocalize_antiflood_notify "1"

		// If 1, prevent all vocalizing talk triggered by the map (Remove all instanced_scripted_scene entities)
		l4d_vocalize_antiflood_remove_maptalk "0"

		// Players with these flags have immune to token limit. (Empty=Everyone, -1=Nobody)
		l4d_vocalize_antiflood_immue_flag "z"
		```
</details>

* Translation Support | 支援翻譯
	```
	translations/l4d_vocalize_antiflood.phrases.txt
	```

* <details><summary>Changelog | 版本日誌</summary>

	* v1.0h (2024-4-28)
		* Update Cvars

	* v1.3 (2022-11-18)
		* Remake Code
		* Add Cvars
		* Split token into world and player
		* Delete commands

	* v1.0.2
		* [Original Plugin by Mr. Zero](https://forums.alliedmods.net/showthread.php?t=241588)
</details>

- - - -
# 中文說明
限制玩家使用角色語音，當語音次數達到限制之後開始禁止，必須等待冷卻時間結束才能再使用角色語音

* 原理
	* 每當角色發出語音，累積一個token，token分成兩種
		* 世界token: 遊戲觸發的劇情對話 (譬如故事對話 "走這裡"、"穿越這棟建築物" 或是角色狀態 "讓我治療你"、"救命！我倒下了！")
		* 玩家token: 玩家自主使用角色雷達語音 (譬如 "死亡尖叫"、"準備好了嗎?")
	* 當token達限制時
		* 當世界tokentoken達到限制之後，玩家的角色不能說出劇情對話
		* 當玩家tokentoken達到限制之後，玩家的角色不能使用角色雷達語音
	* 每過一段時間自動移除token，玩家的角色才可以繼續發出語音

* 用意在哪?
	* 惡意玩家整場都在死亡尖叫或其他煩人的對話，頻繁使用角色雷達語音

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg\sourcemod\l4d_vocalize_antiflood.cfg
		```php
		// 每10秒降低一個 玩家token
		l4d_vocalize_antiflood_player_token_time "10"

		// 每10秒降低一個 世界token
		l4d_vocalize_antiflood_word_token_time "5"

		// 每一位玩家短時間內使用雷達語音的次數 (-1 = 無限制)
		l4d_vocalize_antiflood_player_token_limit "3"

		// 每一位玩家短時間內觸發劇情對話的次數 (-1 =無限制)
		l4d_vocalize_antiflood_world_token_limit "-1"

		// 為1時，通知玩家你被限制語音.
		l4d_vocalize_antiflood_notify "1"

		// 為1時，移除所有地圖觸發的劇情對話. (移除 instanced_scripted_scene 實體)
		l4d_vocalize_antiflood_remove_maptalk "0"

		// 擁有這些權限的玩家，不受此插件限制語音 (留白 = 任何人都不受限制, -1: 所有人都被限制)
		l4d_vocalize_antiflood_immue_flag "z"
		```
</details>


