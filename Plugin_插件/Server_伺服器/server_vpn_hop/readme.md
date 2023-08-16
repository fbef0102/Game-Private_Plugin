# Description | 內容
Type Command to show Server/Vpn List

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Image | 圖示
	* vpn/server list
	<br/>![server_vpn_hop_1](image/server_vpn_hop_1.jpg)

* Require | 必要安裝
<br/>None

* <details><summary>Data Config</summary

	* data/server_port_hop.cfg
		```php
		"server"
		{
			"27020" //Match Current Server Port
			{
				"num" "2" //total
				"1" //type !server to show list
				{
					"name" "Main IP"
					"ip" "1.2.3.4:7777"
					"author" "Hong Kong"
				}
				"2"
				{
					"name" "KR VPN(Test)"
					"ip" "I.am.groo.t:7777"
					"author" "USA"
				}
			}
		}
		```
</details>

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/server_vpn_hop.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		server_vpn_hop_allow "1"
		```
</details>

* <details><summary>Command | 命令</summary>

	* **Show Server/Vpn List.**
		```php
		sm_vpn
		sm_server
		```
	* **Reloads the data config.** (Admin Required: ADMFLAG_ROOT)
		```php
		sm_vpn_reload
		sm_server_reload
		```
</details>

* Apply to | 適用於
	```
	L4D1
	L4D2
	```

* <details><summary>Changelog | 版本日誌</summary>

	* v1.0
	    * Initial Release
</details>

- - - -
# 中文說明
輸入指令顯示 Server/Vpn 列表

* 功能
	1. 可自行設定顯示內容

* <details><summary>文件設定範例</summary>

	* data/server_port_hop.cfg
		```php
		"server"
		{
			"27020" //符合目前伺服器port 
			{
				"num" "2" // 顯示兩個資訊
				"1" //輸入!server顯示以下兩個內容
				{
					"name" "Main IP"
					"ip" "1.2.3.4:7777"
					"author" "Hong Kong"
				}
				"2"
				{
					"name" "KR VPN(Test)"
					"ip" "I.am.groo.t:7777"
					"author" "USA"
				}
			}
		}
		```
</details>