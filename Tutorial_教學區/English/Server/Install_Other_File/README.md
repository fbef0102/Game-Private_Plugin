# Navigation
> 2022/12/01 updated by [Harry](https://steamcommunity.com/profiles/76561198026784913)
- [Navigation](#navigation)
    - [Country and City Database](#country-and-city-database)
	- [Others](#others)

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
	6. Recompile all plugins that use geoip.inc, done.

- - - -
## Others
* [Questions](/Questions_%E5%95%8F%E9%A1%8C%E5%8D%80)




