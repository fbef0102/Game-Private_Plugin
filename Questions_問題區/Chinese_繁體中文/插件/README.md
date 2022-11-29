# 插件問題總攬
> 2022/11/19 更新 by [Harry](https://steamcommunity.com/profiles/76561198026784913)
- [總攬](#問題總攬)
    - [前言準備](#前言準備)
    - [為什麼插件沒有運作](#為什麼插件沒有運作)
    - [常見的插件錯誤訊息](#常見的插件錯誤訊息)
    - [常見的編譯錯誤訊息](#常見的編譯錯誤訊息)
    - [我能否修改源碼](#我能否修改源碼)
    - [哪裡能詢問插件問題](#哪裡能詢問插件問題)
    - [插件可以有中文嗎](#插件可以有中文嗎)
    - [為什麼會有亂碼](#為什麼中文會有亂碼)

- - - -
## 前言準備
> 以下教學，可以先看，等回會用到
* [如何檢查版本](/Tutorial_教學區/Chinese_繁體中文/Server/安裝伺服器與插件/README.md#如何檢查版本)
* [如何編譯源碼](/Tutorial_教學區/Chinese_繁體中文/Server/安裝伺服器與插件/README.md#如何編譯源碼)
* [如何安裝插件](/Tutorial_教學區/Chinese_繁體中文/Server/安裝伺服器與插件/README.md#如何安裝插件)
* [如何檢查插件成功運作](/Tutorial_教學區/Chinese_繁體中文/Server/安裝伺服器與插件/README.md#如何檢查插件成功運作)

- - - -
## 為什麼插件沒有運作
> 在你向插件作者詢問 **"插件沒有作用"** 之前，可以先來做些自我檢查
1. 只要依照插件說明書，都會成功運作，請先確認
  <br/>✔ 有安裝說明書指示的必要檔案
  <br/>✔ 有依照說明書指示的重要步驟
  <br/>✔ 有安裝插件輔助的文件
  <br/>✔ Sourcemod版本符合插件的要求

2. 到伺服器後台上，輸入```sm plugins info xxxxxx```
   - xxxxxx為插件的檔案名稱
      <details>
        <summary>範例 (點我展開)</summary>

        ```php
      ] sm plugins info test
        Filename: test.smx
        Title: [L4D & L4D2] Test
        Author: HarryPotter
        Version: 1.0
        Error: Error detected in plugin startup (see error logs)
        ```
      </details>

3. 看見Error代表此插件無法成功載入，請到sourcemod/logs資料夾查看errors_開頭的文件，閱讀錯誤原因並嘗試解決
   - 若看不懂錯誤原因請洽作者，將錯誤原文發給開發者，無須一堆廢話
      <details>
        <summary>錯誤原文範例 (點我展開)</summary>

        ```php
        L 03/28/2022 - 02:24:27: [SM] Exception reported: XXXXXXXXXXXXXXXXXXXX
        L 03/28/2022 - 02:24:27: [SM] Blaming: xxxxxxxxxx.smx
        L 03/28/2022 - 02:24:27: [SM] Call stack trace:
        L 03/28/2022 - 02:24:27: [SM]   [0] ThrowNativeError
        L 03/28/2022 - 02:24:27: [SM]   [1] Line 5394, C:\Servers\L4D2\left4dead2\addons\sourcemod\scripting\xxxxxxxxxx.sp::ValidateAddress
        L 03/28/2022 - 02:24:27: [SM]   [2] Line 6131, C:\Servers\L4D2\left4dead2\addons\sourcemod\scripting\xxxxxxxxxx.sp::Native_CDirector_IsAnySurvivorInStartArea
        L 03/28/2022 - 02:24:27: [SM]   [4] L4D_IsAnySurvivorInStartArea
        L 03/28/2022 - 02:24:27: [SM]   [5] Line 172, f:\Stuff\EVERYTHING ELSE\Left 4 Dead 2 Dedicated Servers\left4dead2\addons\sourcemod\scripting\xxxxxxxxxx.sp::OnPluginStart
        ```
      </details>

4. 重新安裝插件之後，重啟伺服器，檢查插件是否成功運作，直到沒有error為止才能安心 

- - - -
## 常見的插件錯誤訊息
> * 嘗試解決錯誤，重啟伺服器，直到沒有error為止
> * 如果錯誤還是存在或看不懂錯誤訊息，直接洽談作者，將錯誤原文發給開發者

* <details><summary>錯誤1: <b>Native XXXXX was not found</b></summary>

  ```php
  [SM] Unable to load plugin "left4dhooks.smx": Native "DHookParam.GetAddress" was not found
  ```

  * 原因: 沒有安裝必要檔案
  * 解決方式: 嘗試重新安裝說明書指示的必要檔案
</details>

* <details><summary>錯誤2: <b>File could not be opened: 系統找不到指定的檔案。</b></summary>

  ```php
  [SM] Error parsing gameconfig file "D:\Left 4 Dead 2 Test Server\left4dead2\addons\sourcemod\gamedata\all4dead2.txt":
  [SM] Error 1 on line 0, col 0: Stream failed to open
  [SM] Exception reported: Unable to open all4dead2: File could not be opened: 系統找不到指定的檔案。
  ```

  * 原因: 沒有放好所有文件
  * 解決方式: 插件需要的翻譯檔案或者輔助文件，必須要放到正確的資料夾上
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
</details>

* <details><summary>錯誤3: <b>File Not Found</b></summary>

  ```php
  Exception reported: File Not Found: addons\sourcemod\data\l4d_elevator_info.cfg
  ```

  * 與錯誤2同理
</details>

* <details><summary>錯誤4: <b>unsupported feature set; code is too new</b></summary>

  ```php
  [l4d2_supply_woodbox.smx] Unable to load plugin (unsupported feature set; code is too new)
  ```

  * 原因: 你的Sourcemod版本太舊了啦
  * 解決方式: 直接從[Sourcemod官網](https://www.sourcemod.net/downloads.php?branch=stable)更新重裝
</details>

* <details><summary>錯誤5: <b>Unable to load plugin (bad header).</b></summary>

  ```php
  [SM] Failed to load plugin "l4dinfectedbots.smx": Unable to load plugin (bad header).
  ```

  * 原因: 你的Sourcemod版本與插件版本不符
  * 解決方式: 
    * 法一: 從[Sourcemod官網](https://www.sourcemod.net/downloads.php?branch=stable)更新重裝
    * 法二: 自己拿源碼編譯
</details>

* <details><summary>錯誤6: <b>Failed to find signature</b></summary>

  ```php
  [left4dhooks.smx] Failed to find signature: "IsVisibleToPlayer"
  ```

  * 原因: signature 無效或過期
  * 解決方式: 直接回報作者，告訴你的系統是windows還是linux
</details>

* <details><summary>錯誤7: <b>String formatted incorrectly</b></summary>

  ```php
  [SM] Exception reported: String formatted incorrectly - parameter 6 (total 5)
  ```

  * 原因: 源碼內部的參數出錯
  * 解決方式: 直接回報作者
</details>

* <details><summary>錯誤8: <b>Plugin only supports XXXX..</b></summary>

  ```php
  [SM] Failed to load plugin "test.smx": Plugin only supports CSGO..
  ```

  * 原因: 插件不支援你的遊戲
  * 解決方式: 
    * 法一: 刪除插件，從此不用
    * 法二: 洽談作者，希望能支援你玩的遊戲
</details>

* <details><summary>錯誤9: <b>incompatible with this game.</b></summary>

  ```php
  [SM] Failed to load plugin "nextmap.smx": Nextmap is incompatible with this game.
  ```

  * 原因: 插件不支援你的遊戲
  * 解決方式: 刪除插件，從此不用
</details>

* <details><summary>錯誤10: <b>Invalid Entity index</b></summary>

  ```php
  Exception reported: Invalid Entity index -1 (-1)
  ```

  * 原因: 源碼內部的實體檢查有問題
  * 解決方式: 直接回報作者
</details>

* <details><summary>錯誤11: <b>is not in game</b></summary>

  ```php
  Exception reported:  Client 11 is not in game
  ```

  * 原因: 源碼內部的客戶端檢查有問題
  * 解決方式: 直接回報作者
</details>

* <details><summary>錯誤12: <b>Handle XXXXXX is invalid</b></summary>

  ```php
  Exception reported: Handle 9330066f is invalid
  ```

  * 原因: 源碼內部的物件有問題
  * 解決方式: 直接回報作者
</details>

* <details><summary>錯誤13: <b>Language phrase XXXXX not found</b></summary>

  ```php
  Exception reported: Language phrase "BAW_3" not found (arg 6)
  ```

  * 原因: 找不到翻譯文件裡面對應的翻譯句子
  * 解決方式: 確認你有安裝插件需要的翻譯文件，如果有了但是報錯請回報給作者
</details>

- - - -
## 常見的編譯錯誤訊息
> * [請依照正確的流程進行編譯](/Tutorial_教學區/Chinese_繁體中文/Server/安裝伺服器與插件/README.md#如何編譯源碼)，不要再透過網路上的編譯
> * 如果錯誤還是存在或看不懂錯誤訊息，直接洽談作者，將錯誤原文發給開發者
> * 如果源碼有被你修改導致編譯有錯誤，只好自己研究或請教論壇上的大佬們

> __Note__ 
> <br/>錯誤訊息只要是warning開頭的，都可以忽略。如果還是很在意，直接回報給作者修改。

* <details><summary>警告1: <b>symbol is assigned a value that is never used</b></summary>

  ```php
  test.sp(34) : warning 204: symbol is assigned a value that is never used: "ZC_TANK"
  ```

  * 原因: 變數沒有使用
  * 解決方式: 可忽略
</details>

* <details><summary>警告2: <b>should return an explicit value</b></summary>

  ```php
  test.sp(55) : warning 242: function "Cmd_test" should return an explicit value
  ```

  * 原因: 涵式沒有回傳數值
  * 解決方式: 可忽略
</details>

* <details><summary>警告3: <b>inconsistent indentation</b></summary>

  ```php
  test.sp(42) : warning 217: inconsistent indentation (did you mix tabs and spaces?)
  ```

  * 原因: 程式排版沒有對齊
  * 解決方式: 可忽略
</details>

* <details><summary>警告4: <b>tag mismatch</b></summary>

  ```php
  test.sp(58) : warning 213: tag mismatch (expected "float", got "int")
  ```

  * 原因: 變數值對不上
  * 解決方式: 可忽略，但建議回報給作者
</details>

* <details><summary>錯誤1: <b>cannot read from file</b></summary>

  ```php
  test.sp(9) : error 417: cannot read from file: "multicolors"
  ```

  * 原因: 沒有安裝必要的.inc檔案
  * 解決方式: 嘗試重新安裝說明書指示的必要檔案
</details>

* <details><summary>錯誤2: <b>new-style declarations are required</b></summary>

  ```php
  test.sp(55) : error 147: new-style declarations are required
  ```

  * 原因: 程式並不是新語法
  * 解決方式: 回報給作者
</details>

* <details><summary>錯誤3: <b>expected token: ";"</b></summary>

  ```php
  test.sp(42) : error 001: expected token: ";", but found "return"
  ```

  * 原因: 程式行尾端沒有;符號
  * 解決方式: 回報給作者
</details>

* <details><summary>錯誤4: <b>undefined symbol XXXXXXX</b></summary>

  ```php
  test.sp(57) : error 017: undefined symbol "CPrintToChat"
  ```

  * 原因: 不存在此涵式或變數
  * 解決方式: 回報給作者
</details>

- - - -
## 我能否修改源碼
* Sourcemod不限制任何人修改，歡迎任何人編輯並發布自己的作品，讓遊戲玩法更豐富多元
* 拿到網路上或別人的源碼，如果你有想法或者單純漢化或者修正錯誤可以自己修改
* 請記得標記原開發者，擅自修改作者為自己讓人誤會是完全缺德的行為
* 一但你修改源碼之後，如果插件有錯誤想要回報，**大部分的原插件作者完全不會鳥你**
* 遇到技術或程式上的問題，可以請教論壇上的大佬們，我通常建議把你修改後的源碼發給對方過目

- - - -
## 哪裡能詢問插件問題
* [AlliedModders](https://forums.alliedmods.net/index.php)，建議註冊一個用戶
* 英文網站，只能全英文交流，只會中文建議找會說中文的大佬尋求幫助
* 我們要詢問的是Sourcemod，而非AMX Mod X，小心別PO錯版
  * [插件需求與想法](https://forums.alliedmods.net/forumdisplay.php?f=60): 貼出你的新點子或需求，
  * [插件綜合討論](https://forums.alliedmods.net/forumdisplay.php?f=58): 一般討論伺服器或插件現況，
  * [插件源碼問題](https://forums.alliedmods.net/forumdisplay.php?f=107): 有源碼程式上的問題需要幫助

* 如果比較害羞或是想找某一位大佬幫忙，到個人檔案私訊對方
  <br/>![未命名](https://user-images.githubusercontent.com/12229810/202846043-6babc7e2-1225-4f7a-a177-f728efd137f0.jpg)
* <details><summary><b>潛規則</b></summary>
    
  如果提出願意付費，能吸引很多大佬前來幫忙
  </details>

- - - -
## 插件可以有中文嗎
* Sourcemod是以英文為主，一切編碼讀取與執行命令都是英文，不能改成中文是很正常的
  * 譬如插件名稱改成中文、指令說明與數值改成中文、執行文件寫中文說明，都是不行的，更別提韓文、日文、德文，誰叫Sourcemod是HL2 mod，世界霸權美國，去你馬英文。
  * 我碰過一個玩家實際案例，伺服器讀取太多中文文字導致伺服器崩潰，所以想吃鱉可以試試看。
* 只要是輸出文字給玩家看訊息，基本上可以寫中文，有中文需求請詢問插件作者
  * 譬如翻譯文件、作者利用第三方輔助文件等等，可以改成多國語言

- - - -
## 為什麼會有亂碼
* <details><summary>提問1: 文件內是亂碼</summary>

  ![image](https://user-images.githubusercontent.com/12229810/202860854-c243aace-3d3f-4dc1-b545-8afd57f1d18d.png)

  * 原因: 編碼不對
  * 解決方式: 文件的編碼請確認為UTF-8，可以用筆記本另存新檔的時候設定
  <br/>![未命名](https://user-images.githubusercontent.com/12229810/202859995-2f04eee9-532e-4a5a-bacf-7f038ac79415.jpg)
</details>

* <details><summary>提問2: 文件顯示正常，但遊戲不行</summary>

  文件內的中文顯示正常，明明編譯也過，都依照說明書安裝，插件也沒有報錯，為什麼遊戲中會出現亂碼？
  <br/>![image](https://user-images.githubusercontent.com/12229810/202858744-0d380968-9c24-4008-9592-0ed980488144.png)
  <br/>![image](https://user-images.githubusercontent.com/12229810/202858784-297294d9-ff71-46e3-944d-873da2efa86b.png)

  * 原因: 編碼不對
  * 解決方式: 文件的編碼請確認為UTF-8，可以用筆記本另存新檔的時候設定
  <br/>![未命名](https://user-images.githubusercontent.com/12229810/202859995-2f04eee9-532e-4a5a-bacf-7f038ac79415.jpg)
</details>

* <details><summary>提問3: 看不到簡體中文</summary>

  情況一：我去中國大陸的伺服器，能看到英文與繁體字，但顯示簡體的時候會是亂碼
  <br/>情況二：從大陸網站下載插件，打開源碼文件能看到英文與繁體字，但顯示簡體的時候會是亂碼

  * 原因: 你的電腦系統不支援簡體中文，無法顯示簡體字
  * 解決方式: 電腦系統添加語言，選擇簡體中文
</details>







