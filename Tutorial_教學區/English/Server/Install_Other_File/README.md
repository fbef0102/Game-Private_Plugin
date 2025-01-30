# Navigation
> 2024/12/9 updated by [Harry](https://steamcommunity.com/profiles/76561198026784913)
- [Navigation](#navigation)
	- [Stripper](#stripper)
	- [l4dtoolz](#l4dtoolz)
	- [TickrateEnabler](#tickrateenabler)
	- [Country and City Database](#country-and-city-database)
	- [Others](#others)

- - - -
## Stripper
* What is stripper?
	* Modify, add, delete entities on the map, even create map event
		* [Video](https://www.youtube.com/watch?v=I_-QSn8F8Cs)
	* Build the map by yourself
		* [Unlimited-Map](https://github.com/fbef0102/L4D2-Unlimited-Map)
		* [l4d2_spawn_props](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4d2_spawn_props)

* Installation
	1. Go to [Stripper:Source](https://forums.alliedmods.net/showthread.php?t=39439) and click SNAPSHOTS
	<br/>![image](https://user-images.githubusercontent.com/12229810/206858893-688521a3-6f69-469b-8a80-92470ab13db6.jpg)

	2. Search the latest version and download files depending on your system
	<br/>![image](https://user-images.githubusercontent.com/12229810/206859034-5e0c5e5e-fcbd-4329-9d27-5298025c4616.png)

	3. Unzip all files to your server same folder, press yes if ask override. You will have ```stripper``` folder in addons folder
	<br/>![image](https://user-images.githubusercontent.com/12229810/206859157-102eceeb-e5c7-4fbd-95b9-d01d2c82d963.png)

	4. Restart Server，type ```stripper_version``` in serve console
		```php
		] stripper_version
		"stripper_version" = "1.2.2"
		notify singleplayer replicated
		- Stripper Version
		```

- - - -
## l4dtoolz
*  What is l4dtoolz?
	* To unlock server slots limit, you can have 8+ players in your server
		<br/>![image](https://user-images.githubusercontent.com/12229810/206860045-582a79ea-8453-45a7-b73a-4ecfd051be6b.jpg)
	* Max slot limit is 31 in left4dead 1/2
		* [l4dmultislots](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4dmultislots)
		* [8+ Survivors In Coop](/Tutorial_%E6%95%99%E5%AD%B8%E5%8D%80/English/Game/L4D2/8%2B_Survivors_In_Coop)

* Installation
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
			//If 1, Now allow to change sv_cheats to 1
			sv_allow_lobby_connect_only 0

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

	4. (Dedicated server) By default, the game engine only allow 18 max players. To change max clients
		<br/>![image](https://github.com/user-attachments/assets/f123fe6f-fbe7-4132-b608-2b05d99d2ff1)
		* If using launch panel/software tool/linux system，please input launch parameter ```-maxplayers 31```
		<br/>![image](https://github.com/user-attachments/assets/dc605332-e20e-4c55-a429-23db7491e352)
		* Max. clients = Real players + AI Bots
		* 🟥 Server would crash if set over 31 clients

	5. Restart Server，type ```meta list``` in serve console
		```php
		] meta list
		Listing 11 plugins:
		[04] L4DToolZ (2.0.1) by Accelerator, Ivailosp
		```

	6. (Dedicated server) Install plugin [l4d_unreservelobby](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4d_unreservelobby)
		* Removes lobby reservation when server is full, allow 9+ players to join server

- - - -
## TickrateEnabler
* What is TickrateEnabler ?
	* To unlock server tickrate limit, up to 100 tickrate
		* If you don't know tickrate, please google it
		* Tickrate = Server fps
	* High Tickrate costs more cpu performance

* Installation
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
	
	4. Change the Launch Parameters.
		* ```-tickrate 100```
		
	5. Restart Server，type ```plugin_print``` in serve console
		```php
		] plugin_print
		1: 　"Tickrate_Enabler 1.5, ProdigySim"
		```

	6. Join server，open game console and type ```net_graph 4```, you will see the network usage graph on your screen, make sure tickrate is 100
	<br/>![image](https://user-images.githubusercontent.com/12229810/206861890-a37cf9d9-f5cc-4ec2-b3d3-07991cd89e1f.jpg)

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
</details>

* <details><summary>Q&A 2: Why player's tickrate is not 100?</b></summary>

	![image](https://user-images.githubusercontent.com/12229810/207044622-5c0145a3-85be-4eef-b3ec-59ec6fcaba01.png)

	* Reason: Limited by your fps, Your in-game fps must be above 100 to enjoy 100 tickrate
	<br/>![image](https://user-images.githubusercontent.com/12229810/207044800-04d8cbcb-610a-4ede-8896-d8cf992b8719.png)
	* To Solve: 
		* Method 1：Options->Video->Advanved Settings->WAIT FOR VERTICAL SYNC "Disabled"，Unlock fps limit
		<br/>![image](https://github.com/fbef0102/Game-Private_Plugin/assets/12229810/fe84f5a1-df7c-409d-9721-4ddf0984bf21)
		* Method 2：Better upgrade Graphics Card (GPU)
</details>

- - - -
## Country and City Database
* When to install?
	* Plugins that need to retrieve data from client, such as IP, country, region, city.
		* Plugin: [cannounce](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/cannounce)
	* If you have Please geoipcity.ext and geoip2.ext. please REMOVE. They are now included with SourceMod v1.11 or above

* Installation
	1. [Register on maxmind.com](https://www.maxmind.com/en/geolite2/signup) to be able to download databases

	2. My Account -> MY ACCOUNT -> GeoIP2/GeoLite2 -> Download Files
	<br/>![image](https://github.com/user-attachments/assets/a8155c2b-cf9d-49d8-a7e6-6de1ed0974c1)

	3. Seach "GeoLite2 Country" and "GeoLite2 City" -> download databases.
	<br/>![GeoLite2 Country](https://user-images.githubusercontent.com/12229810/204966692-ac339bc6-4760-4acc-b320-b776d46e7064.jpg)
	<br/>![GeoLite2 City](https://user-images.githubusercontent.com/12229810/204966795-a57a5949-abcf-4127-9325-90b9fdb8124f.jpg)

	4. Put GeoLite2-City.mmdb and GeoLite2-Country.mmdb files to path ```addons/sourcemod/configs/geoip/``` folder
	<br/>![image](https://user-images.githubusercontent.com/12229810/222086453-ee59e6c3-e61c-4a16-9aa7-8eb9d39a4d37.png)
- - - -
## Others
* [Questions](/Questions_%E5%95%8F%E9%A1%8C%E5%8D%80)




