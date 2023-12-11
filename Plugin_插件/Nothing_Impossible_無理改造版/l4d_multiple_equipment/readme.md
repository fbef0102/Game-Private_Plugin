
# Description | 內容
Carry 2 weapons or items in each slot

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/c5alhdER2Dc)

* Image | 圖示
	* You can carry second primary weapons and items (可攜帶第二把武器或物品)
    <br/>![l4d_multiple_equipment_1](image/l4d_multiple_equipment_1.jpg)
    * Switch equipments (切換第二把武器)
    <br/>![l4d_multiple_equipment_2](image/l4d_multiple_equipment_2.gif)
    <br/>![l4d_multiple_equipment_3](image/l4d_multiple_equipment_3.gif)
    <br/>![l4d_multiple_equipment_4](image/l4d_multiple_equipment_4.gif)

* <details><summary>How does it work?</summary>

    * Everyone can carry
        * 2 primary weapons
        * 2 melee weapons or pistols
        * 2 thorwable items
        * 2 kits/defibrillators/upgradepacks
        * 2 pills/adrenalines
    * How to switch equipments:
        1. Double Press Q + Single Press slot 1,2,3,4,5 to switch equipments
        2. typ ```!sw```
    * Can save to next stage in coop/realism
    * Can save if player idle or afk
</details>

* Require | 必要安裝
    1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
    2. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)
    3. [ThirdPersonShoulder_Detect](https://forums.alliedmods.net/showthread.php?p=2529779)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_multiple_equipment.cfg
		```php
        // 0=Plugin off, 1=Plugin on.
        l4d_multiple_equipment_enable "1"

        // (Primary Weapon), 0=Disable, 1=Enable
        l4d_multiple_equipment_slot0 "1"

        // (L4D2 only) (Melee/Pistol), 0=Disable, 1=Enable
        l4d_multiple_equipment_slot1 "0"

        // (Throwable Item), 0=Disable, 1=Enable
        l4d_multiple_equipment_slot2 "1"

        // (Slots 4 Medkit/Defibrillator/Upgrade Pack), 0=Disable, 1=Enable
        l4d_multiple_equipment_slot3 "1"

        // (Slots 5 Pills/Adrenaline), 0=Disable, 1=Enable
        l4d_multiple_equipment_slot4 "1"

        // How to switch equipments, 0=Single Press slot 1,2,3,4,5, 1=Double Press Q + Single Press slot 1,2,3,4,5
        l4d_multiple_equipment_switch_mode "1"

        // If 1, player can type !sw to switch equipments
        l4d_multiple_equipment_switch_cmd "1"

        // If 1, Display Extra Item Equipment on the survivor
        l4d_multiple_equipment_view "1"

        // If 1, Enable AFK Save
        l4d_multiple_equipment_afk_save "1"

        // Show 'switch_mode' message to players entering survivor, 0=Off, 1=Chatbox, 2=Hint
        l4d_multiple_equipment_mode_notify "2"

        // Show 'switch_cmd' message to players entering survivor, 0=Off, 1=Chatbox, 2=Hint
        l4d_multiple_equipment_cmd_notify "1"
		```
</details>

* <details><summary>Command | 命令</summary>
    
    * **Switch equipments**
		```php
        sm_switchweapons
        sm_sw
		```
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

* <details><summary>Changelog | 版本日誌</summary>

    * v1.1h (2023-12-11)
        * Fixed Knife model
        * Support Custom Melee

    * v1.0h (2023-11-28)
		* Remake code, convert code to latest syntax
		* Fix warnings when compiling on SourceMod 1.11.
		* Optimize code and improve performance
		* Translation Support
        * Safely remove weapons and items to prevent crash
        * Fix memoery leak
        * Remove menu
        * Add Cmds and Cvars

    * v1.8
        * Original Plugin by [panxiaohai](https://forums.alliedmods.net/showthread.php?t=166580)
</details>

- - - -
# 中文說明
每個人可以攜帶兩種武器或物品

* 原理
    * 每個人可以攜帶
        * 兩把主武器
        * 兩把近戰或手槍
        * 兩個投擲物
        * 兩個醫療物/電擊器/升級彈包
        * 兩個藥丸/腎上腺素
    * 如何切換第二把武器或物品
        1. 雙擊 Q 或單擊 Slot 1,2,3,4,5 按鈕，切換備用裝備
        2. 輸入 ```!sw```
    * 戰役/寫實模式中 可以過關保存
    * 即使閒置或AFK也可以保存

* 注意事項
    * 使用自製的角色模組會導致身上攜帶的備用裝備位置錯亂
        * 只有觀感問題，功能不會受到任何影響

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d_multiple_equipment.cfg
		```php
        // 0=關閉插件, 1=啟動插件
        l4d_multiple_equipment_enable "1"

        // (主武器 可攜帶兩把), 0=關閉, 1=啟用
        l4d_multiple_equipment_slot0 "1"

        // (限L4D2) (近戰/手槍 可攜帶兩把), 0=關閉, 1=啟用
        l4d_multiple_equipment_slot1 "0"

        // (投擲物品 可攜帶兩瓶), 0=關閉, 1=啟用
        l4d_multiple_equipment_slot2 "1"

        // (Slots 4 醫療包/電擊器/升級彈包 可攜帶兩個), 0=關閉, 1=啟用
        l4d_multiple_equipment_slot3 "1"

        // (Slots 5 藥丸/腎上腺素 可攜帶兩個), 0=關閉, 1=啟用
        l4d_multiple_equipment_slot4 "1"

        // 玩家如何切換裝備, 0=單擊 Slot 1,2,3,4,5 按鈕, 1=雙擊 Q 或單擊 Slot 1,2,3,4,5 按鈕
        l4d_multiple_equipment_switch_mode "1"

        // 為1時，玩家也可以輸入 !sw 切換裝備
        l4d_multiple_equipment_switch_cmd "1"

        // 為1時，玩家身上顯示額外攜帶的裝備 (裝飾用的)
        l4d_multiple_equipment_view "1"

        // 為1時，即使玩家閒置或AFK可以保存備用裝備
        l4d_multiple_equipment_afk_save "1"

        // 按鈕操作該如何顯示. (0: 不提示, 1: 聊天框, 2: 黑底白字框)
        l4d_multiple_equipment_mode_notify "2"

        // 指令操作該如何顯示. (0: 不提示, 1: 聊天框, 2: 黑底白字框)
        l4d_multiple_equipment_cmd_notify "1"
		```
</details>

* <details><summary>命令中文介紹 (點我展開)</summary>
    
    * **切換備用的武器裝備**
		```php
        sm_switchweapons
        sm_sw
		```
</details>
