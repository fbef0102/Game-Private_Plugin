# Description | 內容
Prevent survivor vision from getting experiencing recoil and screen shaking when teammates or bots shoot/shove you

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Video | 影片展示
<br/>None

* Image | 圖示
<br/>None

* <details><summary>How does it work?</summary>

	* Before
		* When teammmates or ai bots shoot you
			* Has FF damage
			* Screen shaking
			* Experiencing recoil
		* When teammmates or ai bots shoves you
			* Screen shaking
			* Experiencing recoil
	* After
		* When teammates or ai bots shoot you
			* No FF damage
			* No screen shaking
			* Not getting experiencing recoil
		* When teammates or ai bots shove you
			* No screen shaking
			* Not getting experiencing recoil

	* 🟥 This plugin will disable any friendly fire bullet damage between survivors, don't install this with other plugins which modify friendly fire damage.
		* Molotove, gascan, flame, explosive proptank still does FF damage
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_block_ff_shake.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d_block_ff_shake_enable "1"

		// If 1, Block shove too
		l4d_block_ff_shake_shove "1"
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

	* v1.1 (2024-10-8)
		* Fixed shove not working on teammate who is pinned by infected

	* v1.0 (2023-4-6)
		* Initial Release
</details>

- - - -
# 中文說明
關閉子彈打中與右鍵推人造成隊友螢幕晃動與後座力降低

* 原理
	* 裝此插件之前
		* 官方預設中，當你被隊友或Bots的子彈打中
			* 有友傷
			* 使得隊友螢幕晃動
			* 隊友的後座力會降低
		* 官方預設中，當你被隊友或Bots的右鍵推到
			* 使得隊友螢幕晃動
			* 隊友的後座力會降低
	* 裝此插件之後
		* 當你被隊友或Bots的子彈打中
			* 不會造成友傷，子彈穿透隊友
			* 不會使得隊友螢幕晃動
			* 不會使得隊友的後座力降低
		* 當你被隊友或Bots的右鍵推到
			* 不會使得隊友螢幕晃動
			* 不會使得隊友的後座力降低
	* 🟥 安裝上此插件會使得倖存者的子彈友傷強制變成0，會與其他有關友傷的插件產生衝突
		* 火燒傷、瓦斯桶爆炸依然會有傷害

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d_block_ff_shake.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		l4d_block_ff_shake_enable "1"

		// 為1時，關閉右鍵推人造成隊友螢幕晃動與後座力降低
		l4d_block_ff_shake_shove "1"
		```
</details>