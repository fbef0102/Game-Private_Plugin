# 安裝總攬
> 2022/12/01 更新 by [Harry](https://steamcommunity.com/profiles/76561198026784913)
- [總攬](#安裝總攬)
    - [安裝國家與城市的資料庫](#安裝國家與城市的資料庫)
    - [其他](#其他)

- - - -
## 安裝國家與城市的資料庫
* 何時需要用到?
   * 有插件需要抓取玩家的IP、國家、城市、地區等等
      * 像是 [cannounce](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/cannounce)
   * 有安裝GeoIPCity.ext, GeoIP2.ext等等
      * 已經過時，請升級sourcemod v1.11以上

* 安裝步驟
	1. 註冊 [maxmind.com](https://www.maxmind.com/en/geolite2/signup)
	2. [到個人帳戶](https://www.maxmind.com/en/account/) -> My License Keys -> Create new license key
	3. 到這個網頁: https://www.maxmind.com/en/accounts/XXXXXX/geoip/downloads
		* XXXXXX 是你的帳戶ID
		<br/>![ID](https://user-images.githubusercontent.com/12229810/204967420-c47dd273-1c85-42ff-93b1-4d19c7ff2284.jpg)
	4. 搜尋 "GeoLite2 Country" 和 "GeoLite2 City" -> 下載資料庫
	<br/>![GeoLite2 Country](https://user-images.githubusercontent.com/12229810/204966692-ac339bc6-4760-4acc-b320-b776d46e7064.jpg)
	<br/>![GeoLite2 City](https://user-images.githubusercontent.com/12229810/204966795-a57a5949-abcf-4127-9325-90b9fdb8124f.jpg)
	5. 放 GeoLite2-City.mmdb 與 GeoLite2-Country.mmdb 到路徑 addons/sourcemod/configs/geoip/ 資料夾
	6. 重新編譯有使用 geoip.inc 的插件，大功告成

- - - -
## 其他
* [安裝伺服器與插件](/Tutorial_教學區/Chinese_繁體中文/Server/安裝伺服器與插件)
* [安裝區域房與插件](/Tutorial_教學區/Chinese_繁體中文/Server/安裝區域房與插件)
