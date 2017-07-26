class CFGPatches
{
	class SOG_PACK
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F"};

	};
};

class CFGVehicles
{
	class ContainerSupply;
	class ReammoBox;
	class 111_Bag_Base: ReammoBox
	{
		author = "Krossin & Dagger";
		mapSize = 2;
		_generalMacro = "Bag_Base";
		scope = 1;
		class TransportMagazines{};
		class TransportWeapons{};
		isbackpack = 1;
		reversed = 1;
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Backpacks";
		vehicleClass = "Backpacks";
		allowedSlots[] = {901};
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Small";
		displayName = "$STR_A3_Bag_Base0";
		picture = "\A3\Weapons_F\Ammoboxes\Bags\data\ui\backpack_CA.paa";
		icon = "iconBackpack";
		transportMaxWeapons = 1;
		transportMaxMagazines = 20;
		class DestructionEffects{};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_small_co.paa"};
		maximumLoad = 0;
		side = 3;
	};
	//---------------------------------Assault Pack----------------------------------------------//
	class 111_B_AssaultPack_Base: 111_Bag_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		mapSize = 0.45;
		_generalMacro = "B_AssaultPack_Base";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Compact";
		hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_compact_khk_co.paa"};
		maximumLoad = 160;
		mass = 20;
	};

	class 111_B_AssaultPack_blk: 111_B_AssaultPack_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "B_AssaultPack_blk";
		scope = 1;
		picture = "\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_blk_ca.paa";
		displayName = "$STR_A3_B_AssaultPack_blk0";
		hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_compact_blk_co.paa"};
	};
	
	//------------------------------------------Kitbag-----------------------------------------//
	class 111_B_Kitbag_Base: 111_Bag_Base
	{
		author = "Krossin";
		mapSize = 0.51;
		_generalMacro = "B_Kitbag_Base";
		picture = "\A3\Weapons_F\ammoboxes\bags\data\ui\icon_B_C_Kitbag_rgr";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_fast_rgr_co.paa"};
		maximumLoad = 320;
		mass = 50;
	};
	
	class 111_sog_fast_blk: 111_B_Kitbag_Base
	{
		author = "Krossin";
		scope = 2;
		picture = "\A3\Weapons_F\ammoboxes\bags\data\ui\icon_B_C_Kitbag_rgr";
		displayName = "111th SOG Kitbag (BLK)";
		hiddenSelectionsTextures[] = {"\111_SOG_BACKPACKS\data\backpack_fast_blk_co.paa"};
	};
	
	class 111_sog_fast_blk_urb: 111_B_Kitbag_Base
	{
		author = "Krossin";
		scope = 2;
		picture = "\A3\Weapons_F\ammoboxes\bags\data\ui\icon_B_C_Kitbag_rgr";
		displayName = "111th SOG Kitbag (BLK URB)";
		hiddenSelectionsTextures[] = {"\111_SOG_BACKPACKS\data\111_sog_fast_pack_blk_urb_co.paa"};
	};
	
	class 111_sog_fast_blk_urb_air: 111_B_Kitbag_Base
	{
		author = "Krossin";
		scope = 2;
		picture = "\A3\Weapons_F\ammoboxes\bags\data\ui\icon_B_C_Kitbag_rgr";
		displayName = "111th SOG Airman Kitbag (BLK URB)";
		hiddenSelectionsTextures[] = {"\111_SOG_BACKPACKS\data\111_sog_fast_pack_blk_urb_airM_co.paa"};
	};
	
	class 111_sog_krossin_fast_blk_urb: 111_B_Kitbag_Base
	{
		author = "Krossin";
		scope = 2;
		picture = "\A3\Weapons_F\ammoboxes\bags\data\ui\icon_B_C_Kitbag_rgr";
		displayName = "111th KROSSIN Kitbag (BLK URB)";
		hiddenSelectionsTextures[] = {"\111_SOG_BACKPACKS\data\111_sog_fast_pack_blk_urb_kross_co.paa"};
	};
	
	class 111_sog_dagger_fast_blk_urb: 111_B_Kitbag_Base
	{
		author = "Krossin";
		scope = 2;
		picture = "\A3\Weapons_F\ammoboxes\bags\data\ui\icon_B_C_Kitbag_rgr";
		displayName = "111th DAGGER Kitbag (BLK URB)";
		hiddenSelectionsTextures[] = {"\111_SOG_BACKPACKS\data\111_sog_fast_pack_blk_urb_dagg_co.paa"};
	};
	
	class 111_sog_reaver_fast_blk_urb: 111_B_Kitbag_Base
	{
		author = "Krossin";
		scope = 2;
		picture = "\A3\Weapons_F\ammoboxes\bags\data\ui\icon_B_C_Kitbag_rgr";
		displayName = "111th REAVER Kitbag (BLK URB)";
		hiddenSelectionsTextures[] = {"\111_SOG_BACKPACKS\data\111_sog_fast_pack_blk_urb_reav_co.paa"};
	};
	
	class 111_sog_shrike_fast_blk_urb: 111_B_Kitbag_Base
	{
		author = "Krossin";
		scope = 2;
		picture = "\A3\Weapons_F\ammoboxes\bags\data\ui\icon_B_C_Kitbag_rgr";
		displayName = "111th SHRIKE Kitbag (BLK URB)";
		hiddenSelectionsTextures[] = {"\111_SOG_BACKPACKS\data\111_sog_fast_pack_blk_urb_shrike_co.paa"};
	};
	
	class 111_sog_group_fast_blk_urb: 111_B_Kitbag_Base
	{
		author = "Krossin";
		scope = 2;
		picture = "\A3\Weapons_F\ammoboxes\bags\data\ui\icon_B_C_Kitbag_rgr";
		displayName = "111th SOG GROUP Kitbag (BLK URB)";
		hiddenSelectionsTextures[] = {"\111_SOG_BACKPACKS\data\111_sog_fast_pack_blk_urb_grp_co.paa"};
	};
	
	class 111_sog_frost_fast_blk_urb: 111_B_Kitbag_Base
	{
		author = "Krossin";
		scope = 2;
		picture = "\A3\Weapons_F\ammoboxes\bags\data\ui\icon_B_C_Kitbag_rgr";
		displayName = "111th FROST Kitbag (BLK URB)";
		hiddenSelectionsTextures[] = {"\111_SOG_BACKPACKS\data\111_sog_fast_pack_blk_urb_frost_co.paa"};
	};
	
	//-----------------------------------Carry All-----------------------------------//
	class 111_B_Carryall_Base: 111_Bag_Base
	{
		author = "Krossin & Dagger";
		mapSize = 0.55;
		_generalMacro = "B_Carryall_Base";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Tortila";
		picture = "\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Tortila_khk.paa";
		hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_tortila_khk_co.paa"};
		maximumLoad = 480;
		mass = 60;
	};
	
	class 111_SOG_Carryall_BASE: 111_B_Carryall_Base
	{
		author = "Krossin & Dagger";
		scope = 2;
		displayName = "111th SOG CarryAll (BLK)";
		picture = "\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_b_c_tortila_blk.paa";
		hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_tortila_blk_co.paa"};
	};
	
	class 111_SOG_Carryall_Green: 111_B_Carryall_Base
	{
		author = "Krossin & Dagger";
		scope = 2;
		displayName = "111th SOG CarryAll (GRN)";
		picture = "\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_b_c_tortila_khk.paa";
		hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_tortila_oli_co.paa"};
	};
	
	class 111_SOG_Carryall_Khk: 111_B_Carryall_Base
	{
		author = "Krossin & Dagger";
		scope = 2;
		displayName = "111th SOG CarryAll (KHK)";
		picture = "\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_b_c_tortila_khk.paa";
		hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_tortila_khk_co.paa"};
	};
	
	class 111_SOG_Carryall_Tan: 111_B_Carryall_Base
	{
		author = "Krossin & Dagger";
		scope = 2;
		displayName = "111th SOG CarryAll (Tan)";
		picture = "\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_b_c_tortila_cbr.paa";
		hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_tortila_cbr_co.paa"};
	};
	
	class 111_SOG_Carryall_Tan2: 111_B_Carryall_Base
	{
		author = "Krossin & Dagger";
		scope = 2;
		displayName = "111th SOG CarryAll (Tan)";
		picture = "\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_b_c_tortila_cbr.paa";
		hiddenSelectionsTextures[] = {"\111_SOG_BACKPACKS\data\111_backpack_tortila_tan_co.paa"};
	};
	
	class 111_SOG_Carryall_WHT: 111_B_Carryall_Base
	{
		author = "Krossin & Dagger";
		scope = 2;
		displayName = "111th SOG CarryAll (WHT)";
		picture = "\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_b_c_tortila_cbr.paa";
		hiddenSelectionsTextures[] = {"\111_SOG_BACKPACKS\data\111_backpack_tortila_wht_co.paa"};
	};
	
	class 111_SOG_Carryall_WDL: 111_B_Carryall_Base
	{
		author = "Krossin & Dagger";
		scope = 2;
		displayName = "111th SOG CarryAll (WDL)";
		picture = "\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_b_c_tortila_cbr.paa";
		hiddenSelectionsTextures[] = {"\111_SOG_BACKPACKS\data\111_backpack_tortila_wdl_co.paa"};
	};
	
	class 111_SOG_Carryall_BLK: 111_B_Carryall_Base
	{
		author = "Krossin & Dagger";
		scope = 2;
		displayName = "111th SOG CarryAll (BLK2)";
		picture = "\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_b_c_tortila_cbr.paa";
		hiddenSelectionsTextures[] = {"\111_SOG_BACKPACKS\data\111_backpack_tortila_blk_co.paa"};
	};
};