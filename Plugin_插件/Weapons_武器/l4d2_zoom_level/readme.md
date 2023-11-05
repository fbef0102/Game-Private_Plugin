
# Description | 內容
Everyone can change zoom level for snipers (You can see much further while scope)

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/9mYmhI5su9I)

* Image | 圖示
	* Use !zoom command to change zoom level (狙擊槍改變縮放級別)
    <br/>![l4d2_zoom_level_1](image/l4d2_zoom_level_1.jpg)
    <br/>![l4d2_zoom_level_2](image/l4d2_zoom_level_2.jpg)

* Require | 必要安裝
    1. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d2_zoom_level.cfg
		```php
        // 0=Plugin off, 1=Plugin on.
        l4d2_zoom_level_enable "1"
		```
</details>

* <details><summary>Command | 命令</summary>
    
    * **Change Zoom Level, the smaller the number is, the further distance you can see while scope**
		```php
        sm_zoom <number>
		```
</details>

* Apply to | 適用於
    ```
    L4D2
    ```

* <details><summary>Translation Support | 支援翻譯</summary>

	```
	English
	繁體中文
	简体中文
	```
</details>

* <details><summary>Changelog | 版本日誌</summary>

    * v1.0h (2023-11-05)
        * Add cvars and change default zoom level

    * v1.1
	    * Add cmd: sm_zoom

    * v0.0
	    * [By BHaType](https://forums.alliedmods.net/showthread.php?t=317993)
</details>

- - - -
# 中文說明
玩家使用指令調整狙擊鏡的遠近範圍 (可以看得更遠)

* 原理
    * 狙擊鏡自行調整遠近範圍
    * 每個玩家使用命令```!zoom```調整自己的狙擊鏡

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d2_zoom_level.cfg
		```php
        // 0=關閉插件, 1=啟動插件
        l4d2_zoom_level_enable "1"
		```
</details>

* <details><summary>命令中文介紹 (點我展開)</summary>

    * **狙擊槍改變縮放級別，指定數字，數字越小，看得越遠**
        ```php
        sm_zoom <數字>
        ```
</details>
