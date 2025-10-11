# Description | 內容
Restore Tank burn voice sounds that exist in l4d1 game and not overridden by pain sounds

> __Note__ <br/>
This plugin is private, Please contact [me](/#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](/#私人插件列表-private-plugins-list)

* Apply to | 適用於
	```
	L4D1
	L4D2
	```

* [Video | 影片展示](https://youtu.be/qaMDRSb-cNg)

* <details><summary>How does it work?</summary>

	* (Before) Tank has unique burning voice sounds when burning, they are present in L4D1 and play when the Tank is on fire, but the regular pain sounds override them
	* (After) We can hear tank's unique burning voice, and remove pain sound when tank is on tank
		* Still play pain sound when get shot 
</details>

* Require | 必要安裝
<br/>None

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_tank_restore_burn_sound.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d_tank_restore_burn_sound_enable "1"

		// If 1, block tank pain sounds from playing when tank is burning
		l4d_tank_restore_burn_sound_block_pain "1"
		```
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.0 (2025-10-12)
		* Initial Release
</details>

- - - -
# 中文說明
恢復Tank燃燒吼叫的語音，這是L4D1早年的特色

* 原理
	* (裝此插件之前) Tank被燃燒會有燃燒的吼叫聲，但因為遊戲機制被疼痛聲蓋過
	* (裝此插件之後) Tank的燃燒吼叫聲不會被其他語音覆蓋，移除燃燒時不斷發生的疼痛聲
		* 被子彈擊中依然會有

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d_tank_restore_burn_sound.cfg
		```php
		// 0=關閉插件, 1=啟動插件
		l4d_tank_restore_burn_sound_enable "1"

		// 為1時，Tank燃燒時不會發出疼痛聲 (被子彈擊中依然會有)
		l4d_tank_restore_burn_sound_block_pain "1"
		```
</details>