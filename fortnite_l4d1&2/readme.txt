This plugin is for demonstration of some animations from Fortnite in L4D1/2
(搞笑動作模組: 表情與舞蹈)

-----This plugin is private, Please contact me-----
(https://github.com/fbef0102/Game-Private_Plugin#%E7%A7%81%E4%BA%BA%E6%8F%92%E4%BB%B6%E5%88%97%E8%A1%A8-private-plugins-list)

-Apply to-
L4D1/2

-Changelog-
v1.4.4
- Everyone can change zoom level for snipers by command.

v1.4.3
Original Post by Franc1sco & foxhound27: https://forums.alliedmods.net/showpost.php?p=2712458&postcount=165

-Require-
None

-ConVar-
cfg\sourcemod\fortnite_emotes_extended_l4d.cfg
// admin flag for dances (empty for all players)
sm_dances_admin_flag_menu ""

// admin flag for emotes (empty for all players)
sm_emotes_admin_flag_menu ""

// Cooldown for emotes in seconds. -1 or 0 = no cooldown.
sm_emotes_cooldown "2.0"

// Hide enemy players when dancing
sm_emotes_hide_enemies "0"

// Hide weapons when dancing
sm_emotes_hide_weapons "1"

// Enable/Disable sounds for emotes.
sm_emotes_sounds "1"

// Sound volume for the emotes.
sm_emotes_soundvolume "1.0"

// Sets the playback speed of the animation. default (1.0)
sm_emotes_speed "0.80"

// Teleport back to the exact position when he started to dance. (Some maps need this for teleport triggers)
sm_emotes_teleportonend "0"

-Command-
** Emote Menu
	sm_emotes
	sm_emote
	
** Dance Menu
	sm_dances
	sm_dance
	
** Force player to play emotes (ADM required: ADMFLAG_GENERIC)
	sm_setemotes <#userid|name> [Emote ID]
	sm_setemote <#userid|name> [Emote ID]
	
** Force player to dance (ADM required: ADMFLAG_GENERIC)
	sm_setdances <#userid|name> [Emote ID]
	sm_setdance <#userid|name> [Emote ID]
	
-中文說明-
模組檔案有兩種
如果是一代伺服器會讀取
	fortnite_dances_emotes_l4d.dx90.vtx
	fortnite_dances_emotes_l4d.mdl
	fortnite_dances_emotes_l4d.vvd
	
如果是二代伺服器會讀取
	fortnite_dances_emotes_ok.dx90.vtx
	fortnite_dances_emotes_ok.mdl
	fortnite_dances_emotes_ok.vvd

請自備網空安裝模組與音樂檔案
客戶端才會下載檔案

進入遊戲後
聊天視窗輸入!emote或!dance

