# Description | 內容
Gives the Survivors a health glow around them.
<br/>+
<br/>For the infected, survivors always glow with a non-disappearing aura. (Even if survivor doesn't move or walk)

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Apply to | 適用於
	```
	L4D2
	```

* [Video | 影片展示](https://youtu.be/0MkBgAibf3U)

* <details><summary>Image | 圖示</summary>

	* Last life, low health, medium health, high health (黑白狀態、低生命值、中生命值、高生命值)
	<br/>![l4d2healthglow_1](image/l4d2healthglow_1.jpg)
	* For the infected, survivors always glow with a non-disappearing aura. (Even if survivor doesn't move or walk)
	* 對抗模式中，特感永遠能看到人類光圈 (即使人類靜走或不動)
	<br/>![l4d2healthglow_2](image/l4d2healthglow_2.jpg)
	<br/>![l4d2healthglow_3](image/l4d2healthglow_3.jpg)
	* Purple Glow when get vomit (被噴時，有紫色光圈)
	<br/>![l4d2healthglow_4](image/l4d2healthglow_4.gif)
	* Support Lux's Model Changer (支援模組改變)
	<br/>![l4d2healthglow_5](image/l4d2healthglow_5.gif)
</details>

> __Warning__ This plugin does not work in realism mode

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
	2. [Attachments API](https://forums.alliedmods.net/showthread.php?t=325651)
	3. [ThirdPersonShoulder_Detect](https://forums.alliedmods.net/showthread.php?t=298649)

* <details><summary>Support | 支援插件</summary>

	1. [l4d_h_csm](/L4D_插件/Survivor_人類/l4d_h_csm): Allows players to change their L4D1/2 character or model in-game!
		* 允許玩家在遊戲中更換一二代角色
	2. [Lux's Model Changer](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/Luxs-Model-Changer): LMC Allows you to use most models with most characters
		* 可以自由變成其他角色或NPC的模組
</details>

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d2healthglow.cfg
		```php
		// 0=Plugin off, 1=Plugin on.
		l4d2healthglow_enable "1"

		// High Health Glow Color. Three values between 0-255 separated by spaces. RGB Color255 - Red Green Blue.
		l4d2healthglow_high_color "0 200 0"

		// If 1, High Health Glow Flashing
		l4d2healthglow_high_flashing "0"

		// High Health Glow Mini Range
		l4d2healthglow_high_mini_range "0"

		// High Health Glow Range
		l4d2healthglow_high_range "0"

		// Medium Health Glow Color. Three values between 0-255 separated by spaces. RGB Color255 - Red Green Blue.
		l4d2healthglow_medium_color "200 200 0"

		// If 1, Medium Health Glow Flashing
		l4d2healthglow_medium_flashing "0"

		// Medium health must be equal to or lower than this value
		l4d2healthglow_medium_hp "39"

		// Medium Health Glow Mini Range
		l4d2healthglow_medium_mini_range "0"

		// Medium health Glow Range
		l4d2healthglow_medium_range "0"

		// Low Health Glow Color. Three values between 0-255 separated by spaces. RGB Color255 - Red Green Blue.
		l4d2healthglow_low_color "200 0 0"

		// If 1, Low Health Glow Flashing
		l4d2healthglow_low_flashing "0"

		// Low health must be equal to or lower than this value
		l4d2healthglow_low_hp "24"

		// Low Health Glow Mini Range
		l4d2healthglow_low_mini_range "0"

		// Low Health Glow Range
		l4d2healthglow_low_range "0"

		// Last Life Glow Color. Three values between 0-255 separated by spaces. RGB Color255 - Red Green Blue.
		l4d2healthglow_last_life_color "127 127 127"

		// If 1, Last Life Glow Flashing
		l4d2healthglow_last_life_flashing "1"

		// Last Life Glow Mini Range
		l4d2healthglow_last_life_mini_range "0"

		// Last Life Glow Range
		l4d2healthglow_last_life_range "0"

		// Incap or hanging from ledge Health Glow Color. Three values between 0-255 separated by spaces. RGB Color255 - Red Green Blue.
		l4d2healthglow_incap_color "200 0 0"

		// Incap or hanging from ledge Health Glow Flashing
		l4d2healthglow_incap_flashing "0"

		// Incap or hanging from ledge Health Glow Mini Range
		l4d2healthglow_incap_mini_range "0"

		// Incap or hanging from ledge Health Glow Range
		l4d2healthglow_incap_range "0"

		// If 1, enable glow when survivor get vomit (0=Default glow when get vomit)
		l4d2healthglow_vomit_enable "1"

		// Glow Color when get vomit. Three values between 0-255 separated by spaces. RGB Color255 - Red Green Blue.
		l4d2healthglow_vomit_color "155 0 180"

		// If 1, Glow Flashing when get vomit
		l4d2healthglow_vomit_flashing "0"

		// Glow Mini Range hen get vomit
		l4d2healthglow_vomit_mini_range "0"

		// Glow Range when get vomit
		l4d2healthglow_vomit_range "0"

		// If 1, survivor temp health + hard health
		// If 0, survivor hard health only
		l4d2healthglow_consider_temp_health "1"

		// Which teams can see the health glow.
		// 0 = NONE, 1 = SURVIVOR, 2 = INFECTED, 4 = SPECTATOR.
		// Add numbers greater than 0 for multiple options.
		// Example: "3", enables for SURVIVOR and INFECTED.
		l4d2healthglow_team "7"

		// Interval in seconds to upate the glow rendering. (visibility, color and frame)
		l4d2healthglow_upate_interval "0.5"

		// If 1, You can see yourself glow in thirdperson view
		// Not recommend to enable thirdperson view
		l4d2healthglow_thirdperson_view "0"

		// If 1, Hide player's equipment glow
		// Not recommend to hide
		l4d2healthglow_player_eq_hide "0"
		```
</details>

* <details><summary>Changelog | 版本日誌</summary>

	* v1.4h (2024-10-6)
		* Update cvars

	* v1.3h (2024-9-30)
		* Compatible with with "Lux's Model Changer"
		* You can see yourself glow when thirdperson view

	* v1.2h (2024-3-19)
		* Require Attachments API

	* v1.1h (2023-12-18)
		* For the infected, survivors always glow with a non-disappearing aura. (Even if survivor doesn't move or walk)
		* Add cvars about Incap or hanging from ledge Health Glow
		* Filter which teams can see the health glow.
		* Interval in seconds to upate the glow rendering
		* Optimize code and improve performance
		* Compatible with l4d_h_csm v1.3h or above by harry

	* v1.0h (2022-11-27)
		* Remake Code
		* Convert code to latest syntax
		* Add convars, users no need to recompile to change the colors of the glows
		* Changes to fix warnings when compiling on SourceMod 1.11.
		* All in one .sp file

	* v1.0.1
		* [Original Plugin by Mr. Zero](https://forums.alliedmods.net/showthread.php?t=174088)
</details>

- - - -
# 中文說明
根據玩家生命值狀態給予輪廓光圈適當的顏色
<br/>+ 
<br/>對抗模式中，特感永遠能看到人類光圈 (即使人類靜走或不動)

* 原理
	* 所有人類身上會有輪廓光圈，根據生命值與狀態給予適當的顏色
    	* 高生命值 - HP 40以上：綠色
    	* 中生命值 - HP 25~39：黃色
    	* 低生命值 - HP 1~24：紅色
    	* 黑白狀態：黑白色閃爍
    	* 倒地或掛邊：紅色
	* 被特感抓住、被Boomer嘔吐、倒地、掛邊之類等等則不會顯示顏色光圈
	* 所有人能看到輪廓光圈，如要指定隊伍，請查看指令

> __Warning__ 寫實模式不起作用，遊戲會關閉一切人類的光環

* <details><summary>指令中文介紹(點我展開)</summary>

	* 安裝上此插件後，會自動產生文件```cfg/sourcemod/l4d2healthglow.cfg```
		```php
		// 0=關閉插件, 1=啟動插件.
		l4d2healthglow_enable "1"

		// 高生命值時的光圈顏色. 三個0-255的數值，需要空白間隔. (RGB 三色)
		l4d2healthglow_high_color "0 200 0"

		// 為1時，高生命值時的光圈會閃爍
		l4d2healthglow_high_flashing "0"

		// 高生命值時的光圈最小發光範圍 
		l4d2healthglow_high_mini_range "0"

		// 高生命值時的光圈最遠發光範圍 (0=無距離限制)
		l4d2healthglow_high_range "0"

		// 小於或等於這個數值視為 "中生命值"
		l4d2healthglow_medium_hp "39"

		// 中生命值時的光圈顏色. 三個0-255的數值，需要空白間隔. (RGB 三色)
		l4d2healthglow_medium_color "200 200 0"

		// 為1時，中生命值時的光圈會閃爍
		l4d2healthglow_medium_flashing "0"

		// 中生命值時的光圈最小發光範圍
		l4d2healthglow_medium_mini_range "0"

		// 中生命值時的光圈最遠發光範圍 (0=無距離限制)
		l4d2healthglow_medium_range "0"

		// 小於或等於這個數值視為 "低生命值"
		l4d2healthglow_low_hp "24"

		// 低生命值時的光圈顏色. 三個0-255的數值，需要空白間隔. (RGB 三色)
		l4d2healthglow_low_color "200 0 0"

		// 為1時，低生命值時的光圈會閃爍
		l4d2healthglow_low_flashing "0"

		// 低生命值時的光圈最小發光範圍
		l4d2healthglow_low_mini_range "0"

		// 低生命值時的光圈最遠發光範圍 (0=無距離限制)
		l4d2healthglow_low_range "0"

		// 黑白狀態時的光圈顏色. 三個0-255的數值，需要空白間隔. (RGB 三色)
		l4d2healthglow_last_life_color "127 127 127"

		// 為1時，黑白狀態時的光圈會閃爍
		l4d2healthglow_last_life_flashing "1"

		// 黑白狀態時的光圈最小發光範圍
		l4d2healthglow_last_life_mini_range "0"

		// 黑白狀態時的光圈最遠發光範圍 (0=無距離限制)
		l4d2healthglow_last_life_range "0"

		// 倒地或掛邊時的光圈顏色. 三個0-255的數值，需要空白間隔. (RGB 三色)
		l4d2healthglow_incap_color "200 0 0"

		// 為1時，倒地或掛邊時的光圈會閃爍
		l4d2healthglow_incap_flashing "0"

		// 倒地或掛邊時的光圈最小發光範圍
		l4d2healthglow_incap_mini_range "0"

		// 倒地或掛邊時的光圈最遠發光範圍 (0=無距離限制)
		l4d2healthglow_incap_range "0"

		// 為1時，被Boomer噴到會有光圈，所有人都會看到 (0=光圈是遊戲預設)
		l4d2healthglow_vomit_enable "1"

		// 被Boomer噴到時，光圈顏色. 三個0-255的數值，需要空白間隔. (RGB 三色)
		l4d2healthglow_vomit_color "155 0 180"

		// 為1時，被Boomer噴到時，光圈會閃爍
		l4d2healthglow_vomit_flashing "0"

		// 被Boomer噴到時，光圈最小發光範圍
		l4d2healthglow_vomit_mini_range "0"

		// 被Boomer噴到時，光圈最遠發光範圍 (0=無距離限制)
		l4d2healthglow_vomit_range "0"

		// 為1時，生命值計算人類的實血與虛血
		// 為0時，生命值只計算人類的實血
		l4d2healthglow_consider_temp_health "1"

		// 哪些隊伍能看到輪廓光圈
		// 0 = 無, 1 = 倖存者, 2 = 特感, 4 = 旁觀者.
		// 將數字相加起來.
		// 舉例: 3 = 只有倖存者與特感能看到輪廓光圈
		l4d2healthglow_team "7"

		// 渲染輪廓光圈的秒數間隔. (更新狀態、顏色、範圍等等)
		l4d2healthglow_upate_interval "0.5"

		// 為1時，在第三人稱狀態下可以看到自己的光圈
		// 不建議開啟
		l4d2healthglow_thirdperson_view "0"

		// 為1時，隱藏玩家身上的裝備光圈
		// 不建議隱藏
		l4d2healthglow_player_eq_hide "0"
		```
</details>