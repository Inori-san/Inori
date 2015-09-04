/*
	File: fn_varToStr.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Takes the long-name (variable) and returns a display name for our
	virtual item.
*/
private["_var"];
_var = [_this,0,"",[""]] call BIS_fnc_param;
if(_var == "") exitWith {""};

switch (_var) do
{
	//Virtual Inventory Items
	case "life_inv_oilu": {(localize "STR_Item_OilU")};
	case "life_inv_oilp": {(localize "STR_Item_OilP")};
	case "life_inv_heroinu": {(localize "STR_Item_HeroinU")};
	case "life_inv_heroinp": {(localize "STR_Item_HeroinP")};
	case "life_inv_cannabis": {(localize "STR_Item_Cannabis")};
	case "life_inv_marijuana": {(localize "STR_Item_Marijuana")};
	case "life_inv_apple": {(localize "STR_Item_Apple")};
	case "life_inv_rabbit": {(localize "STR_Item_RabbitMeat")};
	case "life_inv_salema": {(localize "STR_Item_SalemaMeat")};
	case "life_inv_ornate": {(localize "STR_Item_OrnateMeat")};
	case "life_inv_mackerel": {(localize "STR_Item_MackerelMeat")};
	case "life_inv_tuna": {(localize "STR_Item_TunaMeat")};
	case "life_inv_mullet": {(localize "STR_Item_MulletMeat")};
	case "life_inv_catshark": {(localize "STR_Item_CatSharkMeat")};
	case "life_inv_turtle": {(localize "STR_Item_TurtleMeat")};
	case "life_inv_fishingpoles": {(localize "STR_Item_FishingPole")};
	case "life_inv_water": {(localize "STR_Item_WaterBottle")};
	case "life_inv_coffee": {(localize "STR_Item_Coffee")};
	case "life_inv_turtlesoup": {(localize "STR_Item_TurtleSoup")};
	case "life_inv_donuts": {(localize "STR_Item_Donuts")};
	case "life_inv_fuelE": {(localize "STR_Item_FuelE")};
	case "life_inv_fuelF": {(localize "STR_Item_FuelF")};
	case "life_inv_pickaxe": {(localize "STR_Item_Pickaxe")};
	case "life_inv_copperore": {(localize "STR_Item_CopperOre")};
	case "life_inv_ironore": {(localize "STR_Item_IronOre")};
	case "life_inv_ironr": {(localize "STR_Item_IronIngot")};
	case "life_inv_copperr": {(localize "STR_Item_CopperIngot")};
	case "life_inv_sand": {(localize "STR_Item_Sand")};
	case "life_inv_salt": {(localize "STR_Item_Salt")};
	case "life_inv_saltr": {(localize "STR_Item_SaltR")};
	case "life_inv_glass": {(localize "STR_Item_Glass")};
	case "life_inv_diamond": {(localize "STR_Item_DiamondU")};
	case "life_inv_diamondr": {(localize "STR_Item_DiamondC")};
	case "life_inv_tbacon": {(localize "STR_Item_TBacon")};
	case "life_inv_redgull": {(localize "STR_Item_RedGull")};
	case "life_inv_lockpick": {(localize "STR_Item_Lockpick")};
	case "life_inv_peach": {(localize "STR_Item_Peach")};
	case "life_inv_coke": {(localize "STR_Item_CocaineU")};
	case "life_inv_cokep": {(localize "STR_Item_CocaineP")};
	case "life_inv_spikeStrip": {(localize "STR_Item_SpikeStrip")};
	case "life_inv_rock": {(localize "STR_Item_Rock")};
	case "life_inv_cement": {(localize "STR_Item_CementBag")};
	case "life_inv_goldbar": {(localize "STR_Item_GoldBar")};
	case "life_inv_blastingcharge": {(localize "STR_Item_BCharge")};
	case "life_inv_boltcutter": {(localize "STR_Item_BCutter")};
	case "life_inv_defusekit": {(localize "STR_Item_DefuseKit")};
	case "life_inv_storagesmall": {(localize "STR_Item_StorageBS")};
	case "life_inv_storagebig": {(localize "STR_Item_StorageBL")};
	
	//Nouveaux Objets by TavianaLife FR //
	case "life_inv_charbonore": {(localize "STR_Item_CharbonOre")};
	case "life_inv_carbonebrute": {(localize "STR_Item_CarboneBrute")};
	case "life_inv_fontebrute": {(localise "STR_Item_FonteBrute")};
	case "life_inv_paper": {(localise "STR_Item_Paper")};
	case "life_inv_BoisBuche": {(localise "STR_Item_BoisBuche")};
	case "life_inv_charbonlog": {(localise "STR_Item_CharbonLog")};
	case "life_inv_IronUnrefined": {(localise "STR_Item_IronUnrefined")};
	case "life_inv_IronRefined": {(localise "STR_Item_IronRefined")};
	case "life_inv_PlaqueFonte": {(localise "STR_Item_PlaqueFonte")};
	case "life_inv_EtainUnrefined": {(localise "STR_Item_EtainUnrefined")};
	case "life_inv_EtainRefined": {(localise "STR_Item_EtainRefined")};
	case "life_inv_CopperUnrefined": {(localise "STR_Item_CopperUnrefined")};
	case "life_inv_CopperRefined": {(localise "STR_Item_CopperRefined")};
	case "life_inv_AcierRefined": {(localise "STR_Item_AcierRefined")};
	case "life_inv_BronzeRefined": {(localise "STR_Item_BronzeRefined")};
	case "life_inv_Caviar": {(localise "STR_Item_Cavier")};
	case "life_inv_CocaineUnprocessed": {(localise "STR_Item_CocaineUnprocessed")};
	case "life_inv_CocaineProcessed": {(localise "STR_Item_CocaineProcessed")};
	case "life_inv_Chanvre": {(localise "STR_Item_Chanvre")};
	case "life_inv_Cannabis": {(localise "STR_Item_Cannabis")};
	case "life_inv_VodkaCanna": {(localise "STR_Item_VodkaCanna")};
	case "life_inv_Vodka": {(localise "STR_Item_Vodka")};
	case "life_inv_Ble": {(localise "STR_Item_Ble")};
	case "life_inv_Farine": {(localise "STR_Item_Farine")};
	case "life_inv_Patate": {(localise "STR_Item_Patate")};
	case "life_inv_Seigle": {(localise "STR_Item_Seigle")};
	case "life_inv_betterave": {(localise "STR_Item_betterave")};
	case "life_inv_MoutFerm": {(localise "STR_Item_MoutFerm")};
	case "life_inv_distillat": {(localise "STR_Item_Distillat")};
	case "life_inv_SaltUnrefined": {(localise "STR_Item_SaltUnrefined")};
	case "life_inv_SaltRefined": {(localise "STR_Item_SaltRefined")};
	case "life_inv_OilUnprocessed": {(localise "STR_Item_OilUnprocessed")};
	case "life_inv_GazOil": {(localise "STR_Item_GazOil")};
	case "life_inv_PvcRefined": {(localise "STR_Item_PvcRefined")};
	case "life_inv_Caout": {(localise "STR_Item_Caout")};
	case "life_inv_WaterGaz": {(localise "STR_Item_WaterGaz")};
	case "life_inv_sugar": {(localise "STR_Item_Sugar")};
	case "life_inv_colora": {(localise "STR_Item_Colora")};
	case "life_inv_cafeine": {(localise "STR_Item_cafeine")};
	case "life_inv_TaviCo": {(localise "STR_Item_TaviCo")};
	case "life_inv_FakeMoney": {(localise "STR_Item_FakeMoney")};
	
	//License Block
	case "license_civ_driver": {(localize "STR_License_Driver")};
	case "license_civ_air": {(localize "STR_License_Pilot")};
	case "license_civ_heroin": {(localize "STR_License_Heroin")};
	case "license_civ_oil": {(localize "STR_License_Oil")};
	case "license_civ_dive": {(localize "STR_License_Diving")};
	case "license_civ_boat": {(localize "STR_License_Boat")};
	case "license_civ_gun": {(localize "STR_License_Firearm")};
	case "license_cop_air": {(localize "STR_License_Pilot")};
	case "license_cop_swat": {(localize "STR_License_Swat")};
	case "license_cop_cg": {(localize "STR_License_CG")};
	case "license_civ_rebel": {(localize "STR_License_Rebel")};
	case "license_civ_truck": {(localize "STR_License_Truck")};
	case "license_civ_diamond": {(localize "STR_License_Diamond")};
	case "license_civ_copper": {(localize "STR_License_Copper")};
	case "license_civ_iron": {(localize "STR_License_Iron")};
	case "license_civ_sand": {(localize "STR_License_Sand")};
	case "license_civ_salt": {(localize "STR_License_Salt")};
	case "license_civ_coke": {(localize "STR_License_Cocaine")};
	case "license_civ_marijuana": {(localize "STR_License_Marijuana")};
	case "license_civ_cement": {(localize "STR_License_Cement")};
	case "license_med_air": {(localize "STR_License_Pilot")};
	case "license_civ_home": {(localize "STR_License_Home")};
};
