# 安裝總攬
> 2025/2/13 更新 by [Harry](https://steamcommunity.com/profiles/76561198026784913)
- [安裝總攬](#安裝總攬)
	- [安裝Stripper](#安裝stripper)
	- [安裝l4dtoolz](#安裝l4dtoolz)
	- [安裝TickrateEnabler](#安裝tickrateenabler)
	- [安裝國家與城市的資料庫](#安裝國家與城市的資料庫)
	- [其他](#其他)

- - - -
## 安裝Stripper
* Stripper 用途是什麼?
	* 修改地圖，可以在地圖上新增各種障礙物、道具、機關事件等等
		* [影片範例](https://www.youtube.com/watch?v=I_-QSn8F8Cs)
	* 把地圖改造成迷宮都不是問題
		* [終極地圖](https://github.com/fbef0102/L4D2-Unlimited-Map)
		* [造物插件](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4d2_spawn_props)

* <details><summary>安裝步驟 (點我展開)</summary>

	1. 到[Stripper:Source網站](https://forums.alliedmods.net/showthread.php?t=39439)點擊SNAPSHOTS
	<br/>![image](https://user-images.githubusercontent.com/12229810/206858893-688521a3-6f69-469b-8a80-92470ab13db6.jpg)

	2. 往下找最新的版本，依照各自的電腦系統下載對應的版本
	<br/>![image](https://user-images.githubusercontent.com/12229810/206859034-5e0c5e5e-fcbd-4329-9d27-5298025c4616.png)

	3. 解壓縮並移動檔案到伺服器相同的路徑上。最後addons資料夾內看起來如圖片所示，多一個 ```stripper``` 資料夾
	<br/>![image](https://user-images.githubusercontent.com/12229810/206859157-102eceeb-e5c7-4fbd-95b9-d01d2c82d963.png)

	4. 重啟伺服器，控制台輸入```stripper_version```確認安裝成功
		```php
		] stripper_version
		"stripper_version" = "1.2.2"
		notify singleplayer replicated
		- Stripper Version
		```
</details>

- - - -
## 安裝l4dtoolz
* l4dtoolz 用途是什麼?
	* 解鎖伺服器人數上限，有八位以上的玩家可以進入伺服器遊玩
		<br/>![image](https://user-images.githubusercontent.com/12229810/206860045-582a79ea-8453-45a7-b73a-4ecfd051be6b.jpg)
	* 最多只能有31位玩家同時在伺服器裡面 (不能超過31人，否則伺服器會崩潰)
		* [多人插件](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4dmultislots)
		* [如何戰役模式開八人房](/Tutorial_%E6%95%99%E5%AD%B8%E5%8D%80/Chinese_%E7%B9%81%E9%AB%94%E4%B8%AD%E6%96%87/Game/L4D2/8%E4%BD%8D%E7%8E%A9%E5%AE%B6%E9%81%8A%E7%8E%A9%E6%88%B0%E5%BD%B9%E6%A8%A1%E5%BC%8F/)

* <details><summary>L4D2 安裝步驟 (點我展開)</summary>

	1. 到[l4dtoolz](https://github.com/lakwsh/l4dtoolz/releases)，下載檔案
	<br/>![image](https://github.com/user-attachments/assets/cdfa497e-ee25-449b-90be-57be8d1209cb)

	2. 解壓縮並移動檔案到伺服器相同的路徑上!最後addons資料夾內看起來如圖片所示，多 ```l4dtoolz``` 為名的檔案
	<br/>![image](https://github.com/user-attachments/assets/259cd048-c948-49d6-bce9-8fe21e9b13eb)

	3. 寫上以下指令
		* (專屬伺服器) 到```cfg/server.cfg``` (🟥如果檔案不存在，可自己創建🟥)
			```php
			// 真人玩家允許加入伺服器的人數 (不包含AI Bot)
			// 自行修改此數值 (範圍1~31)
			sv_maxplayers 18

			// 顯示給外面玩家看到的伺服器空位人數
			sv_visiblemaxplayers 18

			// 為0時，可以從遊戲大廳或透過控制台與伺服器列表直連IP加入伺服器
			// 為0時，從大廳匹配時才會有動態大廳(吸引路人)
			// 為0時，可以使用 _cheats 1
			// 為1時，當有動態大廳時，只能從遊戲大廳加入伺服器
			// 為1時，無論第一位玩家用何種方式加入伺服器都會有動態大廳(吸引路人)
			// 為1時，不能使用 _cheats 1
			sv_allow_lobby_connect_only 1

			// 此指令來自 l4dtoolz extension: https://github.com/lakwsh/l4dtoolz
			// 為1時，強制 _allow_lobby_connect_only為0
			// 為1時，不會處理大廳匹配請求(也不會有lobby reservation cookie)
			sv_force_unreserved 0

			// 此指令來自 l4dtoolz extension: https://github.com/lakwsh/l4dtoolz
			// 1=不驗證SteamID, 0=驗證
			// 本功能可以緩解"No Steam logon(code 6)" 玩家莫名其妙被離線的問題 (僅限開啟狀態下進入的玩家)
			// 開啟本功能會削弱伺服器安全性,且禁止家庭共享功能將失效
			// 注意: 開啟此功能會導致A2S_INFO結果異常,可以透過外掛程式修復: github.com/lakwsh/l4d2_vomit_fix/blob/master/l4d2_a2s_fix.sp
			sv_steam_bypass 1

			// 此指令來自 l4dtoolz extension: https://github.com/lakwsh/l4dtoolz
			// 1=禁止家庭共享, 開啟本功能可以完全禁止家庭共享帳號(小號)進入伺服器
			sv_anti_sharing 0
			```
		* (區域房) 到```cfg/listenserver.cfg``` (🟥如果檔案不存在，可自己創建🟥)
			```php
			// 真人玩家允許加入伺服器的人數 (不包含AI Bot)
			// 自行修改此數值 (範圍1~8)
			sv_maxplayers 8

			// 顯示給外面玩家看到的伺服器空位人數
			sv_visiblemaxplayers 8
			```

	4. 遊戲預設玩家人數上限只到18位，如果要改變上限，請修改玩家人數上限
		* (專屬伺服器) 如使用其他開服方式或者是linux系統，請輸入啟動參數```+sv_setmax 31```
		<br/>![image](https://github.com/user-attachments/assets/cf24e0ba-0caa-42b7-a295-8af7abd7f411)
		<br/>![image](https://github.com/user-attachments/assets/26c84751-9d95-4999-a067-58601faffbbd)
		* (區域房) 啟動選項輸入```+sv_setmax 31```
		<br/>![image](https://github.com/user-attachments/assets/475e6a9b-8e88-495d-b4da-3412883129df)
		* 🟥 ```玩家人數上限```和```sv_maxplayers```是不同的概念
			* 玩家人數上限 (+sv_setmax) = 伺服器內玩家總數量，包含真人 + AI Bot 
			* sv_maxplayers = 真人玩家允許加入伺服器的人數 (不包含AI Bot)
		* 🟥 ```玩家人數上限```不能設置超過31位，否則伺服器會崩潰

	5. 啟動伺服器
		* 控制台輸入```plugin_print```確認安裝成功，如果沒出現表示你前面步驟有誤或l4dtoolz版本不對
			```php
			] plugin_print
			Loaded plugins:
			0:      "L4DToolZ v2.4.0, https://github.com/lakwsh/l4dtoolz"
			```
		* 控制台輸入```maxplayers```確認數字為31，如果不是31表示你前面步驟有誤或l4dtoolz版本不對
			```php
			] maxplayers
			"maxplayers" is "31"
			```

	6. 安裝插件
		* (專屬伺服器) [l4d_unreservelobby](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4d_unreservelobby): 移除伺服器的大廳人數限制，簡單講就是解鎖伺服器，讓第九位以上的玩家可以加入伺服器
		* (專屬伺服器) [l4d2_a2s_fix](https://github.com/lakwsh/l4d2_vomit_fix): 修復A2S_INFO協議問題 (使用sv_steam_bypass功能時才需安裝)
</details>

* <details><summary>L4D1 安裝步驟 (點我展開)</summary>

	1. 到[l4dtoolz](https://github.com/accelerator74/l4dtoolz/releases)，根據你的遊戲與系統選擇其中一個下載
	<br/>![image](https://github.com/user-attachments/assets/41ac929c-1e96-4972-86b8-63f8aeea1570)

	2. 解壓縮並移動檔案到伺服器相同的路徑上!最後addons資料夾內看起來如圖片所示，多一個 ```l4dtoolz``` 資料夾
	<br/>![image](https://user-images.githubusercontent.com/12229810/206860306-d0fead16-9997-410d-93cc-bca7109d5977.png)

	3. 寫上以下指令
		* (專屬伺服器) 到```cfg/server.cfg``` (🟥如果檔案不存在，可自己創建🟥)
			```php
			// 真人玩家允許加入伺服器的人數 (不包含AI Bot)
			// 自行修改此數值 (範圍1~31)
			sv_maxplayers 18

			// 顯示給外面玩家看到的伺服器空位人數
			sv_visiblemaxplayers 18

			// 為0時，可以從遊戲大廳或透過控制台與伺服器列表直連IP加入伺服器
			// 為0時，從大廳匹配時才會有動態大廳(吸引路人)
			// 為0時，可以使用 _cheats 1
			// 為1時，當有動態大廳時，只能從遊戲大廳加入伺服器
			// 為1時，無論第一位玩家用何種方式加入伺服器都會有動態大廳(吸引路人)
			// 為1時，不能使用 _cheats 1
			sv_allow_lobby_connect_only 1

			// 此指令來自 l4dtoolz extension
			// 為1時，強制 _allow_lobby_connect_only為0
			// 為1時，不會處理大廳匹配請求(也不會有lobby reservation cookie)
			sv_force_unreserved 0
			```
		* (區域房) 到```cfg/listenserver.cfg``` (🟥如果檔案不存在，可自己創建🟥)
			```php
			// 真人玩家允許加入伺服器的人數 (不包含AI Bot)
			// 自行修改此數值 (範圍1~8)
			sv_maxplayers 8

			// 顯示給外面玩家看到的伺服器空位人數
			sv_visiblemaxplayers 8
			```

	4. 遊戲預設玩家人數上限只到18位，如果要改變上限，請修改玩家人數上限
		* (專屬伺服器) 如使用其他開服方式或者是linux系統，請輸入啟動參數```-maxplayers 31```
		<br/>![image](https://github.com/user-attachments/assets/dc605332-e20e-4c55-a429-23db7491e352)
		<br/>![image](https://github.com/user-attachments/assets/26c84751-9d95-4999-a067-58601faffbbd)
		* (區域房) 啟動選項輸入```-maxplayers 31```
		<br/>![image](https://github.com/user-attachments/assets/256a3c25-d803-4b39-9761-7785eae58f0d)
		* 🟥 Max. players 和 sv_maxplayers 是不同的概念
			* Max. players (-maxplayers) = 伺服器內玩家總數量，包含真人 + AI Bot 
			* sv_maxplayers = 真人玩家允許加入伺服器的人數 (不包含AI Bot)
		* 🟥 Max. players 不能設置超過31位，否則伺服器會崩潰

	5. 啟動伺服器
		* 控制台輸入```meta list```確認安裝成功，如果沒出現表示你前面步驟有誤或l4dtoolz版本不對
			```php
			] meta list
			Listing 11 plugins:
			[04] L4DToolZ (2.0.1) by Accelerator, Ivailosp
			```
		* 控制台輸入```maxplayers```確認數字為31，如果不是31表示你前面步驟有誤或l4dtoolz版本不對
			```php
			] maxplayers
			"maxplayers" is "31"
			```

	6. 安裝插件
		* (專屬伺服器) [l4d_unreservelobby](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4d_unreservelobby): 移除伺服器的大廳人數限制，簡單講就是解鎖伺服器，讓第九位以上的玩家可以加入伺服器
</details>

- - - -
## 安裝TickrateEnabler
* TickrateEnabler 用途是什麼?
	* 解鎖伺服器Tickrate只有30的上限，可以突破到100tick
		* 不知道Tickrate是甚麼請自行Google
		* 簡單說，Tickrate越高越能夠帶來非常流暢的遊戲體驗，精準的射擊判定、連貫的動作，相當於伺服器端的fps
	* 把Tickrate想成是一種更新伺服器狀態的頻率，一秒內更新次數越多，越消耗更多電腦資源，所以高Tickrate很吃電腦的cpu，自行斟酌安裝

* <details><summary>L4D2 安裝步驟 (點我展開)</summary>

	1. 到[l4dtoolz](https://github.com/lakwsh/l4dtoolz/releases)，下載檔案
		* 你沒看錯，這版本的l4dtoolz包含解鎖伺服器人數上限與Tickrate的功能
		<br/>![image](https://github.com/user-attachments/assets/cdfa497e-ee25-449b-90be-57be8d1209cb)

	2. 解壓縮並移動檔案到伺服器相同的路徑上!最後addons資料夾內看起來如圖片所示，多 ```l4dtoolz``` 為名的檔案
	<br/>![image](https://github.com/user-attachments/assets/259cd048-c948-49d6-bce9-8fe21e9b13eb)

	3. 到cfg/server.cfg寫上以下指令
		* 沒有server.cfg檔案則新建
			```php
			// 這是100 Tick的設定，可以自由修改數值
			sm_cvar sv_minrate 				"100000" 	// tickrate * 1000
			sm_cvar sv_maxrate 				"100000" 	// tickrate * 1000
			sm_cvar sv_minupdaterate 		"101"	 	// tickrate +1
			sm_cvar sv_maxupdaterate 		"101"		// tickrate +1
			sm_cvar sv_mincmdrate 			"101"		// tickrate +1
			sm_cvar sv_maxcmdrate 			"101"		// tickrate +1
			sm_cvar rate					"100000" 	// tickrate * 1000
			sm_cvar net_splitpacket_maxrate "50000" 	// (tickrate÷2) * 1000
			sm_cvar fps_max					"0"
			```
	
	4. 輸入參數
		* (專屬伺服器) 伺服器啟動選項輸入參數 ```-tickrate 100```
		<br/>![image](https://github.com/user-attachments/assets/3803894b-f000-45b2-aab8-b35748e3004b)
		* (區域房) 啟動選項輸入```-tickrate 100```
		<br/>![image](https://github.com/user-attachments/assets/47c1cdda-7a62-4c6a-96db-d0b232fcbd62)
		
	5. 重啟伺服器，控制台輸入```plugin_print```確認安裝成功
		```php
		] plugin_print
		1:　"Tickrate_Enabler 1.5, ProdigySim"
		```

	6. 進入遊戲後，打開遊戲控制台輸入```net_graph 4```，會看到有一堆網路數據出現在你的螢幕上，確認Tickrate 為 100
	<br/>![image](https://user-images.githubusercontent.com/12229810/206861890-a37cf9d9-f5cc-4ec2-b3d3-07991cd89e1f.jpg)

	7. 安裝插件
		* [l4d2_vomit_fix](https://github.com/lakwsh/l4d2_vomit_fix): 修正非30tick對抗模式下boomer噴吐距離問題
</details>

* <details><summary>L4D1 安裝步驟 (點我展開)</summary>

	1. 到[Tickrate-Enabler](https://github.com/accelerator74/Tickrate-Enabler/releases)，根據你的遊戲與系統選擇其中一個下載
	<br/>![image](https://github.com/fbef0102/Game-Private_Plugin/assets/12229810/44f26cc8-25b0-4308-a52d-1e7496b57596)

	2. 解壓縮並移動檔案到伺服器相同的路徑上!最後addons資料夾內看起來如圖片所示，多一個 ```tickrate_enabler``` 資料夾
	<br/>![image](https://user-images.githubusercontent.com/12229810/206860975-1bc616cc-5e1c-4bfb-88b4-af699e302287.png)

	3. 到cfg/server.cfg寫上以下指令
		* 沒有server.cfg檔案則新建
			```php
			// 這是100 Tick的設定，可以自由修改數值
			sm_cvar sv_minrate 				"100000" 	// tickrate * 1000
			sm_cvar sv_maxrate 				"100000" 	// tickrate * 1000
			sm_cvar sv_minupdaterate 		"101"	 	// tickrate +1
			sm_cvar sv_maxupdaterate 		"101"		// tickrate +1
			sm_cvar sv_mincmdrate 			"101"		// tickrate +1
			sm_cvar sv_maxcmdrate 			"101"		// tickrate +1
			sm_cvar rate					"100000" 	// tickrate * 1000
			sm_cvar net_splitpacket_maxrate "50000" 	// (tickrate÷2) * 1000
			sm_cvar fps_max					"0"
			```
	
	4. 輸入參數
		* (專屬伺服器) 伺服器啟動選項輸入參數 ```-tickrate 100```
		<br/>![image](https://github.com/user-attachments/assets/3803894b-f000-45b2-aab8-b35748e3004b)
		* (區域房) 啟動選項輸入```-tickrate 100```
		<br/>![image](https://github.com/user-attachments/assets/47c1cdda-7a62-4c6a-96db-d0b232fcbd62)
		
	5. 重啟伺服器，控制台輸入```plugin_print```確認安裝成功
		```php
		] plugin_print
		1:　"Tickrate_Enabler 1.5, ProdigySim"
		```

	6. 進入遊戲後，打開遊戲控制台輸入```net_graph 4```，會看到有一堆網路數據出現在你的螢幕上，確認Tickrate 為 100
	<br/>![image](https://user-images.githubusercontent.com/12229810/206861890-a37cf9d9-f5cc-4ec2-b3d3-07991cd89e1f.jpg)
</details>

> __Warning__ 
> * 高Tickrate很吃電腦的cpu，可以自行降低成60 tick、45 tick
> * 調整tickate必須一起修改server.cfg與啟動選項

* <details><summary>問題1: 為什麼windows系統下伺服器的Tickrate只能跑到64?</b></summary>

	![image](https://user-images.githubusercontent.com/12229810/206862598-8f36433c-bcce-4edf-b8b9-7843d0f8534a.jpg)

	* 原因: windows 10 的問體，windows系統對遊戲伺服器不怎麼友善，
	* 解決方式: 
		* 法一：去跟微軟抱怨
		* 法二：windows降級到windows 7
		* 法三：租一台linux系統
		* 法四：[從大廳匹配到專屬伺服器](/Tutorial_%E6%95%99%E5%AD%B8%E5%8D%80/Chinese_%E7%B9%81%E9%AB%94%E4%B8%AD%E6%96%87/Server/%E5%AE%89%E8%A3%9D%E4%BC%BA%E6%9C%8D%E5%99%A8%E8%88%87%E6%8F%92%E4%BB%B6/README.md#如何從大廳匹配到專屬伺服器)，可以將tickrate變回100，至於為何會這樣，我也不知道
</details>

* <details><summary>問題2: 為什麼我的tickrate網路數據沒有到100?</b></summary>

	![image](https://user-images.githubusercontent.com/12229810/207044622-5c0145a3-85be-4eef-b3ec-59ec6fcaba01.png)

	* 原因: 受限於你的遊戲內fps影響，只會影響你這位玩家，你的遊戲內fps超過100以上才能享有100 tickrate
	<br/>![image](https://user-images.githubusercontent.com/12229810/207044800-04d8cbcb-610a-4ede-8896-d8cf992b8719.png)
	* 解決方式: 
		* 法一：調高遊戲的fps，到選項->視訊->進階設定->等待垂直同步改成"已停用"，這選項能夠解鎖遊戲的fps
		<br/>![image](https://user-images.githubusercontent.com/12229810/207045656-764b59f4-94d9-4af8-aebb-1872c631a111.png)
		* 法二：法一沒有用那就去升級你的顯卡
</details>

- - - -
## 安裝國家與城市的資料庫
* 何時需要用到?
	* 有插件需要抓取玩家的IP、國家、城市、地區等等
		* 像是 [cannounce](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/cannounce)
	* 如果你有安裝geoipcity.ext, geoip2.ext，請移除

* <details><summary>安裝步驟 (點我展開)</summary>

	1. 註冊 [maxmind.com](https://www.maxmind.com/en/geolite2/signup)

	2. 到個人帳戶: My Account -> MY ACCOUNT -> GeoIP2/GeoLite2 -> Download Files
	<br/>![image](https://github.com/user-attachments/assets/a8155c2b-cf9d-49d8-a7e6-6de1ed0974c1)

	3. 搜尋 "GeoLite2 Country" 和 "GeoLite2 City" -> 下載資料庫
	<br/>![GeoLite2 Country](https://user-images.githubusercontent.com/12229810/204966692-ac339bc6-4760-4acc-b320-b776d46e7064.jpg)
	<br/>![GeoLite2 City](https://user-images.githubusercontent.com/12229810/204966795-a57a5949-abcf-4127-9325-90b9fdb8124f.jpg)

	4. 放 GeoLite2-City.mmdb 與 GeoLite2-Country.mmdb 到路徑 addons/sourcemod/configs/geoip/ 資料夾
	<br/>![image](https://user-images.githubusercontent.com/12229810/222086453-ee59e6c3-e61c-4a16-9aa7-8eb9d39a4d37.png)
</details>

- - - -
## 其他
* [安裝伺服器與插件](/Tutorial_教學區/Chinese_繁體中文/Server/安裝伺服器與插件)
* [安裝區域房與插件](/Tutorial_教學區/Chinese_繁體中文/Server/安裝區域房與插件)
* [Questions_問題區](/Questions_問題區/Chinese_繁體中文/伺服器)
