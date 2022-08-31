Sets a tank and witch spawn point on every map in coop mode

-----This plugin is private, Please contact me-----
-----此為私人插件, 請聯繫本人-----
(https://github.com/fbef0102/Game-Private_Plugin#%E7%A7%81%E4%BA%BA%E6%8F%92%E4%BB%B6%E5%88%97%E8%A1%A8-private-plugins-list)

-Apply to-
L4D1/2

-Changelog-
v1.2

-Require-
1. left4dhooks: https://forums.alliedmods.net/showthread.php?t=321696
2. [INC] Multi Colors: https://forums.alliedmods.net/showthread.php?t=247770
3. builtinvotes: https://github.com/L4D-Community/builtinvotes/actions

-Optional(可以不用裝)-
1. readyup: https://github.com/SirPlease/L4D2-Competitive-Rework/blob/master/addons/sourcemod/scripting/readyup.sp

-ConVar-
cfg/sourcemod/coopbosses_ifier.cfg
// Minimum flow amount witches should avoid tank spawns by, by half the value given on either side of the tank spawn
l4d_coop_boss_avoid_tank_spawn "10"

// Max fraction of map flow for tank/witch spawn location in coop
l4d_coop_boss_flow_max "80"

// Min fraction of map flow for tank/witch spawn location in coop
l4d_coop_boss_flow_min "20"

// If 1, Allow for Easy Setup of the Boss Spawns (!voteboss)
l4d_coop_boss_vote "1"

// How many players at least to vote Boss Spawns.
l4d_coop_boss_vote_need_player "4"

-Command-
** don't spawn witch in this map, write in server.cfg (Server Commmand)
	static_witch_map <map name>
	
** don't spawn tank in this map, write in server.cfg (Server Commmand)
	static_tank_map <map name>

** reset all static map (Server Commmand)
	reset_static_maps

** force witch spawn percent before leaving saferoom (Adm required: ADMFLAG_BAN)
	sm_setwitch <number>

** force tank spawn percent before leaving saferoom (Adm required: ADMFLAG_BAN)
	sm_settank <number>

** Spawn percent for boss
	sm_boss	
	sm_tank
	sm_witch
	sm_t

** Let's vote to set those Boss Spawns!
	sm_voteboss	
	sm_bossvote


-中文說明-
此插件在戰役模式下每一張地圖挑選隨機路程生成一隻Tank與一個Witch

-可使用指令Command
// 在該地圖不生成Witch, 寫在server.cfg
// 如需要兩張地圖以上, 必須分開寫兩次以上指令
static_witch_map 地圖名

// 在該地圖不生成Tank, 寫在server.cfg
// 如需要兩張地圖以上, 必須分開寫兩次以上指令
static_tank_map 地圖名

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


-server.cfg寫下
// 戰役模式導演系統不會生成Tank與Witch
director_no_bosses 1


-cfg/sourcemod/coopbosses_ifier.cfg
// Tank 附近前後10% (20除以2) 避開生成witch
l4d_coop_boss_avoid_tank_spawn "20"

// 最遠80%生成 Tank/witch
l4d_coop_boss_flow_max "80"

// 最近20%生成 Tank/witch
l4d_coop_boss_flow_min "20"

// If 1, 允許玩家打 !voteboss 發起投票決定Tank/Witch 路程
l4d_coop_boss_vote "1"

// 發起!voteboss投票所需的玩家數量 
l4d_coop_boss_vote_need_player "4"



-data/mapinfo.txt
每一張地圖都有地形或地圖問題
在某些路段生成Tank/Witch會導致Tank/Witch卡住或對人類來說過於艱難生存
(譬如c1m1 Tank生在電梯事件之前一樓樓層無法上來，C2M3 雲霄飛車無限屍潮期間生成Tank)

"MapInfo"
{
	"c2m2_fairgrounds" //地圖名
	{
		"tank_ban_flow" //禁止Tank生成的路段
		{
			"tank ban test" //隨便取名
			{
				"min"		"0" //禁止0~50%生成Tank
				"max"		"20"
			}
			"tank ban test 2" //隨便取名
			{
				"min"		"50" //禁止50~80%生成Tank
				"max"		"80"
			}
		}
		"witch_ban_flow" //禁止Witch生成的路段
		{
			"witch ban test"
			{
				"min"		"50" //禁止50~100%生成Witch
				"max"		"100"
			}
		}
	}
}