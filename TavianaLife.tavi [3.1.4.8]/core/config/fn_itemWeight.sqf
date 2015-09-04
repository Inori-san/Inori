/*
	File: fn_itemWeight.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Gets the items weight and returns it.
*/
private["_item"];
_item = [_this,0,"",[""]] call BIS_fnc_param;
if(_item == "") exitWith {};

switch (_item) do
{
	case "oilu": {7};
	case "oilp": {6};
	case "heroinu": {6};
	case "heroinp": {4};
	case "cannabis": {4};
	case "marijuana": {3};
	case "apple": {1};
	case "water": {1};
	case "rabbit": {1};
	case "salema": {2};
	case "ornate": {2};
	case "mackerel": {4};
	case "tuna": {6};
	case "mullet": {4};
	case "catshark": {6};
	case "turtle": {6};
	case "fishing": {2};
	case "turtlesoup": {2};
	case "donuts": {1};
	case "coffee": {1};
	case "fuelE": {2};
	case "fuelF": {5};
	case "money": {0};
	case "pickaxe": {2};
	case "copperore": {4};
	case "ironore": {5};
	case "copper_r": {3};
	case "iron_r": {3};
	case "sand": {3};
	case "salt": {3};
	case "salt_r": {1};
	case "glass": {1};
	case "diamond": {4};
	case "diamondc": {2};
	case "cocaine": {6};
	case "cocainep": {4};
	case "spikeStrip": {15};
	case "rock": {6};
	case "cement": {5};
	case "goldbar": {12};
	case "blastingcharge": {15};
	case "boltcutter": {5};
	case "defusekit": {2};
	case "storagesmall": {5};
	case "storagebig": {10};
	
	//NOUVEAUX ITEMS BY TAVIANALIFEFR//
	case "charbonore": {3};
	case "carbonbrute": {4};
	case "fontebrute": {8};
	case "paper": {1};
	case "boisBuche": {4};
	case "CharbonLog": {2};
	case "IronUnrefined": {5};
	case "IronRefined": {3};
	case "PlaqueFonte": {4};
	case "EtainUnrefined": {3};
	case "EtainRefined": {4};
	case "CopperUnrefined": {4};
	case "CopperRefined": {3};
	case "AcierRefined": {5};
	case "BronzeRefined": {5};
	case "Cavier": {2};
	case "CocaineUnprocessed": {6};
	case "CocaineProcessed": {4};
	case "Chanvre": {4};
	case "Cannabis": {3};
	case "VodkaCanna": {3};
	case "Vodka": {3};
	case "Ble": {2};
	case "Farine": {2};
	case "patate": {1};
	case "seigle": {1};
	case "betterave": {1};
	case "MoutFerm": {1};
	case "distillat": {2};
	case "SaltUnrefined": {3};
	case "SaltRefined": {1};
	case "OilUnprocessed": {6};
	case "GazOil": {5};
	case "PvcRefined": {5};
	case "Caout": {4};
	case "WaterGaz"! {1};
	case "Sugar": {1};
	case "Colora": {1};
	case "Cafeine": {1};
	case "TaviCo": {3};
	case "FakeMoney": {1}
	default {1};
};
