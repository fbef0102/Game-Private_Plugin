
# Description | 內容
Increase the finale rescue time, survivors must hold up until time passed

> __Note__ <br/>
This plugin is private, Please contact [me](/#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](/#私人插件列表-private-plugins-list)<br/>

* Apply to | 適用於
	```
	L4D2 coop/versus/realism
	```

* [Video | 影片展示](https://youtube.com/shorts/dEV8-GZUpT4)

* Image
	<br/>![l4d2_final_rescue_arrive_time_1](image/l4d2_final_rescue_arrive_time_1.jpg)
	<br/>![l4d2_final_rescue_arrive_time_2](image/l4d2_final_rescue_arrive_time_2.jpg)
	<br/>![l4d2_final_rescue_arrive_time_3](image/l4d2_final_rescue_arrive_time_3.gif)

* <details><summary>How does it work?</summary>

	* Increase the finale rescue time, survivors must hold up until time passed
	* Rescue vehicle will not arrive until time passed
	* Endless hordes after 2 final tank waves
	* Apply to all official/custom maps
	* 🟥 Auto disable plugin in the following final type.
		1. Gauntlet final, ex: c5m5, c13m4
		2. Scavenge final, ex: c1m4, c6m3
	* You can customize time for each map in file [data/l4d2_final_rescue_arrive_time.cfg](data/l4d2_final_rescue_arrive_time.cfg)
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	2. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)

* <details><summary>ConVar</summary>

	* cfg/sourcemod/l4d2_final_rescue_arrive_time.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d2_final_rescue_arrive_time_enable "1"
		```
</details>

* <details><summary>Command</summary>
    
   * **Display rescue vehicle arrive time left**
		```php
		sm_finaltimeleft
		sm_finaltime
		```
</details>

* Apply to | 適用於
    ```
    L4D2 coop/versus/realism
    ```

* Translation Support | 支援翻譯
	```
	translations/l4d2_final_rescue_arrive_time.phrases.txt
	```

* <details><summary>Related Plugin | 相關插件</summary>

	1. [l4d_rescue_vehicle_leave_timer](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4d_rescue_vehicle_leave_timer): When rescue vehicle arrived and a timer will display how many time left before vehicle leaving. If a player is not on rescue vehicle or zone, slay him
    	> 救援來臨之後，未在時間內上救援載具逃亡的玩家將處死
</details>

* <details><summary>Changelog | 版本日誌</summary>

    * v1.4 (2025-7-14)
		* Update data

    * v1.3 (2025-1-13)
		* Update cvars
		* Update data

    * v1.2 (2024-3-11)
		* Fixed standard final custom map not working

    * v1.1 (2024-2-12)
		* Fixed sometimes not working

    * v1.0 (2024-1-21)
        * Initial Release
</details>

- - - -
# 中文說明
增加最後救援的防守時間，倖存者必須等待時間結束，救援載具才會來臨

* 圖示
	<br/>![zho/l4d2_final_rescue_arrive_time_1](image/zho/l4d2_final_rescue_arrive_time_1.jpg)
	<br/>![zho/l4d2_final_rescue_arrive_time_2](image/zho/l4d2_final_rescue_arrive_time_2.jpg)
	<br/>![zho/l4d2_final_rescue_arrive_time_3](image/zho/l4d2_final_rescue_arrive_time_3.gif)

* 原理
	* 增加救援抵達的時間，救援載具不會來臨直到時間結束
	* 2波Tank階段後，生成無限屍潮，時間結束之後，強制刷出救援載具
	* 適用於所有官方地圖與三方地圖
	* 🟥 遇到以下救援類型則自動關閉插件
		1. 衝刺跑圖, 譬如: c5m5, c13m4
		2. 灌汽油載具, 譬如: c1m4, c6m3
	* 可以設置文件[data/l4d2_final_rescue_arrive_time.cfg](data/l4d2_final_rescue_arrive_time.cfg)，決定每一關的救援抵達時間

* 用意在哪?
	* 適合屍潮太多或Tank過多的伺服器，導致救援階段卡關
	* 強制刷出救援載具

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d2_final_rescue_arrive_time.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		l4d2_final_rescue_arrive_time_enable "1"
		```
</details>

* <details><summary>命令中文介紹 (點我展開)</summary>
    
   * **查看救援抵達剩餘時間**
		```php
		sm_finaltimeleft
		sm_finaltime
		```
</details>