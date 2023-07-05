# 插件問題總攬
> 2023/1/5 更新 by [Harry](https://steamcommunity.com/profiles/76561198026784913)
- [總攬](#問題總攬)
    - [前言準備](#前言準備)
    - [為什麼插件沒有運作](#為什麼插件沒有運作)
    - [常見的插件錯誤訊息](#常見的插件錯誤訊息)
    - [常見的編譯錯誤訊息](#常見的編譯錯誤訊息)
    - [我能否修改源碼](#我能否修改源碼)
    - [哪裡能詢問插件問題](#哪裡能詢問插件問題)
    - [插件可以有中文嗎](#插件可以有中文嗎)
    - [為什麼會有亂碼](#為什麼會有亂碼)
    - [插件不拿源碼會怎樣](#插件不拿源碼會怎樣)

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
  <br/>✔ 有安裝插件的最新版本
  <br/>✔ 有安裝說明書指示的必要檔案
  <br/>✔ 有依照說明書指示的重要步驟
  <br/>✔ 有安裝插件輔助的文件
  <br/>✔ Sourcemod版本符合插件的要求

2. 到伺服器後台上，輸入```sm plugins info xxxxxx```
    - xxxxxx為插件的檔案名稱
      ```php
      ] sm plugins info test
      Filename: test.smx
      Title: [L4D & L4D2] Test
      Author: HarryPotter
      Version: 1.0
      Error: Error detected in plugin startup (see error logs)
      ```
   - 檢查Author是否跟原作者一樣，**否則插件肯定不是他寫的**
   - 檢查Version是否跟作者貼文上所寫的版本一樣
   - 檢查是否有Error

    * <details><summary>為什麼顯示: <b>XXX.smx is not loaded.</b></summary>

      ![image](https://user-images.githubusercontent.com/12229810/210702001-0b65c878-8a45-48b9-978a-6047026f6c94.png)

      * 原因: 你沒有把.smx檔案放入正確的路徑
      * 解決方式: 請確認.smx檔案位於 addons\sourcemod\plugins 資料夾底下
    </details>

3. 看見Error代表此插件無法成功載入，請到sourcemod/logs資料夾查看errors_開頭的文件，閱讀錯誤原因並嘗試解決
   <br/>![Q$8Z SZT(IE M_M@_%_ Z3I](https://user-images.githubusercontent.com/12229810/206925606-cd9c3ebe-eae5-492e-b12c-76b41cd0c8df.png)
   - 若看不懂錯誤原因請洽作者，將錯誤原文發給開發者，無須一堆廢話
   - 🟥要是你有修改源碼請誠實招來，當原作者發現錯誤的行數不相符會放生不想鳥你🟥
      <details><summary>錯誤原文範例 (點我展開)</summary>

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
> * 如果源碼有被你修改導致編譯有錯誤，原作者不會鳥你，只能自己研究或請教論壇上的大佬們

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

  * 原因: 程式並不是新語法，Sourcemod自從1.7版本之後語法大改，在那以前的舊語法如果重新編譯可能會有問題，通常你只要不是拿到十年前的源始碼，不會有這種錯誤
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
* 插件有問題請直接找到原作者對應的貼文底下留言，不要找不相關的人事物
* 如果比較害羞或是想找某一位大佬幫忙，到個人檔案私訊對方
  <br/>![image](https://user-images.githubusercontent.com/12229810/202846043-6babc7e2-1225-4f7a-a177-f728efd137f0.jpg)

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
  <br/>![image](https://user-images.githubusercontent.com/12229810/202859995-2f04eee9-532e-4a5a-bacf-7f038ac79415.jpg)
</details>

* <details><summary>提問2: 文件顯示正常，但遊戲不行</summary>

  文件內的中文顯示正常，明明編譯也過，都依照說明書安裝，插件也沒有報錯，為什麼遊戲中會出現亂碼？
  <br/>![image](https://user-images.githubusercontent.com/12229810/202858744-0d380968-9c24-4008-9592-0ed980488144.png)
  <br/>![image](https://user-images.githubusercontent.com/12229810/202858784-297294d9-ff71-46e3-944d-873da2efa86b.png)

  * 原因: 編碼不對
  * 解決方式: 文件的編碼請確認為UTF-8，可以用筆記本另存新檔的時候設定
  <br/>![image](https://user-images.githubusercontent.com/12229810/202859995-2f04eee9-532e-4a5a-bacf-7f038ac79415.jpg)
</details>

* <details><summary>提問3: 看不到簡體中文</summary>

  情況一：我去中國大陸的伺服器，能看到英文與繁體字，但顯示簡體的時候會是亂碼
  <br/>情況二：從大陸網站下載插件，打開源碼文件能看到英文與繁體字，但顯示簡體的時候會是亂碼

  * 原因: 你的電腦系統不支援簡體中文，無法顯示簡體字
  * 解決方式: 電腦系統添加語言，選擇簡體中文
</details>

- - - -
## 插件不拿源碼會怎樣
* 源碼是.sp檔案，插件是.smx檔案，如果是我，都一定會拿源碼然後自己編譯成插件，所以我擁有的每個插件都有源碼
  * 因為每個人安裝的sm(Sourcemod的簡稱)版本不同，自己拿到電腦上編譯最安全也符合你所安裝的Sourcemod版本
  * 只要源碼編譯不給過代表此插件肯定無法使用，如果懂源碼的人會自己修改，不懂源碼的人最好請人修改

* 回到問題，**直接拿插件安裝不拿源碼會怎麼樣?**
  * 答案: 不會怎麼樣，但是淺在風險與問題很多

  * <details><summary> 狀況一: 無法成功運作，最新版本不支援</summary>

    * 十年前寫好的插件也許十年前能使用，但是放到現在版本可能已經無法適用或者被淘汰
    * 這時候怎麼辦? 當然是去看源碼並修改，所以保留源碼是很重要的
  </details>

  * <details><summary> 狀況二: 伺服器卡頓，功能不完整</summary>

    * 十年前Sourcemod程式語法還不完善，很多作者當時用粗暴並且暴力的方式達成很多功能
    * sm從1.7之後語法大改，sm1.11之後新增Dhooks、Voicehook、GeoIPCity各種功能並優化，大幅改善伺服器崩潰與卡頓的機率
    * 如果有保存源碼，會請人大幅改善源碼
  </details>

  * <details><summary> 狀況三: 插件有問題或需求</summary>

    * 當你突然發現插件有問題、或者想新增功能，你要請教別人，卻沒有源碼，這時候別人會叫你去吃屎
    * 沒源碼的人請別人重新寫插件，費時又費力還可能收很貴的報酬費(像我就是)，有源碼的人就好辦事
    * 網路上當然有反編譯出源碼的或者叫AI寫程式，但是反編譯的源碼比原本的源碼難看又難寫一百倍，只要別人看到反編譯的源碼也是叫你去吃屎
    * 退一萬步來說，只有看到源碼才知道插件是否有任何問題要改善
  </details>

  * <details><summary> 狀況四: 自由漢化，更改指令彈性高</summary>

    * 當你想要看很多英文訊息，想要漢化或修改，其實許多作者也懶得幫忙寫中文翻譯或者不可能就為了你一個人幫忙改訊息
    * 但是有源碼就方便多，自己想改捨就改捨，不要刻意亂改源碼都沒問題
  </details>

  * <details><summary> 狀況五: 插件內容偷塞政治或者炸服程式</summary>

    * 假設插件內偷塞有64天安門或者蔡英文下台等等訊息，然後沒有源碼你也不知道，被陷害莫名被Ban也找不出原因，傻傻的
    * 我看過有個案例，有服主拿到未知的插件安裝之後卻一直伺服器崩潰，還狂燒電腦100%CPU，原因是插件內有炸服程式碼
    * 只要不公開源碼，作者想塞任何東西在程式碼都是可以
  </details>

  * <details><summary> 狀況六: 拿到插件，卻不知道作者</summary>

    * 假如插件有bug想回報，這時候你發現不知道要找誰，那個提供插件的人可能不是作者只是盜版
    * 插件有問題理應先回報給作者知道，只有作者最能知道怎麼修復並快速解決，找不到作者或者作者退休不再維護才需要找其他大佬
  </details>

* 結論：**不要拿來路不明的插件，不要拿沒有源碼的插件，拿到源碼要知道作者是誰。如插件有問題，請攜帶源碼請教大佬**

  * <details><summary> 狀況七: 作者提供插件不提供源碼</summary>

    * 根據Sourcemod的License授權公約，有人提供.smx就必須要提供.sp檔案，以上是官腔話，我相信沒人關切License授權公約是捨
    * 想盡辦法要拿到源碼避免後續問題，如果願意付錢那很好，寧願拿到有源碼的插件也不要被坑
    * 但是作者百般不願意提供源碼你也沒轍，如果是我就不拿插件了
  </details>








