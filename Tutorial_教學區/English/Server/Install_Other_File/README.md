# Navigation
> 2022/12/10 updated by [Harry](https://steamcommunity.com/profiles/76561198026784913)
- [Navigation](#navigation)
	- [Stripper](#stripper)
	- [l4dtoolz](#l4dtoolz)
	- [TickrateEnabler](#tickrateEnabler)
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
   * Max slot limit is 32 in left4dead 1/2
	  * [l4dmultislots](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4dmultislots)
	  * [8+ Survivors In Coop](/Tutorial_%E6%95%99%E5%AD%B8%E5%8D%80/English/Game/L4D2/8%2B_Survivors_In_Coop)

* Installation
	1. Go to [accelerator74/l4dtoolz](https://github.com/accelerator74/l4dtoolz) and click Releases
	<br/>![_(%L7(%@Z%DZ(974L7%XE00](https://user-images.githubusercontent.com/12229810/206860230-7085fb8d-1114-44ba-bd1e-ab754958a087.png)

	2. Download files depending on your game，L4D1 or L4D2
	<br/>![4`U5GY0 SAN5_O19FKOSUKV](https://user-images.githubusercontent.com/12229810/206860254-1b7d7782-ca85-4fc6-971f-6c4c52dabc7e.png)

	3. Unzip all files to your server same folder, press yes if ask override. You will have ```l4dtoolz``` folder in addons folder
	<br/>![image](https://user-images.githubusercontent.com/12229810/206860306-d0fead16-9997-410d-93cc-bca7109d5977.png)

	4. Write down the following cvars in cfg/server.cfg
		* If you don't have server.cfg, then create it
		```php
		// Server slot is 18, free to modify value
		sv_maxplayers 18
		sv_visiblemaxplayers 18

		// Don't change the following cvars
		sv_allow_lobby_connect_only 0
		sv_force_unreserved 1
		```

	5. Restart Server，type ```stripper_version``` in serve console
		```php
		] meta list
		Listing 11 plugins:
		[04] L4DToolZ (1.1.0.2) by Accelerator, Ivailosp
		```

- - - -
## TickrateEnabler
* What is TickrateEnabler ?
   * To unlock server tickrate limit, up to 100 tickrate
	  * If you don't know tickrate, please google it
	  * Tickrate = Server fps
   * High Tickrate costs more cpu performance

* Installation
	1. Go to [accelerator74/Tickrate-Enabler](https://github.com/accelerator74/Tickrate-Enabler) and click Releases
	<br/>![_Q95S({QEHUBC0TJ4BCSVDB](https://user-images.githubusercontent.com/12229810/206860906-b6910d12-acfc-47ba-a31f-3093917a14d6.png)

	2. Download files depending on your game，L4D1 or L4D2
	<br/>![YT%1 VRS SYC_WX}E3YIOE6](https://user-images.githubusercontent.com/12229810/206860927-5913948b-7d8d-4127-8301-7ca92c03ad29.png)

	3. Unzip all files to your server same folder, press yes if ask override. You will have ```tickrate_enabler``` folder in addons folder
	<br/>![(@CS(}HMX}BFZ7QYJZ`%(1J](https://user-images.githubusercontent.com/12229810/206860975-1bc616cc-5e1c-4bfb-88b4-af699e302287.png)

	4. Write down the following cvars in cfg/server.cfg
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
	
	5. Change the Launch Parameters.
		* ```-tickrate 100```
		
	6. Restart Server，type ```plugin_print``` in serve console
		```php
		] plugin_print
		1: 　"Tickrate_Enabler 1.5, ProdigySim"
		```

	7. Join server，open game console and type ```net_graph 4```, you will see the network usage graph on your screen, make sure tickrate is 100
	<br/>![image](https://user-images.githubusercontent.com/12229810/206861890-a37cf9d9-f5cc-4ec2-b3d3-07991cd89e1f.jpg)

	> __Warning__ 
	> * High Tickrate costs more cpu performance, you can adjust tickrate to 60 or 45
	> * Need to modify server.cfg and Launch Parameters together to change tickrate

- - - -
## Country and City Database
* When to install?
   * Plugins that need to retrieve data from client, such as IP, country, region, city.
      * Plugin: [cannounce](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/cannounce)
   * You have GeoIPCity.ext or GeoIP2.ext
      * Unsupported, they are now included with SourceMod v1.11 or above

* Installation
	1. [Register on maxmind.com](https://www.maxmind.com/en/geolite2/signup) to be able to download databases

	2. [Go to account](https://www.maxmind.com/en/account/) -> My License Keys -> Create new license key.  

	3. Go to this page: https://www.maxmind.com/en/accounts/XXXXXX/geoip/downloads
		* XXXXXX is your account ID
		<br/>![ID](https://user-images.githubusercontent.com/12229810/205027221-05798d84-08ab-40c3-8d54-ef66a892c295.jpg)

	4. Seach "GeoLite2 Country" and "GeoLite2 City" -> download databases.
	<br/>![GeoLite2 Country](https://user-images.githubusercontent.com/12229810/204966692-ac339bc6-4760-4acc-b320-b776d46e7064.jpg)
	<br/>![GeoLite2 City](https://user-images.githubusercontent.com/12229810/204966795-a57a5949-abcf-4127-9325-90b9fdb8124f.jpg)

	5. Put mmdb database files to path addons/sourcemod/configs/geoip/ folder
	<br/>![image](https://user-images.githubusercontent.com/12229810/222086453-ee59e6c3-e61c-4a16-9aa7-8eb9d39a4d37.png)
	
	6. Recompile all plugins that use geoip.inc, done.

- - - -
## Others
* [Questions](/Questions_%E5%95%8F%E9%A1%8C%E5%8D%80)




