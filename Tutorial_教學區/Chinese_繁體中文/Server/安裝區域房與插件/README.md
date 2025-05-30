# 問題總攬
> 2024/2/23 更新 by [Harry](https://steamcommunity.com/profiles/76561198026784913)
- [問題總攬](#問題總攬)
  - [甚麼是區域房](#甚麼是區域房)
  - [與專屬伺服器有何差別](#與專屬伺服器有何差別)
  - [如何判定伺服器為區域或專屬](#如何判定伺服器為區域或專屬)
  - [區域房如何安裝Sourcemod](#區域房如何安裝sourcemod)
  - [如何執行區域伺服器](#如何執行區域伺服器)
  - [如何檢查版本](#如何檢查版本)
  - [朋友要如何進去我的區域伺服器](#朋友要如何進去我的區域伺服器)
  - [如何成為伺服器的管理員](#如何成為伺服器的管理員)
  - [如何編譯源碼](#如何編譯源碼)
  - [如何安裝插件](#如何安裝插件)
  - [如何檢查插件成功運作](#如何檢查插件成功運作)
  - [如何移除插件](#如何移除插件)
  - [如何更新插件](#如何更新插件)
  - [如何手動管理插件](#如何手動管理插件)
  - [如何檢查指令值](#如何檢查指令值)
  - [如何修改指令](#如何修改指令)
  - [如何使用插件的命令](#如何使用插件的命令)
  - [如何更新區域伺服器](#如何更新區域伺服器)
  - [其他](#其他)
> __Note__ 本處教學一律是Sourcemod，與AMX Mod X無任何關係
- - - -
## 甚麼是區域房
- 區域房也叫區域伺服器，英文名Listen Server
- 從遊戲中創建房間->主持區域伺服器或者開始玩單人遊戲或者指令開房都是區域房
<br/>![image](https://user-images.githubusercontent.com/12229810/202610625-65363168-8b6f-4ec9-bf30-7a380919b76b.jpg)

- 創建房間的房主就是伺服器，伺服器就是房主
	- 只要房主離開遊戲，伺服器就會不存在，所有人都會彈回大廳
   - 房主使用過多的模組或修改大幅度的網路參數會影響整個伺服器
   - 換句話說，伺服器是否流暢與穩定取決於房主的自家網路跟遊戲

- - - -
## 與專屬伺服器有何差別
- 專屬伺服器英文名是Dedicated Server
- 只要是透過第三方軟體啟動伺服器都是專屬伺服器
- 區域房無須設定任何網路，只要創立大廳並邀請朋友便可遊玩
- 專屬伺服器必須會一點網路與IP知識，如果家裡的路由器與IP喬不好那沒有人可以進入你的伺服器

| 比較        	 | 區域           		| 專屬            |
| -------------  |:-----------------:|:-------------:|
| 英文        	 | listen server    	| 	dedicated server |
| 穩定度         | 普通      					|   佳         |
| 流暢度         | 普通      					|   佳         |
| Plugin插件     | 少部分插件不支援     |  所有插件都支援 |
| 啟動         | 房主開始遊戲    	   |   手動啟動  |
| 操作         | 房主的遊戲控制台    	|   伺服器後台  |
| 關閉         | 房主離開自動關閉    	|   手動關閉  |
| 重啟         | 房主重啟遊戲    	    |   手動重啟  |
| 伺服器更新      | 遊戲本體自動更新    		|  手動更新  |
| 執行的cfg      | cfg/listenserver.cfg |   cfg/server.cfg |
| 網路         | 無須設定           |   必須設定好公網IP |
| 玩家人數上限    | 8位    						|   最高可32位  |
| Tickrate       | 30    						|   最高可達100  |

- 你可以自由選擇Sourcemod要安裝在專屬伺服器還是區域房
	- 安裝專屬伺服器可以看[這篇教學](/Tutorial_教學區/Chinese_繁體中文/Server/安裝伺服器與插件/README.md)
	- 我推薦專屬伺服器，因為[SourceMod不支援區域伺服器](/Questions_%E5%95%8F%E9%A1%8C%E5%8D%80/Chinese_%E7%B9%81%E9%AB%94%E4%B8%AD%E6%96%87/%E4%BC%BA%E6%9C%8D%E5%99%A8/README.md#sourcemod支援區域伺服器嗎)，且所有插件都可以支援專屬伺服器
	- 絕大部分的插件作者不會鳥你區域伺服器出現問題
	- 🟥Linux 系統無法安裝Sourcemod在區域房

- - - -
## 如何判定伺服器為區域或專屬
- 進入遊戲之後打開遊戲的控制台，打上```status```
	- [如何開啟遊戲控制台](/Tutorial_%E6%95%99%E5%AD%B8%E5%8D%80/Chinese_%E7%B9%81%E9%AB%94%E4%B8%AD%E6%96%87/Game/README.md#如何開啟遊戲控制台)
	```php
	] status
	hostname: Resident Evil
	version : 2.2.2.5 8705 insecure  
	udp/ip  : 192.168.50.106:27015 [ public n/a ]
	os      : Windows Listen
	map     : c10m2_drainage at ( -11074, -9007, -529 )
	players : 1 humans, 0 bots (4 max) (not hibernating) (unreserved)
	```
	- 查看**os**，**Listen**為區域伺服器，**Dedicated**為專屬伺服器
	
- - - -
## 區域房如何安裝Sourcemod
1. 先打開[你的遊戲主目錄的資料夾](/Tutorial_教學區/Chinese_繁體中文/Game/README.md#打開遊戲主目錄的資料夾)

2. [Sourcemod](https://www.sourcemod.net/downloads.php?branch=stable)下載最新版本的安裝包
   - 窗戶圖案的是Windows系統，企鵝圖案的是Linux系統，蘋果圖案的是macOs系統，選擇Windows系統下載即可
   - 紅色圖案代表此版本尚未支援該系統平台
   - [不要下載Dev版本](/Questions_%E5%95%8F%E9%A1%8C%E5%8D%80/Chinese_%E7%B9%81%E9%AB%94%E4%B8%AD%E6%96%87/%E4%BC%BA%E6%9C%8D%E5%99%A8/README.md#為什麼sourcemod下載有分兩種)
   <br/>![image](https://user-images.githubusercontent.com/12229810/187821617-5f82e0c3-def7-4d7f-ab50-0b98b238e0ac.png)

3. [MetaMod](https://www.sourcemm.net/downloads.php?branch=stable)下載最新版本的安裝包
   - 窗戶圖案的是Windows系統，企鵝圖案的是Linux系統，蘋果圖案的是macOs系統，選擇Windows系統下載即可
   - 紅色圖案代表此版本尚未支援該系統平台
   <br/>![image](https://user-images.githubusercontent.com/12229810/187821844-c93fff63-b8e5-4474-b6c1-11cfeed3d9e7.png)
 
4. 將所有檔案解壓縮到遊戲本體路徑上，最後會看起來如圖片所示 (注意路徑)
   <br/>![image](https://user-images.githubusercontent.com/12229810/202615505-d6062270-a7b0-4c5c-9172-92b72d45f51e.png)
   <br/>![image](https://user-images.githubusercontent.com/12229810/202615529-e857d56a-f481-4e76-aed1-7739a4618236.png)

5. 到[sourcemm.net vdf](https://www.sourcemm.net/vdf)，選擇相對應的遊戲，然後點擊"Generate medamod.vtf"，下載metamod.vtf到addons資料夾上覆蓋原有的檔案
   <br/>![image](https://github.com/fbef0102/Game-Private_Plugin/assets/12229810/e3f8fd21-582b-4bc7-b500-dc99e28ee329)
   <br/>![image](https://github.com/fbef0102/Game-Private_Plugin/assets/12229810/469fcb75-fe05-441c-a89b-a1383bc17efb)

- - - -
## 如何執行區域伺服器
1. 依照圖片指示在遊戲啟動選項輸入-insecure
   <br/>![image](https://github.com/fbef0102/Game-Private_Plugin/assets/12229810/98fb625b-da2b-478e-880f-947b64946756)

2. 啟動遊戲，看到警告訊息正常的，請按確定繼續
   <br/>![image](https://user-images.githubusercontent.com/12229810/202615951-ea29504c-77e7-4134-a824-12ec620f56a0.png)

3. 接下來
	* 法一：單人遊戲
	* 法二：指令開房，打開遊戲控制台輸入```map xxxx```
		* ```xxxx``` 為地圖名
		* [如何開啟遊戲控制台](/Tutorial_%E6%95%99%E5%AD%B8%E5%8D%80/Chinese_%E7%B9%81%E9%AB%94%E4%B8%AD%E6%96%87/Game/README.md#如何開啟遊戲控制台)
	* 法三：創建大廳 => 伺服器類型選擇 "區域伺服器" => 開始遊戲
	<br/>![image](https://user-images.githubusercontent.com/12229810/202614882-84d06875-02a9-4663-a1b5-fdbbdc74857e.jpg)

4. 檢查Sourcemod是否有正常運作
	* 按下~鍵打開控制台，輸入```sm version```，沒有出現如下圖所示的內容代表前面的步驟有誤，請檢查
	<br/>![image](https://github.com/fbef0102/Game-Private_Plugin/assets/12229810/9bbcfbf0-f647-4347-bdfd-af07856310ab)
   
> __Warning__
> * 要關掉Sourcemod與插件直接在啟動選項刪除-insecure
> * 啟動選項輸入-insecure會導致你無法進入有VAC保護的伺服器

- - - -
## 如何檢查版本
* [查看這篇](/Tutorial_教學區/Chinese_繁體中文/Server/安裝伺服器與插件/README.md#如何檢查版本)
* 在區域房裡，伺服器後台為房主的遊戲控制台

- - - -
## 朋友要如何進去我的區域伺服器
* 正常步驟
   1. 創建大廳
   2. 邀請朋友
   3. 開始遊戲
* [為什麼進不去伺服器](/Questions_問題區/Chinese_繁體中文/伺服器/README.md#為什麼進不去伺服器)

- - - -
## 如何成為伺服器的管理員
* [查看這篇](/Tutorial_教學區/Chinese_繁體中文/Server/安裝伺服器與插件/README.md#如何成為伺服器的管理員)
	 
- - - -
## 如何編譯源碼
* [查看這篇](/Tutorial_教學區/Chinese_繁體中文/Server/安裝伺服器與插件/README.md#如何編譯源碼)
 
- - - -
## 如何安裝插件
* [查看這篇](/Tutorial_教學區/Chinese_繁體中文/Server/安裝伺服器與插件/README.md#如何安裝插件)

- - - -
## 如何檢查插件成功運作
* [查看這篇](/Tutorial_教學區/Chinese_繁體中文/Server/安裝伺服器與插件/README.md#如何檢查插件成功運作)
* 在區域房裡，伺服器後台為房主的遊戲控制台

- - - -
## 如何移除插件
* [查看這篇](/Tutorial_教學區/Chinese_繁體中文/Server/安裝伺服器與插件/README.md#如何移除插件)

- - - -
## 如何更新插件
* [查看這篇](/Tutorial_教學區/Chinese_繁體中文/Server/安裝伺服器與插件/README.md#如何更新插件)

- - - -
## 如何手動管理插件
* [查看這篇](/Tutorial_教學區/Chinese_繁體中文/Server/安裝伺服器與插件/README.md#如何手動管理插件)
* 在區域房裡，伺服器後台為房主的遊戲控制台

- - - -
## 如何檢查指令值
[查看這篇](/Tutorial_教學區/Chinese_繁體中文/Server/安裝伺服器與插件/README.md#如何檢查指令值)
* 在區域房裡，伺服器後台為房主的遊戲控制台

- - - -
## 如何修改指令
* 插件自帶的指令
   * 有自動產生相對應的.cfg文件
      1. cfg\sourcemod\ 打開對應的.cfg文件－＞修改指令－＞儲存
      2. 切換地圖或重啟遊戲<br/>

   * 沒有自動產生相對應的.cfg文件
      1. cfg\listenserver.cfg 寫入指令－＞儲存
         * 如果沒有listenserver.cfg檔案可以創建
      2. 切換地圖或重啟遊戲
> __Note__ 有的插件會自動產生.cfg文件，有的插件即使自帶指令也不會產生.cfg文件，全看原作者心情
	
* 官方原有的指令
   1. cfg\listenserver.cfg 寫入指令－＞儲存
      * 如果沒有listenserver.cfg檔案可以創建
   2. 切換地圖或重啟遊戲
> __Note__ 有些官方指令需要加上sm_cvar 才會生效，譬如```sm_cvar sb_stop 1```

* 遊戲中途修改指令
  * 法一：遊戲內管理員在控制台輸入指令與修改值，前面加上```sm_cvar```
    ```php
    ] sm_cvar a4d_always_force_bosses 1
    ```
  * 法二：遊戲內管理員在聊天視窗輸入指令與修改值，前面加上```!cvar```
    ```php
      Harry : !cvar a4d_always_force_bosses 1
    ```
    
> __Warning__ 即使遊戲中途修改指令，載入下一張地圖之後指令可能會恢復原狀，請利用.cfg文件修改指令

- - - -
## 如何使用插件的命令
[查看這篇](/Tutorial_教學區/Chinese_繁體中文/Server/安裝伺服器與插件/README.md#如何使用插件的命令)
* 在區域房裡，伺服器後台為房主的遊戲控制台

- - - -
## 如何更新區域伺服器
* [只要遊戲本體更新版本便可](/Tutorial_教學區/Chinese_繁體中文/Game/README.md#驗證遊戲檔案的完整性)
* 如果是要更新Sourcemod版本，那就全部刪除，打掉重練，從頭第一個步驟開始
	- 插件、cfg可以備份

- - - -
## 其他
* [安裝其他檔案教學](/Tutorial_教學區/Chinese_繁體中文/Server/安裝其他檔案教學/README.md)
* [安裝專屬伺服器與插件](/Tutorial_%E6%95%99%E5%AD%B8%E5%8D%80/Chinese_%E7%B9%81%E9%AB%94%E4%B8%AD%E6%96%87/Server/%E5%AE%89%E8%A3%9D%E4%BC%BA%E6%9C%8D%E5%99%A8%E8%88%87%E6%8F%92%E4%BB%B6/README.md)
* [如何戰役模式開八人房](/Tutorial_%E6%95%99%E5%AD%B8%E5%8D%80/Chinese_%E7%B9%81%E9%AB%94%E4%B8%AD%E6%96%87/Game/L4D2/8%E4%BD%8D%E7%8E%A9%E5%AE%B6%E9%81%8A%E7%8E%A9%E6%88%B0%E5%BD%B9%E6%A8%A1%E5%BC%8F/)
