# Description | 內容
Turns special infected immunes to survivors's fire, exploisve, shove, melee... various damamge type (Also apply to AI)

> __Note__ <br/>
This plugin is private, Please contact [me](/#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](/#私人插件列表-private-plugins-list)

* Apply to | 適用於
	```
	L4D2
	```

* [Video | 影片展示](https://youtu.be/53aA3nE-B8g)

* Image | 圖示
	<br/>![l4d_si_immunity_1](image/l4d_si_immunity_1.gif)
	<br/>![l4d_si_immunity_2](image/l4d_si_immunity_2.gif)
	<br/>![l4d_si_immunity_3](image/l4d_si_immunity_3.gif)

* <details><summary>How does it work?</summary>

	* Special Infected Immune Damage (If attacked by survivor)
		* shove (Block Shove stagger)
		* molotive, gascan, fireworks.... (DMG_BURN)
		* pipepomb, proptank, oxytank... (DMG_BLAST)
		* chainsaw (DMG_DISSOLVE)
		* fire bullet (DMG_BURN & DMG_BULLET)
		* explosive bullet (DMG_BLAST & DMG_BULLET)
		* melee weapon (DMG_SLASH or DMG_CLUB)
		* Grenade Launcher (No dmg, but still get stumble)
	* Apply to both human and AI infected
</details>

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_si_immunity.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d_si_immunity_enable "1"

		// Which special infected should be immune to survivor's shove (Block Shove stagger).
		// 1 = SMOKER, 2 = BOOMER, 4 = HUNTER, 8 = SPITTER, 16 = JOCKEY, 32 = CHARGER, 64 = TANK.
		// Add numbers together for multiple options. (127=all SI)
		l4d_si_immunity_shove_flag "127"

		// Which special infected should be immune to survivor's molotive, gascan, fireworks.... (DMG_BURN).
		// 1 = SMOKER, 2 = BOOMER, 4 = HUNTER, 8 = SPITTER, 16 = JOCKEY, 32 = CHARGER, 64 = TANK.
		// Add numbers together for multiple options. (127=all SI)
		l4d_si_immunity_fire_flag "127"

		// Which special infected should beimmune to survivor's pipepomb, proptank, oxytank... (DMG_BLAST).
		// 1 = SMOKER, 2 = BOOMER, 4 = HUNTER, 8 = SPITTER, 16 = JOCKEY, 32 = CHARGER, 64 = TANK.
		// Add numbers together for multiple options. (127=all SI)
		l4d_si_immunity_blast_flag "127"

		// Which special infected should be immune to survivor's chainsaw (DMG_DISSOLVE).
		// 1 = SMOKER, 2 = BOOMER, 4 = HUNTER, 8 = SPITTER, 16 = JOCKEY, 32 = CHARGER, 64 = TANK.
		// Add numbers together for multiple options. (127=all SI)
		l4d_si_immunity_chainsaw_flag "127"

		// Which special infected should be immune to survivor's fire bullet (DMG_BURN & DMG_BULLET).
		// 1 = SMOKER, 2 = BOOMER, 4 = HUNTER, 8 = SPITTER, 16 = JOCKEY, 32 = CHARGER, 64 = TANK.
		// Add numbers together for multiple options. (127=all SI)
		l4d_si_immunity_firebullet_flag "127"

		// Which special infected should be immune to survivor's explosive bullet (DMG_BLAST & DMG_BULLET).
		// 1 = SMOKER, 2 = BOOMER, 4 = HUNTER, 8 = SPITTER, 16 = JOCKEY, 32 = CHARGER, 64 = TANK.
		// Add numbers together for multiple options. (127=all SI)
		l4d_si_immunity_blastbullet_flag "127"

		// Which special infected should be immune to survivor's melee weapon (DMG_SLASH or DMG_CLUB).
		// 1 = SMOKER, 2 = BOOMER, 4 = HUNTER, 8 = SPITTER, 16 = JOCKEY, 32 = CHARGER, 64 = TANK.
		// Add numbers together for multiple options. (127=all SI)
		l4d_si_immunity_melee_flag "127"

		// Which special infected should be immune to survivor's grenade launcher (No dmg, but still get stumble).
		// 1 = SMOKER, 2 = BOOMER, 4 = HUNTER, 8 = SPITTER, 16 = JOCKEY, 32 = CHARGER, 64 = TANK.
		// Add numbers together for multiple options. (127=all SI)
		l4d_si_immunity_grenade_launcher_flag "127"
		```
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.0h (2023-8-14)
		* Initial Release

	* Credit
		* [Special Infected Immunities By Psyk0tik](https://forums.alliedmods.net/showthread.php?t=310443)
		* [Special Infected Shove Immunity By arttt](https://forums.alliedmods.net/showthread.php?t=334434)
</details>

- - - -
# 中文說明
特感免疫人類的火焰、高爆彈、近戰武器、電鋸、震退....等等各種傷害 (AI特感也適用)

* 原理
	* 真人與AI特感都適用
	* 特感免疫的傷害有 (如果是倖存者攻擊)
		* 人類右鍵推，不會被震退
		* 火瓶、汽油桶、煙火盒等等...，不會著火
		* 土製炸彈、瓦斯桶、氧氣罐等等...，不會被爆炸震退
		* 電鋸，不會被鋸死
		* 火焰子彈，不會著火也不會有傷害
		* 高爆子彈，不會被震退也不會有傷害
		* 近戰武器，不會被砍死
		* 榴彈發射器，不會有傷害但會被震退

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d_si_immunity.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		l4d_si_immunity_enable "1"

		// 哪些特感免疫人類的右鍵推 (不會被震退).
		// 1 = SMOKER, 2 = BOOMER, 4 = HUNTER, 8 = SPITTER, 16 = JOCKEY, 32 = CHARGER, 64 = TANK.
		// 請將數字相加起來. (127=全部)
		l4d_si_immunity_shove_flag "127"

		// 哪些特感免疫人類的火瓶、汽油桶、煙火盒等等... (不會著火).
		// 1 = SMOKER, 2 = BOOMER, 4 = HUNTER, 8 = SPITTER, 16 = JOCKEY, 32 = CHARGER, 64 = TANK.
		// 請將數字相加起來. (127=全部)
		l4d_si_immunity_fire_flag "127"

		// 哪些特感免疫人類的土製炸彈、瓦斯桶、氧氣罐等等... (不會被爆炸震退).
		// 1 = SMOKER, 2 = BOOMER, 4 = HUNTER, 8 = SPITTER, 16 = JOCKEY, 32 = CHARGER, 64 = TANK.
		// 請將數字相加起來. (127=全部)
		l4d_si_immunity_blast_flag "127"

		// 哪些特感免疫人類的電鋸 (不會被鋸死).
		// 1 = SMOKER, 2 = BOOMER, 4 = HUNTER, 8 = SPITTER, 16 = JOCKEY, 32 = CHARGER, 64 = TANK.
		// 請將數字相加起來. (127=全部)
		l4d_si_immunity_chainsaw_flag "127"

		// 哪些特感免疫人類的火焰子彈 (不會著火).
		// 1 = SMOKER, 2 = BOOMER, 4 = HUNTER, 8 = SPITTER, 16 = JOCKEY, 32 = CHARGER, 64 = TANK.
		// 請將數字相加起來. (127=全部)
		l4d_si_immunity_firebullet_flag "127"

		// 哪些特感免疫人類的高爆子彈 (不會被震退).
		// 1 = SMOKER, 2 = BOOMER, 4 = HUNTER, 8 = SPITTER, 16 = JOCKEY, 32 = CHARGER, 64 = TANK.
		// 請將數字相加起來. (127=全部)
		l4d_si_immunity_blastbullet_flag "127"

		// 哪些特感免疫人類的近戰武器 (不會被砍死).
		// 1 = SMOKER, 2 = BOOMER, 4 = HUNTER, 8 = SPITTER, 16 = JOCKEY, 32 = CHARGER, 64 = TANK.
		// 請將數字相加起來. (127=全部)
		l4d_si_immunity_melee_flag "127"

		// 哪些特感免疫人類的榴彈發射器 (不會有傷害但會被震退)
		// 1 = SMOKER, 2 = BOOMER, 4 = HUNTER, 8 = SPITTER, 16 = JOCKEY, 32 = CHARGER, 64 = TANK.
		// 請將數字相加起來. (127=全部)
		l4d_si_immunity_grenade_launcher_flag "127"
		```
</details>
