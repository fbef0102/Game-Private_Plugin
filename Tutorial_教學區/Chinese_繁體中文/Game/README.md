# 問題總攬
> 2022/11/19 更新 by [Harry](https://steamcommunity.com/profiles/76561198026784913)
- [總攬](#問題總攬)
    - [如何開啟遊戲控制台](#如何開啟遊戲控制台)
    - [打開遊戲主目錄的資料夾](#打開遊戲主目錄的資料夾)
	- [設定自己的cfg](#設定自己的cfg)
    - [設定啟動選項](#設定啟動選項)
    - [驗證遊戲檔案的完整性](#驗證遊戲檔案的完整性)

- - - -
## 如何開啟遊戲控制台
- 開啟遊戲，選項－＞鍵盤／滑鼠－＞允許使用開發人員命令列－＞已啟用
   - 各個遊戲選項設定有所不同
   <br/><img src="https://i.imgur.com/g0fue7B.png" alt="g0fue7B.png" width="1000" height = "90">
- 鍵盤上左上角按下 ~ 符號開啟控制台
   <br/>![image](https://user-images.githubusercontent.com/12229810/202613546-5d3d2a5f-8ff2-4832-b0a5-82c5e3dd7b47.png)

> __Note__ 與伺服器後台為不同的概念<br/>

- - - -
## 打開遊戲主目錄的資料夾
* 依照圖片指示即可知道遊戲本體的主目錄所在位置
<br/>![1](https://user-images.githubusercontent.com/12229810/202615257-6e294ed6-e5c3-41c5-bcd7-528e3ae85c9a.jpg)

- - - -
## 設定自己的cfg
* 官方有很多指令提供玩家使用，但是你不想要每次打開遊戲重新在遊戲控制台輸入一遍，因此把指令寫入cfg是很重要的
	* [L4D Cvars](https://developer.valvesoftware.com/wiki/List_of_L4D_Cvars)
	* [L4D2 Cvars](https://developer.valvesoftware.com/wiki/List_of_L4D2_Cvars)
	* [CSS Cvars](https://developer.valvesoftware.com/wiki/List_of_CS:S_Cvars)
	* [CSGO Cvars](https://developer.valvesoftware.com/wiki/List_of_CS:GO_Cvars)
	* 其他遊戲自行搜索

* 在遊戲主目錄找到cfg資料夾，其中autoxec.cfg是每次啟動遊戲時必定執行的文件
<br/>![未命名](https://user-images.githubusercontent.com/12229810/202833619-c676cf23-a32b-49e9-abf4-d26d9cb94999.jpg)
    * 遊戲啟動時自動執行裡面所有的指令
    * <details><summary>我的autoxec.cfg範例 (點我展開)</summary>

        ```php
        c_thirdpersonshoulder "1"
        c_thirdpersonshoulderaimdist "720"
        c_thirdpersonshoulderdist "41"
        c_thirdpersonshoulderheight "0"
        c_thirdpersonshoulderoffset "20"
        cam_collision "1"
        cam_ideallag "4"
        cl_viewmodelfovsurvivor "65"
        net_graph "4"
        net_graphheight 0
        mat_monitorgamma_tv_enabled 0
        mat_monitorgamma 1.6
        crosshair 1
        voice_loopback 1
        cl_glow_ghost_infected_g 1; cl_glow_ghost_infected_r 1
        bind "[" "say_team /boss"
        bind "]" "say_team /cur"
        bind "1" "+left"
        bind "2" "+right"
        bind "kp_end" "slot1"
        bind "kp_downarrow" "slot2"
        bind "kp_pgdn" "slot3"
        bind "kp_leftarrow" "slot4"
        bind "kp_5" "slot5"
        bind "kp_rightarrow" "slot6"
        bind "kp_home" "slot7"
        bind "kp_uparrow" "slot8"
        bind "kp_pgup" "slot9"
        bind "kp_ins" "slot0"
        bind "/" "say_team /admin"
        bind "MOUSE3" "+zoom;firstperson"
        bind "F9" "record last_play"
        bind "F10" "stop"
        bind "v" "+mouse_menu v"
        bind "\" "say !forcepause"
        bind TAB "+score"
        alias "lerp_0" "rate 100000;cl_cmdrate 101;cl_updaterate 101;cl_interp 0.0;cl_interp_ratio -1;alias lerp_change lerp_16.7;echo Lerp set to 0 (rate 100000, cl_cmdrate 101, cl_updaterate 101, cl_interp 0.0, cl_interp_ratio -1).";
        alias "lerp_16.7" "rate 100000;cl_cmdrate 101;cl_updaterate 101;cl_interp 0.0167;cl_interp_ratio -1;alias lerp_change lerp_30.0;echo Lerp set to 16.7 (rate 100000, cl_cmdrate 101, cl_updaterate 101, cl_interp 0.0167, cl_interp_ratio -1).";
        alias "lerp_30.0" "rate 100000;cl_cmdrate 101;cl_updaterate 101;cl_interp 0.03;cl_interp_ratio 0;alias lerp_change lerp_50.1;echo Lerp set to 30.0 (rate 100000, cl_cmdrate 101, cl_updaterate 101, cl_interp 0.03, cl_interp_ratio 0).";
        alias "lerp_50.1" "rate 100000;cl_cmdrate 101;cl_updaterate 101;cl_interp 0.0501;cl_interp_ratio -1;alias lerp_change lerp_66.7;echo Lerp set to 50.1 (rate 100000, cl_cmdrate 101, cl_updaterate 101, cl_interp 0.0501, cl_interp_ratio -1).";
        alias "lerp_66.7" "rate 100000;cl_cmdrate 101;cl_updaterate 101;cl_interp 0.0667;cl_interp_ratio -1;alias lerp_change lerp_0;echo Lerp set to 66.7 (rate 100000, cl_cmdrate 101, cl_updaterate 101, cl_interp 0.0667, cl_interp_ratio -1).";
        sensitivity "11.8"
        cl_crosshair_alpha 255
        bind mouse1 "+attack"
        unbind "ALT"
        unbind "capslock"


        cl_predictweapons 1
        cl_lagcompensation 1 
        gameinstructor_enable 1
        sv_quota_stringcmdspersecond 9999
        ```
    </details>

* 可以自己創建新的文件
    * 在cfg資料夾建立一個文件，改名為```XXX.cfg``` (XXX 自取)
        * 請注意副檔名為.cfg
        <br/>![未命名](https://user-images.githubusercontent.com/12229810/202833839-b99948d5-cf05-4255-a050-0c12e46018fe.jpg)
    * 將想要執行的指令寫入剛創立的文件當中，啟動遊戲之後在控制台輸入```exec xxx.cfg```即可
    <br/>![image](https://user-images.githubusercontent.com/12229810/202833928-10f9cd11-1917-473c-ae66-5f75044477a8.png)
- - - -
## 設定啟動選項
* 依照圖片指示即可看到啟動選項
<br/>![未命名](https://user-images.githubusercontent.com/12229810/202832420-0408e769-4c30-4eb1-8e7a-be4ad97db4a3.jpg)

* 常見啟動參數介紹
    * ```-lv``` - 低暴力模式，遊戲看不到噴血、屍體、斷手斷腳等畫面。遊戲會比較順暢
    * ```-novid``` 或 ```-novideo``` - 直接跳過遊戲開頭動畫
    * ```-w xxx``` - 設定遊戲解析度的寬，xxx為數字
    * ```-h xxx``` - 設定遊戲解析度的高，xxx為數字
    * ```-fullscreen``` - 強制遊戲以全螢幕模式啟動
    * ```-windowed``` 或 ```-sw``` - 強制引擎以視窗模式啟動
    * ```-dev``` - 啟用開發者模式，通常是給開發商除錯用的
    * 想知道更多請上官網: [Steam 客服 設定遊戲啟動選項](https://help.steampowered.com/zh-tw/faqs/view/7d01-d2dd-d75e-2955)

- - - -
## 驗證遊戲檔案的完整性
* 為什麼要驗證? 何時需要驗證?
    * 模組放太多導致遊戲檔案受損
    * 你覺得遊戲本體有檔案損毀需要修補
    * 遊戲檔案被修改過，你想復原
    * 感覺遊戲比以前更容易出現問題

* 如何驗證
    * 依照圖片指示即可驗證，Steam平台會自動偵測所有遊戲檔案，如果有與官方不同會復原
    <br/>![未命名](https://user-images.githubusercontent.com/12229810/202832213-6b357823-bb9c-46a7-813e-acf12ef27edf.jpg)