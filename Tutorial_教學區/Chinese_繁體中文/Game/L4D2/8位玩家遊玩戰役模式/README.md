# 安裝總攬
> 2025/1/23 更新 by [Harry](https://steamcommunity.com/profiles/76561198026784913)
- [安裝總攬](#安裝總攬)
  - [前言](#前言)
  - [準備檔案](#準備檔案)
  - [必要檔案](#必要檔案)
  - [額外檔案](#額外檔案)
  - [娛樂檔案](#娛樂檔案)
  - [其他](#其他)
	
- - - -
## 前言
> 本篇教學完成之後，你的伺服器可以多達8位或以上的玩家加入戰役模式大亂鬥
<br/>![l4dmultislots_1](https://github.com/fbef0102/Game-Private_Plugin/assets/12229810/796efe51-2fac-43f2-9899-fef09b52328d)
<br/>![l4dmultislots_2](https://user-images.githubusercontent.com/12229810/206860045-582a79ea-8453-45a7-b73a-4ecfd051be6b.jpg)
* [English](/Tutorial_教學區/English/Game/L4D2/8%2B_Survivors_In_Coop/)
* 本篇教學適用於L4D1和L4D2
* 專屬伺服器可以開到8位以上的玩家加入戰役模式
* 區域伺服器只能到8位玩家，無法再增加
   - 因為Sourcemod本來就不支援區域伺服器，請自行斟酌
* 此處教學包含修正5+以上玩家會發生的問題

- - - -
## 準備檔案
* [安裝伺服器與Sourcemod + Metamod](/Tutorial_%E6%95%99%E5%AD%B8%E5%8D%80/Chinese_%E7%B9%81%E9%AB%94%E4%B8%AD%E6%96%87/Server/%E5%AE%89%E8%A3%9D%E4%BC%BA%E6%9C%8D%E5%99%A8%E8%88%87%E6%8F%92%E4%BB%B6/README.md#%E9%81%B8%E6%93%87%E5%8D%80%E5%9F%9F%E4%BC%BA%E6%9C%8D%E5%99%A8%E6%88%96%E5%B0%88%E5%B1%AC%E4%BC%BA%E6%9C%8D%E5%99%A8)
* [Stripper:Source](/Tutorial_%E6%95%99%E5%AD%B8%E5%8D%80/Chinese_%E7%B9%81%E9%AB%94%E4%B8%AD%E6%96%87/Server/%E5%AE%89%E8%A3%9D%E5%85%B6%E4%BB%96%E6%AA%94%E6%A1%88%E6%95%99%E5%AD%B8#%E5%AE%89%E8%A3%9DStripper)
* [Left 4 DHooks Direct](https://forums.alliedmods.net/showthread.php?t=321696)
* [8 Slots Lobby Mod](https://github.com/fbef0102/Game-Private_Plugin/releases/tag/file): 下載安裝8_slots_lobby.vpk可讓大廳有八個位子 <br/>
   - 有兩位以上玩家在大廳才能開始遊戲
   - 安裝8 Slots Lobby Mod 會導致你在遊戲中無法使用 ESC->閒置功能，可安裝[AFK and Join Team Commands Improved](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4d_afk_commands)插件使用命令閒置
  
- - - -
## 必要檔案
* [l4dtoolz EXTENSION](/Tutorial_教學區/Chinese_繁體中文/Server/安裝其他檔案教學#安裝l4dtoolz): 解鎖伺服器人數限制
   - 如果是專屬伺服器，在 cfg/server.cfg　寫以下指令 (🟥如果檔案不存在，可自己創建🟥)
   - 如果是區域伺服器，在 cfg/listenserver.cfg　寫以下指令 (🟥如果檔案不存在，可自己創建🟥)
    ```php
    sv_maxplayers 8 // 允許八位真人玩家可以加入伺服器 (數值可以調整，介於4~31之間)
    sv_visiblemaxplayers 8 // 伺服器顯示的空位人數 (建議數值跟_maxplayers一樣)
    sv_force_unreserved 0 // 1=強迫伺服器移除動態大廳，強制 _allow_lobby_connect_only 為0.
    sv_allow_lobby_connect_only 0 // 0=可以從遊戲大廳或透過控制台與伺服器列表直連IP加入伺服器 (1=當有動態大廳時，只能從遊戲大廳加入伺服器)
    sm_cvar precache_all_survivors 1 // 1=預先載入所有倖存者的角色模組
    sm_cvar sv_consistency 0 // 0=關閉遊戲檔案一致性的檢查，避免玩家使用太多的模組進不來 (1=開啟檔案遊戲一致性的檢查)
    ```
   - 可參考我的[Server.cfg](https://github.com/fbef0102/Sourcemod-Server/blob/main/L4D2/Windows%20Server%20Files/left4dead2/cfg/server.cfg)

* [Remove Lobby Reservation (哈利版本)](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4d_unreservelobby): 移除伺服器的大廳人數限制，簡單講就是解鎖伺服器，讓第九位以上的玩家透過IP或伺服器瀏覽加入伺服器
    - 🟥只適用於專屬伺服器🟥

* [l4dmultislots (哈利版本)](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4dmultislots): 生成bot給第五位玩家取代並加入倖存者陣營
   - 如何回合開始就有8個Bot?
      - 安裝插件之後運行伺服器，等待插件自己生成 cfg/sourcemod/l4dmultislots.cfg 文件
        * 這個文件會自己創建，如果沒有創建表示你安裝l4dmultislots失敗
      - cfg/sourcemod/l4dmultislots.cfg 設置
		```php
		l4d_multislots_min_survivors "8"
		l4d_multislots_spawn_survivors_roundstart "1" 
		```
      
* [Defib_Fix](https://forums.alliedmods.net/showthread.php?t=315483): 修正5+多人遊戲裡，電擊器無法復活屍體或復活到活著的玩家

* [Survivor Identity Fix for 5+ Survivors (Shadowysn版本)](https://forums.alliedmods.net/showpost.php?p=2718792&postcount=36)
    - 修正第五人以上玩家離線或閒置或加入遊戲的時候，Bot模組角色被更換
    - 修正第五人以上玩家死亡的時候，屍體在別的角色身上

* [Survivor_AFK_Fix](https://forums.alliedmods.net/showthread.php?t=326742): 修正5+多人遊戲裡，使用閒置的時候，閒置錯成別的相同模組角色的bot，如果相同模組角色已經有真人玩家取代或閒置，則會變成完全旁觀者

* [l4dafkfix_deadbot](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4dafkfix_deadbot): 修正5+多人遊戲裡，當真人玩家閒置的時候如果他的Bot死亡，真人玩家不會取代死亡Bot而是變成完全旁觀者

* [lfd_both_fixUpgradePack (哈利版本)](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/lfd_both_fixUpgradePack): 修正高爆彈與燃燒彈無法被重複角色模組的倖存者撿起來

* [Better_Charger_Collision+patch](https://forums.alliedmods.net/showthread.php?t=315482): Charger無法衝撞第五位以上的玩家

* [witch_target_patch](https://github.com/LuxLuma/Left-4-fix/tree/master/left%204%20fix/witch/witch_target_patch): Witch 追錯第五位以上的玩家目標
	
* [Survivor Set Flow Fix](https://forums.alliedmods.net/showthread.php?t=339155): 修復不同模組的倖存者在不同的地圖啟動地圖上的機關會出現問題
    - 譬如使用二代角色模組在一代地圖上與對講機溝通呼叫最後救援，但是對講機還是一直說話

* [l4d2_fix_changelevel](https://github.com/Target5150/MoYu_Server_Stupid_Plugins/tree/master/The%20Last%20Stand/l4d2_fix_changelevel): 解決直接用ForceChangeLevel指令換圖會遇到的問題，導演系統不知道換圖了

* [l4d2_transition_info_fix](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4d2_transition_info_fix): 修復中途換地圖的時候(譬如使用Changelevel指令)，會遺留上次的過關保存設定，導致滅團後倖存者被傳送到安全室之外或死亡

* [InputKill Kick Prevention](https://forums.alliedmods.net/showthread.php?t=332860): (L4D2) 防止玩家因為一二代地圖NPC導致被踢
    * 被踢出遊戲的訊息```Kicked by Console : CBaseEntity::InputKill()```
  
* [Command and ConVar - Buffer Overflow Fixer](https://forums.alliedmods.net/showthread.php?t=309656): 修復插件讀不到cfg文件內的指令與命令

* [l4d2_maptankfix](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4d2_maptankfix): 防止地圖自帶的機關Tank因為人數不夠問題​​無法刷新而造成卡關

* [l4d2_rescue_vehicle_multi](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4d2_rescue_vehicle_multi): 修正第五位以上的玩家無法上救援載具，統計顯示其死亡，無法列入對抗分數

* (對抗模式) [Left4Fix](https://forums.alliedmods.net/showthread.php?t=219774): 提供以下三種功能
    * 每一位玩家都算距離分數
    * 雙方分數打平時，依照傷害量最多的隊伍多加分數
    * 靈魂特感可以按E傳送到每位倖存者身上

- - - -
## 額外檔案
> __Note__ 此處額外檔案可以不用裝，自行決定
* [AFK and Join Team Commands Improved Version](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4d_afk_commands): 提供多種命令轉換隊伍陣營 (譬如: !afk, !survivors, !infected), 但不可濫用.

* <s>[Dialogue Criteria Fix](https://forums.alliedmods.net/showthread.php?t=335875): 八位玩家能有更多的角色語音互動</s>
    - 🟥會導致伺服器崩潰，等待作者修復🟥

* <s>[Real Survivor Mourn Fix](https://forums.alliedmods.net/showthread.php?t=335903): 一二代倖存者看見屍體能有更多的角色語音互動</s>
    - 🟥會導致伺服器崩潰，等待作者修復🟥

* [Scene Adjustments/Fixes](https://forums.alliedmods.net/showthread.php?t=321127)
    - 🟥只適用於專屬伺服器🟥
    - 修正五人以上友傷沒有語音
    - 修正玩家被hunter撲/被Charger撞沒有語音
    - 修正一代角色看見隊友屍體沒有反應
   
* [Survivor Clones Hunter Pounced Warning Fix](https://forums.alliedmods.net/showthread.php?t=248776): 角色看到與自己相同模組的角色被Hunter撲倒，有角色語音互動
    - 🟥只適用於專屬伺服器🟥

* [Team Kill Reactions Vocalize Fix](https://forums.alliedmods.net/showthread.php?t=259791): 玩家TK導致隊友倒地或死亡，能有更多的角色語音互動
    - 🟥只適用於專屬伺服器🟥
   
* [Save Weapon Improved (哈利版本)](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4d2_ty_saveweapons): 戰役模式之下儲存所有玩家身上的武器與血量，保存過關到下一關

* [[L4D2]Character_manager](https://forums.alliedmods.net/showthread.php?t=309601): 一二代倖存者能同時存在
    - 安裝此插件會導致在The Passing地圖或含有一代NPC的三方圖當中，一代角色的玩家會被傳送到地圖之外或死亡，想要修正此問題請安裝<b>"Stripper_passingfix.7z"</b>(位於此插件貼文附檔區)
      - 解壓縮檔案到addons\stripper\maps\ 相同資料夾
    - 與必要檔案的 **Survivor Identity Fix for 5+ Survivors** 會有衝突，請先移除

* [AutoTakeOver 5+ Survivors Improved (哈利版本)](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/_AutoTakeOver): 當真人玩家死亡時，自動取代另一個有空閒的Bot繼續遊玩倖存者

* [l4d_h_csm (哈利版本)](/L4D_插件/Survivor_人類/l4d_h_csm): 允許玩家在遊戲中更換一二代角色(外觀, 手 和 語音) 或是模組(只有外觀)
    - 此為CSM插件重製版，輸入!csm打開角色選擇介面

* [Survivor Rescue Closet](https://forums.alliedmods.net/showthread.php?t=340659): 救援房間可以復活第五位以上的倖存者

* [8 Player Modified Talker](https://steamcommunity.com/sharedfiles/filedetails/?id=2462741269): 一二代角色能有更多的語音互動

* [[L4D2] Force L4D2 survivor arms, names, icons](https://forums.alliedmods.net/showthread.php?t=345947): 修復每個人都能看到一二代角色的名子與頭像
    - 不一定對每個人都有用

- - - -
## 娛樂檔案
> __Note__ 適合多人伺服器的娛樂插件
* [Survivor Respawn (哈利版本)](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/Survivor_Respawn): 當玩家死亡時，過一段時間自動復活

* [Infected Bots Control Improved](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4dinfectedbots): 生成多特感模式，隨著玩家人數越多，特感數量越多、Tank血量越厚

* [Lockdown System Improved](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/lockdown_system_l4d): 終點安全室必須等待一段時間才會開門，這期間必須團隊合作抵抗屍潮與Tank

* [Adrenaline & Pills Powerups Improved](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4d2_powerups_rush): 服用腎上腺素或藥丸，提升裝彈速度、開槍速度、近戰砍速、動畫起身速度

* [L4D2 gifts (哈利版本)](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4d2_gifts): 當特感被殺死之後掉落禮物，倖存者碰到禮物可得到強力武器與彈藥

* [deathcheck (哈利版本)](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/cge_l4d2_deathcheck): 所有玩家包括AI Bot死亡才會回合結束

* [CSO SupplyBox](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4d2_supply_woodbox): 地圖上隨機掉落補給箱，支援倖存者得到強力武器

* [Back 4 Blood Item hint Improved](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4d2_item_hint): 使用角色語音"看"，可讓物品標記光圈，亦可以標記特感或地點

* [Witch target override Improved](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/witch_target_override) : Witch會自動走向倖存者 + Witch殺死倖存者之後轉移攻擊目標繼續

* [Death Soul (哈利版本)](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4d_death_soul): 人類死亡，靈魂升天

* [Graves (哈利版本)](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4d_graves): 為人類屍體造一個墓碑以做紀念

* [Rescue vehicle leave timer](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4d_rescue_vehicle_leave_timer): 最終關卡救援來臨時，絕命逃跑倒數計時，時間一到城市將會遭受核彈爆裂

* [L4D2-Unlimited-Map](https://github.com/fbef0102/L4D2-Unlimited-Map): 終極地圖，打造迷宮與探索未知的世界

* [L4D2 Survivors And Infected Shop Improved](/L4D_插件/Fun_娛樂/L4D2_Buy_Store): 人類與特感的購物商城 (附有特殊商品與資料庫)

* [5+ Survivors More Supply](/L4D_插件/Survivor_人類/l4d_more_supply): 隨著玩家人數越多，地圖上的資源物品可以重複拿很多次

* [l4d_infected_limit_control](/L4D_插件/Common_Infected_普通感染者/l4d_infected_limit_control): 隨著玩家人數越多，殭屍/屍潮 數量越來越多

* [l4d_healing_field](/L4D_插件/Fun_娛樂/l4d_healing_field): 當Tank死亡時產生一個治療光圈，人類可以獲得治療回復HP

- - - -
## 其他
* [問題集合區 Questions](/Questions_問題區)

