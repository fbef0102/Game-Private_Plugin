# Description | 內容
Notify people when player is black and white.

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/waEnN2M3Vm0)

* Image | 圖示
	* display who is black and white
	> 顯示哪個玩家黑白
	<br/>![l4d_blackandwhite_1](image/l4d_blackandwhite_1.jpg)

* Apply to | 適用於
```
L4D1
L4D2
```

* <details><summary>Changelog | 版本日誌</summary>

    ```php
	//DarkNoghri @ 2009-2010
	//Harry @ 2022
    ```
	* v1.6
        * Remake Code
        * Rmove white glow when player is not black and white
	
    * v1.31
        * [Original Post by DarkNoghri](https://forums.alliedmods.net/showthread.php?p=951787)
</details>

* Require | 必要安裝
<br/>None

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_blackandwhite.cfg
	```php
    // (L4D2 only) 0=turns glow off, 1=turns glow on.
    l4d_bandw_glow "0"

    // 0=turns notifications off, 1=notifies survivors, 2=notifies all, 3=notifies infected.
    l4d_bandw_notice "1"

    // 0=prints to chat, 1=displays hint box.
    l4d_bandw_type "1"
	```
</details>

* <details><summary>Command | 命令</summary>
	None
</details>

- - - -
# 中文說明
誰是黑白狀態(最後一條生命)

* 功能
	1. 救起玩家之後判定玩家是否為黑白狀態
    2. 只有二代才能有白色光環
