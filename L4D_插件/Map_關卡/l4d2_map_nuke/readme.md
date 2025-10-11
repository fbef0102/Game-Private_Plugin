# Description | 內容
Slay Survivors After Countdown Time Passes + Restart chapter or campaign

> __Note__ <br/>
This plugin is private, Please contact [me](/#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](/#私人插件列表-private-plugins-list)<br/>

* [Video | 影片展示](https://youtu.be/WVBMtRZGLHc)

* Image | 圖示
	<br/>![l4d2_map_nuke_1](image/l4d2_map_nuke_1.jpg)
	<br/>![l4d2_map_nuke_2](image/l4d2_map_nuke_2.gif)

* <details><summary>How does it work?</summary>

	* Survivors have to make it to saferoom or rescue vehicle within time limit
		* Once map nuke time out, slay all survivors and restart the chapter
		* Once city escape time out, slay all survivors and restart the whole campaign
	* You can customize time limit for each map in file [data/l4d2_map_nuke.cfg](data/l4d2_map_nuke.cfg)
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	2. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)
	3. [l4d2_mission_manager](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4d2_mission_manager)

* <details><summary>ConVar</summary>

	* cfg/sourcemod/l4d2_map_nuke.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d2_map_nuke_enable "1.0"

		// Set time in seconds map will be nuked in no-final level by default (0=off)
		l4d2_map_nuke_time_chapter "600"

		// Set time in seconds map will be nuked in final level by default (0=off)
		l4d2_map_nuke_time_final_chapter "1000"

		// Set time in seconds city escape in the whole campaign by default (0=off)
		l4d2_map_nuke_time_campaign "3000"

		// Chapter Nuke count down hint text to be displayed
		l4d2_map_nuke_announcer_chapter "90.0"

		// City Escape count down hint text to be displayed
		l4d2_map_nuke_announcer_campaign "180.0"

		// Display Nuke Warning Text When Players Leave Saferoom
		l4d2_map_nuke_warning "1"
		```
</details>

* <details><summary>Command</summary>
    
   * **Display count down time left**
		```php
		sm_nuketimeleft
		sm_escapetimeleft
		```
</details>

* <details><summary>Example Config</summary>

	* [data/l4d2_map_nuke.cfg](data/l4d2_map_nuke.cfg)
		```php
		"l4d2_map_nuke" 
		{
			"c1m1_hotel"  // first map
			{
				"chapter_nuke" 		"360"  // <-- Set map nuke time. If not set, use convar l4d2_map_nuke_time_chapter by default
				"campaign_nuke" 	"2400"  // <-- Set city escape time. If not set, use convar l4d2_map_nuke_time_campaign by default
			}
			"c1m2_streets"
			{
				"chapter_nuke" 		"10"   // <-- Set map nuke time. If not set, use convar l4d2_map_nuke_time_chapter by default
			}
			"c1m4_atrium" // final map
			{
				"chapter_nuke" 		"60"  // <-- Set map nuke time. If not set, use convar l4d2_map_nuke_time_final_chapter by default
			}
		}
		```
</details>

* Apply to | 適用於
    ```
    L4D2 coop/versus/realism
    ```

* <details><summary>Related Plugin | 相關插件</summary>

	1. [l4d_restartmap_command](/L4D_插件/Map_%E9%97%9C%E5%8D%A1/l4d_restartmap_command): Admin say !restartmap to restart current map + Force of restartmap after Quantity of rounds (tries) events survivors wipe out
    	> 管理員輸入!restartmap能重新地圖關卡 + 滅團N次後重新地圖
</details>

* <details><summary>Changelog | 版本日誌</summary>

    * v1.0 (2023-8-26)
        * Initial Release
</details>

- - - -
# 中文說明
限時通關一個關卡或一整張地圖，超過時間會處死所有倖存者，並重啟關卡或整張地圖

* 原理
	* 倖存者必須在指定時間內逃亡到安全室或者通關上救援
		* 一旦章節逃亡時間到，處死所有倖存者並回合重新開始
		* 一旦城市逃亡時間到，處死所有倖存者並重新回到地圖的第一關
	* 可以設置文件[data/l4d2_map_nuke.cfg](data/l4d2_map_nuke.cfg)，決定每一關的逃亡時間

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d2_map_nuke.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		l4d2_map_nuke_enable "1.0"

		// 非救援關卡的章節逃亡時間 (0=不設置逃亡時間)
		l4d2_map_nuke_time_chapter "600"

		// 救援關卡的章節逃亡時間 (0=不設置逃亡時間)
		l4d2_map_nuke_time_final_chapter "1000"

		// 整張地圖的城市逃亡時間 (0=不設置逃亡時間)
		l4d2_map_nuke_time_campaign "3000"

		// 章節逃亡剩餘90秒時，開始顯示倒數
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

* <details><summary>文件設定</summary>

	* 設定文件[data/l4d2_map_nuke.cfg](data/l4d2_map_nuke.cfg)，決定每一關的逃亡時間
		```php
		"l4d2_map_nuke" 
		{
			"c1m1_hotel"  // C1地圖的第一個關卡
			{
				"chapter_nuke" 		"360"  // <-- 設置章節逃亡時間. 如果沒有寫此行，預設使用指令 l4d2_map_nuke_time_chapter
				"campaign_nuke" 	"2400"  // <-- 設置城市逃亡時間. 如果沒有寫此行，預設使用指令 l4d2_map_nuke_time_campaign
			}
			"c1m2_streets"
			{
				"chapter_nuke" 		"10"   // <-- 設置章節逃亡時間. 如果沒有寫此行，預設使用指令 l4d2_map_nuke_time_chapter
			}
			"c1m4_atrium" // C1地圖的救援關卡
			{
				"chapter_nuke" 		"60"  // <-- 設置章節逃亡時間. 如果沒有寫此行，預設使用指令 l4d2_map_nuke_time_final_chapter
			}
		}
		```
</details>