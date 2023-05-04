# Description | 內容
shoot teammate = shoot yourself V2

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Video | 影片展示
<br/>None

* Image | 圖示
<br/>None

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

	* v1.6 (2023-5-4)
		* Fixed Melee damage

	* v1.5
		* Request by Yabi
		* Translation Support

	* v1.4
		* Original Request by Yabi
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	2. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)

* Similar Plugin | 相似插件
	1. [anti-friendly_fire](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/anti-friendly_fire): shoot teammate = shoot yourself simple version
		> 簡單版反傷插件
	2. [anti-friendly_fire_RPG](https://github.com/fbef0102/Game-Private_Plugin/tree/main/anti-friendly_fire_RPG): shoot teammate = shoot yourself RPG
		> 反傷插件，但是有更多的功能

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/anti-friendly_fire_V2.cfg
		```php
		// Changes how ff announce displays FF damage. (0: Off, 1:In chat; 2: In Hint Box; 3: In center text)
		anti-friendly_fire_V2_announce_type "1"

		// How to handle FF damage to player who is carried by charger ? 0=Game behavior, 1=immune no damage, 2=reflect damage, add numbers together
		anti-friendly_fire_V2_apply_charger_flag "1"

		// How to handle FF Pipe Bomb, Propane Tank, and Oxygen Tank damage ? 0=Game behavior, 1=immune no damage, 2=reflect damage, add numbers together
		anti-friendly_fire_V2_apply_explode_flag "0"

		// How to handle FF flame damage ? 0=Game behavior, 1=immune no damage, 2=reflect damage, add numbers together
		anti-friendly_fire_V2_apply_fire_flag "1"

		// How to handle FF damage to hanging from ledge player ? 0=Game behavior, 1=immune no damage, 2=reflect damage, add numbers together
		anti-friendly_fire_V2_apply_hang_flag "1"

		// How to handle FF damage to incapacitated player ? 0=Game behavior, 1=immune no damage, 2=reflect damage, add numbers together
		anti-friendly_fire_V2_apply_incap_flag "1"

		// How to handle FF Melee damage ? 0=Game behavior, 1=immune no damage, 2=reflect damage, add numbers together
		anti-friendly_fire_V2_apply_melee_flag "1"

		// How to handle FF Gun damage ? 0=Game behavior, 1=immune no damage, 2=reflect damage, add numbers together
		anti-friendly_fire_V2_apply_weapon_flag "3"

		// [1=Enable, 0=Disable]
		anti-friendly_fire_V2_enable "1"

		// How much distance range between attacker and victim are immune to ff (0=Off).
		anti-friendly_fire_V2_immune_range "50.0"

		```
</details>

* <details><summary>Command | 命令</summary>
	None
</details>

- - - -
# 中文說明
隊友開槍射你會反彈傷害，第二版本

* 原理
	* 插件自帶傷害提示
	* 切勿與其他會修改友傷的插件並用

* 功能
	* 過一段時間總計算友傷，然後反彈給攻擊者
	* 可設置倒地者不受到友傷
	* 可設置近戰武器不造成友傷
	* 可設置隊友太近不會造成友傷
	* 可設置火焰不造成友傷
	* 可設置土製炸彈、瓦斯罐、氧氣罐不造成友傷
	* 被Charger抓住的玩家不會受到友傷

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/anti-friendly_fire_V2.cfg
		```php
		// 如何顯示友傷提示. (0=關閉, 1:聊天視窗; 2: Hint視窗; 3: 畫面中心)
		anti-friendly_fire_V2_announce_type "1"

		// 被Charger抓住的玩家 受到友傷如何處置? 0=不處理, 1=免疫不受傷, 2=反彈傷害, 數字可相加
		anti-friendly_fire_V2_apply_charger_flag "1"

		// 土製炸彈、瓦斯罐、氧氣罐 造成的友傷如何處置? 0=不處理, 1=免疫不受傷, 2=反彈傷害, 數字可相加
		anti-friendly_fire_V2_apply_explode_flag "0"

		// 火 造成的友傷如何處置? 0=不處理, 1=免疫不受傷, 2=反彈傷害, 數字可相加
		anti-friendly_fire_V2_apply_fire_flag "1"

		// 掛邊玩家 受到友傷如何處置? 0=不處理, 1=免疫不受傷, 2=反彈傷害, 數字可相加
		anti-friendly_fire_V2_apply_hang_flag "1"

		// 倒地玩家 受到友傷如何處置? 0=不處理, 1=免疫不受傷, 2=反彈傷害, 數字可相加
		anti-friendly_fire_V2_apply_incap_flag "1"

		// 近戰武器 造成的友傷如何處置? 0=不處理, 1=免疫不受傷, 2=反彈傷害, 數字可相加
		anti-friendly_fire_V2_apply_melee_flag "1"

		// 槍械 造成的友傷如何處置? 0=不處理, 1=免疫不受傷, 2=反彈傷害, 數字可相加
		anti-friendly_fire_V2_apply_weapon_flag "3"

		// [1=開啟插件, 0=關閉插件]
		anti-friendly_fire_V2_enable "1"

		// 與隊友距離多近不會造成友傷 (0=關閉).
		anti-friendly_fire_V2_immune_range "50.0"
		```
</details>

