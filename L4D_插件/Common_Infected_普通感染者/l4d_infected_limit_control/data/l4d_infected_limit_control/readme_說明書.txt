// ---------------------English---------------------
//
//	"Settings": Customize zombie count settings, adjust common infecteds/hordes/mobs depends on 5+ survivors.
//	"Maps": Then choose zombie count settings in map name.
//
//	Type !zminfo to check zombie count information
//
//  // If 1, Override common infected/mob/horde limit in director script.
//  // This can prevent custom map from modifying common infected settings
//  "override_script"			"1" 
//  
//  // How many common infecteds we can have at once on the map. (override official cvar 'z_common_limit')
//  // -1: Don't modify, Restore Game default: 30
//  "z_common_limit" 			"30" 
//  
//  // Amount of zombies to spawn in Map Event horde & Alarm horde & Director Panic Event  (override official cvar 'z_mega_mob_size')
//  // -1: Don't modify, Restore Game default: 50
//  "z_mega_mob_size"			"50" 
//  
//  // Minimum amount of zombies to spawn in natural hordes & z_spawn mob & boomer hordes & bile bomb  (override official cvar 'z_mob_spawn_min_size')
//  // -1: Don't modify, Restore Game default: 10
//  "z_mob_spawn_min_size"		"25" 
//  
//  // Maximum numbers of Boomer vomit/Natural horde/Bile Bomb common infected. (override official cvar '_mob_spawn_max_size')
//  // -1: Don't modify, Restore Game default: 30
//  "z_mob_spawn_max_size"		"30" 

//  // Spawn natural horde every amount of time passed after survivors leave the saferoom (Minimum time)
// (override official cvar 'z_mob_spawn_min_interval_easy', 'z_mob_spawn_min_interval_normal', 'z_mob_spawn_min_interval_hard', 'z_mob_spawn_min_interval_expert')
//  // -1: Off, Don't modify, Restore Game default
//  "z_mob_spawn_min_interval" 			"90" 
//  
//  // Spawn natural horde every amount of time passed after survivors leave the saferoom (Maximum time)
// (override official cvar 'z_mob_spawn_max_interval_easy', 'z_mob_spawn_max_interval_normal', 'z_mob_spawn_max_interval_hard', 'z_mob_spawn_max_interval_expert')
//  // -1: Off, Don't modify, Restore Game default
//  "z_mob_spawn_max_interval" 			"180" 
//  
//  // After final rescue starts, Dynamic Adjust zombies related limit
//  // (Prevent too many common infected and horde keep coming, cause final stage stuck)
//  "final"
//  {
//  	  "z_common_limit" 						"-1 
//  	  "z_mega_mob_size"						"-1" 
//  	  "z_mob_spawn_min_size"				"-1" 
//  	  "z_mob_spawn_max_size"				"-1" 
//
//		  "z_mob_spawn_min_interval" 			"-1" 
//		  "z_mob_spawn_max_interval" 			"-1" 
//  }

// ---------------------中文說明---------------------
//
//	"Settings" 自定義殭屍數量的配置，根據人類數量做調
//	"Maps": 然後再依照地圖名稱選擇一個配置
//
//	輸入!zminfo 隨時查看目前的殭屍數量狀態
//
//  // 為1時，強制使用VScript覆蓋導演系統的設置
//  // 開啟這項指令可以防止三方圖攥改殭屍與屍潮的數量
//  "override_script"			"1" 
//  
//  // 地圖上殭屍同時存在的總數量 (覆蓋官方指令 z_common_limit)
//  // -1: 不修改, 恢復遊戲預設: 30
//  "z_common_limit" 			"30" 
//  
//  // 警報車/地圖機關/導演屍潮 生成的殭屍數量. (覆蓋官方指令 z_mega_mob_size)
//  // -1: 不修改, 恢復遊戲預設: 50
//  "z_mega_mob_size"			"50" 
//  
//  // Boomer噴到/自然屍潮/膽汁瓶 最少的殭屍數量. (覆蓋官方指令 z_mob_spawn_min_size)
//  // -1: 不修改, 恢復遊戲預設: 10
//  "z_mob_spawn_min_size"		"25" 
//  
//  // Boomer噴到/自然屍潮/膽汁瓶 最多的殭屍數量. (覆蓋官方指令 'z_mob_spawn_max_size')
//  // -1: 不修改, 恢復遊戲預設: 30
//  "z_mob_spawn_max_size"		"30" 
//
//  // 倖存者出門後, 每隔一段時間生成自然屍潮 (最短間隔, 單位: 秒)
// (覆蓋官方指令 'z_mob_spawn_min_interval_easy', 'z_mob_spawn_min_interval_normal', 'z_mob_spawn_min_interval_hard', 'z_mob_spawn_min_interval_expert')
//  // -1: 不修改, 恢復遊戲預設
//  "z_mob_spawn_min_interval" 			"90" 
//  
//  // 倖存者出門後, 每隔一段時間生成自然屍潮 (最長間隔, 單位: 秒)
// (覆蓋官方指令 'z_mob_spawn_max_interval_easy', 'z_mob_spawn_max_interval_normal', 'z_mob_spawn_max_interval_hard', 'z_mob_spawn_max_interval_expert')
//  // -1: 不修改, 恢復遊戲預設
//  "z_mob_spawn_max_interval" 			"180" 
//  
//  // 當救援開始後，重新設置相關的感染者數量指令
//  // (避免殭屍太多，導致救援卡關，無法生成Tank)
//  "final"
//  {
//  	  "z_common_limit" 			"-1" 
//  	  "z_mega_mob_size"			"-1" 
//  	  "z_mob_spawn_min_size"	"-1" 
//  	  "z_mob_spawn_max_size"	"-1" 
//
//		  "z_mob_spawn_min_interval" 		"-1" 
//		  "z_mob_spawn_max_interval" 		"-1" 
//  }