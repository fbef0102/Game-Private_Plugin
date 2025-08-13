# Description | 內容
Carry 2 weapons or items in each slot

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* Apply to | 適用於
    ```
    L4D1
    L4D2
    ```

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
        * 2 different primary weapons
        * 2 different melee weapons (Support Custom Melee), chainsaws or pistols
        * 2 thorwable items
        * 2 kits/defibrillators/upgradepacks
        * 2 pills/adrenalines
    * How to take second equipments:
        1. Take first weapn
        2. Double Press Q or Single Press slot 1 to switch first weapon into backup (There will be a message)
        3. Take second weapon
    * How to switch equipments:
        1. Double Press Q + Single Press slot 1,2,3,4,5 to switch equipments
        2. typ ```!sw```
    * How to restore item:
        1. Press 1,2,3,4,5 or shove.
    * Can save to next stage in coop/realism
    * Can save if player idle or afk
    * Drop all equipments when player is dead
</details>

* <details><summary>Notice</summary>

    * If player using character mods, the position of equipment will mess up on the body
        * Just a visual issue, the functionality won't be affected
        * Can set cvar to not display extra item equipment 
</details>

* Require | 必要安裝
    1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
    2. [[INC] Multi Colors](https://github.com/fbef0102/L4D1_2-Plugins/releases/tag/Multi-Colors)
    3. [[INC] l4d2_weapons](/L4D_插件/Require_檔案/scripting/include/l4d2_weapons.inc)
    4. [ThirdPersonShoulder_Detect](https://forums.alliedmods.net/showthread.php?p=2529779)

* <details><summary>Support | 支援插件</summary>

	1. [l4d2_melee_durability](https://github.com/fbef0102/Game-Private_Plugin/tree/main/L4D_%E6%8F%92%E4%BB%B6/Real_Realism_%E7%9C%9F%E5%AF%AB%E5%AF%A6%E6%A8%A1%E5%BC%8F/l4d2_melee_durability): Every melee weapons have durability, once run out durability, the melee weapon will be removed
		* 每個近戰武器都有耐久值，揮砍殭屍會消耗耐力，當耐久值耗盡時移除近戰武器

	2. [fortnite_dances_emotes_l4d](https://github.com/fbef0102/Game-Private_Plugin/tree/main/L4D_%E6%8F%92%E4%BB%B6/Fun_%E5%A8%9B%E6%A8%82/fortnite_dances_emotes_l4d): Emotes and Dance in L4D1/2
		* 搞笑動作模組: 表情與舞蹈
</details>

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_multiple_equipment.cfg
		```php
        // 0=Plugin off, 1=Plugin on.
        l4d_multiple_equipment_enable "1"

        // (Primary Weapon), 0=Disable, 1=Enable
        l4d_multiple_equipment_slot0_enable "1"

        // (Melee/Pistol), 0=Disable, 1=Enable
        l4d_multiple_equipment_slot1_enable "0"

        // (Throwable Item), 0=Disable, 1=Enable
        l4d_multiple_equipment_slot2_enable "1"

        // (Slots 4 Medkit/Defibrillator/Upgrade Pack), 0=Disable, 1=Enable
        l4d_multiple_equipment_slot3_enable "1"

        // (Slots 5 Pills/Adrenaline), 0=Disable, 1=Enable
        l4d_multiple_equipment_slot4_enable "1"

        // 1=Allow pick up same primary weapons (0=Not Allow)
        l4d_multiple_equipment_slot0_same "0"

        // (L4D2 only) 1=Allow pick up same melee/pistol weapons (0=Not Allow)
        l4d_multiple_equipment_slot1_same "0"

        // 1=Allow pick up same throwable items (0=Not Allow)
        l4d_multiple_equipment_slot2_same "1"

        // (L4D2 only) 1=Allow pick up same medkit/fefibrillator/upgrade pack items (0=Not Allow)
        l4d_multiple_equipment_slot3_same "1"

        // (L4D2 only) 1=Allow pick up same pill/adrenaline items (0=Not Allow)
        l4d_multiple_equipment_slot4_same "1"

        // How to switch equipments
        // 0=Single Press slot 1,2,3,4,5
        // 1=Double Press Q + Single Press slot 1,2,3,4,5 (conflict while using the scroll wheel)
        l4d_multiple_equipment_switch_mode "0"

        // If 1, player can type !sw to switch equipments
        l4d_multiple_equipment_switch_cmd "1"

        // If 1, lock primary gun shoot when reaching 0 ammo (For the convenience to switch weapons)
        l4d_multiple_equipment_ammo_lock "1"

        // Players with these flags have access to switch equipments and carry 2 weapons or items in each slot. (Empty = Everyone, -1: Nobody)
        l4d_multiple_equipment_access_flag ""

        // If 1, Display Extra Item Equipment on the survivor
        l4d_multiple_equipment_view "1"

        // If 1, Enable AFK Save
        l4d_multiple_equipment_afk_save "1"

        // If 1, Player drops all second equipments and second items when die
        l4d_multiple_equipment_death_drop "1"

        // Show 'switch_mode' message to players entering survivor, 0=Off, 1=Chatbox, 2=Hint
        l4d_multiple_equipment_mode_notify "2"

        // Show 'switch_cmd' message to players entering survivor, 0=Off, 1=Chatbox, 2=Hint
        l4d_multiple_equipment_cmd_notify "1"

        // If 1, Show 'Can't pick up same weapon/melee' message to players, 0=Off
        l4d_multiple_equipment_same_notify "1"

        // If 1, Show 'You can carry more weapons' message to players, 0=Off
        l4d_multiple_equipment_more_notify "1"
		```
</details>

* <details><summary>Command | 命令</summary>
    
    * **Switch equipments**
		```php
        sm_switchweapons
        sm_sw
		```
</details>

* <details><summary>API | 串接</summary>

    * [l4d_multiple_equipment.inc](scripting\include\l4d_multiple_equipment.inc)
        ```php
        library name: l4d_multiple_equipment
        ```
</details>

* Translation Support | 支援翻譯
	```
	translations/l4d_multiple_equipment.phrases.txt
	```

* <details><summary>Related Plugin | 相關插件</summary>

    1. [l4d_weapon_limits](/L4D_插件/Weapons_武器/l4d_weapon_limits): Restrict weapons individually or together
        * 限制每個武器可以拿取的數量，超過就不能拿取
    2. [l4d2_melee_durability](/L4D_插件/Real_Realism_真寫實模式/l4d2_melee_durability): Every melee weapons have durability, once run out durability, the melee weapon will be removed
        * 每個近戰武器都有耐久值，揮砍殭屍會消耗耐力，當耐久值耗盡時移除近戰武器
</details>

* <details><summary>Changelog | 版本日誌</summary>

    * v2.3h (2025-8-13)
        * Update cvars

    * v2.2h (2025-6-16)
        * Support l4d2_melee_durability and fortnite_dances_emotes_l4d plugin by harry

    * v2.1h (2025-1-15)
        * Fixed m60 or grenade launcher disappear

    * v2.0h (2024-7-9)
        * Add back primary weapon ammo lock
        * Compatibility with [l4d2_melee_durability](/L4D_插件/Real_Realism_真寫實模式/l4d2_melee_durability) v1.3 or above
        * Update Cvars

    * v1.9h (2024-6-18)
        * Remove primary weapon ammo lock

    * v1.8h (2024-6-8)
        * Fixed errors in l4d1
        * Add access flag
        * Update cvars

    * v1.7h (2024-5-2)
        * Detect dual pistol pickup

    * v1.6h (2024-3-29)
        * Fixed desert rifle not working

    * v1.5h (2024-1-22)
        * Fixed second weapon ammo is zero

    * v1.4h (2024-1-17)
        * Optimize code and improve performance
        * Player drops all second equipments and second items when die
        * Updata cvars

    * v1.3h (2023-12-18)
        * Fixed empty primary weapons can't now switch equipment

    * v1.2h (2023-12-13)
        * Add cvars to control if players can pick up same weappons and items
        * Add API
        * Compatible with l4d_weapon_limits v2.2 or above by harry

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
        * 兩把不同的主武器
        * 兩把不同的近戰(支援三方圖近戰)或手槍
        * 兩個投擲物
        * 兩個醫療物/電擊器/升級彈包
        * 兩個藥丸/腎上腺素
    * 如何拿取第二把武器
        1. 撿第一把武器
        2. 雙擊 Q 或單擊 Slot 1 按鈕，將第一把武器換到備用裝備 (會有提示)
        3. 撿第二把武器
    * 如何切換武器或物品
        1. 雙擊 Q 或單擊 Slot 1,2,3,4,5 按鈕，切換備用裝備
        2. 輸入 ```!sw```
    * 如何將第二把武器或物品切回武器欄
        1. 右鍵推擊或單擊 Slot 1,2,3,4,5 按鈕
    * 戰役/寫實模式中，可以過關保存
    * 即使閒置或AFK也可以保存
    * 死亡時掉落身上所有第二把武器與物品

* 注意事項
    * 使用自製的角色模組會導致身上攜帶的備用裝備位置錯亂
        * 只有觀感問題，功能不會受到任何影響
        * 可以使用指令不顯示身上攜帶的備用裝備

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d_multiple_equipment.cfg
		```php
        // 0=關閉插件, 1=啟動插件
        l4d_multiple_equipment_enable "1"

        // (主武器 可攜帶兩把), 0=關閉, 1=啟用
        l4d_multiple_equipment_slot0_enable "1"

        // (近戰/手槍 可攜帶兩把), 0=關閉, 1=啟用
        l4d_multiple_equipment_slot1_enable "0"

        // (投擲物品 可攜帶兩瓶), 0=關閉, 1=啟用
        l4d_multiple_equipment_slot2_enable "1"

        // (Slots 4 醫療包/電擊器/升級彈包 可攜帶兩個), 0=關閉, 1=啟用
        l4d_multiple_equipment_slot3_enable "1"

        // (Slots 5 藥丸/腎上腺素 可攜帶兩個), 0=關閉, 1=啟用
        l4d_multiple_equipment_slot4_enable "1"

        // (可攜帶相同 主武器), 0=不可以, 1=可以
        l4d_multiple_equipment_slot0_same "0"

        // (限L4D2) (可攜帶相同 近戰/手槍),  0=不可以, 1=可以
        l4d_multiple_equipment_slot1_same "0"

        // (可攜帶相同 投擲物品),  0=不可以, 1=可以
        l4d_multiple_equipment_slot2_same "1"

        // (限L4D2) (可攜帶相同 醫療包/電擊器/升級彈包),  0=不可以, 1=可以
        l4d_multiple_equipment_slot3_same "1"

        // (限L4D2) (可攜帶相同 藥丸/腎上腺素),  0=不可以, 1=可以
        l4d_multiple_equipment_slot4_same "1"

        // 玩家如何切換裝備
        // 0=單擊 Slot 1,2,3,4,5 按鈕
        // 1=雙擊 Q 或單擊 Slot 1,2,3,4,5 按鈕 (會與滾輪切換武器產生衝突)
        l4d_multiple_equipment_switch_mode "1"

        // 為1時，玩家也可以輸入 !sw 切換裝備
        l4d_multiple_equipment_switch_cmd "1"

        // 為1時，主武器0彈藥時，會剩下最後一顆子彈並鎖住不能開槍 (為了方便切換主武器使用)
        l4d_multiple_equipment_ammo_lock "1"

        // 擁有這些權限的玩家，才可以輸入切換備用裝備與攜帶雙武器與物品 (留白 = 任何人都能, -1: 無人)
        l4d_multiple_equipment_access_flag ""

        // 為1時，玩家身上顯示額外攜帶的裝備 (裝飾用的)
        l4d_multiple_equipment_view "1"

        // 為1時，即使玩家閒置或AFK可以保存備用裝備
        l4d_multiple_equipment_afk_save "1"

        // 為1時，玩家死亡時掉出所有備用裝備的武器與物資
        l4d_multiple_equipment_death_drop "1"

        // 按鈕操作該如何顯示. (0: 不提示, 1: 聊天框, 2: 黑底白字框)
        l4d_multiple_equipment_mode_notify "2"

        // 指令操作該如何顯示. (0: 不提示, 1: 聊天框, 2: 黑底白字框)
        l4d_multiple_equipment_cmd_notify "1"

        // 1=顯示'無法撿起相同的武器/近戰'給玩家看, 0=不顯示
        l4d_multiple_equipment_same_notify "1"

        // 1=顯示'可攜帶額外武器'給玩家看, 0=不顯示
        l4d_multiple_equipment_more_notify "1"
		```
</details>

* <details><summary>命令中文介紹 (點我展開)</summary>
    
    * **切換備用的武器裝備**
		```php
        sm_switchweapons
        sm_sw
		```
</details>
