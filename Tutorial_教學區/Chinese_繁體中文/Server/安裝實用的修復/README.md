
> 2025/10/27 更新
* 在這裡列出的插件
   * 降低伺服器崩潰
   * 修復source引擎或遊戲本身存在的一些嚴重問題
   * 提高伺服器穩定度
   * 不容易被駭客攻擊
* 注意每個插件可適用的遊戲
# List
###### Source Game
> 適合大部分source引擎遊戲
* <details><summary><b>插件與指令問題</b></summary>

   * [Command and ConVar - Buffer Overflow Fixer](https://forums.alliedmods.net/showthread.php?t=309656): 修復插件讀不到cfg文件內的指令與命令
</details>

* <details><summary><b>遊戲優化</b></summary>

   * [firebulletsfix](https://github.com/fbef0102/Sourcemod-Plugins/tree/main/firebulletsfix): 修復子彈擊中與伺服器運算相差 1 tick的延遲

   * [smd_spritetrail_fix](https://github.com/fbef0102/Sourcemod-Plugins/tree/main/smd_spritetrail_fix): 修復env_spritetrail 物件創建一秒後會消失特效 (source引擎的bug)
      
   * [lag_preventor_plus](https://github.com/Mineralcr/L4D2_Public_Plugins/tree/main/map_lag_preventor): 停止 phys_bone_follower實體會傳送大量網路資料給客戶端導致卡頓 (常見於三方圖)
</details>

* <details><summary><b>修復伺服器崩潰</b></summary>

   * [AcceptInput_crash_fix](https://github.com/fbef0102/Game-Private_Plugin/tree/main/Source_插件/Entity_實體物件/AcceptInput_crash_fix): 修復物件不存在或不合法或玩家離開伺服器，實體輸入所造成的崩潰 (常見於三方地圖)
</details>

* <details><summary><b>防駭客與外掛</b></summary>

   * [SendFileFix 3.3](https://forums.alliedmods.net/showthread.php?p=2657014): 防止傳送過多檔案與接收過多檔案
      * 如果玩家發送過多的檔案給伺服器, 踢出遊戲
      * 如果玩家請求伺服器發送過多的檔案, 踢出遊戲

   * [spray_exploit_fixer](https://forums.alliedmods.net/showthread.php?t=323447): 避免玩家的貼圖故意塞入炸服程式碼，導致其他玩家崩潰或伺服器崩潰
      * 可能還是有誤判
   
   * [sv_protect_cvar](https://github.com/fbef0102/Game-Private_Plugin/tree/main/Source_插件/Server_伺服器/sv_protect_cvar): 保護一些敏感的指令數值，不讓外界與客戶端查看，服務器內的客戶端可能會看到假數值

   * [smd_hackers_block](https://github.com/fbef0102/Sourcemod-Plugins/tree/main/smd_hackers_block): 阻止駭客利用某些漏洞導致伺服器崩潰
      * 踢出沒有steam驗證的玩家

   * [BlockSMPlugins](https://github.com/Bara/BlockSMPlugins/tree/master): 禁止所有玩家輸入```sm plugins list```查看伺服器的插件列表
      
   * [SMAC](https://github.com/Silenci0/SMAC): 2010年左右的反作弊插件
      * 也許已不適用現今的高科技外掛，但有總比沒有好
      * 玩家開透視或自瞄會被此插件檢測並記錄logs文件

   * [Little-Anti-Cheat](https://github.com/J-Tanzanite/Little-Anti-Cheat/releases): 2020年左右的反作弊插件
      * 也許已不適用現今的高科技外掛，但有總比沒有好
      * 玩家開透視或自瞄會被此插件檢測並記錄logs文件

   * [familyshare_manager](https://github.com/fbef0102/Sourcemod-Plugins/tree/main/familyshare_manager): 封鎖使用家庭共享沒有真的購買遊戲的帳戶進來伺服器
      * 防止玩家開小號

   * [vacbans](https://github.com/fbef0102/Sourcemod-Plugins/tree/main/vacbans): 封鎖有 VAC/遊戲封禁/社群封禁/交易封禁 的不良玩家進入伺服器
      * 有VAC紀錄的用戶不能加入伺服器
</details>

###### L4D1/2
* <details><summary><b>插件與指令問題</b></summary>

   * (L4D2) [l4d2_parseline_fix](https://github.com/xiaolinRM/L4D2Plugins/tree/main/l4d2_parseline_fix): 修復cfg檔案中無法執行的非ASCII字元
      <details><summary>說明 (點我展開)</summary>

         * 修復: 在cfg文件裡寫中文，因為伺服器不認中文字符，導致服務器讀取cfg檔案時會明顯卡頓甚至崩潰
         * cfg文件中可讀取中文或其他語言的字符，不會被伺服器讀取成錯誤代碼
         * 可以直接用hostname改中文房名，不用另外裝插件
         * cfg加入/**/註釋區塊
      </details>
</details>

* <details><summary><b>遊戲優化</b></summary>

   * (L4D2) [l4d2_fix_changelevel](https://github.com/Target5150/MoYu_Server_Stupid_Plugins/tree/master/The%20Last%20Stand/l4d2_fix_changelevel): 解決直接用ForceChangeLevel指令換圖會遇到的問題，導演系統不知道換圖了

   * (L4D2) [l4d2_transition_info_fix](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4d2_transition_info_fix): 修復中途換地圖的時候(譬如使用Changelevel指令)，會遺留上次的過關保存設定，導致滅團後倖存者被傳送到安全室之外或死亡

   * (L4D2) [InputKill Kick Prevention](https://forums.alliedmods.net/showthread.php?t=332860): 防止玩家因為一二代地圖NPC導致被踢
      * 玩家被踢出遊戲會看到的訊息```Kicked by Console : CBaseEntity::InputKill()```
   
   * (L4D2) [l4d2_script_cmd_swap](https://forums.alliedmods.net/showthread.php?t=317128): 阻止程式執行script命令並且改用logic_script取代執行 (防止VScript系統有記憶體洩漏)
   
   * (L4D1/2) [l4d_game_files_precacher](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4d_game_files_precacher): 預先preload 一些model 和 sound 檔案, 修正late precache還有避免不存在模組而使得伺服器崩潰

   * (L4D1/2) [l4d_late_model_precacher](https://forums.alliedmods.net/showthread.php?t=337273): 偵測哪些模組沒有事先預載或是晚載入導致server崩潰

   * (L4D1/2) [TickrateFixes](https://github.com/SirPlease/L4D2-Competitive-Rework/blob/master/addons/sourcemod/scripting/TickrateFixes.sp): 修正高tick之下所以引發的問題
      <details><summary>說明 (點我展開)</summary>

         * 有裝tickrate提高伺服器的tick才需要安裝
         * 修正高tick之下
            * 門開關的速度太慢
            * 重力過重，造成人類跳下去會摔傷
      </details>

   * (L4D1/2) [l4d_remove_item_collision](https://forums.alliedmods.net/showthread.php?t=328327): 武器跟投擲物品全部都移除碰撞 (只跟地圖靜態物件產生碰撞)
      * 減少武器與物品頻繁碰撞導致伺服器卡頓
   
   * (L4D1/2) [disable_cameras](https://github.com/shqke/sp_public/tree/master/disable_cameras): 修復玩家被地圖上的鏡頭卡住視角

   * (L4D1/2) [l4d_fix_deathfall_cam](https://github.com/Target5150/MoYu_Server_Stupid_Plugins/tree/master/The%20Last%20Stand/l4d_fix_deathfall_cam): 避免旁觀者與特感在人類掉落死亡、開場動畫、最後救援滅團時，鏡頭卡住

   * (L4D1/2) [remove_touch_links](https://github.com/shqke/sp_public/tree/master/remove_touch_links): 修復特感處在死亡/倒地區域內換到倖存者隊伍之後倖存者會立即死亡/倒地

   * (L4D2) [l4d2_sg552_zoom_fix](https://github.com/SirPlease/L4D2-Competitive-Rework/blob/master/addons/sourcemod/scripting/l4d2_sg552_zoom_fix.sp): 修正tickrate在高tick(96以上)的情況下，sg552的狙擊鏡在玩家跳躍/裝彈/落下時會卡住
      
   * (L4D1/2 linux) [l4d_fix_linux_surface](https://github.com/Target5150/MoYu_Server_Stupid_Plugins/tree/master/The%20Last%20Stand/l4d_fix_linux_surface): 修復在linux專用服裡玩家走在冰面上不會滑動
   
   * (L4D2) [l4d2_resolve_collision_fix](https://forums.alliedmods.net/showthread.php?t=344019): 修復```nb_update_frequency```指令值過低造成的問題
      * 譬如: 小殭屍與Witch移動容易卡住、反彈後撤
      * 寫以下內容於文件 ```cfg/server.cfg```
         ```c
         // 修改感染者之間的碰撞頻率
         // 如果伺服器的tick是30則寫0.65
         // 如果伺服器的tick是60則寫0.15
         // 如果伺服器的tick是100則寫0.05
         z_resolve_zombie_collision_multiplier "0.05"
         ```

   * (L4D1/2) [witch_pipebomb_exploit_fix_&_death_optmizer](https://forums.alliedmods.net/showthread.php?t=342000): 修復當一群殭屍與witch一起被土製炸彈,瓦斯桶,榴彈...爆炸物炸飛時, Witch會消失

   * (L4D2) [l4d2_vscript_purifier](https://github.com/Mineralcr/L4D2_Public_Plugins/tree/main/l4d2_vscript_purifier): 阻止專用伺服器上三方地圖VScript腳本污染的問題
      * 即在地圖A上運行了地圖B的腳本，這通常是由於地圖作者在腳本水平方面參差不齊導致的
         * 舉例: 在地圖A預先使用地圖B的自製模型，導致模型出現error
      * 如果你的伺服器安裝非常多三方圖，需要安裝此插件
</details>

* <details><summary><b>修復伺服器崩潰</b></summary>

   * (L4D2) <s>[FollowTarget_Detour](https://forums.alliedmods.net/showpost.php?p=2725811&postcount=19): 修復崩潰: ```CMoveableCamera::FollowTarget```</s>
      * 🟥 Valve 已於2023/8/23更新時修復

   * (L4D2) <s>[charger_nav_path_fix-l4d2](https://forums.alliedmods.net/showpost.php?p=2774066&postcount=11): 修正Charger長時間未能返回有效Nav導航時可能出現的崩潰</s>
      * 🟥 Valve已於2024/4/23更新時修復
      
   * (L4D2) [Ladder Server Crash - Patch Fix](https://forums.alliedmods.net/showthread.php?t=336298): 修復玩家爬梯時偶而會導致伺服器崩潰: ```NavLadder::GetPosAtHeight```

   * (L4D2) [TriggerMoved_Detour](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/TriggerMoved_Detour): 修正崩潰: ```CM_TriggerWorldSpaceBounds()``` 涵式內的空指針

   * (L4D2) [EnumEntity-Fix](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/EnumEntity-Fix): 修正崩潰: ```CTriggerTraceEnum::EnumEntity``` 涵式內的空指針

   * (L4D2) [l4d2_null_cusercmd_fix](https://forums.alliedmods.net/showpost.php?p=2784704&postcount=6): 修正崩潰: ```CLagCompensationManager::StartLagCompensation with NULL CUser```

   * (L4D2) [code_patcher](https://github.com/SirPlease/L4D2-Competitive-Rework/blob/master/addons/sourcemod/scripting/code_patcher.sp): 修復L4D2在2019大更新之後開火或走在水裡面時會掉tick的問題
      * 要裝[Gamedata文件](https://github.com/SirPlease/L4D2-Competitive-Rework/blob/master/addons/sourcemod/gamedata/code_patcher.txt)

   * (L4D1/2) [cutlrbtreefix](https://github.com/fdxx/cutlrbtreefix/releases): 修復崩潰: ```CUtlRBTree overflow```

   * (L4D2) [SV_SolidMoved](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/SV_SolidMoved-Fix): 修復崩潰 ```SV_SolidMoved``` 涵式內的空指針

   * (L4D2) [GetCollideableTriggerTestBox_Detour](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/GetCollideableTriggerTestBox_Detour): 修復崩潰 ```CM_GetCollideableTriggerTestBox``` 涵式內的空指針

   * (L4D2 linux) [IsReachable_Detour](https://forums.alliedmods.net/showpost.php?p=2725898&postcount=22): 修正崩潰: ```SurvivorBot::IsReachable``` 涵式內的空指針

   * (L4D2 linux) [l4d2_chainsaw_fix](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4d2_chainsaw_fix): 修復L4D2 linux系統下電鋸音效導致伺服器崩潰: ```CSoundPatch::ChangePitch```, ```CSoundControllerImp::SoundChangePitch```

   * (L4D2 windows) [Tier_MemScan_Detour](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/Tier_MemScan_Detour): 修復崩潰 ```tier0.dll``` 涵式相關記憶體錯誤

   * (L4D2 windows) [Server_sub_101D7CB0_Detour](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/Server_sub_101D7CB0_Detour): 修正崩潰: ```server.dll + 0x1d7cbb``` 涵式內的空指針

   * (L4D1 linux/windows) [Fix_CM_VCollideForModel_Detour](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/Fix_CM_VCollideForModel_Detour): 修復崩潰: 傳給```CM_VCollideForModel``` 涵式內的zero pointer
</details>

* <details><summary><b>防駭客與外掛</b></summary>

   * (L4D1/2) [block_packet_exploits](https://forums.alliedmods.net/showpost.php?p=2770664&postcount=17): 阻擋玩家利用高ping漏洞炸服
   
   * (L4D1/2) [SMAC](https://github.com/fbef0102/SMAC/releases): 2010年左右的反作弊插件
      * 也許已不適用現今的高科技外掛，但有總比沒有好
      * 玩家開透視或自瞄會被此插件檢測並記錄logs文件

   * (L4D1/2) [Little-Anti-Cheat](https://github.com/fbef0102/Little-Anti-Cheat/releases): 2020年左右的反作弊插件
      * 也許已不適用現今的高科技外掛，但有總比沒有好
      * 玩家開透視或自瞄會被此插件檢測並記錄logs文件
</details>