# Navigation
> 2025/8/14 updated by [Harry](https://steamcommunity.com/profiles/76561198026784913)
- [Navigation](#navigation)
	- [Stripper](#stripper)
	- [l4dtoolz](#l4dtoolz)
	- [TickrateEnabler](#tickrateenabler)
	- [Country and City Database](#country-and-city-database)
	- [Accelerator Crash Report](#accelerator-crash-report)
	- [Others](#others)

- - - -
## Stripper
* What is stripper?
	* Build the map by yourself
		* [Unlimited-Map](https://github.com/fbef0102/L4D2-Unlimited-Map)
		* [Video](https://www.youtube.com/watch?v=I_-QSn8F8Cs)
	* Modify, add, delete obstacle, propsm weapons on the map, and even create horde event
		* [l4d2_spawn_props](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4d2_spawn_props)
		* [Map Modify](https://github.com/fbef0102/L4D2-Unlimited-Map#modify--%E5%85%B6%E4%BB%96%E4%BF%AE%E6%94%B9)

* <details><summary>Installation</summary>

	1. Go to [Stripper:Source](https://forums.alliedmods.net/showthread.php?t=39439) and click SNAPSHOTS
	<br/>![image](https://user-images.githubusercontent.com/12229810/206858893-688521a3-6f69-469b-8a80-92470ab13db6.jpg)

	2. Search the latest version and download files depending on your system
	<br/>![image](https://user-images.githubusercontent.com/12229810/206859034-5e0c5e5e-fcbd-4329-9d27-5298025c4616.png)

	3. Unzip all files to your server same folder, press yes if ask override. You will have ```stripper``` folder in addons folder
	<br/>![image](https://user-images.githubusercontent.com/12229810/206859157-102eceeb-e5c7-4fbd-95b9-d01d2c82d963.png)

	4. Restart Server, type ```stripper_version``` in serve console
		```php
		] stripper_version
		"stripper_version" = "1.2.2"
		notify singleplayer replicated
		- Stripper Version
		```
</details>

- - - -
## l4dtoolz
*  What is l4dtoolz?
	* To unlock server slots limit, you can have 8+ players in your server
		<br/>![image](https://user-images.githubusercontent.com/12229810/206860045-582a79ea-8453-45a7-b73a-4ecfd051be6b.jpg)
	* Max slot limit is 31 in left4dead 1/2
		* [l4dmultislots](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4dmultislots)
		* [8+ Survivors In Coop](/Tutorial_%E6%95%99%E5%AD%B8%E5%8D%80/English/Game/L4D2/8%2B_Survivors_In_Coop)

* <details><summary>L4D2 Installation</summary>

	1. Go to [l4dtoolz](https://github.com/lakwsh/l4dtoolz/releases) and download files
	<br/>![image](https://github.com/user-attachments/assets/cdfa497e-ee25-449b-90be-57be8d1209cb)

	2. Unzip all files to your server addons folder, press yes if ask override. You will have ```l4dtoolz``` files in addons folder
	<br/>![image](https://github.com/user-attachments/assets/259cd048-c948-49d6-bce9-8fe21e9b13eb)

	3. Write down the following cvars
		* (Dedicated server) in ```cfg/server.cfg``` (🟥if file doesn't exist, create it🟥)
			```php
			// This cvar from l4dtoolz extension: github.com/lakwsh/l4dtoolz
			// Max. clients/players, how many real players + bots allowed in server
			// Do not modify value (max: 31)
			sv_setmax 31

			// How many real players can join server (Not including AI Bots)
			// Free to modify value (1~31)
			sv_maxplayers 18

			// "maximum players" number that's visible to people in the server browser and server queries
			// Suggest to set the same number as sv_maxplayers
			sv_visiblemaxplayers 18

			// If 0, Allow to join server via matchmaking lobby, connect, or server list
			// If 0, server has reserve match system when from lobby only
			// If 0, Allow to change sv_cheats to 1 anytime
			// If 1, Allow to join this server only when server is reserved
			// If 1, server has reserve match system no matter how players join server 
			// If 1, Not allow to change sv_cheats to 1
			sv_allow_lobby_connect_only 1

			// This cvar from l4dtoolz extension: github.com/lakwsh/l4dtoolz
			// If 1, force sv_allow_lobby_connect_only to be 0
			// If 1, no reserved cookie + don't reply reservation request form lobby
			sv_force_unreserved 0

			// This cvar from l4dtoolz extension: github.com/lakwsh/l4dtoolz
			// 1=bypass SteamID verification, 0=Off
			// This feature can alleviate the No Steam logon (code 6) issue (only for players who enter while the feature is enabled).
			// Enabling this feature will weaken server security, and Family Sharing functionality will be disabled.
			// Note: Enabling this feature will cause abnormal A2S_INFO results, which can be fixed with this plugin: github.com/lakwsh/l4d2_vomit_fix/blob/master/l4d2_a2s_fix.sp
			sv_steam_bypass 1

			// This cvar from l4dtoolz extension: github.com/lakwsh/l4dtoolz
			// 1=Activating this function can completely prohibit family shared accounts (alt accounts) from entering the server, 0=Off
			sv_anti_sharing 0
			```
		* (Listen Server) In ```cfg/listenserver.cfg``` if (🟥if file doesn't exist, create it🟥)
			```php
			// How many real players can join server (Not including AI Bots)
			// Free to modify value (1~8)
			sv_maxplayers 8

			// Maximum players" number that's visible to people in the server browser and server queries
			// Suggest to set the same number as sv_maxplayers
			sv_visiblemaxplayers 8
			```

	4. By default, the game engine only allow 18 max players. To change max clients
		* (Dedicated server) If using launch panel/software tool/linux system, please input launch parameter ```+sv_setmax 31```
		<br/>![image](https://github.com/user-attachments/assets/cf24e0ba-0caa-42b7-a295-8af7abd7f411)
		<br/>![image](https://github.com/user-attachments/assets/f123fe6f-fbe7-4132-b608-2b05d99d2ff1)
		* (Listen Server) Launch options ```+sv_setmax 31```
		<br/>![image](https://github.com/user-attachments/assets/2370fd51-97eb-4413-bc0c-a590dfeba499)
		* 🟥 sv_setmax and sv_maxplayers are different
			* sv_setmax = Max Real players + AI Bots allowed in server
			* sv_maxplayers = How many real players can join server (Not including AI Bots)
		* 🟥 Server would crash if set over 31 Max. players

	5. Restart Server
		* Type ```plugin_print``` in server console. If it doesn't show, that means not install correctly
			```php
			] plugin_print
			Loaded plugins:
			0:      "L4DToolZ v2.4.0, https://github.com/lakwsh/l4dtoolz"
			```
		* Type ```maxplayers``` in server console. If "maxplayers" number is not 31, that means not install correctly or l4dtoolz version is old
			```php
			] maxplayers
			"maxplayers" is "31"
			```

	6. Install plugin
		* (Dedicated server) [l4d_unreservelobby](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4d_unreservelobby): Removes lobby reservation when server is full, allow 9+ players to join server
		* (Dedicated server) [l4d2_a2s_fix](https://github.com/lakwsh/l4d2_vomit_fix): Patches A2S_INFO issue (Only when sv_steam_bypass is 1)
		* [l4d2_vomit_fix](https://github.com/lakwsh/l4d2_vomit_fix): Patches Boomer Vomit behavior to fix an issue where vomit range scaled inversely with tickrate.
</details>

* <details><summary>L4D1 Installation</summary>

	1. Go to [l4dtoolz](https://github.com/accelerator74/l4dtoolz/releases) and download files depending on your game and system
	<br/>![image](https://github.com/user-attachments/assets/41ac929c-1e96-4972-86b8-63f8aeea1570)

	2. Unzip all files to your server same folder, press yes if ask override. You will have ```l4dtoolz``` folder in addons folder
	<br/>![image](https://user-images.githubusercontent.com/12229810/206860306-d0fead16-9997-410d-93cc-bca7109d5977.png)

	3. Write down the following cvars
		* (Dedicated server) in ```cfg/server.cfg``` (🟥if file doesn't exist, create it🟥)
			```php
			// How many real players can join server (Not including AI Bots)
			// Free to modify value (1~31)
			sv_maxplayers 18

			// Maximum players" number that's visible to people in the server browser and server queries
			// Suggest to set the same number as sv_maxplayers
			sv_visiblemaxplayers 18

			//If 0, Allow to join server via matchmaking lobby, connect, or server list
			//If 0, server has reserve match system when from lobby only
			//If 0, Allow to change sv_cheats to 1 anytime
			//If 1, Allow to join this server from matchmaking lobby only
			//If 1, server has reserve match system no matter how players join server 
			//If 1, Not allow to change sv_cheats to 1
			sv_allow_lobby_connect_only 1

			//This cvar from l4dtoolz extension
			//If 1, force sv_allow_lobby_connect_only to be 0
			//If 1, no reserved cookie + don't reply reservation request form lobby
			sv_force_unreserved 0
			```
		* (Listen Server) In ```cfg/listenserver.cfg``` if (🟥if file doesn't exist, create it🟥)
			```php
			// How many real players can join server (Not including AI Bots)
			// Free to modify value (1~8)
			sv_maxplayers 8

			// Maximum players" number that's visible to people in the server browser and server queries
			// Suggest to set the same number as sv_maxplayers
			sv_visiblemaxplayers 8
			```

	4. By default, the game engine only allow 18 max players. To change max clients
		* (Dedicated server) If using launch panel/software tool/linux system, please input launch parameter ```-maxplayers 31```
		<br/>![image](https://github.com/user-attachments/assets/dc605332-e20e-4c55-a429-23db7491e352)
		<br/>![image](https://github.com/user-attachments/assets/f123fe6f-fbe7-4132-b608-2b05d99d2ff1)
		* (Listen Server) Launch options ```-maxplayers 31```
		<br/>![image](https://github.com/user-attachments/assets/0b605d35-9e09-44e1-91bd-8a18b73ef962)
		* 🟥 maxplayers and sv_maxplayers are different
			* maxplayers = Max Real players + AI Bots allowed in server
			* sv_maxplayers = How many real players can join server (Not including AI Bots)
		* 🟥 Server would crash if set over 31 Max. players

	5. Restart Server
		* Type ```meta list``` in server console. If it doesn't show, that means not install correctly
			```php
			] meta list
			Listing 11 plugins:
			[04] L4DToolZ (2.0.1) by Accelerator, Ivailosp
			```
		* Type ```maxplayers``` in server console. If "maxplayers" number is not 31, that means not install correctly or l4dtoolz version is old
			```php
			] maxplayers
			"maxplayers" is "31"
			```

	6. Install plugin
		* (Dedicated server) [l4d_unreservelobby](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4d_unreservelobby): Removes lobby reservation when server is full, allow 9+ players to join server
</details>

- - - -
## TickrateEnabler
* What is TickrateEnabler ?
	* To unlock server tickrate limit, up to 100 tickrate
		* If you don't know tickrate, please google it
		* Tickrate = Server fps
	* High Tickrate costs more cpu performance

* <details><summary>L4D2 Installation</summary>

	1. Go to [l4dtoolz](https://github.com/lakwsh/l4dtoolz/releases) and download files
	<br/>![image](https://github.com/user-attachments/assets/cdfa497e-ee25-449b-90be-57be8d1209cb)

	2. Unzip all files to your server addons folder, press yes if ask override. You will have ```l4dtoolz``` files in addons folder
	<br/>![image](https://github.com/user-attachments/assets/259cd048-c948-49d6-bce9-8fe21e9b13eb)

	3. Write down the following cvars in cfg/server.cfg
		* If you don't have server.cfg, then create it
			```php
			// 100 Tickrate, free to modify value
			sm_cvar sv_minrate 				"100000" 	// tickrate * 1000
			sm_cvar sv_maxrate 				"100000" 	// tickrate * 1000
			sm_cvar sv_minupdaterate 		"101"	 	// tickrate +1
			sm_cvar sv_maxupdaterate 		"101"		// tickrate +1
			sm_cvar sv_mincmdrate 			"101"		// tickrate +1
			sm_cvar sv_maxcmdrate 			"101"		// tickrate +1
			sm_cvar rate					"100000" 	// tickrate * 1000
			sm_cvar net_splitpacket_maxrate "50000" 	// (tickrate÷2) * 1000
			sm_cvar fps_max					"0"
			```
	
	4. Input the Launch Parameters
		* (Dedicated server) Launch Parameters ```-tickrate 100```
		<br/>![image](https://github.com/user-attachments/assets/3803894b-f000-45b2-aab8-b35748e3004b)
		* (Listen Server) Launch options```-tickrate 100```
		<br/>![image](https://github.com/user-attachments/assets/0acd34ab-75d5-4700-86d4-8b404e8334f9)
		
	5. Restart Server, type ```plugin_print``` in serve console
		```php
		] plugin_print
		1: 　"Tickrate_Enabler 1.5, ProdigySim"
		```

	6. Join server, open game console and type ```net_graph 4```, you will see the network usage graph on your screen, make sure tickrate is 100
	<br/>![image](https://user-images.githubusercontent.com/12229810/206861890-a37cf9d9-f5cc-4ec2-b3d3-07991cd89e1f.jpg)

	7. Install plugin
		* [l4d2_vomit_fix](https://github.com/lakwsh/l4d2_vomit_fix): Patches Boomer Vomit behavior to fix an issue where vomit range scaled inversely with tickrate.
</details>

* <details><summary>L4D1 Installation</summary>

	1. Go to [Tickrate-Enabler](https://github.com/accelerator74/Tickrate-Enabler/releases) and download files depending on your game and system
	<br/>![image](https://github.com/fbef0102/Game-Private_Plugin/assets/12229810/44f26cc8-25b0-4308-a52d-1e7496b57596)

	2. Unzip all files to your server same folder, press yes if ask override. You will have ```tickrate_enabler``` folder in addons folder
	<br/>![image](https://user-images.githubusercontent.com/12229810/206860975-1bc616cc-5e1c-4bfb-88b4-af699e302287.png)

	3. Write down the following cvars in cfg/server.cfg
		* If you don't have server.cfg, then create it
		```php
		// 100 Tickrate, free to modify value
		sm_cvar sv_minrate 				"100000" 	// tickrate * 1000
		sm_cvar sv_maxrate 				"100000" 	// tickrate * 1000
		sm_cvar sv_minupdaterate 		"101"	 	// tickrate +1
		sm_cvar sv_maxupdaterate 		"101"		// tickrate +1
		sm_cvar sv_mincmdrate 			"101"		// tickrate +1
		sm_cvar sv_maxcmdrate 			"101"		// tickrate +1
		sm_cvar rate					"100000" 	// tickrate * 1000
		sm_cvar net_splitpacket_maxrate "50000" 	// (tickrate÷2) * 1000
		sm_cvar fps_max					"0"
		```
	
	4. Input the Launch Parameters
		* (Dedicated server) Launch Parameters ```-tickrate 100```
		<br/>![image](https://github.com/user-attachments/assets/3803894b-f000-45b2-aab8-b35748e3004b)
		* (Listen Server) Launch options```-tickrate 100```
		<br/>![image](https://github.com/user-attachments/assets/0acd34ab-75d5-4700-86d4-8b404e8334f9)
		
	5. Restart Server, type ```plugin_print``` in serve console
		```php
		] plugin_print
		1: 　"Tickrate_Enabler 1.5, ProdigySim"
		```

	6. Join server, open game console and type ```net_graph 4```, you will see the network usage graph on your screen, make sure tickrate is 100
	<br/>![image](https://user-images.githubusercontent.com/12229810/206861890-a37cf9d9-f5cc-4ec2-b3d3-07991cd89e1f.jpg)
</details>

> __Warning__ 
> * High Tickrate costs more cpu performance, you can adjust tickrate to 60 or 45
> * Need to modify server.cfg and Launch Parameters together to change tickrate


* <details><summary>Q&A 1: Why the windows server Tickrate stuck at 64?</b></summary>

	![image](https://user-images.githubusercontent.com/12229810/206862598-8f36433c-bcce-4edf-b8b9-7843d0f8534a.jpg)

	* Reason: Windows system problem
	* To Solve: 
		* Method 1：Go complain Microsoft
		* Method 2：Using windows 7 instead
		* Method 3：Using linux server instead
		* Method 4：Connect Server from lobby with ```mm_dedicated_force_servers``` command, it will fix 64 tick issue in windows server
		* Method 5: [Windows Unlock Tool](https://b23.tv/NQxIT55), force to unlock sv
</details>

* <details><summary>Q&A 2: Why player's tickrate is not 100?</b></summary>

	![image](https://user-images.githubusercontent.com/12229810/207044622-5c0145a3-85be-4eef-b3ec-59ec6fcaba01.png)

	* Reason: Limited by your fps, Your in-game fps must be above 100 to enjoy 100 tickrate
	<br/>![image](https://user-images.githubusercontent.com/12229810/207044800-04d8cbcb-610a-4ede-8896-d8cf992b8719.png)
	* To Solve: 
		* Method 1：Options->Video->Advanved Settings->WAIT FOR VERTICAL SYNC "Disabled", Unlock fps limit
		<br/>![image](https://github.com/fbef0102/Game-Private_Plugin/assets/12229810/fe84f5a1-df7c-409d-9721-4ddf0984bf21)
		* Method 2：Better upgrade Graphics Card (GPU)
</details>

- - - -
## Country and City Database
* When to install?
	* Plugins that need to retrieve data from client, such as IP, country, region, city.
		* Plugin: [cannounce](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/cannounce)
	* If you have Please geoipcity.ext and geoip2.ext. please REMOVE. They are now included with SourceMod v1.11 or above

* <details><summary>Installation</summary>

	1. [Register on maxmind.com](https://www.maxmind.com/en/geolite2/signup) to be able to download databases

	2. My Account -> MY ACCOUNT -> GeoIP2/GeoLite2 -> Download Files
	<br/>![image](https://github.com/user-attachments/assets/a8155c2b-cf9d-49d8-a7e6-6de1ed0974c1)

	3. Seach "GeoLite2 Country" and "GeoLite2 City" -> download databases.
	<br/>![GeoLite2 Country](https://user-images.githubusercontent.com/12229810/204966692-ac339bc6-4760-4acc-b320-b776d46e7064.jpg)
	<br/>![GeoLite2 City](https://user-images.githubusercontent.com/12229810/204966795-a57a5949-abcf-4127-9325-90b9fdb8124f.jpg)

	4. Put GeoLite2-City.mmdb and GeoLite2-Country.mmdb files to path ```addons/sourcemod/configs/geoip/``` folder
	<br/>![image](https://user-images.githubusercontent.com/12229810/222086453-ee59e6c3-e61c-4a16-9aa7-8eb9d39a4d37.png)
</details>

- - - -
## Accelerator Crash Report
* What is this?
	* When server crash, it uploads the crash reports to a [community-accessible processing backend](https://crash.limetech.org/)
	* Helpful notices with clear information help server owners quickly resolve crash causes
	* Check the crash reports and try to fix or share with others who can fix
* 🟥 Does not apply to
	* L4D1 linux
	* L4D2 linux and Sourcemod v1.12 or above

* <details><summary>Installation</summary>

	1. Go to [Accelerator - Crash Reporting That Doesn't Suck](https://forums.alliedmods.net/showthread.php?t=277703) and click Download, download files depending on your system
	<br/>![image](https://github.com/user-attachments/assets/268413de-ea3b-427f-930d-1bf7cd018eba)
	<br/>![image](https://github.com/user-attachments/assets/b6faccc7-1657-47a3-9427-dc49d26f9e3f)

	2. Unzip all files to your server same folder
	<br/>![image](https://github.com/user-attachments/assets/062cffbc-e4be-4e8f-89ff-e0bb550d7e83)

	3. Copy the folloing and paste into ```sourcemod/configs/core.cfg```
		* Configuration
			```c
			/**
			* SteamID64 (Community ID) that will have ownership of uploaded crash reports.
			* You can share your crash reports with additional users from the website.
			*
			* If unset, your crash reports will be uploaded anonymously and you will not be
			* able to see all of the information.
			*/
			"MinidumpAccount"	"xxxxxxxxxxxxx"

			/**
			* Controls which binaries will be eligible to be processed for symbols and uploaded.
			* Only modules loaded by the server at the time of the crash can be considered.
			*
			* 0 = Disabled: No binaries will be processed or uploaded.
			* 1 = System Only: Only binaries outside of the game directory (where the srcds binary is).
			* 2 = System + Game: Loaded modules outside of the addons/ directory.
			* 3 = System + Game + Addons: All loaded modules.
			*/
			"MinidumpSymbolUpload"	"3"

			/**
			* Controls whether Accelerator can upload complete module binaries when explicitly requested
			* by the processing server. This also respects the value of the MinidumpSymbolUpload setting.
			*/
			"MinidumpBinaryUpload"	"yes"

			/**
			* Controls whether Accelerator does local processing of crash reports before upload.
			* This should only be changed if local processing causes issues such as crashes,
			* the processing server may reject crash reports that have not been presubmitted.
			*/
			"MinidumpPresubmit"	"yes"

			/**
			* URL to upload crash dumps to. Should not be changed.
			*/
			"MinidumpUrl"	"http://crash.limetech.org/submit"

			/**
			* URL to upload processed symbols to. Should not be changed.
			*/
			"MinidumpSymbolUrl"	"http://crash.limetech.org/symbols/submit"

			/**
			* URL to upload binaries to. Should not be changed.
			*/
			"MinidumpBinaryUrl"	"http://crash.limetech.org/binary/submit"
			```
		* Note that must be inside the "Core"{}, as the image shows
		<br/>![image](https://github.com/user-attachments/assets/b628ab39-47c0-4886-8d82-4f4468e452fa)
	
	4. Change "xxxxxxxxxxxxxxxxx" and write your own steamid 64 in ```core.cfg```
		* [Find steamid 64](https://steamid.io/)
		<br/>![image](https://github.com/user-attachments/assets/55d95607-7b8d-4ad4-b72f-0153ff550a68)
		<br/>![image](https://github.com/user-attachments/assets/e30be60d-d666-4859-97a4-6b3446489110)

	5. Restart Server
		* Type ```sm exts list``` in server console. If it doesn't show, that means not install correctly
			```php
			] sm exts list
			Loaded plugins:
			[01] Accelerator (2.x.x-xxxxx): SRCDS Crash Handler
			```
		* There should be a file named ```accelerator.log``` in ```addons\sourcemod\logs``` folder. If it doesn't appear, that means not install correctly (The file is empty)
		<br/>![image](https://github.com/user-attachments/assets/b0e143ca-ae93-40cb-aa63-0dcff5944d1e)
</details>

* <details><summary>Next, when server crash</summary>

	1. When server crash, it would start to generate crash report and notify Crash ID
		* You will have the Crash ID in file ```addons\sourcemod\logs\accelerator.log```
		* You will have the Crash ID in file ```addons\sourcemod\logs\errors_xxxx.log```
			```c
			[CRASH] Accelerator uploaded crash dump: Crash ID: WWWWW-YYYY-ZZZZ
			```

	2. Uploads the crash reports to [crash.limetech.org](https://crash.limetech.org/), the processing backend analyses crash reports to extract useful information
		* Type Crash ID
		<br/>![image](https://github.com/user-attachments/assets/9d85c52b-a884-43b0-9ab4-d852a871416f)
		<br/>![image](https://github.com/user-attachments/assets/b1add029-d2fa-4d17-95e4-b4eae2e6f0cc)
	
	3. If you want to know more details about crash report
		* Login with steam account
		<br/>![image](https://github.com/user-attachments/assets/6f5f8c37-33f5-464e-9e74-0ff5abebdd39)
		* View Dashboard. If there are no any crash reports on the list, that means the steamid 64 is wrong in ```sourcemod/configs/core.cfg```
		<br/>![image](https://github.com/user-attachments/assets/cbe22583-fecc-4d48-8f20-af6e67311015)
		<br/>![image](https://github.com/user-attachments/assets/239def63-3356-49ec-8e1b-692c96f0d344)
</details>

* <details><summary>How to analyze crash report?</summary>

	1. Please loign with steam account, you can see more details about crash report
	<br/>![image](https://github.com/user-attachments/assets/de5256a8-4cfb-4207-acce-226b486d09e4)

	2. It's normal that unable to understand the crash report. If understand it, you should be hired by Valve company
	
	3. You can share the crash log with experienced sourcemod programmer or ask for help
		* (Method 1) Share Crash ID
		* (Method 2) Share dashboard with other players, type their steam id 64
		<br/>![image](https://github.com/user-attachments/assets/4288d051-0d7a-4c9a-955d-5b32a81a812d)
		<br/>![image](https://github.com/user-attachments/assets/01a4bbe7-5227-4dae-b4d5-d8e4dce8e44d)
		<br/>![image](https://github.com/user-attachments/assets/7db4b35f-e203-4c79-aaf4-7b5806674d3d)
</details>

* <details><summary>Troubleshooting Crashes</summary>

	> Try the following steps to reduce the probability of server crash

	1. [Update Sourcemod Stable Version](https://www.sourcemod.net/downloads.php?branch=stable)
		<br/>![image](https://github.com/user-attachments/assets/b14c65ae-09bc-4411-b7a7-b15e6306c0a0)

	2. [Update Metamod Stable Version](https://www.metamodsource.net/downloads.php/?branch=stable)
		<br/>![image](https://github.com/user-attachments/assets/58822a20-3fe9-4f9a-ad50-84cbf9e76050)

	3. Type ```sm plugins list``` to view all plugins
		* Find the original author or the link where you downloaded one by one, and update the plugin if newer version.
		* 🟥 Suggest not using plugins without source code, because if they are broken, there is no way to repair.
		* 🟥 More than ten years old plugins without any update and fix, please remove.
		
	4. Type ```sm exts list``` to view all extensions
		* Find the original author or the link where you downloaded one by one, and update the plugin if newer version.

	5. Check if any ```error_xxx.log``` in ```addons/sourcemod/logs``` folder
		* Please check the file and try to fix the errors it says.
		* Report the errors to the plugin author
		* 🟥 Must fix until no errors

	6. Try to remove plugins until figure out the reason
		* Remove half plugins -> test -> remove half plugins if crash -> test -> remove half plugins if crash -> repeatedly

	7. Try to remove mods or custom maps until figure out the reason
		* I don't recommend using .vpk mods in server.
		* Some weird mods or maps have custom vscript that could interfere the server.
		* Just as bad plugins cause poor performance and crashes, so do bad mods and bad maps.

	8. Let AI help analyze
		* Using ChatGPT Pro
		<br/>![image](https://github.com/user-attachments/assets/82cd76ff-cebd-4504-9d43-a03f0aad238d)
</details>

- - - -
## Others
* [Questions](/Questions_%E5%95%8F%E9%A1%8C%E5%8D%80)





