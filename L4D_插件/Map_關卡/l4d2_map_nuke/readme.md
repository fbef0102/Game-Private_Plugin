# Description | 內容
Slay Survivors After Countdown Time Passes + Restart chapter or campaign

> __Note__ <br/>
This plugin is private, Please contact [me](/#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](/#私人插件列表-private-plugins-list)<br/>

* Apply to | 適用於
    ```
    L4D1 coop
    L4D2 coop/versus/realism
    ```

* [Video | 影片展示](https://youtu.be/WVBMtRZGLHc)

* Image | 圖示
	<br/>![l4d2_map_nuke_1](image/l4d2_map_nuke_1.jpg)
	<br/>![l4d2_map_nuke_2](image/l4d2_map_nuke_2.gif)

* <details><summary>How does it work?</summary>

	* Survivors have to make it to saferoom or rescue vehicle within time limit
		* Map Nuke Time
			* Start timer once survivor has left the saferoom
			* Once time out, slay all survivors
		* City Escape Time (Coop/Realism Only)
			* Start timer once survivor has left the saferoom in the first level of the campain
			* Once city escape time out, slay all survivors and restart the whole campaign
	* You can customize time limit for each map in file [data/l4d2_map_nuke.cfg](data/l4d2_map_nuke.cfg)
		* Manual in this file, click for more details...
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	2. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)
	3. [l4d2_mission_manager](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4d2_mission_manager)
	4. (L4D2) [l4d2_fix_changelevel](https://github.com/Target5150/MoYu_Server_Stupid_Plugins/tree/master/The%20Last%20Stand/l4d2_fix_changelevel): Fix issues due to forced changelevel.
		* 修復手動更換地圖會遇到的問題
	5. (L4D2) [l4d2_transition_info_fix](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4d2_transition_info_fix): Fix issues after map transitioned, transition info is still retaining when changed new map by other ways.
		* 修復中途換地圖的時候(譬如使用Changelevel指令)，會遺留上次的過關保存設定，導致滅團後倖存者被傳送到安全室之外或死亡
		
* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d2_map_nuke.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d2_map_nuke_enable "1.0"

		// Chapter Nuke count down hint text to be displayed
		l4d2_map_nuke_announcer_chapter "90.0"

		// City Escape count down hint text to be displayed
		l4d2_map_nuke_announcer_campaign "180.0"

		// Display Nuke Warning Text When Players Leave Saferoom
		l4d2_map_nuke_warning "1"
		```
</details>

* <details><summary>Command | 命令</summary>
    
   * **Display count down time left**
		```php
		sm_nuketimeleft
		sm_escapetimeleft
		```
</details>

* <details><summary>Changelog | 版本日誌</summary>

    * v1.2 (2026-7-23)
        * Support L4D1

    * v1.1 (2025-12-3)
		* Update data file, cvars

    * v1.0 (2023-8-26)
        * Initial Release
</details>

- - - -
# 中文說明
限時通關一個關卡或一整張地圖，超過時間會處死所有倖存者，並重啟關卡或整張地圖

* 原理
	* 倖存者必須在指定時間內逃亡到安全室或者通關上救援
		* 關卡逃亡時間
			* 倖存者離開安全室即開始計時
			* 一旦關卡逃亡時間到，處死所有倖存者
		* 城市逃亡時間 (只出現於戰役/寫實模式)
			* 從第一關倖存者離開安全室時，開始計時
			* 一旦城市逃亡時間到，處死所有倖存者並重新回到地圖的第一關
	* 可以設置文件[data/l4d2_map_nuke.cfg](data/l4d2_map_nuke.cfg)，決定每一關的逃亡時間
		* 內有中文說明，可點擊查看

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d2_map_nuke.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		l4d2_map_nuke_enable "1.0"

		// 關卡逃亡剩餘90秒時，開始顯示倒數
		l4d2_map_nuke_announcer_chapter "90.0"

		// 城市逃亡剩餘90秒時，開始顯示倒數
		l4d2_map_nuke_announcer_campaign "180.0"

		// 當倖存者離開安全室時，顯示逃亡剩餘時間
		l4d2_map_nuke_warning "1"
		```
</details>

* <details><summary>命令中文介紹 (點我展開)</summary>
    
   * **查看逃亡剩餘時間**
		```php
		sm_nuketimeleft
		sm_escapetimeleft
		```
</details>