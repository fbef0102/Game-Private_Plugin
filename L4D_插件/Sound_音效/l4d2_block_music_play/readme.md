# Description | 內容
Block specific music or song from playing to clients

> __Note__ <br/>
This plugin is private, Please contact [me](/#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](/#私人插件列表-private-plugins-list)

* Apply to | 適用於
	```
	L4D2
	```

* <details><summary>How does it work?</summary>

	* Block specific music or song from playing to clients, Such as
		* Tank music
		* Hunter pounce you music
		* Horde music
	* You can filter music list in file: [data/l4d2_block_music_play.cfg](data/l4d2_block_music_play.cfg)
</details>

* Require | 必要安裝
<br/>None

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d2_block_music_play.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d2_block_music_play_enable "1"

		// 0=Block all bgm and music to client, 1=Use data/l4d2_block_music_play.cfg to filter music list
		l4d2_block_music_play_type "1"
		```
</details>

* <details><summary>Changelog | 版本日誌</summary>

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
	* 使用文件[data/l4d2_block_music_play.cfg](data/l4d2_block_music_play.cfg) 篩選音樂

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d2_block_music_play.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		l4d2_block_music_play_enable "1"

		// 0=阻擋所有音樂與BGM播放, 1=使用文件 data/l4d2_block_music_play.cfg 篩選音樂
		l4d2_block_music_play_type "1"
		```
</details>