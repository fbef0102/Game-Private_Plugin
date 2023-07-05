
# Description | 內容
Reads all available custom campaigns and display all available missions in menu

* Video | 影片展示
<br/>None

* Image
	* !admin -> Server Commands -> "List of Maps"
	<br/>![l4d_all_missions_list_1](image/l4d_all_missions_list_1.jpg)
	<br/>![l4d_all_missions_list_2](image/l4d_all_missions_list_2.jpg)

* Apply to | 適用於
    ```
    L4D1
    L4D2
    ```

* Translation Support | 支援翻譯
	```
	English
	繁體中文
	简体中文
	```

* <details><summary>Changelog | 版本日誌</summary>

    * v1.0 (2023-7-5)
        * Initial Release
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	2. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)

* Related Plugin | 相關插件
	1. [l4d_restartmap_command](https://github.com/fbef0102/Game-Private_Plugin/tree/main/Plugin_%E6%8F%92%E4%BB%B6/Map_%E9%97%9C%E5%8D%A1/l4d_restartmap_command): Admin say !restartmap to restart current map + Force of restartmap after Quantity of rounds (tries) events survivors wipe out
    	> 管理員輸入!restartmap能重新地圖關卡 + 滅團N次後重新地圖

* <details><summary>ConVar | 指令</summary>

	None
</details>

* <details><summary>Command | 命令</summary>
    
	* **Update mission list manually (Adm required: ADMFLAG_BAN)**
		```php
		sm_mission_list_update
		```
</details>

- - - -
# 中文說明
自動讀取官方地圖與所有三方地圖，並將關卡顯示在列表上，供管理員換圖用

* 圖示
	<br/>![l4d_all_missions_list_1_zho](image/zho/l4d_all_missions_list_1.jpg)
	<br/>![l4d_all_missions_list_2_zho](image/zho/l4d_all_missions_list_2.jpg)

* 原理
    * 管理員輸入!admin -> 伺服器指令 -> "地圖列表"，即可出現所有地圖與關卡表
    * 管理員選擇關卡之後，立刻換圖

* 功能
	* 自動新增三方圖的地圖與關卡，無須手動新增

* 注意事項
    1. <details><summary>安裝此插件之後</summary>

        * 安裝上這個插件並啟動伺服器之後，伺服器會自動產生以下檔案
            * data\l4d_all_missions_list_coop.txt
            * data\l4d_all_missions_list_scavenge.txt
            * data\l4d_all_missions_list_survival.txt
            * data\l4d_all_missions_list_versus.txt
    </details>

    2. <details><summary>安裝新的三方圖</summary>

        * 每當安裝三方圖時，left4dead2\addons\sourcemod\data\內的文件內容會有變化，自動新增三方圖的地圖與關卡
        * 反之，每當移除三方圖時，自動移除三方圖的地圖與關卡
            * data\l4d_all_missions_list_coop.txt
            * data\l4d_all_missions_list_scavenge.txt
            * data\l4d_all_missions_list_survival.txt
            * data\l4d_all_missions_list_versus.txt
    </details>