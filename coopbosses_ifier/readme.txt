Sets a tank and witch spawn point on every map in coop mode

-----This plugin is private, Please contact me-----
-----此為私人插件, 請聯繫本人-----
(https://github.com/fbef0102/Game-Private_Plugin#%E7%A7%81%E4%BA%BA%E6%8F%92%E4%BB%B6%E5%88%97%E8%A1%A8-private-plugins-list)

-Apply to-
L4D1/2

-Changelog-
v1.3

-Require-
1. left4dhooks: https://forums.alliedmods.net/showthread.php?t=321696
2. [INC] Multi Colors: https://forums.alliedmods.net/showthread.php?t=247770
3. builtinvotes: https://github.com/L4D-Community/builtinvotes/actions

-Optional(可以不用裝)-
1. readyup: https://github.com/SirPlease/L4D2-Competitive-Rework/blob/master/addons/sourcemod/scripting/readyup.sp

-Data-
-data/mapinfo.txt
"MapInfo"
{
	"c1m2_streets"　//Map Name
	{
		"no_tank" "0" 		//Allow to spawn tank in this map
		"no_witch" "1"	 	//This map is prohibited to spawn witch
	}
	"c2m2_fairgrounds" //地圖名
	{
		"tank_ban_flow" //ban tank flow
		{
			"tank ban test" //Whatever name
			{
				"min"		"0" //0~20% is prohibited to spawn tank
				"max"		"20"
			}
			"tank ban test 2" //Whatever name
			{
				"min"		"50" //50~80% is prohibited to spawn tank
				"max"		"80"
			}
		}
		"witch_ban_flow" //ban witch flow
		{
			"witch ban test"　 //Whatever name
			{
				"min"		"50" //50~100% is prohibited to spawn tank
				"max"		"100"
			}
		}
	}
}

-ConVar-
cfg/sourcemod/coopbosses_ifier.cfg
// Minimum flow amount witches should avoid tank spawns by, by half the value given on either side of the tank spawn
l4d_coop_boss_avoid_tank_spawn "10"

// Disable Tank spawn in Final Map
l4d_coop_boss_final_tank_spawn_disable "1"

// Disable Witch spawn in Final Map
l4d_coop_boss_final_witch_spawn_disable "1"

// Max fraction of map flow for tank/witch spawn location in coop
l4d_coop_boss_flow_max "80"

// Min fraction of map flow for tank/witch spawn location in coop
l4d_coop_boss_flow_min "20"

// If 1, Allow for Easy Setup of the Boss Spawns (!voteboss)
l4d_coop_boss_vote "1"

// How many players at least to vote Boss Spawns.
l4d_coop_boss_vote_need_player "4"

// How many players at least to vote Boss Spawns.
l4d_coop_boss_vote_need_player "4"

-Command-
** force witch spawn percent before leaving saferoom (Adm required: ADMFLAG_BAN)
	sm_setwitch <number>

** force tank spawn percent before leaving saferoom (Adm required: ADMFLAG_BAN)
	sm_settank <number>

** Spawn percent for boss
	sm_boss	
	sm_tank
	sm_witch
	sm_t

** Let's vote to set those Boss Spawns! sm_voteboss <tank> <witch>
	sm_voteboss	<tank> <witch>
	sm_bossvote <tank> <witch>


----中文說明----
此插件在戰役模式下每一張地圖挑選隨機路程生成一隻Tank與一個Witch

-原理-
* 從"l4d_coop_boss_flow_max 80"與"l4d_coop_boss_flow_min 20"指令數值之間取隨機值，假設隨機取75，當人類路程走到75%路程，生成Tank
* 從"l4d_coop_boss_flow_max 80"與"l4d_coop_boss_flow_min 20"指令數值之間取隨機值，假設隨機取40，當人類路程走到40%路程，生成Witch
* 如果輔助文件禁止50~70%生成Boss，則隨機值不會取50~70

-指令-
cfg/sourcemod/coopbosses_ifier.cfg
// Tank 附近前後10% (20除以2) 避開生成witch
l4d_coop_boss_avoid_tank_spawn "10"

// 如果為1，最後一關預設不生成Tank
l4d_coop_boss_final_tank_spawn_disable "1"

// 如果為1，最後一關預設不生成Witch
l4d_coop_boss_final_witch_spawn_disable "1"

// 最遠80%生成 Tank/witch
l4d_coop_boss_flow_max "80"

// 最近20%生成 Tank/witch
l4d_coop_boss_flow_min "20"

// If 1, 允許玩家打 !voteboss 發起投票決定Tank/Witch 路程
l4d_coop_boss_vote "1"

// 發起!voteboss投票所需的玩家數量 
l4d_coop_boss_vote_need_player "4"

-可使用命令-
// 清空不生成Tank/Witch的地圖列表
reset_static_maps

// 自己決定 witch 路程，請在出去安全室之前決定好
sm_setwitch <數字>

// 自己決定 tank 路程，請在出去安全室之前決定好
sm_settank <數字>

// 投票決定Tank/Witch的路程 ，請在出去安全室之前決定好
sm_voteboss <數字> <數字>
sm_bossvote <數字> <數字>

// 打印該回合 Tank/Witch 路程
sm_boss
sm_tank
sm_witch
sm_t


-輔助文件-
-data/mapinfo.txt
* 每一張地圖都有地形或地圖問題，
　在某些路段生成Tank/Witch會導致Tank/Witch卡住或對人類來說過於艱難生存
　(譬如c1m1 Tank生在電梯事件之前一樓樓層無法上來，C2M3 雲霄飛車無限屍潮期間生成Tank)

"MapInfo"
{
	"c1m2_streets"　//地圖名
	{
		"no_tank" "0" 		//可在該地圖生成Tank
		"no_witch" "1"	 	//該地圖禁止生成Witch
	}
	"c2m2_fairgrounds" //地圖名
	{
		"tank_ban_flow" //禁止Tank生成的路段
		{
			"tank ban test" //隨便取名
			{
				"min"		"0" //0~20%禁止生成Tank
				"max"		"20"
			}
			"tank ban test 2" //隨便取名
			{
				"min"		"50" //50~80%禁止生成Tank
				"max"		"80"
			}
		}
		"witch_ban_flow" //禁止Witch生成的路段
		{
			"witch ban test"　 //隨便取名
			{
				"min"		"50" //50~100%禁止生成Witch
				"max"		"100"
			}
		}
	}
}