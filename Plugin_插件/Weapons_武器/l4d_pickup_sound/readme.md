
# Description | 內容
Play sound when player pick up weapons or items

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Video | 影片展示
<br/>None

* Image | 圖示
<br/>None

* Require | 必要安裝
<br/>None

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_pickup_sound.cfg
		```php
        // 0=Plugin off, 1=Plugin on.
        l4d_pickup_sound_enable "1"

        // Pick up weapons and items - sound file (relative to to sound/, empty=disable)
        l4d_pickup_sound_file "ui/gift_pickup.wav"
		```
</details>

* <details><summary>Command | 命令</summary>
    
    None
</details>

* Apply to | 適用於
    ```
    L4D1
    L4D2
    ```

* <details><summary>Changelog | 版本日誌</summary>

    * v1.0 (2024-1-7)
        * Initial Release
</details>

- - - -
# 中文說明
玩家撿起武器或物品時播放音效

* 原理
    * 以下狀況播放音效
        1. 撿起新武器或物資
        2. 撿起瓦斯桶、汽油桶、氧氣罐、可樂瓶、精靈小矮人

* 用意在哪?
    * 懷念CS遊戲撿起武器會有音效

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d_pickup_sound.cfg
		```php
        // 0=關閉插件, 1=啟動插件
        l4d_pickup_sound_enable "1"

        // 撿起武器或物品時播放音效檔案 (路徑相對於 sound 資料夾, 空白=無音效)
        l4d_pickup_sound_file "ui/gift_pickup.wav"
		```
</details>
