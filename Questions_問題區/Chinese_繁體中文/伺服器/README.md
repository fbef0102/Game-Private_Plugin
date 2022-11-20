# 問題總攬
> 2022/11/19 更新 by [Harry](https://steamcommunity.com/profiles/76561198026784913)
- [總攬](#問題總攬)
    - [為什麼進不去伺服器](#為什麼進不去伺服器)
    - [為什麼Sourcemod下載有分兩種](#為什麼sourcemod下載有分兩種)
    - [為什麼啟動伺服器後無法開啟遊戲](#為什麼啟動伺服器後無法開啟遊戲)
	
- - - -
## 為什麼進不去伺服器
* <details><summary>問題1: 我嘗試進入專屬伺服器，無法進去，打開控制台出現<b>Invalid host version, expecting 2226, got 2225</b></summary>

  ![20221119105348_1](https://user-images.githubusercontent.com/12229810/202831446-b3c66f15-f250-471e-81b5-b0ce15d177cd.jpg)

  * 原因: 遊戲與伺服器的版本不同
  * 解決方式: 確認遊戲與伺服器升級到最新版本
      * 遊戲: [驗證遊戲檔案的完整性](/Tutorial_教學區/Chinese_繁體中文/Game/README.md#驗證遊戲檔案的完整性)
      * 伺服器: [更新專屬伺服器](/Tutorial_教學區/Chinese_繁體中文/Server/安裝伺服器與插件/README.md#如何更新專屬伺服器)
</details>

* <details><summary>問題2: 無法連線進去專屬伺服器，畫面出現<b>connection failed after 10 retries</b></summary>

  ![image](https://user-images.githubusercontent.com/12229810/202834826-a7aff8f7-85c8-450e-b78a-e8d4d4099eb5.png)

  * 原因: 找不到伺服器
  * 解決方式: 確認伺服器存在並且透過公網IP，不要虛擬IP，[如何進去我的伺服器](/Tutorial_教學區/Chinese_繁體中文/Server/安裝伺服器與插件/README.md#如何進去我的伺服器)
</details>

* <details><summary>問題3: 無法連線進去伺服器，畫面出現<b>Server is enforcing consistency for this file</b></summary>

  ![未命名](https://user-images.githubusercontent.com/12229810/202834970-d272d486-b74f-4e11-84e8-2c95f8439129.jpg)

  * 原因: 模組衝突或三方圖太多，伺服器的檔案與你的檔案不一致
  * 解決方式:
    * 法一：你自己把模組或三方圖都刪除
    * 法二：
        * 區域房請房主在遊戲控制台打上```sv_consistency 0```
        * 專屬伺服器請到伺服器後台輸入```sv_consistency 0```
        * 如果是你自己創建大廳請打開遊戲控制台輸入```sv_consistency 0```
</details>

* <details><summary>問題4: 控制台已經輸入<b>sv_consistency 0</b>，畫面還是出現<b>Server is enforcing consistency for this file</b></summary>

  ![未命名](https://user-images.githubusercontent.com/12229810/202834970-d272d486-b74f-4e11-84e8-2c95f8439129.jpg)

  * 原因: 檔案衝突太多了，多到無法忽視，遊戲救不你了
  * 解決方式: 把模組或三方圖全都刪除，[驗證遊戲檔案的完整性](/Tutorial_教學區/Chinese_繁體中文/Game/README.md#驗證遊戲檔案的完整性)
</details>

* <details><summary>問題5: 阻擋連線，畫面出現<b>steam please remove "-insecure" from the launch options...</b></summary>

  ![未命名](https://user-images.githubusercontent.com/12229810/202835547-39874460-7779-4dc8-9a72-6668bc0cdd09.jpg)

  * 原因: 啟動選項有輸入```-insecure```
  * 解決方式: 到[啟動選項](/Tutorial_%E6%95%99%E5%AD%B8%E5%8D%80/Chinese_%E7%B9%81%E9%AB%94%E4%B8%AD%E6%96%87/Game/README.md#設定啟動選項)把```-insecure```刪除
</details>

* <details><summary>問題6: 斷線，畫面出現<b>No Steam Logon</b></summary>

  ![未命名](https://user-images.githubusercontent.com/12229810/202835844-70dce289-6f1a-4454-818f-22be03382dc5.jpg)

  * 原因: 伺服器檢測到你沒有Steam帳密，把你踢出伺服器，原因很多種，就連[CSGO職業比賽途中](https://www.youtube.com/watch?v=YfIeQCEGglc)都會出現這問題，大部分都跟網路有關。
    1. Steam沒有登入或Steam被登出
    2. 你不是用正版
    3. 你或者伺服器網路改變了
    4. 網路與伺服器不相容 (常見的原因是國外玩家在大陸伺服器被網路長城剔除)
  * 解決方式: 離開遊戲，網路重連並確保順暢，重新啟動Steam平台，再不行就[驗證遊戲檔案的完整性](/Tutorial_教學區/Chinese_繁體中文/Game/README.md#驗證遊戲檔案的完整性)，再不行就重啟伺服器，再不行就去跟Steam Valve抱怨
</details>

* <details><summary>問題7: 斷線，畫面出現<b>STEAM UserID STEAM_XXXXXXXXX is banned</b></summary>

  ![未命名](https://user-images.githubusercontent.com/12229810/202836166-3744c17a-b99d-4d7a-9710-c7a15377634b.jpg)

  * 原因: 你被伺服器封鎖了列入黑名單
  * 解決方式: 認命吧，請去跟伺服器管理員溝通
</details>

* <details><summary>問題8: 斷線，畫面出現<b>Map does not match the version on the server</b></summary>

  ![2260737939_preview_20200929181731_1](https://user-images.githubusercontent.com/12229810/202836218-5e3a7cce-bb73-4db4-94f4-5f72a3ca6df8.jpg)

  * 原因: 地圖與伺服器的版本不同
  * 解決方式: 確認你所使用的地圖跟伺服器安裝的地圖，版本是一樣的，最好的方式是從同一個網站上下載
</details>

* <details><summary>問題9: 斷線，畫面出現<b>STEAM validation rejected</b></summary>

  <img width="223" alt="unknown" src="https://user-images.githubusercontent.com/12229810/202856292-62046c4e-1dc8-4253-ab46-48a4a688ba51.png">

  * 原因一: steam帳號驗證失敗，steam沒有登入或網路被改變
    * 解決方式: 重啟steam平台登入

  * 原因二: 伺服器裡面已經有你的steam帳戶在裡面，通常發生於你遊戲崩潰或斷線，但伺服器的分身還在裡面（不動了）
    * 解決方式: 
      * 法一: 請管理員把伺服器內的分身踢出去
      * 法二: 重啟伺服器
      * 法三: 分身不動等待被伺服器自動踢出 (伺服器會每隔一段時間偵測玩家是否無回應網路數據，無回應會踢出伺服器)

  * 原因三: 你的遊戲與專屬伺服器都在同一台電腦上，steam無法分辨
    * 解決方式: 
      * 法一: 使用不同台電腦安裝專屬伺服器
      * 法二: 先steam平台上執行Left 4 Dead 2，再直接去Left 4 Dead 2 Dedicated Server資料夾執行srcds.exe，不要透過steam平台執行

  * 原因四: 你使用離線模式遊玩單人模式，但伺服器一直要求驗證你的線上steam帳戶
    * 解決方式: 遊戲控制台輸入sv_lan 1
</details>

* <details><summary>問題10: 斷線，畫面出現<b>區域伺服器，僅限本地用戶端</b></summary>

  ![20221120190732_1](https://user-images.githubusercontent.com/12229810/202898826-60b6b5dd-3b1c-4298-918b-25b241e9e2e5.jpg)

  * 原因: 伺服器限制只有相同網域的玩家才能進入
  * 解決方式: 
    1. 到伺服器後台檢查指令```sv_lan```是否為0
    2. 關閉伺服器，[執行專屬伺服器](/Tutorial_教學區/Chinese_繁體中文/Server/安裝伺服器與插件/README.md#如何執行專屬伺服器)的時候，網路務必選擇**網際網路**
    3. 檢查cfg文件不能修改```sv_lan```
    4. 如果伺服器有運行參數，請輸入```+sv_lan 0```
</details>

- - - -
## 為什麼sourcemod下載有分兩種
[Sourcemod官網](https://www.sourcemod.net/downloads.php)上有Stable Builds和Dev Builds
<br/>![未命名](https://user-images.githubusercontent.com/12229810/202843043-4c84313e-540b-4cae-862c-1a1ceedca34c.jpg)
<br/>不只Sourcemod，連[Metamod](https://www.sourcemm.net/)也有這兩種，差別在哪？
<br/>![未命名](https://user-images.githubusercontent.com/12229810/202843249-a04ee5fe-2247-429e-af31-096692f1d72a.jpg)

* Stable Builds 是穩定版本
  * 是經過Sourcemod團隊測試之後無任何重大的bug才提供下載
  * 伺服器穩定且不易崩潰，穩定度高
  * 大部分的插件作者編寫源碼都是透過Stable Builds版本編譯
  * 建議運行最新的穩定版本，但是當出現較新的版本時，你不需要著急去更新

* Dev Builds 是開發版本
  * 還在測試階段，Sourcemod團隊目前正在改良開發的新版本
  * 也許會有新功能可以用，但這是寫源碼的開發者才需要考慮的
  * 伺服器不穩定且容易出問題，想要把伺服器當白老鼠測試可以安裝

- - - -
## 為什麼啟動伺服器後無法開啟遊戲
我明明啟動的是Left 4 Dead 2 Dedicated Server，為什麼steam會顯示我是遊玩Left 4 Dead 2，而且還不能打開遊戲
<br/>![未命名](https://user-images.githubusercontent.com/12229810/202857120-696d4a1b-ce57-45f2-8055-5d8e9ca6311c.jpg)

* 原因: steam 與 Left 4 Dead 的問題，從遊戲發售至今沒有解決過，再問就是Valve吃大便
* 解決方式: 
  * 法一: 使用不同台電腦安裝專屬伺服器
  * 法二: 先steam平台上執行Left 4 Dead 2，再直接去Left 4 Dead 2 Dedicated Server資料夾執行srcds.exe，不要透過steam平台執行
