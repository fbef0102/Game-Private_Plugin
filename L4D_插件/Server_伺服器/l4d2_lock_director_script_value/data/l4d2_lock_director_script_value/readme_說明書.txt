// Valve wiki, To see all director options: https://developer.valvesoftware.com/wiki/Left_4_Dead_2/Scripting/Director_Scripts#DirectorOptions
// L4D2 Offical VScript Decompiled: https://github.com/fbef0102/Official-Vscripts-Decompiled/tree/master/update
// -
// Valve 百科, 查看所有導演系統的參數: https://developer.valvesoftware.com/wiki/Left_4_Dead_2/Scripting/Director_Scripts#DirectorOptions
// L4D2 所有官方圖與突變模式的VScript腳本: https://github.com/fbef0102/Official-Vscripts-Decompiled/tree/master/update

"l4d2_lock_director_script_value"
{
	// 1=Override director script value in this mode, 0=Off in this mode
	// 1=在此模式即時偵測vscript參數並覆蓋數值 0=在此模式不偵測
	"enable" "1"
	
	"ShouldAllowSpecialsWithTank" //<----DirectorOptions name (填入DirectorOptions名稱)
	{
		// 1=Override the value of this director option
		// 1=偵測此導演系統的參數並嘗試修改數值. 0=不偵測
		"enable"		"1"
		
		// 1=Enable debug about this director option in game (careful massiave message and laggy), 0=Disable debug
		// 1=啟動debug (注意會產生大量提示並且卡頓), 0=關閉debug
		"debug"			"0"
		
		// Variable Type of this director option: "float", "int", "string"
		// If you don't know which type, check valve wiki above, or enable "debug" "1" and test in game. It will would print in chatbox
		// -
		// 此導演系統參數的資料型態: "float" = 有小數, "int" = 正整數, "string" = 字串
		// 不知道該填哪個資料型態, 查看上方Valve百科網址 或將 "debug" 改成 "1"，然後在遊戲中觀察提示, 聊天窗口會顯示
		"type"  "int"
		
		// (Condition to change "float", "int")
		// > If the original value is greater than "if_val", then override value
		// < If the original value is less than "if_val", then override value
		// != Just override value
		// = If the original value equal to "if_val", then override value
		// -
		// (修改 "float", "int" 的條件)
		// > 原始值如果大於 "if_val"，則條件成立
		// < 原始值如果小於 "if_val"，則條件成立
		// != 直接條件成立
		// = 原始值如果等於 "if_val"，則條件成立
		"if_symbol"		"!="
		"if_val"		"0"

		// ("float", "int") override value if condition is established
		// ("string") override value
		// -
		// ("float","int") 條件成立，則修改成此數值
		// ("string") 直接修改成此字串
		"set_val"		"0"
	}
	
	// add more if you want
	// 自行新增更多
}