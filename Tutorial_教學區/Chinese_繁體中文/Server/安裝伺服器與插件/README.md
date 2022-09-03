# 問題總攬
> 2022/9/4 更新 by [Harry](https://steamcommunity.com/profiles/76561198026784913)
- [總攬](#問題總攬)
    - [如何安裝專屬伺服器](#如何安裝專屬伺服器)
    - [如何安裝Sourcemod](#如何安裝sourcemod)
    - [如何執行專屬伺服器](#如何執行專屬伺服器)
    - [如何檢查版本](#如何檢查版本)
    - [如何成為伺服器的管理員](#如何成為伺服器的管理員)
    - [如何編譯源碼](#如何編譯源碼)
    - [如何安裝插件](#如何安裝插件)
    - [如何檢查插件成功運作](#如何檢查插件成功運作)
    - [如何移除插件](#如何移除插件)
    - [如何更新插件](#如何更新插件)
    - [如何手動管理插件](#如何手動管理插件)
    - [如何開啟遊戲控制台](#如何開啟遊戲控制台)
    - [如何檢查指令值](#如何檢查指令值)
    - [如何修改指令](#如何修改指令)
    - [如何使用插件的命令](#如何使用插件的命令)
    - [專業術語介紹](#專業術語介紹)
    - [其他](#其他)
> __Note__ 本處教學一律是Sourcemod，與AMX Mod X無任何關係
- - - -
## 如何安裝專屬伺服器
* Windows
1. 下載[SteamCMD](https://steamcdn-a.akamaihd.net/client/installer/steamcmd.zip)

2. 解壓縮到電腦上任一路徑，最好自己創建資料夾且路徑不要有中文
   - 譬如D:\steamcmd

3. 執行steamcmd.exe，等它自己跑完套件與更新包

4. 等到出現Loading Steam API...OK，依序輸入以下指令 <br/>
   ![image](https://user-images.githubusercontent.com/12229810/187817885-b54191d4-e050-49ba-b870-8c6bbc0e4690.png)
   - ```force_install_dir ./My_Server/```
      - My_Server是創建資料夾名稱，可自取，不要有中文，伺服器所有檔案將會安裝在這裡
   - ```login anonymous```
   - ```app_update XXXXXX validate```
      - XXXXXX 為遊戲伺服器的App ID，[steamdb](https://steamdb.info/) 自行搜尋遊戲
      - 22840 為L4Dead - Dedicated Server，22860 為L4D2 - Dedicated Server，740 為CSGO - Dedicated Server

5. 完成安裝之後輸入exit結束steamcmd

* Liunx
1. 啟用終端機輸入以下指令 (你可能需要root 權限)
   - ```cd 任一路徑，最好自己創建資料夾且路徑不要有中文```
   - ```wget http://media.steampowered.com/installer/steamcmd_linux.tar.gz```
   - ```tar -xvzf steamcmd_linux.tar.gz```
   - ```./steamcmd.sh```

2. 等到出現Loading Steam API...OK，依序輸入以下指令
   - ```force_install_dir ./My_Server/```
      - My_Server是創建資料夾名稱，可自取，不要有中文，伺服器所有檔案將會安裝在這裡
   - ```login anonymous```
   - ```app_update XXXXXX validate```
      - XXXXXX 為遊戲伺服器的App ID，[steamdb](https://steamdb.info/) 自行搜尋遊戲
      - 22840 為L4Dead - Dedicated Server，22860 為L4D2 - Dedicated Server，740 為CSGO - Dedicated Server

3. 完成安裝之後輸入exit結束steamcmd

- - - -
## 如何安裝Sourcemod
1. [Sourcemod](https://www.sourcemod.net/downloads.php?branch=stable)下載最新版本的安裝包
   - 窗戶圖案的是Windows系統，企鵝圖案的是Linux系統，蘋果圖案的是macOs系統，選擇Windows系統下載即可
   - 紅色圖案代表此版本尚未支援該系統平台<br/>
   ![image](https://user-images.githubusercontent.com/12229810/187821617-5f82e0c3-def7-4d7f-ab50-0b98b238e0ac.png)

2. [MetaMod](https://www.sourcemm.net/downloads.php?branch=stable)下載最新版本的安裝包
   - 窗戶圖案的是Windows系統，企鵝圖案的是Linux系統，蘋果圖案的是macOs系統，選擇Windows系統下載即可
   - 紅色圖案代表此版本尚未支援該系統平台<br/>
   ![image](https://user-images.githubusercontent.com/12229810/187821844-c93fff63-b8e5-4474-b6c1-11cfeed3d9e7.png)
 
3. 將所有檔案解壓縮到伺服器路徑上，最後會看起來如圖片所示<br/>
   ![image](https://user-images.githubusercontent.com/12229810/187822314-2080b3ea-2fbb-4b87-bffb-4b76bfe7181a.png)
   ![image](https://user-images.githubusercontent.com/12229810/187822434-27c04668-bdc1-40b0-9e43-bec71629e929.png)

4. 到[sourcemm.net vdf](https://www.sourcemm.net/vdf)，選擇相對應的遊戲，然後點擊"Generate medamod.vtf"，下載metamod.vtf到addons資料夾上覆蓋原有的檔案<br/>
   ![image](https://user-images.githubusercontent.com/12229810/187822802-8a3d0b4d-e1a1-4b2c-a025-1cca763abe5c.png)
- - - -
## 如何執行專屬伺服器
* Windows
1. 到伺服器檔案所在資料夾位置，直接執行srcds.exe－＞啟動伺服器 <br/>
![image](https://user-images.githubusercontent.com/12229810/187820705-ac77fc1b-6817-44d5-929f-c5b4b46c526b.png)

2. 各項目依照自己的喜好設定
	- 伺服器名稱無法填寫中文
	- 網路選擇網際網路 (廢話)
	- 玩家上限是假的，即使設定32人，伺服器人數受到遊戲限制
		- L4D 戰役模式最多4人、對抗模式最多8人
	- 🟥UDP Port 別亂改數值，安全的範圍最好是27016 ~ 27035之間🟥

* Liunx
1. 啟用終端機到伺服器檔案所在資料夾位置，輸入```./srcds_run -console -game xxxxxx -port 27020 +log on +exec server +sv_lan 0```
   - ```xxxxxx``` 為設定的遊戲
	   - 如果是L4D1，xxxxxx改成left4dead
	   - 如果是L4D2，xxxxxx改成left4dead2
	   - 如果是CSGO，xxxxxx改成csgo
   - 可自行添加其他參數，譬如
	   - ```+map c2m2_fairgrounds``` 開啟伺服器的預設地圖
- - - -
## 如何檢查版本
<details>
  <summary>查找伺服器的後台 (點我展開)</summary>

* 開啟伺服器之後尋找"命令列"<br/>
  <img src="https://i.imgur.com/c0jp5XQ.png" alt="c0jp5XQ.png" width="600" height = "400">
  
  > __Note__ 若是用其他的開服軟體，請自行摸索找到後台 
</details>

<details>
  <summary>檢查遊戲平台版本 (點我展開)</summary>
  
* 伺服器的後台輸入```version```
  ```php
  ] version
  Version 2.2.2.5 (left4dead2)
  Network Version 2.1.0.0
  Exe build: 16:48:59 Feb  4 2022 (8490) (550)
  ```
</details>

<details>
  <summary>檢查sourcemod平台版本 (點我展開)</summary>

* 伺服器的後台輸入```sm version```
  ```php
  ] sm version
   SourceMod Version Information:
      SourceMod Version: 1.11.0.6905
      SourcePawn Engine: 1.11.0.6905, jit-x86 (build 1.11.0.6905)
      SourcePawn API: v1 = 5, v2 = 16
      Compiled on: Jul  3 2022 01:15:17
      Built from: https://github.com/alliedmodders/sourcemod/commit/5e3a1896
      Build ID: 6905:5e3a1896
      http://www.sourcemod.net/
  ```
</details>

<details>
  <summary>檢查metamod平台版本 (點我展開)</summary>

* 伺服器的後台輸入```meta version```
  ```php
  ] meta version
   Metamod:Source Version Information
      Metamod:Source version 1.11.0-dev+1148
      Plugin interface version: 16:14
      SourceHook version: 5:5
      Loaded As: Valve Server Plugin
      Compiled on: Jun 24 2022 14:34:21
      Built from: https://github.com/alliedmodders/metamod-source/commit/4bdc218
      Build ID: 1148:4bdc218
      http://www.metamodsource.net/
  ```
</details>

<details>
  <summary>檢查所有Extension版本 (點我展開)</summary>

* 伺服器的後台輸入```sm exts list```
  ```php
    ] sm exts list
    [SM] Displaying 11 extensions:
    [01] Automatic Updater (1.11.0.6905): Updates SourceMod gamedata files
    [02] Webternet (1.11.0.6905): Extension for interacting with URLs
    [02] Top Menus (1.11.0.6905): Creates sorted nested menus
    [04] SDK Tools (1.11.0.6905): Source SDK Tools
    [05] BinTools (1.11.0.6905): Low-level C/C++ Calling API
    [06] SDK Hooks (1.11.0.6905): Source SDK Hooks
    [07] Client Preferences (1.11.0.6905): Saves client preference settings
    [08] SQLite (1.11.0.6905): SQLite Driver
    [09] DHooks (1.11.0.6905): Dynamic Hooks
    [10] Regex (1.11.0.6905): Provides regex natives for plugins
    [11] GeoIP (1.11.0.6905): Geographical IP information
  ```
</details>

<details>
  <summary>檢查所有Meta Plugin版本 (點我展開)</summary>
  
* 伺服器的後台輸入```meta list```
  ```php
    ] meta list
    Listing 11 plugins:
      [01] SourceMod (1.11.0.6905) by AlliedModders LLC
      [02] SDK Tools (1.11.0.6905) by AlliedModders LLC
      [03] SDK Hooks (1.11.0.6905) by AlliedModders LLC
      [04] DHooks (1.11.0.6905) by AlliedModders LLC
  ```
</details>

<details>
  <summary>檢查所有插件版本 (點我展開)</summary>
  
* 伺服器的後台輸入```sm plugins list```
  ```php
    ] sm plugins list
    [SM] Listing 11 plugins:
      001 "Admin File Reader" (1.11.0.6905) by AlliedModders LLC
      002 "Admin Help" (1.11.0.6905) by AlliedModders LLC
      003 "Admin Menu" (1.11.0.6905) by AlliedModders LLC
      004 "Anti-Flood" (1.11.0.6905) by AlliedModders LLC
      005 "Basic Ban Commands" (1.11.0.6905) by AlliedModders LLC
      006 "Basic Chat" (1.11.0.6905) by AlliedModders LLC
      007 "Basic Comm Control" (1.11.0.6905) by AlliedModders LLC
      008 "Basic Commands" (1.10.0.6502) by AlliedModders LLC
      009 "Basic Info Triggers" (1.11.0.6905) by AlliedModders LLC
      010 "Basic Votes" (1.11.0.6905) by AlliedModders LLC
      011 "Client Preferences" (1.11.0.6905) by AlliedModders LLC
  ```
</details>

- - - -
## 如何成為伺服器的管理員
1. 首先要知道自己的steam的ID為何，打開steam平台，到自己的steam個人頁面，右鍵點擊"複製頁面網址"
   <img src="https://i.imgur.com/EbO0fC1.png" alt="EbO0fC1.png" width="1100" height = "400">

2. 點擊[Steam ID Finder](https://steamid.xyz/)，將複製的網址貼上去提交，會得到自己的steam ID
   <img src="https://i.imgur.com/xHfmmq6.png" alt="xHfmmq6.png" width="600" height = "200">

3. 到伺服器位置addons\sourcemod\configs\ 資料夾找到一個檔案為admins_simple.ini，用筆記本打開文件，在最底下方新增一行內容
   - STEAM_X:X:XXXXXX 為你的steam ID
   ```php
   "STEAM_X:X:XXXXXX" "99:z" //這位玩家是管理員
   ```
   
4. 儲存，重啟伺服器，進入遊戲之後聊天視窗輸入!admin，如果左邊有介面跑出來代表已經成功為伺服器的管理員
   <img src="https://i.imgur.com/XDBkYkY.png" alt="XDBkYkY.png" width="300" height = "200">
- - - -
## 如何編譯源碼
1. 此處用Windows系統方便操作，將想要編譯的源碼檔案丟入addons\sourcemod\scripting\ 資料夾裡面
   - 源碼檔案的副檔名是.sp
   - 看不到副檔名者請自行google"如何顯示副檔名"
2. 接著拖曳.sp檔案到同資料夾底下的compile.exe <br/>
   ![image](https://i.imgur.com/PrWaypt.gif)

3. 編譯完成的檔案將會在addons\sourcemod\scripting\compiled\ 資料夾裡面
   - 視窗如果顯示編譯失敗，代表缺少安裝必要的檔案或者源碼有錯誤，請洽作者
   - 編譯完成的檔案都通用於Windows、Linux、macOs系統，不會有不相容的問題
- - - -
## 如何安裝插件
1. 無論是自己編譯好的插件或是從網路上下載的插件，將檔案放入addons\sourcemod\plugins
   - 源碼檔案的副檔名是.smx
   - 插件名稱可自行修改，不要取中文，想自己吃鱉就試試

2. 若安裝包有其他的文件，放入相同資料夾即可
   - 翻譯文件.txt 放入addons\sourcemod\translations
		<details>
		<summary>判斷是否為翻譯文件 (點我展開)</summary>
		此處為範例
		
		```
		"Phrases"
		{
			"You're spectating. Join any team to play."
			{
				"en"	"You're spectating. Join any team to play."
				"zho"	"輸入 !join 加入遊戲..."
				"chi"	"输入 !join 加入游戏..."
			}	
			"[AFK] Inactivity detected! 1"
			{
				"#format"		"{1:d}"
				"en"	"[AFK] Inactivity detected! You'll be moved to spectators in {1} seconds!"
				"zho"	"[AFK] 偵測閒置! 你將於 {1} 秒後強制旁觀."
				"chi"	"[AFK] 探测闲置! 你将于 {1} 秒后强制旁观."
			}	
		}
		```
		</details>
		
   - Gamedata文件.txt 放入addons\sourcemod\gamedata
		<details>
		<summary>判斷是否為Gamedata文件 (點我展開)</summary>
		此處為範例
		
		```
		"Games"
		{
			"left4dead" // Credit: Psykotikism
			{
				"Signatures" 
				{

					"TakeOverBot"
					{
						"library"	"server"
						"linux"		"@_ZN13CTerrorPlayer11TakeOverBotEb"
						"windows"	"\x2A\x2A\x2A\x2A\x2A\x2A\x53\x55\x56\x57\x8D\x2A\x2A\x2A\x8B"
								/* ? ? ? ? ? ? 53 55 56 57 8D ? ? ? 8B */
					}
				}
			}

			"left4dead2" //credit: ProdigySim, Shadowysn
			{
				"Addresses"
				{
					"NextBotCreatePlayerBot.jumptable"
					{
						"windows"
						{
							"signature"	"CTerrorPlayer::ReplaceWithBot.jumptable"
							"offset"	"7"
						}
					}
				}
				"Signatures"
			{
				"TakeOverBot"
				{
					"library"	"server"
					"linux"		"@_ZN13CTerrorPlayer11TakeOverBotEb"
					"windows"	"\x55\x8B\xEC\x81\xEC\x2A\x2A\x2A\x2A\xA1\x2A\x2A\x2A\x2A\x33\xC5\x89\x45\xFC\x53\x56\x8D\x85"
					/* 55 8B EC 81 EC ? ? ? ? A1 ? ? ? ? 33 C5 89 45 FC 53 56 8D 85 */
				}
			}
		}
		```
		</details>
		
   - 其他文件依照說明書指示放入
   
3. 重啟伺服器即可完成
> __Warning__ 有些插件需要其他的檔案輔助才能成功運作，請詳細查看插件說明書或詢問插件作者本人
- - - -
## 如何檢查插件成功運作
* 只要不是自己手殘或眼殘，通常依照插件說明書指示都會成功載入
1. 到伺服器後台上，輸入```sm plugins info xxxxxx```
   - xxxxxx為插件的檔案名稱
      <details>
        <summary>範例 (點我展開)</summary>

        ```php
      ] sm plugins info trigger_horde_notify
        Filename: trigger_horde_notify.smx
        Title: [L4D & L4D2] trigger_horde_notify
        Author: HarryPotter
        Version: 1.0
        Error: Error detected in plugin startup (see error logs)
        ```
      </details>

2. 看見Error代表此插件無法成功載入，請到sourcemod/logs資料夾查看errors_開頭的文件，閱讀錯誤原因並嘗試解決

3. 重新安裝插件之後，重啟伺服器，檢查插件是否成功運作，直到沒有error為止
   - 若看不懂錯誤原因請洽作者，將錯誤原文發給開發者，無須一堆廢話
      <details>
        <summary>範例 (點我展開)</summary>

        ```php
      L 03/28/2022 - 02:24:27: [SM] Exception reported: g_pDirector not available ().
      L 03/28/2022 - 02:24:27: [SM] Blaming: left4dhooks.smx
      L 03/28/2022 - 02:24:27: [SM] Call stack trace:
      L 03/28/2022 - 02:24:27: [SM]   [0] ThrowNativeError
      L 03/28/2022 - 02:24:27: [SM]   [1] Line 5394, C:\Servers\L4D2\left4dead2\addons\sourcemod\scripting\left4dhooks.sp::ValidateAddress
      L 03/28/2022 - 02:24:27: [SM]   [2] Line 6131, C:\Servers\L4D2\left4dead2\addons\sourcemod\scripting\left4dhooks.sp::Native_CDirector_IsAnySurvivorInStartArea
      L 03/28/2022 - 02:24:27: [SM]   [4] L4D_IsAnySurvivorInStartArea
      L 03/28/2022 - 02:24:27: [SM]   [5] Line 172, f:\Stuff\EVERYTHING ELSE\Left 4 Dead 2 Dedicated Servers\left4dead2\addons\sourcemod\scripting\all4dead2.sp::OnPluginStart
        ```
      </details>

- - - -
## 如何移除插件
1. 將不想要的.smx插件從addons\sourcemod\plugins移除
   - 刪除或是移動到別的資料夾
2. 切換地圖或重啟伺服器
- - - -
## 如何更新插件
1. 當發現作者更新了插件版本之後
   - 可以選擇自己拿到新版本的源碼.sp檔案進行編譯
   - 或者直接拿編譯好的.smx檔案
2. 把.smx檔案放入addons\sourcemod\plugins覆蓋即可
   - 若有其他的文件，放入相同資料夾覆蓋即可
   - 🟥若cfg\sourcemod\ 有對應的.cfg文件則必須手動刪除🟥
3. 重啟伺服器
4. 到伺服器後台上，輸入```sm plugins info xxxxxx```，確認版本有更新
   - xxxxxx為插件的檔案名稱
- - - -
## 如何手動管理插件
<details>
  <summary>遊戲中途卸載插件 (點我展開)</summary>
  
1. 到伺服器後台上，輸入```sm plugins unload xxxxxx```
	- xxxxxx為插件的檔案名稱
  ```php
	] sm plugins unload blocktrolls
	[SM] Plugin Block Trolls unloaded successfully.
  ```
</details>

> __Warning__<br/>
  不建議遊戲中途卸載插件，可能導致伺服器殘留插件的作用<br/>
  即使遊戲中途卸載插件，只要.smx插件檔案還在addons\sourcemod\plugins目錄之下，載入下一張地圖插件依然會生效

<details>
  <summary>遊戲中途載入插件 (點我展開)</summary>
  
1. 到伺服器後台上，輸入```sm plugins load xxxxxx```
	- xxxxxx為插件的檔案名稱
  ```php
	] sm plugins load blocktrolls
	[SM] Loaded plugin blocktrolls.smx successfully.
  ```
2. 切換地圖
</details> 

<details>
  <summary>遊戲中途重新載入插件 (點我展開)</summary>
  
1. 到伺服器後台上，輸入```sm plugins reload xxxxxx```
	- xxxxxx為插件的檔案名稱
  ```php
	] sm plugins reload blocktrolls
	[SM] Plugin Block Trolls reloaded successfully.
  ```
2. 切換地圖
</details> 

> __Warning__ 不建議遊戲中途載入或重新載入插件，可能導致插件沒有作用<br/>
- - - -
## 如何開啟遊戲控制台
- 開啟遊戲，選項－＞鍵盤／滑鼠－＞允許使用開發人員命令列－＞已啟用
   - 各個遊戲選項設定有所不同
   <img src="https://i.imgur.com/g0fue7B.png" alt="g0fue7B.png" width="1000" height = "90">
> __Note__ 與伺服器後台為不同的概念<br/>
- - - -
## 如何檢查指令值
* 查看官方指令有哪些
	* [L4D Cvars](https://developer.valvesoftware.com/wiki/List_of_L4D_Cvars)
	* [L4D2 Cvars](https://developer.valvesoftware.com/wiki/List_of_L4D2_Cvars)
	* [CSS Cvars](https://developer.valvesoftware.com/wiki/List_of_CS:S_Cvars)
	* [CSGO Cvars](https://developer.valvesoftware.com/wiki/List_of_CS:GO_Cvars)
	* 其他遊戲自行搜索
	
* 查看插件指令有哪些
	* 到伺服器後台上，輸入```sm cvars xxxxxx```
		- xxxxxx為插件的檔案名稱
	```php	
	] sm cvars show_mic
	[SM] Listing 3 convars for: [L4D2] Voice Announce + Show MIC Hat.
	  [Name]                           [Value]
	  show_mic_center_hat_enable       1
	  show_mic_center_text_enable      0
	  show_mic_version                 1.0
	```
* 查看指令目前的值
	* 法一：伺服器後台輸入直接指令名稱，官方指令請前面加上```sm_cvar```
	  ```php
	  ] a4d_always_force_bosses
	  "a4d_always_force_bosses" = "0"
	  notify
	  - Whether or not bosses will be forced to spawn all the time.

	  ] sm_cvar sb_stop
	  [SM] Value of cvar "sb_stop": "1"
	  ```
	* 法二：遊戲內管理員在控制台輸入指令，前面加上```sm_cvar```
	  ```php
	  ] sm_cvar a4d_always_force_bosses
	  [SM] cvar a4d_always_force_bosses 的值為 0
	  ```
	* 法三：遊戲內管理員在聊天視窗輸入指令，前面加上```!cvar```
	  ```php
		Harry : !cvar a4d_always_force_bosses
		[SM] cvar a4d_always_force_bosses 的值為 0
	  ```
- - - -
## 如何修改指令
* 插件自帶的指令
   * 有自動產生相對應的.cfg文件
      1. cfg\sourcemod\ 打開對應的.cfg文件－＞修改指令－＞儲存
      2. 切換地圖或重啟伺服器<br/>

   * 沒有自動產生相對應的.cfg文件
      1. cfg\server.cfg 寫入指令－＞儲存
         * 如果沒有server.cfg檔案可以創建
      2. 切換地圖或重啟伺服器
> __Note__ 有的插件會自動產生.cfg文件，有的插件即使自帶指令也不會產生.cfg文件，全看原作者心情
	
* 官方原有的指令
   1. cfg\server.cfg 寫入指令－＞儲存
      * 如果沒有server.cfg檔案可以創建
   2. 切換地圖或重啟伺服器
> __Note__ 有些官方指令需要加上sm_cvar 才會生效，譬如```sm_cvar sb_stop 1```

* 遊戲中途修改指令
  * 法一：伺服器後台輸入直接指令名稱，官方指令請前面加上```sm_cvar```
    ```php
    ] a4d_always_force_bosses 1
    
    ] sm_cvar sb_stop 0
    [SM] Changed cvar "sb_stop" to "0".
    ```
  * 法二：遊戲內管理員在控制台輸入指令，前面加上```sm_cvar```
    ```php
    ] sm_cvar a4d_always_force_bosses 1
    ```
  * 法三：遊戲內管理員在聊天視窗輸入指令，前面加上```!cvar```
    ```php
      Harry : !cvar a4d_always_force_bosses 1
    ```
> __Warning__ 即使遊戲中途修改指令，載入下一張地圖之後指令可能會恢復原狀，請利用.cfg文件修改指令
- - - -
## 如何使用插件的命令
* 查看插件命令有哪些
	* 到伺服器後台上，輸入```sm cvars xxxxxx```
		- xxxxxx為插件的檔案名稱
	```php	
	] sm cmds server_GagMuteBanEx
	[SM] Listing commands for: GagMuteBanEx
	  [Name]            [Type]   [Help]
	  sm_exban          admin        sm_exban to Open exBan Steamid Menu or sm_exban <name> <minutes>
	  sm_exbanid        admin        sm_exbansteam <minutes> <STEAM_ID>
	  sm_exbansteam     admin        sm_exbansteam <minutes> <STEAM_ID>
	  sm_exbansteamid   admin        sm_exbansteam <minutes> <STEAM_ID>
	  sm_exgag          admin        sm_exgag to Open exGag Menu or sm_exgag <name> <minutes>
	  sm_exmute         admin        sm_exmute to Open exMute Menu or sm_exmute <name> <minutes>
	```

* 使用命令
  * 法一：伺服器後台輸入命令名稱
	- 有些命令不支援伺服器後台
    ```php
	] sm_admin
	[SM] This command can only be used in-game.
    ```
  * 法二：遊戲內玩家在控制台輸入命令
    ```php
	] sm_ban
	[SourceBans++] Usage: sm_ban <#userid|name> <time|0> [reason]
    ```
  * 法三：遊戲內玩家在聊天視窗輸入命令，前面加上```!```符號或```/```符號
    ```php
      Harry : !admin
      Harry : /admin
    ```
> __Note__<br/>
有些命令只有管理員才能使用<br/>
有些命令需要繼續輸入其他資料(又稱參數)，否則沒有效果，請自行摸索<br/>
- - - -
## 專業術語介紹
* 客戶端 = client 或 Player
   * 開啟遊戲的玩家
* 伺服器端 = 服務器 = Server
   * 伺服器本身
* 專屬伺服器 = Dedicated Server
   * 過其他三方軟體開啟伺服器
* 區域伺服器 = Local Server = Listen Server
   * 客戶端自己打開遊戲大廳創建遊戲房
* 遊戲控制台 = Game Console
   * 客戶端的控制台
* 伺服器後台 = Server Console
   * 伺服器端的控制台
* .smx 插件 = Plugin
   * 位於sourcemod\plugins裡面的檔案
* .sp 源碼 = Source Code
   * 位於sourcemod\scripting裡面的檔案，是插件的源碼
* extension
   * 位於sourcemod\extensions裡面的檔案
* 插件翻譯文件 = translation file
   * 位於sourcemod\translations裡面的檔案，是幫插件翻譯各國語言的文件
* 插件輔助文件 = gamedata file
   * 位於sourcemod\gamedata裡面的檔案，是幫插件抓取windows與linux各種奇葩涵式的文件
* 插件cfg文件 = plugin cfg file
   * 位於cfg\sourcemod裡面的檔案，是插件自動產生的文件，裡面都是插件自帶的指令
* 記錄檔 = log file
   * 位於sourcemod\logs裡面的檔案，紀錄伺服器發生的事情，也會記錄插件錯誤原因
* 指令 = Cvar = ConVar
   * 官方原有或插件產生的Cvar，譬如sv_cheats、sv_maxplayers
* 命令 = Cmd = Command
   * 插件產生的Command，譬如sm_admin、!ban、/kick
* 參數 = parameter
   * 給予命令所需要的資料
- - - -
## 其他
* [如何戰役模式開八人房 8+ survivors in coop (Including 5+ players fix)](https://github.com/fbef0102/Game-Private_Plugin/tree/main/8+_Survivors_In_Coop)
