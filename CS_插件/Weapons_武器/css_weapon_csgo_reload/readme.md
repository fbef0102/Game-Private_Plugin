# Description | 內容
Modern weapon reload, like csgo quick reloading

> __Note__ <br/>
This plugin is private, Please contact [me](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)<br/>
此為私人插件, 請聯繫[本人](https://github.com/fbef0102/Game-Private_Plugin#私人插件列表-private-plugins-list)

* [Video | 影片展示](https://youtu.be/8PmqsZRmtto)

* Image | 圖示
	* Quick reloading (快速裝彈)
    <br/>![css_weapon_csgo_reload_1](image/css_weapon_csgo_reload_1.gif)
    <br/>![css_weapon_csgo_reload_2](image/css_weapon_csgo_reload_2.gif)

* Require | 必要安裝
<br/>None

* <details><summary>ConVar | 指令</summary>

    * cfg/sourcemod/css_weapon_csgo_reload.cfg
        ```php
        // 0=Off plugin, 1=On plugin
        css_weapon_csgo_reload_allow "1"

        // Reload time for AK-47 clip
        css_weapon_csgo_reload_ak47_clip_time "1.5"
        
        // AK-47 max clip
        css_weapon_csgo_reload_ak47_clip_max "30"

        // Reload time for AUG A1 clip
        css_weapon_csgo_reload_aug_clip_time "2.6"

        // AUG A1 clip
        css_weapon_csgo_reload_auh_clip_max "30"

        // Reload time for AWP clip
        css_weapon_csgo_reload_awp_clip_time "2.1"

        // AWP max clip
        css_weapon_csgo_reload_awp_clip_max "10"

        // Reload time for Desert Eagle clip
        css_weapon_csgo_reload_deagle_clip_time "1.4"

        // Desert Eagle max clip
        css_weapon_csgo_reload_eagle_clip_max "7"

        // Reload time for Elite II clip
        css_weapon_csgo_reload_elite_clip_time "2.6"

        // Elite II max clip
        css_weapon_csgo_reload_elite_clip_max "30"

        // Reload time for FAMAS F1 clip
        css_weapon_csgo_reload_famas_clip_time "1.5"

        // FAMAS F1 max clip
        css_weapon_csgo_reload_famas_clip_max "25"

        // Reload time for Five-Seven clip
        css_weapon_csgo_reload_fiveseven_clip_time "2.1"

        // Five-Seven max clip
        css_weapon_csgo_reload_fiveseven_clip_max "20"

        // Reload time for D3/AU-1 clip
        css_weapon_csgo_reload_g3gs1_clip_time "3.0"

        // D3/AU-1 max clip
        css_weapon_csgo_reload_g3gs1_clip_max "20"

        // Reload time for Galil ARM clip
        css_weapon_csgo_reload_galil_clip_time "1.4"

        // Galil ARM max clip
        css_weapon_csgo_reload_galil_clip_max "35"

        // Reload time for Glock 19 clip
        css_weapon_csgo_reload_glock_clip_time "1.5"

        // Glock 19 max clip
        css_weapon_csgo_reload_glock_clip_max "20"

        // Reload time for M249 Machine Gun clip
        css_weapon_csgo_reload_m249_clip_time "4.6"

        // M249 Machine Gun max clip
        css_weapon_csgo_reload_m249_clip_max "100"

        // FAMAS M4A1 clip
        css_weapon_csgo_reload_m4a1_clip_max "30"

        // Reload time for M4A1 clip
        css_weapon_csgo_reload_m4a1_clip_time "1.7"

        // Reload time for MAC-10 clip
        css_weapon_csgo_reload_mac10_clip_time "1.9"

        // MAC-10 max clip
        css_weapon_csgo_reload_mac10_clip_max "30"

        // Reload time for MP5 Navy clip
        css_weapon_csgo_reload_mp5_clip_time "1.6"

        // MP5 Navy max clip
        css_weapon_csgo_reload_mp5_clip_max "30"

        // Reload time for P228 clip
        css_weapon_csgo_reload_p228_clip_time "1.7"

        // P228 max clip
        css_weapon_csgo_reload_p228_clip_max "13"

        // Reload time for P90 clip
        css_weapon_csgo_reload_p90_clip_time "2.1"

        // P90 max clip
        css_weapon_csgo_reload_p90_clip_max "50"

        // Reload time for Scout clip
        css_weapon_csgo_reload_scount_clip_time "1.4"

        // Scout max clip
        css_weapon_csgo_reload_scount_clip_max "10"

        // Reload time for SG 550 SR clip
        css_weapon_csgo_reload_sg550_clip_time "2.2"

        // SG 550 SR max clip
        css_weapon_csgo_reload_sg550_clip_max "30"

        // Reload time for SG 552 clip
        css_weapon_csgo_reload_sg552_clip_time "1.45"

        // SG 552 max clip
        css_weapon_csgo_reload_sg552_clip_max "30"

        // Reload time for TMP clip
        css_weapon_csgo_reload_tmp_clip_time "1.3"

        // TMP max clip
        css_weapon_csgo_reload_tmp_clip_max "30"

        // Reload time for UMP45 clip
        css_weapon_csgo_reload_ump45_clip_time "2.0"

        // UMP45 max clip
        css_weapon_csgo_reload_ump45_clip_max "25"

        // Reload time for USP45 clip
        css_weapon_csgo_reload_usp_clip_time "1.5"

        // USP45 max clip
        css_weapon_csgo_reload_usp_clip_max "12"
        ```
</details>

* <details><summary>Command | 命令</summary>
    
    None
</details>

* Apply to | 適用於
    ```
    CSS
    ```

* <details><summary>Changelog | 版本日誌</summary>

    * v1.0 (2023-3-6)
        * Initial Release
</details>

- - - -
# 中文說明
將CS武器改成現代遊戲的裝子彈機制 (仿CS:GO切槍裝彈設定)

* 原理
    * 當武器動畫是裝上彈夾的時候，彈夾會填滿 (就像CSGO那樣)    
    * 裝彈切槍，耍酷用

* <details><summary>指令中文介紹 (點我展開)</summary>

    * cfg/sourcemod/css_weapon_csgo_reload.cfg
        ```php
        // 0=關閉插件, 1=啟動插件
        css_weapon_csgo_reload_allow "1"

        // AK-47 快速填裝的時間
        css_weapon_csgo_reload_ak47_clip_time "1.5"
        
        // AK-47 快速填裝的彈夾
        css_weapon_csgo_reload_ak47_clip_max "30"

        // 以下指令類堆，可設置每個武器的快速裝彈時間
        css_weapon_csgo_reload_aug_clip_time "2.6"
        css_weapon_csgo_reload_auh_clip_max "30"

        css_weapon_csgo_reload_awp_clip_time "2.1"
        css_weapon_csgo_reload_awp_clip_max "10"

        css_weapon_csgo_reload_deagle_clip_time "1.4"
        css_weapon_csgo_reload_eagle_clip_max "7"

        css_weapon_csgo_reload_elite_clip_time "2.6"
        css_weapon_csgo_reload_elite_clip_max "30"

        css_weapon_csgo_reload_famas_clip_time "1.5"
        css_weapon_csgo_reload_famas_clip_max "25"


        css_weapon_csgo_reload_fiveseven_clip_time "2.1"
        css_weapon_csgo_reload_fiveseven_clip_max "20"

        css_weapon_csgo_reload_g3gs1_clip_time "3.0"
        css_weapon_csgo_reload_g3gs1_clip_max "20"

        css_weapon_csgo_reload_galil_clip_time "1.4"
        css_weapon_csgo_reload_galil_clip_max "35"

        css_weapon_csgo_reload_glock_clip_time "1.5"
        css_weapon_csgo_reload_glock_clip_max "20"

        css_weapon_csgo_reload_m249_clip_time "4.6"
        css_weapon_csgo_reload_m249_clip_max "100"

        css_weapon_csgo_reload_m4a1_clip_max "30"
        css_weapon_csgo_reload_m4a1_clip_time "1.7"

        css_weapon_csgo_reload_mac10_clip_time "1.9"
        css_weapon_csgo_reload_mac10_clip_max "30"

        css_weapon_csgo_reload_mp5_clip_time "1.6"
        css_weapon_csgo_reload_mp5_clip_max "30"

        css_weapon_csgo_reload_p228_clip_time "1.7"
        css_weapon_csgo_reload_p228_clip_max "13"

        css_weapon_csgo_reload_p90_clip_time "2.1"
        css_weapon_csgo_reload_p90_clip_max "50"

        css_weapon_csgo_reload_scount_clip_time "1.4"
        css_weapon_csgo_reload_scount_clip_max "10"

        css_weapon_csgo_reload_sg550_clip_time "2.2"
        css_weapon_csgo_reload_sg550_clip_max "30"

        css_weapon_csgo_reload_sg552_clip_time "1.45"
        css_weapon_csgo_reload_sg552_clip_max "30"

        css_weapon_csgo_reload_tmp_clip_time "1.3"
        css_weapon_csgo_reload_tmp_clip_max "30"

        css_weapon_csgo_reload_ump45_clip_time "2.0"
        css_weapon_csgo_reload_ump45_clip_max "25"

        css_weapon_csgo_reload_usp_clip_time "1.5"
        css_weapon_csgo_reload_usp_clip_max "12"
        ```
</details>


