# Description | 內容
Lock the weapons and items dropped by dead survivors, no one else can pick up.

> __Note__ <br/>
This plugin is private, Please contact [me](/#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](/#私人插件列表-private-plugins-list)

* Apply to | 適用於
    ```
    L4D2
    ```

* [Video | 影片展示](https://youtu.be/TEQUEbWQkCg)

* Image | 圖示
	* You can't pick up death player's weapons and items
    <br/>![l4d_death_weapon_lock_1](image/l4d_death_weapon_lock_1.gif)
    <br/>![l4d_death_weapon_lock_2](image/l4d_death_weapon_lock_2.jpg)

* <details><summary>How does it work?</summary>

    * When player dies, display menu "Give up weapons?"
        * Yes -> Unlock the weapons and items dropped (green glow), anyone can pick up
    * Everyone can pick up if owner has left the server or period time passed
        * No -> Lock the weapons and items dropped (red glow), no one can pick up
</details>

* Require | 必要安裝
    1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)
    2. [[INC] l4d2_weapons](/L4D_插件/Require_檔案/scripting/include/l4d2_weapons.inc)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_death_weapon_lock.cfg
		```php
        // 0=Plugin off, 1=Plugin on.
        l4d_death_weapon_lock_enable "1"

        // Players with these flags can lock their own weapons and items when they die. (Empty = Everyone, -1: Nobody)
        l4d_death_weapon_lock_access_flag ""

        // If 1, Display menu to dead players if they want to give up weapons and items.
        l4d_death_weapon_lock_display_menu "1"

        // Glow color (RGB) for weapons and items droped by dead survivors and lock. [0 0 0: No Glow]
        l4d_death_weapon_lock_color_lock "255 0 0"

        // Glow color (RGB) for weapons and items droped by dead survivors and unlock.　[0 0 0: No Glow]
        l4d_death_weapon_lock_color_unlock "0 255 0"

        // Glow range for weapons and items drooped by dead survivors.
        // Value: 0 = Unlimited range, others = Glow range.
        l4d_death_weapon_lock_range "200"

        // Lock time for weapons and items droped by dead survivors.
        // Value: -1 = Lock Forever, 0.0 = Unlock instantly, others = Lock time.
        l4d_death_weapon_lock_lock_time "-1"

        // If 1, everyone can pick up weapons and items if owner has left the server
        l4d_death_weapon_lock_left_unlock "1"

        // (Primary Weapon), 1=Lock, 0=UnLock
        l4d_death_weapon_lock_slot0 "1"

        // (Melee/Pistol), 1=Lock, 0=UnLock
        l4d_death_weapon_lock_slot1 "1"

        // (Throwable Item), 1=Lock, 0=UnLock
        l4d_death_weapon_lock_slot2 "1"

        // (Slots 4 Medkit/Defibrillator/Upgrade Pack), 1=Lock, 0=UnLock
        l4d_death_weapon_lock_slot3 "1"

        // (Slots 5 Pills/Adrenaline), 1=Lock, 0=UnLock
        l4d_death_weapon_lock_slot4 "1"
		```
</details>

* <details><summary>Command | 命令</summary>
    
	* **Open menu to give up your weapons and items**
		```php
		sm_giveup
		```
</details>

* <details><summary>API | 串接</summary>

    * [l4d_death_weapon_lock.inc](scripting\include\l4d_death_weapon_lock.inc)
        ```php
        library name: l4d_death_weapon_lock
        ```
</details>

* Translation Support | 支援翻譯
	```
	translations/l4d_death_weapon_lock.phrases.txt
	```

* <details><summary>Related Plugin | 相關插件</summary>

	1. [drop_secondary](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/drop_secondary): Survivor players will drop their secondary weapon (including melee) when they die
		> 死亡時掉落第二把武器
</details>

* <details><summary>Changelog | 版本日誌</summary>

    * v1.4h (2024-12-14)
    * v1.3h (2024-12-12)
        * Update cvars
        * Update translation
        * Add menu to dead players
        * Add cmd

    * v1.2h (2023-12-17)
        * Add cvars to Lock or Unlock each slot weapon/items

    * v1.1h (2023-12-13)
        * Add Api

    * v1.0h (2023-11-28)
        * Initial Release
</details>

- - - -
# 中文說明
無法撿起其他死亡玩家掉落的武器與物品 (避免被撿走)

* 圖示
	* 無法撿起死亡玩家的武器與物品
    <br/>![zho/l4d_death_weapon_lock_1](image/zho/l4d_death_weapon_lock_1.gif)
    <br/>![zho/l4d_death_weapon_lock_2](image/zho/l4d_death_weapon_lock_2.jpg)

* 原理
    * 玩家死亡時，顯示介面詢問玩家 "是否放棄武器?"
        * Yes -> 解鎖住掉落的武器與物品 (綠色光環)，任何人可以撿
        * No -> 鎖住掉落的武器與物品 (紅色光環)，任何人不能撿
    * 如果玩家離開伺服器或超過一定時間後，解鎖地上的武器與物品，任何人可以撿

* <details><summary>指令中文介紹 (點我展開)</summary>

	* cfg/sourcemod/l4d_death_weapon_lock.cfg
		```php
        // 0=關閉插件, 1=啟動插件
        l4d_death_weapon_lock_enable "1"

        // 擁有這些權限的玩家，死亡時掉落的武器與物品會鎖住 (留白 = 任何人都能, -1: 無人)
        l4d_death_weapon_lock_access_flag ""

        // 為1時，顯示介面詢問死亡玩家 "是否放棄武器?"
        l4d_death_weapon_lock_display_menu "1"

        // 倖存者死亡時掉落的武器與物品，鎖住的光環顏色，填入RGB三色 (三個數值介於0~255，需要空格) [0 0 0: 不加顏色]
        l4d_death_weapon_lock_color_lock "255 0 0"

        // 倖存者死亡時掉落的武器與物品，解鎖的光環顏色，填入RGB三色 (三個數值介於0~255，需要空格) [0 0 0: 不加顏色]
        l4d_death_weapon_lock_color_unlock "0 255 0"

        // 光環顏色範圍
        // 0 = 無限制
        l4d_death_weapon_lock_range "200"

        // 倖存者死亡時掉落的武器與物品 鎖住時間，超過一定時間後，任何人可以撿起
        // -1 = 永遠鎖住, 0.0 = 不鎖, 其他數值 = 鎖住時間.
        l4d_death_weapon_lock_lock_time "-1"

        // 為1時，如果玩家離開伺服器則任何人可以撿起
        l4d_death_weapon_lock_left_unlock "1"

        // (主武器), 1=鎖住, 0=不鎖住
        l4d_death_weapon_lock_slot0 "1"

        // (近戰/手槍), 1=鎖住, 0=不鎖住
        l4d_death_weapon_lock_slot1 "1"

        // (投擲物品), 1=鎖住, 0=不鎖住
        l4d_death_weapon_lock_slot2 "1"

        // (醫療包/電擊器/升級彈包), 1=鎖住, 0=不鎖住
        l4d_death_weapon_lock_slot3 "1"

        // (藥丸/腎上腺素), 1=鎖住, 0=不鎖住
        l4d_death_weapon_lock_slot4 "1"
		```
</details>

* <details><summary>命令中文介紹 (點我展開)</summary>
    
	* **打開菜單放棄你的武器與物品**
		```php
		sm_giveup
		```
</details>
