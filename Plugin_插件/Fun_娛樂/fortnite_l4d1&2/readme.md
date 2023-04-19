# Description | 內容
Emotes and Dance in L4D1/2

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)


* Work | 作品展示
    * [不同意的請舉手](https://youtu.be/a3rbE3WV90g)

* [Video | 影片展示](https://youtu.be/iIDv53oFaJE)

* Image | 圖示
	* Dance (Up to 84 Emotes and Dance)
		> 支援自製模組跳舞
		<br/>![fortnite_l4d1&2_1](image/fortnite_l4d1&2_1.jpg)
	* Menu
		> 介面
		<br/>![fortnite_l4d1&2_2](image/fortnite_l4d1&2_2.jpg)
	* Troll
		> 一起跳
		<br/>![fortnite_l4d1&2_3](image/fortnite_l4d1&2_3.gif)

* Apply to | 適用於
	```
	L4D1
	L4D2
	```

* Translation Support | 支援翻譯
	```
	English
	繁體中文
	简体中文
	Spanish
	Turkish
	```

* <details><summary>Changelog | 版本日誌</summary>

    * 1.5.0 (2022-11-14)
		* Request by 壹梦
	    * Player dances when someone uses kit to heal him
	    * fix translation error
	    * fix file error
		* Compatibility support for SourceMod 1.11. Fixed various warnings.
		* Combine L4D1 and L4D2 required files
		* Add convar to disable dance dounce and stop downloading sound files

    * v1.4.3
	    * [Original plugin by Kodua, Franc1sco franug, TheBO$$, Foxhound](https://forums.alliedmods.net/showpost.php?p=2712458&postcount=163)
</details>

* Require | 必要安裝
<br/>None

* Related Plugin | 相關插件
	1. [l4d_MusicMapStart](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4d_MusicMapStart):Download and play custom music in game
		> 回合開始播放音樂，使用!music點歌系統，可播放自製的音樂
	2. [map-decals](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/map-decals): Allows admins to place any decals into the map that are defined in the the config and save them permanently for each map
		> 允許管理員將任何塗鴉放置在配置中定義的地圖中，並為每個地圖永久保存它們

* <details><summary>ConVar | 指令</summary>

    * cfg/sourcemod/fortnite_emotes_extended_l4d.cfg
		```php
		// admin flag for dances (empty for all players)
		sm_dances_admin_flag_menu ""

		// admin flag for emotes (empty for all players)
		sm_emotes_admin_flag_menu ""

		// Cooldown for emotes in seconds. -1 or 0 = no cooldown.
		sm_emotes_cooldown "3.0"

		// Hide enemy players when dancing
		sm_emotes_hide_enemies "0"

		// Hide weapons when dancing
		sm_emotes_hide_weapons "1"

		// Enable/Disable sounds for emotes.
		sm_emotes_sounds "1"

		// Sound volume for the emotes.
		sm_emotes_soundvolume "1.0"

		// Sets the playback speed of the animation. default (1.0)
		sm_emotes_speed "0.80"

		// Teleport back to the exact position when he started to dance. (Some maps need this for teleport triggers)
		sm_emotes_teleportonend "0"
		```
</details>

* <details><summary>Command | 命令</summary>
    
	* **Open Dance&Emote Menu**
	```php
	sm_emotes
	sm_emote
	sm_dances
	sm_dance
	```

	* **Adm forces someone to dance, check source code to see Emote ID (Adm required: ADMFLAG_GENERIC)**
	```php
	sm_setemotes <#userid|name> [Emote ID]
	sm_setemote <#userid|name> [Emote ID]
	sm_setdances <#userid|name> [Emote ID]
	sm_setdance <#userid|name> [Emote ID]
	```
</details>

* How do I set up files
	1. Preparation
		* Download all files(addons, materials, models, and sound).
		* Put them in the correct folder ("Left 4 Dead Dedicated Server\left4dead" or "Left 4 Dead 2 Dedicated Server\left4dead2" folder depending on your game).
		* Prepare your content-server for FastDL, if you don't know what "FastDL" is, please google it

	2. Setup server to work with downloadable content
		* ConVars in your cfg/server.cfg should be:
			* If you are l4d1
			```php
			sm_cvar sv_allowdownload "1"
			sm_cvar sv_downloadurl "http://your-content-server.com/game/left4dead/"
			```
			* If you are l4d2
			```php
			sm_cvar sv_allowdownload "1"
			sm_cvar sv_downloadurl "http://your-content-server.com/game/left4dead2"	
			```

	3. Uploading files to server.
		* Upload "models" and "sound" folder to content-server
			* If you are l4d1, your-content-server.com/game/left4dead/models/ and your-content-server.com/game/left4dead/models/sound/
			* If you are l4d2, your-content-server.com/game/left4dead2/models/ and your-content-server.com/game/left4dead2/models/sound/
		* Upload "models" and "sound" folder to basic server. ("Left 4 Dead Dedicated Server\left4dead" or "Left 4 Dead 2 Dedicated Server\left4dead2" folder depending on your game)
		* Upload "models" and "sound" folder to your client's game folder (for test reasons).

	4. Start the server and test
		* Join survivor and type !dance.

- - - -
# 中文說明
搞笑動作模組: 表情與舞蹈

* 原理
    * 玩家的模組做特殊的動作，總共有80多種表情與舞蹈
	* 動作分成兩種: 表情與舞蹈
	* 即使是使用自製的角色模組，依然能做表情與舞蹈
	* 請自備網空安裝模組與音樂檔案，客戶端才會下載檔案

* 功能
    1. 可設置誰有權限做表情或跳舞
	2. 可設置跳舞速度
	3. 可設置音樂音量
	4. 可設置幫對方打包的時候跳舞
	5. 可設置冷卻時間

* 如何設定檔案
	1. 準備清單
		* 下載所有文件（插件和模組檔案與音樂）。
		* 將它們放在正確的資料夾中（“Left 4 Dead Dedicated Server\left4dead”或“Left 4 Dead 2 Dedicated Server\left4dead2”資料夾，具體取決於您的遊戲）。
		* 準備你的網空並可以支援FastDL, 不知道什麼是FastDL請自行Google
		
	2. 設置伺服器以處理可下載的內容
		* 您的 cfg/server.cfg 中的 ConVars 應該是：
			* 如果你是 l4d1
			```php
			sm_cvar sv_allowdownload "1"
			sm_cvar sv_downloadurl "http://your-content-server.com/game/left4dead/"
			```
			* 如果你是 l4d2
			```php
			sm_cvar sv_allowdownload "1"
			sm_cvar sv_downloadurl "http://your-content-server.com/game/left4dead2"	
			```
		
	3. 上傳文件到伺服器。
		* 將"models" 和 "sound"資料夾上傳到網空伺服器
			* 如果你是 l4d1，your-content-server.com/game/left4dead/materials/decals/TS_SERVER/ <= 這裡是你的 *.vtf.bz2 文件
			* 如果你是 l4d2，your-content-server.com/game/left4dead2/materials/decals/TS_SERVER/ <= 這裡是你的 *.vtf.bz2 文件
		* 將"models" 和 "sound"資料夾複製到你的基本伺服器。
		* 將"models" 和 "sound"資料夾上傳到您客戶端的遊戲資料夾（出於測試原因）。
		
	4. 啟動伺服器並測試
		* 加入倖存者並輸入!dance，測試跳舞是否有動作

