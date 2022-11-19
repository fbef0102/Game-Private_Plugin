# 問題總攬
> 2022/11/19 更新 by [Harry](https://steamcommunity.com/profiles/76561198026784913)
- [總攬](#問題總攬)
    - [為什麼進不去伺服器](#為什麼進不去伺服器)
	
- - - -
## 為什麼進不去伺服器
<details>
  <summary>問題1: 我嘗試進入專屬伺服器，無法進去，打開控制台出現<b>Invalid host version, expecting 2226, got 2225</b></summary>

![20221119105348_1](https://user-images.githubusercontent.com/12229810/202831446-b3c66f15-f250-471e-81b5-b0ce15d177cd.jpg)

* 原因: 遊戲與伺服器的版本不同
* 解決方式: 確認遊戲與伺服器升級到最新版本
    * 遊戲: [驗證遊戲檔案的完整性](/Tutorial_教學區/Chinese_繁體中文/Game/README.md/#驗證遊戲檔案的完整性)
    * 伺服器: [更新專屬伺服器](/Tutorial_教學區/Chinese_繁體中文/Server/安裝伺服器與插件/README.md/#如何更新專屬伺服器)

</details>

<details>
  <summary>問題2: 無法連線進去專屬伺服器，畫面出現<b>connection failed after 10 retries</b></summary>

![image](https://user-images.githubusercontent.com/12229810/202834826-a7aff8f7-85c8-450e-b78a-e8d4d4099eb5.png)

* 原因: 找不到伺服器
* 解決方式: 確認伺服器存在並且透過公網IP，不要虛擬IP，[如何進去我的伺服器](/Tutorial_教學區/Chinese_繁體中文/Server/安裝伺服器與插件/README.md/#如何進去我的伺服器)

</details>

<details>
  <summary>問題3: 無法連線進去伺服器，畫面出現<b>Server is enforcing consistency for this file</b></summary>

![未命名](https://user-images.githubusercontent.com/12229810/202834970-d272d486-b74f-4e11-84e8-2c95f8439129.jpg)

* 原因: 模組衝突或三方圖太多，伺服器的檔案與你的檔案不一致
* 解決方式:
	* 法一：你自己把模組或三方圖都刪除
    * 法二：
        * 區域房請房主在遊戲控制台打上```sv_consistency 0```
        * 專屬伺服器請到伺服器後台輸入```sv_consistency 0```
        * 如果是你自己創建大廳請打開遊戲控制台輸入```sv_consistency 0```

</details>

<details>
  <summary>問題4: 控制台已經輸入<b>sv_consistency 0</b>，畫面還是出現<b>Server is enforcing consistency for this file</b></summary>

![未命名](https://user-images.githubusercontent.com/12229810/202834970-d272d486-b74f-4e11-84e8-2c95f8439129.jpg)

* 原因: 檔案衝突太多了，多到無法忽視，遊戲救不你了
* 解決方式: 把模組或三方圖全都刪除，[驗證遊戲檔案的完整性](/Tutorial_教學區/Chinese_繁體中文/Game/README.md/#驗證遊戲檔案的完整性)

</details>

<details>
  <summary>問題5: 阻擋連線，畫面出現<b>steam please remove "-insecure" from the launch options...</b></summary>

![未命名](https://user-images.githubusercontent.com/12229810/202835547-39874460-7779-4dc8-9a72-6668bc0cdd09.jpg)

* 原因: 啟動選項有輸入```-insecure```
* 解決方式: 到[啟動選項](/Tutorial_%E6%95%99%E5%AD%B8%E5%8D%80/Chinese_%E7%B9%81%E9%AB%94%E4%B8%AD%E6%96%87/Game/README.md#設定啟動選項)把```-insecure```刪除

</details>

<details>
  <summary>問題6: 斷線，畫面出現<b>No Steam Logon</b></summary>

![未命名](https://user-images.githubusercontent.com/12229810/202835844-70dce289-6f1a-4454-818f-22be03382dc5.jpg)

* 原因: 伺服器檢測到你沒有Steam帳密，把你踢出伺服器，原因很多種，就連[CSGO職業比賽途中](https://www.youtube.com/watch?v=YfIeQCEGglc)都會出現這問題，大部分都跟網路有關。
  1. Steam沒有登入或Steam被登出
  2. 你不是用正版
  3. 你或者伺服器網路改變了
  4. 網路與伺服器不相容 (常見的原因是大陸伺服器被網路長城剔除)
* 解決方式: 離開遊戲，重新啟動Steam平台，再不行就[驗證遊戲檔案的完整性](/Tutorial_教學區/Chinese_繁體中文/Game/README.md/#驗證遊戲檔案的完整性)，再不行就重啟伺服器，再不行就去跟Steam Valve抱怨

</details>

<details>
  <summary>問題7: 斷線，畫面出現<b>STEAM UserID STEAM_XXXXXXXXX is banned</b></summary>

![未命名](https://user-images.githubusercontent.com/12229810/202836166-3744c17a-b99d-4d7a-9710-c7a15377634b.jpg)

* 原因: 你被伺服器封鎖了列入黑名單
* 解決方式: 認命吧，請去跟伺服器管理員溝通

</details>

<details>
  <summary>問題8: 斷線，畫面出現<b>Map does not match the version on the server</b></summary>

![2260737939_preview_20200929181731_1](https://user-images.githubusercontent.com/12229810/202836218-5e3a7cce-bb73-4db4-94f4-5f72a3ca6df8.jpg)

* 原因: 地圖與伺服器的版本不同
* 解決方式: 確認你所使用的地圖跟伺服器安裝的地圖，版本是一樣的，最好的方式是從同一個網站上下載

</details>

