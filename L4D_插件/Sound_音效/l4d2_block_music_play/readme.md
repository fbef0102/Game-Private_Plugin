# Description | 內容
Block specific music or song from playing to clients

> __Note__ <br/>
This plugin is private, Please contact [me](/#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](/#私人插件列表-private-plugins-list)

* Apply to | 適用於
	```
	L4D1
	L4D2
	```

* [Video | 影片展示](https://youtu.be/pAFlwoM-L4Q)

* <details><summary>How does it work?</summary>

	* Block specific music or song from playing to clients, Such as
		* Tank music
		* Hunter pounce you music
		* Horde music
	* (L4D2) You can filter music list in file: [data/block_music_play_l4d2.cfg](data/block_music_play_l4d2.cfg)
	* (L4D1) You can filter music list in file: [data/block_music_play_l4d1.cfg](data/block_music_play_l4d1.cfg)
</details>

* Require | 必要安裝
<br/>None

* Directory Structure | 檔案結構
	```php
    /
    ├── data/
    │   └── block_music_play_l4d2.txt            # (L4D2) filter music list | 篩選音樂
    │   └── block_music_play_l4d1.txt            # (L4D1) filter music list | 篩選音樂
    ├── gamedata/
    │   └── l4d2_block_music_play.txt            # GameData | 遊戲數據
    ├── plugins/
    │   └── l4d2_block_music_play.smx            # Compiled plugin | 已編譯的插件
    └── scripting/
        └── l4d2_block_music_play.sp             # Source code | 源碼
    ```

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d2_block_music_play.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d2_block_music_play_enable "1"

		// (L4D2) 0=Block all bgm and music to client, 1=Use data/block_music_play_l4d2.cfg to filter music list
		l4d2_block_music_play_type "1"

		// (L4D1) 0=Block all bgm and music to client, 1=Use data/block_music_play_l4d1.cfg to filter music list
		l4d2_block_music_play_type "1"
		```
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.1 (2026-10-25)
		* Support L4D1
		* Update data

	* v1.0 (2025-2-15)
		* Initial Release

	* Original & Credit
		* [Lux](https://github.com/LuxLuma/L4DMusic_stuff/tree/master/MusicCmdFilter)
</details>

- - - -
# 中文說明
阻擋背景音樂或BGM播放給玩家聽，譬如: Tank BGM, 屍潮音樂, 被特感控的音樂, 倒地或掛邊時音樂

* 原理
	* 可以適用於伺服器所有玩家
	* (L4D2) 使用文件[data/block_music_play_l4d2.cfg](data/block_music_play_l4d2.cfg) 篩選音樂
	* (L4D1) 使用文件[data/block_music_play_l4d1.cfg](data/block_music_play_l4d1.cfg) 篩選音樂

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d2_block_music_play.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		l4d2_block_music_play_enable "1"

		// (L4D2) 0=阻擋所有音樂與BGM播放, 1=使用文件 data/block_music_play_l4d2.cfg 篩選音樂
		l4d2_block_music_play_type "1"

		// (L4D1) 0=阻擋所有音樂與BGM播放, 1=使用文件 data/block_music_play_l4d1.cfg 篩選音樂
		l4d2_block_music_play_type "1"
		```
</details>