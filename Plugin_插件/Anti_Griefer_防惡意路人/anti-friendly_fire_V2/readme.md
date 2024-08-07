# Description | 內容
shoot teammate = shoot yourself V2

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Video | 影片展示
<br/>None

* Image | 圖示
<br/>None

* <details><summary>How does it work?</summary>

	* Immune every friendly fire damage or reflict to attacker, see "ConVar" below
	* Announce total ff damage after 1 second
	* 🟥 Do not use with other plugin which modify friendly fire damage.
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	2. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/anti-friendly_fire_V2.cfg
		```php
		// [1=Enable, 0=Disable]
		anti-friendly_fire_V2_enable "1"

		// Changes how ff announce displays FF damage. (0: Off, 1:In chat; 2: In Hint Box; 3: In center text)
		anti-friendly_fire_V2_announce_type "1"

		// How to handle FF flame damage ? 0=Game behavior, 1=immune no damage, 2=reflect damage, add numbers together
		anti-friendly_fire_V2_apply_fire_flag "1"

		// How to handle FF Pipe Bomb, Propane Tank, and Oxygen Tank damage ? 0=Game behavior, 1=immune no damage, 2=reflect damage, add numbers together
		anti-friendly_fire_V2_apply_explode_flag "0"

		// How to handle FF Gun damage ? 0=Game behavior, 1=immune no damage, 2=reflect damage, add numbers together
		anti-friendly_fire_V2_apply_weapon_flag "3"

		// How to handle FF damage to incapacitated player ? 0=Game behavior, 1=immune no damage, 2=reflect damage, add numbers together
		anti-friendly_fire_V2_apply_incap_flag "1"

		// How to handle FF damage to hanging from ledge player ? 0=Game behavior, 1=immune no damage, 2=reflect damage, add numbers together
		anti-friendly_fire_V2_apply_hang_flag "1"

		// (L4D2) How to handle FF Melee/Chainsaw damage ? 0=Game behavior, 1=immune no damage, 2=reflect damage, add numbers together
		anti-friendly_fire_V2_apply_melee_flag "1"

		// (L4D2) How to handle FF damage to player who is carried by charger ? 0=Game behavior, 1=immune no damage, 2=reflect damage, add numbers together
		anti-friendly_fire_V2_apply_charger_flag "1"

		// (L4D2) How to handle Grenade Launcher damage ? 0=Game behavior, 1=immune no damage, 2=reflect damage, add numbers together
		anti-friendly_fire_V2_apply_GL_flag "1"

		// How much distance range between attacker and victim are immune to ff (0=Off).
		anti-friendly_fire_V2_immune_range "50.0"

		// Immune FF damage when in saferoom 
		// 1=Start Safe room
		// 2=End Safe room
		// 3=Both
		anti-friendly_fire_V2_saferoom "3"
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

* <details><summary>Translation Support | 支援翻譯</summary>

	```
	English
	繁體中文
	简体中文
	```
</details>

* <details><summary>Similar Plugin | 相似插件</summary>
	
	1. [anti-friendly_fire](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/anti-friendly_fire): shoot teammate = shoot yourself simple version
		> 簡單版反傷插件
	2. [anti-friendly_fire_RPG](/Plugin_插件/Anti_Griefer_防惡意路人/anti-friendly_fire_RPG): shoot teammate = shoot yourself RPG
		> 反傷插件，但是有更多的功能
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.8 (2024-8-7)
		* Add Gamedata
		* Optimize code and improve performance
		* Update cvars
		
	* v1.7 (2023-11-18)
		* Add Chainsaw damage
		* Fixed fire bullet damage
		* Add grenade launcher damage

	* v1.6 (2023-5-4)
		* Fixed Melee damage

	* v1.5
		* Translation Support

	* v1.4
		* Initial Release
</details>

- - - -
# 中文說明
隊友開槍射你會反彈傷害，第二版本

* 原理
	* 控制每個友傷的種類，免疫受傷或者反彈傷害，詳見下方"指令中文介紹"
	* 插件自帶傷害提示
	* 一秒後計算總友傷，然後反彈給攻擊者
	* 🟥切勿與其他會修改友傷的插件並用

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/anti-friendly_fire_V2.cfg
		```php
		// [1=開啟插件, 0=關閉插件]
		anti-friendly_fire_V2_enable "1"

		// 如何顯示友傷提示. (0=關閉, 1:聊天視窗; 2: Hint視窗; 3: 畫面中心)
		anti-friendly_fire_V2_announce_type "1"

		// 火 造成的友傷如何處置? 0=不處理, 1=免疫不受傷, 2=反彈傷害, 數字可相加
		anti-friendly_fire_V2_apply_fire_flag "1"

		// 土製炸彈、瓦斯罐、氧氣罐 造成的友傷如何處置? 0=不處理, 1=免疫不受傷, 2=反彈傷害, 數字可相加
		anti-friendly_fire_V2_apply_explode_flag "0"

		// 槍械 造成的友傷如何處置? 0=不處理, 1=免疫不受傷, 2=反彈傷害, 數字可相加
		anti-friendly_fire_V2_apply_weapon_flag "3"

		// 倒地玩家 受到友傷如何處置? 0=不處理, 1=免疫不受傷, 2=反彈傷害, 數字可相加
		anti-friendly_fire_V2_apply_incap_flag "1"

		// 掛邊玩家 受到友傷如何處置? 0=不處理, 1=免疫不受傷, 2=反彈傷害, 數字可相加
		anti-friendly_fire_V2_apply_hang_flag "1"

		// (L4D2) 近戰武器/電鋸 造成的友傷如何處置? 0=不處理, 1=免疫不受傷, 2=反彈傷害, 數字可相加
		anti-friendly_fire_V2_apply_melee_flag "1"

		// (L4D2) 被Charger抓住的玩家 受到友傷如何處置? 0=不處理, 1=免疫不受傷, 2=反彈傷害, 數字可相加
		anti-friendly_fire_V2_apply_charger_flag "1"

		// (L4D2) 榴彈發射器 造成的友傷如何處置? 0=不處理, 1=免疫不受傷, 2=反彈傷害, 數字可相加
		anti-friendly_fire_V2_apply_GL_flag "1"

		// 與隊友距離多近不會造成友傷 (0=關閉).
		anti-friendly_fire_V2_immune_range "50.0"

		// 在安全室內不會造成友傷
		// 1=起始安全室
		// 2=終點安全室
		// 3=起始+終點安全室
		anti-friendly_fire_V2_saferoom "3"
		```
</details>

