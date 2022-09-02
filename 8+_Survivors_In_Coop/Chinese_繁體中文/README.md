# 安裝總攬
> 2022/9/2 更新 by [Harry](https://steamcommunity.com/profiles/76561198026784913)
- [總攬](#安裝總攬)
    - [前言](#前言)
    - [準備檔案](#準備檔案)
    - [必要檔案](#必要檔案)
    - [額外檔案](#額外檔案)
    - [娛樂檔案](#娛樂檔案)
    - [其他](#其他)
- - - -
## 前言
* [English](../English)
* [AlliedModders 論壇的貼文](https://forums.alliedmods.net/showpost.php?p=2750588&postcount=4): 同樣都是我本人撰寫
* 專屬伺服器可以開到8位以上的玩家加入戰役模式
* 區域伺服器只能到8位玩家，無法再增加
   - 開區域房容易卡頓和崩潰，因為Sourcemod本來就不支援區域伺服器，請自行斟酌
- - - -
## 準備檔案
1. [Sourcemod](https://www.sourcemod.net/downloads.php?branch=stable)
2. [Metamod](https://www.metamodsource.net/downloads.php?branch=stable)
3. [Stripper:Source](http://www.bailopan.net/stripper/snapshots/1.2/)
4. [[L4D & L4D2] Left 4 DHooks Direct](https://forums.alliedmods.net/showthread.php?t=321696)
5. [8 Slots Lobby Mod](https://steamcommunity.com/sharedfiles/filedetails/?id=546656726): 可讓大廳有八個位子 <br/>
   - 🟥只適用於區域伺服器🟥
   - 安裝8 Slots Lobby Mod 會導致你在遊戲中無法使用 ESC->閒置功能，可安裝[AFK and Join Team Commands Improved](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4d_afk_commands)插件使用命令閒置

## 必要檔案
1. l4dtoolz EXTENSION: 解鎖伺服器人數限制
   - 如果你是專屬伺服器，在 cfg/server.cfg　寫在以下指令 (🟥如果檔案不存在，可自己創建🟥)
   - 如果你是區域伺服器，在 cfg/listenserver.cfg　寫在以下指令 (🟥如果檔案不存在，可自己創建🟥)
    ```php
    sv_maxplayers 8 // 8 players can join the server, set number whatever you like (range 4 to 32)
    sv_visiblemaxplayers 8 //number is same as above
    sv_force_unreserved 1 //your server will stay unreserved and allow players to connect using connect command, this command sets sv_allow_lobby_connect_only 0.
    sv_allow_lobby_connect_only 0 // 1=Only join server from lobby.
    sm_cvar precache_all_survivors 1 // Precache/Load all models of survivors to prevent crash
    sm_cvar sv_consistency 0 // the server enforces file consistency (1: Enable, 0: Disable) 
    ```
   - 可參考我的[Server.cfg](https://github.com/fbef0102/L4D2-Server4Dead/blob/main/Windows%20Server%20Files/left4dead2/cfg/server.cfg)

2. [l4dmultislots (哈利版本)](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4dmultislots): 生成bot給第五位玩家取代並加入倖存者陣營

3. [Defib_Fix](https://forums.alliedmods.net/showthread.php?p=2647018): 修正5+多人遊戲裡，電擊器無法復活屍體或復活到活著的玩家

4. <s>[Wrong Voice Owner Fix](https://forums.alliedmods.net/showthread.php?t=322826): 修正相同模組的玩家卻只會能有一位角色發出遊戲角色語音</s> 
    - 🟦Valve已經修正，無須安裝🟦

5. [Survivor Identity Fix for 5+ Survivors (Shadowysn 版本)](https://forums.alliedmods.net/showpost.php?p=2718792&postcount=36): 修正5+多人遊戲裡，當真人玩家取代Bot或閒置的時候，他的角色模型被改變

6. [Survivor_AFK_Fix](https://forums.alliedmods.net/showthread.php?p=2714236): 修正5+多人遊戲裡，當真人玩家閒置的時候，玩家變成完全旁觀者，無法取代Bot

7. [l4dafkfix_deadbot](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4dafkfix_deadbot): 修正5+多人遊戲裡，當真人玩家閒置的時候如果他的Bot死亡，真人玩家不會取代死亡Bot而是變成完全旁觀者

8. [lfd_both_fixUpgradePack (哈利版本)](https://github.com/fbef0102/L4D2-Plugins/tree/master/lfd_both_fixUpgradePack): 修正5+多人遊戲裡，燃燒彈與高爆彈無法拿取

9. 以下兩種方案擇一安裝
   - A方案: 8+ players Bug Fixes EXTENSION ([Windows](https://forums.alliedmods.net/showpost.php?p=2721138&postcount=295), [Linux](https://forums.alliedmods.net/showpost.php?p=2752412&postcount=301))
     - 最終分數Bug 無法計算第五位以上的玩家
     - Charger 無法衝撞第五位以上的玩家
     - Witch 追錯第五位以上的玩家目標

   - B方案: Left-4-fix by Lux
     - [Better_Charger_Collision+patch](https://forums.alliedmods.net/showthread.php?t=315482): 無法衝撞第五位以上的玩家
     - [witch_target_patch](https://github.com/LuxLuma/Left-4-fix/tree/master/left%204%20fix/witch/witch_target_patch): Witch 追錯第五位以上的玩家目標

10. [Real Zoey Unlock](https://forums.alliedmods.net/showthread.php?t=308483): 修正在二代地圖上生成Zoey角色會導致遊戲崩潰
    - 🟥只適用於Windows 系統🟥
   
## 額外檔案
> __Note__<br/>
  此處額外檔案可以不用裝，自行決定
11. [AFK and Join Team Commands Improved Version](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4d_afk_commands): 提供多種命令轉換隊伍陣營 (譬如: !afk, !survivors, !infected), 但不可濫用.

12. [Dialogue Criteria Fix](https://forums.alliedmods.net/showthread.php?t=335875): 八位玩家能有更多的角色語音互動

13. [Real Survivor Mourn Fix](https://forums.alliedmods.net/showthread.php?t=335903): 一二代倖存者看見屍體能有更多的角色語音互動

14. [Scene Adjustments/Fixes](https://forums.alliedmods.net/showthread.php?t=321127): 多人玩家互相友傷能有更多的角色語音互動
    - 🟥只適用於專屬伺服器🟥
   
15. [Survivor Clones Hunter Pounced Warning Fix](https://forums.alliedmods.net/showthread.php?p=2202855): 角色看到與自己相同模組的角色被Hunter撲倒，有角色語音互動
    - 🟥只適用於專屬伺服器🟥

16. [Team Kill Reactions Vocalize Fix](https://forums.alliedmods.net/showthread.php?p=2273230): 玩家TK導致隊友倒地或死亡，能有更多的角色語音互動
    - 🟥只適用於專屬伺服器🟥
   
17. [Save Weapon Improved (哈利版本)](https://github.com/fbef0102/L4D2-Plugins/tree/master/l4d2_ty_saveweapons): 戰役模式之下儲存所有玩家身上的武器與血量，保存過關到下一關

18. [[L4D2]Character_manager](https://forums.alliedmods.net/showthread.php?t=309601): 一二代倖存者能同時存在
    - 安裝此插件會導致在The Passing地圖中一代角色玩家會被傳送到地圖之外或死亡，想要修正此問題請安裝[<b>"Stripper_passingfix.7z"</b>](https://forums.alliedmods.net/attachment.php?attachmentid=171117&d=1535074649)
      - 解壓縮檔案到addons\stripper\maps\ 相同資料夾
    - 與必要檔案No.5 Survivor Identity Fix for 5+ Survivors會有衝突，請刪除

19. [AutoTakeOver 5+ Survivors Improved (哈利版本)](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/_AutoTakeOver): 當真人玩家死亡時，自動取代另一個有空閒的Bot繼續遊玩倖存者

20. [8 survivors in rescue vehicle](https://forums.alliedmods.net/showpost.php?p=2726779&postcount=38): 修正第五位以上的玩家無法上救援載具，統計顯示其死亡
    - 解壓縮檔案到addons\stripper\maps\ 相同資料夾

21. [Remove Lobby Reservation (Silvers版本)](https://forums.alliedmods.net/showpost.php?p=2704023&postcount=103): 移除伺服器的大廳人數限制，簡單講就是解鎖伺服器，讓第九位以上的玩家透過IP加入伺服器
    - 🟥只適用於專屬伺服器🟥
   
## 娛樂檔案
1. [Survivor Respawn (哈利版本)](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/Survivor_Respawn): 當玩家死亡時，過一段時間自動復活

2. [M60_GrenadeLauncher_patches](https://forums.alliedmods.net/showthread.php?t=323408): 允許M60與榴彈發射器補充彈藥

3. [Infected Bots Control Improved](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4dinfectedbots): 生成多特感模式，隨著玩家人數越多，特感數量越多、Tank血量越厚

4. [L4D2 Survivors And Infected Shop Improved](https://github.com/fbef0102/L4D2-Plugins/tree/master/L4D2_Buy_Store): 殺死殭屍獲得金額, 使用!buy購買強力補給品與特殊商品

5. [Lockdown System Improved](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/lockdown_system-l4d2): 終點安全室必須等待一段時間才會開門，這期間必須團隊合作抵抗屍潮與Tank

6. [Adrenaline & Pills Powerups Improved](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4d2_powerups_rush): 使用腎上腺素之時，武器射速、裝彈速度、近戰武器揮砍速度、動畫起身速度變快

7. [L4D2 gifts (哈利版本)](https://github.com/fbef0102/L4D2-Plugins/tree/master/l4d2_gifts): 當特感被殺死之後掉落禮物，倖存者碰到禮物可得到強力武器與彈藥

8. [deathcheck (哈利版本)](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/cge_l4d2_deathcheck): 所有玩家包括AI Bot死亡才會回合結束

9. [CSO SupplyBox](https://github.com/fbef0102/L4D2-Plugins/tree/master/l4d2_supply_woodbox): 地圖上隨機掉落補給箱，支援倖存者得到強力武器

10. [Back 4 Blood Item hint Improved](https://github.com/fbef0102/L4D2-Plugins/tree/master/l4d2_item_hint): 使用角色語音"看"，可讓物品標記光圈，亦可以標記特感或地點

11. [Witch target override Improved](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/witch_target_override) : Witch會自動走向倖存者 + Witch殺死倖存者之後轉移攻擊目標繼續

12. [Death Soul (哈利版本)](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4d_death_soul): 人類死亡，靈魂升天

13. [Graves (哈利版本)](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4d_graves): 為人類屍體造一個墓碑以做紀念

14. [Rescue vehicle leave timer](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4d_rescue_vehicle_leave_timer): 最終關卡救援來臨時，絕命逃跑倒數計時，時間一到城市將會遭受核彈爆裂

15. [L4D2-Unlimited-Map](https://github.com/fbef0102/L4D2-Unlimited-Map): 終極地圖，打造迷宮與探索未知地圖的世界

- - - -
## 其他
* [問題集合區 Questions](https://github.com/fbef0102/Game-Private_Plugin/tree/main/Questions)

