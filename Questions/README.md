# 如何編譯源碼
1. [Sourcemod論壇](https://www.sourcemod.net/downloads.php?branch=stable)下載最新版本的安裝包 (最好下載符合你目前伺服器的版本)<br/>
-窗戶圖案的是Windows系統，企鵝圖案的是Linux系統，蘋果圖案的是macOs系統，選擇Windows系統下載即可
-<img src="https://i.imgur.com/oa5mk5o.png" alt="oa5mk5o.png" width="1100" height = "252">

2. 解壓縮到電腦上任一路徑，將.sp檔案丟入addons\sourcemod\scripting\ 資料夾裡面<br/>
3. 接著拖曳.sp檔案到同資料夾底下的compile.exe<br/>
-看不到副檔名者請自行google"如何顯示副檔名"
![image](https://i.imgur.com/PrWaypt.gif)

4. 編譯完成的檔案將會在addons\sourcemod\scripting\compiled\ 資料夾裡面<br/>
-視窗如果顯示編譯失敗，代表缺少安裝必要的檔案或者源碼有錯誤，請洽作者
5. 將編譯完成的.smx檔案丟入伺服器裡addons\sourcemod\plugins\ 資料夾裡面即可<br/>
- - - -
# 如何成為伺服器的管理員
1. 首先要知道自己的steam的ID為何，打開steam平台，到自己的steam個人頁面，右鍵點擊"複製頁面網址"
-<img src="https://i.imgur.com/EbO0fC1.png" alt="EbO0fC1.png" width="1100" height = "400">

2. 點擊[Steam ID Finder](https://steamid.xyz/)，將複製的網址貼上去提交，會得到自己的steam ID
-<img src="https://i.imgur.com/xHfmmq6.png" alt="xHfmmq6.png" width="600" height = "200">

3. 到伺服器位置addons\sourcemod\configs\ 資料夾找到一個檔案為admins_simple.ini，用筆記本打開文件，在最底下方新增一行內容<br/>
-STEAM_X:X:XXXXXX 為你的steam ID
```
"STEAM_X:X:XXXXXX" "99:z" //這是我的管理員
```
4. 儲存，重啟伺服器，進入遊戲之後聊天視窗輸入!admin，如果左邊有介面跑出來代表已經成功為伺服器的管理員
-<img src="https://i.imgur.com/XDBkYkY.png" alt="XDBkYkY.png" width="300" height = "200">