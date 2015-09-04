/*
	File: fn_varHandle.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Master handler for getting a variables name, short name, etc.
*/
private["_var","_mode"];
_var = [_this,0,"",[""]] call BIS_fnc_param;
_mode = [_this,1,-1,[0]] call BIS_fnc_param;
if(_var == "" OR _mode == -1) exitWith {""};

switch (_mode) do
{
	case 0:
	{
		switch (_var) do
		{
			case "oilu": {"life_inv_oilu"};
			case "oilp": {"life_inv_oilp"};
			case "heroinu": {"life_inv_heroinu"};
			case "heroinp": {"life_inv_heroinp"};
			case "cannabis": {"life_inv_cannabis"};
			case "marijuana": {"life_inv_marijuana"};
			case "apple": {"life_inv_apple"};
			case "water": {"life_inv_water"};
			case "rabbit": {"life_inv_rabbit"};
			case "salema": {"life_inv_salema"};
			case "ornate": {"life_inv_ornate"};
			case "mackerel": {"life_inv_mackerel"};
			case "tuna": {"life_inv_tuna"};
			case "mullet": {"life_inv_mullet"};
			case "catshark": {"life_inv_catshark"};
			case "turtle": {"life_inv_turtle"};
			case "fishing": {"life_inv_fishingpoles"};
			case "coffee": {"life_inv_coffee"};
			case "turtlesoup": {"life_inv_turtlesoup"};
			case "donuts": {"life_inv_donuts"};
			case "fuelE": {"life_inv_fuelE"};
			case "fuelF": {"life_inv_fuelF"};
			case "money": {"life_cash"};
			case "pickaxe": {"life_inv_pickaxe"};
			case "copperore": {"life_inv_copperore"};
			case "ironore": {"life_inv_ironore"};
			case "iron_r": {"life_inv_ironr"};
			case "copper_r": {"life_inv_copperr"};
			case "salt": {"life_inv_salt"};
			case "salt_r": {"life_inv_saltr"};
			case "sand": {"life_inv_sand"};
			case "glass": {"life_inv_glass"};
			case "tbacon": {"life_inv_tbacon"};
			case "lockpick": {"life_inv_lockpick"};
			case "redgull": {"life_inv_redgull"};
			case "peach": {"life_inv_peach"};
			case "diamond": {"life_inv_diamond"};
			case "diamondc": {"life_inv_diamondr"};
			case "cocaine": {"life_inv_coke"};
			case "cocainep": {"life_inv_cokep"};
			case "spikeStrip": {"life_inv_spikeStrip"};
			case "cement": {"life_inv_cement"};
			case "rock": {"life_inv_rock"};
			case "goldbar": {"life_inv_goldbar"};
			case "blastingcharge": {"life_inv_blastingcharge"};
			case "boltcutter": {"life_inv_boltcutter"};
			case "defusekit": {"life_inv_defusekit"};
			case "storagesmall": {"life_inv_storagesmall"};
			case "storagebig": {"life_inv_storagebig"};
			
			//Nouveaux Objets BY TavianaLife //
			case "charbonore": {"life_inv_charbonore"};
			case "carbonebrute": {"life_inv_carbonebrute"};
			case "fontebrute": {"life_inv_fontebrute"};
			case "paper": {"life_inv_paper"};
			case "boisBuche": {"life_inv_boisBuche"};
			case "charbonlog": {"life_inv_charbonlog"};
			case "ironUnrefined": {"life_inv_IronUnrefined"};
			case "IronRefined": {"life_inv_IronRefined"};
			case "PlaqueFonte": {"life_inv_PlaqueFonte"};
			case "EtainUnrefined": {"life_inv_EtainUnrefined"};
			case "EtainRefined": {"life_inv_EtainRefined"};
			case "CopperUnrefined": {"life_inv_CopperUnrefined"};
			case "CopperRefined": {"life_inv_CopperRefined"};
			case "AcierRefined": {"life_inv_AcierRefined"};
			case "BronzeRefined": {"life_inv_BronzeRefined"};
			case "Caviar": {"life_inv_Cavier"};
			case "CocaineUnprocessed": {"life_inv_CocaineUnprocessed"};
			case "CocaineProcessed": {"life_inv_CocaineProcessed"};
			case "Chanvre": {"life_inv_Chanvre"};
			case "Cannabis": {"life_inv_Cannabis"};
			case "VodkaCanna": {"life_inv_VodkaCanna"};
			case "Vodka": {"life_inv_Vodka"};
			case "Ble": {"life_inv_Ble"};
			case "Farine": {"life_inv_Farine"};
			case "Patate": {"life_inv_Patate"};
			case "Seigle": {"life_inv_Seigle"};
			case "betterave": {"life_inv_betterave"};
			case "MoutFerm": {"life_inv_MoutFerm"};
			case "distillat": {"life_inv_distillat"};
			case "SaltUnrefined": {"life_inv_SaltUnrefined"};
			case "SaltRefined": {"life_inv_SaltRefined"};
			case "OilUnprocessed": {"life_inv_OilUnprocessed"};
			case "GazOil": {"life_inv_GazOil"};
			case "PvcRefined": {"life_inv_PvcRefined"};
			case "Caout": {"life_inv_Caout"};
			case "WaterGaz": {"life_inv_WaterGaz"};
			case "sugar": {"life_inv_sugar"};
			case "colora": {"life_inv_colora"};
			case "cafeine": {"life_inv_cafeine"};
			case "TaviCo": {"life_inv_TaviCo"};
			case "FakeMoney": {"life_inv_FakeMoney"};
		};
	};
	
	case 1:
	{
		switch (_var) do
		{
			case "life_inv_oilu": {"oilu"};
			case "life_inv_oilp": {"oilp"};
			case "life_inv_heroinu": {"heroinu"};
			case "life_inv_heroinp": {"heroinp"};
			case "life_inv_cannabis": {"cannabis"};
			case "life_inv_marijuana": {"marijuana"};
			case "life_inv_apple": {"apple"};
			case "life_inv_water": {"water"};
			case "life_inv_rabbit": {"rabbit"};
			case "life_inv_salema": {"salema"};
			case "life_inv_ornate": {"ornate"};
			case "life_inv_mackerel": {"mackerel"};
			case "life_inv_tuna": {"tuna"};
			case "life_inv_mullet": {"mullet"};
			case "life_inv_catshark": {"catshark"};
			case "life_inv_turtle": {"turtle"};
			case "life_inv_fishingpoles": {"fishing"};
			case "life_inv_coffee": {"coffee"};
			case "life_inv_turtlesoup": {"turtlesoup"};
			case "life_inv_donuts": {"donuts"};
			case "life_inv_fuelE": {"fuelE"};
			case "life_inv_fuelF": {"fuelF"};
			case "life_cash": {"money"};
			case "life_inv_pickaxe": {"pickaxe"};
			case "life_inv_copperore": {"copperore"};
			case "life_inv_ironore": {"ironore"};
			case "life_inv_ironr": {"iron_r"};
			case "life_inv_copperr": {"copper_r"};
			case "life_inv_sand": {"sand"};
			case "life_inv_salt": {"salt"};
			case "life_inv_glass": {"glass"};
			case "life_inv_redgull": {"redgull"};
			case "life_inv_lockpick": {"lockpick"};
			case "life_inv_tbacon": {"tbacon"};
			case "life_inv_peach": {"peach"};
			case "life_inv_diamond": {"diamond"};
			case "life_inv_diamondr": {"diamondc"};
			case "life_inv_saltr": {"salt_r"};
			case "life_inv_coke": {"cocaine"};
			case "life_inv_cokep": {"cocainep"};
			case "life_inv_spikeStrip": {"spikeStrip"};
			case "life_inv_cement": {"cement"};
			case "life_inv_rock": {"rock"};
			case "life_inv_goldbar": {"goldbar"};
			case "life_inv_blastingcharge": {"blastingcharge"};
			case "life_inv_boltcutter": {"boltcutter"};
			case "life_inv_defusekit": {"defusekit"};
			case "life_inv_storagesmall": {"storagesmall"};
			case "life_inv_storagebig": {"storagebig"};
			
			//Nouveaux Objets by TavianaLife//
			case "life_inv_charbonore": {"charbonore"};
			case "life_inv_carbonebrute": {"carbonebrute"};
			case "life_inv_fontebrute": {"fontebrute"};
			case "life_inv_paper": {"paper"};
			case "life_inv_boisBuche": {"boisBuche"};
			case "life_inv_charbonlog": {"charbonlog"};
			case "life_inv_ironUnrefined": {"IronUnrefined"};
			case "life_inv_IronRefined": {"IronRefined"};
			case "life_inv_PlaqueFonte": {"PlaqueFonte"};
			case "life_inv_EtainUnrefined": {"EtainUnrefined"};
			case "life_inv_EtainRefined": {"EtainRefined"};
			case "life_inv_CopperUnrefined": {"CopperUnrefined"};
			case "life_inv_CopperRefined": {"CopperRefined"};
			case "life_inv_AcierRefined": {"AcierRefined"};
			case "life_inv_BronzeRefined": {"BronzeRefined"};
			case "life_inv_Caviar": {"Cavier"};
			case "life_inv_CocaineUnprocessed": {"CocaineUnprocessed"};
			case "life_inv_CocaineProcessed": {"CocaineProcessed"};
			case "life_inv_Chanvre": {"Chanvre"};
			case "life_inv_Cannabis": {"Cannabis"};
			case "life_inv_VodkaCanna": {"VodkaCanna"};
			case "life_inv_Vodka": {"Vodka"};
			case "life_inv_Ble": {"Ble"};
			case "life_inv_Farine": {"Farine"};
			case "life_inv_Patate": {"Patate"};
			case "life_inv_Seigle": {"Seigle"};
			case "life_inv_betterave": {"betterave"};
			case "life_inv_MoutFerm": {"MoutFerm"};
			case "life_inv_distillat": {"distillat"};
			case "life_inv_SaltUnrefined": {"SaltUnrefined"};
			case "life_inv_SaltRefined": {"SaltRefined"};
			case "life_inv_OilUnprocessed": {"OilUnprocessed"};
			case "life_inv_GazOil": {"GazOil"};
			case "life_inv_PvcRefined": {"PvcRefined"};
			case "life_inv_Caout": {"Caout"};
			case "life_inv_WaterGaz": {"WaterGaz"};
			case "life_inv_sugar": {"sugar"};
			case "life_inv_colora": {"colora"};
			case "life_inv_cafeine": {"cafeine"};
			case "life_inv_TaviCo": {"TaviCo"};
			case "life_inv_FakeMoney": {"FakeMoney"};
		};
	};
};
