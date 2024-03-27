# Description | 內容
Player can take an item on the map multi times depends on 5+ survivors in server

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/sSjRpDF2DR0)

* Image | 圖示
	* Take medical items multi times (一直拿一直爽)
    <br/>![l4d_more_supply_1](image/l4d_more_supply_1.gif)

* Require | 必要安裝
	1. [left4dhooks](https://forums.alliedmods.net/showthread.php?t=321696)

* <details><summary>ConVar | 指令</summary>

	* cfg/sourcemod/l4d_more_supply.cfg
        ```php
        // (L4D2) If server has more than 4+ players, Adrenaline Shot items count = [ (number of survivors - 5) / this value ] + adrenaline_original_count + 1 (0=Off)
        l4d_more_supply_adrenaline_divisor "3"

        // (L4D2) Adrenaline Shot items count within 4 players.
        l4d_more_supply_adrenaline_original_count "1"

        // (L4D2) If server has more than 4+ players, Bile Jar items count = [ (number of survivors - 5) / this value ] + bile_original_count + 1 (0=Off)
        l4d_more_supply_bile_divisor "5"

        // (L4D2) Bile Jar items count within 4 players.
        l4d_more_supply_bile_original_count "1"

        // (L4D2) If server has more than 4+ players, Defibrillator items count = [ (number of survivors - 5) / this value ] + defi_original_count + 1 (0=Off)
        l4d_more_supply_defi_divisor "4"

        // (L4D2) Defibrillator items count within 4 players.
        l4d_more_supply_defi_original_count "1"

        // 0=Plugin off, 1=Plugin on.
        l4d_more_supply_enable "1"

        // If server has more than 4+ players, First Aid Kit items count = [ (number of survivors - 5) / this value ] + kit_original_count + 1 (0=Off)
        l4d_more_supply_kit_divisor "4"

        // First Aid Kit items count within 4 players.
        l4d_more_supply_kit_original_count "1"

        // If server has more than 4+ players, Molotov items count = [ (number of survivors - 5) / this value ] + molo_original_count + 1 (0=Off)
        l4d_more_supply_molo_divisor "3"

        // Molotov items count within 4 players.
        l4d_more_supply_molo_original_count "1"

        // If server has more than 4+ players, Pain Pill items count = [ (number of survivors - 5) / this value ] + pill_original_count + 1 (0=Off)
        l4d_more_supply_pill_divisor "3"

        // Pain Pill items count within 4 players.
        l4d_more_supply_pill_original_count "1"

        // If server has more than 4+ players, Pipe Bomb items count = [ (number of survivors - 5) / this value ] + pipe_original_count + 1 (0=Off)
        l4d_more_supply_pipe_divisor "3"

        // Pipe Bomb items count within 4 players.
        l4d_more_supply_pipe_original_count "1"
        ```
</details>

* <details><summary>Command | 命令</summary>
    
	None
</details>

* Notice
    * Only change items' count after survivor leave the saferoom 

* How to set the correct Convar ?
	1. <details><summary>Adjust First Aid Kit count if 5+ players</summary>

		* This means that if server has 5+ survivors, max item count +1 each 4 players.
			```php
            // if below 4 survivors(inclusive), First Aid Kit count = 2
            // if 5,6,7,8 survivors, First Aid Kit count = 2+1+1
            // if 5,6,7,8 survivors, First Aid Kit count = 2+1+1
            // and so on
            l4d_more_supply_kit_divisor "4"
            l4d_more_supply_kit_original_count "2"
			```

		* If you don't want to adjust First Aid Kit count, set
			```php
			l4d_more_supply_kit_divisor "0"
			```
	</details>

	2. <details><summary>Adjust Defibrillator count if 5+ players</summary>

		* This means that if server has 5+ survivors, max item count +1 each 3 players.
			```php
            // if below 4 survivors(inclusive), Defibrillator count = 4
            // if 5,6,7 survivors, Defibrillator count = 4+1
            // if 8,9,10 survivors, Defibrillator count = 4+1+1
            // and so on
            l4d_more_supply_defi_divisor "3"
            l4d_more_supply_defi_original_count "4"
			```

		* If you don't want to adjust Defibrillator count, set
			```php
			l4d_more_supply_defi_divisor "0"
			```
	</details>

	3. <details><summary>Adjust Pain Pill count if 5+ players</summary>

		* This means that if server has 5+ survivors, max item count +1 each 2 players.
			```php
            // if below 4 survivors(inclusive), Pain Pill count = 3
            // if 5,6 survivors, Pain Pill count = 3+1
            // if 7,8 survivors, Pain Pill count = 3+1+1
            // and so on
            l4d_more_supply_pill_divisor "2"
            l4d_more_supply_pill_original_count "3"
			```

		* If you don't want to adjust Pain Pill count, set
			```php
			l4d_more_supply_pill_divisor "0"
			```
	</details>

	4. <details><summary>Adjust Adrenaline Shot count if 5+ players</summary>

		* This means that if server has 5+ survivors, max item count +1 each 5 players.
			```php
            // if below 4 survivors(inclusive), Adrenaline Shot count = 1
            // if 5,6,7,8,9 survivors, Adrenaline Shot count = 1+1
            // if 10,11,12,13,14 survivors, Adrenaline Shot count = 1+1+1
            // and so on
            l4d_more_supply_adrenaline_divisor "5"
            l4d_more_supply_adrenaline_original_count "1"
			```

		* If you don't want to adjust Adrenaline Shot count, set
			```php
			l4d_more_supply_adrenaline_divisor "0"
			```
	</details>

	5. <details><summary>Adjust Bile Jar count if 5+ players</summary>

		* This means that if server has 5+ survivors, max item count +1 each 3 players.
			```php
            // if below 4 survivors(inclusive), Bile Jar count = 2
            // if 5,6,7 survivors, Bile Jar count = 2+1
            // if 8,9,10 survivors, Bile Jar count = 2+1+1
            // and so on
            l4d_more_supply_bile_divisor "3"
            l4d_more_supply_bile_original_count "2"
			```

		* If you don't want to adjust Bile Jar count, set
			```php
			l4d_more_supply_bile_divisor "0"
			```
	</details>

	6. <details><summary>Adjust Molotov count if 5+ players</summary>

		* This means that if server has 5+ survivors, max item count +1 each 3 players.
			```php
            // if below 4 survivors(inclusive), Molotov count = 1
            // if 5,6,7 survivors, Molotov count = 1+1
            // if 8,9,10 survivors, Molotov count = 1+1+1
            // and so on
            l4d_more_supply_molo_divisor "3"
            l4d_more_supply_molo_original_count "1"
			```

		* If you don't want to adjust Molotov count, set
			```php
			l4d_more_supply_molo_divisor "0"
			```
	</details>

	7. <details><summary>Adjust Pipe Bomb count if 5+ players</summary>

		* This means that if server has 5+ survivors, max item count +1 each 4 players.
			```php
            // if below 4 survivors(inclusive), Pipe Bomb count = 3
            // if 5,6,7,8 survivors, Pipe Bomb count = 3+1
            // if 5,6,7,8 survivors, Pipe Bomb count = 3+1+1
            // and so on
            l4d_more_supply_pipe_divisor "4"
            l4d_more_supply_pipe_original_count "3"
			```

		* If you don't want to adjust Pipe Bomb count, set
			```php
			l4d_more_supply_pipe_divisor "0"
			```
	</details>

* Apply to | 適用於
    ```
    L4D1
    L4D2
    ```

* <details><summary>Related Plugin | 相關插件</summary>

	1. [MultiSlots](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4dmultislots): Allows additional survivor players in server when 5+ player joins the server
		> 創造5位以上倖存者遊玩伺服器
	2. [l4dinfectedbots](https://github.com/fbef0102/L4D1_2-Plugins/tree/master/l4dmultislots): Spawns multi infected bots in any mode + allows playable special infected in coop/survival + unlock infected slots (10 VS 10 available)
		> 多特感生成插件，倖存者人數越多，生成的特感越多，且不受遊戲特感數量限制 + 解除特感隊伍的人數限制 (可達成對抗 10 VS 10 玩法)
</details>

* <details><summary>Changelog | 版本日誌</summary>

    * v1.0 (2023-4-1)
	    * Initial Release
</details>

- - - -
# 中文說明
隨著玩家人數越多，地圖上的資源可以重複拿很多次

* 原理
    * 此插件控制地圖上生成的物品，物品可以重複拿很多次，提升遊戲樂趣
    * 當倖存者變多時，物品可以拿取的次數越多
    * 此插件不會改變也不影響地圖上的物品生成機率與生成數量
	* 掉落在地上的物品不能重複拿

* 注意事項
    * 倖存者離開安全區域後才會改變物品的拿取次數

* 如何設置正確的指令值?
	1. <details><summary>調整治療包可拿取的次數</summary>

		* 例如: 如果有第5位以上的倖存者，每有4個玩家，可拿取的最大次數將會+1
			```php
            // 如果伺服器有4位以下的倖存者，則治療包可以拿取次數：2
            // 如果伺服器有5、6、7、8位倖存者，則治療包可以拿取次數: 2+1
            // 如果伺服器有9、10、11、12位倖存者，則治療包可以拿取次數: 2+1+1
            // 依此類推...
            l4d_more_supply_kit_divisor "4"
            l4d_more_supply_kit_original_count "2"
			```

		* 如果不想改變治療包拿取次數
			```php
			l4d_more_supply_kit_divisor "0"
			```
	</details>

	2. <details><summary>調整電擊器可拿取的次數</summary>

		* 例如: 如果有第5位以上的倖存者，每有3個玩家，可拿取的最大次數將會+1
			```php
            // 如果伺服器有4位以下的倖存者，則電擊器可以拿取次數：4
            // 如果伺服器有5、6、7位倖存者，則電擊器可以拿取次數: 4+1
            // 如果伺服器有8、9、10位倖存者，則電擊器可以拿取次數: 4+1+1
            // 依此類推...
            l4d_more_supply_defi_divisor "3"
            l4d_more_supply_defi_original_count "4"
			```

		* 如果不想改變電擊器拿取次數
			```php
			l4d_more_supply_defi_divisor "0"
			```
	</details>

	3. <details><summary>調整藥丸可拿取的次數</summary>

		* 例如: 如果有第5位以上的倖存者，每有2個玩家，可拿取的最大次數將會+1
			```php
            // 如果伺服器有4位以下的倖存者，則藥丸可以拿取次數：3
            // 如果伺服器有5、6位倖存者，則藥丸可以拿取次數: 3+1
            // 如果伺服器有7、8位倖存者，則藥丸可以拿取次數: 3+1+1
            // 依此類推...
            l4d_more_supply_pill_divisor "2"
            l4d_more_supply_pill_original_count "3"
			```

		* 如果不想改變藥丸拿取次數
			```php
			l4d_more_supply_pill_divisor "0"
			```
	</details>

	4. <details><summary>調整腎上腺素可拿取的次數</summary>

		* 例如: 如果有第5位以上的倖存者，每有5個玩家，可拿取的最大次數將會+1
			```php
            // 如果伺服器有4位以下的倖存者，則腎上腺素可以拿取次數：1
            // 如果伺服器有5、6、7、8、9位倖存者，則腎上腺素可以拿取次數: 1+1
            // 如果伺服器有10、11、12、13、14位倖存者，則腎上腺素可以拿取次數: 1+1+1
            // 依此類推...
            l4d_more_supply_adrenaline_divisor "5"
            l4d_more_supply_adrenaline_original_count "1"
			```

		* 如果不想改變腎上腺素拿取次數
			```php
			l4d_more_supply_adrenaline_divisor "0"
			```
	</details>

	5. <details><summary>調整膽汁瓶可拿取的次數</summary>

		* 例如: 如果有第5位以上的倖存者，每有3個玩家，可拿取的最大次數將會+1
			```php
            // 如果伺服器有4位以下的倖存者，則膽汁瓶可以拿取次數：2
            // 如果伺服器有5、6、7位倖存者，則膽汁瓶可以拿取次數: 2+1
            // 如果伺服器有8、9、10位倖存者，則膽汁瓶可以拿取次數: 2+1+1
            // 依此類推...
            l4d_more_supply_bile_divisor "3"
            l4d_more_supply_bile_original_count "2"
			```

		* 如果不想改變膽汁瓶拿取次數
			```php
			l4d_more_supply_bile_divisor "0"
			```
	</details>

	6. <details><summary>調整燃燒瓶可拿取的次數</summary>

		* 例如: 如果有第5位以上的倖存者，每有3個玩家，可拿取的最大次數將會+1
			```php
            // 如果伺服器有4位以下的倖存者，則燃燒瓶可以拿取次數：1
            // 如果伺服器有5、6、7位倖存者，則燃燒瓶可以拿取次數: 1+1
            // 如果伺服器有8、9、10位倖存者，則燃燒瓶可以拿取次數: 1+1+1
            // 依此類推...
            l4d_more_supply_molo_divisor "3"
            l4d_more_supply_molo_original_count "1"
			```

		* 如果不想改變燃燒瓶拿取次數
			```php
			l4d_more_supply_molo_divisor "0"
			```
	</details>

	7. <details><summary>調整土製炸彈可拿取的次數</summary>

		* 例如: 如果有第5位以上的倖存者，每有4個玩家，可拿取的最大次數將會+1
			```php
            // 如果伺服器有4位以下的倖存者，則土製炸彈可以拿取次數：3
            // 如果伺服器有5、6、7、8位倖存者，則土製炸彈可以拿取次數: 3+1
            // 如果伺服器有9、10、11、12位倖存者，則土製炸彈可以拿取次數: 3+1+1
            // 依此類推...
            l4d_more_supply_pipe_divisor "4"
            l4d_more_supply_pipe_original_count "3"
			```

		* 如果不想改變土製炸彈拿取次數
			```php
			l4d_more_supply_pipe_divisor "0"
			```
	</details>